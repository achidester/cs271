// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm
// Name: Alex Chidester

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)
//
// This program only needs to handle arguments that satisfy
// R0 >= 0, R1 >= 0, and R0*R1 < 32768.

// Put your code here.

//num1 (take number from Register 0 and store it into num1)
@R0
D=M
@num1
M=D

//num2 (take number from Register 1 and store it into num2)
@R1
D=M
@num2
M=D

//LOOP
(LOOP)

  //Loop Conditional
  @num1
  D=M
  @END
  D;JLE // If D <= 0 jump to end

  //Loop Continues, Decrease D by 1
  D=D-1
  @num1
  M=D

  //Add num2 to num2
  @num2
  D=M
  @R1
  D=D+M

  @LOOP
  0;JMP
(END)

  @num2
  D=M
  @R2
  M=D
