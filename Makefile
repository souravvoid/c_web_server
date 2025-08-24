CC=gcc
CFLAGS=-Wall -Wextra -O2
TARGET=webserver

SRC=src/main.c src/server.c src/http.c
OBJ=$(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)


