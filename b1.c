/*	假设有一个整数数组a，有10个元素。使用数组名表示元素的地址，输出各元素的值。
*	用到 数组下标的方式输入
*	用指针引用的方式输出
*	
*
*/
#include <stdio.h>
int main(){
int a[10];
int i;
for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<10;i++){
	printf("%d ",*(a+i));
}
printf("\n");
return 0;

}
