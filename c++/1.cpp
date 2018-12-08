#include <iostream>
using namespace std;

int GetSize(int data[]) //形参等效写法：int* data
{
  return sizeof(data);
}

int main()
{
  int data[] = {1,2,3}; //定义数组，一个int占4个字节
  int *data2 = data;
  int size1 = sizeof(data); //数组data的size：3×4=12
  int size2 = sizeof(data2); //指针指向数组data的第一个数字，64位系统，一个指针占8位
  int size3 = GetSize(data); //数组做形参，相当于数组的地址做形参
  cout << size1 << '\t' << size2 << '\t' << size3 <<endl;

}
