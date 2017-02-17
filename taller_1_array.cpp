#include <conio.h>
#include <stdlib.h>
#include <iostream>
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
