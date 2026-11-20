CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c11 -Iinclude -g
LDFLAGS :=
SAN_FLAGS := -fsanitize=address,undefined -fno-omit-frame-pointer
TARGET := build/inmyeyes

SRCS := $(shell find src -type f -name '*.c')
OBJS := $(patsubst src/%.c,build/%.o,$(SRCS))

.PHONY: all clean run compdb san analyze

all: $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

build/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

compdb:
	$(MAKE) clean
	bear -- $(MAKE) $(OBJS)
	$(MAKE) clean

san:
	$(MAKE) clean
	$(MAKE) CFLAGS="$(CFLAGS) $(SAN_FLAGS)" LDFLAGS="$(SAN_FLAGS)"
	./$(TARGET)
	$(MAKE) clean

analyze:
	clang --analyze $(CFLAGS) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build