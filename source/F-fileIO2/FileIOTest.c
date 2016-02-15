#include <stdio.h>

int main(int argc, char *argv[]){
	
	FILE *fp1, *fp2; //파일 2개 변수 선언
	char ch;

	if(argc<3){
		printf("usage: fcopy src_file dest_file\n");
		return -1; //finish
	}

	fp1 = fopen(argv[1], "r"); //읽기전용 파일 argv 1 실행
	if (fp1==NULL){
		printf("파일 열기 실패 (%s)",argv[1]);
		return -1; //finish
	}

	fp2 = fopen(argv[2], "w"); //쓰기전용 파일 argv 2 실행
	if (fp2==NULL){
		printf("파일 열기 실패 (%s)", argv[2]);
		return -1;
	}

	while ( (ch=fgetc(fp1))!=EOF){
		fputc(ch,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}