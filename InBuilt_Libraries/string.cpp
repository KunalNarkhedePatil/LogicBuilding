#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. getline
    string line;
    cout << "Enter a line: ";
    getline(cin, line);
    cout << "You entered: " << line << endl;

    // 2. size / length
    string str = "Hello, world!";
    cout << "Length of the string: " << str.size() << endl;

    // 3. append
    str.append(" Welcome!");
    cout << "Appended string: " << str << endl;

    // 4. find
    size_t pos = str.find("world");
    if (pos != string::npos) {
        cout << "Substring found at position " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    // 5. substr
    string substr = str.substr(7, 5);
    cout << "Substring: " << substr << endl;

    // 6. erase
    str.erase(7, 5);
    cout << "String after erasing substring: " << str << endl;

    // 7. replace
    str.replace(7, 0, "everyone");
    cout << "String after replacing: " << str << endl;

    // 8. compare
    string str1 = "apple";
    string str2 = "banana";
    int result = str1.compare(str2);
    if (result < 0) {
        cout << "str1 comes before str2" << endl;
    } else if (result > 0) {
        cout << "str1 comes after str2" << endl;
    } else {
        cout << "str1 and str2 are equal" << endl;
    }

    // 9. find_first_of
    size_t vowelPos = str.find_first_of("aeiou");
    if (vowelPos != string::npos) {
        cout << "First vowel found at position " << vowelPos << endl;
    } else {
        cout << "No vowel found" << endl;
    }

    // 10. find_last_of
    size_t lastVowelPos = str.find_last_of("aeiou");
    if (lastVowelPos != string::npos) {
        cout << "Last vowel found at position " << lastVowelPos << endl;
    } else {
        cout << "No vowel found" << endl;
    }

    return 0;
}
