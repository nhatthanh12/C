#include<stdio.h>
#include<math.h>
int main () {
	int a;
	scanf("%d", &a);
	while(a--) {
		int m;
		scanf("%d", &m);
		int i=2;
		while (m > 1){
			if(m % i == 0) {
				printf("%d", i);
				m = m / i;
			} else {
				i +=1;
			}
		printf("\n");
		}
		}
	}
		
