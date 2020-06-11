all:
	cd i686   && ${MAKE}
	cd x86_64 && ${MAKE}

clean:
	cd i686   && ${MAKE} clean
	cd x86_64 && ${MAKE} clean

.PHONY: all clean
