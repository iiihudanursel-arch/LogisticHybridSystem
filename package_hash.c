#include "package_hash.h"

Package* hashTable[HASH_SIZE];

void initHashTable() {
    int i;
    for (i = 0; i < HASH_SIZE; i++) hashTable[i] = NULL;
}

int hashFunction(int key) {
    return key % HASH_SIZE; // Tip A
}

void insertPackage(int id, char* dest) {
    int index = hashFunction(id);
    int startIdx = index;
    
    // Acik Adresleme: Linear Probing
    while (hashTable[index] != NULL) {
        index = (index + 1) % HASH_SIZE;
        if (index == startIdx) {
            printf("Hata: Tablo dolu!\n");
            return;
        }
    }
    
    Package* newPkg = (Package*)malloc(sizeof(Package));
    newPkg->packageID = id;
    strcpy(newPkg->destination, dest);
    hashTable[index] = newPkg;
    
    printf("Paket %d eklendi -> Indis: %d, Bellek Adresi: %p\n", id, index, (void*)newPkg);
}

void displayHashMemory() {
    int i;
    printf("\n--- Hash Tablosu Bellek Durumu ---\n");
    for (i = 0; i < HASH_SIZE; i++) {
        if (hashTable[i] != NULL) {
            printf("Indis %d: ID %d [%p]\n", i, hashTable[i]->packageID, (void*)hashTable[i]);
        }
    }
}
