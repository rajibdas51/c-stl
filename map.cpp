#include <bits/stdc++.h>
using namespace std;

int main() {
 
      map<int,int>mp;
     map<int, pair<int,int>>mp2;
     map<pair<int,int>,int>mp3;

     mp[1]=2;
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
    return 0;
}
