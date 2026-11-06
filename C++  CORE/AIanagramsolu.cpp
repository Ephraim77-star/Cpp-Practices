#include <iostream>
#include <algorithm>
#include <string>

// Function to check if two strings are anagrams
bool areAnagrams(const std::string& str1, const std::string& str2) {
    // If lengths are not equal, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Create copies of the strings to sort them
    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;

    // Sort both strings
    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());

    // Compare the sorted strings
    return sortedStr1 == sortedStr2;
}

int main() {
    std::string word1, word2;

    // Prompt the user to enter the first word
    std::cout << "Enter the first word: ";
    std::cin >> word1;

    // Prompt the user to enter the second word
    std::cout << "Enter the second word: ";
    std::cin >> word2;

    // Check if the words are anagrams and display the result
    if (areAnagrams(word1, word2)) {
        std::cout << "The words are anagrams." << std::endl;
    } else {
        std::cout << "The words are not anagrams." << std::endl;
    }

    return 0;
}