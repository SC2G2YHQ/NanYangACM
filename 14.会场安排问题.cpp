#include <iostream>
#include <algorithm>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int Begin;
	int End;
}activition;

activition a[10000];

int cmp(activition a1,activition a2){
	return a1.End<a2.End;
}

int main(int argc, char** argv) {
	int m,n,i,j,t;
	cin>>m;
	while(m--){
		cin>>n;
		i=0;
		while(n--){
			cin>>a[i].Begin>>a[i].End;
			i++;
		}
		t=0;
		for(j=1;j<i;j++){
			t++;
			while(a[i].Begin<=a[i-1].End&&i<j){
				i++;
			}
		}
		cout<<t<<endl;
	}
	return 0;
}
