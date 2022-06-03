#pragma once
#include "Aircraft.h"
class BluePlane : public Aircraft
{
public:

	BluePlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL);

	void drawPlane();

	void movePlane();

	void loseHealth();

	//int flag;

	~BluePlane();


};

