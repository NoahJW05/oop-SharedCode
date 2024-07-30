#include <iostream>
int binary()
{
    int array[100] = {};
    int number;
    int i = 0;
    std::cin >> number;
    while(number != 0){
        if (number % 2==0){
        array[i] = 0;
        i++;
        number=number/2;
        }
        else {
            array[i] = 1;
            i++;
            number = (number-1)/2;
        }
        
    }
    for ( int j = i-1; j>=0; j--){
        std::cout<<array[j];
    }
    std::cout<<std::endl;
    return 0;
}