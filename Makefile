# Compiler and flags
CFLAGS = -Wall -Wextra -fsanitize=leak -g 

# Source files
SRC = src/arguments_checker.c  src/bubble_sort.c src/instruction_repeat.c src/instructions_1.c src/instructions_2.c src/push_swap.c src/range_checkers.c src/stake_utils.c src/basic_tests.c

# Object files
OBJ = src/arguments_checker.o  src/bubble_sort.o src/instruction_repeat.o src/instructions_1.o src/instructions_2.o src/push_swap.o src/range_checkers.o src/stake_utils.o src/basic_tests.o

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

src/bubble_sort.o: src/bubble_sort.c
	$(CC) $(CFLAGS) -c src/bubble_sort.c -o src/bubble_sort.o

src/instruction_repeat.o: src/instruction_repeat.c
	$(CC) $(CFLAGS) -c src/instruction_repeat.c -o src/instruction_repeat.o

src/instructions_1.o: src/instructions_1.c
	$(CC) $(CFLAGS) -c src/instructions_1.c -o src/instructions_1.o

src/instructions_2.o: src/instructions_2.c
	$(CC) $(CFLAGS) -c src/instructions_2.c -o src/instructions_2.o

src/push_swap.o: src/push_swap.c
	$(CC) $(CFLAGS) -c src/push_swap.c -o src/push_swap.o

src/range_checkers.o: src/range_checkers.c
	$(CC) $(CFLAGS) -c src/range_checkers.c -o src/range_checkers.o

src/stake_utils.o: src/stake_utils.c
	$(CC) $(CFLAGS) -c src/stake_utils.c -o src/stake_utils.o

src/basic_tests.o: src/basic_tests.c
	$(CC) $(CFLAGS) -c src/basic_tests.c -o src/basic_tests.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(EXEC)

# Phony targets
.PHONY: all clean


