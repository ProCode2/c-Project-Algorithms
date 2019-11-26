#include <iostream>
#include <fstream>
using namespace std;

int main () {
  //create and read and write into a file
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  fstream file; 
  //append
    ifstream ifile("file.txt", ios::in); 
    ofstream ofile("file2.txt", ios::out | ios::app); 
    if (!ifile.is_open()) { 
        cout << "file not found"; 
    } 
    else { 
        ofile << ifile.rdbuf(); 
    } 
    string word; 
    file.open("file2.txt"); 
    while (file >> word) { 
        cout << word << " "; 
    }   
  return 0;
}
