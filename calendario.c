//<<<<<<<<<<main>>>>>>>>>>

int main(){
    alumno alumnos[CANT];
    legajo_materias vpto4[CANT];
    int max, i;

    printf("Ingrese los datos de los alumnos:\n");
    cargar(alumnos);
    system("cls"); //para limpiar la pantalla
    listar(alumnos);
    system("cls");
    maximo(alumnos, &max);

    system("cls");

    for(i=0; i<CANT; i++){
        vpto4[i].legajo=alumnos[i].legajo;
        vpto4[i].cant_m_aprobadas=alumnos[i].cant_m_aprobadas;
    }
    printf("materias\tlegajo\n");
    for(i=0; i<CANT; i++){
        printf("%d\t%d\n",vpto4[i].cant_m_aprobadas,vpto4[i].legajo);
    }

    ordenar(vpto4);
    printf("materias\tlegajo\n");
    for(i=0; i<CANT; i++){
        printf("%d\t%d\n",vpto4[i].cant_m_aprobadas,vpto4[i].legajo);
    }


    return 0;
}

//FUNCION cargar

 void cargar(alumno alumnos[CANT]){ //la cantidad de alumnos está definida con una constante
    int i;

    for(i=0; i<CANT; i++){
        printf("-------persona %d------->\n", i+1);
        printf("<<<Nombre>>>\n");
        scanf("%s", alumnos[i].nombre);
        fflush(stdin);
        printf("<<<Apellido>>>\n");
        scanf("%s", alumnos[i].apellido);
        fflush(stdin);
        printf("<<<Legajo>>>\n");
        scanf("%d", &alumnos[i].legajo);
        fflush(stdin);
        printf("<<<Cantidad de materias aprobadas>>>\n");
        scanf("%d", &alumnos[i].cant_m_aprobadas);
        fflush(stdin);
        printf("<<<Promedio de calificaciones>>>\n");
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);
    }
 }

 //FUCNION listar
 void listar(alumno alumnos[CANT]){
    int i;

    printf("Los datos ingresados son:\n");
    for(i=0; i<CANT; i++){
        printf("-------persona %d------->\n", i+1);
        printf("Nombre: %s\n",alumnos[i].nombre);
        printf("Apellido: %s\n",alumnos[i].apellido);
        printf("Legajo: %d\n", alumnos[i].legajo);
        printf("Cantidad de materias aprobadas: %d\n",alumnos[i].cant_m_aprobadas);
        printf("Promedio de calificaciones: %f\n\n",alumnos[i].promedio);
    }
 }

 //FUNCION maximo
 void maximo(alumno alumnos [CANT], int * dir_max){
     int i, max;

     max=0;

     for(i=0; i<CANT; i++){
        if(max<alumnos[i].cant_m_aprobadas)
            max=alumnos[i].cant_m_aprobadas;
     }

     printf("Las personas con la mayor cantidad de materias aprobadas son:\n");
     for(i=0; i<CANT; i++){
        if(max== alumnos[i].cant_m_aprobadas)
            printf("%s %s\n", alumnos[i].nombre, alumnos[i].apellido);
     }

     *dir_max=max;
 }

 //FUNCION ordenar
 void ordenar(legajo_materias vpto4[CANT]){
     int i, i_actual;
     legajo_materias aux;

     for(i=0; i<CANT; i++){
        for(i_actual=0; i_actual<CANT-i-1; i_actual++){
//            if(vpto4[i_actual].cant_m_aprobadas<vpto4[i_actual+1].cant_m_aprobadas){
//                aux=vpto4[i_actual].cant_m_aprobadas;
//                vpto4[i_actual].cant_m_aprobadas=vpto4[i_actual+1].cant_m_aprobadas;
//                vpto4[i_actual+1].cant_m_aprobadas=aux;
//
//                aux=vpto4[i_actual].legajo;
//                vpto4[i_actual].legajo=vpto4[i_actual+1].legajo;
//                vpto4[i_actual+1].legajo=aux;
//
////                en vez de ordenar como dos vectores paralelos, puedo hacer esto:
////                1) legajo_materias aux ; //lo va a tratar como un objeto completo
////                2) ordeno:
////                        aux=vpto4[i];
////                        vpto4[i]=vpto4[i+1];
////                        vpto4[i+1]=aux;
//
//            }

        }
     }
 }

 //FUNCION suma para sumar los promedios del pto 5
 float suma(alumno alumnos[CANT]){
     int i=(int)CANT;
    if()


 }

