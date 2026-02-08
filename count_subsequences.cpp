// print all the subsequences of an array whose sum is equal to a given number#include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
int printsubs(int index, int s, int sum, vector<int> arr, int n)
{
    if (s > sum)
        return 0;
    if (index == n)
    {
        if (s == sum)
        {

            return 1;
        }
        else
            return 0;
    }
    // take the element
    s += arr[index];

    int l = printsubs(index + 1, s, sum, arr, n);

    // not take the element
    s -= arr[index];

    int r = printsubs(index + 1, s, sum, arr, n);

    return l + r;
}
int main()
{

    vector<int> arr = {1, 2, 1, 3, 4, 5};
    int sum = 5;
    int n = 6;
    vector<int> ds;

    cout << printsubs(0, 0, sum, arr, n);
    return 0;
}
