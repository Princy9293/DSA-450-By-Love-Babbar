#include<iostream> 
using namespace std;
void valueEqualToIndex(int arr[], int n) {
	 int x=0;
	for(int i=0;i<n;i++) {
	if(arr[i]==i+1) {
		cout<<i+1<<" ";
		x=1;
	}	
	}
	if(x==0) {
	cout<<-1;
	}
}
int main() {
	int arr[5]={2,3,6,3,1};
	valueEqualToIndex(arr,5);
	return 0;
}
