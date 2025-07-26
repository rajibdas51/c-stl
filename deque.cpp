#include<bits/stdc++.h>

using namespace std;
 int main(){
    deque<int> d={1,2,3,4,5};
    d.push_back(6);
    d.emplace_back(7);
    d.push_front(0);
    d.emplace_front(-1);

    d.pop_back();
    d.pop_front();
    cout<< "Deque elements: "<<endl;
    for(auto x: d){
        cout<<x<<" ";
    }
    // rest of the functions are similar as vector
    d.insert(d.begin(),-2);
    d.insert(d.begin(),2,34);
    d.erase(d.begin(), std::next(d.begin(), 2)); // deletes -2
    return 0;
 }

