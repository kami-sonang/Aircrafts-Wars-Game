#pragma once
#include "klickable.h"
class Button : public klickable
{
public:

	Button(int x, int y, int width,int height,LPCTSTR imgURL,LPCTSTR imgURYL);
	void draw();

	IMAGE m_img[2];
};

