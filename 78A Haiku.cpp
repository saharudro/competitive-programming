#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is a vowel
bool isvowel(char x) {
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}

// Function to count vowels in a given string
int vowelcount(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isvowel(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string a, b, c;

    // Read three lines of input
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    // Check if the lines satisfy the haiku pattern
    if ((vowelcount(a) == 5) && (vowelcount(b) == 7) && (vowelcount(c) == 5)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
