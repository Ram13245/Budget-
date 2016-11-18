CC = g++
ICDIR = ./Controllers/inc
IEDIR = ./Entity/inc
BLDDIR = Build
SCDIR = ./Controllers/src/
SEDIR = ./Entity/src/
CFLAGS += -Wall -std=c++0x -I$(ICDIR)
#CFLAGS = -Wall -I$(INC) -std=c++0x
TEST_EXEC = test

OBJS = $(BLDDIR)/TestBackEnd.o \
	   $(BLDDIR)/AccountController.o \
	   $(BLDDIR)/ExpenseController.o \
	   $(BLDDIR)/FileIOController.o \
	   $(BLDDIR)/SettingsController.o \
	   $(BLDDIR)/Account.o \
	   $(BLDDIR)/Budget.o \
	   $(BLDDIR)/Category.o \
	   $(BLDDIR)/Expense.o \
	   $(BLDDIR)/Error.o

all: $(TEST_EXEC)

$(TEST_EXEC): $(OBJS)
	$(CC) -o $(TEST_EXEC) -Wall $(OBJS)

$(BLDDIR)/TestBackEnd.o: TestBackEnd/TestBackEnd.cc \
	$(ICDIR)/AccountController.h \
	$(ICDIR)/ExpenseController.h \
	$(ICDIR)/FileIOController.h \
	$(ICDIR)/SettingsController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CLFAGS) -c TestBackEnd/TestBackEnd.cc -o $@

$(BLDDIR)/AccountController.o: $(SCDIR)/AccountController.cc \
	$(ICDIR)/AccountController.h \
	$(ICDIR)/ExpenseController.h \
	$(ICDIR)/FileIOController.h \
	$(ICDIR)/SettingsController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SCDIR)/AccountController.cc -o $@

$(BLDDIR)/ChartController.o: $(SCDIR)/ChartController.cc \
	$(ICDIR)/ChartController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SCDIR)/ChartController.cc -o $@

$(BLDDIR)/ExpenseController.o: $(SCDIR)/ExpenseController.cc \
	$(ICDIR)/ExpenseController.h \
	$(ICDIR)/FileIOController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SCDIR)/ExpenseController.cc -o $@

$(BLDDIR)/FileIOController.o:  $(SCDIR)/FileIOController.cc \
	$(ICDIR)/FileIOController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SCDIR)/FileIOController.cc -o $@

$(BLDDIR)/SettingsController.o: $(SCDIR)/SettingsController.cc \
	$(ICDIR)/SettingsController.h \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SCDIR)/SettingsController.cc -o $@

$(BLDDIR)/Account.o: $(SEDIR)/Account.cc \
	$(IEDIR)/Account.h \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h
	$(CC) $(CFLAGS) -c $(SEDIR)/Account.cc -o $@

$(BLDDIR)/Budget.o: $(SEDIR)/Budget.cc \
	$(IEDIR)/Budget.h \
	$(IEDIR)/Category.h \
	$(IEDIR)/Expense.h
	$(CC) $(CFLAGS) -c $(SEDIR)/Budget.cc -o $@

$(BLDDIR)/Category.o: $(SEDIR)/Category.cc \
	$(IEDIR)/Category.h
	$(CC) $(CFLAGS) -c $(SEDIR)/Category.cc -o $@

$(BLDDIR)/Expense.o: $(SEDIR)/Expense.cc \
	$(IEDIR)/Expense.h
	$(CC) $(CFLAGS) -c $(SEDIR)/Expense.cc -o $@

$(BLDDIR)/Error.o: $(SEDIR)/Error.cc \
	$(IEDIR)/Error.h
	$(CC) $(CFLAGS) -c $(SEDIR)/Error.cc -o $@

clean:
	rm -f $(OBJS) $(TEST_EXEC)

## EVERYTHING AFTER THIS IS GARBAGE

#VPATH = ./Controllers/src/ ./Entity/src/ ./TestBackEnd/

#CTRL_DEP = \
#		   $(IEDIR)/Account.h \
#		   $(IEDIR)/Budget.h \
#		   $(IEDIR)/Category.h \
#		   $(IEDIR)/Expense.h \
#		   $(IEDIR)/Error.h
#
#.SUFFIXES = .cc
#
#	   #Controllers/src/ChartController.o 
#OBJS = $(BLDDIR)/TestBackEnd.o \
#	   $(BLDDIR)/AccountController.o \
#	   $(BLDDIR)/ExpenseController.o \
#	   $(BLDDIR)/FileIOController.o \
#	   $(BLDDIR)/SettingsController.o \
#	   $(BLDDIR)/Account.o \
#	   $(BLDDIR)/Budget.o \
#	   $(BLDDIR)/Category.o \
#	   $(BLDDIR)/Expense.o \
#	   $(BLDDIR)/Error.o
#
#	   #ChartController.cc 
##SRCS = TestBackEnd.cc \
##	   AccountController.cc \
##	   ExpenseController.cc \
##	   FileIOController.cc \
##	   SettingsController.cc \
##	   Account.cc \
##	   Budget.cc \
##	   Category.cc \
##	   Expense.cc \
##	   Error.cc
#
#all: $(TEST_EXEC)
#	
#$(TEST_EXEC): $(OBJS)
#	$(CC) $(CFLAGS) -o $@ $^
#
##%.o :
##	$(CC) -c $(CFLAGS) $<
#
#$(BLDDIR)/TestBackEnd.o: ./TestBackEnd/TestBackEnd.cc \
#	$(ICDIR)AccountController.h \
#	$(ICDIR)ExpenseController.h \
#	$(ICDIR)FileIOController.h \
#	$(ICDIR)SettingsController.h \
#	$(CTRL_DEP)
#	$(CC) $(CFLAGS) -c -o $@ $<
#
#	#ChartController.h
#$(BLDDIR)/AccountController.o: $(SCDIR)/AccountController.cc \
#	$(ICDIR)AccountController.h \
#	$(ICDIR)ExpenseController.h \
#	$(ICDIR)SettingsController.h \
#	$(ICDIR)FileIOController.h \
#	$(CTRL_DEP)
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/ExpenseController.o: $(SCDIR)/ExpenseController.cc \
#	$(ICDIR)ExpenseController.h \
#	$(ICDIR)FileIOController.h \
#	$(CTRL_DEP)
#	$(CC) -c $(CFLAGS) $^ -o $@
#
##ChartController.o: $(SCDIR)/ChartController.cc \
#	ChartController.h
##	Account.h \
##	Budget.h \
##	Category.h \
##	Expense.h \
##	Error.h
#
#$(BLDDIR)/FileIOController.o: $(SCDIR)/FileIOController.cc \
#	$(ICDIR)FileIOController.h \
#	$(CTRL_DEP)
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/SettingsController.o: $(SCDIR)/SettingsController.cc \
#	$(ICDIR)SettingsController.h \
#	$(CTRL_DEP)
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/Account.o: $(SEDIR)/Account.cc \
#	$(IEDIR)Account.h \
#	$(IEDIR)Budget.h \
#	$(IEDIR)Category.h \
#	$(IEDIR)Expense.h
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/Budget.o: $(SEDIR)/Budget.cc \
#	$(IEDIR)Budget.h \
#	$(IEDIR)Category.h \
#	$(IEDIR)Expense.h
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/Category.o: $(SEDIR)/Category.cc \
#	$(IEDIR)Category.h
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/Expense.o: $(SEDIR)/Expense.cc \
#	$(IEDIR)Expense.h
#	$(CC) -c $(CFLAGS) $^ -o $@
#
#$(BLDDIR)/Error.o: $(SEDIR)/Error.cc \
#	$(IEDIR)Error.h
#	$(CC) -c $(CFLAGS) $^ -o $@
#
