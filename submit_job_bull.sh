#!/usr/bin/env zsh

### Job name
#BSUB -J GyroProtoype

### File / path where output will be written, the %J is the job id
#BSUB -o gyro.%J

### (OFF) Different file for STDERR, if not to be merged with STDOUT
#BSUB -e gyro.e%J

### Request the time you need for execution in minutes
### The format for the parameter is: [hour:]minute,
### that means for 80 minutes you could also use this: 1:20
### -We is estimated runtime; -W hard time limit
#BSUB -We 5:00 
#BSUB -W 5:05

### Request vitual memory you need for your job in MB
#BSUB -M 1024

### (OFF) Specify your mail address
#BSUB -u alexander.fischer@rwth-aachen.de

### Send a mail when job is done
#BSUB -N

### Request the number of compute slots you want to use
#BSUB -n 1

### Use esub for Open MPI
# #BSUB -a openmpi

### Change to the work directory
cd $WORK/kreisel_fortran


### Execute your application
##$MPIEXEC $FLAGS_MPI_BATCH quadflow_bull
./kreisel.exe

