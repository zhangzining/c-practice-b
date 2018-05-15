/*
从键盘上输入一个字符串，接着输入一个字符，然后分别统计字符串中的大于，等于，小于这个字符的字符个数
*/
#include <stdio.h>
#define N 30
int main(){
char a[N],ch;
int c1=0,c2=0,c3=0,i=0;
printf("input a string:\n");
scanf("%s",a);
getchar();
printf("input a char:\n");
scanf("%c",&ch);
while(a[i]){
	if(a[i]>ch){
		c1++;
	}else if(a[i]==ch){
		c2++;
	}else{
		c3++;
	}
	i++;

}
printf("c1=%d ",c1);
printf("c2=%d ",c2);
printf("c3=%d \n",c3);
return 0;
}
