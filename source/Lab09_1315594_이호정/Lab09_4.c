#include <stdio.h>

int main(){

	int matrix1[9] = {1,2,3,4,5,6,7,8,9};
	int matrix2[9] = {10,11,12,13,14,15,16,17,18};
	int matrix3[9] = {0,0,0,0,0,0,0,0,0};
	int i,j,k;

	for (k=0;k<3;k++){
		for (j=0;j<3;j++){
			for (i=0;i<3;i++){
				matrix3[3*k+j]+=matrix1[3*k+i]*matrix2[3*i+j];
			}
		}
	}
	for (i=0;i<9;i++)
		printf("%d ",matrix3[i]);

	return 0;
}