//	실습 3주차
//	표준 입출력 프로그램
//	1315594 이호정

#include <stdio.h>
#include <Windows.h>

int main(){
//주석
	/*puts("hello world!");
	printf("hello world!!!");
	*/

//puts 자동으로 개행
	puts("hello, world!");
	puts("hello, \nworld!");

//printf 개행문자 삽입해야함
	printf("hello, world!\n");
	printf("hello, world!");
	
	system("pause");
	return 0;
}
