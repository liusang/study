#include <iostream>
using namespace std;

class A 
{
  public :
    A(char* data = nullptr);
	A(const A& data);
	~A(void);
  private :
    int* my_data;	
};


