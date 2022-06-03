#pragma once
#include "Aircraft.h"
class PurplePlane : public Aircraft
{
public :
	PurplePlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL);

	void drawPlane();

	void movePlane();

	void loseHealth();

	//int flag;

	~PurplePlane();
};

