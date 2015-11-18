.PHONY: all

CC=./cl
LD=./cl
CFLAGS=/nologo /c
LDFLAGS=/nologo /Os /favor:AMD64 
all: notifychanges.exe
notifychanges.exe: notifychanges.c winmain.c

%.obj: %.c
	$(CC) $(CFLAGS) $<

%.exe:
	$(LD) $(LDFLAGS) $^ /link /out:$@

clean:
	rm -f *.obj *.exe
