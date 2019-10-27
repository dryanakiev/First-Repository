#include <iostream>
using namespace std;
int main(){
	char Array[101][101];
	int n=1,m=1,br=1;
	while(n!=0){
		cin>>n>>m;
		if(n!=0){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>Array[i][j];
			}
		}
		for (int i=0; i<n;i++){
		for (int j=0;j<m;j++){
			if(Array[i][j]!='*')
				Array[i][j]='0';
			}
		}
		for (int i=0; i<n;i++){
		for (int j=0;j<m;j++){
			if (Array[i][j]=='*'){
				if(Array[i-1][j-1]!='*')Array[i-1][j-1]++;
				if(Array[i-1][j]!='*')Array[i-1][j]++;
				if(Array[i-1][j+1]!='*')Array[i-1][j+1]++;
				if(Array[i][j-1]!='*')Array[i][j-1]++;
				if(Array[i][j+1]!='*')Array[i][j+1]++;
				if(Array[i+1][j-1]!='*')Array[i+1][j-1]++;
				if(Array[i+1][j]!='*')Array[i+1][j]++;
				if(Array[i+1][j+1]!='*')Array[i+1][j+1]++;
				}
			}
		}
		cout<<"Field #"<<br<<":"<<endl;
		for (int i=0; i<n;i++){
		for (int j=0; j<m;j++){
		cout<<Array[i][j];
		}
			cout<<endl;
	}
	cout<<endl;
		for (int i=0; i<n;i++){
			for (int j=0;j<m;j++){
				Array[i][j]='0';
			}
		}
		br++;
	}
}
}
