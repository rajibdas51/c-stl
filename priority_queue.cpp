#include<bits/stdc++.h>

using namespace std;
 int main(){
    // This is called max-heap by default
    // Elements are sorted in descending order
    priority_queue <int> pq;

    pq.push(10);
    pq.push(20);    
    pq.push(30);
    pq.emplace(40);
    cout<<"Top element: "<<pq.top()<<endl; // Output the top element

    cout << "Size of priority queue: " << pq.size() << endl; // Output the size
    pq.pop(); // Remove the top element
    cout << "New top element: " << pq.top() << endl; // Output the

    // Min heap with custom comparator
    priority_queue<int, vector<int>,greater<int>>minHeap;

    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(30);
    minHeap.emplace(40);
    cout << "Top element of min-heap: " << minHeap.top() << endl; // Output the top element of min-heap
    cout << "Size of min-heap: " << minHeap.size() << endl; // Output the size of min-heap
    minHeap.pop(); // Remove the top element of min-heap
    cout << "New top element of min-heap: " << minHeap.top() << endl; // Output the new top element of min-heap
    return 0;
 }

