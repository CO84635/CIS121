#include <iostream>
#include <string>

using namespace std;

int main() {
    string UserSentence;
    string cat = "/ᐠ｡ꞈ｡ᐟ\\";
    string kitty = "(•ㅅ•)";
    string kitten = "(•ㅅ•)";
    string yarn = "o~";
    string angry = "(=ಠᆽಠ=)";
    string dance = "~( ˘▾˘~)";

    string originalSentence;

    cout << "Welcome to the Cat Word Processor! Please enter a sentence: \n" << endl;
    getline(cin, UserSentence);
    originalSentence = UserSentence;

    size_t pos = UserSentence.find("cat");
    while (pos != string::npos) {
        UserSentence.replace(pos, 3, cat);
        pos = UserSentence.find("cat", pos + cat.length());
    }
    pos = UserSentence.find("kitty");
    while (pos != string::npos) {
        UserSentence.replace(pos, 5, kitty);
        pos = UserSentence.find("kitty", pos + kitty.length());
    }
    pos = UserSentence.find("kitten");
    while (pos != string::npos) {
        UserSentence.replace(pos, 6, kitten);
        pos = UserSentence.find("kitten", pos + kitten.length());
    }
    pos = UserSentence.find("yarn");
    while (pos != string::npos) {
        UserSentence.replace(pos, 4, yarn);
        pos = UserSentence.find("yarn", pos + yarn.length());
    }
    pos = UserSentence.find("angry");
    while (pos != string::npos) {
        UserSentence.replace(pos, 5, angry);
        pos = UserSentence.find("angry", pos + angry.length());
    }

    pos = UserSentence.find("dance");
    while (pos != string::npos) {
        UserSentence.replace(pos, 5, dance);
        pos = UserSentence.find("dance", pos + dance.length());
    }

    cout << "\nYour Sentence is: \n\n" << originalSentence << endl;
    cout << "\nThe Catified Sentence: \n\n" << UserSentence << endl;

    cout << "\nHave a fur-tastic day!";
    return 0;
}
