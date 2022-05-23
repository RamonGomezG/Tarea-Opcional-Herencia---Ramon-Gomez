//
// Created by esau- on 22/05/2022.
//

#ifndef PAQUETERIA_PAQUETE_H
#define PAQUETERIA_PAQUETE_H
#include "Envio.h"


class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoKilo;

public:
    //constructores
    Paquete();
    Paquete(double, double, double, double, double);

    //setters
    void setLargo(double);
    void setAncho(double);
    void setProfundidad(double);
    void setPeso(double);
    void setCostoKilo(double);

    //getters
    double getLargo();
    double getAncho();
    double getProfundidad();
    double getPeso();
    double getCostoKilo();

    //General
    string str();
    double calculaCosto();

};


#endif //PAQUETERIA_PAQUETE_H
