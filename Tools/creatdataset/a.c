#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *academic = fopen("academic","r");
	FILE *student = fopen("student", "r");
	FILE *names = fopen("Part2DataSet.txt", "r");
	FILE *out = fopen("DataSet.txt","w");
	char buff[25];
	int a = 0,b = 0,c = 0;
	
	while(!feof(names)){
		fscanf(names,"%s",buff);
		fprintf(out,"%s ",buff);
		fscanf(names,"%s",buff);
		fprintf(out,"%s ",buff);
		fscanf(student,"%d",&a);
		if(rand()%25 != 5)
			fprintf(out,"%d ",a);
		else
			fprintf(out,"0 ");
		fscanf(academic,"%d",&a);
		fprintf(out,"%d\n",a);
	}
	
	return 0;
}
