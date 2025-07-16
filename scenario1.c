//MPCS

#include<stdio.h>

int main(){
    int temp,c1=0,c2=0,c3=0;
    float all=0.0,av1,av2,av3;
    for(int i=0;i<3;i++){
        scanf("%d",&temp);
        c1+=temp;
        scanf("%d",&temp);
        c2+=temp;
        scanf("%d",&temp);
        c3+=temp;
    }
    all=(c1+c2+c3)/9;
    if(all<=70.0f)
        printf("All trainees are unfit");
    else{
        av1=(float)c1/3;
        av2=(float)c2/3;
        av3=(float)c3/3;

        if(av1>av2){
            if(av1>av3)
                printf("Trainee Number 1");
            else if(av1==av3)
                printf("Trainee Number 1\nTrainee Number 3");
            else
                printf("Trainee Number 3");
        }
        else if(av1==av2){
            if(av1>av3)
                printf("Trainee Number 1\nTrainee Number 2");
            else if(av1==av3)
                printf("Trainee Number 1\nTrainee Number 2\nTrainee Number 3");
            else
                printf("Trainee Number 3");

        }
        else if(av2>av1){
            if(av2>av3)
                printf("Trainee Number 2");
            else if(av2==av3)
                printf("Trainee Number 2\nTrainee Number 3");
            else
                printf("Trainee Number 3");

        }
    }
    return 0;
}