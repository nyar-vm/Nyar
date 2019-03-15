lexer grammar NyarKeywords;

String: '"' .*? '"';
Comment: '%%%' .*? '%%%' -> channel(HIDDEN);
WhiteSpace: [\r\n\t]+ -> channel(HIDDEN);





Integer: [0-9]+;