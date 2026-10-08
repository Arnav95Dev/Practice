#include <iostream>

using name_t = std :: string ;
using number_t = int;
using decimal_number_t = double;
using response_t = bool;

int main(){
    name_t name = "Arnav Mahajan";
    number_t age = 18;
    name_t branch = "BTech CSE";
    number_t sem = 1;
    decimal_number_t cgpa = 8.9;
    response_t hostel = true;

    std :: cout << "Name : " << name << std :: endl;
    std :: cout << "Age : " << age << std :: endl;
    std :: cout << "Branch : " << branch << std :: endl;
    std :: cout << "Semester : " << sem << std :: endl;
    std :: cout << "CGPA : " << cgpa << std :: endl;
    std :: cout << "Are you a hosteler ? " << hostel << std :: endl;

    return 0;
}