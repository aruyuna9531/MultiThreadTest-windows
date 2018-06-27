//Windows多线程实例
#include <stdio.h> 
#include <windows.h>
#include <conio.h>

int seconds=0;

DWORD WINAPI Fun(LPVOID lpParamter)
{
	//这里是子线程动作
    while(1)
    {
		printf("%d秒过去了\n",seconds++);
		Sleep(1000);
	}
    return 0L;
}

int main()
{
    HANDLE hThread = CreateThread(NULL, 0, Fun, NULL, 0, NULL);
    CloseHandle(hThread);
	//主线程动作
    while(1){
		int c=getch();
		printf("按下了：%c\n",c);	//显示按下了什么键
		if(c==27)break;				//按下ESC退出
	}
    return 0;
}
