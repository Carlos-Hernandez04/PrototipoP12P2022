#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include "usuario.h"



using namespace std;

usuario::usuario()
{
    //ctor
}

usuario::~usuario()
{
    //dtor
}
void usuario::menu()
{
    int choice;
    char s;
    do

    {
    system("cls");
    cout << "---------------------------------------------"<<endl;
    cout << "|    SISTEMA DE AUTENTICACION PARCIAL II    |"<<endl;
    cout << "---------------------------------------------"<<endl;
    cout << " 1. Ingresar"<<endl;
    cout << " 2. Salir"<<endl;

    cout << "---------------------------------------------"<<endl;
    cout << "Opcion a escoger : [1/2]"<<endl;
    cout << "---------------------------------------------"<<endl;
    cout << "Selecciona tu opcion: "<<endl;
    cin>>choice;

    switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        exit(0);
                        break;
                default:

                        cout<<"Hiciste algo mal, prueba de nuevo"<<endl;

        }
        getch();
    }while(choice!= 2);
}

void usuario::login()
{
    int count;
    string nombre, contra, n, c;
    system("cls");
    cout << "--------------------------------------------"<<endl;
    cout << "|         Ingreso Al Menu Principal        |"<<endl;
    cout << "--------------------------------------------"<<endl;
    cout << " Nombre de Usuario:"<<endl;
    cin >>nombre;
    cout << " Contraseña:"<<endl;
    cin >>contra;

    ifstream input("RegistroLog.txt");
        while(input>>n>>c)
        {
                if(n==nombre && c==contra)

                {
                        count=0;
                        system("cls");
                }
        }
        input.close();
        if(count==0)
        {
                cout<<"\nHola "<< nombre<<"\nIngreso Concedido";
                cin.get();
                cin.get();
                usuario::menu1();


        }
        else
        {
                cout<<"\nError en el accesos\nEl usuario o contraseña son invalidos\n";
        }
}
void usuario::menu1()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t | 9959-21-363 Carlos Emanuel Hernandez Garcia  |"<<endl;
        cout << "\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t  1. Catalogos"<<endl;
        cout << "\t\t\t  2. procesos"<<endl;
        cout << "\t\t\t  3. Informes "<<endl;
        cout << "\t\t\t  4. Salir"<<endl;

        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4]"<<endl;
        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		catalogos();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de catalogos? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;

	case 4:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 4);
}
void usuario::catalogos()
{
    int choice;
    char s;
    do
    {


    system ("cls");

        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t |            Sub Menu De Catalogos          |"<<endl;
        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t  1. Crud De Clientes"<<endl;
        cout << "\t\t\t  2. Crud De Vendedores"<<endl;
        cout << "\t\t\t  3. Crud De Productos"<<endl;
        cout << "\t\t\t  4. Crud De Marcas"<<endl;
        cout << "\t\t\t  5. Crud De Lineas"<<endl;
        cout << "\t\t\t  6. Salir"<<endl;

        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t ---------------------------------------------"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

        switch(choice)
        {
    case 1:
    	do
    	{

    		menu2();
    		cout << "\t\t\t ¿Quieres seguir en el apartado de catalogos? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
	case 2:
		menu3();
		break;
	case 3:
		menu4();
		break;
	case 4:
		menu5();
		break;
	case 5:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 5);

}

void usuario::menu2()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD DE CLIENTES           |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso cliente"<<endl;
	cout<<"\t\t\t 2. Despliegue cliente"<<endl;
	cout<<"\t\t\t 3. Modificar cliente"<<endl;
	cout<<"\t\t\t 4. Buscar cliente"<<endl;
	cout<<"\t\t\t 5. Borrar cliente"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		delet();
		break;
	case 6:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert()
{
    system("cls");
	fstream file;
	cout<<"\n                      -----------------------------------------";
	cout<<"\n                      |AGREGAR LA INFORMACION DEL CLIENTE|"<<endl;
	cout<<"\t\t\tIngresa id del cliente: ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del cliente: ";
	cin>>nombre;
	cout<<"\t\t\tIngresa telefono del cliente: ";
	cin>>telefono;
	cout<<"\t\t\tIngrese direccion del cliente: ";
	cin>>direccion;
	file.open("registroclientes.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<<id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono<< std::left<<std::setw(15)<< direccion<< "\n";
	file.close();

}
void usuario::display()
{
system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los clientes -------------------------"<<endl;
	file.open("registroclientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> telefono >> direccion;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t id del cliente: "<<id<<endl;
			cout<<"\t\t\t Nombre del cliente: "<<nombre<<endl;
			cout<<"\t\t\t telefono del cliente: "<<telefono<<endl;
			cout<<"\t\t\t direccion del cliente: "<<direccion<<endl;
			file >> id >> nombre >> telefono >> direccion;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify()
{
system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de clientes-------------------------"<<endl;
	file.open("registroclientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese id del cliente que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.txt",ios::app | ios::out);
		file >> id >> nombre >> telefono >> direccion;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono <<std::left<<std::setw(15)<< direccion << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese id del cliente: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del cliente: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese telefono del cliente: ";
				cin>>telefono;
				cout<<"\t\t\tIngrese direccion del cliente:";
				cin>>direccion;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono <<std::left<<std::setw(15)<< direccion<< "\n";
				found++;
			}
			file >> id >> nombre >> telefono >> direccion;

		}
		file1.close();
		file.close();
		remove("registroclientes.txt");
		rename("registro.txt","registroclientes.txt");
	}
}

void usuario::search()
{
system("cls");
	fstream file;
	int found=0;
	file.open("registroclientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del cliente buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del cliente buscado------------------------"<<endl;
		cout<<"\nIngrese codigo del cliente que quiere buscar: ";
		cin>>participant_id;
		file >> id >> nombre >> telefono >> direccion;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t id del cliente: "<<id<<endl;
				cout<<"\t\t\t Nombre del cliente: "<<nombre<<endl;
				cout<<"\t\t\t telefono del cliente: "<<telefono<<endl;
				cout<<"\t\t\t direccion del cliente: "<<direccion<<endl;
				found++;
			}
			file >> id >> nombre >> telefono >> direccion;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t clientes no encontrado...";
		}
		file.close();
	}
}


void usuario::delet()
{
system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Departamento a Borrar-------------------------"<<endl;
	file.open("registroclientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el id del cliente que quiere borrar: ";
		cin>>participant_id;
		file1.open("registros.txt",ios::app | ios::out);
		file >> id >> nombre >> telefono >> direccion;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono <<std::left<<std::setw(15)<< direccion<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> telefono >> direccion;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t id del cliente no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroclientes.txt");
		rename("registro.txt","registroclientes.txt");
		}
}

void usuario::menu3()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD DE VENDEDORES         |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de vendedores"<<endl;
	cout<<"\t\t\t 2. Despliegue de vendedores"<<endl;
	cout<<"\t\t\t 3. Modificar vendedores"<<endl;
	cout<<"\t\t\t 4. Buscar vendedores"<<endl;
	cout<<"\t\t\t 5. Borrar vendedores"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6]|"<<endl;
	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

switch(choice)
    {
    case 1:
    	do
    	{
    		insert2();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display2();
		break;
	case 3:
		modify2();
		break;
	case 4:
		search2();
		break;
	case 5:
		delet2();
		break;
	case 6:
        catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}

void usuario::insert2()
{
	system("cls");
	fstream file;
	cout<<"\n                      -----------------------------------------";
	cout<<"\n                      |AGREGAR LA INFORMACION DEL VENDEDOR    |"<<endl;
	cout<<"\t\t\tIngresa codigo del vendedor       : ";
	cin>>codigo;
	cout<<"\t\t\tIngresa Nombre del vendedor   : ";
	cin>>nombre1;
	cout<<"\t\t\tIngresa telefono del vendedor   : ";
	cin>>telefono2;
	cout<<"\t\t\tIngrese direccion del vendedor:";
    cin>>direccion2;
	file.open("registrovendedores.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<<codigo <<std::left<<std::setw(15)<< nombre1 <<std::left<<std::setw(15)<< telefono2 <<std::left<<std::setw(15)<< direccion2<< "\n";
	file.close();
}
void usuario::display2()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los vendedores -------------------------"<<endl;
	file.open("registrovendedores.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> codigo >> nombre1 >> telefono2 >> direccion2;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t codigo del vendedor: "<<codigo<<endl;
			cout<<"\t\t\t Nombre del vendedor: "<<nombre1<<endl;
			cout<<"\t\t\t telefono del vendedor: "<<telefono2<<endl;
			cout<<"\t\t\t direccion del vendedor: "<<direccion2<<endl;
			file >> codigo >> nombre1 >> telefono2 >> direccion2;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::modify2()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del vendedor-------------------------"<<endl;
	file.open("registrovendedores.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese codigo del vendedor que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registrosve.txt",ios::app | ios::out);
		file >> codigo >> nombre1 >> telefono2 >> direccion2;
		while(!file.eof())
		{
			if(participant_codigo!=codigo)
			{
			 file1<<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre1 <<std::left<<std::setw(15)<< telefono2 <<std::left<<std::setw(15)<< direccion2 << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codido del vendedor: ";
				cin>>codigo;
				cout<<"\t\t\tIngrese Nombre del vendedor: ";
				cin>>nombre1;
				cout<<"\t\t\tIngrese telefono del vendedor: ";
				cin>>telefono2;
				cout<<"\t\t\tIngrese direccion del vendedor:";
				cin>>direccion2;
				file1<<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono <<std::left<<std::setw(15)<< direccion<< "\n";
				found++;
			}
			file >> codigo >> nombre1 >> telefono2 >> direccion2;

		}
		file1.close();
		file.close();
		remove("registrovendedores.txt");
		rename("registrosve.txt","registrovendedores.txt");
	}
}
void usuario::search2()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registrovendedores.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del vendedor buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_codigo;
		cout<<"\n-------------------------Datos del vendedor buscado------------------------"<<endl;
		cout<<"\nIngrese codigo del vendedor que quiere buscar: ";
		cin>>participant_codigo;
		file >> codigo >> nombre1 >> telefono2 >> direccion2;
		while(!file.eof())
		{
			if(participant_codigo==codigo)
			{
				cout<<"\n\n\t\t\t codigo del vendedor: "<<codigo<<endl;
				cout<<"\t\t\t nombre del vendedor: "<<nombre1<<endl;
				cout<<"\t\t\t telefono del vendedor: "<<telefono2<<endl;
				cout<<"\t\t\t direccion del vendedor: "<<direccion2<<endl;
				found++;
			}
			file >> codigo >> nombre1 >> telefono2 >> direccion2;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t vendedor no encontrado...";
		}
		file.close();
	}
}
void usuario::delet2()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\n-------------------------Informacion del vendedor a Borrar-------------------------"<<endl;
	file.open("registrovendedores.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el codigo del vendedor que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registrosve.txt",ios::app | ios::out);
		file >> codigo >> nombre1 >> telefono2 >> direccion2;
		while(!file.eof())
		{
			if(participant_codigo!= codigo)
			{
				file1<<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre1 <<std::left<<std::setw(15)<< telefono2 <<std::left<<std::setw(15)<< direccion2<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> codigo >> nombre1  >> telefono2 >> direccion2;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t codigo del vendedor no encontrado...";
		}
		file1.close();
		file.close();
		remove("registrovendedores.txt");
		rename("registrosve.txt","registrovendedores.txt");
		}
}

void usuario::menu4()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD DE PRODUCTOS          |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de productos"<<endl;
	cout<<"\t\t\t 2. Despliegue de productos"<<endl;
	cout<<"\t\t\t 3. Modificar productos"<<endl;
	cout<<"\t\t\t 4. Buscar productos"<<endl;
	cout<<"\t\t\t 5. Borrar productos"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6]|"<<endl;
	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

switch(choice)
    {
    case 1:
    	do
    	{
    		insert3();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display5();
		break;
	case 3:
		modify5();
		break;
	case 4:
		search5();
		break;
	case 5:
		delet5();
		break;
	case 6:
        catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}

void usuario::insert3()
{
 system("cls");
	fstream file;
	cout<<"\n                      -----------------------------------------";
	cout<<"\n                      |AGREGAR LA INFORMACION DEL PRODUCTO   |"<<endl;
	cout<<"\t\t\tIngresa codigo del producto: ";
	cin>>codigop;
	cout<<"\t\t\tIngresa Nombre del producto: ";
	cin>>nombre2;
	cout<<"\t\t\tIngresa marca del producto: ";
	cin>>marca;
	file.open("registroproductos.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<<codigop <<std::left<<std::setw(15)<< nombre2 <<std::left<<std::setw(15)<< marca<<"\n";
	file.close();
}

void usuario::display5()
{

system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los productos-----------------"<<endl;
	file.open("registroproductos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> codigop >> nombre2 >> marca;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t codigo del producto: "<<codigop<<endl;
			cout<<"\t\t\t Nombre del producto: "<<nombre2<<endl;
			cout<<"\t\t\t telefono del vendedor: "<<marca<<endl;
			file >> codigop >> nombre2 >> marca;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::modify5()
{
    system("cls");
	fstream file,file1;
	string participant_codigop;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del vendedor-------------------------"<<endl;
	file.open("registroproductos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese codigo del producto que quiere modificar: ";
		cin>>participant_codigop;
		file1.open("registrospo.txt",ios::app | ios::out);
		file >> codigop >> nombre2 >> marca;
		while(!file.eof())
		{
			if(participant_codigop!=codigop)
			{
			 file1<<std::left<<std::setw(15)<< codigop <<std::left<<std::setw(15)<< nombre2 <<std::left<<std::setw(15)<< marca << "\n";
			}
			else
			{

				cout<<"\t\t\tIngrese codigo del producto: ";
				cin>>codigop;
				cout<<"\t\t\tIngrese nombre del producto: ";
				cin>>nombre2;
				cout<<"\t\t\tIngrese marca del producto:";
				cin>>marca;
				file1<<std::left<<std::setw(15)<< codigop <<std::left<<std::setw(15)<< nombre2 <<std::left<<std::setw(15)<< marca << "\n";
				found++;
			}
			file >> codigop >> nombre2 >> marca;

		}
		file1.close();
		file.close();
		remove("registroproductos.txt");
		rename("registrospo.txt","registroproductos.txt");
	}
}

void usuario::search5()
{
system("cls");
	fstream file;
	int found=0;
	file.open("registroproductos.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del producto buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_codigop;
		cout<<"\n-------------------------Datos del producto buscado------------------------"<<endl;
		cout<<"\nIngrese codigo del producto que quiere buscar: ";
		cin>>participant_codigop;
		file >> codigop >> nombre2 >> marca;
		while(!file.eof())
		{
			if(participant_codigop==codigop)
			{
				cout<<"\n\n\t\t\t codigo del producto: "<<codigop<<endl;
				cout<<"\t\t\t nombre del producto: "<<nombre2<<endl;
				cout<<"\t\t\t marca del producto: "<<marca<<endl;

				found++;
			}
			file >> codigop >> nombre2 >> marca;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t producto no encontrado...";
		}
		file.close();
	}
}
void usuario::delet5()
{
	system("cls");
	fstream file,file1;
	string participant_codigop;
	int found=0;
	cout<<"\n-------------------------Informacion del producto a Borrar-------------------------"<<endl;
	file.open("registroproductos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el codigo del producto que quiere borrar: ";
		cin>>participant_codigop;
		file1.open("registrospo.txt",ios::app | ios::out);
		file >> codigop >> nombre2 >> marca;
		while(!file.eof())
		{
			if(participant_codigop!= codigop)
			{
				file1<<std::left<<std::setw(15)<< codigop <<std::left<<std::setw(15)<< nombre2 <<std::left<<std::setw(15)<< marca<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> codigop >> nombre2  >> marca;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t codigo del producto no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroproductos.txt");
		rename("registrospo.txt","registroproductos.txt");
		}
}

void usuario::menu5()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD DE MARCAS          |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de marca"<<endl;
	cout<<"\t\t\t 2. Despliegue de marca"<<endl;
	cout<<"\t\t\t 3. Modificar marca"<<endl;
	cout<<"\t\t\t 4. Buscar marca"<<endl;
	cout<<"\t\t\t 5. Borrar marca"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6]|"<<endl;
	cout<<"\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert4();
    		cout<<"\n\t\t\t ¿Desea agregar otro banco?  (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display3();
		break;
	case 3:
		modify3();
		break;
	case 4:
		search3();
		break;
	case 5:
		delet3();
		break;
	case 6:
		catalogos();
	default:
		cout<<"\n\t\t\t -¡Opcion invalida!-";
	}
	getch();
    }while(choice!= 6);
}

void usuario::insert4()
{
    system("cls");
	fstream file;
	cout<<"\n                      -----------------------------------------";
	cout<<"\n                      |AGREGAR LA INFORMACION DE LAS MARCAS   |"<<endl;
	cout<<"\t\t\tIngresa codigo de la marca: ";
	cin>>codigom;
	cout<<"\t\t\tIngresa Nombre de la marca: ";
	cin>>marcas;
	file.open("registrosmarcas.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<<codigom <<std::left<<std::setw(15)<< marcas<<"\n";
	file.close();
}


void usuario::display3()
{
system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de las marcas-----------------"<<endl;
	file.open("registrosmarcas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> codigom >> marcas;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t codigo de la marca: "<<codigom<<endl;
			cout<<"\t\t\t Nombre de la marca "<<marcas<<endl;
			file >> codigom >> marcas;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify3()
{
system("cls");
	fstream file,file1;
	string participant_codigom;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de las marcas-------------------------"<<endl;
	file.open("registrosmarcas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese codigo de la marca que quiere modificar: ";
		cin>>participant_codigom;
		file1.open("registrosma.txt",ios::app | ios::out);
		file >> codigom >> marcas;
		while(!file.eof())
		{
			if(participant_codigom!=codigom)
			{
			 file1<<std::left<<std::setw(15)<< codigom <<std::left<<std::setw(15)<< marcas << "\n";
			}
			else
			{

				cout<<"\t\t\tIngrese codigo de la marca: ";
				cin>>codigom;
				cout<<"\t\t\tIngrese nombre de la marca:";
				cin>>marcas;
				file1<<std::left<<std::setw(15)<< codigom <<std::left<<std::setw(15)<< marcas << "\n";
				found++;
			}
			file >> codigom >> marcas;

		}
		file1.close();
		file.close();
		remove("registrosmarcas.txt");
		rename("registrosma.txt","registrosmarcas.txt");
	}
}

void usuario::search3()
{
system("cls");
	fstream file;
	int found=0;
	file.open("registrosmarcas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la marca buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_codigom;
		cout<<"\n-------------------------Datos de la marca buscado------------------------"<<endl;
		cout<<"\nIngrese codigo de la marca que quiere buscar: ";
		cin>>participant_codigom;
		file >> codigom >> marcas;
		while(!file.eof())
		{
			if(participant_codigom==codigom)
			{
				cout<<"\n\n\t\t\t codigo de la marca: "<<codigom<<endl;
				cout<<"\t\t\t nombre de la marca: "<<marcas<<endl;

				found++;
			}
			file >> codigom >> marcas;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t marca no encontrado...";
		}
		file.close();
	}
}


void usuario::delet3()
{
system("cls");
	fstream file,file1;
	string participant_codigom;
	int found=0;
	cout<<"\n-------------------------Informacion de la marca a Borrar-------------------------"<<endl;
	file.open("registrosmarcas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el codigo de la marca que quiere borrar: ";
		cin>>participant_codigom;
		file1.open("registrosma.txt",ios::app | ios::out);
		file >> codigom >> marcas;
		while(!file.eof())
		{
			if(participant_codigom!= codigom)
			{
				file1<<std::left<<std::setw(15)<< codigom <<std::left<<std::setw(15)<< marcas<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> codigom >> marcas;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t codigo de la marca no encontrado...";
		}
		file1.close();
		file.close();
		remove("registrosmarcas.txt");
		rename("registrosma.txt","registrosmarcas.txt");
		}
}

