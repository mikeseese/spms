
CC = sslittle-na-sstrix-gcc

test_latencies: test_latency_ram test_latency_spm

test_latency_ram: test_latency_ram.c ../SPMS.c
	$(CC) -I.. ../SPMS.c test_latency_ram.c -o test_latency_ram

test_latency_spm: test_latency_spm.c ../SPMS.c
	$(CC) -I.. ../SPMS.c test_latency_spm.c -o test_latency_spm

clean:
	rm test_latency_ram
	rm test_latency_spm
