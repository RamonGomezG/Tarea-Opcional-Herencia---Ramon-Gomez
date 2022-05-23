#include <iostream>
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"
using namespace std;

int main() {
    //Ejemplo de clase Envío
    Envio porEnviar;
    cout << porEnviar.str();

    cout << "\n";

    string nombreR_ = "Ramon Gomez";
    string direccionR_ = "Avenida Ejemplo #123";
    string ciudadR_ = "Monclova";
    string estadoR_ = "Coahuila";
    int codigoPostalR_ = 1324 ;

    string nombreD_ = "Eduardo Perez";
    string direccionD_ = "Avenida Siempreviva #906";
    string ciudadD_ = "Monterrey";
    string estadoD_ = "Nuevo Leon";
    int codigoPostalD_ = 68480;

    double costoEstandar_ = 235.50;

    Envio enviado(nombreR_, direccionR_, ciudadR_, estadoR_, codigoPostalR_, nombreD_, direccionD_, ciudadD_, estadoD_, codigoPostalD_, costoEstandar_);

    cout << enviado.str();

    cout << '\n';

    //Ejemplo de clase Paquete
    Paquete paquetin;
    cout << paquetin.str();
    cout << "Costo total: ";
    cout << paquetin.calculaCosto();

    //Paquete con parametros
    double largo = 10.0;
    double ancho = 15.0;
    double profundidad = 7.0;
    double peso = 30.0;
    double costoKilo = 15.0;

    cout << "\n";

    Paquete paqueton(largo, ancho, profundidad, peso, costoKilo);
    cout << paqueton.str();
    cout << "Costo total: ";
    cout << paqueton.calculaCosto();

    //ejemplo de acceso a la clase padre
    paqueton.setNombreD("Ramon Gomez");
    paqueton.setCiudadD("Monclova");
    paqueton.setCiudadR("Monterrey");
    paqueton.setNombreR("Eduardo Perez");
    paqueton.setCodigoPostalD(282920);
    paqueton.setCodigoPostalR(282920);
    paqueton.setDireccionD("Direccion ejemplo 1");
    paqueton.setDireccionR("Direccion ejemplo 2");
    paqueton.setEstadoD("Nuevo Leon");
    paqueton.setEstadoR("Coahuila");

    cout << "\n";
    cout << paqueton.str();
    cout << "Costo total: ";
    cout << paqueton.calculaCosto();
    cout << "\n";

    //Ejemplo para sobres
    Sobre sobreVacio;
    cout << sobreVacio.str();
    cout << "\n";

    Sobre sobreGrande(26.0,31.0);

    sobreGrande.setNombreD("Ramon Gomez");
    sobreGrande.setCiudadD("Monclova");
    sobreGrande.setCiudadR("Monterrey");
    sobreGrande.setNombreR("Eduardo Perez");
    sobreGrande.setCodigoPostalD(282920);
    sobreGrande.setCodigoPostalR(282920);
    sobreGrande.setDireccionD("Direccion ejemplo 1");
    sobreGrande.setDireccionR("Direccion ejemplo 2");
    sobreGrande.setEstadoD("Nuevo Leon");
    sobreGrande.setEstadoR("Coahuila");

    cout << "\n";
    cout << sobreGrande.str();
    cout << "\n";
    cout << "Costo total: ";
    cout << sobreGrande.calculaCosto();
    cout << "\n";


    return 0;
}
