#include<bits/stdc++.h>

using namespace std;
 int main(){
  queue<int>q;
  q.push(10);
  q.push(20);
    q.push(30);
    q.emplace(40);
    q.back()+= 10; // Increment the last element by 10
    cout<<"back element: "<<q.back()<<endl; // Output the last element
    cout << "Size of queue: " << q.size() << endl; // Output the
    cout << "Front element: " << q.front() << endl; // Output the front
   q.pop(); // Remove the front element
   cout<<q.front()<<endl; // Output the new front element
   cout<<q.back()<<endl; // Output the back element
    return 0;
 }

