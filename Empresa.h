#ifndef EMPRESA_H
#define EMPRESA_H

#include "Empleado.h"
#include "Pasante.h"
#include "Persona.h"
#include<vector>
#include<iostream>
using namespace std;

class Empresa{
    private:
        string nombre;
        string tipo;
        string fecha;
        string rubro;
        string presidente;
        string permiso;
        vector<Pasante> pasantes;
        vector<Empleado> empleados;
        vector<Persona> despedidos;
    public:
        Empresa(string,string,string,string,string);
        
        void setNombre(string);
        void setFecha(string);
        void setRubro(string);

        void addEmpleado(Empleado);
        void addPasante(Pasante);
        void despedirEmp(int);
        void despedirPas(int);

        string getNombre();
        string getFecha();
        string getRubro();
        string getPresidente();

        vector<Empleado> getEmpleados();
        vector<Pasante> getPasantes();

        ~Empresa();
};
#endif