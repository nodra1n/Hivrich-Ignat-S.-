//26 Найти количество строк матрицы, числа в которых возрастают.
#include <iostream>
using namespace std; 
int main(){
int a = 0 , o = 0;
cout << "Vvedite snachalo razmer strok potom stolbcov " << endl;
cin >> a >> o;
int matrica[a][o] , GlavniyCache[a][o] , kolichestvo_trueStrok = 0;

if(a <= 1 || o <= 1 ){
    return 1;
}

cout << "Vvedite dannie (cifrovie)" << endl; 
for(int n = 0 , cache = 0; n < a ; n++ ){
    for(int m = 0; m < o; m++){
        cin >> cache;
        matrica[n][m] = cache;
    }
}

cout << endl << "Martica ";
for(int n = 0 , cache = 0; n < a ; n++ ){ 
    cout << endl;
    for(int m = 0; m < o; m++){
        cout << matrica[n][m] << " ";
    }
}
for(int n = 0 ; n < a ; n++ ){
    GlavniyCache[n][0] = matrica[n][0];
  for(int m = 0 ; m < o - 1 ; m++ ){
    if(matrica[n][m] < matrica[n][m + 1]){GlavniyCache[n][m + 1] = matrica[n][m + 1] ;}
    
  }
}

cout << endl << "Massiv sravnenia" ;
for(int n = 0; n < a ; n++ ){ 
    cout << endl;
    for(int m = 0; m < o; m++){
        cout << GlavniyCache[n][m] << " ";
    }
}

for(int n = 0 , prov = 0 ; n < a ; n = n + 1 ){
  prov = 0;
  for(int m = 0; m < o ; m++){
     if(GlavniyCache[n][m] == matrica[n][m]) { prov++ ;}
  }
  
  cout << endl << endl << prov << " " << n << endl;
  if(prov == o ) { kolichestvo_trueStrok++ ;}
  
}

cout << endl << "Kolvo srok po usloviu: " << kolichestvo_trueStrok;
    return 0;
    
}