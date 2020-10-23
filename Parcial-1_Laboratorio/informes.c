#include "ELECTRODOMESTICOS.h"
#include "REPARACION.h"
#include <stdio.h>
#include <stdlib.h>
#define LIBRE 0
#define OCUPADO 1


// ************* INFORMES********************************

void informe1(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca)
{

    int i;

    printf("\tElectrodomesticos del anio( modelo ) 2020\n");

    printf("SERIE   |   MARCA  \n");


    for(i=0 ; i < tam ; i++)
    {
        if(aparato[i].estadoElectro==OCUPADO && aparato[i].modelo==2020)
        {
            printf("%8d    |   %8s\n", aparato[i].serie, marcas[i].descripcion);
        }

    }


}



void informe2(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca)
{


    int auxIDmarca;
    int i;
    int j;

    printf("\t Mostramos Electrodomésticos de una marca seleccionada\n");

    MostrarElectrodomesticos(aparato,tam,marcas,cantMarca);
    mostrarMarca(marcas,5);


    printf("\nIngrese el ID de la marca: ");
    scanf("%d", &auxIDmarca);

    printf("\nDESCRIPCION   |   MODELO   |    SERIE\n");

    for(i=0 ; i < tam ; i++)
    {

        for(j=0 ; j < cantMarca ; j++)
        {
            if(aparato[i].estadoElectro==OCUPADO && marcas[j].idMarca==auxIDmarca && marcas[j].estadoMarca==OCUPADO)
            {
                printf("%8s   |  %8d  |  %d\n", marcas[i].descripcion, aparato[i].modelo, aparato[i].serie);
            }
        }



    }


}
void informe9(Eservicios service[], int cantService,Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion arreglo[], int cantRR)
{

    int i;
    int j;
    int k;


    printf("\tTrabajos realizados a Electrodomesticos del anio( modelo ) 2018\n");

    printf("DESCRIPCION   |   PRECIO  |    MARCA\n");


    for(i=0 ; i < cantMarca ; i++)
    {
        for(j=0; j < cantService; j++)
        {
            for(k=0 ; k < tam ; k++)
            {
                if(service[j].idServicio==arreglo[cantRR].idReparacion && aparato[k].modelo==2018)
                {
                    printf("%8s   |   %8d   |   %8s\n", service[j].descripcion, service[j].precio,marcas[i].descripcion);
                }
            }


        }
    }

}


void informe8(Eservicios reparacion[], int cantService, Eelectrodomestico aparato[], int tam)
{
    int i;
    int j;

    printf("\tMostrar todos los Electrodomesticos que realizaron una garantia y la fecha\n");

    printf("MODELO   |    SERIE  \n");


    for(i=0 ; i < cantService ; i++)
    {
        for(j=0 ; j < tam ; j++)
        {
            if(reparacion[i].idServicio==20000 && reparacion[i].estadoServicio==OCUPADO && aparato[j].estadoElectro==OCUPADO)
            {
                printf("%8d   |    %8d\n", aparato[j].modelo, aparato[j].serie);

            }
        }

    }


}

void informe4(Ereparacion arreglo[], int canTarreglo, Eelectrodomestico aparato[], int tam)
{

    printf("\tListar los Electrodomesticos que no tuvieron reparaciones\n");

    printf("SERIE   |    MODELO  \n");


    int i;
    int j;


    for(i=0 ; i < canTarreglo ; i++)
    {
        for(j=0 ; j < tam ; j++)
        {
            if(arreglo[i].estadoReparacion==LIBRE && aparato[j].estadoElectro==OCUPADO)
            {
                printf("%8d   |   %8d\n", aparato[j].serie, aparato[j].modelo);
            }
        }
    }





}


void menuInformes(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion reparacion[], int cantRR, Eservicios service[], int cantService)
{

    int opcion;

    do
    {

        printf("1- Mostrar Electrodomesticos del anio(modelo) 2020");
        printf("\n2- Mostrar Electrodomesticos de una marca seleccionada");
        printf("\n3- Mostrar todos las reparaciones efectuadas al Electrodomestico seleccionado");
        printf("\n4- Listar los Electrodomesticos que no tuvieron reparaciones");
        printf("\n5- Informar importe total de las reparaciones realizadas a un Electrodomestico seleccionado");
        printf("\n6- Mostrar el servicio mas pedido");
        printf("\n7- Mostrar la recaudación en una fecha en particular");
        printf("\n8- Mostrar todos los Electrodomésticos que realizaron una garantía y la fecha");
        printf("\n9- Trabajos realizados a Electrodomesticos del anio(modelo) 2018");
        printf("\n10- Facturación total por los mantenimientos");
        printf("\n11- Informar la marca de Electrodomésticos que efectuaron más refacciones");
        printf("\n12- Listar los Electrodomesticos que recibieron reparacion en un fecha determinada");
        printf("\n13- VOLVER AL MENU PRINCIPAL");
        printf("\n14- INGRESE UNA OPCION - 1,2,3,4,5,6,7,8,9,10,11,12,13,14:  ");
        scanf("%d", &opcion);

        while(opcion < 1 || opcion > 14)
        {
            fflush(stdin);
            printf("\nError...Reingrese opcion 1/2/3/4/5/6/7/8/9/10/11/12/13 --> ");
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
        case 1:
            system("cls");
            informe1(aparato,tam,marcas,cantMarca);
            system("PAUSE");
            system("cls");
            break;

        case 2:
            system("cls");
            informe2(aparato,tam,marcas,cantMarca);
            system("PAUSE");
            system("cls");
            break;

            case 9:
                system("cls");
                informe9(service,4,aparato,tam,marcas,cantMarca,reparacion,cantRR);
                system("PAUSE");
                system("cls");
                break;

        case 8:
            system("cls");
            informe8(reparacion,cantRR,aparato,tam);
            system("PAUSE");
            system("cls");
            break;

        case 4:
            system("cls");
            informe4(reparacion,cantRR, aparato,tam);
            system("PAUSE");
            system("cls");
            break;
        }



    }
    while(opcion !=13);



}
