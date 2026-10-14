#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std :: cout << "******************CALCULATOR******************"<<'\n';
    
    std :: cout << "Select your operator (+,-,*,/): ";
    std :: cin >> op;

    std :: cout << "Enter the number 1 : ";
    std :: cin >> num1;

    std :: cout  << "Enter the number 2 : ";
    std :: cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std :: cout << result <<'\n' ;
            break;
        case '-':
            result = num1 - num2;
            std :: cout << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std :: cout << result << '\n';
            break;
        case '/':
            result = num1/num2;
            std :: cout << result<< '\n' ;
            break;
        
        default:
            std :: cout << "You must select from the given operators" << '\n';
        
    }

    std :: cout << "**********************************************";

}