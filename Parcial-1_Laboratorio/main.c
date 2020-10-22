#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "REPARACION.h"
#include "ELECTRODOMESTICOS.h"
#include "repElectroService.h"
#define TAM 10
#define LIBRE 0
#define OCUPADO 1

int main()
{
    Eelectrodomestico aparato[TAM];
    Emarca listaMarca[TAM];
    Eservicios service[TAM];
   // Efecha fechas[5];
    Ereparacion arreglos[TAM];
    Ecliente clientes[TAM];

InicializarEstado(aparato,TAM);


    int respuesta;

    int idReparacion=100;


    do
    {
        printf("\tMENU DE OPCIONES:\n");
        printf("\n1. ALTA ELECTRODOMESTICO");
        printf("\n2. MODIFICAR ELECTRODOMESTICO:");
        printf("\n3. BAJA ELECTRODOMESTICO: ");
        printf("\n4. LISTAR ELECTRODOMESTICOS:");
        printf("\n5. LISTAR MARCAS");
        printf("\n6. LISTAR SERVICIOS");
        printf("\n7. ALTA REPARACION:");
        printf("\n8. LISTAR REPARACIONES");
        printf("\n9. INFORMES");
        printf("\n10. SALIR");
        printf("\ningrese una opcion: 1/2/3/4/5/6/7/8/9/10 = ");

        scanf("%d",&respuesta);
        while(respuesta < 1 || respuesta > 9)
        {
            fflush(stdin);
            printf("\nError...Reingrese opcion 1/2/3/4/5/6/7/8/9 --> ");
            scanf("%d", &respuesta);
        }


        switch(respuesta)
        {
        case 1:
                system("cls");
                CargarElectrodomestico(aparato,TAM,listaMarca,5);
                system("PAUSE");
                system("cls");
                break;


        case 2:
            if(EstadosElectrodomesticos(aparato,TAM)==OCUPADO)
            {
                modificarElectro(aparato,TAM,listaMarca,5);
                system("PAUSE");
                system("cls");
                break;

            }

            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }

        case 3:
            if(EstadosElectrodomesticos(aparato,TAM)==OCUPADO)
            {
                BajaElectrodomesticos(aparato,TAM,listaMarca,TAM);
                system("PAUSE");
                system("cls");
                break;
           }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }


        case 4:
            if(EstadosElectrodomesticos(aparato,TAM)==OCUPADO)
            {
                system("cls");

                listaElectrodomesticos(aparato,TAM);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }


        case 5:
                system("cls");
                marca(listaMarca,TAM);
                listarMarcas(listaMarca,TAM);
                system("PAUSE");
                system("cls");
                break;

        case 6:

                servicio(service,TAM);
                mostrarService(service,TAM);
                system("PAUSE");
                system("cls");
                break;

        case 7:
            if(EstadosElectrodomesticos(aparato,TAM)==OCUPADO)
            {

                altaReparaciones(aparato,TAM,service,TAM,listaMarca,5,arreglos,5,idReparacion,clientes,5);
                idReparacion++;
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;

            }

        case 8:
           /* if(EstadosElectrodomesticos(aparato,TAM)==OCUPADO)
            {*/
                listarReparaciones(arreglos,TAM,service,TAM,clientes,TAM);
                system("PAUSE");
                system("cls");
                break;
           /* }
             else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;

            }*/

        case 9:
            system("cls");
            menuInformes(aparato,TAM,listaMarca,TAM);
            break;

        }

    }
    while(respuesta!=10);



    return 0;
}

