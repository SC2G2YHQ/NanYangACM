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
	int c,m,n,i,j,k,t;
	cin>>m;
	while(m--){
		cin>>n;
		i=0;
		while(n--){
			cin>>a[i].Begin>>a[i].End;
			i++;
		}
		sort(a,a+i,cmp);
		t=1;
		c=0;
		k=1;
		
		while(k<i){
			while(a[k].Begin<=a[c].End&&k<i){
				k++;
			}
			if(a[k].Begin>a[c].End){
				c=k;
				t++;
			}
		}
		
		cout<<t<<endl;
	}
	return 0;
}
