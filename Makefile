CXX 	:= g++
DEBUG 	:= # -g
OPT	:= -O2

COMP 	:= $(CXX) $(DEBUG) $(OBJS) -c

OBJS 	:= airplane.o boat.o car.o config.o quadcopter.o robosim.o \
		submarine.o tank.o vec_3d.o world.o

robosim : $(OBJS)
	  $(CXX) $(DEBUG) $(OBJS) -o robosim

airplane.o 	: airplane.cc airplane.hh
			$(COMP) $<

boat.o		: boat.cc boat.hh
			$(COMP) $<

car.o		: car.cc car.hh	
			$(COMP) $<

quadcopter.o 	: quadcopter.cc quadocopter.hh
			$(COMP) $<

submarine.o 	: submarine.cc submarine.hh
			$(COMP) $<

robosim.o	: robosim.cc robosim.hh
			$(COMP) $<

submarine.o	: submarine.cc submarine.hh
			$(COMP) $<

tank.o		: tank.cc tank.hh
			$(COMP) $<

vec_3d.o	: vec_3d.cc vec_3d.hh
			$(COMP) $<

world.o		: world.cc world.hh
			$(COMP) $<

clean		: 
			rm  $(OBJS) robosim
