#pragma once
#include "CommonHead.h"
class klickable
{
public :

	int x;
	int y;
	int width;
	int height;
	void(*ClickAction)();


	virtual void draw() = 0;
	void RecieveEvent(int cx,int cy);

private:

	bool isClickMe(int cx,int cy);

};

