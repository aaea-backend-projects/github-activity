#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if(argc < 2) {
        printf("Usage: %s <username>\n", argv[0]);
        return 0;
    }

    char * username = argv[1];

    printf("Username: %s\n", username);

    return 0;
}
