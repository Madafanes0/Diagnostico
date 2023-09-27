#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <stdlib.h>
#include "Habitacion.h"
using namespace std;


//Usar arreglos para giardar las habitaciones y no un vector
//Se inicialza en 100 los numeros de habitaciones para poder 

//se necesita un atributo para saber el lenght del arreglo

class Hotel{
    private:
    string nombre;
    int numHabitaciones;
    Habitacion habitaciones[50];
    public:
    Hotel(string);
    ~Hotel();
    int checkin(string, int, int, double);
    bool checkout(int);
    bool realizarCargosHabitacion(int, double);
    int getTotalXTarifaBase();
    void imprimeOcupacion();
};


#endif