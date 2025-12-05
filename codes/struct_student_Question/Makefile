CC = gcc 

TARGET = exe

OBJ = code.o main.o

$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)



	
