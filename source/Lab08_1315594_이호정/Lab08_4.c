#include <stdio.h>

void swap(int,int); //swap�Լ� ����

int main(){

	int arr[6]={1,2,3,4,5,6}; //�迭
	int *pt = arr; //arr[0]�ּ�
	int *ppt = arr+5; //arr[5]�ּ�

	while(pt<ppt){ //1<->6 2<->5 3<->4 ���� �ٲٱ�
		swap(pt++,ppt--);
	}
	//�迭 ���
	pt=arr; //���������
	while(pt<=arr+5){ //ó������ ������
		printf("%d",*pt++);
	}
	return 0;
}

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}