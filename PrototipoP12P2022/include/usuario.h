#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class usuario
{
    public:
        usuario();
        virtual ~usuario();
        void menu();
        void menu1();
        void menu2();
        void login();
        void catalogos();
        void insert();
		void display();
		void modify();
		void search();
		void delet();
		void menu3();
		void insert2();
		void display2();
		void modify2();
		void search2();
		void delet2();
		void menu4();
        void insert3();
        void display5();
        void modify5();
        void search5();
        void delet5();
        void menu5();
		void insert4();
		void display3();
		void modify3();
		void search3();
		void delet3();


    protected:

    private:
        string id,nombre,telefono,direccion;
        string codigo,nombre1,telefono2,direccion2;
        string codigop,nombre2,marca;
        string codigom,marcas;
};

#endif // USUARIO_H


