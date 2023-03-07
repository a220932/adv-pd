#include <iostream>

using namespace std;
int w[50][50] = {0};
int cost(int x, int y, int d){
	int co = w[x][y];
	switch(d){
		case 0:{
			co += w[x-1][y];
			co += w[x-1][y-1];
			co += w[x-1][y+1];
			break;
		}
		case 1:{
			co += w[x][y+1];
			co += w[x+1][y+1];
			co += w[x-1][y+1];
			
			break;
		}
		case 2:{
			
			co += w[x+1][y];
			co += w[x+1][y-1];
			co += w[x+1][y+1];
			break;
		}
		case 3:{
			co += w[x][y-1];
			co += w[x+1][y-1];
			co += w[x-1][y-1];
			break;
		}
	}
	
	return co;
}
int main(){
	int m;
	cin>>m;
	
	
	for (int i = 0; i<m; i++)
		for (int j = 0; j<m; j++)
			cin>>w[i][j];
			
	int min = 99999;
	//cout<<cost(1,1,0);
	for (int i = 1; i<m-1; i++)
		for (int j = 1; j<m-1; j++)
			for (int d = 0; d<4; d++){
				int c = cost(i,j,d); 
				if(min > c)min = c;
			}
			
	cout<<min;
	
	return 0;
}


