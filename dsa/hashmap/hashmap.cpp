/* TOPIC: HASHMAPS */

#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<string, int> hash;

    //inerstion
    pair<string, int> p = make_pair("sj", 3);
    hash.insert(p);

    hash["mera"] = 1;
    hash["mera"] = 2;

    cout << hash["mera"] << endl;
    cout << hash.at("mera") << endl;
    cout << hash["sj"] << endl;


    cout << hash.size() << endl;

    cout << hash.count("bro") << endl;
    cout << hash.count("sj") << endl;








    

    return 0;
}