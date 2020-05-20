
struct
{
    int mascotaId;
    char mascotaNombre[20];
    int mascotaIdTipo;
    int mascotaIdColor;
    int mascotaEdad;
    int mascotaIsEmpty;
}typedef eMascota;

/** \brief Inicializa el campo isEmpty en un array con 1 para marcar que estan vacios de forma logica
 *
 * \param El array a ser inicializado
 * \param La longitud del array
 * \return Devuelve 0 al finalizar
 *
 */
int initMascotas(eMascota* mascotas,int arrayLength);

/** \brief Completa un array de estructura con los datos ingresados por el usuario
 *
 * \param Array a ser completado
 * \param Longitud del array
 * \param Marcador de ID
 * \param Marcador de alta
 * \param Array de estructura tipos
 * \param Array de estructura colores
 * \return Devuelve 0 si termina de manera correcta, devuelve -1 si ocurre algun error
 *
 */
int altaMascota(eMascota* mascotas,int arrayLength,int* banderaId,int* banderaAlta,eTipo* tipos,eColor* colores);

/** \brief Permite al usuario modificar los datos ingresados previamente
 *
 * \param Array a ser modificado
 * \param Longitud del array
 * \param Array de estructura tipos
 * \param Array de estructura colores
 * \param Marcador de alta
 * \return Devuelve 0 al terminar, devuelve -1 si ocurre algun error
 *
 */
int modificarMascota(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores,int* banderaAlta);

/** \brief Coloca 1 en el campo isEmpty para indicar la baja logica
 *
 * \param Array de estructura
 * \param La longitud del array
 * \param Marcador de alta
 * \return Devuelve 0 al terminar, devuelve -1 si ocurre algun error
 *
 */
int bajaMascota(eMascota* mascotas,int arrayLength,int* banderaAlta);

/** \brief Muestra en pantalla los datos guardados en el array de estructura
 *
 * \param Array de estructura a ser mostrado
 * \param Array de estructura tipos
 * \param Array de estructura colores
 * \param Marcador de alta
 * \return Devuelve 0 si termina de manera correcta, devuelve -1 si ocurre algun error
 *
 */
int listarMascotas(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores,int *banderaAlta);
