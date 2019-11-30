#include <stdio.h>
int sum(int);
int powers(int);
void main() {
	int n;
	n = 5;
	printf("%d", sum(n));
}
int sum(int x) {
	int i, s = 0;
	for ( i = 1; i <= x; i++)
	{
		s += powers(i);
	}
	return s;
}
int powers(int y) {
	int i, p;
	p = 1;
	/*for ( i = y; i <= y; i++)
	{
		p = y * 10 + y;
	}*/
	if (y<=5)
	{
		p = y * 10 + y;
	}
	return p;
}