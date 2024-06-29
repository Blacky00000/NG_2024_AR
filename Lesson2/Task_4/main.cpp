#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);

    int space;
    int words = 0;

    char character;
    for (size_t k = 0; k < sentence.length(); ++k){
        character = sentence[k];

        if (character == '-' || character == '?' ||
            character == '!' || character == '.' ||
            character == ',' || character == ';' ||
            character == '\''){
            continue;
        }

        if (character == ' '){
            space = 1;
        } else if (space == 1 || k == 0){
            words += 1;
            space = 0;
        }
    }
    cout << words;
    return 0;
}
