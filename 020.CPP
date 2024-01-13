// 20.Дано n точек на плоскости.Найдите круг минимального радиуса с центром в одной из точек, 
// внутри которого и на границе находилось бы ровно m точек.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double o1[2], o2[2], o3[2];
    double r1[2], r2[2], r3[2];
    double v1[2], v2[2], v3[2]; 

    double* pn[] = { o1, o2, o3 };
    double* pm[] = { r1, r2, r3 };
    double* pmd[] = { v1, v2, v3 }; 
    double d1, d2, d3; double* pd[] = { &d1, &d2, &d3 }; 
    double radius_exit = 0; 
    double maxd1 = 0, maxd2 = 0, maxd3 = 0; double* maxdl_d[] = { &maxd1, &maxd2, &maxd3 };

    cout << "Введите x, y (точки радиуса) ";
    
    for(int i = 0, nomber = 1 ,granica = 0; i < 3 ;i++,nomber++){
        cout << endl << "Введите № "<< nomber <<" координаты:";
        for(int j = 0; j < 2 ; j++){
        cin >> *(*(pm)+granica); cout << " ";
        granica++;
        }
        cout << endl;
    }
    
    cout << "Введите x, y (точки входящие в радиусы)\n"; 
   
    for(int i = 0, nomber = 1 ,granica = 0; i < 3 ;i++,nomber++){
        cout << endl << "Введите № "<< nomber <<" координаты:";
        for(int j = 0; j < 2 ; j++){
        cin >> *(*(pn)+granica); cout << " ";
        granica++;
        }
        cout << endl;
    }

    for (int y = 0, cons = 0, sch = 1; y != 3; y++, cons++) { 
        
        for (int i = 0; i != 3; i++) {  
            for (int si = 0; si != 2; si++) { 
                pmd[i][si] = pn[i][si] - pm[cons][si];
            }
        }
        
        for (int i = 0; i != 3; i++) {
            pd[i][0] = sqrt(pmd[i][0] * pmd[i][0] + pmd[i][1] * pmd[i][1]);
        }
        if (d1 > d2 && d1 > d3) { *maxdl_d[y] = d1; }  if (d2 > d1 && d2 > d3) { *maxdl_d[y] = d2; } 
         if (d3 > d1 && d3 > d2) { *maxdl_d[y] = maxd3; }
        cout << "Большая длинна № " << sch <<"  :"<< *maxdl_d[y] << endl;
        sch++;
    }
    
    if (maxd1 < maxd2 && maxd1 < maxd3) { radius_exit = maxd1; }  if (maxd2 < maxd1 && maxd2 < maxd3) { radius_exit = maxd2; }  if (maxd3 < maxd2 && maxd3 < maxd1) { radius_exit = maxd3; }
    cout << "Наименьший радиус: " << radius_exit;
    
}