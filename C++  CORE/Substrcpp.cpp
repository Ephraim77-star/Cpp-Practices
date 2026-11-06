#include <iostream>
#include <string>
using namespace std;

bool isSubset(const string& mainStr, const string& subStr) {
    int mainIndex = 0, subIndex = 0;

    // Traverse both strings
    while (mainIndex < mainStr.length() && subIndex < subStr.length()) {
        if (mainStr[mainIndex] == subStr[subIndex]) {
            subIndex++; // Move to the next character in subStr
        }
        mainIndex++; // Always move to the next character in mainStr
    }

    // If we traversed all characters of subStr, it is a subset
    return subIndex == subStr.length();
}

int main() {
    string mainStr = "telephone";
    string subStr = "phone";

    if (isSubset(mainStr, subStr)) {
        cout << "\"" << subStr << "\" is a subset of \"" << mainStr << "\"" << endl;
    } else {
        cout << "\"" << subStr << "\" is NOT a subset of \"" << mainStr << "\"" << endl;
    }

    return 0;
}