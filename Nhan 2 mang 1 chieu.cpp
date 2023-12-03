#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int multiply(float a[], float b[], int n) {
  float c;
  float t = 0;
  
  for (int i = 0; i < n; i++) {
    c = a[i] * b[i];
    t = t + c;
  }
  printf("%.2f", t);
  return t;
}
		

		
int main() {
  int n = 100000000;
  float *a = (float*)malloc(n * sizeof(float));
  float *b = (float*)malloc(n * sizeof(float));
  
  printf("Nhap so gia tri n: %d\n ", n);
  //scanf("%d", &n);
  srand(time(NULL));
  for (int k=0; k<n; k++) {
   a[k] = rand() % n;
   b[k] = rand() % n;
   //printf("%d %f %f\n", k, a[k], b[k]);
}
  multiply(a, b, n) ;
  return 0;
}




