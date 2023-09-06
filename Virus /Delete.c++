#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    // Specify the path to the file you want to delete the contents of
    fs::path filePath("hello.docs");

    if (fs::exists(filePath)) {
        // Open the file for writing, which will effectively delete its contents
        std::ofstream outputFile(filePath);

        if (outputFile.is_open()) {
            // Close the file to ensure the contents are deleted
            outputFile.close();
            std::cout << "Contents of hello.docs have been deleted." << std::endl;
        } else {
            std::cerr << "Failed to open hello.docs for writing." << std::endl;
        }
    } else {
        std::cerr << "File hello.docs does not exist." << std::endl;
    }

    return 0;
}
