NAME= cal
SRC= main.c decl.c calc.h
TEST_SEC= Unity/unit_Testing.c

ifdef OS
	RM=del /q
	Path=$(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell unname), Linux)
		RM=em -rf
		Path= $1
		EXEC= out
	endif
endif
Build:
	gcc $(SRC) -o main.out
run:Build
	./main.out
static_analysis:
	cppcheck --enable=all $(SRC)
dynamic_analysis: Build
   valgrind ./main.out