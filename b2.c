/*  假设有一个整数数组a，有10个元素。使用数组名表示元素的地址，用指针变量输出各元素的值。
*   用到 数组下标的方式输入
*   用指针引用的方式输出
*   
*
*/
#include <stdio.h>
int main(){
int a[10];
int i,*p=a;
for(i=0;i<10;i++){
	scanf("%d",a+i);
}
for(p=a;p<(a+10);p++){
	printf("%d ",*p);
}


return 0;
}
