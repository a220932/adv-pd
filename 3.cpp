#include <iostream>

using namespace std;
int main(){
	int n = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		char p;
		int h, m, s, t;
		cin>>p>>h>>m>>s;
		
		if (p == 'E'){
			t = h*60 + m;
			t = t*60 + s;
			
			s = t%30;
			t/=30;
			
			m = t%48;
			t/=48;
			
			h = t;
			
			cout<<"Z "<<h<<" "<<m<<" "<<s<<endl;
			
		}
		else {
			t = h*48 + m;
			t = t*30 + s;
			
			s = t%60;
			t/=60;
			
			m = t%60;
			t/=60;
			
			h = t;
			
			cout<<"E "<<h<<" "<<m<<" "<<s<<endl;
			
		}
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
