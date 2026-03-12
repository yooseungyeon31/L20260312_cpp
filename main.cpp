#include <iostream>

using namespace std;
//45개의 공 중 6개를 뽑는 프로그램 만들기
//-----------------------------------------------

//void Random()
//{
//	srand((unsigned int)time(NULL));
//
//
//	cout << "랜덤으로 6개를 뽑습니다" << endl;
//
//	for (int i = 0; i < 6; i++)
//	{
//		int SelectBall = rand() % 45;
//		cout << SelectBall << " ";
//
//	}
//	cout << endl;
//}
//
// 
//
//int main()
//{
//	int Ball[45] = { 0, };//공의 크기
//	int SelectBall;
//
//	Random();
//
//	return 0;
//}

//--------------------------------------------------
//포인터 heap으로

void init(int* Ball, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		Ball[i] = i + 1;
	}
	srand((unsigned int)time(nullptr));
}

void Shuffle(int* Ball, int Size)
{
	

	for (int i = 0; i < Size * 10; i++)
	{
		int FirstIndex = rand() % Size;
		int SecondIndex = rand() % Size;
		int Temp = Ball[FirstIndex];

		Ball[FirstIndex] = Ball[SecondIndex];
		Ball[SecondIndex] = Temp;
	}
}


void Random(int* Ball, int Size)
{

	for (int i = 0; i < Size; i++)
	{
		cout << Ball[i] << " ";
	}
}

int main()
{
	int Size = 45;
	int SelectBall = 6;
	int* Ball = new int[Size];

	

	
	cout << "랜덤으로 6개를 뽑습니다" << endl;
	init(Ball, Size);
	Shuffle(Ball, Size);
	Random(Ball, SelectBall);


	

	delete[] Ball;
	Ball = nullptr;


	return 0;
}


