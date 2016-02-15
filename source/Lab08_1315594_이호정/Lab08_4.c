#include <stdio.h>

void swap(int,int); //swap함수 선언

int main(){

	int arr[6]={1,2,3,4,5,6}; //배열
	int *pt = arr; //arr[0]주소
	int *ppt = arr+5; //arr[5]주소

	while(pt<ppt){ //1<->6 2<->5 3<->4 각각 바꾸기
		swap(pt++,ppt--);
	}
	//배열 출력
	pt=arr; //출력을위해
	while(pt<=arr+5){ //처음부터 끝까지
		printf("%d",*pt++);
	}
	return 0;
}

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}