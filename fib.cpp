#include<iostream>

//memoization     

// memoisation :- In this technique results of the intermediate calculations of recursion are stored. thereby preventing recalculations

unsigned long long memo[1000]; //An array to store the calculated variables

unsigned long long fib(unsigned long long n ){
    
    if(n <= 2){
        return 1;
    }
    if(memo[n]!= 0){
        return memo[n];//check if the value is already calculated
    }
    else{
        memo[n] =  fib(n-1) + fib(n-2);//Store the calculated values
        return memo[n];
    }
}



int main(){
     
    // std::cout<< "Fib (50) = " << fib(50)<<std::endl;   //gives wrong answer when memo was not implemented
    std:: cout<< "Fib(50) = " << fib(50)<< std::endl;
}

