# notifychanges

After making system-wide changes, you need to notify running apps and
services on Win32 to reload their environment. The code in `notifychanges.cpp`
does that, and it even works once in a while (doing anything reliably
in Win32 is almost impossible).

## Installation

Either link `notifychanges.exe` into a standalone binary or compile
`notifychanges.c` into your application.

```sh
C:\src\win32-notifychanges> cl.exe notifychanges.c winmain.c
C:\src\win32-notifychanges> notifychanges.exe
```

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## History

Jan 26, 2015: Initial release

## BSD License
```
 Copyright (c) 2015, Amit Bakshi <ambakshi at gmail dot com>
 All rights reserved.

 Distributed under the BSD License. See included LICENSE for details.
```

