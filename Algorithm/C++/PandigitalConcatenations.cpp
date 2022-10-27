// C++ program to find all
// Pandigital concatenations
// of two strings.
#include <bits/stdc++.h>
using namespace std;
 
// Checks if a given
// string is Pandigital
bool isPanDigital(string s)
{
    bool digits[10] = {false};
    for (int i = 0; i < s.length(); i++)
        digits[s[i] - '0'] = true;
 
    // digit i is not present
    // thus not pandigital
    for (int i = 0; i <= 9; i++)
        if (digits[i] == false)
            return false;
 
    return true;
}
 
// Returns number of pairs
// of strings resulting in
// Pandigital Concatenations
int countPandigitalPairs(vector<string> &v)
{
    // iterate over all
    // pair of strings
    int pairs = 0;
    for (int i = 0; i < v.size(); i++)
        for (int j = i + 1; j < v.size(); j++)
            if (isPanDigital(v[i] + v[j]))
                pairs++;
    return pairs;
}
 
// Driver code
int main()
{
    vector<string> v = {"123567", "098234",
                        "14765", "19804"};
    cout << countPandigitalPairs(v) << endl;
    return 0;
}