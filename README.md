
# M1_CALCULATOR_UTILITY


# Description

IT IS A BASIC CALCULATOR FOR NORMAL USE.
WHICH CONTAINS DIFFERENT FEATURE FOR DIFFERENT OPERATION.
IN THIS CALCULATOR YOU CAN CHOOSE WHICH KIND OF CALCULATOR YOU WANT TO USE.

# High Level Requirment

You Have Different feature you can choose with.

If want calculate you compound interest or simple interest or simple calculator function.

User Will be able to do these things without any complexity.

# Low level requirment

user can enter desire data.

Statement of evere line should be clear.

So user can understand each Statement and give input according to Statement.

Calculator Should not give wrong output.

# 4w's & 1H

Who 
  >Anyone Who Wants to perform basic arthmatic calculation.

What
  >This is a utility application To perform Arthmatic operations.

Where
  >User can belong to any background who can use this utility.

when
  >Can be used to perform all basic arthmatic operations.

# How
  >Developed Using c Programming

# Batch
![CODE QUALITY SCORE](https://api.codiga.io/project/30927/score/svg)
![code score](https://api.codiga.io/project/30927/status/svg)
[![pages-build-deployment](https://github.com/RitikSingh0523/M1_CALCULATOR_UTILITY/actions/workflows/pages/pages-build-deployment/badge.svg)](https://github.com/RitikSingh0523/M1_CALCULATOR_UTILITY/actions/workflows/pages/pages-build-deployment)







# 2_Architecture

@ Structural Diagram

![titleofscreenshot](https://github.com/RitikSingh0523/M1_CALCULATOR_UTILITY/blob/main/2_Architecture/structuraldiagram.png)

@Behavioural Diagram

![titleofscreenshot](https://github.com/RitikSingh0523/M1_CALCULATOR_UTILITY/blob/main/2_Architecture/behaviouraldiagram.png)

@Main Function

Start Program
inputData = Read_Input()
switch
case(1)
choice 1;
(call function)
case(2)
choice 2;
(call function)
.
.
.
default;


@ call first function

declear functions
inputData = Read_Input()
if operator = "+" result = firstNumber + secondNumber

else if operator = "-" result = firstNumber - secondNumber

else if operator = "*" result = firstNumber * secondNumber

else if operator = "/" result = firstNumber / secondNumber

return result

@call secound function

declear functions
inputData = Read_Input()

compound interest=p(1+(r/n))^t

return result;

@call third function

declear functions
inputData = Read_Input()

simple interest= (p*r*t)/100;

return result;


# Implementation

# Installlation

First Install IDE for c Language.
Suggation- Use VS code
Install C Extention


# Run in Windows

Use vs complie to run the code

# Run in ubuntu

Run command gcc filename.c to complie

Run command gcc filename.c -o output-filename to create output file

Run command ./output-filename to run command

# Expected Behaviour 


##### First it will ask you to select a input for selecting a type of calculator.
##### After Selecting it will ask for choose differnt action that you can choose from.
##### If you select Simple Calculator you have option to choose +,-,*,'/',^,!.
##### If you select Simple Interest you have to fill detail about Amount time and rate.
##### If you select Compound Interest you have to fill detail about Amount time and rate.




# High Level Test


      Test Code	           Test Description	                        Required Input	      Actual Input	  Expected output	                               Actual result
       M01F01	         USER HAVE TO SELECT A OPERATION                  	1	                    1       It should open simple calculator	                   Pass
       M01Q02	         USER HAVE TO SELECT A OPERATION	                2	                    2	      It should open simple Interest calculator	           Pass
       M01W03	         USER HAVE TO SELECT A OPERATION	                3	                    3	      It should open compound interest cal	               Pass
       M01F02	         USER HAVE TO SELECT OPERATION BASED ON CHOICE    	1	                    1	      It should open add calculator	                       Pass
       M01F03	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	        2	                    2	      It should open substract calculator	                 Pass
       M01F04	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	        3	                    3	      It should open multiplication	                       Pass
       M01F05	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	        4                   	   4	      It should open Division calculator	                 Pass
       M01F06	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	        5	                    5	      It shuold open square calculator	                   Pass
       M01F07	         USER HAVE TO SELECT OPERATION BASED ON CHOICE	        6	                    6	      It should open factorial calculator                  Pass 
       M01Q03     	     USER NEED TO ENTER DATA FOR SIMPLE INTEREST	amount rate time 	 amount rate time	It should accept all values	                         Pass
       M01W02	         USER NEED TO ENTER DATA FOR COMPOUND INTEREST amount rate time	amount rate time	It should accept all values	                         Pass
       


# Low Level Test

      Test Code	           Test Description	                        Required Input	      Actual Input	  Expected output	                               Actual result


       M01FA01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return sum	                               Pass
       M01FB01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return substraction	                       Pass
       M01FC01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return multiply of operand	               Pass
       M01FD01	       USER CAN ENTER OPERAND	                    ANY TWO DOUBLE DATA	  TWO DOUBLE DATA	It should return division of operand	               Pass
       M01FE01	       USER CAN ENTER OPERAND	                    ANY ONE DOUBLE DATA	  ONE DOUBLE DATA	It should return square of a number	                 Pass
       M01FF01	       USER CAN ENTER OPERAND	                    ANY ONE DOUBLE DATA	  ONE DOUBLE DATA	It should return factorial of operand	               Pass
       M01QA01	       IT SHOULD INITATE AFTER M01Q03	                   NA	                    NA	    It should return simple interest     	               Pass
       M01WA01	       USER NEED TO CHOOSE A MODE OF INTEREST	Option Based Input(1,2,3)	Option Based Input(1,2,3)	Result according to mode of interest	     Pass
       
  ![image](https://user-images.githubusercontent.com/63330246/153559976-75018af0-08f9-46be-a3e3-07bde2835833.png)






