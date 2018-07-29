#include "rectangle.h"

void CRectangle::set_values(int _x, int _y)
{
	x = _x;
	y = _y;
}

int CRectangle::area()
{
	return x*y;
}

int CRectangle::length()
{
	return 2*(x+y);
}
