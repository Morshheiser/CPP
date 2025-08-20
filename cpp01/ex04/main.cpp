#include "FileReplacer.hpp"

int main(int argc, char *argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv3;

        FileReplacer replacer(filename, s1, s2);
        replacer.replaceInFile();
    }
    else
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    return 0;
}