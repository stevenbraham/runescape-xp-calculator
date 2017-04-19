#About

This is a small program that I developed in 2014. This program can calculate how long it will take to reach a certain level in the online game [Runescape](http://www.runescape.com/community).

To calculate the XP per level, I used the [a table from the Runescape wiki](http://runescape.wikia.com/wiki/Experience/Table).

# How to build
**I have a Macbook, so these instructions are for Unix based systems.**

Run [g++](https://gcc.gnu.org/):
`g++ calculator.cpp`

Execute the program:
`./a.out`

# How to use this program

First you will be asked how much xp you have for a particular skill. Afterwards the program will ask how xp you gain for completing an action such as cooking a steak, crafting a helmet or baking a pie. Then the program will ask how much each action "costs" in gp. For example to create armor you need to buy bars. Finnaly the program will display how many times you have to repeat an action and how much money you need to reach your desired level.

## Sample run

```
Your current XP:10
Level you want to achieve:5
XP gain per action:10
Costs per action (GP):2
Current level: 1 = 10 XP
Requested level: 5 = 388 XP
XP required: 378 XP
You need to train 38 times
This will cost you 76 gp
```