#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	long long m,n;
	unsigned long long c;
	while(cin>>m>>n)
	{
		m=m*(m+1)/2;
		n=n*(n+1)/2;
		c=m*n;
		cout<<c<<endl;
	}
	return 0;
}
