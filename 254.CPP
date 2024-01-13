 // 54.	Дана строка. Если символы в ней упорядочены по алфавиту,
 // то вывести '"да"', иначе вывести первый символ, нарушающий алфавитный порядок.
#include <iostream>
using namespace std; 
int main(){
    char t[] = "abcdefghijklmnopqrstuvwxyz";
    int razmer = sizeof(t)/sizeof(t[0]) , add = -1;
    for(int i = 0 , pr = 0 , alfavit = 97 ;i<razmer - 1;i++ , alfavit++){
        pr = t[i];  
        if(pr != alfavit){
            add = i;
        }
    }
    if(razmer == 1){return 2;}
    if( add == -1 ){ cout << "\"да\"" << endl; return 1; }else{cout << t[add];}
    return 0;

}