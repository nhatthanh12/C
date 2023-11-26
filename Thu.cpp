#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main() {
	int t;
	char a[100];
	int m,tong=0;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++) {
			m=n%10;
			n=n/10;
			m=a[i];
			}
			for (int i=0; i<strlen(a); i++) {
				tong = tong + a[i];
				
			}
			if( tong%3 ==0) printf("YES\n");
			else printf("NO\n");
	}
}



