#include <stdio.h>
#include <stdlib.h>

// 09-01>

int main(int argc, char *argv[]) {
	
	int i;
	int grade[5]; 
	
	grade [0] = 10;
	grade [1] = 20;
	grade [2] = 30;
	grade [3] = 40;
	grade [4] = 50;
	
		for(i=0; i<5; i++)
	{
		printf("grade [%d] = %d\n", i, grade[i]);
	}
	
		return 0;
}

// 09-03>

// (1)

int main(void)
{
	int i;
	int grade[5];
	int score[5];


	for(i=0; i<5; i++)
	{
		grade[i] = rand() % 100;
		score[i] = grade[i];
	}

	for(i=0; i<5; i++)
		printf("score[%d] = %d\n", i, score[i]);

	return;
}

// (2)

int main(void) {
		
	int i;
	
	int a[5] = {1,2,3,4,5};
	int b[5] = {1,2,3,5,5};
	
	for(i=0; i<5; i++)
	{
		if (a[i] != b[i])
		{
			printf("%i is different\n", i);
		}
	 } 
		return;

}

// 09_06>

void addMatrix(int A[][3], int B[][3], int C[][3]){
	
	int i,j;
	
	for(i=0; i<3; i++)
	{
		
		for(j=0; j<3; j++)
		{
			C [i][j] = A[i][j] + B[i][j];
			
		}
	}
	
	return;
}

void printMatrix(int C[][3]) {
	
	int i, j;
	
	for(i=0; i<3; i++)
	{
		
		for(j=0; j<3; j++)
		{
			printf("%i ", C[i][j]);
			
		}
		
		printf("\n");
	}
	
	return;
}

int main(int argc, char *argv[]) {
	
	int A[3][3] = {
	{2,3,0},
	{8,9,1},
	{7,0,5} };
	
	int B[3][3] = {
	{1,0,0},
	{0,1,0},
	{0,0,1} };
	
	int C[3][3];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0; 

}
