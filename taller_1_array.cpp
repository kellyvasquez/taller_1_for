#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main ()
{	int opc;
    do {system("cls");
        cout<<"MENU ARRAY\n";
        cout<<endl<<endl;
        cout<<"1. Mostrar en pantalla un array de numeros decimales.\n";
        cout<<"2. Mostrar en pantalla num1xnum2, con ceros y unos.\n";
        cout<<"3. Crear un array de dimension 4x4.\n";
        cout<<"0. SALIR ";
        cout<<endl<<endl;
        cout<<"\nElija una opcion: ";cin>>opc;



	switch (opc){
        case 0:
            opc=0;
            break;
        case 1:
            system ("cls");
            cout<<"ARRAY DE NUMEROS DECIMALES.\n";

            float decimal[4];
            cout<<"\nIngrese 4 numeros decimales.\n\n";
                for(int i=0; i<4; i++) {
                cout<<"Numero "<<i<<": ";cin>>decimal[i];   }

                cout<<"\nLos numeros decimales son: \n";
                for(int i=0; i<4; i++){
                cout<<decimal[i]<<endl; }
            break;
        case 2:
            system ("cls");
            cout<<"ARRAY DE NUM1 x NUM2, MOSTRAR EN CEROS Y UNOS.\n";
                    
				int n1, n2;
                cout<<"Ingrese numero de filas: ";cin>>n1;
                cout<<"Ingrese numero de columnas: ";cin>>n2;

                int matriz[n1][n2];
                int k;
                k=1;
                for(int i=0; i<n1; i++){
                   for(int j=0; j<n2; j++){
                    matriz[i][j]=k;   }
                  	k=0;
                }
	                for(int i=0;i<n1;i++)
   	                {   for(int j=0;j<n2;j++){
					   		cout<<matriz[i][j]<<" ";   }cout<<endl;
                    }

            getch;
            break;
        case 3:
            system ("cls");
            cout<<"ARRAY CON DIMENSION 4x4.\n";


            getch ();
            break;
        default:
            cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2, 3 o 0"<<endl;
				}
				getch();
			}
				while (opc>0);
				cout<<endl<<endl;

				system ("pause");
	return 0;
}
