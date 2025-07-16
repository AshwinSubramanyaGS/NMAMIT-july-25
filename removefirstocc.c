//Write a C program to remove first occurrence of a character from string.
#include<stdio.h>
#include<string.h>

int main(){
    int i=0;
    char str[200],alpha;
    scanf("%s",str);
    scanf(" %c",&alpha);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==alpha)
        {
            strcpy(&str[i],&str[i+1]);
            break;
        }
    }
    printf("final string %s",str);
    return 0;
}