# Lab 1

### Background

Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.
To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

### Implementation Details
Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

- Your program should first prompt the user for a starting population size.
If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
- Your program should then prompt the user for an ending population size.
If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
- Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
- Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.


## Usage 

This program uses the CS50 Library for C

### Installation 

#### Ubuntu 

`$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash`

`$ sudo apt install libcs50`

#### Fedora

`$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.rpm.sh | sudo bash`

`$ dnf install libcs50`

#### From Source (Linux and Mac)

1. Download the latest release from https://github.com/cs50/libcs50/releases
2. Extract `libcs50-*.*`
3. `cd libcs50-*`
4. `sudo make install`


For more information please refer to the [CS50 documentation](https://cs50.readthedocs.io/libraries/cs50/c/).
