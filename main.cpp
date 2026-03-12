#include <iostream>

using namespace std;
//45개의 공 중 6개를 뽑는 프로그램 만들기
//-----------------------------------------------
//그냥 만든거 간단하게 
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
//포인터 heap으로 동적할당, 함수형으로 

//void init(int* Ball, int Size)
//{
//	for (int i = 0; i < Size; i++)
//	{
//		Ball[i] = i + 1;
//	}
//	srand((unsigned int)time(nullptr));
//}
//
//void Shuffle(int* Ball, int Size)
//{
//	
//
//	for (int i = 0; i < Size * 10; i++)
//	{
//		int FirstIndex = rand() % Size;
//		int SecondIndex = rand() % Size;
//		int Temp = Ball[FirstIndex];
//
//		Ball[FirstIndex] = Ball[SecondIndex];
//		Ball[SecondIndex] = Temp;
//	}
//}
//
//
//void Random(int* Ball, int Size)
//{
//
//	for (int i = 0; i < Size; i++)
//	{
//		cout << Ball[i] << " ";
//	}
//}
//
//int main()
//{
//	int Size = 45;
//	int SelectBall = 6;
//	int* Ball = new int[Size];
//
//	
//
//	
//	cout << "랜덤으로 6개를 뽑습니다" << endl;
//	init(Ball, Size);
//	Shuffle(Ball, Size);
//	Random(Ball, SelectBall);
//
//
//	
//
//	delete[] Ball;
//	Ball = nullptr;
//
//
//	return 0;
//}
//-------------------------------------







//강사님 코드
//-----------------------------------------



void Init(int* Pocket,int Size);
void Shuffle(int* Pocket, int Size);
void Pick(int* Pocket, int Size, int PickCount);



int main()
{
	int Size = 0;

	int PickCount = 0;

	cin >> Size;
	cin >> PickCount;
	int* Pocket = new int[Size]; //힙영역에 동적할당 해주는 것. //내가 삭제를 직접 하지
	//않는 이상 메모리에 남아있음. 삭제가 필요

	Init(Pocket, Size);

	Shuffle(Pocket, Size);

	Pick(Pocket, Size,PickCount);

	delete[] Pocket; //삭제하고
	Pocket = nullptr;//가리키는게 없다고 표시

	return 0;
}


void Init(int* Pocket, int Size)
{
	srand((unsigned int)time(NULL));

	//initialize
	for (int i = 0; i < Size; i++)
	{
		Pocket[i] = i + 1;

	}
}

void Shuffle(int* Pocket, int Size)
{

	//Shuffle (섞기. 임의(rand)
	for (int i = 0; i < Size * 10; i++)
	{
		int FirstIndex = rand() % Size;
		int SecondIndex = rand() % Size;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SecondIndex];
		Pocket[SecondIndex] = Temp;

	}

}

void Pick(int* Pocket, int Size, int PickCount)
{
	for (int i = 0; i < PickCount; i++)
	{
		cout << Pocket[i] << " ";
	}

}



//----------------------------------------

