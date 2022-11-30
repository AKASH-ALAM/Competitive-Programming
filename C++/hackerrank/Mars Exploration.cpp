#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i += 3){
        if(s[i] != 'S') cnt++;
        if(s[i+1] != 'O') cnt++;
        if(s[i+2] != 'S') cnt++;
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    cout << result << "\n";

    fout.close();

    return 0;
}
