//14.В данном массиве каждый элемент равен 0, 1  или 2. Переставить элементы массива так, 
// чтобы сначала располагались все нули, затем все единицы и, наконец, все двойки. Дополнительный массив не использовать.
#include <iostream>
using namespace std;
int main(){
    int masi[5] = {0,2,1,0,2}; 
    bool proverka = true; 
    
    while (proverka){ 
        proverka = false;
        for(int a = 0 , cache = 0; a < 4 ; a = a + 1){
            if (masi[a] > masi[a + 1]){
            cache = masi[a];
            masi[a] = masi[a + 1];
            masi[a + 1] = cache;
            }
        }
        for(int a = 0 , cache = 0; a < 4 ; a = a + 1){
            if (masi[a] > masi[a + 1]){
              proverka = true;
            }
        }
    }
    
    cout << "Massive: ";
    
    for(int a = 0; a < 5 ; a = a + 1){ 
        cout << masi[a] << " ";
    }
    
    return 0;
    
}