#include <iostream>
using namespace std;


// Funci�n para multiplicar dos n�meros
double multiplicar(double a, double b)
{
	return a * b;
}

// Funci�n para dividir dos n�meros
double dividir(double a, double b)
{
	if (b == 0) {
		cout << "Error: no se puede dividir por cero." << endl;
		return 0;
	}
	return a / b;
}

// Funci�n para multiplicar tres n�meros
double multiplicar(double a, double b, double c) 
{
	return a * b * c;
}

// Funci�n para obtener el mayor de tres n�meros
double mayor(double a, double b, double c)
{
	if (a > b && a > c) {
		return a;
	}
	if (b > a && b > c) {
		return b;
	}
	return c;
}

// Funci�n para mostrar el men� y obtener la opci�n del usuario
char menu()
{
	char opcion;
	cout << "----------------------------------" << endl;
	cout << "*******BIENVENIDOS AL MENU********" << endl;
	cout << "//////////////////////////////////" << endl;
	cout << "**Alumno: Douglas Flor Hernandez__" << endl;
	cout << "*(1) Multiplicaci�n con 2 n�meros_" << endl;
	cout << "*(2) Divisi�n con 2 n�meros_______" << endl;
	cout << "*(3) Multiplicaci�n con 3 n�meros_" << endl;
	cout << "*(4) El mayor de 3 n�meros________" << endl;
	cout << "*(s) Salir________________________" << endl;
	cout << "//////////////////////////////////" << endl;
	cout << "Ingrese la opci�n que desea realizar: ";<< endl;
	cout << "----------------------------------" << endl;
	cin >> opcion;
	return opcion;
}

// Funci�n principal del programa

int main()
{
	char opcion;
	double a, b, c, resultado;
	do 
	{
		// Mostrar el men� y obtener la opci�n del usuario
		opcion = menu();
		// Ejecutar la opci�n elegida
		switch (opcion)
		{
		case '1':
			// Pedir al usuario que ingrese dos n�meros
			cout << "Ingrese el primer n�mero: ";
			cin >> a;
			cout << "Ingrese el segundo n�mero: ";
			cin >> b;
			// Llamar a la funci�n multiplicar y guardar el resultado
			resultado = multiplicar(a, b);
			// Mostrar el resultado
			cout << "El resultado de la multiplicaci�n es: " << resultado << endl;
			break;
		case '2':
			// Pedir al usuario que ingrese dos n�meros
			cout << "Ingrese el primer n�mero: ";
			cin >> a;
			cout << "Ingrese el segundo n�mero: ";
			cin >> b;
			// Llamar a la funci�n dividir y guardar el resultado
			resultado = dividir(a, b);
			// Mostrar el resultado
			cout << "El resultado de la divisi�n es: " << resultado << endl;
			break;
		case '3':
			// Pedir al usuario que ingrese tres n�meros
			cout << "Ingrese el primer n�mero: ";
			cin >> a;
			cout << "Ingrese el segundo n�mero: ";
			cin >> b;
			cout << "Ingrese el tercer n�mero: ";
			cin >> c;
			// Llamar a la funci�n multiplicar y guardar el resultado
			resultado = multiplicar(a, b, c);
			// Mostrar el resultado
			cout << "El resultado de la multiplicaci�n es: " << resultado << endl;
			break;
		case '4':
			// Pedir al usuario que ingrese tres n�meros
			cout << "Ingrese el primer n�mero: ";
			cin >> a;
			cout << "Ingrese el segundo n�mero: ";
			cin >> b;
			cout << "Ingrese el tercer n�mero: ";
			cin >> c;
			// Llamar a la funci�n mayor y guardar el resultado
			resultado = mayor(a, b, c);
			// Mostrar el resultado
			cout << "El mayor de los tres n�meros es: " << resultado << endl;
			break;
		case 's':
			// Salir del programa
			cout << "Gracias por usar el men�. Hasta pronto." << endl;
			break;
		default:
			// Mostrar un mensaje de error si la opci�n no es v�lida
			cout << "Error: opci�n inv�lida. Intente de nuevo." << endl;
			break;
		};
	} while (opcion != 's'); // Repetir el men� hasta que el usuario elija salir
	
	return 0;
}

	
