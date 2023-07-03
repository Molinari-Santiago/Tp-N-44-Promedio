#include <iostream>

using namespace std;
int Promedio(int a, int b, int c);
int main() {
    float n1, n2, n3, n;

    cout<<"Ingrese la primera nota: "<<endl;
    cin>>n1;

    cout<<"Ingrese la segunda nota: "<<endl;
    cin>>n2;

    cout << "Ingrese la tercera nota: "<<endl;
    cin>>n3;
    int nt=Promedio(n1 ,n2 ,n3);
    string  nf;
         if (nt>= 1 && nt<= 6) {
       nf="desaprobaste";
    }if (nt == 7) {
        nf="aprobaste";
    }if (nt>= 8 && nt<= 10) {
        nf="Excelente";
    } 

    cout << "El promedio es: " <<Promedio(n1, n2, n3)<<endl;
     cout<<nf<<endl;
    return 0;
}
int Promedio(int a, int b, int c){
int p;

    p = (a + b+ c) / 3;



return p;
}