## DEBUGF function for Arduino, replacing Serial.print()
![logo](/images/DEBUGF.png?raw=true)

Small library for debuf prints in your code.
Support printf-style functions, shorter and easier that use Serial.println() functions in your code. At the end: un define the DEBUGF_ and your code compiles without all debug statements.

```ruby
DEBUGF("This is debug text, void-able by undefining \"#define DEBUGF_\"  to 0 - see library \n");
DEBUGF("Printf style : Printing variables with ie %%0.3f in text function: Float on 3 decimals, temperature*100 =  %0.3f\n\n",temperature*100);
DEBUGF("Displaying Data in PROG memory : const char string[%s] in memory :",textexample1);
```

Plus memory buffer function : shows adress - bytes - characters style:
```ruby
[2400d67c] 636e7546_6e6f6974_20292831_736e6f63_68632074_74207261_00747865_000003ca_[Func_tion_1() _cons_t ch_ar t_ext._...._]
[2400d69c] 24001880_24001f88_00000000_24000008_080404c7_00000000_00000000_00000000_[...$_...$_...._...$_...._...._...._...._]
[2400d6bc] 00000000_00000000_0804287f_00000000_08044579_08060d77_00000000_24003540_[...._...._(.._...._yE.._w..._...._@5.$_]
``` 

For more information about this library please visit 
https://github.com/javos65/Arduino-DEBUGF

== License ==

Copyright (C) 2024 Jay Fox


This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful......


