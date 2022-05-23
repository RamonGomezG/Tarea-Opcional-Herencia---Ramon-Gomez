//
// Created by esau- on 22/05/2022.
//

#include "Envio.h"

Envio::Envio(){
    nombreR = "Vacio";
    direccionR = "Vacio";
    ciudadR = "Vacio";
    estadoR = "Vacio";
    codigoPostalR = 000;

    nombreD = "Vacio";
    direccionD = "Vacio";
    ciudadD = "Vacio";
    estadoD = "Vacio";
    codigoPostalD = 000;

    costoEstandar = 235.5;
}

Envio::Envio(string nombreR_, string direccionR_, string ciudadR_, string estadoR_, int codigoPostalR_, string nombreD_, string direccionD_, string ciudadD_, string estadoD_, int codigoPostalD_, double costoEstandar_){
    nombreR = nombreR_;
    direccionR = direccionR_;
    ciudadR = ciudadR_;
    estadoR = estadoR_;
    codigoPostalR = codigoPostalR_ ;

    nombreD = nombreD_;
    direccionD = direccionD_ ;
    ciudadD = ciudadD_;
    estadoD = estadoD_;
    codigoPostalD = codigoPostalD_;

    costoEstandar = costoEstandar_;
};

//setters
//Remitente
void Envio::setNombreR(string nombreR_){
    nombreR = nombreR_;
}
void Envio::setDireccionR(string direccionR_){
    direccionR = direccionR_;
}
void Envio::setCiudadR(string ciudadR_){
    ciudadR = ciudadR_;
}
void Envio::setEstadoR(string estadoR_){
    estadoR = estadoR_;
}
void Envio::setCodigoPostalR(int codigoPostalR_){
    codigoPostalR = codigoPostalR_ ;
}
//Destinatario
void Envio::setNombreD(string  nombreD_){
    nombreD = nombreD_;
}
void Envio::setDireccionD(string direccionD_){
    direccionD = direccionD_ ;
}
void Envio::setCiudadD(string ciudadD_){
    ciudadD = ciudadD_;
}
void Envio::setEstadoD(string estadoD_){
    estadoD = estadoD_;
}
void Envio::setCodigoPostalD(int codigoPostalD_){
    codigoPostalD = codigoPostalD_;
}
//General
void Envio::setCostoEStandar(double costoEstandar_){
    costoEstandar = costoEstandar_;
}

//getters
string Envio::getNombreD(){
    return nombreD;
}
string Envio::getDireccionD(){
    return direccionD;
}
string Envio::getCiudadD(){
    return ciudadD;
}
string Envio::getEstadoD(){
    return estadoD;
}
int Envio::getCodigoPostalD(){
    return codigoPostalD;
}

string Envio::getNombreR(){
    return  nombreR;
}
string Envio::getDireccionR(){
    direccionR;
}
string Envio::getCiudadR(){
    return ciudadR;
}
string Envio::getEstadoR(){
    return  estadoR;
}
int Envio::getCodigoPostalR(){
    return codigoPostalR;
}

double Envio::getCostoEstandar(){
    return costoEstandar;
}

//str
string Envio::str(){
    return "\nRemitente:" + nombreR + "\n" + direccionR + "\n" + ciudadR + ", " + estadoR + " " + to_string(codigoPostalR) + "\n" +
    "Destinatario:" + nombreD + "\n" + direccionD + "\n" + ciudadD + ", " + estadoD + " " + to_string(codigoPostalD) + "\n" +
          "Costo de envio: " + to_string(costoEstandar);
}

double Envio::calculaCosto(){
    return costoEstandar;
}