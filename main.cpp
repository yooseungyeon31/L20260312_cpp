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

int main()
{
	int Size = 45;

	int* Ball = new int[Size];

	

	srand((unsigned int)time(NULL));

	cout << "랜덤으로 6개를 뽑습니다" << endl;


	for (int i = 0; i < 6; i++)
	{
		Ball[i] = (rand() % 45)+1;

		for (int j = 0; j < i; j++)
		{
			if (Ball[i] == Ball[j])
			{
				i--;
				break;
			}
		}

	}

	for (int i = 0; i < 6; i++)
	{
		cout << Ball[i] << " ";
	}
	cout << endl;

	delete[] Ball;
	Ball = nullptr;


	return 0;
}