#!/usr/bin/env bash
cd .. && ls -l
alias antlr4py='java -jar Scripts/antlr-4.7.2-complete.jar'
alias antlr4ts='java -jar node_modules/antlr4ts-cli/target/antlr4-typescript-4.7.3-SNAPSHOT-complete.jar'
antlr4ts -visitor Projects/Antlr4/Nyar.g4 -o Projects/Nyar-Node/source/grammar
antlr4py -visitor Projects/Antlr4/Nyar.g4 -o Projects/Nyar-JVM/source/.antlr
antlr4py -visitor Projects/Antlr4/Nyar.g4 -o Projects/Nyar-Python/source/grammar -Dlanguage=Python3
antlr4py -visitor Projects/Antlr4/Nyar.g4 -o Projects/Nyar-LLVM/source/grammar -Dlanguage=Cpp
sleep 10
