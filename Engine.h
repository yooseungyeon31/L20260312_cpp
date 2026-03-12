#pragma once

#ifndef __ENGINE_H__ //어디에 있다고만 알려줌.
#define __ENGINE_H__  

extern int Map[10][10];

extern int PlayerX;
extern int PlayerY;

struct FVector2i
{
	int X;
	int Y;

};

//class Position //struct가 class로 변하고 안에 함수를 선언
//{
//	int X;
//	int Y;
//	void AddPlayerOffset(int DeltaX, int DeltaY)
//	{
//
//	}
//};
//객체를 많이 저장해야하는데 그러면 새로운 자료형을 만드는게 편함. 
//변수만 저장할수 있게 새로운 자료형을 (struct) 만듬 하지만 그렇게만 하면
//밑에 호출한 함수가 어디에 소속된건지 알기 불편함
//그래서 확장하는게 안에 함수까지 넣어야겠다 그게 바로 class

//C++에서는 구조체로 만드나 class로 만드나 똑같음.
//class는 public 이 들어감.. 
//public class




extern FVector2i PlayerPosition; //이게 메모리 공간 잡는것
//PlayerPosition을 가리켜라

//template class
//template function
//template<typename T>
//T Add(T A, T B)
//{
//	return A + B;
//}

int Input();

void Tick(int KeyCode);

void Render();

void Gotoxy(int x, int y);

void Clear();
void AddPlayerOffset(int DeltaX, int DeltaY);



#endif //__ENGINE_H__