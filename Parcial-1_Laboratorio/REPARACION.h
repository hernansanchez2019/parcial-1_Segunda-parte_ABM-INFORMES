

typedef struct
{
    int dia;
    int mes;
    int anio;

} Efecha;

typedef struct
{
    int idCliente;
    char nombre[20];
    char apellido[20];
    int estadoCliente;

}Ecliente;


typedef struct
{
    int idServicio;
    char descripcion[25];
    int precio;
    int estadoServicio;
} Eservicios;


typedef struct
{
    int idReparacion;
    int serie;
    int idServicio;
    Efecha fecha;
    int idCliente;
    int estadoReparacion;


} Ereparacion;


//void fecha(Efecha fecha[], int tam);
//void mostramosFechas(Efecha fechas[], int tam);
/** \brief hardcodeamos los servicios
 *
 * \param mantenimiento[] Eservicios
 * \param tam int
 * \return void
 *
 */
void servicio(Eservicios mantenimiento[], int tam);
/** \brief hardcodeamos los clientes
 *
 * \param cliente[] Ecliente
 * \param tam int
 * \return void
 *
 */
void CargarCliente(Ecliente cliente[], int tam);

/** \brief mostramos los clientes cargados
 *
 * \param clientes[] Ecliente
 * \param tam int
 * \return void
 *
 */
void mostrarClientes(Ecliente clientes[], int tam);

/** \brief mostramos los servicios cargados
 *
 * \param mantenimiento[] Eservicios
 * \param tam int
 * \return void
 *
 */
void mostrarService(Eservicios mantenimiento[],int tam);
//void reparaciones(Ereparacion arreglo[], int tamArreglo,int idReparacion, Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService);

//void altaReparaciones(Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService);

