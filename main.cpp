#include <iostream>

using namespace std;
//45개의 공 중 6개를 뽑는 프로그램 만들기


void Random()
{
	srand((unsigned int)time(NULL));


	cout << "랜덤으로 6개를 뽑습니다" << endl;

	for (int i = 0; i < 6; i++)
	{
		int SelectBall = rand() % 45;
		cout << SelectBall << " ";

	}
	cout << endl;
}



int main()
{
	int Ball[45] = { 0, };//공의 크기
	int SelectBall;

	Random();

	return 0;
}