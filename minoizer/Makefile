libminoizer.so: minoizer.cpp
	g++ -shared -fpic -o libminoizer.so minoizer.cpp

install:
	cp libminoizer.so /usr/lib/libminoizer.so

clean:
	rm -f *.so
