#include<iostream>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                    if(arr[i]+arr[j]==k) {
                        count++;
                    } 
            }
        }
        return count;
}
int main() {
	int n;
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter elements of array : ";
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<"enter K : ";
	int k;
	cin>>k;
	cout<<"no of pairs with sum equal to "<<k<<" : "<<getPairsCount(arr, n, k);
	return 0;
}
