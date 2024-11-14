## Definifion of variables

CC= gcc
LD= gcc
AR= 
RM= /bin/rm

SRC_DIR= src
LIB_DIR= lib
INCLUDE_DIR= include

CFLAGS= -c -g -Wall -I$(INCLUDE_DIR)
LDFLAGS=-g -lm -I$(INCLUDE_DIR)

LIB_FILES= liblinked_list_utils.a  

EXEC_NAME= linked-list-exe

## Target liblinked-list-utils.a
## archive linked-list.o into library liblinked-list-utils.a
$(LIB_DIR)/liblinked_list_utils.a:linked-list.o
	ar -r $(LIB_DIR)/liblinked_list_utils.a linked-list.o


## Target main.o
## compile main.c to produce an object file (main.o)
main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) $(SRC_DIR)/main.c


## Target linked-list.o
## compile linked-list.c to produce an object file (linked-list.o)
linked-list.o: $(SRC_DIR)/linked-list.c
	$(CC) $(CFLAGS) $(SRC_DIR)/linked-list.c

## Target $(EXEC_NAME)
## link liblinked-list-utils.a and main.o to produce the executable (linked-list-exe)
$(EXEC_NAME):main.o $(LIB_DIR)/liblinked_list_utils.a
	$(CC) main.o -L./$(LIB_DIR)/liblinked_list_utils.a


## Target all: Useful? Where should be put in the makefile?
all: $(EXEC_NAME) $(LIB_DIR)/liblinked_list_utils.a


## Target clean
clean:
	$(RM) *.o $(LIB_DIR)/*.a $(EXEC_NAME)
