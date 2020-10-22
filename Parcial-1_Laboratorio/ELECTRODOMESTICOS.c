#include "ELECTRODOMESTICOS.h"
#include "REPARACION.h"
#define LIBRE 0
#define OCUPADO 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int EstadosElectrodomesticos(Eelectrodomestico aparato[], int tam)
{
    int i;
    int estado= LIBRE;


    for(i=0; i<tam; i++)
    {
        if(aparato[i].estadoElectro==OCUPADO) // MUESTRA SOLO LOS QUE ESTAN OCUPADOS
        {
            estado=OCUPADO;
            break; // EL PRIMERO QUE BUSCA, CORTA
        }


    }

    return estado;

}


int BuscarLibre(Eelectrodomestico aparato[], int tam)
{


    int indice=-1; // el -1 representa el indice
    int i;


    for(i=0; i<tam; i++)// RECORREMOS EL VECTOR
    {

        if(aparato[i].estadoElectro==LIBRE)// CUANDO ESTA LIBRE ENTRA
        {
            indice=i;
            break; // cuando se cumple la condicion se queda con ese indice y el break corta ahi
        }

    }

    return indice; // DEVUELVE ESE LUGAR LIBRE 0, -1

}

void InicializarEstado(Eelectrodomestico aparato[], int tam)
{
    int i;

    for(i=0; i< tam ; i++)
    {
        aparato[i].estadoElectro=LIBRE; // CLIENTE INICIALIZADO EN I = CERO
    }

}





void CargarElectrodomestico(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca) // CARGAMOS UN EMPLEADO DE A UNO
{
    int lugarLibre;

    lugarLibre= BuscarLibre(aparato,tam);

    if(lugarLibre==-1)
    {
        printf("\nNo hay mas espacio\n");
    }
    else
    {
        printf("\tIngreso de electrodomestico\n");

        printf("Ingresar ID del electrodomestico: ");
        scanf("%d", &aparato[lugarLibre].id);

        printf("Ingresar el num. de serie: ");
        scanf("%d", &aparato[lugarLibre].serie);

        printf("Ingresar el modelo : ");
        scanf("%d", &aparato[lugarLibre].modelo);



        marca(marcas,cantMarca);
        mostrarMarca(marcas,cantMarca);

        printf("Ingrese el ID de la marca: ");
        scanf("%d", &aparato[lugarLibre].idMarca);

        //VALIDAMOS LAS MARCAS
        while(aparato[lugarLibre].idMarca < 100 || aparato[lugarLibre].idMarca >=105)
        {
            fflush(stdin);
            printf("Error...marca Inexistente, intentelo nuevamente: ");
            scanf("%d", &aparato[lugarLibre].idMarca);

        }


        aparato[lugarLibre].estadoElectro=OCUPADO; // CLIENTE OCUPADO

        printf("Electrodomestico cargado con exito !!!\n");

    }

}

void MostrarElectrodomesticos(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca)
{
    int i;
    int j;

    printf("\tELECTRODOMESTICOS CARGADOS CON SU MARCA\n");

    printf("\nId Electro.   Marca   Num.Serie    Modelo \n");
    for(i=0; i<tam; i++)
    {
        for(j= 0; j < cantMarca ; j++)
        {
            if(aparato[i].idMarca==marcas[j].idMarca)
            {
                if(aparato[i].estadoElectro==OCUPADO)// MUESTRA SOLO LOS QUE ESTAN OCUPADOS
                {
                    printf("\n%10d%10s%10d%10d \n",aparato[i].id,marcas[j].descripcion, aparato[i].serie, aparato[i].modelo);
                }
            }

        }

    }

}

void mostrarMarca(Emarca marca[], int tam)
{

    int i;


    printf("\n\t'MARCA'\n\n");
    printf("ID  Descripcion\n\n");

    for(i=0; i < tam ; i++)
    {
        printf("%d  %s\n",marca[i].idMarca,marca[i].descripcion);
    }

}


void marca(Emarca ListaMarca[], int tam)
{

    int idMarca[5]= {100,101,102,103,104};
    char descripcion[5][20]= {"Wirpool"," Sony"," Liliana","Gafa","Philips"};
    int estadoMarca[5]= {1,1,1,1,1};

    int i;

    for(i=0; i < tam ; i++)
    {
        ListaMarca[i].estadoMarca=estadoMarca[i];
        ListaMarca[i].idMarca=idMarca[i];
        strcpy(ListaMarca[i].descripcion, descripcion[i]);
    }

}


void BajaElectrodomesticos(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca)
{
    int i;
    int IndiceBaja;

    MostrarElectrodomesticos(aparato,tam,marcas,cantMarca);

    printf("\nEscriba el ID del electrodomestico para la baja = ");
    scanf("%d", &IndiceBaja);

    for(i=0 ; i < tam ; i++)
    {
        if(IndiceBaja==aparato[i].id)
        {
            aparato[i].estadoElectro=LIBRE;
        }
    }

    printf("Baja Realizada con exito!!!!\n");

}



void modificarElectro(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarcas)
{

    int auxSerie;
    int auxModelo;
    int auxID;
    int opcion;
    int i;

    MostrarElectrodomesticos(aparato,tam,marcas, cantMarcas);

    printf("Ingrese el ID del Electrodomestico que quiere modificar = ");
    scanf("%d",&auxID);

    for(i=0; i < tam ; i++)
    {
        if(auxID==aparato[i].id && aparato[i].estadoElectro==OCUPADO)
        {
            do
            {
                printf("\n\tMODIFICACIONES");

                printf("\n1- Modificar Serie");
                printf("\n2- Modificar Modelo");
                printf("\n3- Ver listado de Electrodomesticos");
                printf("\n4- Volver al menu principal");
                printf("\nIngrese una opcion: 1/2/3/4: ");
                fflush(stdin);
                scanf("%d", &opcion);

                switch(opcion)
                {
                case 1:
                    printf("Ingrese el nuevo numero de Serie: ");
                    scanf("%d", &auxSerie);
                    aparato[i].serie=auxSerie;
                    printf("Cambio realizado con exito !!!\n");
                    system("PAUSE");
                    system("cls");
                    break;

                case 2:
                    printf("Ingrese el nuevo Modelo: ");
                    scanf("%d", &auxModelo);
                    aparato[i].modelo=auxModelo;
                    printf("Cambio realizado con exito !!!\n");
                    system("PAUSE");
                    system("cls");
                    break;

                case 3:
                    MostrarElectrodomesticos(aparato,tam,marcas,cantMarcas);
                    system("PAUSE");
                    system("cls");
                    break;
                }

            }
            while(opcion!=4);

        }

    }

}

void ordenamiento(Eelectrodomestico aparato[], int tam) // electrodomésticos ordenados por modelo y por serie.

{

    int i;
    int j;
    int auxModelo;
    int auxSerie;


    for(i=0; i < tam-1 ; i++)
    {
        for(j= i+1 ; j < tam ; j++)
        {
            if(aparato[i].modelo > aparato[j].modelo)
            {
                auxModelo= aparato[i].modelo;
                aparato[i].modelo= aparato[j].modelo;
                aparato[j].modelo= auxModelo;
            }

            if(aparato[i].serie > aparato[j].serie)
            {
                auxSerie= aparato[i].serie;
                aparato[i].serie= aparato[j].serie;
                aparato[j].serie= auxSerie;
            }
        }
    }



}

void listaElectrodomesticos(Eelectrodomestico aparato[], int tam)
{

    int i;

    printf("\tLISTADO DE ELECTRODOMESTICOS\n");

    printf("\nNum.Serie  |   Modelo \n");


    for(i=0 ; i < tam ; i++)
    {
        if(aparato[i].estadoElectro==OCUPADO)
        {
            printf("%10d | %10d\n", aparato[i].serie, aparato[i].modelo);

        }

    }

}


void listarMarcas(Emarca marcas[], int cantMarcas)
{
    int i;

    printf("\tLISTADO DE MARCAS\n");

    printf("\nDescripcion : \n\n");


    for(i=0 ; i < cantMarcas ; i++)
    {
        if(marcas[i].estadoMarca==OCUPADO)
        {
            printf("%8s |\n",marcas[i].descripcion);

        }

    }
}


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
/*void informe9(Eservicios service[], int cantService,Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca)
{

    int i;
    int j;


    printf("\tTrabajos realizados a Electrodomesticos del anio( modelo ) 2018\n");

    printf("DESCRIPCION   |   PRECIO  |    MARCA\n");


    for(i=0 ; i < cantMarca ; i++)
    {
        for(j=0; j < cantService; j++)
        {
                if(aparato[i].estadoElectro==OCUPADO && aparato[tam].modelo==2018)
                {
                    printf("%8s   |   %8d   |   %8s\n", service[j].descripcion, service[j].precio,marcas[i].descripcion);
                }

        }
    }

}*/


/*void informe8(Eservicios reparacion[], int cantService, Eelectrodomestico aparato[], int tam)
{
    int i;
    int j;

    printf("\tMostrar todos los Electrodomesticos que realizaron una garantia y la fecha\n");

    printf("MODELO   |    SERIE  ");


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


}*/




void menuInformes(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca)
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

            /*case 9:
                system("cls");
                informe9(service,4,aparato,tam,marcas,cantMarca);
                system("PAUSE");
                system("cls");
                break;*/

        /*case 8:
            system("cls");
            informe8(reparacion,cantManten,aparato,tam);
            system("PAUSE");
            system("cls");
            break;*/
        }



    }
    while(opcion !=13);



}
