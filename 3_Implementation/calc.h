/**
 * @file calc.h
 * @author Ritik Kumar Singh (ritiksingh0523@gmail.com)
 * @brief  this project is about a calculator (a simple one )
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
/**
 * @brief This function is going to call different functions of calculator
 * 
 * @return double 
 */
double simple();
double ci();
double si();
/**
 * @brief this function is going to calculate sum of (operand1+operand2)
 * 
 * @param operand1 
 * @param operand2 
 * @return double 
 */
double sum(double operand1,double operand2);
/**
 * @brief this function is going to calculate substraction of (operand1-operand2)
 * 
 * @param operand1 
 * @param operand2 
 * @return double 
 */
double substract(double operand1,double operand2);
 /**
  * @brief this function is going to calculate multiplication of (operand1*operand2)
  * 
  * @param operand1 
  * @param operand2 
  * @return double 
  */
double mul(double operand1,double operand2);
/**
 * @brief this function is going to calculate Division of (operand1/operand2)
 * 
 * @param operand1 
 * @param operand2 
 * @return double 
 */
        
double div(double operand1,double operand2);
/**
 * @brief this function is going to calculate square (operand1*operand1)
 * 
 * @param operand1 
 * @return double 
 */
      
double square(double operand1);
/**
 * @brief this function is going to calculate factorial of (operand1!)
 * 
 * @param operand1 
 * @return double 
 */

double facto(int operand1);
/**
 * @brief this function is going to calculate simple interest 
 * 
 * @param p 
 * @param r 
 * @param t 
 * @return double 
 */
double simp(double p,double r,double t);
/**
 * @brief this function is going to calculate Compound interest Yearly
 * 
 * @param p 
 * @param r 
 * @param t 
 * @return double 
 */
double yearly(double p,double r,double t);
/**
 * @brief this function is going to calculate Compound interest half Yearly
 * 
 * @param p 
 * @param r 
 * @param t 
 * @return double 
 */

double hyear(double p,double r,double t);
/**
 * @brief this function is going to calculate Compound interest Quaterly
 * 
 * @param p 
 * @param r 
 * @param t 
 * @return double 
 */
double quater(double p,double r,double t);
/**
 * @brief this function is going to calculate Compound interest Monthly
 * 
 * @param p 
 * @param r 
 * @param t 
 * @return double 
 */
double monthly(double p,double r,double t);
