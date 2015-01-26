.PHONY: all

all: notifychanges.exe
notifychanges.exe: notifychanges.obj winmain.obj

%.obj: %.c
	cl.exe /nologo /c $<

%.exe:
	link.exe /nologo /out:$@ $^

clean:
	rm -f *.obj *.exe
