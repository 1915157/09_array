#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int addMatrix(int A[][3], int B[][3], int C[][3]){
	
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
