// 1315594 �濵�к� ��ȣ��
// Lab03_1 �ǽ����� 2.������ ���� �ǽ� Ȱ�� 
// ���α׷��ְ���I 003�й� (������ ������)
#include <stdio.h>
#include <Windows.h>

int main(){

	int sum=0;
	int score=0;

	score=10;
	sum=sum+score;
	printf("ù ��° �� %d ���: %d\n",score,sum);

	score=20;
	sum=sum+score;
	printf("�� ��° �� %d ���: %d\n",score,sum);
	
	score=-8;
	sum=sum+score;
	printf("�� ��° �� %d ���: %d\n",score,sum);

	score=5;
	sum=sum-score;
	printf("ù ��° �� %d ���: %d\n",score,sum);

	system("pause");
	return 0;
}