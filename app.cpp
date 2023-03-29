#include <iostream>
#include <fstream>
#include <string>

using namespace  std;


int main (){
     string Name;
     string answer;
     string Correct_answer;
     int score=0;
    int total_score=0;
    int question_num;
    
    /*Create the questions.txt file 
    ofstream Myfile("question.txt");*/

    //Open the file 
    ifstream  Myfile("question.txt");

    //Check if the file is opened

    if(!Myfile.is_open()){
        cout<<" Error opening file !"<< endl;
        return 1;

    }
    // Read the file line by line
  string line;
  while (getline(Myfile, line)) {
    // The first line of each question is the question itself
    cout << line << endl;
    question_num++;
    
    // The second line is the correct answer
    getline(Myfile, Correct_answer);
    
        //get the users answer
        cout << "Your answer: ";
        getline(cin,answer);
        //Check if answer is corect amd update the score 
        if (answer==Correct_answer){
            cout << "Correct !"<<endl;
            score++;
        }
        else{
            cout<<" Incorrect"<< endl;
        }

        //Add total score
        total_score ++;

        //display user score 
        cout << " You scored :" << score<< "out of :" << total_score << " (" << (score / (double)total_score) * 100 << "%)." <<endl;

        return 0;


    }






    }