
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

void informe8(Eservicios reparacion[], int cantService, Eelectrodomestico aparato[], int tam);


void informe9(Eservicios service[], int cantService,Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion arreglo[], int cantRR);

void informe4(Ereparacion arreglo[], int canTarreglo, Eelectrodomestico aparato[], int tam);


void menuInformes(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion reparacion[], int cantRR, Eservicios service[], int cantService);
