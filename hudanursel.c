#include "package_hash.h"
#include "city_graph.h"

int main() {
    printf("--- Lojistik Takip Sistemi Baslatiliyor ---\n\n");
    
    initHashTable();
    
    // 1. Paket Veri Girisleri (En az 5 veri - Bellek Raporu Icin)
    insertPackage(1250, "Istanbul");
    insertPackage(1263, "Ankara");   // 1263 % 13 = 2 (Cakisma ornegi)
    insertPackage(1050, "Izmir");
    insertPackage(2026, "Bursa");
    insertPackage(3042, "Antalya");

    // 2. Graf Baglantilari Olusturma
    addEdge(0, 1); // Sehir 0 - Sehir 1
    addEdge(1, 2); // Sehir 1 - Sehir 2
    addEdge(2, 3); // Sehir 2 - Sehir 3
    addEdge(0, 4); // Sehir 0 - Sehir 4

    // 3. Graf Gezinme (DFS)
    printf("\n--- Lojistik Rotasi Kesfi (DFS) ---\n");
    resetVisited();
    DFS(0, 5);

    // 4. Bellek Durumunu Listele
    displayHashMemory();

    printf("\nProgram tamamlandi. Bellek raporu icin adresleri not aliniz.\n");
    
    // Dev-C++ konsolun hemen kapanmamasi icin
    system("PAUSE"); 
    return 0;
}
