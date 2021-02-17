#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &vec,int n,int x){
	int low=0,high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(x==vec[mid]){
			return mid;
		}
		else if(vec[low]<=vec[mid]){
			if(x>=vec[low]&&x<vec[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		else{
			if(x>=vec[mid]&&x<vec[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
			
		}
		
	}
}

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int res=binary(vec,n,x);
	cout<<"element is at index:"<<res;
}
