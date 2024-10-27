#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

bool ContainsTripleStars(const string& s) {
    return s.find("***") != string::npos;
}

string ReplaceTripleStars(string s) {
    size_t pos = 0;
    while ((pos = s.find("***", pos)) != string::npos) {
        s.replace(pos, 3, "!!");
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    if (ContainsTripleStars(str)) {
        cout << "String contains a group of '***'" << endl;
    }
    else {
        cout << "No '***' found" << endl;
    }

    cout << "Modified string: " << ReplaceTripleStars(str) << endl;
    return 0;
}
