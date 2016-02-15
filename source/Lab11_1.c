/*

1315594 ��ȣ�� �濵�к� (Lab11)

����ü

*/

#include <stdio.h>

	//���İ� ���� ����ü ���� �� �ʱ�ȭ
	struct menu{
		char name[30];
		int price;
	};

	struct menu food[5]={
		{"����",4900},
		{"��Ʈ��ġ�����",6900},
		{"�ӽ������ۿ���",5900},
		{"�����ġ�����",6400},
		{"�����̾�����",7900}
	};
	struct menu drink[5]={
		{"�ݶ�",1000},
		{"���̴�",1000},
		{"�������ֽ�",1500},
		{"����Ƽ",2000},
		{"Ŀ��",1600}
	};

int main(){

	//����ü ������
	struct menu *p_food=food; //food[]
	struct menu *p_drink=drink; //drink[]

	//�Լ�
	/*
	customer_order : ���� ���, ���� ���, ordered�迭�� �ֹ��� ���İ� ���� ����ü������ ����
	calculate : ����ü�����迭�� �޾Ƽ� ���� ����ؼ� return
	*/
	void customer_order(struct menu *p_food, struct menu *p_drink, struct menu ordered[]);
	int calculate(struct menu[]);


	//��Ÿ ����
	int select=0;
	struct menu ordered[]={{"����",0},{"����",0}};

	printf("���Ͻô� �޴��� �������ּ���.\n");
	printf("1.�մԸ��\n2.�����ڸ��\n3.����\n\n");
	scanf("%d",&select);

	switch(select){
	case 1: //�մԸ��
		customer_order(food, drink, ordered); //struct menu�� ����ü����
		printf("�� �ݾ��� %d�� �Դϴ�\n",calculate(ordered)/*return�� �հ�*/);
		break;
	case 2: //�����ڸ��
		printf("X");
		/*
		�����ð���
		*/
		break;
	case 3: //����
		printf("����\n");
		break;
	default: //��Ÿ �Է�
		printf("�߸� ����");
		break;
	}//switch ��
	return 0;
}

void customer_order(struct menu *p_food, struct menu *p_drink, struct menu ordered[]){
	int i=0; 
	int j=0; //food[j]
	int k=0; //drink[k]
	
	printf("=============�����Ǵ� ����=============\n\n");
	for(i=0;i<5;i++){
		//i, food[i].name, food[i].price
		printf("%d %s, %d\n",i,(*(p_food+i)).name,(*(p_food+i)).price);
	}	
	printf("=============�����Ǵ� ����=============\n\n");
	for(i=0;i<5;i++){
		//i, drink[i].name, drink[i].price
		printf("%d %s, %d\n",i,(*(p_drink+i)).name,(*(p_drink+i)).price);
	}

	printf("\n��� �ֹ��Ͻðڽ��ϱ�?\n");
	scanf("%d",&j);
	scanf("%d",&k);

	ordered[0]=food[j]; //ordered[0]�� ���� ����ü���� (�����ֹ�)
	ordered[1]=drink[k];//ordered[1]�� ���� ����ü���� (�����ֹ�)
	
	printf("\n�ֹ��Ͻ� �޴���:\n%s, %s \n",food[j].name,drink[k].name); //�޴��� ���
}
int calculate(struct menu ordered[]){
	return ordered[0].price+ordered[1].price; //0�� ���İ�, 1�� ���ᰪ
}