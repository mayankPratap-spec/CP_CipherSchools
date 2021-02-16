#include<bits/stdc++.h>
using namespace std;

bool meet(int x1,int x2,int v1,int v2){
	if((x1>x2 && v1>=v2) || (x2>x1 && v2>=v1)){
		return false;
	}
	return((abs(x1-x2)%abs(v1-v2))==0);
	
}

int main(){
	int x1,x2,v1,v2;
	cin>>x1>>x2>>v1>>v2;
	if(meet(x1,x2,v1,v2)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
	
}
