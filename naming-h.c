#include<stdio.h>
int a=20;
void func();
int main(){
    int a=12;
    {
        int a=1;
        printf("int block a=%d",a);
    }
    printf("\n%d",a);
    func();
}
void func(){
    printf("\na=%d",a);
}