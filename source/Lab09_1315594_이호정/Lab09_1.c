#include <stdio.h>
#include <string.h>
#define MAX_STRING 100

int main(){

	int i,k; //인덱스
	char word[MAX_STRING] = {0}; //최대 100자, 0으로 초기화
	printf("단어를 입력하세요:"); 
	scanf("%s",word); //word주소로 시작해서 단어 입력받기
	k=strlen(word)-1; //null전의 스트링 마지막 index
	
	for (i=0; i<k/2; i++){//앞뒤문자 차례대로 바꾸기
		char temp; 
		temp=word[i];
		word[i]=word[k];
		word[k]=temp;
		k--; //i는 ++, k는 --
	}
	
	printf("뒤집힌 단어 출력: %s\n", word);
	return 0;
}