#include <stdio.h>

int main() {
    int pedro, tulio, gabriel, yanka, paloma, vinicius, elias, casa1, casa2, casa3, ia = 0, ib = 0, ic = 0;
    
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d", &pedro, &tulio, &gabriel, &yanka, &paloma, &vinicius, &elias);

    if (pedro >= 7400) {
        if (pedro >= 8400) {
            ia++;
        }
        if (pedro >= 7600) {
            ib++;
        }
        if (pedro >= 8400) {
            ic++;
        }
    }
    
    if (tulio >= 4400) {
        if (tulio >= 4800) {
            ia++;
        }
        if (tulio >= 5200) {
            ib++;
        }
        if (tulio >= 6000) {
            ic++;
        }
    }
    
    if (gabriel >= 5200) {
        if (gabriel >= 5600) {
            ia++;
        }
        if (gabriel >= 6400) {
            ib++;
        }
        if (gabriel >= 6400) {
            ic++;
        }
    }
    
    if (yanka >= 4000) {
        if (yanka >= 4400) {
            ia++;
        }
        if (yanka >= 4800) {
            ib++;
        }
        if (yanka >= 5200) {
            ic++;
        }
    }
    
    if (paloma >= 4400) {
        if (paloma >= 4800) {
            ia++;
        }
        if (paloma >= 5200) {
            ib++;
        }
        if (paloma >= 5600) {
            ic++;
        }
    }
    
    if (vinicius >= 4800) {
        if (vinicius >= 5800) {
            ia++;
        }
        if (vinicius >= 6000) {
            ib++;
        }
        if (vinicius >= 5600) {
            ic++;
        }
    }
    
    if (elias >= 6600) {
        if (elias >= 7600) {
            ia++;
        }
        if (elias >= 8400) {
            ib++;
        }
        if (elias >= 7600) {
            ic++;
        }
    }
    
    casa1 = ia * 10;
    casa2 = ib * 20;
    casa3 = ic * 30;
    
    
    if (ia != 0 || ib != 0 || ic != 0) {
        if (casa1 > casa2 && casa1 > casa3) {
            printf("CASA 1\n%d\n%d", casa1, ia);
        }
        if (casa2 > casa1 && casa2 > casa3) {
            printf("CASA 2\n%d\n%d", casa2, ib);
        }
        if (casa3 > casa1 && casa3 > casa2) {
            printf("CASA 3\n%d\n%d", casa3, ic);
        }
    } else {
        printf("NAO TERA SHOW!");
    }
    
    return 0;
}

