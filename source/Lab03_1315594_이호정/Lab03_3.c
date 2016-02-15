// 1315594 경영학부 이호정
// Lab03_3 실습과제 4.문자형 실습 활용 (2) 
// 프로그래밍개론I 003분반 (김윤진 교수님)
#include <stdio.h>
#include <Windows.h>

int main(){

	int a;

	puts("변환하고자하는 십진수를 입력하세요:");
	scanf("%d",&a); //십진수형태로 변수 a에 입력값 저장

	printf("\n 입력받은 값은 %d이고\n\t8진수는 %o\n\t16진수로 나타내면 %x 입니다.\n",a,a,a);
	//%d : 십진수
	//%o : 8진수
	//%x : 16진수(소문자)

	system("pause");
	return 0;
}