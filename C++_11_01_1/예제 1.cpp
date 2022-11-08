#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;		//정수만 삽입 가능한 벡터

	v.push_back(1);		// v[0]=1
	v.push_back(2);		// v[1]=2
	v.push_back(3);		// v[2]=3

	for (int i = 0; i < v.size(); i++)		//변경 전 벡터의 모든 원소 출력  -->  1 2 3 출력
	{
		cout << v[i] << " ";		//v[i]는 벡터의 i번째 원소
	}

	cout << endl;

	v[0] = 10;		//백터의 첫 번째 원소를 10으로 변경
	
	int n = v[2];		//변수 n에 3저장
	v.at(2) = 5;		//v[2]=3 이였으나, v[2]=5 로 변경
						// 이 코드는 v[2]=5 로도 작성 가능 

	for (int i = 0; i < v.size(); i++)	//변경 후 벡터의 모든 원소 출력  -->  10 2 5 출력
	{
		cout << v[i] << " ";		//v[i]는 벡터의 i번째 원소
	}

	cout << endl;

}