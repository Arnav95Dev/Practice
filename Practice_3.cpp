#include <iostream>

int main(){
    int maths_marks = 95;
    int physics_marks = 90;
    int english_marks = 80;

    int total_marks = maths_marks + physics_marks + english_marks;
    double average = (double)total_marks/3;
    int converted_average = (int) average;

    std :: cout << "The total marks are : " << total_marks << '\n';
    std :: cout << "The average is : " << average << '\n';
    std :: cout << "The converted average is : " << converted_average << '\n';
    return 0;
}