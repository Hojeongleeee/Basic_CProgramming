#include <stdio.h>

int main(){

	int arr[]={1,2,3,4,5};//���� �迭 �ʱ�ȭ
	int *ptr; //������ ���� ����
	int sum=0;
	
	ptr = arr+4; //������ ������ �迭 �� �ּ� ����
	
	while(ptr+1!=arr){ //5���ݺ��ϵ���
		sum += *ptr--; //sum�� ���������� ���� �����հ�, ������ ���� ����� ���� sizeof(int)�� ���ҽ�Ŵ
	}
		printf("sum = %d\n",sum);

	return 0;
}