/*! \mainpage Cargar/Guardar Empleados
 *
 * \section Descripcion
 *
 * La aplicacion permita guardar y cargar la información de los empleados en archivos .csv
 *
 */
#include "Empleado.h"
#include "ManejadorArchivo.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<Empleado> empleados;
  ManejadorArchivo* manejador = new ManejadorArchivo();

  manejador->cargar("/home/augusto/Desktop/empleados.csv", empleados);

  for(size_t i = 0; i < empleados.size(); i++) {
    cout << "Empleado " << i << "\n";
    empleados[i].imprimirInfo();
  }

  Empleado empleado1("Ivan", "Zuluaga", 5233275.5);
  Empleado empleado2("Jairo", "Ramirez", 8566212.5);
  Empleado empleado3("Daniela", "Perez", 1452666.5);
  empleados.push_back(empleado1);
  empleados.push_back(empleado2);
  empleados.push_back(empleado3);

  manejador->guardar("/home/augusto/Desktop/empleados.csv", empleados);
}

