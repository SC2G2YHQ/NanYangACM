#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int m,n;
	while(cin>>m>>n)
	{
		cout<<m*n*(m+1)*(n+1)/4<<endl;
	}
	return 0;
}
