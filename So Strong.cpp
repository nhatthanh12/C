#include<stdio.h>
int main() {
	int a, b=0;
	scanf("%d", &a);
	int c=a;
	while (c!=0) {
		int d=c%10;
		int e=1;
		for (int i =1; i <= d; i++) e*=i;
		b+=e; 
		if( b > a) break;
		c/=10;
		}
		if( b == a) printf("1");
		else printf("0");
		}
