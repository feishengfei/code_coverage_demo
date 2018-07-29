#include "rectangle.h"
#include <iostream>

int main(int argc, char *argv[])
{
	CRectangle rect;
	rect.set_values(3, 4);
	std::cout << "area: " << rect.area() << std::endl;
	return 0;
}
