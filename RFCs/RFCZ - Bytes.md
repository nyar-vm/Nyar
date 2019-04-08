RFC0: Bytes
===============

- 提出时间: 2019-5-27
- 当前状态: Document
- 语言实现: Valkyrie, Vanilla

## Introduction

Bytes 是内置类型.

Bytes 可以和 Integer 互换.

Bytes 的类型为 Byte[] 但是重写了 `__text__` 因此 printPretty 结果不是 Byte 列表.

## Literal

Bytes 类型可以直接输入得到

- `0x` 输入会转化为 Bytes
- `0o` 输入会转化为 Bytes
- `0b` 输入会转化为 Bytes

## Method

### `__text__`

`__text__` 字段要求返回 `0x` 格式的字符串

若字符串长度超过 64 字符, 会每隔 4 位插入空格提升可读性, 每行 16 组, 并且去掉 `0x` 前缀

当字符串长度超过 256 字符时剩下的显示为 `...`

## Definition

Valkyrie 中定义了如下结构

```nyar
let namespace Object::Array::Compact;
using nyar::utils;
using Object::Number;
using Abstract::Like;

trait Abstract::AbstractBytes(ValueArray) act LikeArray {
    type Bytes ~Byte[];
    getter __super__ ~Object: Object::Number::Byte;
    getter __self__  ~Object: {
        linkObject("Object::Array::Compact::Bytes")
    };
    getter __text__ ~String;
    hidden from #(Integer i);
    hidden from #(String s);
    public into #(Integer i);
    public into #(String s);
    public is #;
}

trait Bytes ~AbstractBytes{}
```
