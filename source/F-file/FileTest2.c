#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	FILE *fp=NULL;
	int i;

	fp=fopen(argv[1],"r");



	for (i=1; i<argc; i++)
		printf("%s%s", argv[i], (i<argc-1)?"\n":"*");	


	return 0;
}