#include<iostream>

using namespace std;
const int up = 4096;
long f[up] = {0};
long sum(int k, int n){
	if (k < 1)
		return 0;
	if (k < n)
		return f[k];
	if (k%2==0){
		return k + sum(k/2, n);
	}
	else{
		return k + sum(3*k + 1, n);
	}
}
int main(){
	f[1] = 1;
	for (int  i = 2; i<up; i++){
		f[i] = sum(i, i);
		//cout<<f[i]<<", ";
	}
	
	int n = 0;
	int a, b, g;
	long m;
	cin>>n;
	while (n-- > 0){
		cin>>a>>b;
		m = -1;
		for (int k = a; k<=b; k++){
			long t = sum(k, up);
			if (m < t){
				m = t;
				g = k;
			}
		}
		cout<<m<<" "<<g<<endl;
	}
} 

