# Compiler and flags
CFLAGS = -Wall -Wextra -fsanitize=leak

# Source files
SRC = src/arguments_checker.c src/array_manipulator.c src/bubble_sort.c src/instruction_repeat.c src/instructions.c src/push_swap.c

# Object files
OBJ = src/arguments_checker.o src/array_manipulator.o src/bubble_sort.o src/instruction_repeat.o src/instructions.o src/push_swap.o

# Library path
LIB_PATH = lib

# Library names
LIBS = ft ftprintf

# Executable name
EXEC = push_swap

# Default target
all: $(EXEC)

# Link object files and libraries to create the executable
$(EXEC): $(OBJ)
	@echo "Linking object files and libraries..."
	$(CC) $(OBJ) $(addprefix -L, $(LIB_PATH)) $(addprefix -l, $(LIBS)) -no-pie -o $(EXEC)

# Compile each source file into an object file
src/arguments_checker.o: src/arguments_checker.c
	$(CC) $(CFLAGS) -c src/arguments_checker.c -o src/arguments_checker.o

src/array_manipulator.o: src/array_manipulator.c
	$(CC) $(CFLAGS) -c src/array_manipulator.c -o src/array_manipulator.o

src/bubble_sort.o: src/bubble_sort.c
	$(CC) $(CFLAGS) -c src/bubble_sort.c -o src/bubble_sort.o

src/instruction_repeat.o: src/instruction_repeat.c
	$(CC) $(CFLAGS) -c src/instruction_repeat.c -o src/instruction_repeat.o

src/instructions.o: src/instructions.c
	$(CC) $(CFLAGS) -c src/instructions.c -o src/instructions.o

src/push_swap.o: src/push_swap.c
	$(CC) $(CFLAGS) -c src/push_swap.c -o src/push_swap.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(EXEC)

# Phony targets
.PHONY: all clean


