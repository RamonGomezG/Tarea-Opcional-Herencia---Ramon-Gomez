//
// Created by esau- on 22/05/2022.
//

#ifndef PAQUETERIA_SOBRE_H
#define PAQUETERIA_SOBRE_H
#include "Envio.h"

class Sobre: public Envio{
private:
    double ancho;
    double largo;
    double costoAdicional;

public:
    Sobre();
    Sobre(double, double);

    void setAncho(double);
    void setLargo(double);

    double getAncho();
    double getLargo();

    double calculaCosto();

    string str();
};


#endif //PAQUETERIA_SOBRE_H
