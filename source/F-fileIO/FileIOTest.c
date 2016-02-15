#include <stdio.h>
#include <stdlib.h>

//lab12_1.c (1315594 경영학부 이호정
int main(){

	FILE *f; //파일구조체
	f=fopen("a.txt","w"); //파일열기
	fprintf(f,"hello world!\n이호정\n1315594"); //파일에쓰기
	fclose(f); //파일닫기

	return 0;
}