#include <stdio.h>


int main(){

	void compare(int[], int, int); //���ϴ� �Լ�
	int i,j; //index��
	int arr[5]={0,0,0,0,0}; //�迭 0���� ��� �ʱ�ȭ
	int sum(int[]); //�迭�� ��� ���� ��
	
	for (i=0;i<5;i++){
		printf("�Է�:");
		scanf("%d",&arr[i]);
	}

	//����
	for (i=0;i<4;i++){
		for (j=i+1;j<5;j++){
			compare(arr, i, j); //�迭, �ε���, �ε��� �μ���
		}
	}
	
	//���
	printf("�ִ밪: %d",*(arr+4));
	printf("\n�ּҰ�: %d",*arr);
	printf("\n�� ��: %d\n",sum(arr));

	return 0;
}

//a>b�̸� ���� �ٲ� (�迭 ���� ����)
void compare(int arr[], int i, int j){
	int temp;
	if (arr[i]>arr[j]){ //���� ���ڰ� �� ũ�� �ٲ�
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}

//�迭�� ��� ���� ��
int sum(int arr[]){
	int s=0;
	int i=0;
	for (i=0;i<5;i++){
		s += arr[i];
	}
	return s;
}