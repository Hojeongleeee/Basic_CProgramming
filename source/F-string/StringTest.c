#include <stdio.h>
#include <string.h>

int main(){
	int i=0;
	
	char *color[]={"red","green","blue","black"};
	char str[10]={" "};
	printf("sizeof(color)=%d\n",sizeof(color)); //주소는 int이므로 size에서 4로나눠야댐
	for(i=0;i<sizeof(color)/sizeof(int);i++)
	printf("%s\n",*(color+i));

	puts(color[1]);
	sprintf(str,color[0]);
	printf("sprintf결과 str=%s\n",str);
	sscanf(color[3],str);
	printf("sscanf결과 str=%s\n",str);

	return 0;
}