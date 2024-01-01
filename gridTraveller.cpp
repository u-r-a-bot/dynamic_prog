#include <iostream>

unsigned long long memo[100][100];

unsigned long long gridtravellar(unsigned long long num1 , unsigned long long num2){
    if(num1 ==0 || num2 == 0){
        return 0;
    }
    if(num1 ==1 && num2 == 1){
        memo[num1][num2] = 1 ;
        return memo[num1][num2];
    }
    else{
        memo[num1][num2] = memo[num2][num1] = gridtravellar(num1-1 , num2) + gridtravellar(num1 , num2-1);
        return memo[num1][num2];
    }
}

int main(){
    std::cout<<"Grid travellar(2,3) = " << gridtravellar(2,3)<<std::endl;
    std::cout<<"Grid travellar(20,23) = " << gridtravellar(20,23)<<std::endl;
}