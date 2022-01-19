clean:
	rm -rf ./dist/*

build: clean
	cmake -S ./ -B ./dist
	cd ./dist && \
		make all

run:
	./dist/main

buildArun: clean build run

