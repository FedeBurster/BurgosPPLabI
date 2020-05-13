
struct
{
    int mascotaId;
    char mascotaNombre[20];
    int mascotaIdTipo;
    int mascotaIdColor;
    int mascotaEdad;
    int mascotaIsEmpty;
}typedef eMascota;

int initMascotas(eMascota* mascotas,int arrayLength);

int altaMascota(eMascota* mascotas,int arrayLength,int* banderaId,int* banderaAlta,eTipo* tipos,eColor* colores);

int modificarMascota(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores);

int bajaMascota(eMascota* mascotas,int arrayLength,int* banderaAlta);

int listarMascotas(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores);
