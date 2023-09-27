#ifndef HABITACION_H
#define HABITACION_H
#include <string>
#include <stdlib.h>
using namespace std;


//EN LA DE GETTARIFA BASE SOLAMENTE SE REGRESA EL NUMERO PERO NO SE HACE EL CARGO EN NINGUN LADO


//Se necesita un constructor generico o por default para poder construii el arreglo de habitaciones

class Habitacion{
    private:
    int numero;
    string nombre;
    int adultos;
    int infantes;
    double credito;
    double cargo;
    bool disponible;

    public:
    Habitacion(int);
    Habitacion();
    ~Habitacion();

    int getNumero();
    int getDisponible();
    void setNumero(int);
    bool checkin(string, int, int, double);
    bool checkout();
    int getTarifaBase();
    bool realizarCargo(double);
    string toString();

};
#endif