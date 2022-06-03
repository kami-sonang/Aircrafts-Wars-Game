#pragma once
#include "CommonHead.h"
#include "Bullet.h"
class Aircraft
{
public:

	virtual void drawPlane() = 0;

	virtual void movePlane() = 0;

	virtual void loseHealth() = 0;


	int x;
	int y;
	int speed;
	int hp;
	IMAGE m_img[2];
	list<Bullet*> ContainBullet;
};

