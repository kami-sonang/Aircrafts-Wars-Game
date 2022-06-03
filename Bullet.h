#pragma once
#include "CommonHead.h"
class Bullet
{
public:

	Bullet(int x,int y,int speed,LPCTSTR imgURL, LPCTSTR imgURYL);

	void drawBullet();

	void moveBullet();

	int x;
	int y;
	int speed;
	IMAGE m_img[2];
};

