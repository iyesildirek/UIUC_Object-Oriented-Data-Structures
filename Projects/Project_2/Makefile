CC=g++
CPPFLAGS=-c -Wall -Werror
ZIP_FILE = ImageTransform_submission.zip
COLLECTED_FILES = HSLAPixel.h HSLAPixel.cpp ImageTransform.h ImageTransform.cpp

all: Main TEST zip

Main: ImageTransform.o PNG.o lodepng.o HSLAPixel.o main.o
	$(CC) -o  ImageTransform ImageTransform.o PNG.o lodepng.o HSLAPixel.o main.o
	$(CC) $(CPPFLAGS) main.cpp
	
ImageTransform.o: ImageTransform.cpp ImageTransform.h PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) ImageTransform.cpp

PNG.o: PNG.cpp PNG.h lodepng.h HSLAPixel.h RGB_HSL.h
	$(CC) $(CPPFLAGS) PNG.cpp
	
lodepng.o: lodepng.cpp lodepng.h
	$(CC) $(CPPFLAGS) lodepng.cpp	

HSLAPixel.o: HSLAPixel.cpp HSLAPixel.h
	$(CC) $(CPPFLAGS) HSLAPixel.cpp	

TEST: PNG.o lodepng.o HSLAPixel.o ImageTransform.o part1.o part2.o catchmain.o
	$(CC) -o  test PNG.o lodepng.o HSLAPixel.o ImageTransform.o part1.o part2.o catchmain.o
	$(CC) $(CPPFLAGS) catchmain.cpp

catchmain.o: catchmain.cpp catch.hpp
	$(CC) $(CPPFLAGS) catchmain.cpp
	
part1.o: part1.cpp catch.hpp ImageTransform.h PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) part1.cpp	
	
part2.o: part2.cpp catch.hpp ImageTransform.h PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) part2.cpp	

zip:
	@echo "!!! Preparing submission zip with student code..."
	@echo "!!! Make sure you have already tried compiling and testing your code"
	@echo "!!! thoroughly before submitting the zip on Coursera!"
	@echo ""
	@echo "Removing any previous version of zip file..."
	rm -rf $(ZIP_FILE)
	@echo "Creating new file..."
	zip $(ZIP_FILE) $(COLLECTED_FILES)
	@echo "Created zip file: " $(ZIP_FILE)
	
clean:
	rm -rf *o ImageTransform test $(ZIP_FILE)
	rm -rf out-grayscale.png out-illinify.png
	rm -rf out-spotlight.png out-watermark.png 
	