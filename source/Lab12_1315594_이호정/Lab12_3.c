#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_student 5
#define PRINTSTD(char *s[]) printf(#p"-->string=%s",s)

typedef struct student{
	char name[20];
	int korean, english, math;
	double average;
} student;

int main(){
	
	student std[max_student];
	int i;
	FILE *fp = NULL;

	//데이터 입력받기
	for(i=0;i<max_student;i++){
		printf("학생의 정보를 입력하세요:");
		scanf("%s %d %d %d", std[i].name, &std[i].korean, &std[i].english, &std[i].math);
		std[i].average=(double)(std[i].korean+std[i].english+std[i].math)/3;
	}
	
	//파일열기
	fp=fopen("a.txt","w");
	if (fp==NULL){
		printf("파일 열기 실패\n");
	}

	//파일에 쓰기
	fprintf(fp,"학생정보");
	for(i=0;i<max_student;i++){
		fprintf(fp,"\nname: %-10s\nkorean:%3d\nenglish:%3d\nmath:%3d\naverage:%6.2f\n",std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}
	fclose(fp);

	return 0;
}