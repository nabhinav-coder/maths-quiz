#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Easy();
void Medium();
void Hard();
void Very_Hard();
int main(){
    char name[50];
    printf("Enter player name:");
    scanf("%49s",name);
    int n,d;
    printf("Enter number of questions:");
    scanf("%d",&n);
    printf("choose difficulty\n");
    printf("1.Easy\n");
    printf("2.Medium\n");
    printf("3.Hard\n");
    printf("4.Very Hard\n");
    scanf("%d",&d);
    srand(time(NULL));
    switch(d){
        case 1:
            Easy(n);
            break;
        case 2:
            Medium(n);
            break;
        case 3:
            Hard(n);
            break;
        case 4:
            Very_Hard(n);
            break;
        case 5:
            printf("Invalid dificulty level");
            break;
    }
    printf("Press Enter to continue");
    getchar();
    getchar();
    return 0;
}
void Easy(int n){
    int p,q,r,e,s,w;
    s=0;
    for(int i=0;i<n;i++){
    char op[]={'+','-','*','/'};
    int index= rand()% 4;
    char o=op[index];
    if(o=='*' || o=='/'){
        printf("Enter Floor integer value\n");
        p=rand()%10 +1;
        q=rand()%10+1;
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        if(o=='/'){
            e=p/q;
        }
        else{
            e=p*q;
        }
    }
    else if(o=='-'){
        p=rand()%10 +1;
        q=rand()%(p+1);
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p-q;
    }
    else{
        p=rand()%10+1;
        q=rand()%10+1;
        printf("SOLVE %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p+q;
    }
    if(e==r){
        s++;
    }
    w=n-s;
    }
printf("\n=====RESULT======\n");
printf("Total number of questions: %d\n",n);
printf("No of questions answered correct: %d\n",s);
printf("Total number of questions answered wrong:%d\n",w);
printf("Total points : %d\n",s);
}
void Medium(int n){
    int p,q,r,e,s,w;
    s=0;
    for(int i=0;i<n;i++){
    char op[]={'+','-','*','/'};
    int index= rand()% 4;
    char o=op[index];
    if(o=='*' || o=='/'){
        printf("Enter Floor integer value\n");
        p=rand()%100 +1;
        q=rand()%100+1;
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        if(o=='/'){
            e=p/q;
        }
        else{
            e=p*q;
        }
    }
    else if(o=='-'){
        p=rand()%100 +1;
        q=rand()%(p+1);
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p-q;
    }
    else{
        p=rand()%100+1;
        q=rand()%100+1;
        printf("SOLVE %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p+q;
    }
    if(e==r){
        s++;
    }
    w=n-s;
    }
printf("\n=====RESULT======\n");
printf("Total number of questions: %d\n",n);
printf("No of questions answered correct: %d\n",s);
printf("Total number of questions answered wrong:%d\n",w);
printf("Total points : %d\n",s);
}
void Hard(int n){
    int p,q,r,e,s,w;
    s=0;
    for(int i=0;i<n;i++){
    char op[]={'+','-','*','/'};
    int index= rand()% 4;
    char o=op[index];
    if(o=='*' || o=='/'){
        printf("Enter Floor integer value\n");
        p=rand()%100 +1;
        q=rand()%100+1;
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        if(o=='/'){
            e=p/q;
        }
        else{
            e=p*q;
        }
    }
    else if(o=='-'){
        p=rand()%1000 +1;
        q=rand()%(p+1);
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p-q;
    }
    else{
        p=rand()%1000+1;
        q=rand()%1000+1;
        printf("SOLVE %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p+q;
    }
    if(e==r){
        s++;
    }
    w=n-s;
    }
printf("\n=====RESULT======\n");
printf("Total number of questions: %d\n",n);
printf("No of questions answered correct: %d\n",s);
printf("Total number of questions answered wrong:%d\n",w);
printf("Total points : %d\n",s);
}
void Very_Hard(int n){
    int p,q,r,e,s,w;
    s=0;
    for(int i=0;i<n;i++){
    char op[]={'+','-','*','/'};
    int index= rand()% 4;
    char o=op[index];
    if(o=='*' || o=='/'){
        printf("Enter Floor integer value\n");
        p=rand()%100 +1;
        q=rand()%(p+1);
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        if(o=='/'){
            e=p/q;
        }
        else{
            e=p*q;
        }
    }
    else if(o=='-'){
        p=rand() +1;
        q=rand()%(p+1);
        printf("solve %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p-q;
    }
    else{
        p=rand()+1;
        q=rand()+1;
        printf("SOLVE %d %c %d: ",p,o,q);
        scanf("%d",&r);
        e=p+q;
    }
    if(e==r){
        s++;
    }
    w=n-s;
    }
printf("\n=====RESULT======\n");
printf("Total number of questions: %d\n",n);
printf("No of questions answered correct: %d\n",s);
printf("Total number of questions answered wrong:%d\n",w);
printf("Total points : %d\n",s);
}