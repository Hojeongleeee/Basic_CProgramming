#include <stdio.h>
#include <string.h>

int main(){
	int i=0;
	
	char *color[]={"red","green","blue","black"};
	char str[10]={" "};
	printf("sizeof(color)=%d\n",sizeof(color)); //�ּҴ� int�̹Ƿ� size���� 4�γ����ߴ�
	for(i=0;i<sizeof(color)/sizeof(int);i++)
	printf("%s\n",*(color+i));

	puts(color[1]);
	sprintf(str,color[0]);
	printf("sprintf��� str=%s\n",str);
	sscanf(color[3],str);
	printf("sscanf��� str=%s\n",str);

	return 0;
}