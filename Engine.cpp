#include "Engine.h"
#include "conio.h"
#include <iostream>
#include <Windows.h>

//custom data type 우리가 원하는 데이터 타입으로 만들자
//struct Position
//{
//	int X;
//	int Y;
//};
//
//Position PlayerPosition;

FVector2i PlayerPosition = { 1,1 }; //여기서 실제 작업발생

int PlayerX=1;
int PlayerY=1;



int Map[10][10] =
{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

int Input()
{
	return _getch();
}

void Tick(int KeyCode)
{
	if (KeyCode == 'w')
	{
		AddPlayerOffset(0, -1);
	}
	if (KeyCode == 's')
	{
		AddPlayerOffset(0, 1);
	}
	if (KeyCode == 'a')
	{
		AddPlayerOffset(-1,0);
	}
	if (KeyCode == 'd')
	{
		AddPlayerOffset(1,0);
	}
}

void Clear()
{
	for (int Y = 0; Y < 10; Y++)
	{
		Gotoxy(1, Y);
		std::cout << "           ";
	}

}

void AddPlayerOffset(int DeltaX, int DeltaY)
{
	PlayerPosition.X += DeltaX;
	PlayerPosition.Y += DeltaY;
}

void Render()
{
	Clear();

	//Clear
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			Gotoxy(X, Y);

			if (PlayerPosition.X == X && PlayerPosition.Y == Y)
			{
				std::cout << "P";
			}
			else if (Map[Y][X] == 1)
			{
				std::cout << "#";
			}
			else if (Map[Y][X] == 0)
			{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
}

//내가 원하는 곳에 커서 두게 해주세요
void Gotoxy(int x, int y)
{
	COORD Pos = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}