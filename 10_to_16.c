#include <stdio.h>
void main()
{
	int i, j, b[16];
	printf("정수를 입력하세요 : ");
	scanf("%d", &i);
	printf("%d=", i);
	for(j=15; j>=0; j--)  {
		b[j]=i%16;
		i=i/16;

		if (b[j]== 10)
		b[j] = 'A';
		else if (b[j] ==11)
		b[j] = 'B';
		else if (b[j] ==12)
		b[j] = 'C';
		else if (b[j] ==13)
		b[j] = 'D';
		else if (b[j] ==14)
		b[j] = 'E';
		else if (b[j] ==15)
		b[j] = 'F';
	}

	for(j=0; j<=15; j++){
		if(b[j]<10&&b[j]>=0)
			printf("%d", b[j]);
		else
			printf("%c", b[j]);
	}

	printf("\n\n");
}