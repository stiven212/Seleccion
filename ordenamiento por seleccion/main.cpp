#include <iostream>

using namespace std;

void agregar(int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);



int main()
{
    int n;
    cout << "Ingrese el tama�o: ";
    cin >> n;
    int b[n];
    agregar(b,n);
    imprimir(b,n);
    menor(b,n);


    return 0;
}
void agregar(int a[], int n){

    for(int i=0; i<n; i++){
        cout << "Ingrese numero "<<i+1<<": ";
        cin>> a[i];
    }




}
void imprimir(int a[], int n){

    for(int i=0; i<n; i++){
        cout<< a[i];
    }
}
void menor(int a[], int n){

    int b;
    b=a[0];
    for(int i=1; i<n; i++){
        if(b>a[i]){

            b=a[i];
        }
    }
    cout <<" - Menor elemento es: " << b;

}
