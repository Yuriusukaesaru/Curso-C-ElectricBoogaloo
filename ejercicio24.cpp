/*EN ESTE EJERCICIO VEREMOS EL ENCAPSULAMIENTO*/
#include<iostream>
#include<string>
using namespace std;

class Empleado{
    public:
            int iEmpleadoEdad;
            float fEmpleadoPeso;
            float fEmpleadoEstatura;

        void FnEmpleadoNombreSet(string sNom,string sApe)
        {
           
            if(sNom.find("JUAN")==string::npos&&sNom.find("juan")==string::npos)//la funcion .find retorna un string::npos si no se encuentra 
            {                          //la palabra 
                sEmpleadoNombre=sNom;
            
                if (sApe.empty())
                {
                EmpleadoApellidoDefault();
                cout<<"El apellido no puede estar vacio\n Se asigno un valor por default\n";
                }
                else
                {
                sEmpleadoApellido=sApe;
                }
            }
            else
            {
                 cout<<"El nombre no se asigno ni el apellido!"<<endl;
            }
        }

        string FnStringEmpleadoNombreGet(){
            return sEmpleadoNombre+ " " +sEmpleadoApellido;
        }

        void FnMostrarMensaje(){
            cout<<"EL NOMBRE Y EL APELLIDO ES EL SIGUIENTE: "<<FnStringEmpleadoNombreGet();
        }
    private:
            string sEmpleadoNombre;
            string sEmpleadoApellido;

        void EmpleadoApellidoDefault()
        {
            sEmpleadoApellido="AMBARIO";
        }
};

int main(){

    Empleado xEmpleado;

    cout<<"CURSO DE C++"<<endl;
    cout<<"COMPLEMENTO DE CLASES"<<endl;

        xEmpleado.iEmpleadoEdad={33};
        xEmpleado.fEmpleadoPeso={75.50};
        xEmpleado.fEmpleadoEstatura={1.31};
    
    xEmpleado.FnEmpleadoNombreSet("JULIO","SANCHEZ");
    cout<<"NOMBRE: "<<xEmpleado.FnStringEmpleadoNombreGet()<<endl;
    cout<<"EDAD: "<<xEmpleado.iEmpleadoEdad<<endl;
    cout<<"ESTATURA: "<<xEmpleado.fEmpleadoEstatura<<endl;
    cout<<"PESO "<<xEmpleado.fEmpleadoPeso<<endl;
    return 0;
}