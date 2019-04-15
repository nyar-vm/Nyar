RFC0: Byte
============

- 提出时间: 2019-04-15
- 当前状态: Document
- 语言实现: Valkyrie, Vanilla



## Introduction

无限大的无符号整数

## Related

- Bytes

## Alias

Valkyrie 中定义了如下结构

```nyar
trait AbstractByte(ValueType);
type Unsigned64: AbstractByte(64)
type Unsigned32: AbstractByte(32)
type Unsigned16: AbstractByte(16)
type Byte: AbstractByte(8)
```

Vanilla 中定义了以下别名:

```nyar
type! u64: Unsigned64
type! u32: Unsigned32
type! u16: Unsigned16
```

| Alias |  Min |                         Max |
| :---- | ---: | --------------------------: |
| u64   |  `0` | `+1844,6744,0737,0955,1615` |
| u32   |  `0` |             `+42,9496,7295` |
| u16   |  `0` |                   `+6,5535` |
| Byte  |  `0` |                      `+255` |

## Literal

无法直接输入 Byte 型

除非类型推导为 Byte 与其子类型, 或者用 `as` 显式转换.
