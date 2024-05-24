# Build scripts
Here I keep all the scripts for compiling the project so I'm not limited to working within Visual Studio. To create the Solution and projects I used Visual Studio 2022,
I used the 2022 build tools for the "B-League-Football" project but for R47 I used _____. For MacOS and Linux I compile with GCC.

## Compiling on Windows
- You're going to have to have the same version of Visual Studio and MS Build tools to compile regardless of using batch or IDE to compile.

- You must also edit the paths leading up to the "B-League-Football" folder within the batch scripts to match the file directory paths used on your PC.

- I recommend that for first time compilation you use the batch scripts provided so you compile everything In the correct order. First run "build_0.bat" to create all the
  static and dynamic libraries, then run "build_1.bat" to compile the executable. Compilation will fail If you compile the executable before It's dependencies It will fail.

### Compiling on MacOS

#### Compiling on Linux
