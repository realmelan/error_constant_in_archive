lib = libbar.a libsvc.so

all : test

test : $(lib)

CC = g++
CXXFLAGS = -g -fPIC
LDFLAGS = -Wl,--warn-common -L. -Wl,-rpath=.

libbar.a : foo.o bar.o
	ar -cqv $@ $^

libsvc.so : libbar.a

libsvc.so : svc.o
	$(CC) -o $@ $< -shared -Wl,-x -Wl,-soname,$@  $(LDFLAGS) -lbar

# here: the order of -lsvc and -lbar matters to whether there is a core dump or not.
# -lbar first will introduce 2 foo::HELLO_WORLD in test
test : test.o
	$(CC) $(LDFLAGS) -o $@ $< -L. -Wl,-rpath=. -lbar -lsvc

.PHONY: clean
clean:
	rm $(lib) test *.o
