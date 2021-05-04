CC = gcc
CFLAGS = -Iinclude -Isrc -I_build -g -fno-omit-frame-pointer -fsanitize=address
LDFLAGS = -g -fno-omit-frame-pointer -fsanitize=address
LDLIBS = -llua
LEX = flex
LFLAGS =
YACC = bison
YFLAGS = -Wall -Wdangling-alias --language=C -Wno-precedence -Wno-other

SOURCES = main alloc parser

main: $(patsubst %,_build/%.o,$(SOURCES))
	$(CC) $(LDFLAGS) $^ -o $@ $(LDLIBS)

_build/%.o: src/%.c _build/deps/%.d | _build/deps
	$(CC) -MT $@ -MMD -MP -MF _build/deps/$*.d $(CFLAGS) -c $< -o $@

_build/%.o: _build/%.c _build/deps/%.d | _build/deps
	$(CC) -MT $@ -MMD -MP -MF _build/deps/$*.d $(CFLAGS) -c $< -o $@

_build/%.c: src/%.l | _build
	$(LEX) $(LFLAGS) --header-file=_build/$*.h --outfile=$@ $<

_build/%.c _build/%.h: src/%.y | _build
	$(YACC) $(YFLAGS) --defines=_build/$*.h --output=_build/$*.c $<

_build _build/deps:
	mkdir -p $@

$(patsubst %,_build/deps/%.d,$(SOURCES)):

-include $(wildcard _build/deps/*.d)

# test: src/lexer.c src/parser.c src/test.c
# $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

# main: $(wildcard src/*.c) $(wildcard include/tlua/*.h)
# $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

# src/lexer.c: src/lexer.l
# $(LEX) $(LFLAGS) -o $@ $<

# src/parser.c: src/parser.y
# $(YACC) $(YFLAGS) --defines=src/parser.h --output=$@ $<

