
// ----------------------------------------------------------------------------------------------------------------------- //
void recur(vector<string>& ans, string s, int l, int r)
{
    // Base case
    if (l == r) ans.push_back(s);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string S = "ABC";
    vector<string> ans;
    recur(ans, S, 0, S.size() - 1);
    sort(ans.begin(), ans.end());
    return ans;
}