#include<stdio.h> 
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		int s=0;
		scanf("%d", &n);
		while(n!=0) {
		s+=(n%10);
		n=n/10;
		} 
		if(s%10==0) {
		printf("YES\n"); 
		} else { 
		printf ("NO\n");
		}
		}
		return 0;
		}
				 
				 
			
				
				
