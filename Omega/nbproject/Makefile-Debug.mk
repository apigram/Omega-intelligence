#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/BinaryHeap.o \
	${OBJECTDIR}/Game.o \
	${OBJECTDIR}/GameData.o \
	${OBJECTDIR}/GameState.o \
	${OBJECTDIR}/Graph.o \
	${OBJECTDIR}/Grid.o \
	${OBJECTDIR}/Histogram.o \
	${OBJECTDIR}/Set.o \
	${OBJECTDIR}/SetPredicate.o \
	${OBJECTDIR}/Tree.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lcppunit.dll

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libOmega.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libOmega.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libOmega.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared

${OBJECTDIR}/BinaryHeap.o: BinaryHeap.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BinaryHeap.o BinaryHeap.cpp

${OBJECTDIR}/Game.o: Game.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Game.o Game.cpp

${OBJECTDIR}/GameData.o: GameData.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GameData.o GameData.cpp

${OBJECTDIR}/GameState.o: GameState.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GameState.o GameState.cpp

${OBJECTDIR}/Graph.o: Graph.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Graph.o Graph.cpp

${OBJECTDIR}/Grid.o: Grid.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Grid.o Grid.cpp

${OBJECTDIR}/Histogram.o: Histogram.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Histogram.o Histogram.cpp

${OBJECTDIR}/Set.o: Set.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Set.o Set.cpp

${OBJECTDIR}/SetPredicate.o: SetPredicate.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SetPredicate.o SetPredicate.cpp

${OBJECTDIR}/Tree.o: Tree.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tree.o Tree.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/SetRunner.o ${TESTDIR}/tests/SetTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs` `cppunit-config --libs` `cppunit-config --libs`   


${TESTDIR}/tests/SetRunner.o: tests/SetRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit -I. `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/SetRunner.o tests/SetRunner.cpp


${TESTDIR}/tests/SetTest.o: tests/SetTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit -I. `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/SetTest.o tests/SetTest.cpp


${OBJECTDIR}/BinaryHeap_nomain.o: ${OBJECTDIR}/BinaryHeap.o BinaryHeap.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/BinaryHeap.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BinaryHeap_nomain.o BinaryHeap.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/BinaryHeap.o ${OBJECTDIR}/BinaryHeap_nomain.o;\
	fi

${OBJECTDIR}/Game_nomain.o: ${OBJECTDIR}/Game.o Game.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Game.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Game_nomain.o Game.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Game.o ${OBJECTDIR}/Game_nomain.o;\
	fi

${OBJECTDIR}/GameData_nomain.o: ${OBJECTDIR}/GameData.o GameData.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameData.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GameData_nomain.o GameData.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameData.o ${OBJECTDIR}/GameData_nomain.o;\
	fi

${OBJECTDIR}/GameState_nomain.o: ${OBJECTDIR}/GameState.o GameState.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameState.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GameState_nomain.o GameState.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameState.o ${OBJECTDIR}/GameState_nomain.o;\
	fi

${OBJECTDIR}/Graph_nomain.o: ${OBJECTDIR}/Graph.o Graph.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graph.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Graph_nomain.o Graph.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graph.o ${OBJECTDIR}/Graph_nomain.o;\
	fi

${OBJECTDIR}/Grid_nomain.o: ${OBJECTDIR}/Grid.o Grid.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Grid.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Grid_nomain.o Grid.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Grid.o ${OBJECTDIR}/Grid_nomain.o;\
	fi

${OBJECTDIR}/Histogram_nomain.o: ${OBJECTDIR}/Histogram.o Histogram.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Histogram.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Histogram_nomain.o Histogram.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Histogram.o ${OBJECTDIR}/Histogram_nomain.o;\
	fi

${OBJECTDIR}/Set_nomain.o: ${OBJECTDIR}/Set.o Set.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Set.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Set_nomain.o Set.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Set.o ${OBJECTDIR}/Set_nomain.o;\
	fi

${OBJECTDIR}/SetPredicate_nomain.o: ${OBJECTDIR}/SetPredicate.o SetPredicate.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/SetPredicate.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SetPredicate_nomain.o SetPredicate.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/SetPredicate.o ${OBJECTDIR}/SetPredicate_nomain.o;\
	fi

${OBJECTDIR}/Tree_nomain.o: ${OBJECTDIR}/Tree.o Tree.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Tree.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../../../../../cygwin64/usr/include/cppunit  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tree_nomain.o Tree.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Tree.o ${OBJECTDIR}/Tree_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libOmega.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
