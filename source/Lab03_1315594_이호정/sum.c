#include <stdio.h>
#include <limits.h>
#include <math.h>

int main (){

	//1. 변수의 초기화 및 사용
	int sum = 0, score;
	int n;
	char a;
	int i;
	
	float x = 0.1234567890123456789F;
	double y = 0.1234567890123456789;
	long double z = 0.1234567890123456789L;

	short n1 = SHRT_MAX; //2^15-1
	short n2 = SHRT_MIN; //-2^15
	unsigned short n3 = USHRT_MAX; //65535=2^16-1
	unsigned short n4 = 0;

	a = 65;
	n = 65;

	printf("d : %d\n",a); // 십진수
	printf("c : %c\n",a); // 아즈키 (65=A) 코드 값 프린트!
	printf("d : %d\n",n); //십진수


	//2. 변수값증가
	score = 1;
	sum = sum + score;
	printf("첫 번째 점수 %d\t 현재 합: %d\n",score,sum);

	score = 10;
	sum += score;
	printf("두 번째 점수 %d\t 현재 합: %d\n",score,sum);

	score = 15;
	sum += score;
	printf("세 번째 점수 %d\t 현재 합: %d\n",score,sum);

	score = 17;
	sum =+ score;
	printf("네 번째 점수 %d\t 현재 합: %d\n",score,sum);
	printf("sum=+score; 계산이 안됨!\n");

	sum=0;
	score=0;


	//3. 정수형/ 크기
	printf("\n정수형 크기\n");
	printf("char 크기 : %d \n", sizeof(char));
	printf("short 크기 : %d \n", sizeof(short));
	printf("int 크기 : %d \n", sizeof(int));
	printf("long 크기 : %d \n", sizeof(long));



	//4. 문자형 아즈키 값 프린트
	printf("\n문자형 아즈키 값 프린트\n");
	for (i=1; i<128; i++){
		printf("(%d,",i); // 십진수
		printf("%c), ",i); // 아즈키 코드 값 프린트!
	}

	//5. putchar
	printf("\n\nputchar함수:아즈키값프린트\n");
	for (i=1; i<128; i++){
		putchar(i);
	}

	//6. 오버플로우 확인 --> Short형의 최대, 최소값으로
	//헤더 limits.h 포함
	//unsigned short형 = 양수, short형 = 음수~양수
	printf("\n\n오버플로우 확인\n");
	printf("short최대,최소 및 unsigned short최대, 최소 \n%d, %d, %d, %d",n1,n2,n3,n4);
	printf("\n최대값에 +1, 최소값에 -1한 결과\n");

	n1 +=1;
	n2 -=1;
	n3 +=1;
	n4 -=1;

	printf("%d, %d, %d, %d",n1,n2,n3,n4);
	
	n = 1;
	for (i=1; i<=32; i++){
		n=2*n;
		i++;
	}
	printf("\n2의32승=%d",n); //32비트 컴파일러 사용 -> short형 2



	//7. 부동소수형(실수형) 크기
	printf("\n\n부동소수형(실수형) 크기 \n");
	printf("float 크기 : %d \n", sizeof(float));
	printf("double 크기 : %d \n", sizeof(double));
	printf("long double 크기 : %d \n", sizeof(long double));
	
	printf("%20.19f \n",x); //8자리
	printf("%20.19f \n",y); //16자리
	printf("%20.19f \n",z); //16자리

	//기타
	//
	return 0;
}