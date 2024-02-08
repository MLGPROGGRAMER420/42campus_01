# Definicje zmiennych
CC = cc
TARGET = rush-02
SOURCES = utils/strings.c parse_line.c parse_dictionary.c parse_array.c 
OBJECTS = $(SOURCES:.c=.o)

# Reguła domyślna
all: $(TARGET)

# Reguła dla pliku wykonywalnego
$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

# Reguła dla plików obiektowych
%.o: %.c
	$(CC) -c $< -o $@

# Reguła czyszczenia
fclean:
	rm -f $(TARGET) $(OBJECTS)
