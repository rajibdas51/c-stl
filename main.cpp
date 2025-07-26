#include <bits/stdc++.h>
using namespace std;

int main() {
 
        int n;
        cin>>n;
     for(int i=0; i<n; i++){
       
        for(int j=0; j<= n-i-1; j++){

            cout<<" ";
        }
         for(int k=1; k<= (i*2+1); k++){

            cout<<"*";
        }
  for(int x=0; x< n-i-1; x++){

            cout<<" ";
        }

        cout<<endl;
     }
   

    return 0;
}
