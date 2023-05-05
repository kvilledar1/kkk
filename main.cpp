#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string dirName = "testdir";

    std::cout << "Creating directory: " << dirName << std::endl;
    fs::create_directory(dirName);
    std::cout << "Directory created." << std::endl;

    std::cout << "Removing directory: " << dirName << std::endl;
    fs::remove(dirName);
    std::cout << "Directory removed." << std::endl;

    return 0;
}
