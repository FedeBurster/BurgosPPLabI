
struct
{
    int fechaAnio;
    int fechaMes;
    int fechaDia;
}typedef eFecha;

struct
{
    int trabajoId;
    int trabajoIdMascota;
    int trabajoIdServicio;
    int trabajoIsEmpty;
    eFecha trabajoFecha;
}typedef eTrabajo;


/** \brief Inicializa el campo isEmpty en un array con 1 para marcar que estan vacios de forma logica
 *
 * \param El array a ser inicializado
 * \param La longitud del array
 * \return Devuelve 0 al finalizar
 *
 */
int initTrabajos(eTrabajo* trabajos,int arrayLength);

/** \brief Completa un array de estructura con los datos ingresados por el usuario y crea una relacion entre dos arrays diferentes
 *
 * \param Array a ser completado
 * \param Array a ser relacionado
 * \param Array a ser relacionado
 * \param Marcador que verifica el correcto funcionamiento de la funcion
 * \return Devuelve 0 si termina de manera correcta, devuelve -1 si ocurre algun error
 *
 */
int altaTrabajo(eTrabajo* trabajos,eMascota* mascotas,eServicio* servicios,int* banderaAlta);


/** \brief Muestra en pantalla los datos guardados en el array de estructura
 *
 * \param Array de estructura a ser mostrado
 * \param Array de estructura
 * \param Array de estructura
 * \return Devuelve 0 al terminar con exito
 *
 */
int listarTrabajos(eTrabajo* trabajos,eMascota* mascotas,eServicio* servicios);
