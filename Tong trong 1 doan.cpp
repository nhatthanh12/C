#include<stdio.h>
#include<math.h>
int main () {
	int a, b;
	scanf("%d %d", &a, &b);
	int d,e;
	float c;
	d= abs(a-b) +1;
	e= abs(a+b) * d/2;
	printf("%d", e);
}


