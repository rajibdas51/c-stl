#include <bits/stdc++.h>
using namespace std;

int main() {
 
      multimap<int,int>mp;
 

     mp.emplace(2,5);
     mp.insert({3,7});
   mp.insert(make_pair(4,8));

     for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
     }
cout<<endl;
  // display elements using iterator

  mp.erase(4);
  map<int,int>::iterator it;
  for(it= mp.begin(); it!= mp.end(); it++){
    cout<<it->first<< "-"<<it->second<<endl;
  }
  

    mp.clear();


multimap<int,string> mm = {
        {1, "Un"},
        {1, "One"},
        {2, "Two"},
        {2, "Dos"},
        {1, "Uno"},
        {2, "Deux"}
    };

    cout<< "Key - Value " <<endl;
    for(const auto &key_value: mm){
        int key = key_value.first;
        string value = key_value.second;
        cout<<key<<" - "<<value<<endl;
    }
    return 0;
}
