#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cout<<"enter string to be reversed: ";
	cin>>a;
	stack<char> s;
	for(int i=0;i<a.length();i++) {
		char ch=a[i];
		s.push(ch);
	}
	string ans="";
	while(!s.empty()) {
		char ch=s.top();
		ans.push_back(ch);
		s.pop();
	}
	cout<<"reversed string: "<<ans;
	return 0;
}
