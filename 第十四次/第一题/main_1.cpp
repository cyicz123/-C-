#include"p14_1.h"

int main()
{
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);

	// 存储矩形的地址
	shape = &rec;
	// 调用矩形的求面积函数 area
	shape->area();

	// 存储三角形的地址
	shape = &tri;
	// 调用三角形的求面积函数 area
	shape->area();

	return 0;
}