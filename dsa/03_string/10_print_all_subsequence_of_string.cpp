
void recur(string mainString, string curr, int i, int n) {
    if (i == n) cout << curr < endl;
    else {
        recur(mainString, curr, i + 1, n);

        curr += mainString[i];
        recur(mainString, curr, i + 1, n);
    }
}



