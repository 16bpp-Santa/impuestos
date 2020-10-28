//coded by santa
//GitHub Gui 3.0 license
// all rights reserved 2020
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int respuesta;
float precio, resultado;
string e = "(1.0.0)";

int main()
{
	cout<<e<<endl;
	system("color 0a");
	cout<<"Calculadora de Impuestos Argentina"<<endl;
	cout<<""<<endl;
	cout<<"este software esta orientado a el publico gamer que realiza compras internacionalmente"<<endl;
	Sleep(3000);
	cout<<""<<endl;
	system("cls");
	cout<<"Selecciona la opcion adecuada"<<endl;
	cout<<"1.- Steam"<<endl;
	cout<<"2.- IVA"<<endl;
	cout<<"3.- Impuesto Pais"<<endl;
	cout<<"4.- Impuesto Pais (servicio digital)"<<endl;
	cout<<"5.- Retencion de ganancias"<<endl;
	cin>>respuesta;
	if (respuesta==1){
		system("cls");
		cout<<"Steam"<<endl;
		cout<<""<<endl;
		cout<<"pone tu precio del juego, en pesos y le calculo todos los impuestos"<<endl;
		cin>>precio;
		resultado = precio * 1.64;
		cout<<""<<endl;
		cout<<"El precio total te sale $"<<resultado<<endl;
		cout<<"La recarga ejecutada fue del "<<(precio*0.64)<<endl;
		cout<<""<<endl;
		Sleep(1000);
		cout<<"gracias por usar el algoritmo de Santa"<<endl;
	}
	else{
	
		if (respuesta==2){
			system("cls");
			cout<<"IVA"<<endl;
			cout<<""<<endl;
			cout<<"pone el precio de tu producto, en pesos y le calculo el IVA"<<endl;
			cin>>precio;
			resultado = precio * 1.21;
			cout<<""<<endl;
			cout<<"El precio total te sale $"<<resultado<<endl;
			cout<<"La recarga ejecutada fue del "<<(precio*0.21)<<endl;
			cout<<""<<endl;
			Sleep(1000);
			cout<<"gracias por usar el algoritmo de Santa"<<endl;
			getch();
    		return 0;
		}
		else{
		
			if (respuesta==3){
				system("cls");
				cout<<"Impuesto Pais"<<endl;
				cout<<""<<endl;
				cout<<"pone el precio de tu producto, en pesos y le calculo el impuesto pais"<<endl;
				cin>>precio;
				resultado = precio * 1.30;
				cout<<""<<endl;
				cout<<"El precio total te sale $"<<resultado<<endl;
				cout<<"La recarga ejecutada fue del "<<(precio*0.30)<<endl;
				cout<<""<<endl;
				Sleep(1000);
				cout<<"gracias por usar el algoritmo de Santa"<<endl;
				getch();
	    		return 0;
			}
			else{	if (respuesta==4){
					system("cls");
					cout<<"Impuesto Pais (servicio digital)"<<endl;
					cout<<""<<endl;
					cout<<"pone el precio de tu producto, en pesos y le calculo el impuesto pais (servicio digital)"<<endl;
					cin>>precio;
					resultado = precio * 1.08;
					cout<<""<<endl;
					cout<<"El precio total te sale $"<<resultado<<endl;
					cout<<"La recarga ejecutada fue del "<<(precio*0.08)<<endl;
					cout<<""<<endl;
					Sleep(1000);
					cout<<"gracias por usar el algoritmo de Santa"<<endl;
					getch();
		   			return 0;
				}
				if (respuesta==5){
					system("cls");
					cout<<"Retencion de Ganancias"<<endl;
					cout<<""<<endl;
					cout<<"pone el precio de tu producto, en pesos y le calculo ganancias"<<endl;
					cin>>precio;
					resultado = precio * 1.35;
					cout<<""<<endl;
					cout<<"El precio total te sale $"<<resultado<<endl;
					cout<<"La recarga ejecutada fue del "<<(precio*0.35)<<endl;
					cout<<""<<endl;
					Sleep(1000);
					cout<<"gracias por usar el algoritmo de Santa"<<endl;
					getch();
		    		return 0;
				}
					do{
						system("cls");
						cout<<"caracter incorrecto, repita la operacion"<<endl;
						cout<<"Selecciona la opcion adecuada"<<endl;
						cout<<"1.- Steam"<<endl;
						cout<<"2.- IVA"<<endl;
						cout<<"3.- Impuesto Pais"<<endl;
						cout<<"4.- Impuesto Pais (servicio digital)"<<endl;
						cout<<"5.- Retencion de ganancias"<<endl;
						cin>>respuesta;
					}while(respuesta!=1 & respuesta !=2 & respuesta!=3 & respuesta !=4 & respuesta!=5);
						if (respuesta==2){
						system("cls");
						cout<<"IVA"<<endl;
						cout<<""<<endl;
						cout<<"pone el precio de tu producto, en pesos y le calculo el IVA"<<endl;
						cin>>precio;
						resultado = precio * 1.21;
						cout<<""<<endl;
						cout<<"El precio total te sale $"<<resultado<<endl;
						cout<<"La recarga ejecutada fue del "<<(precio*0.21)<<endl;
						cout<<""<<endl;
						Sleep(1000);
						cout<<"gracias por usar el algoritmo de Santa"<<endl;
						}
						if (respuesta==3){
							system("cls");
							cout<<"Impuesto Pais"<<endl;
							cout<<""<<endl;
							cout<<"pone el precio de tu producto, en pesos y le calculo el impuesto pais"<<endl;
							cin>>precio;
							resultado = precio * 1.30;
							cout<<""<<endl;
							cout<<"El precio total te sale $"<<resultado<<endl;
							cout<<"La recarga ejecutada fue del "<<(precio*0.30)<<endl;
							cout<<""<<endl;
							Sleep(1000);
							cout<<"gracias por usar el algoritmo de Santa"<<endl;
						}
						if (respuesta==4){
							system("cls");
							cout<<"Impuesto Pais (servicio digital)"<<endl;
							cout<<""<<endl;
							cout<<"pone el precio de tu producto, en pesos y le calculo el impuesto pais (servicio digital)"<<endl;
							cin>>precio;
							resultado = precio * 1.08;
							cout<<""<<endl;
							cout<<"El precio total te sale $"<<resultado<<endl;
							cout<<"La recarga ejecutada fue del "<<(precio*0.08)<<endl;
							cout<<""<<endl;
							Sleep(1000);
							cout<<"gracias por usar el algoritmo de Santa"<<endl;
						}
						if (respuesta==5){
							system("cls");
							cout<<"Retencion de Ganancias"<<endl;
							cout<<""<<endl;
							cout<<"pone el precio de tu producto, en pesos y le calculo ganancias"<<endl;
							cin>>precio;
							resultado = precio * 1.35;
							cout<<""<<endl;
							cout<<"El precio total te sale $"<<resultado<<endl;
							cout<<"La recarga ejecutada fue del "<<(precio*0.35)<<endl;
							cout<<""<<endl;
							Sleep(1000);
			}				cout<<"gracias por usar el algoritmo de Santa"<<endl;}
		}	}	
		getch();
   	 return 0;	
	}
