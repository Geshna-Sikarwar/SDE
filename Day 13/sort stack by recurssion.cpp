#include <bits/stdc++.h> 
void insert(int x,stack<int>&s)
{
	if(s.empty() or s.top()<x)
	s.push(x);
	else{
		int a=s.top();
		s.pop();
		insert(x,s);
		s.push(a);
	}
}
void reverse(stack<int>&s)
{
	if(s.size()>0)
	{
		int x=s.top();
		s.pop();
		reverse(s);
		insert(x,s);
	}

}
void sortStack(stack<int> &s)
{
	// Write your code here
	//stack<int>s;
	reverse(s);
}
