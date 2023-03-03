# include <stdio.h>
# include <conio.h>
# include <graphics.h>
# include <stdlib.h>
# include <time.h>

void Setred() {
	setcolor(RED);
	setfillcolor(RED);
}

void Setblue() {
	setcolor(BLUE);
	setfillcolor(BLUE);
}
int abc(int x) {
	return x < 0 ? x * -1 : x;
}

int main() {
	srand(time(0));
	HWND h = initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();
	setcolor(RED);
	setfillcolor(RED);
	SetWindowText(h, L"hangxiaopa games");	//³õÊ¼»¯
	int x = 50, y = 50;
	int Boxx = 100, Boxy = 100;
	int Count = 0;
	TCHAR Text = L'0';
	while (Count < 5) {
		cleardevice();
		outtextxy(600, 400, Text + Count);
		Setred();
		fillcircle(x, y, 20);
		Setblue();
		fillcircle(Boxx, Boxy, 20);
		char ch = _getch();
		switch (ch) {
		case'a' :
			x -= 10;
			break;
		case'd' :
			x += 10;
			break;
		case'w' :
			y -= 10;
			break;
		case's' :
			y += 10;
			break;
		}
		if (abc(x - Boxx) <= 20 && abc(y - Boxy) <= 20) {
			Count++;
			Boxx = rand() % 600;
			Boxx += 20;
			Boxy = rand() % 420;
			Boxy += 20;
		}
	}
	MessageBox(h, L"You are Winner!", L"¹»À÷º¦£¡", MB_OK);
	return 0;
}