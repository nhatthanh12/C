#include<stdio.h>
 int tongChuSo(int n){ 
 int s=0; 
 while(n>0){
  int t=n%10; 
  s+=t;
   n/=10; 
   } 
   return s; 
   } 
   int main(){
    int n; 
	scanf("%d", &n); 
	while(n--){ 
	int t; 
	scanf("%d", &t);
	 printf("%d\n", tongChuSo(t)); 
	 } 
	 return 0; 
	 }

		
