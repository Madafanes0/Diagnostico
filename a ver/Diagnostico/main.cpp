#include "Hotel.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
    Hotel miHotel("Prueba");


    cout << miHotel.checkin("Pedro",1,2,123.0);
    return 0;
}