/*

1315594 이호정 경영학부 (Lab11)

구조체

*/

#include <stdio.h>

	//음식과 음료 구조체 선언 및 초기화
	struct menu{
		char name[30];
		int price;
	};

	struct menu food[5]={
		{"와퍼",4900},
		{"콰트로치즈와퍼",6900},
		{"머쉬룸페퍼와퍼",5900},
		{"스노우치즈와퍼",6400},
		{"프리미엄와퍼",7900}
	};
	struct menu drink[5]={
		{"콜라",1000},
		{"사이다",1000},
		{"오렌지주스",1500},
		{"버블티",2000},
		{"커피",1600}
	};

int main(){

	//구조체 포인터
	struct menu *p_food=food; //food[]
	struct menu *p_drink=drink; //drink[]

	//함수
	/*
	customer_order : 음식 출력, 음료 출력, ordered배열에 주문한 음식과 음료 구조체변수를 저장
	calculate : 구조체변수배열을 받아서 가격 계산해서 return
	*/
	void customer_order(struct menu *p_food, struct menu *p_drink, struct menu ordered[]);
	int calculate(struct menu[]);


	//기타 변수
	int select=0;
	struct menu ordered[]={{"음식",0},{"음료",0}};

	printf("원하시는 메뉴를 선택해주세요.\n");
	printf("1.손님모드\n2.관리자모드\n3.종료\n\n");
	scanf("%d",&select);

	switch(select){
	case 1: //손님모드
		customer_order(food, drink, ordered); //struct menu의 구조체변수
		printf("총 금액은 %d원 입니다\n",calculate(ordered)/*return이 합계*/);
		break;
	case 2: //관리자모드
		printf("X");
		/*
		다음시간에
		*/
		break;
	case 3: //종료
		printf("종료\n");
		break;
	default: //기타 입력
		printf("잘못 선택");
		break;
	}//switch 끝
	return 0;
}

void customer_order(struct menu *p_food, struct menu *p_drink, struct menu ordered[]){
	int i=0; 
	int j=0; //food[j]
	int k=0; //drink[k]
	
	printf("=============제공되는 음식=============\n\n");
	for(i=0;i<5;i++){
		//i, food[i].name, food[i].price
		printf("%d %s, %d\n",i,(*(p_food+i)).name,(*(p_food+i)).price);
	}	
	printf("=============제공되는 음료=============\n\n");
	for(i=0;i<5;i++){
		//i, drink[i].name, drink[i].price
		printf("%d %s, %d\n",i,(*(p_drink+i)).name,(*(p_drink+i)).price);
	}

	printf("\n어떤걸 주문하시겠습니까?\n");
	scanf("%d",&j);
	scanf("%d",&k);

	ordered[0]=food[j]; //ordered[0]은 음식 구조체변수 (음식주문)
	ordered[1]=drink[k];//ordered[1]은 음료 구조체변수 (음료주문)
	
	printf("\n주문하신 메뉴는:\n%s, %s \n",food[j].name,drink[k].name); //메뉴명 출력
}
int calculate(struct menu ordered[]){
	return ordered[0].price+ordered[1].price; //0은 음식값, 1은 음료값
}