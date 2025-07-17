#include<stdio.h>
#include<stdlib.h>

void push(int*,int*,int);
int pop(int*,int*);
int main(){
    int stack[10],top=-1;
    int arr[10],n;
    scanf("%d",&n);

    for(int i=0;i<n;scanf("%d",&arr[i++]));

    printf("Original array: ");
    for(int i=0;i<n;printf("%d ",arr[i++]));

    for(int i=0;i<n;i++)push(stack,&top,arr[i]);

    for(int i=0;i<n;i++)arr[i]=pop(stack,&top);

    printf("Final array: ");
    for(int i=0;i<n;printf("%d ",arr[i++]));

}
void push(int *s,int *t,int nw){
    if(*t>=9){
        printf("Overflow\n");
        exit(-1);
    }
    s[++(*t)]=nw;
}
int pop(int *s,int *t){
    if(*t==-1){
        printf("\nUnderflow");
        exit(1);
    }
    return s[(*t)--] ;
}
void disp(const int *s,const int *t){
    int x=*t;
    while(t>=0){
        printf("%d\t",s[x--]);
    }
}