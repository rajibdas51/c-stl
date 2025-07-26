#include<bits/stdc++.h>

using namespace std;
 int main(){
    pair<int,int>p={5,7};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int>> nest = {2,{3,5}};

      cout<<nest.first<<" "<<nest.second.first<<" "<<nest.second.second<<endl;

      pair<int,int>arr[] = {{2,3},{4,5},{6,7}};
      cout<<arr[1].first<<endl;
    return 0;
 }