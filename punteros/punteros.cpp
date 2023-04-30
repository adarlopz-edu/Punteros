#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#define esc 27
#define space 32

using namespace std;

struct {
	int num;
	int *apuntador = &num;

} numero[10];

int main() {
	int nNumeros = 0;
	while (int loop = 1) {
		char opcion;
		cout << "LISTA DE NUMEROS CON PUNTEROS" << endl << endl;
		cout << "1. Create" << endl << "2. Read" << endl << "3. Update" << endl << "4. Delete" << endl << "Esc. Salir" << endl;
		opcion = _getch();

		switch (opcion) {
			case '1':
				nNumeros++;

				cout << endl << "FUNCION CREAR" << endl << endl;
				cout << "Escribe un numero: ";
				cin >> numero[nNumeros].num;

				cout << "Numero registrado correctamente";
				Sleep(1000);
				system("cls");

				break;

			case '2':
				cout << endl << "FUNCION LEER (Esc para ir atras)" << endl;
				if (nNumeros == 0) {
					cout << endl << "No hay ningun numero registrado :(";
				}
				else {
					if (nNumeros == 1) {
						cout << "hay " << nNumeros << " numero registrado" << endl;
					}
					else {
						cout << "hay " << nNumeros << " numeros registrados" << endl;
					}
					for (int q = 1; nNumeros >= q; q++) {
						cout << endl << "NUMERO #" << q << ": " << numero[q].num << "   " << numero[q].apuntador << endl;
					}
				}

				char back;
				back = _getch();
				switch (back) {
				case esc:
					system("cls");
				}

				break;

			case '3':
				cout << endl << "FUNCION ACTUALIZAR (Esc para ir atras)" << endl;
				if (nNumeros == 0) {
					cout << endl << "No hay ningun numero registrado :(";
				}
				else {
					if (nNumeros == 1) {
						cout << "hay " << nNumeros << " numero registrado" << endl;
					}
					else {
						cout << "hay " << nNumeros << " numeros registrados" << endl;
					}
					for (int q = 1; nNumeros >= q; q++) {
						cout << endl << "NUMERO #" << q << ": " << numero[q].num << endl;
					}
				}

				for (int c = 0; c == 0; c) {
					cout << "Que numero quieres actualizar? (#) #: ";
					int nN;
					cin >> nN;

					if (nN <= nNumeros) {
						string nombre;

						cout << "Escribe el nuevo valor del numero: " << endl;
						cin >> numero[nNumeros].num;

						cout << "Datos actualizados correctamente";
						cout << endl;;
						Sleep(1000);
						system("cls");
						break;
						c = 1;
					}
					else {
						c = 0;
					}
				}

				break;

			case '4':

				cout << endl << "FUNCION ELIMINAR (Esc para ir atras)" << endl;
				if (nNumeros == 0) {
					cout << endl << "No hay ningun numero registrado :(";
				}
				else {
					if (nNumeros == 1) {
						cout << "hay " << nNumeros << " numero registrado" << endl;
					}
					else {
						cout << "hay " << nNumeros << " numeros registrados" << endl;
					}
					for (int q = 1; nNumeros >= q; q++) {
						cout << endl << "NUMERO #" << q << ": " << numero[q].num << endl;
					}
				}

				for (int c = 0; c == 0; c) {
					cout << "Que numero quieres eliminar? (#) #: ";
					int nP;
					cin >> nP;

					if (nP <= nNumeros) {
						if (nP == nNumeros) {
							c = 1;
						}
						else {
							for (nP; nP <= nNumeros; nP++) {
								int s = numero[nP].num;

								int s2 = numero[nP + 1].num;

								s = s2;

								numero[nP].num = s;
							}
							c = 1;
						}
					}
					else {
						c = 0;
					}
				}
				nNumeros--;
				break;

			case esc:
				exit(0);
				break;
		}
	}
}