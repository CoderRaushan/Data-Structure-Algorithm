#include <iostream>
#include <unordered_map>
using namespace std;
char getMaxOccurringChar(string str) {
    int freq[26] = {0};

    for (char ch : str) {
        freq[ch-'a']++;
    }

    int maxFreq = 0;
    char result;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = char(i+'a');
        }
    }
    return result;
}
int main() {
    string str = "takeuforwardddd";
    cout << "Maximum occurring character: " << getMaxOccurringChar(str) << endl;
    return 0;
}