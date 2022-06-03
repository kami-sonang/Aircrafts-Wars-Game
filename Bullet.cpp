#include "Bullet.h"

Bullet::Bullet(int x, int y, int speed, LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->speed = speed;
	loadimage(m_img, imgURL);
	loadimage(m_img + 1, imgURYL);
}

void Bullet::drawBullet()
{
	putimage(x, y, m_img + 1, SRCAND);//放入掩码图

	putimage(x, y, m_img, SRCPAINT);//放入原图
}

void Bullet::moveBullet()
{
	this->y = this->y - this->speed; 
}
