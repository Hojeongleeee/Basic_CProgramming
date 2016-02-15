#include <stdio.h>

struct struct1{
	int i1;
	char c1;
	double d1;
};

typedef struct { //16
	int i2; //
	char c2; //
	double d2; //
} STR2;

struct struct3{
	int i3;
	char c3;
	double d3;
}s3_3;

struct rnwhcpName{
	int i4;
	char c4;
	double d4;
}s4={6,'f',6};

struct rnwhcpName *pt4 = &s4;
typedef struct struct3 STR3;
typedef struct STR4 ;

void print(void *add, int i, char c, double d){
	printf("%p ---> %d, %c, %f\n",add,i,c,d);
}
int main(){

	struct struct1 s1 = {1,'a',1};
	STR2 s2 = {2,'b',2};
	struct struct3 s3_1 = {3,'c',3};
	STR3 s3_2 = {4,'d',4};
	STR2 *ps2 = &s2;
	struct struct3 *ps3_1 = &s3_1;

	struct sizeTest {
	int i;
	char c[100];
	double d;
	float f;
	long l;
	char cc[100];
} st;

	struct student {
		char name[20];
		int stud_id;
		char year;
		char major[20];
	}s;

	printf("struct student의 크기: %d\n",sizeof(struct student));
	printf("변수 s의 크기: %d\n", sizeof(s));

	printf("sizeof(st)=%d\n",sizeof(st));
	printf("sizeof(st.i)=%d\n",sizeof(st.i));
	printf("sizeof(st.c)=%d\n",sizeof(st.c));
	printf("sizeof(st.d)=%d\n",sizeof(st.d));
	printf("sizeof(st.f)=%d\n",sizeof(st.f));
	printf("sizeof(st.l)=%d\n",sizeof(st.l));
	printf("sizeof(st.cc)=%d\n\n",sizeof(st.cc));

	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(double)=%d\n",sizeof(double));
	printf("sizeof(float)=%d\n",sizeof(int));
	printf("sizeof(long)=%d\n",sizeof(char));

	print(&s1,s1.i1, s1.c1, s1.d1);
	print(ps2,ps2->i2, ps2->c2, ps2->d2);
	print(ps3_1,(*ps3_1).i3, (*ps3_1).c3, (*ps3_1).d3);
	print(&s3_2,s3_2.i3, s3_2.c3, s3_2.d3);
	print(&s4, s4.i4,s4.c4,s4.d4);

	return 0;
}