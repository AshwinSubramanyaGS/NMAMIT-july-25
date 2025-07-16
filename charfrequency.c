//C Program to Find the frequency of a character in a string

#include<stdio.h>

int main(){
    int i=0,count=0;
    char str[200],alpha;
    scanf("%s",str);
    scanf("\n%c",&alpha);

    for(i=0;str[i]!='\0';count=str[i]==alpha? count+1: count,i++);
    printf("In string %s %c occurs %d times",str,alpha,count);
    return 0;
}