To execute this test:
-Run "make" in this directory (NOTE: the Makefile assumes that sslittle-na-sstrix-gcc is in your PATH; you can modify the CC variable in the Makefile if you wish)
-Navigate to the root of SimpleScalar (up 2 directories from this directory)
-Run "make" in the root of SimpleScalar
-Run "./sim-spms spms/test_copy_data/test_copy_data"
-Look at the messages printed to the screen from the application. Verify that the value of SPM1 head after the "Copying SPM" message matches the value of SPM2 head before the "Copying SPM" message.
