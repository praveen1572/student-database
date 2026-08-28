CC = gcc
CFLAGS = -Wall -Wextra

TARGET = student

SRC = main.c stud_add.c stud_del.c stud_exit.c stud_list.c stud_load.c stud_modify.c stud_show.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	del $(TARGET).exe