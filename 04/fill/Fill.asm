// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm
// Name: Alex Chidester

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed.
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// Put your code here.

(START)
  @KBD
  D=M
  @black
  D;JNE   //if D/=0 jump to black

(white)
  @SCREEN //
  D=M
  @START
  D;JEQ  //if D =0 jump to start

(black)
  @SCREEN   //bits 16383 to 24575 (I think...)
  M=-1      // ...set address SCREEN + 32*row + col/16

  @KBD
  @START
  D;JEQ  //if D =0 jump to start

            
