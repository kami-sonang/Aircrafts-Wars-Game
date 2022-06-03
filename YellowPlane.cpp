#include "YellowPlane.h"

YellowPlane::YellowPlane(int x, int y, int hp, int speed,LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->hp = hp;
	this->speed = speed;
	loadimage(m_img, imgURL);
	loadimage(m_img+1, imgURYL);
}

void YellowPlane::drawPlane()
{
	putimage(x, y, m_img + 1, SRCAND);//放入掩码图

	putimage(x, y, m_img, SRCPAINT);//放入原图
}

void YellowPlane::movePlane()
{
	if (this->y >= 300)
	{
		if (this->x > 300)
		{
			this->x = this->x - this->speed;
		}

		if (this->x < 281)
		{
			this->x = this->x + this->speed;
		}
	}

	this->y = this->y + this->speed;
}

void YellowPlane::loseHealth()
{
	if (hp > 0)
		hp--;
}

YellowPlane::~YellowPlane()
{
	ContainBullet.clear();
}
