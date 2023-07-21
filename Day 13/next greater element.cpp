#include <bits/stdc++.h> 

 

using namespace std;

 

vector<int> nextGreater(vector<int> &arr, int n) {

    vector<int> v;

    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {

        if (s.size() == 0) {

            v.push_back(-1);

        } else if (s.size() > 0 && s.top() > arr[i]) {

            v.push_back(s.top());

        } else  {

            while (s.size() > 0 && s.top() <= arr[i]) {

                s.pop();

            }

            if (s.size() == 0) {

                v.push_back(-1);

            } else {

                v.push_back(s.top());

            }

        }

        s.push(arr[i]);

    }

    reverse(v.begin(),v.end());

    return v;

}
