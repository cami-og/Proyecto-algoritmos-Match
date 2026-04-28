#include <stdio.h>
#include <stdlib.h>

// Prototipo de la función
void imprimirDatos(char nombres[][20], int edad[], int espiritualidad[], float altura[], int escuela[], int hobby[], int personalidad[], int psexual[], int genero[], int pchilaquiles[], int mascotas[], int vida[], int totalPersonas);
void algoritmoMatch(char nombres[][20], int edad[], int espiritualidad[], float altura[], int escuela[], int hobby[], int personalidad[], int psexual[], int genero[], int pchilaquiles[], int mascotas[], int vida[], int totalPersonas);

int main() {
	int opcion;
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
        	printf("\n2)  Busca mi match ideal");
        	printf("\n3) Salir");
        	printf("\n Elige la opcion que desees ver ");
        	scanf("%d",&opcion);
        	printf("\n\n");
    	switch (opcion){
		case 1: 
            // Llamamos a la función de imprimir los perfiles
            imprimirDatos(nombres, edad, espiritualidad, altura, escuela, hobby, personalidad, psexual, genero, pchilaquiles, mascotas, vida, totalPersonas);
			break;
		case 2:
            algoritmoMatch(nombres, edad, espiritualidad, altura, escuela, hobby, personalidad, psexual, genero, pchilaquiles, mascotas, vida, totalPersonas);
			break;
		case 3: 
			printf("¡Suerte en el amor! Adiós.\n");
			break;
		default : printf("Opcion invalida");
		
	}
	}while(opcion!=3);
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

//Función de match
//Función de match
void algoritmoMatch(char nombres[][20], int edad[], int espiritualidad[], float altura[], int escuela[], int hobby[], int personalidad[], int psexual[], int genero[], int pchilaquiles[], int mascotas[], int vida[], int totalPersonas) {
    int uGenero, uBusca, uEdadMin, uEdadMax, uEspiritu, uHobby, uPerso, uChila, uVida, uMascotas;
    int puntajes[31] = {0}; // Guardaremos los puntos de cada persona

    // Diccionarios para imprimir los perfiles ganadores
    const char *strEspiritualidad[] = {"", "Sí es importante", "No es importante", "Me es irrelevante"};
    const char *strEscuela[] = {"", "Ingeniería", "Negocios y Economía", "Ciencias", "Artes y Humanidades", "Ciencias sociales"};
    const char *strHobby[] = {"", "Aficiones de interior", "Actividades deportivas", "Vida nocturna", "Sí a todo"};
    const char *strPersonalidad[] = {"", "Introvertido", "Ambivertido", "Extrovertido"};
    const char *strPsexual[] = {"", "Chico", "Chica", "Irrelevante"};
    const char *strGenero[] = {"", "Hombre", "Mujer", "No binario"};
    const char *strChilaquiles[] = {"", "Rojos", "Verdes", "Bandera", "No me gustan"};
    const char *strMascotas[] = {"", "Muy importante", "Me da igual", "No puedo / No me gustan"};
    const char *strVida[] = {"", "Éxito deportivo", "Formar una familia", "Éxito profesional"};

    // --- CAPTURA DE DATOS DEL USUARIO ---
    printf("\n--- CONFIGURA TU PERFIL ---");
    printf("\nTu genero (1:Hombre, 2:Mujer, 3:NB): "); scanf("%d", &uGenero);
    printf("¿Que buscas? (1:Hombre, 2:Mujer, 3:Irrelevante): "); scanf("%d", &uBusca);
    printf("Rango de edad (Min): "); scanf("%d", &uEdadMin);
    printf("Rango de edad (Max): "); scanf("%d", &uEdadMax);
    printf("Espiritualidad (1:Si, 2:No, 3:Irrelevante): "); scanf("%d", &uEspiritu);
    printf("Personalidad (1:Intro, 2:Ambi, 3:Extro): "); scanf("%d", &uPerso);
    printf("Hobby preferido (1:Interior, 2:Deporte, 3:Noche, 4:Todo): "); scanf("%d", &uHobby);
    printf("Chilaquiles (1:Rojos, 2:Verdes, 3:Bandera, 4:No): "); scanf("%d", &uChila);
    printf("Mascotas (1:Importante, 2:Da igual, 3:No gustan): "); scanf("%d", &uMascotas);
    printf("Prioridad de vida (1:Deporte, 2:Familia, 3:Profesional): "); scanf("%d", &uVida);

    // --- FASE A Y B: EVALUACIÓN ---
    for (int i = 0; i < totalPersonas; i++) {
        // FASE A: FILTROS ABSOLUTOS
        int matchGenero = 0;
        if (uBusca == 3 || uBusca == genero[i]) {
            if (psexual[i] == 3 || psexual[i] == uGenero) {
                matchGenero = 1;
            }
        }
        
        int matchEdad = (edad[i] >= uEdadMin && edad[i] <= uEdadMax);

        if (matchGenero && matchEdad) {
            // FASE B: PUNTUACIÓN PONDERADA
            if (espiritualidad[i] == uEspiritu) puntajes[i] += 30;
            if (vida[i] == uVida) puntajes[i] += 30;
            
            // Regla de Personalidad
            if (personalidad[i] == uPerso) puntajes[i] += 20;
            else if ((uPerso == 2 && (personalidad[i] == 1 || personalidad[i] == 3)) || 
                     (personalidad[i] == 2 && (uPerso == 1 || uPerso == 3))) {
                puntajes[i] += 10; // Ambivertido con otros suma algo
            }

            if (hobby[i] == uHobby) puntajes[i] += 15;
            if (mascotas[i] == uMascotas) puntajes[i] += 10; // Compatibilidad de mascotas
            if (pchilaquiles[i] == uChila) puntajes[i] += 5;
        } else {
            puntajes[i] = -1; // No pasó los filtros (-1 para evitar que gane con 0 puntos)
        }
    }

    // --- BUSCAR Y MOSTRAR LOS 3 MEJORES ---
    printf("\n========================================");
    printf("\n        TUS 3 MEJORES MATCHES           ");
    printf("\n========================================");
    
    for (int top = 0; top < 3; top++) {
        int maxPuntos = -1;
        int mejorIndice = -1;

        // Buscar al que tiene la mayor puntuación
        for (int i = 0; i < totalPersonas; i++) {
            if (puntajes[i] > maxPuntos) {
                maxPuntos = puntajes[i];
                mejorIndice = i;
            }
        }

        // Si encontramos a alguien válido
        if (mejorIndice != -1 && maxPuntos >= 0) {
            int k = mejorIndice; // Índice del ganador
            
            printf("\n\n>>> MATCH #%d | Compatibilidad: %d pts <<<\n", top + 1, maxPuntos);
            printf("----------------------------------------\n");
            printf(" PERFIL DE: %s\n", nombres[k]);
            printf("----------------------------------------\n");
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
            printf("----------------------------------------");
            
            puntajes[mejorIndice] = -2; // Lo descartamos para la siguiente iteración del top 3
        } else if (top == 0) {
            printf("\nLo siento, no hubo personas que pasaran tus filtros estrictos de Edad o Género.\n");
            break;
        }
    }
    printf("\n");
}
