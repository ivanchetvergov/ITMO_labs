# src lib
SRC = src/*.cpp

# outputs
OUT_RUN = build/run.out
OUT_RELEASE = build/release.out 

# flags
FLAGS_RUN = -std=c++17 -g - Wall
FLAGS_RELEASE = -std=c++17 -O2


# default point
all : $(OUT_RELEASE)

# run rule
$(RUN_RELEASE) : $(SRC)
	clang++ $(FLAGS_RUN) -o $(OUT_RUN) $(SRC)

# out rule
$(OUT_RELEASE) : $(SRC)
	clang++ $(FLAGS_RELEASE) -o $(OUT_RELEASE) $(SRC)

# run point
run: $(RUN_RELEASE)
	./$(RUN_RELEASE)

# out point
out: $(OUT_RELEASE)  
	./$(OUT_RELEASE) 

# cleaning
clean:  
	rm -f $(OUT_RUN) $(OUT_RELEASE)