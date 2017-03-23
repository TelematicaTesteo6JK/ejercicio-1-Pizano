#include <iostream>
using namespace std;
/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
	cout <<"Test Data   / Expected result / Actual Result" <<endl;
	cout <<"    3     /     30              / "<<pago_estacionamiento(3) <<endl;
	cout <<"    -2    /     0              /  "<<pago_estacionamiento(-2) <<endl;
	cout <<"    6     /  	54              / "<<pago_estacionamiento(6) <<endl;
	cout <<"    12    / 	84              / "<<pago_estacionamiento(12) <<endl;
	cout <<"    0     / 	0              /  "<<pago_estacionamiento(0) <<endl;
	cout <<"    1     / 	10              / "<<pago_estacionamiento(1) <<endl;
	cout <<"    5     / 	50              / "<<pago_estacionamiento(5) <<endl;
	cout <<"    7     / 	63              / "<<pago_estacionamiento(7) <<endl;
	cout <<"    10    / 	90              / "<<pago_estacionamiento(10) <<endl;
	cout <<"    11    / 	77              / "<<pago_estacionamiento(11) <<endl;
			
	  


    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
