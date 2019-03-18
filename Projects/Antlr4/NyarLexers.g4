grammar NyarLexers;
import NyarKeywords, NyarOperators;

// High computing priority in the front
expression:
	String														# String
	| Integer													# Integer
	| Symbol													# Symbol
	| expression op = (Multiply | Divide | Times) expression	# Multiply_Divide_
	| expression op = (Add | Subtract) expression				# Add_Subtract_
	| '(' expression ')'										# PriorityOperation;
