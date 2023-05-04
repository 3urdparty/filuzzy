
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void readLines(string &path, vector<string> &content)
{
  ifstream file(path);
  string line;

  while (getline(file, line))
  {
    content.push_back(line);
  }
  file.close();
}

bool fileExists(string path)
{
  ifstream file(path);
  return file.good();
};

void writeLinesToFile(string &path, vector<string> &lines)
{
  ofstream file(path);
  for(string line:lines){
    file << line << endl;
  }
  file.close();
}

void copyFile(string& path1, string& path2) {
  vector<string> lines;
  readLines(path1, lines);
  writeLinesToFile(path2, lines);
};
