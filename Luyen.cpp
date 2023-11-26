#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<ctype.h>
#include<time.h>
int A[100];
void liet_ke_xuat_hien_1lan(int n)
{ printf("Out put");
	for (int i = 0; i < n; i++)
	{
		int found = 0;
		for (int j = 0; j < n; j++)
		{
			if (A[i] == A[j] && i != j)
			{
				found = 1;
				break;
			}
		}
		if (found == 0) {
			printf("%d\t", A[i]);
		}
	}
}


int main () {
int n=20;
	srand(time(NULL));  
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10;

		printf("%d\t", A[i]);
	}
	printf("\n\n");
	liet_ke_xuat_hien_1lan(n);
}

