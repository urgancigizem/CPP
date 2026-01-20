#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return content;
    
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;
    
    while ((pos = content.find(s1, lastPos)) != std::string::npos)
    {
        result.append(content, lastPos, pos - lastPos);
        result.append(s2);
        lastPos = pos + s1.length();
    }
    result.append(content, lastPos, std::string::npos);
    
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
    {
        content += line;
        if (!inputFile.eof())
            content += '\n';
    }
    inputFile.close();

    std::string result = replaceAll(content, s1, s2);

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create file '" << outputFilename << "'" << std::endl;
        return 1;
    }

    outputFile << result;
    outputFile.close();

    std::cout << "File created successfully: " << outputFilename << std::endl;
    return 0;
}