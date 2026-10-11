#include <iostream>
#include <math.h>
int main(){
    double x;
    double y;
    double z;

    std :: cout << "Enter a number : " ;
    std :: cin >> x ;
    std :: cout << "Enter another number : ";
    std :: cin >> y;

    double add = x + y;
    double sub = x - y;
    double multiplication = x * y;
    double division = x / y;

    std :: cout << "ADDITION : " << add << '\n';
    std :: cout << "SUBTRACTION : " << sub << '\n';
    std :: cout << "MULTIPLICATION : " << multiplication << '\n';
    std :: cout << "DIVISION : " << division << '\n';
    
}