#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Log{
    public:
        void print(string message){
            cout << message << endl;
        }

        void printN(int number){
            cout << number << endl;
        }
};


void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sommaArray(int *pA, int size, Log log){
    int result = 0;
    for (int i = 0; i<size; i++){ 
        result += (*(pA+i)); 
    }
    return result;
}


int main(){

    Log log = Log();

    /*int array[5];

    for (int i = 0; i<5; i++){
        array[i] = i;
    }

    int *pointer_array = &array[0];

    for (int i = 0; i<5; i++){
        log.printN(*pointer_array+i);
    }
    log.print("\n");

    log.printN(*pointer_array);

    int n1 = 5;
    int *p_n1 = &n1;

    *p_n1 = 10;

    log.printN(*p_n1);
    */

    int n1 = 5;
    int n2 = 10;
    log.print("Numero 1:");
    log.printN(n1);

    log.print("Numero 2:");
    log.printN(n2);

    swap(&n1, &n2);

    log.print("AFTER SWAP");

    log.print("Numero 1:");
    log.printN(n1);

    log.print("Numero 2:");
    log.printN(n2);

    log.print("\n\n");

    int array[5] = {10,20,30,40,50};
    //int *pA = &array[0];
    int res = sommaArray(&array[0], sizeof(array)/sizeof(array[0]), log);

    log.printN(res);


    int *array2 = new int[2];
    
    *array2 = 10;
    *(array2+1) = 20;
    *(array2+2) = 30;
    *(array2+3) = 40;

    for (int i= 0; i<10; i++){
        log.printN(*(array2+i)); 
    }
    
    int array3[3] = {1,3,4};
    array3[3] = 10;
    for (int i= 0; i<10; i++){
        log.printN(array3[i]); 
    }

    
}