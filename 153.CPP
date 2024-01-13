// 54.Определить, является ли матрица симметричной (относительно главной диагонали). 
#include <iostream>
using namespace std; 
int main(){
int matrica[3][3] = {{1,2,6}
                    ,{2,5,2}
                    ,{6,2,1}}, proverka = 0 , maks_el = 3 * 3 , el_diagonali = 3;
int ukazatel = 0 , GLsrav = 0;
int sravnenie_1[(maks_el - el_diagonali)/2];
int sravnenie2[(maks_el - el_diagonali)/2];
    for(int n = 0 , pr1 = 0 ; n < 3 ; n = n + 1 , pr1++, ukazatel++){
        
        for(int m = 0, pr2 = 0 ; m < 3 ; m = m + 1 ){
            if(pr1 < m){sravnenie_1[ukazatel] = matrica[n][m]; cout << " @ - " << matrica[n][m] << endl; cout << " ! - " << sravnenie_1[ukazatel] ; ukazatel++;}
        }     
        ukazatel--;
        cout << " *-" << sravnenie_1[ukazatel] <<"\n";
    }       
    
    cout  << endl;
    for(int i = 0; i < 3 ; i++){
        cout << sravnenie_1[i] << " ";
    }
    
    ukazatel = 0;
    cout << endl << endl;
    for(int n = 0 , pr1 = 0 ; n < 3 ; n = n + 1 , pr1++){
    cout << endl << "@@@@@@@@@" << endl;
        for(int m = 0; m < 3 ; m = m + 1 ){
            if(m >= pr1){;continue;}else{ sravnenie2[ukazatel] = matrica[n][m];ukazatel++;}
        }     
        cout << " *-" << sravnenie2[ukazatel] <<" "<< ukazatel << "\n";
    }   
    
     cout << endl;
    for(int i = 0; i < 3 ; i++){
        cout << sravnenie2[i] << " ";
    }
    
    for(int i = 0; i < sizeof(sravnenie_1) / sizeof(sravnenie_1[0]); i++){
        if(sravnenie2[i] == sravnenie_1[i]){GLsrav++;}
    }
    
    if(GLsrav == sizeof(sravnenie_1) / sizeof(sravnenie_1[0]) && GLsrav == sizeof(sravnenie2) / sizeof(sravnenie2[0])){
        cout << "Matrica simitrichna" << endl;
    }
    else{
        cout << "Matrica NE simitrichna" << endl;
    }
                    
    return 0;

}