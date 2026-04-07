# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude -Wall

# Arquivos fonte
SRC = src/linked_list.cpp
MAIN = main.cpp
TESTS = tests/tests.cpp

# Nomes dos executáveis
TARGET_MAIN = main
TARGET_TESTS = tests

# Compila tudo
all: $(TARGET_MAIN) $(TARGET_TESTS)

# Compila o programa principal
$(TARGET_MAIN): $(MAIN) $(SRC)
	$(CXX) $(CXXFLAGS) $(MAIN) $(SRC) -o $(TARGET_MAIN)

# Compila os testes
$(TARGET_TESTS): $(TESTS) $(SRC)
	$(CXX) $(CXXFLAGS) $(TESTS) $(SRC) -o $(TARGET_TESTS)

# Roda o programa principal
run: $(TARGET_MAIN)
	./$(TARGET_MAIN)

# Roda os testes
runtest: $(TARGET_TESTS)
	./$(TARGET_TESTS)

# Limpa arquivos gerados
clean:
	rm -f $(TARGET_MAIN) $(TARGET_TESTS) *.o