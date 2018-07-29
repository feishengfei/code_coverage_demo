#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

class CRectangle
{
public:
	CRectangle(){};
	~CRectangle(){};

	void set_values(int _x, int _y);
	int area();
	int length();

private:
	int x;
	int y;
};

#endif /*__RECTANGLE_H__*/
