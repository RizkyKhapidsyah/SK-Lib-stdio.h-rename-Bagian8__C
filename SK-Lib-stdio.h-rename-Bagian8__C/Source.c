#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int hasil;
    char oldname[] = "test.txt";
    char newname[] = "test123.txt";

    hasil = rename(oldname, newname);

    if (hasil == 0) {
        printf("File is successfully renamed.");
    } else {
        printf("Some error has occurred.");
    }
        
    _getch();
    return 0;
}

