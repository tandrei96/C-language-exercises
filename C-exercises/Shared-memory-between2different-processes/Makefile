CC=clang
CFLAGS= -g -Wall -pthread
OBJS=shared_memory.o 
EXE=writeshmem.elf readshmem.elf destroy_shmem.elf

default: $(EXE)

%.elf: %.o $(OBJS)
	$(CC) $(CFLAGS) $< $(OBJS) -o $@
%.o : %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean: 
	rm -rf *.DSYm *.o $(EXE)