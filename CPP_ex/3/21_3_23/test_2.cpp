#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include<algorithm> 
using namespace std;
unsigned int rand_32()
{
	return (rand()&0x3)<<30 | rand()<<15 | rand();
}
int main()
{
	srand(time(NULL));
	vector<unsigned int> v;
	unsigned a;
	for(long long  i = 0; i < 50000; i++){
		a = rand_32();
		if(a == 0)
			cout << "³öÏÖ 0 " << endl;
		auto t = find(v.begin(),v.end(),a);
		if(t != v.end()){
			cout << "ÖØ¸´" << endl;
		}
		else
			v.push_back(a);
	}
    system("pause");
	return 0;
}
