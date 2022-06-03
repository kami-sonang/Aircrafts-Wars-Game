#pragma once
#include "Aircraft.h"
class MPlane : public Aircraft
{
public:
	
	MPlane(int x, int y, int hp, int speed, LPCTSTR imgURL, LPCTSTR imgURYL);

	void drawPlane();

	void movePlane();

	void ControlMove(char key);

	void loseHealth();

	~MPlane();

};

