#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    switch(fork()) {
        case -1: {
            perror("fork error");
            exit(1);
        }
        default: {
            exit(0);
        }
    }

    sleep(10);
}