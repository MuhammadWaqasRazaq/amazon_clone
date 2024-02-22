#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream myfile("file.txt");
    myfile<<"my name is waqas i am from lahore";
    myfile.close();


    string text;
    ifstream myyfile("file.txt");

    while(getline(myyfile,text)){
            cout<<text;
    }
    

  
  
   return 0;
}
