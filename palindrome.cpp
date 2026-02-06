#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int i, string s, int n)
{
    if (i >= n / 2)
    {

        return true;
    }
    if (s[i] != s[n - i - 1])
    {

        return false;
    }
    return ispalindrome(i + 1, s, n);
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (ispalindrome(0, s, n))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}
