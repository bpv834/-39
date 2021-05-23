#include <stdio.h>
#include <string.h>

struct content {
	char title[40];
	int price;
	double rate;
}c1, c2, c3;

int main() {

	struct content c1 = { "AAA",10000,8.8 };
	struct content c2 = c1;
	strcpy_s(c3.title, "ang");
	c3.price = 200;
	c3.rate = 10;

	printf("c1=%s,%d,%lf\n", c1.title, c1.price, c1.rate);
	printf("c2=%s,%d,%lf\n", c2.title, c2.price, c2.rate);
	printf("c3=%s,%d,%lf\n", c3.title, c3.price, c3.rate);
}