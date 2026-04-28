#include <stdio.h>
#include <string.h>

// Estructura para representar un perfil
struct Perfil {
    char nombre[50];
    int edad;
    char descripcion[100];
    int le_gustas; // 1 = sí, 0 = no
};

int main() {
    // Lista de perfiles simulados
    struct Perfil perfiles[] = {
        {"Ana", 22, "Me gusta la musica y viajar", 1},
        {"Luis", 25, "Fan del futbol y videojuegos", 0},
        {"Sofia", 21, "Amo la fotografia", 1},
        {"Carlos", 27, "Gym y comida saludable", 0}
    };

    int total = 4;
    char opcion;

    printf("=== Mini Tinder en C ===\n");

    for (int i = 0; i < total; i++) {
        printf("\nPerfil %d:\n", i + 1);
        printf("Nombre: %s\n", perfiles[i].nombre);
        printf("Edad: %d\n", perfiles[i].edad);
        printf("Descripcion: %s\n", perfiles[i].descripcion);

        printf("Te gusta? (l = like / d = dislike): ");
        scanf(" %c", &opcion);

        if (opcion == 'l' || opcion == 'L') {
            if (perfiles[i].le_gustas == 1) {
                printf("💖 ¡Match con %s!\n", perfiles[i].nombre);
            } else {
                printf("❌ No hubo match con %s\n", perfiles[i].nombre);
            }
        } else {
            printf("Pasaste el perfil de %s\n", perfiles[i].nombre);
        }
    }

    printf("\nFin del programa.\n");
    return 0;
}
