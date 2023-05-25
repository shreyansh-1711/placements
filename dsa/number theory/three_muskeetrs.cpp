#include <bits/stdc++.h>
using namespace std;
// checking if the character is vowel or not
bool isValid(char s) { return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'; } // storing all the subsets of those vowels
vector<string> allSubsets(string str)
{
    int sz = 1 << str.size();
    vector<string> ans;
    for (int mask = 0; mask < sz; mask++)
    {
        string s;
        for (int i = 0; i < str.size(); i++)
        {
            if (mask & (1 << i))
            {
                s.push_back(str[i]);
            }
        }
        if (s.size())
            ans.push_back(s);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
            cin >> str[i];              // taking the input string
        unordered_map<string, int> hsh; // creating the frequency of the subset string
        for (int i = 0; i < n; i++)
        {
            set<char> distinct_char;
            for (char ch : str[i])
            {
                if (isValid(ch))
                    distinct_char.insert(ch); // storing the vowels
            }
            string vowel;
            for (char ch : distinct_char)
                vowel.push_back(ch); // creating a string of vowels so that we can pass that vowel in the all subset  functions and generate subsets out of it.
            vector<string> all_subsets = allSubsets(vowel);
            for (string value : all_subsets)
                hsh[value]++;
        }
        long long ans = 0;
        for (auto &pr : hsh)
        {
            if (pr.second < 3)
                continue;
            long long ct = pr.second;
            long long ways = (ct * (ct - 1) * (ct - 2)) / 6;
            if (pr.first.size() % 2 == 0)
                ans -= ways;
            else
                ans += ways;
        }
        cout << ans << endl;
    }
}