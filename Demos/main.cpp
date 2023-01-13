#include <cctype>
#include <string>
#include <iostream>

using namespace std;

int main() {
    bool rejected = false;
    string name;
    while (true) {
        cout << "Enter your name: ";
        getline(cin, name);
        for (int i = 0; i < name.length() && !rejected; i++) {
            if (isalpha(name[i]))
                continue;
            if (name[i] == ' ')
                continue;
            rejected = true;
        }
        if (!rejected) {
            cout << "Input is valid.";
            break;
        } else {
            cout << "Input is NOT valid.\n";
            rejected = false;
        }

    }
}
