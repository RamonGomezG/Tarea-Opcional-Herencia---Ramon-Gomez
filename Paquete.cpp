//
// Created by esau- on 22/05/2022.
//

#include "Paquete.h"

//constructores
Paquete::Paquete(){
    largo = 0.0;
    ancho = 0.0;
    profundidad = 0.0;
    peso = 0.0;
    costoKilo = 0.0;
}
Paquete::Paquete(double largo_, double ancho_, double profundidad_, double peso_, double costoKilo_){
    largo = largo_;
    ancho = ancho_;
    profundidad = profundidad_;
    peso = peso_;
    costoKilo = costoKilo_;
}

//setters
void Paquete::setLargo(double largo_){
    largo = largo_;
}
void Paquete::setAncho(double ancho_){
    ancho = ancho_;
}
void Paquete::setProfundidad(double profundidad_){
    profundidad = profundidad_;
}
void Paquete::setPeso(double peso_){
    peso = peso_;
}
void Paquete::setCostoKilo(double costoKilo_){
    costoKilo = costoKilo_;
}

//getters
double Paquete::getLargo(){
    return largo;
}
double Paquete::getAncho(){
    return ancho;
}
double Paquete::getProfundidad(){
    return profundidad;
}
double Paquete::getPeso(){
    return peso;
}
double Paquete::getCostoKilo(){
    return costoKilo;
}

//General

double Paquete::calculaCosto(){
    return costoEstandar + (costoKilo * peso);
}

string Paquete::str(){
    return "\nRemitente:" + nombreR + "\n" + direccionR + "\n" + ciudadR + ", " + estadoR + " " + to_string(codigoPostalR) + "\n" +
           "Destinatario:" + nombreD + "\n" + direccionD + "\n" + ciudadD + ", " + estadoD + " " + to_string(codigoPostalD) + "\n" +
           "Costo de envio: " + to_string(costoEstandar) + "\n Largo: " + to_string(largo) + "\n ancho: " +  to_string(ancho) + "\n profundidad: " +
    to_string(profundidad) + "\n Peso: " + to_string(peso) + "\n Costo x kilo: " + to_string(costoKilo) + "\n";
}
