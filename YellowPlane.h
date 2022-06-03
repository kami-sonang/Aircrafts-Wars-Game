#pragma once
#include "Aircraft.h"
class YellowPlane : public Aircraft
{
public:
	YellowPlane(int x, int y, int hp, int speed,LPCTSTR imgURL, LPCTSTR imgURYL);

	void drawPlane();

	void movePlane();

	void loseHealth();

	//int flag;

	~YellowPlane();

};

