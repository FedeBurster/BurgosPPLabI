
struct
{
    int servicioId;
    char servicioDescripcion[25];
    float servicioPrecio;
}typedef eServicio;

/** \brief Muestra en pantalla los datos guardados en el array de estructura
 *
 * \param Array de estructura a ser mostrado
 * \param Array de estructura
 * \param Array de estructura
 * \return Devuelve 0 al terminar con exito
 *
 */
int listarServicios(eServicio* servicios);
