#include "Habitacion.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

Habitacion::Habitacion(int num){
    numero = num;
    disponible = true;
}

Habitacion::Habitacion(){
    nombre = "";
    numero = 0;
    adultos = 0;
    infantes = 0,
    credito = 0;
    cargo = 0;
    disponible = true;
}

Habitacion::~Habitacion(){}

void Habitacion::setNumero(int _numero){
    numero = _numero;
}
int Habitacion::getNumero(){
    return numero;
}

int Habitacion::getDisponible(){
    return disponible;
}

bool Habitacion::checkin(string _nombre, int _adultos, int _infante, double _credito){
    if (disponible == true){
        nombre = _nombre;
        adultos = _adultos;
        infantes = _infante;
        disponible = false,
        credito = _credito;
        cargo = 0;

        return true;
    }else{
        return false;
    }
    
}

bool Habitacion::checkout(){
    if (disponible == false){
        nombre = "";
        adultos = 0;
        infantes = 0,
        credito = 0;
        cargo = 0;
        disponible = true;
        return true;
    }
    else {
        return false;
    }
}

int Habitacion::getTarifaBase(){
    double total = adultos * 450 + infantes * 150;
    return total;
}

bool Habitacion::realizarCargo(double _cargo){
    if (disponible == false && credito > 0 && _cargo <= (credito - cargo) && _cargo > 0){
        cargo = cargo + _cargo;
        return true;
    }else{
        return false;
    }
}

string Habitacion::toString(){
    string result = to_string(numero) + ",Huesped:" + nombre + "Tarifa Base:" + to_string(getTarifaBase()) + ",Credito:" + to_string(credito) + ",Cargos:" + to_string(cargo);
    return result;
}