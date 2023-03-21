#include<iostream>

using namespace std;
int f(int p, int b, int* box1, int m){
	if (p == m)
		return 0;
		
	int max = f(p+1, b, box1, m); 
	if (b == -1 || b <= box1[p]) {
		int t = 1 + f(p+1, box1[p], box1, m);
		if (max < t)
			max = t;
	}
	return max;
}
int main(){
	int n = 0;
	cin>>n;
	for (; n > 0; n--){
		int m = 0;
		cin>>m;
		int box[2][m];
		for (int k = 0; k < m; k++){
			int a, b;
			cin>>a>>b;
			if(a>b)a^=b^=a^=b;
			for (int i = 0; i<k; i++){
				if(a<box[0][i]||(a==box[0][i]&&b<box[1][i])){
					box[0][i]^=a^=box[0][i]^=a;
					box[1][i]^=b^=box[1][i]^=b;		
				}
			}
			box[0][k] =a;
			box[1][k] =b;
		}
		//for (int k = 0; k < m; k++){
		//	cout<<box[0][k]<<" "<<box[1][k]<<endl;
		//}
		
		cout<<f(0, -1, box[1], m)<<endl;
	}
} 

