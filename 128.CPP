// 28.	Занулить строку матрицы, в которой количество нулей максимально.
#include <iostream>
using namespace std; 
int main(){
int matrica[3][3] = {{9,9,3}
                    ,{5,2,3}
                    ,{0,5,9}} ;
int address = -1;                    
int proverka = 0;                    
    for (int n = 0 , cache = 0; n < 3 ; n++){
        cache = 0;
        for(int M = 0; M < 3 ; M++){
            if(matrica[n][M] == 0){cache = cache + 1;}
        }
        if(cache > proverka){address = n; proverka = cache;}
    }
    cout << address << endl;
    
    for(int n = 0; n < 3; n++){
     matrica[address][n] = 0;
    }
    
    cout << "Output " << endl;
    for(int n = 0;n < 3; n++){
        cout << "\n" ;
        for(int m = 0; m < 3; m++){
            cout << matrica[n][m] << " ";
        }
    }
    return 0;

}