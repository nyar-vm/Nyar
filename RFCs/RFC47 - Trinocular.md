












trinocular
    : l = trinocularNest Nullable m = trinocularNest Colon r = trinocularNest # ConditionTrinocular
    | l = trinocularNest If m = trinocularNest Else r = trinocularNest        # IfElseTrinocular
    | l = sym_or_num Power m = sym_or_num Mod r = sym_or_num                  # PowerModTrinocular;
trinocularNest: expression | '(' trinocular ')';
