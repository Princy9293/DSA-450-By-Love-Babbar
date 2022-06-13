#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
bool balancedUnbalanced(string s, int size) {
	
    	stack<char> st;
	for(int i=0;i<s.length();i++) {
		
		if(st.empty())
			{
				st.push(s[i]);
			}
			else if((st.top()=='('&& s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))
			{
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
}


	if(st.empty())
		{
		return true;
		}
		return false;
	
}
int main() {
	string s;
	cout<<"enter expression: ";
	cin>>s;
	int size=s.length();
	cout<<"result: "<<balancedUnbalanced(s,size);
	return 0;
}
