#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 20

// Structure to represent a football player
struct Player {
    char name[50];
    int goals; // Number of goals scored
    int assists; // Number of assists made
};

// Function to select strikers based on goals scored
void selectStrikers(struct Player players[], int totalPlayers) {
    printf("\nSelected Strikers:\n");
    for (int i = 0; i < totalPlayers; i++) {
        // Selecting strikers based on goals scored
        if (players[i].goals >= 10) { // Example criteria: at least 10 goals
            printf("Name: %s, Goals: %d, Assists: %d\n", players[i].name, players[i].goals, players[i].assists);
        }
    }
}

int main() {
    struct Player players[MAX_PLAYERS];
    int totalPlayers;

    // Input number of players
    printf("Enter the number of players (max %d): ", MAX_PLAYERS);
    scanf("%d", &totalPlayers);

    // Input player details
    for (int i = 0; i < totalPlayers; i++) {
            printf("\nEnter details for player %d:\n", i + 1);
            printf("Name: ");
        scanf(" %[^\n]", players[i].name); // Read string with spaces
        printf("Goals: ");
        scanf("%d", &players[i].goals);
        printf("Assists: ");
        scanf("%d", &players[i].assists);
    }

    // Select strikers
    selectStrikers(players, totalPlayers);

    return 0;
}