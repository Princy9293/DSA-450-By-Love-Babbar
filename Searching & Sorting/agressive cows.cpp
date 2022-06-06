#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossible(vector <int> arr, int k, int mid) {
	int cow=1;
	int lastPos=arr[0];
	for(int i=0;i<arr.size();i++) {
		if(arr[i]-lastPos >=mid) {
			cow++;
			if(cow==k) {
				return true;
			}
			lastPos=arr[i];
		}
	
	}
	return false;
}
int aggressiveCows(vector<int> arr, int n, int k) {
	sort(arr.begin(),arr.end());
	int s=0;
	int max=-1;
	for(int i=0;i<n;i++) {
		if(arr[i]>max) {
			max=arr[i];
		}
	}
	int e=max;
	int ans=-1;
	int mid;
	while(s<=e) {
		mid=s+(e-s)/2;
		if(isPossible(arr,k,mid)) {
			ans=mid;
			s=mid+1;
		}
		else {
			e=mid-1;
		}
	}
	return ans;
}
int main() {
	vector<int> arr{2,3,1,4,6};
	cout<<aggressiveCows(arr,5,2);
	return 0;
}
