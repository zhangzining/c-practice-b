/*
fgets函数和fputs函数的使用
打开一个文件，然后复制其中的几个字符到另一个文件里
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fp1,*fp2;
char file1[20],file2[20],s[10];
printf("please input file name 1:\n");
scanf("%s",file1);
printf("please input file name 2:\n");
scanf("%s",file2);
if((fp1=fopen(file1,"r"))==NULL){
	printf("error");
	exit(0);
}
if((fp2=fopen(file2,"w"))==NULL){
	printf("error");
	exit(0);
}
while(fgets(s,10,fp1)!=NULL){
	fputs(s,fp2);
}
fclose(fp1);
fclose(fp2);
return 0;
}
