//26 В массиве в порядке убывания заданы достоинства купюр 
// валютной системы некоторой страны. 
// Реализуйте выдачу заданной суммы s минимальным количеством купюр
#include <iostream>
using namespace std;
int main(){
    int Valuta[3] = {500,100,50} ,
    Money = 0 , K = 0; 
    cout <<"Vvedite summu deneg: ";
    cin >> Money;
    while(Money > 0){ 
        if(Money >= Valuta[0]){
            Money -= Valuta[0];
            K++;
        }
        if(Money >= Valuta[1] && Money < Valuta[0]){
            Money -= Valuta[1];
            K++;
        }
        if(Money >= Valuta[2] && Money < Valuta[1]){
           Money -= Valuta[2];
            K++;
        }
    }
    cout << "min kolichestvo kupur: " << K; 
    
} 