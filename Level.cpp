
#include"Level.h"



void CreateEnemy(list<Aircraft*>& aircraft, Aircraft*& Enemy)
{
	if (aircraft.size() < 5)
	{
		int pos = rand() % 3;

		switch (pos)
		{
		case 0:
			Enemy = new YellowPlane(rand() % 3 * 280, -100, 2, 2, Yellow[0], Yellow[1]);
			break;
		case 1:
			Enemy = new BluePlane(rand() % 4 * 120, -100, 3, 3, Blue[0], Blue[1]);
			break;
		case 2:
			Enemy = new PurplePlane(rand() % 5 * 140, -100,1,10, Purple[0], Purple[1]);
			break;
		default:
			break;
		}

		aircraft.push_back(Enemy);

	}
}

void SetBackground()
{
	//IMAGE background;
	loadimage(NULL, L"resource\\Background.jpg");
	//putimage(0, 0, &background);
}

void GetControl(MPlane* &MainPlane)
{
	if (_kbhit())
	{
		char userKey = _getch();
		MainPlane->ControlMove(userKey);
		if (userKey == ' ')
		{
			Bullet* pBullet = new Bullet(MainPlane->x + 40, MainPlane->y - 25, 5, PlaneBullet[0], PlaneBullet[1]);
			MainPlane->ContainBullet.push_back(pBullet);
		}

	}
}

void level1()
{

	srand((unsigned int)time(NULL));

	MPlane* MainPlane = new MPlane(300, 870, 5, 30, Plane[0], Plane[1]);

	list<Aircraft*>aircraft;
	Aircraft* Enemy;

	while (1)
	{
		BeginBatchDraw();

		SetBackground();

		CreateEnemy(aircraft, Enemy);

		MainPlane->drawPlane();

		GetControl(MainPlane);


		for (auto Enemy : aircraft)
		{
			Enemy->drawPlane();
			Enemy->movePlane();
		}

		for (auto p : MainPlane->ContainBullet)
		{
			p->drawBullet();
			p->moveBullet();
		}

		Sleep(1);

		EndBatchDraw();
	}
	
}
