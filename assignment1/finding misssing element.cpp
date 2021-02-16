#include<bits/stdc++.h>
using namespace std;

int getmissing(const vector<int> &vec){
	int x1=vec[0];
	int x2=1;
	
	for(int i=1;i<vec.size();i++){
		x1=x1^vec[i];
	}
	for(int i=2;i<=(vec.size()+1);i++){
		x2=x2^i;
	}
	return(x1^x2);
}

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	cout<<getmissing(vec);
	return 0;
}
