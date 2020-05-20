

struct
{
    int colorId;
    char colorNombre[20];
}typedef eColor;

/** \brief Muestra los datos guardados en el array de estructura
 *
 * \param Array de estructura
 * \return Devuelve 0 al terminar
 *
 */
int listarColores(eColor* colores);
