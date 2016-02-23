SRCS=main.cpp simpleps.cpp
OBJS=$(subst .cpp,.o,$(SRCS))
TARGET=simpleps
CXXFLAGS=-std=c++11

all: $(OBJS)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)

