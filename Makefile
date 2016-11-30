CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD -g
EXEC = Expression_Evaluator
OBJECTS = main.o Expression.o Binary.o Unary.o LoneInt.o Variable.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}