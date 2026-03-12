#include <iostream>

#include "Engine.h"

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


//
//void Init(int* Pocket,int Size);
//void Shuffle(int* Pocket, int Size);
//void Pick(int* Pocket, int Size, int PickCount);
//
//
//
//int main()
//{
//	int Size = 0;
//
//	int PickCount = 0;
//
//	cin >> Size;
//	cin >> PickCount;
//	int* Pocket = new int[Size]; //힙영역에 동적할당 해주는 것. //내가 삭제를 직접 하지
//	//않는 이상 메모리에 남아있음. 삭제가 필요
//
//	Init(Pocket, Size);
//
//	Shuffle(Pocket, Size);
//
//	Pick(Pocket, Size,PickCount);
//
//	delete[] Pocket; //삭제하고
//	Pocket = nullptr;//가리키는게 없다고 표시
//
//	return 0;
//}
//
//
//void Init(int* Pocket, int Size)
//{
//	srand((unsigned int)time(NULL));
//
//	//initialize
//	for (int i = 0; i < Size; i++)
//	{
//		Pocket[i] = i + 1;
//
//	}
//}
//
//void Shuffle(int* Pocket, int Size)
//{
//
//	//Shuffle (섞기. 임의(rand)
//	for (int i = 0; i < Size * 10; i++)
//	{
//		int FirstIndex = rand() % Size;
//		int SecondIndex = rand() % Size;
//
//		int Temp = Pocket[FirstIndex];
//		Pocket[FirstIndex] = Pocket[SecondIndex];
//		Pocket[SecondIndex] = Temp;
//
//	}
//
//}
//
//void Pick(int* Pocket, int Size, int PickCount)
//{
//	for (int i = 0; i < PickCount; i++)
//	{
//		cout << Pocket[i] << " ";
//	}
//
//}



//----------------------------------------

//예제  주어진 그림대로 출력하는 프로그램 만들기 
//직접 한거지만 오로지 반복문만 사용함.. 결국 결과는 이상함..



//int main()
//{
//	int Size = 0;
//	char Star[10][10] = { '*' };
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (i == 0 || i == 10 - 1 || j == 0 || j == 10 - 1)
//			{
//				Star[i][j] = '*';
//			}
//			else {
//				Star[i][j] = ' '; // 나머지는 공백
//			}
//		}
//	}
//	return 0;
//
//}
//char Star[10] = { '*','*','*','*','*','*','*','*','*','*' };

////int* Star = new int[Size];

//for (int i = 0; i < 9; i++)
//{
//	cout << Star[i];

//}


//for (int i = 0; i < 9; i++)
//{

//	cout << Star[i] << endl;


//	for (int j = 0; j < 9; j++)
//	{
//		cout << " ";
//	}
//	cout << Star[i] << endl;
//}

//for (int i = 0; i < 10; i++)
//{
//	cout << Star[i];

//}
//cout << endl;




//----제미나이 해설
//
//
//int main()
//{
//    int row = 10; // 세로
//    int col = 10; // 가로
//
//    // 1. 이차원 배열 동적 할당 (포인터 사용)
//    char** map = new char* [row];
//    for (int i = 0; i < row; i++) {
//        map[i] = new char[col];
//    }
//
//    // 2. 모눈종이에 밑그림 그리기 (초기화)
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            // 테두리(0번째 줄, 마지막 줄, 0번째 칸, 마지막 칸)는 '*'
//            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
//                map[i][j] = '*';
//            }
//            else {
//                map[i][j] = ' '; // 나머지는 공백
//            }
//        }
//    }
//
//    // 3. 원하는 위치에 'P' 찍기 (좌표만 바꾸면 이동 가능!)
//    map[1][1] = 'P';
//
//    // 4. 한꺼번에 출력하기
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            cout << map[i][j] << " "; // 가독성을 위해 한 칸 띄움
//        }
//        cout << endl; // 한 줄 끝나면 줄바꿈
//    }
//
//    // 5. 메모리 해제
//    for (int i = 0; i < row; i++) delete[] map[i];
//    delete[] map;
//
//    return 0;
//}

//------------------------------------------
//강사님 설명 


//overloading 재정의

//int Add(int A, int B)
//{
//	return A + B;
//}
//
//float Add(float A, float B)
//{
//	return A + B;
//}
//
//double Add(double A, double  B)
//{
//	return A + B;
//}


struct InnerType
{
	int A;
	int B;
};


struct CustomDataType
{
	int A;
	int B;
	float C;
	bool D;
	InnerType Inner;
};

class AActor//물체를 만들때 설계도를 그리듯 class가 설계도 역할
{
public:
	int X;
	int Y;


	void Add()
	{

	}

	void Move()
	{
		this->Add();
	}
};
//사물(OPP) 단위가 빠를까? 절차 만드는게 빠를까? 실행 속도 기준.
//computer는 매우빠르다. 사람이 만드는게 훨씬 오래걸린다.
// 
// 언리얼에서도 시작하자마자 블루프린트 클래스를 만든다. 클래스로 물건을 만든다.
//포인터는 내가 원할떄 동적으로 할당하기 좋다.'
// 클래스를 만들었을때 준수해할 원칙SOLID
//사물-> 데이터(데이터 모델링)
//OOP
int main()
{
	CustomDataType Data;
	CustomDataType* P = &Data;
	Data.A = 1;

	std::cout << (*P).A;
	std::cout << P->A;

	AActor* Player = nullptr;//화살표만 있는것. 아무것도 
	//가리키지 않는다는 뜻

	Player = new AActor();
	//물체를 정하고 그거에 대한 설계도를 쓰고 할 것을 적는다. 
	Player->Move(); //플레이어가 움직이는걸 표현하는것
	//주어를 써준다. 플레이어가 움직인다. 

	delete Player;
	Player = nullptr;

	return 0;

	//----------------------------------
	bool bIsRunning = true;

	//GameLoop
	while (bIsRunning) //frame
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Render();
	}



	return 0;
}