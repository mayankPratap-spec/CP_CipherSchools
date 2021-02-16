#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &vec){
	int low=0,high=vec.size()-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if((mid==0 || vec[mid-1]<=vec[mid]) && (mid==vec.size()-1 || vec[mid+1]<=vec[mid]) ){
			return mid;
		}
		
		if(mid>0 && vec[mid+1]>=vec[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int res=findPeak(vec);
	cout<<vec[res];
	return 0;
}

