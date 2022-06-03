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
	putimage(x, y, m_img + 1, SRCAND);//��������ͼ

	putimage(x, y, m_img, SRCPAINT);//����ԭͼ
}

void Bullet::moveBullet()
{
	this->y = this->y - this->speed; 
}
