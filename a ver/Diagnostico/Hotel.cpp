#include "Hotel.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


Hotel::Hotel(string _nombre){
    nombre = _nombre;
    numHabitaciones = 50;
    for (int i = 0 ;i<numHabitaciones;i = i+1){
        habitaciones[i].setNumero(i+100);
    }
}

Hotel::~Hotel(){}

int Hotel::checkin(string _nombre, int _adultos, int _infante, double _credito){
    for (int i = 0; i<numHabitaciones; i = i+1){
        if (habitaciones[i].getDisponible() == true){
            habitaciones[i].checkin(_nombre, _adultos, _infante, _credito);

            return habitaciones[i].getNumero();
            break;
        }
    }

    return -1;
}

bool Hotel::checkout(int _habi){
    if (_habi >= 100 && _habi <= 149){
        for (int i = 0; i<numHabitaciones; i =i +1){
            if (habitaciones[i].getNumero() == _habi){
                if (habitaciones[i].checkout() == true){
                    return true;
                }else{
                    return false;
                }
                
            }
        }
    }else{
        return false;
    }

    return false;
}

bool Hotel::realizarCargosHabitacion(int _habi, double _cargo){
    for (int i = 0; i<numHabitaciones; i =i +1){
        if (habitaciones[i].getNumero() == _habi){
            if (habitaciones[i].getDisponible() == false){
                if (habitaciones[i].realizarCargo(_cargo) == true){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    return false;
}

int Hotel::getTotalXTarifaBase(){
    int total = 0;
    for (int i = 0; i<numHabitaciones; i = i+1){
        total = total + habitaciones[i].getTarifaBase();
    }

    return total;
}

void Hotel::imprimeOcupacion(){
    cout << "Ocupacion del hotel : ";
    for (int i = 0; i<numHabitaciones; i = i+1){
        cout << habitaciones[i].toString() << endl;
    }
}