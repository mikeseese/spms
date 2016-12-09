To execute this test:
-Run "make" in this directory (NOTE: the Makefile assumes that sslittle-na-sstrix-gcc is in your PATH; you can modify the CC variable in the Makefile if you wish)
-Navigate to the root of SimpleScalar (up 2 directories from this directory)
-Run "make" in the root of SimpleScalar
-Run "./sim-spms spms/test_latencies/test_latency_ram"
-Run "./sim-spms spms/test_latencies/test_latency_spm"
-Look at the output for both simulations and compare the "ruu_latency" parameter
