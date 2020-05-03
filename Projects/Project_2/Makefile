CC=g++
#CPPFLAGS=-c -Wall -Werror
CPPFLAGS=-c -pedantic -Wall -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable
ZIP_FILE = ImageTransform_submission.zip
COLLECTED_FILES = HSLAPixel.h HSLAPixel.cpp ImageTransform.h ImageTransform.cpp
UIUC_FILES = Provided_UIUC_Files/

all: Main TEST zip

Main: ImageTransform.o $(UIUC_FILES)PNG.o $(UIUC_FILES)lodepng.o HSLAPixel.o $(UIUC_FILES)main.o
	$(CC) -o  ImageTransform ImageTransform.o $(UIUC_FILES)PNG.o $(UIUC_FILES)lodepng.o HSLAPixel.o $(UIUC_FILES)main.o
	$(CC) $(CPPFLAGS) $(UIUC_FILES)main.cpp
	
ImageTransform.o: ImageTransform.cpp ImageTransform.h $(UIUC_FILES)PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) ImageTransform.cpp

PNG.o: $(UIUC_FILES)PNG.cpp $(UIUC_FILES)PNG.h $(UIUC_FILES)lodepng.h HSLAPixel.h $(UIUC_FILES)RGB_HSL.h
	$(CC) $(CPPFLAGS) $(UIUC_FILES)PNG.cpp
	
lodepng.o: $(UIUC_FILES)lodepng.cpp $(UIUC_FILES)lodepng.h
	$(CC) $(CPPFLAGS) $(UIUC_FILES)lodepng.cpp	

HSLAPixel.o: HSLAPixel.cpp HSLAPixel.h
	$(CC) $(CPPFLAGS) HSLAPixel.cpp	

TEST: $(UIUC_FILES)PNG.o $(UIUC_FILES)lodepng.o HSLAPixel.o ImageTransform.o $(UIUC_FILES)part1.o $(UIUC_FILES)part2.o $(UIUC_FILES)catchmain.o
	$(CC) -o  test $(UIUC_FILES)PNG.o $(UIUC_FILES)lodepng.o HSLAPixel.o ImageTransform.o $(UIUC_FILES)part1.o $(UIUC_FILES)part2.o $(UIUC_FILES)catchmain.o
	$(CC) $(CPPFLAGS) $(UIUC_FILES)catchmain.cpp

catchmain.o: $(UIUC_FILES)catchmain.cpp $(UIUC_FILES)catch.hpp
	$(CC) $(CPPFLAGS) $(UIUC_FILES)catchmain.cpp
	
part1.o: $(UIUC_FILES)part1.cpp $(UIUC_FILES)catch.hpp ImageTransform.h $(UIUC_FILES)PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) $(UIUC_FILES)part1.cpp	
	
part2.o: $(UIUC_FILES)part2.cpp $(UIUC_FILES)catch.hpp ImageTransform.h $(UIUC_FILES)PNG.h HSLAPixel.h
	$(CC) $(CPPFLAGS) $(UIUC_FILES)part2.cpp	

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
	