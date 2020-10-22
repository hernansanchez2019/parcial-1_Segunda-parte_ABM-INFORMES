

typedef struct
{
    int id;
    int serie;
    int idMarca;
    int modelo;
    int estadoElectro;

} Eelectrodomestico;
typedef struct
{
    int idMarca;
    char descripcion[20];
    int estadoMarca;

} Emarca;



/** \brief Mostramos los electrodomesticos que fueron cargados
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \return void
 *
 */
void MostrarElectrodomesticos(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca);

/** \brief hardcodeamos las marcas
 *
 * \param ListaMarca[] Emarca
 * \param tam int
 * \return void
 *
 */
void marca(Emarca ListaMarca[], int tam);

/** \brief mostramos las marcas cargadas
 *
 * \param marca[] Emarca
 * \param tam int
 * \return void
 *
 */
void mostrarMarca(Emarca marca[], int tam);

/** \brief hacemos una baja de electrodomestico a traves del ID
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \return void
 *
 */
void BajaElectrodomesticos(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca);

void ordenamiento(Eelectrodomestico aparato[], int tam);

/** \brief le pedimos al usuario que ingrese al sistema un electrodomestico
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \return void
 *
 */
void CargarElectrodomestico(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca);

/** \brief inicializamos los array para que no tengan basura y arranquen de cero
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return void
 *
 */
void InicializarEstado(Eelectrodomestico aparato[], int tam);


/** \brief nos fijamos que haya lugar libre en el array
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return int
 *
 */
int BuscarLibre(Eelectrodomestico aparato[], int tam);

/** \brief esta funcion nos devuelve 0 si esta libre el electrodomestico o 1 si esta ocupado
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return int
 *
 */
int EstadosElectrodomesticos(Eelectrodomestico aparato[], int tam);

/** \brief listamos todos los electrodomesticos cargados por el usuario
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return void
 *
 */
void listaElectrodomesticos(Eelectrodomestico aparato[], int tam);

/** \brief listamos las marcas hardcodeadas
 *
 * \param marcas[] Emarca
 * \param cantMarcas int
 * \return void
 *
 */
void listarMarcas(Emarca marcas[], int cantMarcas);



// INFORMES


/** \brief Mostramos Electrodomésticos del año(modelo) 2020
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \return void
 *
 */
void informe1(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca);


/** \brief Mostramos Electrodomésticos de una marca seleccionada
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \return void
 *
 */
void informe2(Eelectrodomestico aparato[],int tam, Emarca marcas[], int cantMarca);

//void informe8(Eservicios reparacion[], int cantService, Eelectrodomestico aparato[], int tam);


//void informe9(Eservicios service[], int cantService,Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca);



void menuInformes(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca);
