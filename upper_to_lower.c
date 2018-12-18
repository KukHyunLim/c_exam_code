#include <stdio.h>
//standard input output
#include <conio.h>
//fflush 쓸수있게 해주는애.
void main()
{
	// 입력할 문자의 변수를 만듦
	char CH ;
	//문자를 입력하라고 화면에 출력
	printf("Shift 할 영문자를 입력해 주세요.");
	//문자를 키보드로부터 받는부분 #1
	scanf("%c",&CH);
	//영문자인지 채크하는 부분
	while(!(( CH >= 65 && CH <= 90 )||(CH >= 94 && CH <= 122)))	{
		printf("영문자만 입력하세요");
		//버퍼를 비우는 부분 
		//버퍼가 뭐나면 입력을 받았을때 메모리에 저장되는건데 엔터도 입력이라서 위에#1 부분에서 문자입력하고 엔터치면 엔터가 버퍼에 남아있어서 문자입력이 안되는 경우가 있거등 ㅋ
		//그래서 버퍼를 비워주는데 이게 fflush 임. 근데 이사람 이거 리눅스에서 코딩햇나 visual studio 에서는 버퍼 안비워도 알아서 처리됨,
		fflush(stdin);
		//입력받는부분
		scanf("%c",&CH);
	}
	//입력된 문자가 대문자이면
	if('A'<=CH&&CH<='Z') putchar(CH+32);
	//소문자이면
	else if('a'<=CH&&CH<='z') putchar(CH-32);
 
}
//끝