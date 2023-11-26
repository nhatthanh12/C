#include<stdio.h>  
int main () {  
float a,b,c; 
scanf("%f %f", &a, &b); 
c=-b/a; 
if (a==0 && b==0) 
printf("Vo so nghiem");
 else if (a==0 && b!=0) 
 printf("Vo nghiem"); 
 else printf("%.2f",c); 
 return 0; 
 }
