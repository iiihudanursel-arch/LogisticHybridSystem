#include "city_graph.h"

int adjMatrix[MAX_CITIES][MAX_CITIES] = {0};
int visited[MAX_CITIES] = {0};

void addEdge(int start, int end) {
    if (start < MAX_CITIES && end < MAX_CITIES) {
        adjMatrix[start][end] = 1;
        adjMatrix[end][start] = 1; // Cift yonlu baglanti
    }
}

void resetVisited() {
    int i;
    for (i = 0; i < MAX_CITIES; i++) visited[i] = 0;
}

void DFS(int v, int totalCities) {
    int i;
    visited[v] = 1;
    printf("Sehir %d ziyaret edildi. Dugum Adresi: %p\n", v, (void*)&adjMatrix[v]);
    
    for (i = 0; i < totalCities; i++) {
        if (adjMatrix[v][i] == 1 && !visited[i]) {
            DFS(i, totalCities);
        }
    }
}
