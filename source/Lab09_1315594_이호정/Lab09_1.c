#include <stdio.h>
#include <string.h>
#define MAX_STRING 100

int main(){

	int i,k; //�ε���
	char word[MAX_STRING] = {0}; //�ִ� 100��, 0���� �ʱ�ȭ
	printf("�ܾ �Է��ϼ���:"); 
	scanf("%s",word); //word�ּҷ� �����ؼ� �ܾ� �Է¹ޱ�
	k=strlen(word)-1; //null���� ��Ʈ�� ������ index
	
	for (i=0; i<k/2; i++){//�յڹ��� ���ʴ�� �ٲٱ�
		char temp; 
		temp=word[i];
		word[i]=word[k];
		word[k]=temp;
		k--; //i�� ++, k�� --
	}
	
	printf("������ �ܾ� ���: %s\n", word);
	return 0;
}