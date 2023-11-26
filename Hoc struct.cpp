#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
struct SV{
	char ma[100];
	char ten[100];
	float gpa;
};
typedef struct SV SV;
void nhap(SV*a){
scanf("%s", a->ma);
gets(a->ten);2
scanf("%f", a->gpa);
}

void in(SV a){
	printf("%s %s %.2f\n", a.ma, a.ten,a.gpa);
}


void timkiem(SV a[100], int n, char m[100]) {
	
}

int main() {
	int n;
	scanf("%d", &n);
	SV a[100];
	for(int i=0;i<n; i++) nhap(&a[i]);
	for(int i=0;i<n; i++) in(a[i]);
	char s[100];
	printf("nhap ma sv can tim");
	scanf("%s", s);
}
	
	
	

