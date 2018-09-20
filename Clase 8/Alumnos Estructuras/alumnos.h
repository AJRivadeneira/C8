#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1

typedef struct
{
    int legajo;
    char nombre[50];
    char direccion[50];
    float promedio;
    int estado;

}eAlumno;

eAlumno cargarAlumno();
void mostrarAlumno(eAlumno, alumnoParamet)

/** \brief da de alta un alumno en el listado
 *
 * \param eAlimno* el listado
 * \param tam int el tamaño del listado
 * \return int 0 [si no encontro espacio]
 *         int 1 [si encontro espacio]
 */
int cargarAlumnoEnListado(eAlumno*, int tam);

void mostrarListado(eAlumno*, int tam);
void inicializarAlumnos(eAlumno*, int, int);
int buscarEspacio(eAlumno*, int);
int borraAlumno(eAlumno*, int);
