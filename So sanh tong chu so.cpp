#include <stdio.h>
 void sosanh(int a,int b){ 
 int s=0; 
 int q=0;
  int tmp=a; 
  int siu=b; 
  while(a!=0){ 
  s+=a%10; a/=10; 
  } 
  while(b!=0){ 
  q+=b%10; b/=10;
   } 
if(s<q){ 
printf("%d %d",tmp,siu); 
} else if(s>q){ 
printf("%d %d",siu,tmp); 
} else{ 
printf("%d %d",tmp,siu); 
}
 } 
 int main(){ 
 int n,m; 
 scanf("%d %d",&n,&m); 
 sosanh(n,m);
  }
