#include <stdio.h>

int main(){

	int arr[]={1,2,3,4,5};//정수 배열 초기화
	int *ptr; //포인터 변수 선언
	int sum=0;
	
	ptr = arr+4; //포인터 변수에 배열 끝 주소 저장
	
	while(ptr+1!=arr){ //5번반복하도록
		sum += *ptr--; //sum에 간접참조한 값을 누적합계, 포인터 변수 저장된 값을 sizeof(int)씩 감소시킴
	}
		printf("sum = %d\n",sum);

	return 0;
}