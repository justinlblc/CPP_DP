prog: main.o Robot.o RobotFactory.o RobotMixeur.o RobotPoussiere.o
	g++ -o prog Robot.o RobotFactory.o RobotMixeur.o RobotPoussiere.o main.o

Robot.o: Robot.cpp Robot.h
	g++ -c Robot.cpp

RobotMixeur.o: RobotMixeur.cpp RobotMixeur.h
	g++ -c RobotMixeur.cpp

RobotPoussiere.o: RobotPoussiere.cpp RobotPoussiere.h
	g++ -c RobotPoussiere.cpp

RobotFactory.o: RobotFactory.cpp RobotFactory.h
	g++ -c RobotFactory.cpp

main.o: main.cpp RobotMixeur.h Robot.h RobotFactory.h RobotPoussiere.h
	g++ -c main.o

