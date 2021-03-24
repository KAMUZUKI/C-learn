#include<iostream>
#include<time.h>
#include<cstdlib>
#include<string>
using namespace std;
unsigned int rand_32()
{
	return (rand()&0x3)<<30 | rand()<<15 | rand();
}
int main()
{
	srand(time(NULL));
	unsigned a;
	for(int i = 0; i < 10; i++)
    {
		a = rand_32();
		cout << hex << a << endl;
	}
    system("pause");
	return 0;
}