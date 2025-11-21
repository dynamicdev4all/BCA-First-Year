#include <stdio.h>
#include <math.h>

int main(){
    //Write a program to calculate the length of a number
    int num = 222;
    int numCopy = num;
    int numCopy2 = num;
    int l = 0;
    while (num != 0){
        num = num /10;
        l++;
    }
    int sum = 0;
    while (numCopy != 0){
       int last = numCopy % 10;  //3   5   1
       numCopy = numCopy / 10; 
       sum = sum + pow(last, l);
    }
    if(sum == numCopy2){
        printf("The number is Armstrong");
    }else{
        printf("The number is not Armstrong");
    }
    return 0;
}