#include<bits/stdc++.h>
using namespace std;

int firstoccur(vector<int> &vec,int x){
	int res=-1,low=0,high=vec.size()-1;
	while(low<=high){
		int mid= low+(high-low)/2;
		
		if(x<vec[mid]){
			high=mid-1;
		}
		else if(x>vec[mid]){
			low=mid+1;
		}
		else{
			res=mid;
			high=mid-1;
		}
	}
	return res;
}

int lastoccur(vector<int> &vec,int x){
	int res=-1,low=0,high=vec.size()-1;
	while(low<=high){
		int mid= low+(high-low)/2;
		
		if(x<vec[mid]){
			high=mid-1;
		}
		else if(x>vec[mid]){
			low=mid+1;
		}
		else{
			res=mid;
			low=mid+1;
		}
	}
	return res;
	
}

int main(){
	int n,x;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	cin>>x;
	int f1=firstoccur(vec,x);
	int l1=lastoccur(vec,x);
	cout<<"first occurence is: "<<f1<<endl;
	cout<<"last occurence is: "<<l1<<endl;
	
	return 0;
}
