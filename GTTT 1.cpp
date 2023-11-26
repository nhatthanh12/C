#include <stdio.h> 
#include <math.h> 
int main(){ 
int n; 
int a; 
scanf("%d",&n); 
while(n>0){ 
scanf("%d",&a); 
printf("%.15f\n",(double)1/a); 
n--; } 
}
