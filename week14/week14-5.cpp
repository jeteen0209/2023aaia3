//week14-5.cpp not ok
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while(cin>>a>>b){
		while(a>0){
			cout << a << " ";
			a = a / b;
		}

		cout<<"Boring!\n";
	}
}
