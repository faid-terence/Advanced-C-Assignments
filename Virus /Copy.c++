
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    // Create a shortcut to hello.docs
    const wchar_t* sourceFilePath = L"hello.docs";
    const wchar_t* shortcutFilePath = L"hello.lnk";

    if (CreateSymbolicLink(shortcutFilePath, sourceFilePath, 0) == 0) {
        cout << "Failed to create a shortcut." << endl;
    } else {
        cout << "Shortcut created by Terence Faid JABO." << endl;
    }

    // Read the contents of hello.docs and store them in another file
    ifstream inputFile("hello.docs");
    ofstream outputFile("hello_contents.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            outputFile << line << endl;
        }

        cout << "Contents of hello.docs copied to hello_contents.txt." << endl;
        inputFile.close();
        outputFile.close();
    } else {
        cout << "Failed to open one or both files." << endl;
    }

    return 0;
}
