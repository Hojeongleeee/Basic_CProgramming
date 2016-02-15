#include <stdio.h>
#include <limits.h>
#include <math.h>

int main (){

	//1. ������ �ʱ�ȭ �� ���
	int sum = 0, score;
	int n;
	char a;
	int i;
	
	float x = 0.1234567890123456789F;
	double y = 0.1234567890123456789;
	long double z = 0.1234567890123456789L;

	short n1 = SHRT_MAX; //2^15-1
	short n2 = SHRT_MIN; //-2^15
	unsigned short n3 = USHRT_MAX; //65535=2^16-1
	unsigned short n4 = 0;

	a = 65;
	n = 65;

	printf("d : %d\n",a); // ������
	printf("c : %c\n",a); // ����Ű (65=A) �ڵ� �� ����Ʈ!
	printf("d : %d\n",n); //������


	//2. ����������
	score = 1;
	sum = sum + score;
	printf("ù ��° ���� %d\t ���� ��: %d\n",score,sum);

	score = 10;
	sum += score;
	printf("�� ��° ���� %d\t ���� ��: %d\n",score,sum);

	score = 15;
	sum += score;
	printf("�� ��° ���� %d\t ���� ��: %d\n",score,sum);

	score = 17;
	sum =+ score;
	printf("�� ��° ���� %d\t ���� ��: %d\n",score,sum);
	printf("sum=+score; ����� �ȵ�!\n");

	sum=0;
	score=0;


	//3. ������/ ũ��
	printf("\n������ ũ��\n");
	printf("char ũ�� : %d \n", sizeof(char));
	printf("short ũ�� : %d \n", sizeof(short));
	printf("int ũ�� : %d \n", sizeof(int));
	printf("long ũ�� : %d \n", sizeof(long));



	//4. ������ ����Ű �� ����Ʈ
	printf("\n������ ����Ű �� ����Ʈ\n");
	for (i=1; i<128; i++){
		printf("(%d,",i); // ������
		printf("%c), ",i); // ����Ű �ڵ� �� ����Ʈ!
	}

	//5. putchar
	printf("\n\nputchar�Լ�:����Ű������Ʈ\n");
	for (i=1; i<128; i++){
		putchar(i);
	}

	//6. �����÷ο� Ȯ�� --> Short���� �ִ�, �ּҰ�����
	//��� limits.h ����
	//unsigned short�� = ���, short�� = ����~���
	printf("\n\n�����÷ο� Ȯ��\n");
	printf("short�ִ�,�ּ� �� unsigned short�ִ�, �ּ� \n%d, %d, %d, %d",n1,n2,n3,n4);
	printf("\n�ִ밪�� +1, �ּҰ��� -1�� ���\n");

	n1 +=1;
	n2 -=1;
	n3 +=1;
	n4 -=1;

	printf("%d, %d, %d, %d",n1,n2,n3,n4);
	
	n = 1;
	for (i=1; i<=32; i++){
		n=2*n;
		i++;
	}
	printf("\n2��32��=%d",n); //32��Ʈ �����Ϸ� ��� -> short�� 2



	//7. �ε��Ҽ���(�Ǽ���) ũ��
	printf("\n\n�ε��Ҽ���(�Ǽ���) ũ�� \n");
	printf("float ũ�� : %d \n", sizeof(float));
	printf("double ũ�� : %d \n", sizeof(double));
	printf("long double ũ�� : %d \n", sizeof(long double));
	
	printf("%20.19f \n",x); //8�ڸ�
	printf("%20.19f \n",y); //16�ڸ�
	printf("%20.19f \n",z); //16�ڸ�

	//��Ÿ
	//
	return 0;
}