#include <iostream>

int main(){
    int marks;

    std :: cout << "Enter your scored marks : ";
    std :: cin >> marks;

    if(marks <= 100 and marks >= 90){
        std :: cout <<"A+";
    }
    else if (marks < 90 and marks >= 80){
        std :: cout << "B+";
    }
    else if (marks < 80 and marks >= 70){
        std :: cout << "B-";
    }
    else if (marks < 70 and marks >= 60){
        std :: cout << "C+";
    }
    else if (marks < 60 and marks >= 50){
        std :: cout << "C-";
    }
    else if (marks < 50 and marks >= 40){
        std :: cout << "D+";
    }
    else if (marks < 40 and marks >= 30){
        std :: cout << "D-";
    }
    else if (marks < 30 and marks >= 0 ){
        std :: cout << "F";
    }
    else{
        std :: cout << "The numbers you have scored doesnot exist";
    }

    return 0;
}