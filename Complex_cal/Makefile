# Comments
#Target :dependency
#<Tab>Command
PROJECT_NAME=calculator.exe
SRC=calculator.c complex.h diff.c div.c pro.c sum.c
$(PROJECT_NAME):$(SRC)
	gcc $(SRC) -o calculator.exe

run:$(PROJECT_NAME)
	$(PROJECT_NAME)

# clean the exe file
clean: 
	del /q *.exe