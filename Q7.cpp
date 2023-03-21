#include<iostream>
using namespace std;
int main() {
	
	string str;
	getline(cin, str);
	int n = 0;
	for (int i = 0; i < str.length(); i++){
		char c = str[i];
		if (c>='0' && c<='9'){
			n*=10;
			n += (c-'0');
		}
	}
	
	while(n-- > 0) {
		int point[101] = {0};	
		
		getline(cin, str);
		
		int max = -1, t = 0;
		for (int i = 0; i < str.length(); i++){
			char c = str[i];
			if (c>='0' && c<='9'){
				t*=10;
				t += (c-'0');
			}
			else{
				//cout<<"::"<<t<<"::";
				point[t]++;
				if (t > max)
					max = t;
				t = 0;
			}
		}
		point[t]++;
		if (t > max)
			max = t;
		t = 0;	
		
		
		int d = 0;
		if(max < 95)
			d = 95 - max;
		
		int s = 0;
		for(int k = 55 - d; k <= 59 - d; k++){
			if (k < 0)
				continue;
			//cout<<k<<":"<<point[k]<<",";
			s += point[k];
		}
		cout<<s<<endl;
	}



}
