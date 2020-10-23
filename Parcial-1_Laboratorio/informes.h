
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

/** \brief Mostrar todos los Electrodomésticos que realizaron una garantía y la fecha
 *
 * \param reparacion[] Eservicios
 * \param cantService int
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return void
 *
 */
void informe8(Eservicios reparacion[], int cantService, Eelectrodomestico aparato[], int tam);


/** \brief Trabajos realizados a Electrodomésticos del año(modelo) 2018
 *
 * \param service[] Eservicios
 * \param cantService int
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \param arreglo[] Ereparacion
 * \param cantRR int
 * \return void
 *
 */
void informe9(Eservicios service[], int cantService,Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion arreglo[], int cantRR);

/** \brief Listar los Electrodomésticos que no tuvieron reparaciones
 *
 * \param arreglo[] Ereparacion
 * \param canTarreglo int
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \return void
 *
 */
void informe4(Ereparacion arreglo[], int canTarreglo, Eelectrodomestico aparato[], int tam);


/** \brief  INFORMES COMPLEMENTARIOS PARCIAL ABM ELECTRODOMÉSTICOS
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \param reparacion[] Ereparacion
 * \param cantRR int
 * \param service[] Eservicios
 * \param cantService int
 * \return void
 *
 */
void menuInformes(Eelectrodomestico aparato[], int tam, Emarca marcas[], int cantMarca, Ereparacion reparacion[], int cantRR, Eservicios service[], int cantService);
