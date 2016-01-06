CC = c++
CFLAGS = -c -std=c++11

all: model
	echo "EMPTY"

model_l:
	$(CC) $(CFLAGS) model/recipe.cpp
	$(CC) $(CFLAGS) model/tag_recipes.cpp

clean:
	rm *.o
