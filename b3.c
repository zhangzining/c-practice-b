/*字符串操作
*复制字符串并求长度
*/
#include <stdio.h>
#include <string.h>
int main(){
char a[10],b[10]="code";
strcpy(a,b);
printf("%s %s",a,b);
printf("%d %d",strlen(a),strlen(b));
return 0;
}
