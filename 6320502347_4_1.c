#include<stdio.h>
int main(){
    int day,exp,days[2],month[2],year[2];
    scanf("%d %d",&day,&exp);
    for(;day>0,exp>0;day/=100,exp/=100)
        if(day>=10000&&day<10000000){
            year[0]=day%100;
            year[1]=exp%100;
            }
        else if(day>=100){
            month[0]=day%100;
            month[1]=exp%100;
            }
        else if(day>=1){
            days[0]=day%100;
            days[1]=exp%100;
            }
    if(month[1]>12||month[0]>12||days[1]>31||days[0]>31||((days[1]>30||days[0]>30)&&((month[1]==4||month[1]==6||month[1]==8||month[1]==11)||(month[0]==4||month[0]==6||month[0]==8||month[0]==11)))||((days[1]>29||days[0]>29)&&(month[0]==2||month[1]==2)))
        printf("W");
    else if(year[1]>year[0])
        printf("B");
    else if(year[1]==year[0])
                if(month[1]>month[0])
                    printf("B");
                else if(month[1]==month[0])
                            if(days[1]>=days[0])
                                    printf("B");
                            else  printf("L");
                else  printf("L");
    else   if(year[1]<year[0])
        printf("L");
    }
