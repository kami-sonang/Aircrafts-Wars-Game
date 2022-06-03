#include "PurplePlane.h"

PurplePlane::PurplePlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->hp = hp;
	this->speed = speed;
	loadimage(m_img, imgURL);
	loadimage(m_img + 1, imgURYL);
}

void PurplePlane::drawPlane()
{
	putimage(x, y, m_img + 1, SRCAND);//放入掩码图

	putimage(x, y, m_img, SRCPAINT);//放入原图
}

void PurplePlane::movePlane()
{
	this->y = this->y + this->speed;
}

void PurplePlane::loseHealth()
{
	this->hp = this->hp - 1;
}

PurplePlane::~PurplePlane()
{
	ContainBullet.clear();
}
