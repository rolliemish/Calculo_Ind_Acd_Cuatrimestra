/*Programa que calcule el indice academico cuatrimestral*/
	
/* Programa que calcule el índice académico cuatrimestral */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n1, n2, n3, n4, n5, n6, n7, c1, c2, c3, c4, c5, c6, c7;
    int p1, p2, p3, p4, p5, p6, p7;
    double sumap = 0, sumac = 0;
    double indcuat = 0;
    
    cout << "Introduzca la cantidad de creditos 1: "; cin >> c1;
    cout << "Introduzca la cantidad de creditos 2: "; cin >> c2;
    cout << "Introduzca la cantidad de creditos 3: "; cin >> c3;
    cout << "Introduzca la cantidad de creditos 4: "; cin >> c4;
    cout << "Introduzca la cantidad de creditos 5: "; cin >> c5;
    cout << "Introduzca la cantidad de creditos 6: "; cin >> c6;
    cout << "Introduzca la cantidad de creditos 7: "; cin >> c7;

    cout << "\nCuanto saco en la Materia 1: "; cin >> n1;
    cout << "Cuanto saco en la Materia 2: "; cin >> n2;
    cout << "Cuanto saco en la Materia 3: "; cin >> n3;
    cout << "Cuanto saco en la Materia 4: "; cin >> n4;
    cout << "Cuanto saco en la Materia 5: "; cin >> n5;
    cout << "Cuanto saco en la Materia 6: "; cin >> n6;
    cout << "Cuanto saco en la Materia 7: "; cin >> n7;

    p1 = c1 * n1;
    p2 = c2 * n2;
    p3 = c3 * n3;
    p4 = c4 * n4;
    p5 = c5 * n5;
    p6 = c6 * n6;
    p7 = c7 * n7;

    sumap = p1 + p2 + p3 + p4 + p5 + p6 + p7;
    sumac = c1 + c2 + c3 + c4 + c5 + c6 + c7; 
    
    // Asegúrate de que la división se realice con decimales
    indcuat = sumap / sumac;

    cout << "\nTu Indice Cuatrimestral es: " << indcuat << endl;

    getch();
    return 0;
}

