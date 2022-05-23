//
// Created by esau- on 22/05/2022.
//

#ifndef PAQUETERIA_ENVIO_H
#define PAQUETERIA_ENVIO_H
#include <iostream>
using namespace std;

class Envio {
protected:
    string nombreR;
    string direccionR;
    string ciudadR;
    string estadoR;
    int codigoPostalR;

    string nombreD;
    string direccionD;
    string ciudadD;
    string estadoD;
    int codigoPostalD;

    double costoEstandar;

public:
    //constructores
    Envio();
    Envio(string, string, string, string, int, string, string, string, string, int, double);

    //setters
    void setNombreR(string);
    void setDireccionR(string);
    void setCiudadR(string);
    void setEstadoR(string);
    void setCodigoPostalR(int);

    void setNombreD(string);
    void setDireccionD(string);
    void setCiudadD(string);
    void setEstadoD(string);
    void setCodigoPostalD(int);

    void setCostoEStandar(double);

    //getters
    string getNombreD();
    string getDireccionD();
    string getCiudadD();
    string getEstadoD();
    int getCodigoPostalD();

    string getNombreR();
    string getDireccionR();
    string getCiudadR();
    string getEstadoR();
    int getCodigoPostalR();

    double getCostoEstandar();
    double calculaCosto();

    //str
    string str();

};


#endif //PAQUETERIA_ENVIO_H
