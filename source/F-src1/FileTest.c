///*
//	�Լ����� ������ ����
//*/
//#include <stdio.h>
//
//void printOct(int *pt){
//	printf("�������� ��� : %o\n",*pt);
//}
//void printDec(int *pt){
//	printf("�������� ��� : %d\n",*pt);
//}
//
//int main(){
//
//	void (*pt)(int *);
//	int i=0, *intp=&i;
//
//	void (*fnary[2])(int *);
//
//	printf("���� �ϳ��� �Է��ϸ� �������� �������� ����մϴ� : ");
//	scanf("%d",&i);
//
//	pt=printOct;
//	(*pt)(intp);
//	pt=printDec;
//	(*pt)(intp);
//
//	*(fnary)=printOct; //void �����͹迭 [0]�� �Լ��ּ�
//	(*(fnary))(intp);
//	*(fnary+1)=printDec; //void �����͹迭 [1]�� �Լ��ּ�
//	(*(fnary+1))(intp);
//	return 0;
//}