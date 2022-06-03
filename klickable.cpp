#include "klickable.h"

void klickable::RecieveEvent(int cx,int cy)
{
	if (isClickMe(cx, cy))
	{
		ClickAction();
	}
}

bool klickable::isClickMe(int cx, int cy)
{
	if (cx >= x && cy >= y && x + width >= cx && y + height >= cy)
	{
		return true;
	}

	return false;
}
