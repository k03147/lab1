void child_code(int delay){
	printf("child %d here. will sleep for %d seconds\n", getid(), delay);
	sleep(delay);
	printf("child done. about to exit\n");
	exit(17);
}

void parent_code(int childpid){
	int wait_rv;
	wait_rv = wait(NULL);
	printf("done waiting for %d. Wait returned: %d\n", childpid, wait_rv);
}
