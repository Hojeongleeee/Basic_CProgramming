#include <stdio.h>

int main(int argc, char *argv[]){
	
	FILE *fp1, *fp2; //���� 2�� ���� ����
	char ch;

	if(argc<3){
		printf("usage: fcopy src_file dest_file\n");
		return -1; //finish
	}

	fp1 = fopen(argv[1], "r"); //�б����� ���� argv 1 ����
	if (fp1==NULL){
		printf("���� ���� ���� (%s)",argv[1]);
		return -1; //finish
	}

	fp2 = fopen(argv[2], "w"); //�������� ���� argv 2 ����
	if (fp2==NULL){
		printf("���� ���� ���� (%s)", argv[2]);
		return -1;
	}

	while ( (ch=fgetc(fp1))!=EOF){
		fputc(ch,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}