FILES = distsum.c
TARGET= distsum
distsum: $(FILES)
	 gcc -g -o $(TARGET) $(FILES) -lm
