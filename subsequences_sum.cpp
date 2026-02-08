// print all the subsequences of an array whose sum is equal to a given number#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
using namespace std;
void printsubs(int index, vector<int> &arr, vector<int> &ds, int sum, int K)
{
    if (index == arr.size())
    {
        if (sum == K)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return;
        }
        else
        {
            return;
        }
    }
    // take the element
    sum += arr[index];
    ds.push_back(arr[index]);
    printsubs(index + 1, arr, ds, sum, K);
    // not take the element
    sum -= arr[index];
    ds.pop_back();

    printsubs(index + 1, arr, ds, sum, K);
}
int main()
{
    vector<int> arr = {1, 2, 1};
    int K = 2;
    vector<int> ds;
    int sum = 0;

    printsubs(0, arr, ds, sum, K);
    return 0;
}
