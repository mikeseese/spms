To execute this test:
-Run "make" in this directory (NOTE: the Makefile assumes that sslittle-na-sstrix-gcc is in your PATH; you can modify the CC variable in the Makefile if you wish)
-Navigate to the root of SimpleScalar (up 2 directories from this directory)
-Run "make" in the root of SimpleScalar
-Run "./sim-spms spms/test_transfer_addr/test_transfer_addr"
-Look at the messages printed to the screen from the application. Verify that "Test Transfer App" and "Test Transfer Sim" messages have matching values (see paper for example of expected result)
