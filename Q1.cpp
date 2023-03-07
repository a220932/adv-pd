#include <iostream>

using namespace std;
int main(){
	int table[4][16] =
	 {{14, 4, 13, 1, 2, 15, 11, 8 , 3, 10, 6, 12, 5, 9, 0, 7},
	 {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
	 {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
	 {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}
	}; 
	int n = 0;	
		
	while(cin>>n){
		int a = 0, b = 0, c = 0;
		a = n%10 + 2*(n/100000);
		n/=10;
		int i = 0, d = 1;
		for(; i < 4;i++){
			b += d*(n%10);
			n/=10;
			d*=2;
		}
		//printf("%d %d %d",a,b, table[a][b]);
		c = table[a][b];
		d = 8;
		for(i = 0; i < 4; i++){
			cout<<c/d;
			c%=d;
			d/=2;
		}
		cout<<endl;
		
	}
	return 0;
}
