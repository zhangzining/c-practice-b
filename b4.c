/*字符串连接strcat
*将两个字符串连接后输出
*/
#include <stdio.h>
#include <string.h>
int main(){
char a[20]="string",b[]="absolutely";
strcat(a,b);
strcat(a," ");
printf("%s %d",a,strlen(a));
return 0;
}
