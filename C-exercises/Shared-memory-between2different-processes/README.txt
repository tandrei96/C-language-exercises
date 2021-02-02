The program is a exercises on the concept of IPC using semaphores. First, we allocate memory using a key, thank using that key we create a shared memory block 
associated with that key.

With 2 distinct programs, we first write from stdin something and from another program we read the stuff we wrote. The key point here is that we use semaphores in 
order to coordonate the 2 process between each other by decrementing and incrementing a semaphore .

We use sem_open and we return the addres to a sem_t pointer variable that we will use to sem_wait() and sem_post()
