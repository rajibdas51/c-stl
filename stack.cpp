#include<bits/stdc++.h>

using namespace std;
 int main(){
    stack<int>st;
    st.push(2); // {2}
    st.push(3); // {2, 3}
    st.push(4);     // {2, 3, 4}
    st.push(5); // {2, 3, 4, 5}
    st.push(3);  // {2, 3, 4, 5, 3}
    st.emplace(5);  // {2, 3, 4, 5, 3, 5}

    cout<<st.top()<<endl;
    st.pop(); // {2, 3, 4, 5, 3}
    cout<<st.top()<<endl;
    cout<<st.size()<<endl; // 5
    cout<<st.empty()<<endl; // 0 (false)

    stack <int> st1,st2;
    st1.swap(st2); // swap contents of st1 and st2
    return 0;
 }

