#include<iostream>
using namespace std;
int state[9][100] = {0};
int stt(char c){
	switch(c){
		case '1':{
			return 1;
			break;
		}
		case '2':{
			return 2;
			break;
		}
		case '3':{
			return 3;
			break;
		}
		case 'H':{
			return 4;
			break;
		}
		default:{
			return -1;
			break;
		}
	}
}
int gain(int st, int out, int f, int s, int t, int h, int n){
	if (out == n)
		return h;
	int r = state[st%9][st/9];
	st++;
	//return gain(st, out, f, s, t, h, n);
	switch(r){
		case 1:{
			return gain(st, out, 1, f, s, h+t, n);
			break;
		}
		case 2:{
			return gain(st, out, 0, 1, f, h+s+t, n);
			break;
		}
		case 3:{
			return gain(st, out, 0, 0, 1, h+f+s+t, n);
			break;
		}
		case 4:{
			return gain(st, out, 0, 0, 0, h+1+f+s+t, n);
			break;
		}
		case -1:{
			out++;
			if (out%3 == 0)
				return gain(st, out, 0, 0, 0, h, n);
			else
				return gain(st, out, f, s, t, h, n);
			break;
		}
	}
}
int main() {	
	for (int i = 0; i<9; i++){
		int k = 0;
		cin>>k;
		for (int j = 0; j<k; j++){
			string str;
			cin>>str;
			state[i][j] = stt(str[0]);
		}
	}
	
	int n = 0;
	cin>>n;
	
	cout<<gain(0, 0, 0, 0, 0, 0, n)<<endl;
}
