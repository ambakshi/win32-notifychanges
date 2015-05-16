.PHONY: all

all: notifychanges.exe
notifychanges.exe: notifychanges.c winmain.c

%.obj: %.c
	cl.exe /nologo /c $<

%.exe:
	cl.exe /nologo /Os /favor:AMD64 $^ /link /out:$@

clean:
	rm -f *.obj *.exe
