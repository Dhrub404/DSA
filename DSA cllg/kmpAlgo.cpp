#include <iostream>
#include <vector>
using namespace std;

vector<int> lps(string pat) {
    vector<int> lps(pat.length());

    int len = 0;
    int i = 1;

    while (i < pat.length()) {

        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {

            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

void kmp(string s1, string pat) {

    vector<int> lpsArr = lps(pat);

    int i = 0; // main string
    int j = 0; // pattern

    while (i < s1.length()) {

        if (s1[i] == pat[j]) {
            i++;
            j++;
        }

        if (j == pat.length()) {

            cout << "pattern found " << (i - j) << endl;

            // for repeating patterns
            j = lpsArr[j - 1];
        }

        else if (i < s1.length() && s1[i] != pat[j]) {

            if (j != 0) {
                j = lpsArr[j - 1];
            }
            else {
                i++;
            }
        }
    }
}

void disp(vector<int> a) {

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {

    string s1 = "aaabaaab";
    string pat = "aaab";

    // disp(lps(pat));

    kmp(s1, pat);

    return 0;
}