#include <stdio.h>


int main(){

	int i, f, b;
	char *food[]={"tofu and kimchi","cheese","chicken","pizza","gimbap"};
	char *beve[]={"beer","wine","soju","coke","water"};
	
	printf("�����Ǵ� ������\n");
	for(i=0;i<sizeof(*food)+1;i++){
		printf("\t%d %s\n",i+1,food[i]);
	}
	printf("\n�Դϴ�. \n\n");

	printf("�����Ǵ� �����\n");
	for(i=0;i<sizeof(*beve)+1;i++){
		printf("\t%d %s\n",i+1,beve[i]);
	}
	printf("\n�Դϴ�. \n\n");

	printf("�Ѱ��� ���İ� ���Ḧ �������ּ���.\n");
	
	scanf("%d\n",&f);
	scanf("%d",&b);

	printf("�����Ͻ� �޴��� %s %s �Դϴ�.\n",food[f-1],beve[b-1]);
	return 0;
}