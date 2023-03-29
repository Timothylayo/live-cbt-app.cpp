#include <iostream>
#include <fstream>

using namespace std;

int main (){

    //create a file 

    ofstream Myfile("question.txt");
   
    //write to the file
    Myfile<<"What is my first name =";
    Myfile<< "Timothy";

    // close the file
    Myfile.close();
}