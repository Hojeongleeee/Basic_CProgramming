// 1315594 경영학부 이호정
// Lab03_1 실습과제 2.변수값 증가 실습 활용 
// 프로그래밍개론I 003분반 (김윤진 교수님)
#include <stdio.h>
#include <Windows.h>

int main(){

	int sum=0;
	int score=0;

	score=10;
	sum=sum+score;
	printf("첫 번째 값 %d 결과: %d\n",score,sum);

	score=20;
	sum=sum+score;
	printf("두 번째 값 %d 결과: %d\n",score,sum);
	
	score=-8;
	sum=sum+score;
	printf("세 번째 값 %d 결과: %d\n",score,sum);

	score=5;
	sum=sum-score;
	printf("첫 번째 값 %d 결과: %d\n",score,sum);

	system("pause");
	return 0;
}