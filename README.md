<div align="center">
    <h1>Lahar</h1>
    <h5>The adaptive CLI Text Editor</h5>
    <img src="https://img.shields.io/badge/-C++17-black?logo=c%2B%2B&style=flat-square" alt="C++ version shield">  <img src="https://img.shields.io/badge/-CMake 3.19-black?logo=Cmake&style=flat-square" alt="Cmake version shield">
    <img src="https://img.shields.io/badge/-GNU%20NCurses%206.2-black?logo=gnu&style=flat-square" alt="gnu ncurses"><br>
    <img src="https://img.shields.io/badge/License-Apache%202.0-grey?logo=apache&style=flat-square&labelColor=black" alt="License">
    <img src="https://img.shields.io/badge/-Lahar v0.0.1a1-black?logo=Windows%20Terminal&style=flat-square" alt="Lahar version shield"><br>
    <img src="https://img.shields.io/badge/Windows-unoperational-red?logo=Windows&style=flat-square&labelColor=black" alt="windows">
    <img src="https://img.shields.io/badge/OS%20X-operational-green?logo=Apple&style=flat-square&labelColor=black" alt="macos">
    <img src="https://img.shields.io/badge/Linux-operational-green?logo=linux&style=flat-square&labelColor=black&logoColor=white" alt="linux">
</div>  
<h1></h1>
<h3>What is Lahar?</h3>
Lahar is next-generation CLI Text Editor to support all your needs. It utilises the <a href="https://ftp.gnu.org/pub/gnu/ncurses/">GNU NCurses</a> library to provide a distraction-free editing environment. Inspired by the likes of <a href="https://www.nano-editor.org/">GNU Nano</a> and <a href="https://www.vim.org/">Vim</a>, Lahar strives to be a reputable, reliable and reusable editor.
<h3>Lahar 100</h3>
<h4>Prerequisites</h4>

- [GNU NCurses](https://ftp.gnu.org/pub/gnu/ncurses/)

To get started with Lahar, simply <a href="https://github.com/doublevcodes/lahar/releases">download the latest release</a> from GitHub, compile the program and execute it!
<br>

```bash
$ git clone https://github.com/doublevcodes/lahar
$ cd lahar
```
<h6>Cloning the repository and entering the working directory</h6>

Now you need to compile the code:

<h6>With GCC</h6>

```bash
$ g++ main.cpp constants.cpp -o lahar --std=c++17 -lncurses
```

<h6>With CLang</h6>

```bash
$ clang++ main.cpp constants.cpp -o lahar --std=c++17 -lncurses
```

We're nearly there! To use Lahar, go ahead and type

```bash
./lahar
```

<h4>Lahar is ready to use!</h4>

> Please be aware Lahar has not released a public, stable API. All features are subject to bugs.
<div align="center">
    <h1></h1>
    <h6>© Lahar MMXXI</h6>
</div>
