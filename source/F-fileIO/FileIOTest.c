#include <stdio.h>
#include <stdlib.h>

//lab12_1.c (1315594 �濵�к� ��ȣ��
int main(){

	FILE *f; //���ϱ���ü
	f=fopen("a.txt","w"); //���Ͽ���
	fprintf(f,"hello world!\n��ȣ��\n1315594"); //���Ͽ�����
	fclose(f); //���ϴݱ�

	return 0;
}