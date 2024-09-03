# Makefile for adding two numbers

# Compiler
CXX = g++

# Executable name
EXEC = add_numbers

# Source file
SRC = add_numbers.cpp

# Assembly output file
ASM = $(EXEC).asm

# Targets
all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) -o $(EXEC) $(SRC)

dump: $(EXEC)
	objdump -d $(EXEC) > $(ASM)

clean:
	rm -f $(EXEC) $(ASM)

run: $(EXEC)
	./$(EXEC)




Explanation:
- all : The default target that compiles the code.
- $(EXEC): This target compiles `add_numbers.cpp` into an executable named `add_numbers`.
- dump: Disassembles the compiled executable and outputs the assembly code into `add_numbers.asm`.
- clean: Removes the compiled executable and the assembly file.
- run: Executes the compiled program.
