#include<stdio.h> 
#include<math.h> 
void check(long long n){
 if(n>=2){
  for(int i =2;i<=sqrt(n);i++){
   int dem =0; 
   while(n%i==0){ 
   dem++; n=n/i; 
   } if(dem!=0) printf("%d(%lld) ",i,dem);
    } if(n!=1) printf("%lld(1) ",n); } } 
int main(){
 int t,chek =0; 
 scanf("%d",&t); 
 while(t--){
  long long n; 
  scanf("%lld",&n);
   chek++; 
   printf("Test %d: ",chek);
    check(n); 
	printf("\n");
	 } 
	 }
