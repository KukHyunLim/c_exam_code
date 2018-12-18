//조규성 과제였음 ㅋ
#include <stdio.h>
#include <stdlib.h>
void comp1( int x)
{
    int i;
    int j;
    if(x!=0){
        x=4;
    }
    else{
        printf("가로줄 길이 입력:");
        scanf("%d",&x);
        printf("별을 출력합니다.\n");
    }
    for(i=0;i<x*2;i++)
    {
        if(i==x) printf("\n");
        for(j=0;j<x;j++)
        {
            if(x<i&&i-(x+1)>=j)
                printf("  ");
             
            if(!(i-(x+1)>=j)&&j<=i)
                printf("★");
             
        }
        printf("\n");
    }
    printf("\n");
}
void comp2(int x)
{
    int i;
    int j;
    if(x!=0){
        x=4;
    }
    else{
        printf("가로줄 길이 입력:");
        scanf("%d",&x);
        printf("별을 출력합니다.\n");
    }
    for(i=0;i<x+2;i++)
    {
        for(j=0;j<x;j++)
        {
            if(x-i==j)
            {
                printf("  ");
            }else{
                printf("★");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void comp3(int x)
{
    int i;
    int j;
    if(x!=0){
        x=4;
    }
    else{
        printf("가로줄 길이 입력:");
        scanf("%d",&x);
        printf("별을 출력합니다.\n");
    }
    for(i=0;i<x*2-1;i++)
    {
        for(j=0;j<x;j++)
        {
            if((x-1>i&&(x-i)-1>j)||(x-1<i&&(i-x)>=j))
                printf(" ");
            else
                printf("★");
             
        }
        printf("\n");
    }
    printf("\n");
}
 
int main(void)
{
    int input=1;
    while(input!=0)
    {
        printf("-------------------------------------\n");
        printf("-   실행할 컴포넌트를 입력하시오.   -\n");
        printf("-              종료: 0              -\n");
        printf("-------------------------------------\n");
        printf("1. ===comp1===\n");
        comp1(1);
        printf("2. ===comp2===\n");
        comp2(1);
        printf("3. ===comp3===\n");
        comp3(1);
        printf("입력:");
        scanf("%d",&input);
        system("cls");
        if(input==1)
            comp1(0);
        else if(input==2)
            comp2(0);
        else if(input==3)
            comp3(0);
        else if(input!=0)
            printf("-------0~3사이의 숫자만 입력.--------\n");
        if(input>=1&&input<=3){
            printf("--종료 하시겠습니까?--\n");
            printf("----종료:0, 계속:1----\n");
            printf("입력:");
            scanf("%d",&input);
            system("cls");
        }
    }
     
    return 0;
}