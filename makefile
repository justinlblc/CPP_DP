prog: main.o Robot.o RobotFactory.o RobotMixeur.o RobotPoussiere.o SortList.o
	g++ -Wall -o prog SortList.o Robot.o RobotFactory.o RobotMixeur.o RobotPoussiere.o main.o

Robot.o: Robot.cpp Robot.h
	g++ -Wall -c Robot.cpp

RobotMixeur.o: RobotMixeur.cpp RobotMixeur.h
	g++ -Wall -c RobotMixeur.cpp

RobotPoussiere.o: RobotPoussiere.cpp RobotPoussiere.h
	g++ -Wall -c RobotPoussiere.cpp

RobotFactory.o: RobotFactory.cpp RobotFactory.h
	g++ -Wall -c RobotFactory.cpp

SortList.o: SortList.cpp SortList.h
	g++ -Wall -c SortList.cpp

main.o: main.cpp RobotMixeur.h Robot.h RobotFactory.h RobotPoussiere.h SortList.h
	g++ -Wall -c main.cpp

clear: 
	rm prog *.o

