//
// Created by esau- on 22/05/2022.
//

#include "Sobre.h"
Sobre::Sobre(){
    largo = 0.0;
    ancho = 0.0;
    costoAdicional = 0.0;
}
Sobre::Sobre(double largo_, double ancho_){
    largo = largo_;
    ancho = ancho_;

    if ((largo > 25) && ( ancho > 30) || (largo > 30) && (ancho >25)){
        costoAdicional = 55.50;
    }
    else{
        costoAdicional = 0.0;
    }
}

void Sobre::setAncho(double ancho_){
    ancho = ancho_;
}
void Sobre::setLargo(double largo_){
    largo = largo_;
}

double Sobre::getAncho(){
    return ancho;
}
double Sobre::getLargo(){
    return largo;
}

double Sobre::calculaCosto(){
    return costoEstandar + costoAdicional;
}

string Sobre::str(){
    return "\nRemitente:" + nombreR + "\n" + direccionR + "\n" + ciudadR + ", " + estadoR + " " + to_string(codigoPostalR) + "\n" +
    "Destinatario:" + nombreD + "\n" + direccionD + "\n" + ciudadD + ", " + estadoD + " " + to_string(codigoPostalD) + "\n" +
    "Costo de envio: " + to_string(costoEstandar) + "\n" + "ancho: " + to_string(ancho) + "\n" + "largo: " + to_string(largo) + "\n"
    + "Costo adicional: " + to_string(costoAdicional);
}


