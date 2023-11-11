#include <iostream>
#include<vector>
#include<string>
using namespace std;
class A
{

};

int main()
{
	
	vector<string> vecString;
	vector<A*> vecClass;
	
	int arr[] = { 1,2,3,4,5 };
	
	//vector初始化方式
	vector<int> vecInt1(arr,arr+5);
	vector<int> vecInt2(5, 10);
	for (int i = 4; i >= 0; i--)
	{
		cout << vecInt2[i] << endl;
	}
	vector<int> v3(vecInt1);

	for (int i = 4; i >= 0; i--)
	{
		cout << v3[i] << endl;
	}
	
	return 0;
}

