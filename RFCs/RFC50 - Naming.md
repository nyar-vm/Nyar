RFC50: Naming
=============

合法的命名字符, 但是不能在开头存在

- `[0-9]`

```text
0123456789
```

合法的命名

- `_`

- `[a-zA-Z]`

```text
abcdefghijklmnopqrstuvwxyz
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

- `[\p{Latin}]`

```text
abcdefghijklmnopqrstuvwxyz
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

- `[\p{Greek}]`



- `[\p{Hiragana}] | [\p{Katakana}]`


- `[\p{Han}]`
