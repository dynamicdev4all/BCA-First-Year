#include<stdio.h>


//this is the first type of fn 
//with no return type(void) and zero args
void sum1(){
    printf("fn1");
}







//this is the third type of fn 
//with return type (non-void or int type) 
//and has 0 args
char sum2(){
    printf("fn2");

    return 'c';
}



//this is the second type of
// fn with no return type(void) 
// and has more than 0 args
void sum2(int a){
    printf("fn2");
}





//this is the fourth type of fn 
//having return type (non-void fn or int type) 
//and has more than 0 args
int sum2(int a){
    printf("fn2");

    return 0;
}


int main(){

    for(int i = 0; i<5; i++){
        printf("Shubham");
    }

    int a = 0;
    while (a!=0)
    {
        printf("Shubham");
        a --;
    }

    int k = 0;
    do
    {
       printf("Shubham");
       k--;
    } while (k!=0);
    













    return 0;
}