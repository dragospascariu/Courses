# World 1-1
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.
screenshot of Mario jumping over adjacent pyramids

![](https://cs50.harvard.edu/x/2023/psets/1/mario/more/pyramids.png)

Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

```
   #  #
  ##  ##
 ###  ###
####  #### 
```
The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

```
$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```

Here’s how the program might work if the user inputs 4 when prompted:

```
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
Here’s how the program might work if the user inputs 2 when prompted:

```
$ ./mario
Height: 2
 #  #
##  ##
```
And here’s how the program might work if the user inputs 1 when prompted:

```
$ ./mario
Height: 1
#  #
```
If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

```
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

Open your `mario.c` file to implement this problem as described!

# Usage 

This program uses the CS50 Library for C

## Installation 

### Ubuntu 

`$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash`

`$ sudo apt install libcs50`

### Fedora

`$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.rpm.sh | sudo bash`

`$ dnf install libcs50`

### From Source (Linux and Mac)

1. Download the latest release from https://github.com/cs50/libcs50/releases
2. Extract `libcs50-*.*`
3. `cd libcs50-*`
4. `sudo make install`


For more information please refer to the [CS50 documentation](https://cs50.readthedocs.io/libraries/cs50/c/).

