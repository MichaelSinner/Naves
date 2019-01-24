#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	bool game_over = false;
	int x = 10;
    int y = 10;
    printf(x,y)

	while(!game_over)
	{
		if(kbhit()){
			char tecla = getch();
			gotoxy(x,y);printf(" ");
			if(tecla == 'j') x--;
            if(tecla == 'l') x++;
            if(tecla == 'i') y--;
            if(tecla == 'k') y--;
            gotoxy(x,y); printf(" ");
		}
        Sleep(30)

	}
	return 0;
}

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
