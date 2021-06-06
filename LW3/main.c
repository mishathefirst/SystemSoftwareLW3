#include "client.h"
#include "server.h"

int main(int argc, char *argv[]) {
    if(argc < 2){
        printf("Mode('client' or 'server') should be set");
        return 0;
    }
    if(strcmp(argv[1], "server") == 0){
        return serverMode();
    }
    if(strcmp(argv[1], "client") == 0){
        if(argc < 3){
            printf("Username should be set");
            return 0;
        }
        if(argc < 4){
            printf("Server address should be set");
            return 0;
        }
        return clientMode(argv[2], argv[3]);
    }
}

