#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplacer
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
        FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
        ~FileReplacer();

    void replaceInFile() const;
};

#endif
