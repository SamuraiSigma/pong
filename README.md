Pong
====

### Introduction

  This project is a remake of the classic game [*Pong*](http://en.wikipedia.org/wiki/Pong "More about Pong") using C++ and OpenGL in a Unix-type OS.  
  My main objective is to learn more of the new OpenGL while coding a simple game.

### Libraries

Extra libraries used are:

  - [**SFML**](http://www.sfml-dev.org/ "SFML website"), for creating an OpenGL context (game window, music and input).

  - [**GLEW**](http://glew.sourceforge.net/ "GLEW website"), for implementing OpenGL functionality.

  - [**GLM**](glm.g-truc.net "GLM website"), for implementing matrices.

### Usage

  First of all, make sure that your graphics driver supports OpenGL 4.0 or higher.

  **1.** Open the project's directory with a Terminal.
  
  **2.** Install SFML, GLEW and GLM with *make install*:

    $ make install

  **3.** Compile and run the program with *make run*:

    $ make run

### Controls

  - **Esc**: Leaves game.

  - **W/S**: Moves left player up/down.

  - **Up/Down**: Moves right player up/down.

### Special Thanks

  - Very helpful tutorials:
    - https://open.gl
    - http://antongerdelan.net/opengl/vertexbuffers.html

  - [Aaron Krogh](https://soundcloud.com/aaron-anderson-11 "Aaron's page on Soundcloud") for the awesome music!
    - *space.ogg* is his *Fashion Models from Space* track.
