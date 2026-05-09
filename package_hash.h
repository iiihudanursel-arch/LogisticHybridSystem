#ifndef PACKAGE_HASH_H
#define PACKAGE_HASH_H

#include "common.h"

void initHashTable();
int hashFunction(int key); // Tip A: Modulo
void insertPackage(int id, char* dest);
void displayHashMemory();

#endif
