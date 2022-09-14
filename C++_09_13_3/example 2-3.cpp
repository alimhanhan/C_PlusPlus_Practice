#include <iostream>
using namespace std;

int main()
{
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width;      //키보드로부터 너비를 읽어 width 변수에 저장한다.

	cout << "높이를 입력하세요>>";

	int height;
	cin >> height;   //키보드로부터 높이를 읽어 height 변수에 저장한다.

	int area = width * height;           //사각형 면적 계산
	cout << "면적은 " << area << "\n";     //면적 출력 후 다음 줄로 이동
}