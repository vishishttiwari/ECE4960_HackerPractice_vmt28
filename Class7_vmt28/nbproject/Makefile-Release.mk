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
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Hacker_Practice_5_1.o \
	${OBJECTDIR}/Hacker_Practice_5_2.o \
	${OBJECTDIR}/Hacker_Practice_5_3.o \
	${OBJECTDIR}/Hacker_Practice_5_4.o \
	${OBJECTDIR}/Hacker_Practice_5_5.o \
	${OBJECTDIR}/Hacker_Practice_5_6.o \
	${OBJECTDIR}/main.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/class7_vmt28

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/class7_vmt28: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/class7_vmt28 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Hacker_Practice_5_1.o: Hacker_Practice_5_1.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_1.o Hacker_Practice_5_1.cpp

${OBJECTDIR}/Hacker_Practice_5_2.o: Hacker_Practice_5_2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_2.o Hacker_Practice_5_2.cpp

${OBJECTDIR}/Hacker_Practice_5_3.o: Hacker_Practice_5_3.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_3.o Hacker_Practice_5_3.cpp

${OBJECTDIR}/Hacker_Practice_5_4.o: Hacker_Practice_5_4.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_4.o Hacker_Practice_5_4.cpp

${OBJECTDIR}/Hacker_Practice_5_5.o: Hacker_Practice_5_5.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_5.o Hacker_Practice_5_5.cpp

${OBJECTDIR}/Hacker_Practice_5_6.o: Hacker_Practice_5_6.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hacker_Practice_5_6.o Hacker_Practice_5_6.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
