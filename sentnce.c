#include<stdio.h>

int main(){
    int i=0;
    char str[200];
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++);
    printf("Length of %s is %d",str,i);
    return 0;
}