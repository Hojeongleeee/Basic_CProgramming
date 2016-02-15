// 1315594 경영학부 이호정
// Lab03_2 실습과제 4.문자형 실습 활용 
// 프로그래밍개론I 003분반 (김윤진 교수님)
#include <stdio.h>
#include <Windows.h>

int main(){

	char a;

	printf("학번\tASCII number\n===================\n");
	a='1';
	printf("%c\t%d\n",a,a);
	a='3';
	printf("%c\t%d\n",a,a);
	a='1';
	printf("%c\t%d\n",a,a);
	a='5';
	printf("%c\t%d\n",a,a);
	a='5';
	printf("%c\t%d\n",a,a);
	a='9';
	printf("%c\t%d\n",a,a);
	a='4';
	printf("%c\t%d\n",a,a);

	system("pause");
	return 0;
}