
CC = sslittle-na-sstrix-gcc

spms: SPMS.c
	$(CC) -shared -Wl,-soname,libspms.so -o libspms.so SPMS.c 

clean:
	rm libspms.so
