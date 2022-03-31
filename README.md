# Systematic Love Analysis

A Dive into Hatsune Miku: Project DIVA’s “Systematic Love” Visuals

As a software engineer I am fascinated by the portrayal of coding in the media and music. While playing a new game, Hatsune Mike: Project DIVA, on my Switch, I stumbled upon a song I never heard of since abandoning the Vocaloid community in my college years. This song is called “Systematic Love”, and its techno dance vocals caught my attention. It is now one of my favorite Vocaloid songs, behind “Yellow” and “Ooedo Julianight”. While playing this rhythm game’s song, in the background, a program is displayed and presumed to have ran to produce a heart shape with the phrase “SYSTEMATIC LOVE” printed in the middle. 

Intrigued by seeing this, I wanted to analyze the code in this visual to see if it does print out the heart as close to the image in the video game as possible.

First, I collected the program code to the best of my ability from the frames of the video game where it appears. This is hard because it was a flashing entity during most of the song and I didn’t want to fail out. However, I was able to obtain this small program and write it out. Upon analysis I knew from the get to it was programmed in C or a C-adjacent language. Second, I wanted to see if the code was able to compile. It was not. However, with a little bit of finesse it was able to compile. I will talk more about this in the conclusion. Third, I ran to see if it did print a heart with the message in the middle. I was not shocked to see it didn’t.

With that happening, I found a reference of a heart print out program from Neeraj Mishra to see how one can implement this. This does compile and runs lovely.

In conclusion, I can say that the code seen in this Project Diva game is inadequate. There are many reasons to this:
1) it is not clear which language this program is written in. You can see this through the use on appropriate header files. There are many instances in the code that proves this. First, <iostream> is a C++ header file; its C equivalent is <stdio.h>. Second, math.h is a C header file, with the C++ equivalent being <cmath>, which is a wrapper for the math.h header what puts all names in the std namespace.Third, typecasting suggests it is C++.  Fourth, the “int main(void)” declaration leads us to believe it may be C. Fifth, based on the function definition of is_in_love() happening after main() and a prototype, it would mean this is C++. 
2) in order to make this compile, I changed the inconsistent code to overall C code. This allowed the code to compile, however it did not print well. Instead of printing the ‘v’ characters, it printed zeros (or no characters in a C implementation). It also did not print the spaces correctly. This is because the is_in_love function produces a false bool result in every step due to the “top_y” and “bottom_y” variables’ results being NaN every time. There isn’t a valid comparison happening at the end. 

Furthermore, based on analyzing other code examples, I do not believe that a scaled heart can be printed with the likes of one nested for loop and one bool function. The heart needs to be printed with two portions: printing the top of the heart  and printing the triangular part of the heart with the message in the middle. 
