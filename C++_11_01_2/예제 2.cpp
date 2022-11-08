#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> sv;		//문자열 벡터 생성
	string name;

	cout << "이름 5개를 입력하시오 : " << endl;

	for (int i = 0; i < 5; i++)		//한 줄에 하나씩 5개 입력받기
	{
		cout << i + 1 << " --> ";
		getline(cin, name);
		sv.push_back(name);		//sv 벡터의 마지막에 name을 추가
	}

	name = sv.at(0);		//벡터의 첫 번째 원소

	for (int i = 1; i < sv.size(); i++)
	{
		if (name < sv[i])		//만일 sv[i]의 문자열이 name보다 사전상 뒤에 위치한 경우
		{
			name = sv[i];		//name을 sv[i]의 문자열로 변경
		}
	}

	cout << "사전에서 가장 뒤에 위치한 이름은 " << name << "입니다." << endl;
}