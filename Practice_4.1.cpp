#include <iostream>
#include <math.h>


using number_t = double ;

int main(){
    number_t physics ;
    number_t maths;
    number_t english;
    number_t coding;
    number_t chemistry;
    double total_marks = physics + english + maths + coding +chemistry;
    double avg = total_marks / 500 ;
    double percent = avg * 100;

    std:: cout << "What are your marks in Physics : ";
    std :: cin >> physics;
    std:: cout << "What are your marks in English : ";
    std :: cin >> english;
    std:: cout << "What are your marks in Maths : ";
    std :: cin >> maths;
    std:: cout << "What are your marks in Coding : ";
    std :: cin >> coding;
    std:: cout << "What are your marks in Chemistry : ";
    std :: cin >> chemistry;

    

    std :: cout << "Total Marks : " << total_marks <<'\n';
    std :: cout << "Average : " << avg << '\n';
    std :: cout << "percentage : " << percent << '\n';

    return 0;
}