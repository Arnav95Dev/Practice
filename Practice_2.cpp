#include <iostream>

using data_number_t = unsigned long long;
using decimal_number = long double;

int main(){
    data_number_t population = 1250000000;
    decimal_number distance = 250.55;
    decimal_number cgpa = 8.9;
    data_number_t temperature = 40.52;

    std :: cout <<"Population : "<< population << std :: endl;
    std :: cout << "Distance" << distance << std :: endl;
    std :: cout << "CGPA" <<cgpa << std :: endl;
    std :: cout << "Temperature"<< temperature << std :: endl;

    return 0;
}