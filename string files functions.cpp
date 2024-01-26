#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>

int main() {
    std::ifstream inputFile("files and functions/ode to joy.txt");
    std::string text((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());

    if (text.empty()) {
        std::cout << "The file is empty." << std::endl;
        return 0;
    }

    std::cout << "length of the text: " << text.length() << std::endl;

    size_t count = std::count(text.begin(), text.end(), '*');
    text.erase(std::remove(text.begin(), text.end(), '*'), text.end());
    std::cout << "totally * removed: " << count << std::endl;

    text += " Ludwig van Beethoven";

    std::ofstream outputFile("files and functions/corrected text.txt");
    outputFile << text;

    return 0;
}

