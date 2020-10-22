#include "ELECTRODOMESTICOS.h"
#include "REPARACION.h"
#include <stdio.h>
#include <stdlib.h>
#define LIBRE 0
#define OCUPADO 1
void altaReparaciones(Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService, Emarca marcas[], int cantMarca,Ereparacion arreglos[],int tamArreglo, int idRep, Ecliente clientes[], int tamCliente)
{

    int auxIdservicio;
    int auxIdSerie;
    int auxCliente;

    printf("\tALTA REPARACIONES\n\n");


    listaElectrodomesticos(aparato,tam);
    servicio(mantenimiento,tamService);

    int i;

    printf("\n\t'SERVICIO'\n\n");
    printf("ID       Descripcion        Precio $ \n\n");

    for(i=0; i < tamService ; i++)
    {
        if(mantenimiento[i].estadoServicio==OCUPADO)
        {
            printf("%9d %12s% 9d\n",mantenimiento[i].idServicio,
                   mantenimiento[i].descripcion,
                   mantenimiento[i].precio);
        }

    }

    CargarCliente(clientes, tamCliente);
    mostrarClientes(clientes, tamCliente);


    printf("\nIngrese el numero de Serie del electrodomestico a Reparar: ");
    scanf("%d", &auxIdSerie);


    printf("\nIngrese el numero de ID del Servicio que desea realizar: ");
    scanf("%d", &auxIdservicio);


    printf("\nIngrese el numero de ID del Cliente: ");
    scanf("%d", &auxCliente);

    for(i=0 ; i < tamArreglo ; i++)
    {

        arreglos[i].idServicio=auxIdservicio;
        arreglos[i].serie=auxIdSerie;
        arreglos[i].estadoReparacion=OCUPADO;
        arreglos[i].idReparacion=idRep;
        arreglos[i].idCliente=auxCliente;

    }


}


void listarReparaciones(Ereparacion arreglo[], int tamReparacion, Eservicios service[], int tamService, Ecliente cliente[], int tamCliente)
{

    int i;
    int j;
    int k;


    printf("\tLISTAR REPARACIONES\n");


    printf("\nID REPARACION   |    SERVICIO  |   NOMBRE    |   APELLIDO  \n");

    for(i= 0 ; i < tamReparacion ; i++ )
    {
        for(j=0 ; j < tamService ; j++)
        {
            for(k=0 ; k < tamCliente ; k++)
            {
                if(arreglo[k].estadoReparacion==OCUPADO && arreglo[i].idServicio==service[j].idServicio && arreglo[k].idCliente==cliente[k].idCliente)
                {
                    if(service[j].estadoServicio==OCUPADO && cliente[k].estadoCliente==OCUPADO)
                    {
                       printf("\n%d  |  %s  |   %s   |    %s\n", arreglo[k].idReparacion, service[j].descripcion,cliente[k].nombre, cliente[k].apellido);

                    }

                }

            }

        }

    }


}
