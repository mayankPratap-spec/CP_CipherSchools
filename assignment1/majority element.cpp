#include<bits/stdc++.h>
using namespace std;

int getCandidateIndex(const vector<int> &vec){
	int candidateIndex=0,count=1;
	for(int i=1;i<vec.size();i++){
		if(vec[i]==vec[candidateIndex]){
			count++;
		}
		else{
			count--;
		}
		
		if(count==0){
			candidateIndex=i;
			count=1;
		}
		
	}
	return candidateIndex;
}

void findMajority(const vector<int> &vec){
	int index=getCandidateIndex(vec);
	int freq=0;
	
	for(int i=0;i<vec.size();i++){
		if(vec[i]==vec[index]){
			freq++;
		}
	}
	if(freq>(vec.size())/2){
		cout<<vec[index]<<" ";
	}
	else{
		cout<<"No majority element found";
	}
	
}

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	findMajority(vec);
	return 0;
}
