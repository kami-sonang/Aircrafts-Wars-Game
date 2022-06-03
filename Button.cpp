#include "Button.h"

Button::Button(int x, int y, int width, int height, LPCTSTR imgURL, LPCTSTR imgURYL)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	loadimage(m_img, imgURL);
	loadimage(m_img + 1, imgURYL);
}

void Button::draw()
{
	putimage(x, y, m_img + 1, SRCAND);
	putimage(x, y, m_img, SRCPAINT);
}
