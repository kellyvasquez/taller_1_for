#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{	int opc;
    do {system("cls");
        cout<<"MENU MATRIZ \n";
        cout<<endl<<endl;
        cout<<"1. Mostrar matriz.\n";
        cout<<"2. Llenar matriz automaticamente por el sistema.\n";
        cout<<"0. SALIR ";
        cout<<endl<<endl;
        cout<<"\nElija una opcion: ";cin>>opc;



	switch (opc){
        case 0:
            opc=0;
            break;
        case 1:
            system ("cls");
            cout<<"MOSTRAR MATRIZ.\n";
                int matriz[4][4];

                cout<<"Ingrese los valores para la matriz 4x4. "<<endl;

                for (int i=0; i<4; i++)
                    { for (int k=0; k<4; k++)
                { cout<<"Posicion ("<<i<<","<<k<<"): "; cin>>matriz[i][k]; } }
                cout<<"Los valores ingresados en la matriz fueron: \n"<<matriz[4][4];

                for (int i=0; i<4; i++)
                { for (int k=0; k<4; k++)
                { cout<<matriz[i][k]<<" "; }cout<<endl; }
            getch();
            break;

        case 2:
            system ("cls");
            cout<<"MOSTRAR MATRIZ AUTOMATICAMENTE POR EL SISTEMA.\n";

            for (int i=0; i<4; i++)
                { for (int k=0; k<4; k++)
                { cout<<matriz[i][k]<<" "; }cout<<endl; }
            getch();
            break;

        default: cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2 o 0"<<endl;

}
        }
				while (opc>0);
				cout<<endl<<endl;

				system ("pause");
	return 0;
}
