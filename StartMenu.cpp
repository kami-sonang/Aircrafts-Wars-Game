#include"StartMenu.h"
#include "Level.h"

bool s = true;

void BButtonClickAction()
{
	s = false;
	cleardevice();
}

void EButtonClickAction()
{
	closegraph();
	exit(0);
}

void Menu()
{
	MOUSEMSG msg;
	Button BButon(193,237,177,96, L"resource\\BeginButtomURL.jpg", L"resource\\URLY.jpg");
	Button EButon(193,711,177, 96, L"resource\\BeginButtomURL.jpg", L"resource\\URLY.jpg");
	SetBackground();

	BButon.draw();
	EButon.draw();

	BButon.ClickAction = BButtonClickAction;
	EButon.ClickAction = EButtonClickAction;

	while (s)
	{
		msg = GetMouseMsg();
		switch (msg.uMsg)
		{
		case WM_LBUTTONDOWN:
			BButon.RecieveEvent(msg.x, msg.y);
			EButon.RecieveEvent(msg.x, msg.y);
			break;
		}
	}


}



