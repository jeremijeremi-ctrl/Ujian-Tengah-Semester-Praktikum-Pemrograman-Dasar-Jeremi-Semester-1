
#include <iostream>
using namespace std;


    
int main() {
    int number[8];
    int max,min,average,sum_ganjil,sum_genap;
    // Write C++ code here

    for (int i=0;i<8;i++){
        int val;
        cin >> val;
        number[i] = val;
    }

//max
   
for (int i = 0; i<8 ; i++){
       if (number[i]>max){
           max = number[i];
       }
   }
       //min
    for (int i =0; i<8;i++){
        if (number[i] < min){
            min = number[i];
        }
    }

    //average
    int sum =0;
    for (int i=0;i<8;i++){
        sum += number[i];
    }
    average = sum/8;

    //jumlah_genap
    for (int i=0;i<8;i++){
        if (number[i]%2 ==0){
            sum_genap+=1;
        }
    }

    //jumlah_ganjil
    for (int i=0;i<8;i++){
        if (number[i]%2 ==1){
            sum_ganjil+=1;
        }
    }
    cout << ; 
  

    return 0;
}
