(* ::Package:: *)

SetDirectory@NotebookDirectory[];


JAR=First@FileNames["*.jar","../../../node_modules/antlr4ts-cli/target"]


Needs["JLink`"]


AddToClassPath[JAR];
ReinstallJava[]


LoadJavaClass["org.antlr.v4.runtime"]
