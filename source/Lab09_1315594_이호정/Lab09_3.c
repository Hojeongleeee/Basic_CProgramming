#include <stdio.h>


int main(){

	int i, f, b;
	char *food[]={"tofu and kimchi","cheese","chicken","pizza","gimbap"};
	char *beve[]={"beer","wine","soju","coke","water"};
	
	printf("제공되는 음식은\n");
	for(i=0;i<sizeof(*food)+1;i++){
		printf("\t%d %s\n",i+1,food[i]);
	}
	printf("\n입니다. \n\n");

	printf("제공되는 음료는\n");
	for(i=0;i<sizeof(*beve)+1;i++){
		printf("\t%d %s\n",i+1,beve[i]);
	}
	printf("\n입니다. \n\n");

	printf("한가지 음식과 음료를 선택해주세요.\n");
	
	scanf("%d\n",&f);
	scanf("%d",&b);

	printf("선택하신 메뉴는 %s %s 입니다.\n",food[f-1],beve[b-1]);
	return 0;
}