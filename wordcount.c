//Count no of words in a sentence
#include<stdio.h>
#include<string.h>

int main(){
    int i=0,count=0;
    char str[200];
    scanf("%[^\n]s",str);
    count=strlen(str)>0?1:0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' ) count++;
    }

    printf("word count is %d",count);
    return 0;
}