# raylib-fortran-wasm
Template repository for projects developed in Fortran with Raylib targetting the web.

## References that helped me put this together
* https://github.com/interkosmos/fortran-raylib
* https://github.com/StarGate01/Full-Stack-Fortran
* https://github.com/michaelfiber/hello-raylib-wasm

## Getting Started

### Dependencies
The version numbers for these dependencies are very important.  As explained at https://dragonegg.llvm.org/, only GCC 4.6 was fully supported as of the last version released before LLVM marked DragonEgg as obsolete.  As far as emscripten goes, https://github.com/StarGate01/Full-Stack-Fortran/issues/10 explains the incompatibility of LLVM 3.3 IR with versions of Emscripten past 3.1.3.

* DragonEgg LLVM 3.3
* Emscripten 3.1.3
* GFortran 4.6.4

The aforementioned `StarGate01/Full-Stack-Fortran` repository has a really nice Docker container containing all of the required dependencies, which I would highly recommend you use!

### How It Works

#### Patching Interkosmos's Bindings

Run: `./init.sh`

Interkosmos's bindings nearly work, but we need to patch them to compile with this ancient GCC 4.6 + DragonEgg setup.  It might be a compiler flag somewhere that would fix this more easily (It feels like some sort of premature/incorrect optimization happening), but I couldn't figure it out - so let's patch and shim the bindings!

Things that we can shim:
* GFortran 4.6 inserts an int as argument on functions that take no arguments
* GFortran 4.6 splits Vector3 as argument into three floats as arguments

How we fix this:
* Scan header file for `Vector3` and `(void)`
* For all instances of those, prepend the c bind names in Interkosmos's bindings with something (We'll use `shim_`).
* Create a `shim.c` file which implements the incorrect function signature (as `shim_%`) and remaps it to the correct signature.

So, naturally, this script fetches both the Raylib 5.0 WASM zip as well as the latest Interkosmos zip.  Version 0.1.0 appears to be RayLib 4.5, which isn't what we want here.
