CXX = clang++
CXXFLAGS = -std=c++14 -g -Wall -pedantic -I.
LDFLAGS = -lcpprest -lglog -lstdc++ -lm

SOURCES = $(wildcard *.cc)
OBJECTS = $(subst .cc,.o,$(SOURCES))

TARGET = vindicator
TESTS = tests

.PHONY: all clean test $(TESTS)

all: $(TARGET)

$(TESTS):
	$(MAKE) -C $@

vindicator: $(OBJECTS)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(TARGET) && \
	cd $(TESTS) && make clean

test:
	cd $(TESTS) && make && make test
