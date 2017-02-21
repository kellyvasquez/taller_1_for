#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main ()
{	int opc;
    do {system("cls");
        cout<<"MENU SWITCH\n";
        cout<<endl<<endl;
        cout<<"1. Consultar mes del sistema en español.\n";
        cout<<"2. Codigo ascii de una vocal.\n";
        cout<<"3. Codigo ascii de un numero del 0 a 9.\n";
        cout<<"0. SALIR ";
        cout<<endl<<endl;
        cout<<"\nElija una opcion: ";cin>>opc;



	switch (opc){
       case 0:
            opc=0;
            break;
        case 1:
            system ("cls");
            cout<<"MES EN ESPAÑOL DEL SISTEMA.\n";

            struct tm *tiempo;
                int d;
                int m;
                int a;

                time_t fecha_sistema;
                time(&fecha_sistema);
                tiempo=localtime(&fecha_sistema);

                a=tiempo->tm_year + 1900;
                m=tiempo->tm_mon + 1;
                d=tiempo->tm_mday;

                switch(m)
                {
                case 1:
                    cout<<"Enero";
                getch();
                break;
                case 2:
                    cout<<"Febrero";
                getch();
                break;
                case 3:
                    cout<<"Marzo";
                getch();
                break;
                case 4:
                    cout<<"Abril";
                getch();
                break;
                case 5:
                    cout<<"Mayo";
                getch();
                break;
                case 6:
                    cout<<"Junio";
                getch();
                break;
                case 7:
                    cout<<"Julio";
                getch();
                break;
                case 8:
                    cout<<"Agosto";
                getch();
                break;
                case 9:
                    cout<<"Septiembre";
                getch();
                break;
                case 10:
                    cout<<"Octubre";
                getch();
                break;
                case 11:
                    cout<<"Noviembre";
                getch();
                break;
                case 12:
                    cout<<"Diciembre";
                getch();
                break;
                }
        break;

        case 2:
            system ("cls");
            cout<<"CODIGO ASCII DE UNA VOCAL.\n";

            char vocal;
            cout<<"\nIngrese una vocal: "; cin>>vocal;

            switch (vocal) {
                case 'a':
                    cout<<"Ascii 97";
                getch();
                break;
                case 'e':
                    cout<<"Ascii 101";
                getch();
                break;
                case 'i':
                    cout<<"Ascii 105";
                getch();
                break;
                case 'o':
                    cout<<"Ascii 111";
                getch();
                break;
                case 'u':
                    cout<<"Ascii 117";
                getch();
                break;
                default:
                    cout<<"La letra ingresada no corresponde a una vocal";
                    getch();
            }
            break;
        case 3:
            system ("cls");
            cout<<"CODIGO ASCII DE UN NUMERO DEL 1 AL 9.\n";

            int num;
            cout<<"\nIngrese un numero del 1 al 9: "; cin>>num;

            switch (num) {
                case 0:
                    cout<<"Ascii 48";
                getch();
                break;
                case 1:
                    cout<<"Ascii 49";
                getch();
                break;
                case 2:
                    cout<<"Ascii 50";
                getch();
                break;
                case 3:
                    cout<<"Ascii 51";
                getch();
                break;
                case 4:
                    cout<<"Ascii 52";
                getch();
                break;
                case 5:
                    cout<<"Ascii 53";
                getch();
                break;
                case 6:
                    cout<<"Ascii 54";
                getch();
                break;
                case 7:
                    cout<<"Ascii 55";
                getch();
                break;
                case 8:
                    cout<<"Ascii 56";
                getch();
                break;
                case 9:
                    cout<<"Ascii 57";
                getch();
                break;
                default:
                    cout<<"El numero ingresado no esta en el rango de 0 a 9";
                getch();
            }

        default:
            cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2, 3 o 0";
            getch();
				}

			}
				while (opc>0);
				cout<<endl<<endl;

				system ("pause");
	return 0;
}
