#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
using namespace std;
//delete
void delete_line(const char *file_name, int n) 
{ 
    ifstream is(file_name); 
    ofstream ofs; 
    ofs.open("temp.txt", ofstream::out); 
    char c; 
    int line_no = 1; 
    while (is.get(c)) 
    { 
        if (c == '\n') 
        line_no++; 
        if (line_no != n) 
            ofs << c; 
    } 
    ofs.close(); 
    is.close(); 
    remove(file_name); 
    rename("temp.txt", file_name); 
} 

int main
{
     int n = 3; 
    delete_line("a.txt", n); 
    //display
    ifstream ifile;
	char s[100], fname[20];
	cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout<<"Error in opening file..!!";
		getch();
		exit(0);
	}
	while(ifile.eof()==0)
	{
        ifile>>s;
        cout<<s<<" ";
	}
	cout<<"\n";
	ifile.close();
    return 0;
}
  
