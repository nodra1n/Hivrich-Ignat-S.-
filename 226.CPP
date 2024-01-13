//26 Дан массив строк. Упорядочить массив по длине строк.
#include <iostream>
using namespace std; 
int main(){
    
    char a[] = "apple";
    char b[] = "banana";
    char c[] = "car";
    char*pa = a;
    char*pb = b;
    char*pc = c;
    char* texts[] = {pa , pb , pc};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]) ;
    int size3 = sizeof(c)/sizeof(c[0]) ;
    int SIZE[] = { size1 ,size2, size3};
    char* add = NULL;
    int adds = 0;
    
    for (int i = 0 ; i < 3 ; i++ ) {
        cout << texts[i] << " ";
    }
    cout << endl;
    
    cout << SIZE[0] << " " << SIZE[1] << endl;
    
     
    for(int i = 0; i < 2; i++){
     for(int i = 0; i < 2; i++){
        if(SIZE[i] > SIZE[i + 1]){
            add = texts[i];
            texts[i] = texts[i + 1];
            texts[i + 1] = add;
            adds = SIZE[i];
            SIZE[i] = SIZE[i + 1];
            SIZE[i + 1] = adds;
        }
     }
    }
    
    
    for (int i = 0 ; i < 3 ; i++ ) {
        cout << texts[i] << " ";
    }
    cout << endl;
cout << SIZE[0] << " " << SIZE[1] << endl;
    return 0;
    
}