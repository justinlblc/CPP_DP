prog: main.o Robot.o RobotMixeur.o RobotPoussiere.o RobotMineur.o RobotPoussiere.o RobotMineur.o SortList.o
	g++ -Wall -o prog SortList.o Robot.o RobotMixeur.o RobotPoussiere.o main.o RobotMineur.o

Robot.o: Robot.cpp Robot.h
	g++ -Wall -c Robot.cpp

RobotMixeur.o: RobotMixeur.cpp RobotMixeur.h
	g++ -Wall -c RobotMixeur.cpp

RobotMineur.o: RobotMineur.cpp RobotMineur.h
	g++ -Wall -c RobotMineur.cpp

RobotPoussiere.o: RobotPoussiere.cpp RobotPoussiere.h
	g++ -Wall -c RobotPoussiere.cpp

SortList.o: SortList.cpp SortList.h
	g++ -Wall -c SortList.cpp

main.o: main.cpp RobotMixeur.h Robot.h RobotPoussiere.h SortList.h RobotMineur.h
	g++ -Wall -c main.cpp

clear: 
	rm prog *.o

