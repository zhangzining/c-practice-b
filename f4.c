/*
读取输入的文件名的文件，取里面的字符串，原样输入
*/
#include <stdio.h>
#include <stdlib.h>
#define N 1
int main(){
FILE *fp;
char filename[20],ch,con[20],*p;
printf("input file name:\n");
scanf("%s",filename);
if((fp=fopen(filename,"a+"))==NULL){
	printf("error");
	exit(0);
}
while(fgets(con,20,fp)!=NULL){
	fputs(con+N,fp);
}
printf("%s\n",con);
fclose(fp);

return 0;
}
