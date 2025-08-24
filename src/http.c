#include "http.h"

void handle_http_request(int client_sock)
{
    char buffer[1024];
    int n = read(client_sock, buffer, 1023);
    if (n < 0)
    {
        perror("read");
        return;
    }

    buffer[n] = '\0';
    printf("Request:\n%s\n", buffer);

    const char *response =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n\r\n"
        "<html><body><h1>Hello, World!</h1></body></html>";

    write(client_sock, response, strlen(response));
}