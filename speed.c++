#include<iostream>
#include<chrono>

int main(){
    auto start_time = std::chrono::high_resolution_clock::now();
    for(int i =1;i<=1000000;++i){

    }
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;
    std::cout <<"The time taken to count from 1 to 1 million: "<<elapsed_time.count() <<"seconds" <<std::endl;


    return 0;
}