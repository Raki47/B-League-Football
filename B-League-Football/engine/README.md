# Magna Engine
Here Is where all the code Is kept for the Magna Engine. Magna Engine Is designed for the sole purpose of creating an open source, proprietary game engine with the sole purpose of
creating top down 2D games.

<i>Why proprietary Instead of general purpose?</i>
- I've prefered proprietary engines over general purpose engines ever since I got Into game development. It suits my learning style more as It gives you the framework of a game
  already set up, all you must do Is modify the source code so that It fits It uses the game logic you require, whereas with general purpose engines you have a modern GUI to
  simplify everything but... It Is all blank there's no code already configured for you to read and learn from which can be quite overwhelming for complete beginners.
  
- From the start I have heard people mention that when you learn programming the hard way, It's easy to then switch from low/mid level languages to high level scripting languages.
  However If you start of by mastering Python for example, It can often times be harder to learn mid level languages like C than If C was the first language you learnt.
  
- You might be wondering why my first big project would be to create my own engine rather than use another an existing proprietary engine due to what I've said? It Is because I have
  encountered Issues regarding build dependencies as most of the great open source proprietary engines are quite old and use compilers and versions of Visual Studio not compatible
  with my PC. Other modern alternatives created by other fellow solo dev's have design features that don't fit my personal preferences, so I decided It's best to make an engine
  myself, even If my preferences don't appeal to too many other dev's It can atleast serve as helpful learning material and to help build myself a portfolio for future employment.
  
<i>What kind of 2D view does It support?</i>
- The camera view looks directly down at the floor like <i>Hotline Miami</i> rather than top down at a 45 degree angle like <i>POSTAL</i>. This choice was not made for style but
  because In exchange for slightly reduced visual quality, It's overwhelmingly compensated for with It's major decrease In code complexity and graphical asset creation difficulty.
  
<i>What are some notable preferences of mine that have shaped this engine?</i>
- File format support; The engine doesn't support JPEG and PNG files despite them being the most commonly used and I don't plan on adding support for It In the future. Instead I
  am making It support Targa (.tga) files as It offers the best colour quality, allows for adding/editing an alpha channel and are lossless. I'd also like to add BMP and Tiff
  Image support later down the track as they are also both good competitors for game development, I feel most comfortable with those 3 formats as It's what I am used to from my
  previous modding experience.
  
- The engine Is all written procedural style, I much prefer procedural programming over OOP which Is why It's written In C with a little bit of Assembly language. The extremely
  low amount of engines (and games) written In C In comparison to games written purely In C++ or C++ engines with OOP scripting languages adds a sense of originality that made
  the project worth creating. The only C++ In this project Is the header files I've added to simplify Including this engine or certain libraries within the engine Into a C++
  game for anyone who chooses to do so.

## R47
- R47 (R47/Raki47 Renderer) Is my 2D renderer that I am creating for this project, It contains GLFW, various single header libraries and my own additional that adds functionality
  and links It all together. It will compile Into a static library (.lib, .dylib) as It's something that will Is constantly used by the game.
  
- Written mostly In C, as of now I Intend on writting some parts of It In x64 Assembly (MASM and NASM). Assembly language Is counter Intuitive to my overall goal of readability,
  simplicity and easy compilation but Is a comprimise as It's always been a dream for me to create since I first started game development. If It poses Issues for many other users
  I will change It for future versions of the engine.
  
### Magna
- All the code that Is In the Immediate engine folder will be part of the Magna dynamic library (.dll).

- This library contains all the general functions of the engine, things such as error handling that don't belong In other libary's dedicated to graphics, physics, ect

#### RRES
- RRES Is a single header library by Ray (Raysan5, the creator of Raylib), It creates pack files for all of the graphical assets In the project to encrypt It as well as Increase
  performance by loading sets of assets together when needed rather than having to process all assets In the project at once.

- This was Intended and designed to be compiled by Itself Into a dynamic library (.dll), which Is why there Is nothing else In this library.

##### RAPH
- Unsure of an official name for this library, RAPH (Raki47 Physics) will be alright for now.

- It creates physics for genre inspecific things like player movement, It will also have physics for Football game specific things as thats what I'm creating.

- In the future the physics engine will be expanded as I would like to use this engine for top down shooters Inspired by things such as <i>POSTAL</i> and <i>Hotline Miami</i>.