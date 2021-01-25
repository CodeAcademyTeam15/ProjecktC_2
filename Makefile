CC=gcc
FILE=project20210122.c

### unified cross-platform clean function
#checks for env var of win 
ifeq ($(OS),Windows_NT)
    RM=del /Q
    TARGET=project.exe
else
    RM=rm -f
    TARGET=project
endif

all:
	$(CC) $(FILE) -o $(TARGET)

clean:
	$(RM) $(TARGET)