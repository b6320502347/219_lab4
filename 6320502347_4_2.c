#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int num[n],score[n],give,vote[n],max,nmax=0;
for(i=0;i++;i<n){
    score[i]=0;
    vote[i]=0;
    }
for(i=0;i++;i<n)
    for(j=0;j++;j<n){
    if(j==i)
    j++;
    scanf("%d",&give);
    if(give>=1&&give<=5){
        score[j]+=give;
        vote[j]++;
        }
    }
for(i=0;i++;i<n)
    score[i]/=vote[i];
for(i=0;i++;i<n){
    if(i==0){
    max=score[i];
    num[0]==i+1;
    }
    else if(score[i]>max){
        max=score[i];
        nmax=0;
        num[nmax]=i+1;
        }
    else if(score[i]==max){
        nmax++;
        num[nmax]=i+1;
        }
    }
    for(i=0;i<=nmax;i++){
        printf("%d\n",num[i]);
    }
    }
