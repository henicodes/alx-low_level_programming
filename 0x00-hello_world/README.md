# 0x00. C- Hello, World
## _For this project, we coverd the following concepts:_
- [C- programming](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220727%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220727T192921Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=2efa0b2d44f7311ce017f3bf02497d8476502a82363ed8af9319812ab37d7f1d)
- [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220727%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220727T193030Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9584aa4ed7675a90914aad1c0e2d2bc2be3f9277e216fe38606891120107e799)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
- [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)
### man or help:
- gcc 
- printf (3)
- puts
- putchar
## Objectives:
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Betty linter:
Coding style is very personal, but we are expected to follow this coding style during our studies. this coding style is mainly inspired by the [Linux Kernel coding style](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/plain/Documentation/process/coding-style.rst) but its slightly modified.
To run the betty linter just command betty <filename>
- Go to the [Betty](https://github.com/holbertonschool/Betty) Repository
- clone the [repo](https://github.com/holbertonschool/Betty)
- cd into the Betty directory
- install the linter with `sudo ./install.sh`
## Create new file called betty, and copy the script below:
- copy the scripts inside the file [betty](https://github.com/henicodes/Resources/blob/main/betty) to file you created called betty.
- once saved, exit file and change permission to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/ directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
#### You can now run betty linter successfuly.
#### As pre Task I've followed the above section and installed betty linter on my local machine (vagrant)
## Tasks
- **0. Preprocessor**
