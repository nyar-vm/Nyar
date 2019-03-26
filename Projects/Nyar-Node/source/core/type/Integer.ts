type BigInt = number;
declare const BigInt: typeof Number;
let bar: bigint = 100n;        // a BigInt literal

// *Slaps roof of fibonacci function*
// This bad boy returns ints that can get *so* big!
function fibonacci(n: bigint) {
    let result = 1n;
    for (let last = 0n, i = 0n; i < n; i++) {
        const current = result;
        result += last;
        last = current;
    }
    return result;
}


export class INTEGER {
    value: BigInt;
    constructor (value: string) {
        if (/^(-|\+)?(\d+|Infinity)$/.test(value)) {
            this.value = BigInt(value)
        }
        else {
            this.value = NaN;
        }

    }

    serialize(n: bigint) {
        return 0
    }

    print() {
        console.log(this.value.toString());
    }
}


const int = new INTEGER('1544189486551654151555')
int.print()