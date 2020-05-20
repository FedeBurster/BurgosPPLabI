
struct
{
    int tipoId;
    char tipoDescripcion[20];
}typedef eTipo;

/** \brief Muestra en pantalla los datos guardados en el array de estructura
 *
 * \param Array de estructura a ser mostrado
 * \return Devuelve 0 al terminar con exito
 *
 */
int listarTipos(eTipo* tipos);
