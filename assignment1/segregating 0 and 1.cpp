#include<bits/stdc++.h>
using  namespace std;

void segregate(vector<int> &vec){
	int type0=0,type1=vec.size()-1;
	while(type0<type1){
		if(vec[type0]==1){
			swap(vec[type0],vec[type1]);
			type1--;
		}
		else{
			type0++;
		}
	}
	
}

int main(){
	int arr[]={0,1,0,1,1,0,0,0,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	vector<int> vec(arr,arr+n);
	segregate(vec);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}
