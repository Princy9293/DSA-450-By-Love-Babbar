#include<iostream>
using namespace std;
void sort012(int a[], int n)
{
    int zero=0,one=0,two=0;
 	for(int i=0;i<n;i++)   {
     if(a[i]==0) {
         zero++;
     }
     if(a[i]==1) {
         one++;
     }
     if(a[i]==2) {
         two++;
     }

     
    }
	int i=0;
	while(zero--) {
    a[i]=0;
    i++;
	}
 	while(one--) {
    a[i]=1;
    i++;
	}
 	while(two--) {
    a[i]=2;
    i++;
	}
}
int main() {
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter elements of array : ";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort012(arr,n);
	cout<<"sorted Array : ";
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
