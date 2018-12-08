//找出数组中重复数字
#include <iostream>
using namespace std;

bool FindRepeatNum(int numbers[]);
int main()
{
	int numbers[] = {2,3,1,0,2,5,3};
	FindRepeatNum(numbers);
	cout << sizeof(numbers)/sizeof(numbers[0]);

}
bool FindRepeatNum(int numbers[])
{
	int n = sizeof(numbers)/sizeof(numbers[0]);
	cout << n << endl;
	return false; 
}


