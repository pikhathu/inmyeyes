CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c11 -Iinclude
TARGET := build/inmyeyes

SRCS := $(shell find src -type f -name '*.c')
OBJS := $(patsubst src/%.c,build/%.o,$(SRCS))

.PHONY: all clean run compdb

all: $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@

build/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

compdb:
	$(MAKE) clean
	bear -- $(MAKE) $(OBJS)
	$(MAKE) clean

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build