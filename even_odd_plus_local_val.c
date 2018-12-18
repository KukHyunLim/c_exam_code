#include <stdio.h>
//int sumx(int a);
//int sumy(int b);
int main()
{
    int i,x,y;
    int isumx=0, isumy=0;
    for(i=1;i<=25;i++)
    {
        if(i%2==1)
        {
            x=i;
            isumx=isumx+x;//각 홀수가 나올때마다 isumx에 더해줍니다.
            printf("홀수는 %d \n",x);
        }
        else
        {
            y=i;
            isumy=isumy+y;//각 짝수가 나올때마다 isumy에 더해줍니다.
            printf("짝수는 %d \n",y);
        }
    }
    printf("홀수의 합= %d \n", isumx);//더한 결과값을 출력합니다.
    printf("짝수의 합= %d \n", isumy);
    return 0;
}
/*
* 함수를 쓰시려면
* 1. 포인터를 쓰거나
* 2. 전역변수로 더하거나
* 3. sum과 각 홀수,짝수를 같이 넘겨주어 더하거나
* 4. 기타등등..
* 그런방법을 사용 하시면 됩니다.
/*
int sumx(int a)
{
    int sum=0;
    sum +=a;
    return sum;
}
int sumy(int b)
{
    int sum=0;
    sum +=b;
    return sum;
}
*/