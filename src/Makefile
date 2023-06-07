LIB = smartcalc.a
CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
CFLAGS = -fprofile-arcs -ftest-coverage

SOURCE_DIR = ./Backend/sources
BUILD_DIR = ../build
INSTALL_DIR = ../build/SmartCalc
ARCHIVE_DIR = ../archive
TEST_DIR = ./Tests

OS = $(shell uname)

SRC = $(SOURCE_DIR)/*.c
OBJ = $(SRC: .c=.o)

ifeq ($(OS), Darwin)
	EXPLORER = open
	APP = Calculator.app
	GCOV_FLAGS = -lcheck -lm
	LEAK = CK_FORK=no leaks --atExit -- $(TEST_DIR)/test
else
	EXPLORER = xdg-open
	APP = Calculator
	GCOV_FLAGS = `pkg-config --cflags --libs check`
	LEAK = valgrind --leak-check=full --leak-resolution=low --quiet --log-file=$(TEST_DIR)/leaks.txt $(TEST_DIR)/test
endif

all: $(LIB) test install

$(LIB): $(OBJ)
	rm -f $(BUILD_DIR)/$(LIB)
	ar rc $@ $(OBJ) 
	ranlib $@
	mv $(LIB) $(BUILD_DIR)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: test
test:
	@lcov --directory . --zerocounters
	@rm -f $(TEST_DIR)/test
	@gcc $(CFLAGS) -g $(SRC) $(TEST_DIR)/test.c -o $(TEST_DIR)/test $(GCOV_FLAGS)
	@$(TEST_DIR)/test

gcov_report: test
	@rm -rf $(TEST_DIR)/coverage_results
	@mkdir $(TEST_DIR)/coverage_results
	@lcov --directory . --capture -o $(TEST_DIR)/coverage_results/lcov.info
	@genhtml -o $(TEST_DIR)/coverage_results/ $(TEST_DIR)/coverage_results/lcov.info --highlight --legend --title "SmartCalc_v1.0 project coverage"
	@rm -f $(TEST_DIR)/*.gc*
	$(EXPLORER) $(TEST_DIR)/coverage_results/index.html

install: uninstall
	@mkdir $(INSTALL_DIR)
	@cd ./Frontend/Calculator && qmake Calculator.pro -o ../../$(INSTALL_DIR)/Makefile && make -C ../../$(INSTALL_DIR)/
	@chmod +rwx $(INSTALL_DIR)
	@chmod +rwx $(INSTALL_DIR)/$(APP)
	@rm -f $(INSTALL_DIR)/*.o

uninstall:
	rm -rf $(INSTALL_DIR)

dist: install
	rm -rf $(ARCHIVE_DIR)
	mkdir $(ARCHIVE_DIR)
	mkdir $(ARCHIVE_DIR)/Calculator_v1.0
	cp -r $(INSTALL_DIR)/$(APP) $(ARCHIVE_DIR)/Calculator_v1.0
	cp -r Manual $(ARCHIVE_DIR)/Calculator_v1.0
	cd $(ARCHIVE_DIR) && tar cvzf Archive_SmartCalc_v1.0.tgz Calculator_v1.0 && rm -rf Calculator_v1.0

clean:
	rm -f *.gcno
	rm -f *.gcda
	rm -f $(BUILD_DIR)/$(LIB)
	rm -f $(SOURCE_DIR)/*.o
	rm -f $(SOURCE_DIR)/*.gc*
	rm -f $(TEST_DIR)/*.gc*
	rm -f $(TEST_DIR)/test
	rm -rf $(TEST_DIR)/coverage_results
	rm -f $(TEST_DIR)/test.log
	rm -f $(TEST_DIR)/leaks.txt
	rm -rf $(BUILD_DIR)/SmartCalc
	rm -rf $(ARCHIVE_DIR)
	lcov --directory . --zerocounters

style:
	clang-format -i ./Backend/sources/*.c
	clang-format -i ./Backend/headers/*.h
	clang-format -i ./Frontend/Calculator/sources/*.cpp 
	clang-format -i ./Frontend/Calculator/headers/*.h
	clang-format -i ./Tests/*.c
	clang-format -n ./Backend/sources/*.c
	clang-format -n ./Backend/headers/*.h
	clang-format -n ./Frontend/Calculator/sources/*.cpp 
	clang-format -n ./Frontend/Calculator/headers/*.h
	clang-format -n ./Tests/*.c
	
leaks: test
	rm -f $(TEST_DIR)/leaks.txt
	$(LEAK)
	@rm -f $(TEST_DIR)/*.gc*

rebuild: clean install
