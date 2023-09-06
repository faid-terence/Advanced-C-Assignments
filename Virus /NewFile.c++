#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    // Rename the original file to something else (e.g., "hello.docs_old")
    const wchar_t* sourceFilePath = L"hello.docs";
    const wchar_t* renamedFilePath = L"hello.docs_old";

    if (MoveFile(sourceFilePath, renamedFilePath) == 0) {
        cout << "Failed to rename the file." << endl;
    } else {
        cout << "File renamed successfully." << endl;
    }

    // Create a new "hello.docs" file with the desired message
    const wchar_t* newFilePath = L"hello.docs";

    ofstream newFile(newFilePath);

    if (newFile.is_open()) {
        newFile << "Contact Terence Faid JABO for assistance." << endl;
        newFile.close();
        cout << "Message added to the new hello.docs file." << endl;
    } else {
        cout << "Failed to create the new file." << endl;
    }

    return 0;
}
