# Comments
#Target :dependency
#<Tab>Command
PROJECT_NAME=complex

SRC=Complexcal.c sum.c div.c diff.c product.c 

TEST_SRC=test_complex.c\
unity.c

$(PROJECT_NAME):$(SRC)
	gcc $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).exe

run:$(PROJECT_NAME)
	./$(PROJECT_NAME).exe

coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}.exe
	gcov -a $(SRC)

valgrind:$(PROJECT_NAME)
	valgrind ./${PROJECT_NAME}.exe

cppcheck:$(SRC)
	cppcheck $(SRC)

clean:$(SRC)
	rm *gcov *gcda *gch
