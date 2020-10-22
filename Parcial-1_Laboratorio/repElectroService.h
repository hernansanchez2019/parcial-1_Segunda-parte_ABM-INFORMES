



/** \brief damos el alta de una reparacion, mostrando y pidiendo cada dato
 *
 * \param aparato[] Eelectrodomestico
 * \param tam int
 * \param mantenimiento[] Eservicios
 * \param tamService int
 * \param marcas[] Emarca
 * \param cantMarca int
 * \param arreglos[] Ereparacion
 * \param tamArreglo int
 * \param idRep int
 * \param clientes[] Ecliente
 * \param tamCliente int
 * \return void
 *
 */
void altaReparaciones(Eelectrodomestico aparato[], int tam, Eservicios mantenimiento[], int tamService, Emarca marcas[], int cantMarca,Ereparacion arreglos[],int tamArreglo, int idRep, Ecliente clientes[], int tamCliente);

/** \brief listamos las reparaciones dadas de alta
 *
 * \param arreglo[] Ereparacion
 * \param tamReparacion int
 * \param service[] Eservicios
 * \param tamService int
 * \param cliente[] Ecliente
 * \param tamCliente int
 * \return void
 *
 */
void listarReparaciones(Ereparacion arreglo[], int tamReparacion, Eservicios service[], int tamService, Ecliente cliente[], int tamCliente);
