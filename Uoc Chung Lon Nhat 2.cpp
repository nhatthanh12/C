#include<stdio.h>
#include<math.h>
  int main() { 
  int n; 
scanf("%d",&n); 
for(int i= 0; i < n; i++){ 
int a, b; 
scanf("%d%d",&a,&b);
 int c; 
 if(a>b)
  c=b; 
  else 
  c=a; 
  for(int i =c; i!=0;i--){
   if((a%i==0)&&(b%i==0)){ 
   printf("%d\n",i); 
   break;
    }
	 }
	  }
	   }
