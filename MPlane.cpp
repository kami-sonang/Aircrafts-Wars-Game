#include "MPlane.h"

MPlane::MPlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->hp = hp;
	this->speed = speed;
	loadimage(m_img, imgURL);
	loadimage(m_img + 1, imgURYL);
}

void MPlane::drawPlane()
{
	putimage(x, y, m_img + 1, SRCAND);//放入掩码图

	putimage(x, y, m_img, SRCPAINT);//放入原图
}

void MPlane::movePlane()
{
}

void MPlane::ControlMove(char key)
{
	switch (key)
	{
	case 'W':
	case 'w':
	case 72:
		if (this->y >= 0)
		{
			this->y -= this->speed;
		}
		break;
	case 'S':
	case 's':
	case 80:
		if (this->y <= 850)
		{
			this->y += this->speed;
		}
		break;
	case 'a':
	case 'A':
	case 75:
		if (this->x >= 20)
		{
			this->x -= this->speed;
		}
		break;
	case 'd':
	case 'D':
	case 77:
		if (this->x <= 462)
		{
			this->x += this->speed;
		}
		break;
	default:
		break;
	}
}

void MPlane::loseHealth()
{
	this->hp = this->hp - 1;
}

MPlane::~MPlane()
{
	ContainBullet.clear();
}
