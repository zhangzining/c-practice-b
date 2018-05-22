/*
文件操作，输入文件名新建或打开并写入和读取里面的内容打印在屏幕上
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char filename[20],ch;
	printf("please input file name\n");
	scanf("%s",&filename);
	if((fp=fopen(filename,"a"))==NULL){
		printf("file open error\n");
		exit(0);
	}
	getchar();
	while((ch=getchar())!='\n'){
		fputc(ch,fp);
	}
	fclose(fp);
	if((fp=fopen(filename,"r"))==NULL){
		printf("file open error\n");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
return 0;
}
