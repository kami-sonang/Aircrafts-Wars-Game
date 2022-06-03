#include "CommonHead.h"
#include "StartMenu.h"
#include "Level.h"
using namespace std;

int main()
{
	initgraph(950, 950);
	Menu();

	level1();

	closegraph();
	return 0;
}