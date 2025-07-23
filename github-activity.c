#include <stdio.h>

char * fetch_user_data(char * username) {
    return username;
}

void display_user_data(char * user_data) {
    printf("Displaying user data\n");
    printf("%s\n", user_data);
}

int main(int argc, char *argv[]) {
    
    if(argc < 2) {
        printf("Usage: %s <username>\n", argv[0]);
        return 0;
    }

    char * username = argv[1];

    printf("Username: %s\n", username);

    char * user_data = fetch_user_data(username);

    display_user_data(user_data);

    return 0;
}
