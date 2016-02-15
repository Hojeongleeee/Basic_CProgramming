///*
//	함수에서 포인터 쓰기
//*/
//#include <stdio.h>
//
//void printOct(int *pt){
//	printf("팔진수로 출력 : %o\n",*pt);
//}
//void printDec(int *pt){
//	printf("십진수로 출력 : %d\n",*pt);
//}
//
//int main(){
//
//	void (*pt)(int *);
//	int i=0, *intp=&i;
//
//	void (*fnary[2])(int *);
//
//	printf("숫자 하나를 입력하면 팔진수와 십진수로 출력합니다 : ");
//	scanf("%d",&i);
//
//	pt=printOct;
//	(*pt)(intp);
//	pt=printDec;
//	(*pt)(intp);
//
//	*(fnary)=printOct; //void 포인터배열 [0]에 함수주소
//	(*(fnary))(intp);
//	*(fnary+1)=printDec; //void 포인터배열 [1]에 함수주소
//	(*(fnary+1))(intp);
//	return 0;
//}