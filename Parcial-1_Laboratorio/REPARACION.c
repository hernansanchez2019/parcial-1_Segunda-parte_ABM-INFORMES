#include "REPARACION.h"
#define LIBRE 0
#define OCUPADO 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarService(Eservicios mantenimiento[],int tam)
{

    int i;

    printf("\n\t'SERVICIO'\n\n");
    printf("    Descripcion      Precio $ \n\n");

    for(i=0; i < tam ; i++)
    {
        if(mantenimiento[i].estadoServicio==OCUPADO)
        {
            printf("%14s  %10d\n",
                   mantenimiento[i].descripcion,
                   mantenimiento[i].precio);
        }

    }

}


/*void fecha(Efecha fecha[], int tam)
{
    int dia[4]= {1,26,15,8};
    int mes[4]= {10,12,3,4};
    int anio[4]= {2019,2020,2017,2019};

    int i;

    for(i=0; i < tam ; i++)
    {
        fecha[i].anio=anio[i];
        fecha[i].dia=dia[i];
        fecha[i].mes=mes[i];
    }
}
void mostramosFechas(Efecha fechas[], int tam)
{
    int i;

    for(i=0; i < tam ; i++)
    {
        printf("%d/%d/%d/\n", fechas[i].dia,fechas[i].mes,fechas[i].anio);
    }
}*/

void servicio(Eservicios mantenimiento[], int tam)
{


    int idServicio[4]={20000,20001,20002,20003};
    char descripcion[4][25]= {"Garantia","Mantenimiento","Repuestos","Refaccion"};
    int precio[4]= {250,500,400,600};
    int estadoServicio[4]= {1,1,1,1};

    int i;

    for(i=0; i < tam ; i++)
    {
        mantenimiento[i].estadoServicio=estadoServicio[i];
        mantenimiento[i].idServicio=idServicio[i];
        mantenimiento[i].precio=precio[i];
        strcpy(mantenimiento[i].descripcion,descripcion[i]);
    }




}


void CargarCliente(Ecliente cliente[], int tam)
{
    int idCliente[5]={1000,1001,1002,1003,1004};
    char nombre[5][20]={"Luis","Pedro","Mario","Ariel","Juan"};
    char apellido[5][20]={"Perez","Gonzalez","Sanchez","Alvarez","Fernandez"};
    int estadoCliente[5]={1,1,1,1,1};

    int i;

    for(i=0; i < tam ; i++)
    {
        cliente[i].idCliente=idCliente[i];
        cliente[i].estadoCliente=estadoCliente[i];
        strcpy(cliente[i].nombre, nombre[i]);
        strcpy(cliente[i].apellido, apellido[i]);
    }


}


void mostrarClientes(Ecliente clientes[], int tam)
{

    printf("\n\tCLIENTES\n");

    printf("ID  |     Nombre   |  Apellido\n");

    int i;

    for(i=0 ; i < tam ; i++)
    {
        if(clientes[i].estadoCliente==OCUPADO)
        {
            printf("%7d%10s%10s\n", clientes[i].idCliente, clientes[i].nombre, clientes[i].apellido);
        }
    }





}

/*void reparaciones(Ereparacion arreglo[], int tamArreglo,int idReparacion, Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService)
{

    arreglo[tamArreglo].idReparacion=idReparacion;

    if(arreglo[tamArreglo].serie!=aparato[tam].serie)
    {
        printf("Numero de serie inexistente !!!");
    }

    else
    {
        arreglo[tamArreglo].serie==aparato[tam].serie;
    }

    if(arreglo[tamArreglo].idServicio!=mantenimiento[tamService].idServicio)
    {
        printf("Numero de servicio inexistente !!!");
    }

    else
    {
        arreglo[tamArreglo].idServicio==mantenimiento[tamService].idServicio;
    }


}


void altaReparaciones(Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService)
{

    printf("\tALTA REPARACIONES\n");

    MostrarElectrodomesticos(aparato,tam);
    mostrarService(mantenimiento,tamService);


}
*/
