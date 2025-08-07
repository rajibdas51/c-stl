#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2) {
       if(p1.second< p2.second) return true;
       else if(p1.second > p2.second) return false;
       else if(p1.first> p2.first) return true;
       else return false;
   }
 int main(){
   
    
   int n = 4;
    pair <int,int> a[] = {{1,2},{2,1},{4,1},{2,5}};

    cout<<"Before sorting"<<endl;
    cout<<"first"<<" - "<<"second"<<endl;
    for(const auto p: a){
        cout<<p.first<<" - "<<p.second<<endl;
    }
   // sort it according to second element
   // if second element is same, then sort it 
   // according to first element but in descending
    sort(a,a+n,comp);
    cout<<"After sorting"<<endl;
 cout<<"first"<<" - "<<"second"<<endl;
    for(const auto p: a){
        cout<<p.first<<" - "<<p.second<<endl;
    }


    // __builtin_popcout() returns the num of 1's in binary representation of a number
    int num= 7;
    int cnt = __builtin_popcount(7); // it will return 3 cuz binary of 7 is 111
    // for long long num function is __builtin_popcountll()
    long long nums = 5232324143;
    int cntll = __builtin_popcountll(cntll);

    cout<<cnt<<endl;
    cout<<cntll<<endl;

    // permutations of string using next_permutation
    string s= "231";

    do {
        cout<<s<<endl;

    } while(
       next_permutation(s.begin(),s.end()));

    // max and min element/value in an array
    int arr[8] ={1,3,57,343,5,7,9,13};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int maxval= *max_element(arr,arr+size);
    int minval= *min_element(arr,arr+size);
     cout<<"max value :"<<maxval<<endl;
     cout<<"min value :"<<minval<<endl;
// with vector
    vector<int> v = {10, 5, 20, 8, 2};

    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());

    cout << "Min: " << *min_it << endl;
    cout << "Max: " << *max_it << endl;
    return 0;
 }

