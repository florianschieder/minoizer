MAKE = make

minoizer:
	make -C minoizer/

examples:
	make -C examples/

install:
	make -C minoizer/ install

clean:
	make -C examples/ clean
	make -C minoizer/ clean

test:
	flake8
	isort
	python3 -m rstcheck *.rst

.PHONY: minoizer examples
