#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1("cd.txt");
    string ch;
    file1<<"Hello";
    file1.close();
    ifstream file2("cd.txt");
    while(getline(file2,ch))
    cout<<ch;
    file2.close();

    return 0;
}

/*#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}*/