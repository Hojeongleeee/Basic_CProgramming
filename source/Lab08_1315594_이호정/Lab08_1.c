#include <stdio.h>


int main(){

	void compare(int[], int, int); //비교하는 함수
	int i,j; //index들
	int arr[5]={0,0,0,0,0}; //배열 0으로 모두 초기화
	int sum(int[]); //배열의 모든 원소 합
	
	for (i=0;i<5;i++){
		printf("입력:");
		scanf("%d",&arr[i]);
	}

	//정렬
	for (i=0;i<4;i++){
		for (j=i+1;j<5;j++){
			compare(arr, i, j); //배열, 인덱스, 인덱스 인수로
		}
	}
	
	//출력
	printf("최대값: %d",*(arr+4));
	printf("\n최소값: %d",*arr);
	printf("\n총 값: %d\n",sum(arr));

	return 0;
}

//a>b이면 서로 바꿈 (배열 원본 접근)
void compare(int arr[], int i, int j){
	int temp;
	if (arr[i]>arr[j]){ //앞의 숫자가 더 크면 바꿈
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}

//배열의 모든 원소 합
int sum(int arr[]){
	int s=0;
	int i=0;
	for (i=0;i<5;i++){
		s += arr[i];
	}
	return s;
}