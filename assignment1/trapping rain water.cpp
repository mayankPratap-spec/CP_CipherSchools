#include<bits/stdc++.h>
using namespace std;


int trapping(const vector<int> &vec,int n){
	int res=0;
	int lmax[n],rmax[n];
	lmax[0]=vec[0];
	for(int i=1;i<n;i++){
		lmax[i]=max(vec[i],lmax[i-1]);
	}
	rmax[n-1]=vec[n-1];
	for(int i=n-2;i>=0;i--){
		rmax[i]=max(vec[i],rmax[i+1]);
	}
	for(int i=1;i<n-1;i++){
		res=res+min(lmax[i],rmax[i])-vec[i];
	}
	return res;	
	
	
}

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	cout<<trapping(vec,n);
	return 0;
}
