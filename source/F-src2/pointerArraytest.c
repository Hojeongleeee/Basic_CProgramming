/*
	이차원 배열 포인터 참조 및 행렬
*/
#include <stdio.h>

int main(){

	int arr[2][3]={{1,2,3},{4,5,6}};
	int i=0,j=0;
	char *arr2[]={"arr","ptr","c","c++"};

	for (i=0;i<sizeof(arr2)/4;i++){ //주소는 int이므로 /4함
		for (j=0;j<sizeof(	*(arr2+i)	)-1;j++){ // sizeof을 하면 \0문자를 포함하므로 -1함
			printf("i=%d, j=%d\t (*(arr2+%d))[%d]=%c\n",i,j,i,j,(*(arr2+i))[j]);
		}
	} /** c 뒤에 왜 두칸이 남나요!!!!!!! **/


	for (i=0;i<6;i++){
		printf("i=%d\t *(*arr+%d)=%d\n",i,i,*(*arr+i));
	}

	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("i=%d, j=%d\t arr[%d][%d]=%d\n",i,j,i,j,arr[i][j]);
		}
	}

	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("i=%d, j=%d\t *(*(arr+%d)+%d)=%d\n",i,j,i,j,*(*(arr+i)+j));
		}
	}

	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("i=%d, j=%d\t (*(arr+%d))[%d]=%d\n",i,j,i,j,(*(arr+i))[j]);
		}
	}

	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("i=%d, j=%d\t *(arr[%d]+%d)=%d\n",i,j,i,j,*(arr[i]+j));
		}
	}

	return 0;
}