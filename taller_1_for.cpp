#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main ()
{	int opc;
    do {system("cls");
        cout<<"MENU FOR\n";
        cout<<endl<<endl;
        cout<<"1. Imprimir los números del 1 al 100.\n";
        cout<<"2. Imprimir las tablas de multiplicar de un numero del 1 al 20.\n";
        cout<<"3. Solucionar el factorial de un numero.\n";
        cout<<"4. Solucionar el numero de Fibonacci.\n";
        cout<<"5. Ingrese 5 numeros aleatorios, almacenarlos en un array e imprimir.\n";
        cout<<"0. SALIR ";
        cout<<endl<<endl;
        cout<<"\nElija una opcion: ";cin>>opc;



	switch (opc){
        case 0:
            opc=0;
            break;
        case 1:
            system ("cls");
            cout<<"NUMEROS DEL 1 AL 100.\n";
            for (int num=1;num<=100;num++) {
                cout<<num<<" "; }
            getch();
            break;
        case 2:
            system ("cls");
            cout<<"LAS TABLAS DE MULTIPLICAR DE UN NUMERO DEL 1 AL 20.\n";
            int numero,ope;
            cout<<"\nIngrese un numero para imprimir tabla de multiplicar: "; cin>>numero;
            for (int n=1;n<=20;n++) {
                    ope=numero*n;
                    cout<<numero<<" * "<<n<<" = "<<ope<<"\n"; }
            getch;
            break;
        case 3:
            system ("cls");
            cout<<"SOLUCIONAR EL FACTORIAL DE UN NUMERO.\n";
            int valor, fact;
            cout<<"Ingrese numero a calcular: "; cin>>valor;
            fact=1;
            for (int i=1; i<=valor; i++){
                    fact=i*fact;}
                cout<<"\nEl factorial de "<<valor<<" es: "<<fact;
            getch ();
            break;
        case 4:
            system ("cls");
            cout<<"SOLUCIONAR EL NUMERO DE FIBONACCI.\n";
            int nro, ant1, ant2, fibo;
            ant1=1;
            ant2=1;
            fibo=1;
            cout<<"\nDe cuantos numeros quiere ver la serie de Fibonacci? "; cin>>nro;
            cout<<ant1; cout<<" ";
            for (int i=2; i<=nro; i++){
                cout<<fibo; cout<<" ";
                fibo=ant1+ant2; cout<<" ";
                ant1=ant2; cout<<" ";
                ant2=fibo; cout<<" ";
            }
            getch ();
            break;
        case 5:
            system ("cls");
            cout<<"ALMACENAR 5 NUMEROS EN UN ARRAY E IMPRIMIR.\n";
            int a[5], k[5];
            for (int j=0; j<5; j++) {
                cout<<"Ingrese numero "<<j<<": "; cin>>a[j];
            }
            for (int k=0; k<5; k++) {
                cout<<a[k]<<" ";
            }
            getch ();
            break;
        default:
            cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2, 3, 4, 5 o 0"<<endl;
				}
				getch();
			}
				while (opc>0);
				cout<<endl<<endl;

				system ("pause");
	return 0;
}
