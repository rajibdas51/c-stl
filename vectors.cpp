#include<bits/stdc++.h>

using namespace std;
 int main(){
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  for(int i=0; i<v.size(); i++){
    //cout<<v[i]<<" ";
  }

  // declaring vector where values are pairs
  vector<pair<int,int>> vp;
  vp.push_back({2,3});
  vp.emplace_back(4,5);
 for(int j=0; j<vp.size(); j++){
    cout<<vp[j].first<<" "<<vp[j].second<<" ";

}

vector<int> v2({2,3,4,5,10});


// iterator

vector<int>::iterator it = v2.begin();
 it++;
 cout<<*it<<endl;// prints 10
 it = it+2; // now it points to 4
 cout<<*it<<endl; // prints 4

 cout<<v2[0] <<" "<< v2.at(0) <<endl; // prints 2 2
 cout<<v2.back()<<endl;

 // printing vector

 for(vector<int>::iterator it = v2.begin(); it!=v2.end(); it++){
    cout<<*it<<" ";
 }

 for(auto it=v2.begin(); it!=v2.end(); it++){
        cout<<*it<<" ";
 }
 cout<<endl;
    for(auto x: v2){
        cout<<x<<" ";
    }

    // deleting elements in vector

    v2.erase(v2.begin()+1,v2.begin()+4); // deletes 3 to 5
    cout<<endl;
     for(auto x: v2){
        cout<<x<<" ";
    }

    // inserting elements in vector

    v2.insert(v2.begin(),1);
    v2.insert(v2.begin()+1,2,3);
    vector<int> copy(2,9);
    v2.insert(v2.begin()+2,copy.begin(),copy.end());
     cout<<endl;
    v2.pop_back(); // removes last element


    //swap vectors
    vector<int> v3({2,3,4,5});
    v2.swap(v3); // swaps v2 and v3
     for(auto x: v2){
        cout<<x<<" ";
    } 
    cout<<endl;
   // erase the entire vector
   v2.clear();

     for(auto x: v2){
        cout<<x<<" ";
    }

return 0;
 }