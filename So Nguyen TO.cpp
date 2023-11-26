#include<stdio.h>
#include<math.h> 
 int main(){ 
 int a; 
 int sum = 0;
  scanf ( "%d", &a);
   while ( a--){ 
   int b; 
scanf ("%d", &b); 
for( int c=2; c<=(int)sqrt(b); c++)
{ 
int d=b%c; 
if( d == 0){ sum= sum+1; } 
} if ( sum!=0){ printf("NO\n"); 
} else { 
printf("YES\n"); 
} 
sum = 0; 
} 
}

