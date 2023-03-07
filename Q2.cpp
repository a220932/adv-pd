#include <iostream>

using namespace std;
int main(){
	int n, m;	
	int i;
	while(cin>>n>>m){
		int a[n][m];
		int ct[256];
		for(i = 0; i < 256; i++){
			ct[i] = 0;
		}
		
		int max = 0, h = 0;
		int d;
		for(i = 0; i < n*m; i++){
			cin>>d;
			ct[d]++;
			if(ct[d] >= max){
				if(ct[d] == max)h = (d>h)?d:h;
				else h = d;
				max = ct[d];
			}
		}
		
	
		cout<<max<<endl;
		
		int l = h, r = h;

		while(ct[l] != 0 && l>=0)l--;
		while(ct[r] != 0 && r<256)r++;
		
		//cout<<l<<"  "<<r<<endl;
		if(r==256)cout<<l<<endl;
		else if(l == -1)cout<<r<<endl;
		else{
			cout<<((h-l<=r-h)?l:r)<<endl;	
		}		
			
		
	}
	return 0;
}
