#include<stdio.h>
int main () {
	int n; 
	scanf("%d", &n);
	if ( n < 0) {
		n*= -1;
		}
		int sum = 0;
		while (n > 0) {
			sum += n % 10;
			n /= 10; 
			} printf("%d", sum);
			return 0;
			}
