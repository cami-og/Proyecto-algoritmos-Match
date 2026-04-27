#include <stdio.h>
#include <stdlib.h>

// Prototipo de la función
void imprimirDatos(char nombres[][20], int edad[], int espiritualidad[], float altura[], int escuela[], int hobby[], int personalidad[], int psexual[], int genero[], int pchilaquiles[], int mascotas[], int vida[], int totalPersonas);

int main() {
    // 1. Nombres (Aumenté el tamaño a 20 para evitar desbordamientos de nombres largos)
    char nombres[][20] = {"Camila","Dani","Fernanda","Ricardo","Valentina","Angel","Carolina","Emiliano","Sara","Ashley","Emiliano","Irwing","Luis","Daniela","Alondra","Luis","Hannah","Aimeé","Hana","Fernanda","Fernanda","Emmanuel","Edwin","Elihu","Amanda","Omar","Elizabeth","Nancy","LuiZ Paulo","Iker","Emilio"};
    // 2. Edad
    int edad[] = {18,20,19,21,21,19,19,21,18,18,21,26,16,18,18,24,24,18,18,18,18,19,26,23,19,20,18,23,23,21,22};
    // 3. Espiritualidad
    int espiritualidad[] = {3,3,1,3,3,1,1,3,1,3,3,1,2,1,1,3,1,3,1,2,2,1,3,3,1,3,3,1,1,2,3};
    // 4. Altura (Debe ser float por los decimales. )
    float altura[] = {1.55, 1.59, 1.6, 1.73, 1.65, 1.8, 1.58, 1.69, 1.6, 1.6, 1.9, 1.89, 1.73, 1.54, 1.55, 1.72, 1.63, 1.75, 1.8, 1.8, 1.8, 1.69, 1.58, 1.8, 1.5, 1.67, 1.78, 1.86, 1.8};
    // 5. Escuela
    int escuela[] = {1,3,3,1,4,1,5,4,4,1,1,2,5,4,4,3,2,4,2,2,2,1,4,5,3,1,5,3,1,1,2};
    // 6. Hobby
    int hobby[] = {2,4,3,2,1,1,4,4,1,1,4,1,2,1,4,4,2,3,1,1,4,1,4,2,4,2,3,3,4,4,2};
    // 7. Personalidad (Convertido a enteros: Intro=1, Ambi=2, Extro=3)
    int personalidad[] = {2,1,2,2,1,3,2,1,2,2,1,1,2,2,2,2,2,1,2,3,3,1,2,2,2,2,1,2,3,3,1};
    // 8. Preferencia Sexual (Arreglado el error de sintaxis '{1,};')
    int psexual[] = {1,1,1,2,3,2,1,2,1,1,2,2,1,1,1,2,1,3,1,1,1,3,1,1,1,2,1,1,2,2,2};
    // 9. Género
    int genero[] = {2,2,2,1,2,1,2,1,2,2,1,1,1,2,2,1,2,2,2,1,2,1,3,1,2,1,2,2,1,1,1};
    // 10. Chilaquiles (Convertido a enteros: Rojos=1, Verdes=2, Bandera=3, No gustan=4)
    int pchilaquiles[] = {2,1,2,2,2,2,2,2,1,1,2,1,2,1,1,2,3,2,2,2,2,2,1,1,4,2,2,2,3,1,1};
    // 11. Importancia de Mascotas
    int mascotas[] = {1,2,1,2,1,1,1,1,1,2,2,1,1,1,2,1,1,1,1,2,2,3,1,2,2,1,2,2,1,2,2};
    // 12. Prototipo de Vida
    int vida[] = {2,3,3,3,2,2,3,2,2,3,2,2,3,3,2,3,3,3,3,3,3,3,1,3,3,2,3,2,2,1,1};

    // Calculamos dinámicamente el número de personas (31)
    int totalPersonas = sizeof(edad) / sizeof(edad[0]);
        
        do {	
        	printf("\n\n1) Impresion de tabla de datos");
        	printf("\n2)  ");
        	printf("\n3) ");
        	printf("\n4) ");
        	printf("\n5) Salir");
        	printf("\n Elige la opcion que desees ver ");
        	scanf("%d",&opcion);
        	printf("\n\n");
    	switch (opcion){
		case 1: 
            // Llamamos a la función de imprimir los perfiles
            imprimirDatos(nombres, edad, espiritualidad, altura, escuela, hobby, personalidad, psexual, genero, pchilaquiles, mascotas, vida, totalPersonas);
			break;
		case 2:
            
			break;
		case 3: 
            
			break;
		case 4: 
            
			break;
		case 5: 
            
			break;
		default : printf("Opcion invalida");
		
	}
	}while(opcion!=5);
    return 0;
}

// Desarrollo de la función
void imprimirDatos(char nombres[][20], int edad[], int espiritualidad[], float altura[], int escuela[], int hobby[], int personalidad[], int psexual[], int genero[], int pchilaquiles[], int mascotas[], int vida[], int totalPersonas) {
    
    // Diccionarios: Estos arreglos mapean el número (índice) a la palabra correspondiente.
    // El índice 0 está vacío ("") porque tus opciones empiezan desde el 1.
    const char *strEspiritualidad[] = {"", "Sí es importante", "No es importante", "Me es irrelevante"};
    const char *strEscuela[] = {"", "Ingeniería", "Negocios y Economía", "Ciencias", "Artes y Humanidades", "Ciencias sociales"};
    const char *strHobby[] = {"", "Aficiones de interior", "Actividades deportivas", "Vida nocturna", "Sí a todo"};
    const char *strPersonalidad[] = {"", "Introvertido", "Ambivertido", "Extrovertido"};
    const char *strPsexual[] = {"", "Chico", "Chica", "Irrelevante"};
    const char *strGenero[] = {"", "Hombre", "Mujer", "No binario"};
    const char *strChilaquiles[] = {"", "Rojos", "Verdes", "Bandera", "No me gustan"};
    const char *strMascotas[] = {"", "Muy importante", "Me da igual", "No puedo / No me gustan"};
    const char *strVida[] = {"", "Éxito deportivo", "Formar una familia", "Éxito profesional"};

    int k;
    for (k = 0; k < totalPersonas; k++) {
        printf("\n========================================\n");
        printf(" PERFIL DE: %s\n", nombres[k]);
        printf("========================================\n");
        printf(" - Edad:                 %d años\n", edad[k]);
        printf(" - Altura:               %.2f m\n", altura[k]);
        printf(" - Género:               %s\n", strGenero[genero[k]]);
        printf(" - Preferencia Sexual:   %s\n", strPsexual[psexual[k]]);
        printf(" - Escuela:              %s\n", strEscuela[escuela[k]]);
        printf(" - Personalidad:         %s\n", strPersonalidad[personalidad[k]]);
        printf(" - Hobbies:              %s\n", strHobby[hobby[k]]);
        printf(" - Espiritualidad:       %s\n", strEspiritualidad[espiritualidad[k]]);
        printf(" - Chilaquiles:          %s\n", strChilaquiles[pchilaquiles[k]]);
        printf(" - Mascotas:             %s\n", strMascotas[mascotas[k]]);
        printf(" - Prioridad de vida:    %s\n", strVida[vida[k]]);
        printf("========================================\n");
    }
}
