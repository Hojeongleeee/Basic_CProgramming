#include <stdio.h>

int main(){

	int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrix2[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
	int matrix3[3][3] = {{0}};
	int i,j,k;
	
	for (i=0;i<3;i++){
		for (k=0;k<3;k++){
			for (j=0;j<3;j++){
				matrix3[i][k]+=matrix1[i][j]*matrix2[j][k];
			}

			printf("%d ",matrix3[i][k]);
		}
	}
	return 0;
}