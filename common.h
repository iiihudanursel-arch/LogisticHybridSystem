#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CITIES 10
#define HASH_SIZE 13 // Acik adresleme icin asal sayi tercih edildi

typedef struct {
    int packageID;
    char destination[50];
} Package;

typedef struct {
    int id;
    char name[50];
} City;

#endif
