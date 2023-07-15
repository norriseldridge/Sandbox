# SDL Project Template
This is a completely bare bones Visual Studio 2022 project setup for starting a new SDL2 project.
The basic SDL2 library is added to "C:\SDL" and hooked up in the project properties to build and run.
Simply follow this convention for added any new libraries in the future. Extract the SDL .zip to this SDL directory as a subdirectory.

Note that SDL2.dll is required to be in the output directory to run. This is done with a Post-Build Event currently for the SDL2.dll file.