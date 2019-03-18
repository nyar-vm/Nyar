import { ANTLRInputStream, CommonTokenStream } from 'antlr4ts';
import { NyarLexer, NyarParser } from '../grammar';
import NyarErrorListener from './ErrorListener';
import NyarEvaluationVisitor from './EvaluationVisitor';

export default function execute(code: string): string {
    const input = new ANTLRInputStream(code);
    const lexer = new NyarLexer(input);
    const tokens = new CommonTokenStream(lexer);
    const parser = new NyarParser(tokens);
    const listener = new NyarErrorListener();
    const visitor = new NyarEvaluationVisitor();

    lexer.removeErrorListeners();
    parser.removeErrorListeners();
    lexer.addErrorListener(listener);
    parser.addErrorListener(listener);

    const program = parser.program();
    visitor.visit(program);

    if (listener.hasError()) {
        return listener.print();
    }

    return visitor.print();
}
