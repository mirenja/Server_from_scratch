#include <filesystem>
#include <iostream>
#include <cassert>
#include <fstream>
using namespace std;


/*
int main(){
    
    //check if the file exists
    std::filesystem::path f = "./file_to_checks.cpp";
    //assert(exists(f));//okay we can way of testing but we cal log the error with an if statement
    cout << "test";

    //check the file type
    if(is_regular_file(f))
        cout<<f<<"is a file; its size is "<<file_size(f)<<endl;




}
*/
/*************openig and writting to a file*/
/* 
int main(){
    std::filesystem::path f = "./file_to_check.cpp";
    //write to a file and then read it.
    //define the file to write to using ofstream, if exists write to it otherwise return an error
    
    if (!std::filesystem::exists(f)){
        std::cerr<< "File does not exist: " << f <<std::endl;
        return 1;
    }
    //Define the file to write using ofstream
    std::ofstream outputFile(f,std::ios::app);

    if (!outputFile.is_open()) {
        std::cerr <<"bad file name: " << f;   
    }
    outputFile<<"appending to the file just for fun\n";
    outputFile.close();

    return 0;
}
*/

/* opening and just reading a file displaying its output*/
 int main(){
    std::filesystem::path f = "./test.txt";
    if (!std::filesystem::exists(f)){
        std::cerr<< "File does not exist: " << f <<std::endl;
        return 1;
    }
    std::ifstream inputFile(f,std::ios::in); //have to define an object instance of ifstream
    
    if(!inputFile.is_open()){
         std::cerr <<"bad file name: " << f;
         return 1;
    }

    string line;
    while(getline(inputFile,line)){
        cout<< line <<endl;

        }

    inputFile.close();


    return 0;
 }