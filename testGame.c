// TestGame.c
// Crafted with care by Laeeque, Oden, Harry, and Sam
// 22/4/18

#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//Test Function Prototypes
void harryTestGame();
void samTestGame();
void odenTestGame();
void laeequeTestGame();

int main(int argc, char *argv[]) {

    // Uncomment your test Function when its ready to test.

    //harryTestGame();
    //samTestGame();
    //odenTestGame();
    //laeequeTestGame();
    return EXIT_SUCCESS;
}

void harryTestGame() {
    assert(1==1);
    
    printf("All tests passed, you are Awesome!\n");
}

void samTestGame() {
    assert(1==1);
    printf("All tests passed, you are Awesome!\n");
}

void odenTestGame() {
    assert(1==1);
    printf("All tests passed, you are Awesome!\n");
}

void laeequeTestGame() {
    assert(1==10000000); // feelsbadman
    // Well looks like teletype can't do folders. I suppose we have our own project folders with whatever files in them.
    // Then we only edit one file at a time.

    printf("All tests passed, you are Awesome!\n");
}
