#include<iostream>
using namespace std;
void unionArray(int arr1[], int n1, int arr2[], int n2) {
	int i=0;
	int j=0;
	while(i<n1 && j<n2) {
		if(arr1[i]<arr2[j]) {
			cout<<arr1[i++]<<" ";
		}
		   else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
	}
	
	while (i < n2)
        cout << arr1[i++] << " ";
 
    while (j < n1)
        cout << arr2[j++] << " ";
}

	int main() {
	int n1, n2;
	cout<<"enter size of n1 : ";
	cin>>n1;
	cout<<"enter element of arr1 : ";
	int arr1[n1];
	for(int i=0;i<n1;i++) {
		cin>>arr1[i];
	}
	cout<<"enter size of n2 : ";
	cin>>n2;
	cout<<"enter element of arr2 : ";
	int arr2[n2];
	for(int i=0;i<n2;i++) {
		cin>>arr2[i];
	}
	cout<<"union : ";
	unionArray(arr1,n1,arr2,n2);
	return 0;
}
