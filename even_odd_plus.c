#include <stdio.h>
void sumx(int a);
void sumy(int b);
int isumx=0, isumy=0;
int main()
{
    int i,x,y;
    for(i=1;i<=25;i++)
    {
        if(i%2==1)
        {
            x=i;
            sumx(x);
            printf("홀수는 %d \n",x);
        }
        else
        {
            y=i;
            sumy(y);
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
*/
//전역변수 사용
void sumx(int a)
{
    isumx +=a;
}
void sumy(int b)
{
    isumy +=b;
}