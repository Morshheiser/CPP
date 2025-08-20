#include "FileReplacer.hpp"
#include <fstream>
#include <iostream>

FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2) {}

FileReplacer::~FileReplacer() {}

void FileReplacer::replaceInFile() const
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: cannot create output file " << filename << ".replace" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
}
