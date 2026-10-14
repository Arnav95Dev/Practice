#include <iostream>

int main(){
    int num;
    
    std :: cout << "Enter a number ";
    std :: cin >> num;

    if (num % 2 == 0){
        std :: cout << "The given number is even"<<'\n';
    }
    else{
        std :: cout << "The given number is odd"<<'\n';
    }

    if(num % 5 == 0 and num % 3 == 0){
        std :: cout << "The given number gets divided by both 5 and 3";
    }
    else{
        std :: cout << "The given number doesn't get divided by both";
    }

    return 0;
}