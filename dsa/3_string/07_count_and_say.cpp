

string countAndSay(int n) {
    // base condition
    if (n == 1) return "1";

    string a = countAndSay(n - 1);

    string ans = "";
    for (int i = 0;i < a.size();) {
        char c = a[i];
        int count = 0;
        while (i < a.size() && a[i] == c) {
            count++;
            i++;
        }
        ans += to_string(count);
        ans += c;
    }
    return ans;
}


