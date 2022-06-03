#include "BluePlane.h"


BluePlane::BluePlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->hp = hp;
	this->speed = speed;
	loadimage(m_img, imgURL);
	loadimage(m_img + 1, imgURYL);
}

void BluePlane::drawPlane()
{
	putimage(x, y, m_img + 1, SRCAND);//放入掩码图

	putimage(x, y, m_img, SRCPAINT);//放入原图
}

void BluePlane::movePlane()
{
	this->y = this->y + this->speed;
}

void BluePlane::loseHealth()
{
	this->hp = this->hp - 1;
}

BluePlane::~BluePlane()
{
	ContainBullet.clear();
}
