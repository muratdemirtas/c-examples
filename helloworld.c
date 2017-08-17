#include <stdio.h>   //for printf

//main function entry-point
int main() {

    //our message
    char *message = "Hello World";
    int count = 0;

    while (message[count] != '\0')
        printf("%c", message[count++]);

    message = NULL;
    printf("\n");
    return 0;

}
