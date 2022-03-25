#include<iostream>
#include<windows.h>
using namespace std;
void menor_mayor();
main()
	{
		int opcion;
		cout<<"Menu de opciones\n";
		cout<<"1. Ordenar numeros de menor a mayor ";
		cin>>opcion;
		switch (opcion)
			{
				case 1: menor_mayor();break;
				default:cout<<"no hay opcion";
			}
	}
void menor_mayor()
{
	int x=2;
	do
	{	
	int elementos, fila, columna, auxiliar, vector[50];	
    if(x=1)
		{
			x=2;
		}             
	cout<<"\n Ingrese la cantidad de elementos que desea ordenar: ";
	cin>>elementos;
	for(int i=1;i<=elementos;i++)
		{
			cout<<"\nIngrese los numeros que desea ordenar: ";
			cin>>vector[i];
			if(i>1)
				{
					if(vector[i]>vector[i-1])
						{
							cout<<"No puede ingresar un numero mayor al anterior "<<endl;
							i=elementos;
							x=1;
						}
					else
						{
							for(fila=1;fila<=elementos-1;fila++)
							{
								if(vector[columna]>vector[columna+1])
								{
									auxiliar=vector[columna+1];
									vector[columna+1]=vector[columna];
									vector[columna]=auxiliar;
								}
							}
						}		
				}
			if(vector[i]==vector[3])
				{
					int e;
					char tres[]={'Q','U','E',' ','B','O','N','I','T','O',' ','E','S',' ','E','S','T','A','R',' ','E','N',' ','T','R','E','S'};	
						for(int e=0;e<=26;e++)
							{
								cout<<tres[e];
								Sleep(20);
							}	
								cout<<endl;
				}	
		}
		if(x==2)
		{
			for(int i=1;i<=elementos;i++)
				{
					cout<<vector[i];
				}
		}
	}
	while(x==1);
}
