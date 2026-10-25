// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488b4a2a FUN_1488b4a2a body=772 status=ok
// SIG undefined FUN_1488b4a2a(void)

void FUN_1488b4a2a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488b4b4e:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488b4b66;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488b4b4e;
LAB_1488b4b66:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_14819711e(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b4a2a(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b4d30 FUN_1488b4d30 body=204 status=ok
// SIG undefined FUN_1488b4d30(void)

void FUN_1488b4d30(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1488b4d83;
    }
  }
  lVar2 = 0;
LAB_1488b4d83:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1488b504c(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b4e12 FUN_1488b4e12 body=90 status=ok
// SIG undefined FUN_1488b4e12(void)

void FUN_1488b4e12(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1488b4e6c FUN_1488b4e6c body=141 status=ok
// SIG undefined FUN_1488b4e6c(void)

void FUN_1488b4e6c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 1488b504c FUN_1488b504c body=465 status=ok
// SIG undefined FUN_1488b504c(void)

void FUN_1488b504c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488b517b:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1488b5193;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1488b517b;
LAB_1488b5193:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_1488b521e(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b521e FUN_1488b521e body=119 status=ok
// SIG undefined FUN_1488b521e(void)

void FUN_1488b521e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1488b4e6c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488b5296 FUN_1488b5296 body=110 status=ok
// SIG undefined FUN_1488b5296(void)

void FUN_1488b5296(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_148197090(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1488b5304 FUN_1488b5304 body=643 status=ok
// SIG undefined FUN_1488b5304(void)

void FUN_1488b5304(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_148197012(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b5304(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b5588 FUN_1488b5588 body=336 status=ok
// SIG undefined FUN_1488b5588(void)

void FUN_1488b5588(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_148197012(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b56da FUN_1488b56da body=772 status=ok
// SIG undefined FUN_1488b56da(void)

void FUN_1488b56da(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488b57fe:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488b5816;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488b57fe;
LAB_1488b5816:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_148197012(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b56da(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b59e0 FUN_1488b59e0 body=31 status=ok
// SIG undefined FUN_1488b59e0(void)

undefined8 FUN_1488b59e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b5a1a FUN_1488b5a1a body=101 status=ok
// SIG undefined FUN_1488b5a1a(void)

void FUN_1488b5a1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b5a80 FUN_1488b5a80 body=101 status=ok
// SIG undefined FUN_1488b5a80(void)

void FUN_1488b5a80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b5ae6 FUN_1488b5ae6 body=134 status=ok
// SIG undefined FUN_1488b5ae6(void)

void FUN_1488b5ae6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e650;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b5b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b5b6c FUN_1488b5b6c body=62 status=ok
// SIG undefined FUN_1488b5b6c(void)

void FUN_1488b5b6c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488b5ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488b5baa FUN_1488b5baa body=177 status=ok
// SIG undefined FUN_1488b5baa(void)

bool FUN_1488b5baa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b5c5c FUN_1488b5c5c body=48 status=ok
// SIG undefined FUN_1488b5c5c(void)

void FUN_1488b5c5c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1488b5c8c FUN_1488b5c8c body=12 status=ok
// SIG undefined FUN_1488b5c8c(void)

void FUN_1488b5c8c(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1488b5c98 FUN_1488b5c98 body=132 status=ok
// SIG undefined FUN_1488b5c98(void)

void FUN_1488b5c98(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b5d1e FUN_1488b5d1e body=147 status=ok
// SIG undefined FUN_1488b5d1e(void)

void FUN_1488b5d1e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b5db2 FUN_1488b5db2 body=68 status=ok
// SIG undefined FUN_1488b5db2(void)

void FUN_1488b5db2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_145c2e062(param_1);
  return;
}



// FUNCTION 1488b5df6 FUN_1488b5df6 body=133 status=ok
// SIG undefined FUN_1488b5df6(void)

void FUN_1488b5df6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_145a1e60a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1488b5e7c FUN_1488b5e7c body=141 status=ok
// SIG undefined FUN_1488b5e7c(void)

void FUN_1488b5e7c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xe0) == lVar2) {
          FUN_1488b5f0a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe0 + *param_1 + 0xd0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1488b5f0a FUN_1488b5f0a body=138 status=ok
// SIG undefined FUN_1488b5f0a(void)

void FUN_1488b5f0a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xe0;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xd4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xd0 + lVar6 * 0xe0);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xe0 + 0xd0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xd0);
  FUN_145a1457c(*param_1 + lVar2 + 0x10);
  FUN_1488b5f94(param_1,param_2);
  return;
}



// FUNCTION 1488b5f94 FUN_1488b5f94 body=122 status=ok
// SIG undefined FUN_1488b5f94(void)

void FUN_1488b5f94(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488b600e FUN_1488b600e body=144 status=ok
// SIG undefined FUN_1488b600e(void)

void FUN_1488b600e(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x20) == lVar1) goto LAB_1488b601f;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + *param_1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1488b601f:
  *param_2 = iVar3;
  return;
}



// FUNCTION 1488b609e FUN_1488b609e body=351 status=ok
// SIG undefined FUN_1488b609e(void)

undefined4 *
FUN_1488b609e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c2df7c(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  local_68 = param_4;
  cVar6 = FUN_145c2dede(param_1,uVar11,local_48,&local_54);
  uVar3 = local_54;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_48 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_145c2e062(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b6232 FUN_1488b6232 body=29 status=ok
// SIG undefined FUN_1488b6232(void)

undefined8 FUN_1488b6232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b625e FUN_1488b625e body=31 status=ok
// SIG undefined FUN_1488b625e(void)

undefined8 FUN_1488b625e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b6292 FUN_1488b6292 body=85 status=ok
// SIG undefined FUN_1488b6292(void)

void FUN_1488b6292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40eda0;
  return;
}



// FUNCTION 1488b62e8 FUN_1488b62e8 body=118 status=ok
// SIG undefined FUN_1488b62e8(void)

void FUN_1488b62e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40eda0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b634f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b635e FUN_1488b635e body=105 status=ok
// SIG undefined FUN_1488b635e(void)

undefined8 FUN_1488b635e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c492dc(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b63c8 FUN_1488b63c8 body=129 status=ok
// SIG undefined FUN_1488b63c8(void)

undefined8 * FUN_1488b63c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar7;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return param_1;
}



// FUNCTION 1488b644a FUN_1488b644a body=70 status=ok
// SIG undefined FUN_1488b644a(void)

longlong FUN_1488b644a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456bcd46(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_140045d20(lVar2,1);
  return lVar2;
}



// FUNCTION 1488b6496 FUN_1488b6496 body=62 status=ok
// SIG undefined FUN_1488b6496(void)

void FUN_1488b6496(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488b64d4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 1488b64d4 FUN_1488b64d4 body=112 status=ok
// SIG undefined FUN_1488b64d4(void)

ulonglong FUN_1488b64d4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488b650e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_1488b650e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488b6544 FUN_1488b6544 body=86 status=ok
// SIG undefined FUN_1488b6544(void)

void FUN_1488b6544(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1488b659e FUN_1488b659e body=81 status=ok
// SIG undefined FUN_1488b659e(void)

undefined8 FUN_1488b659e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1488b65f6 FUN_1488b65f6 body=118 status=ok
// SIG undefined FUN_1488b65f6(void)

void FUN_1488b65f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b666c FUN_1488b666c body=118 status=ok
// SIG undefined FUN_1488b666c(void)

void FUN_1488b666c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b66e2 FUN_1488b66e2 body=156 status=ok
// SIG undefined FUN_1488b66e2(void)

void FUN_1488b66e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b40ec50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e9f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b676e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b677e FUN_1488b677e body=98 status=ok
// SIG undefined FUN_1488b677e(void)

void FUN_1488b677e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b67c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b67d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b67e0 FUN_1488b67e0 body=94 status=ok
// SIG undefined FUN_1488b67e0(void)

ulonglong FUN_1488b67e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1488b6833:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b6833;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1488b6844 FUN_1488b6844 body=81 status=ok
// SIG undefined FUN_1488b6844(void)

undefined8 FUN_1488b6844(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1488b689c FUN_1488b689c body=89 status=ok
// SIG undefined FUN_1488b689c(void)

bool FUN_1488b689c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1488b68e7;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1488b68e7:
  return lVar6 == param_2;
}



// FUNCTION 1488b68f6 FUN_1488b68f6 body=118 status=ok
// SIG undefined FUN_1488b68f6(void)

void FUN_1488b68f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ea60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b696c FUN_1488b696c body=118 status=ok
// SIG undefined FUN_1488b696c(void)

void FUN_1488b696c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ea60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b69e2 FUN_1488b69e2 body=156 status=ok
// SIG undefined FUN_1488b69e2(void)

void FUN_1488b69e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ea60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b6a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b6a7e FUN_1488b6a7e body=94 status=ok
// SIG undefined FUN_1488b6a7e(void)

void FUN_1488b6a7e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b6ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b6ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b6adc FUN_1488b6adc body=93 status=ok
// SIG undefined FUN_1488b6adc(void)

ulonglong FUN_1488b6adc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1488b6b2e:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b6b2e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1488b6b3a FUN_1488b6b3a body=132 status=ok
// SIG undefined FUN_1488b6b3a(void)

void FUN_1488b6b3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b6bc0 FUN_1488b6bc0 body=62 status=ok
// SIG undefined FUN_1488b6bc0(void)

void FUN_1488b6bc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488b6bfe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1488b6bfe FUN_1488b6bfe body=93 status=ok
// SIG undefined FUN_1488b6bfe(void)

ulonglong FUN_1488b6bfe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1488b6c5c FUN_1488b6c5c body=64 status=ok
// SIG undefined FUN_1488b6c5c(void)

undefined8 * FUN_1488b6c5c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40ead0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b6ca0 FUN_1488b6ca0 body=81 status=ok
// SIG undefined FUN_1488b6ca0(void)

undefined8 FUN_1488b6ca0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1488b6cf8 FUN_1488b6cf8 body=89 status=ok
// SIG undefined FUN_1488b6cf8(void)

bool FUN_1488b6cf8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1488b6d43;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1488b6d43:
  return lVar6 == param_2;
}



// FUNCTION 1488b6d6e FUN_1488b6d6e body=118 status=ok
// SIG undefined FUN_1488b6d6e(void)

void FUN_1488b6d6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ead0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b6de4 FUN_1488b6de4 body=118 status=ok
// SIG undefined FUN_1488b6de4(void)

void FUN_1488b6de4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ead0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b6e5a FUN_1488b6e5a body=156 status=ok
// SIG undefined FUN_1488b6e5a(void)

void FUN_1488b6e5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ead0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b6ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b6ef6 FUN_1488b6ef6 body=94 status=ok
// SIG undefined FUN_1488b6ef6(void)

void FUN_1488b6ef6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b6f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b6f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b6f54 FUN_1488b6f54 body=93 status=ok
// SIG undefined FUN_1488b6f54(void)

ulonglong FUN_1488b6f54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1488b6fa6:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b6fa6;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1488b6fb2 FUN_1488b6fb2 body=98 status=ok
// SIG undefined FUN_1488b6fb2(void)

void FUN_1488b6fb2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1488b7014 FUN_1488b7014 body=147 status=ok
// SIG undefined FUN_1488b7014(void)

void FUN_1488b7014(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b70a8 FUN_1488b70a8 body=132 status=ok
// SIG undefined FUN_1488b70a8(void)

void FUN_1488b70a8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b712e FUN_1488b712e body=360 status=ok
// SIG undefined FUN_1488b712e(void)

void FUN_1488b712e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = param_1 + 0x1b0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1d0);
  }
  iVar6 = *(int *)(param_1 + 0x1d8);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac) < iVar3 >> 2) {
    lVar2 = param_1 + 400;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x1a0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x1a0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x180);
        if (*(longlong *)(local_78 + 0x180) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x14 + (longlong)iVar3 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x1d8));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b7298 FUN_1488b7298 body=148 status=ok
// SIG undefined FUN_1488b7298(void)

void FUN_1488b7298(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488b732c FUN_1488b732c body=48 status=ok
// SIG undefined FUN_1488b732c(void)

void FUN_1488b732c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1488b735c FUN_1488b735c body=147 status=ok
// SIG undefined FUN_1488b735c(void)

void FUN_1488b735c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b73f0 FUN_1488b73f0 body=88 status=ok
// SIG undefined FUN_1488b73f0(void)

longlong * FUN_1488b73f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1488b7468 FUN_1488b7468 body=377 status=ok
// SIG undefined FUN_1488b7468(void)

undefined8 FUN_1488b7468(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
LAB_1488b75d1:
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x10);
      lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
      do {
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          uVar3 = FUN_1406ef318();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
        }
        lVar5 = plVar6[2];
        if (lVar5 == 0) {
          if (lVar4 == 0) {
            return 0;
          }
          if (*plVar6 == 0) {
            return 0;
          }
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
            goto LAB_1488b75d1;
          }
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar3,plVar6);
          plVar6[2] = lVar5;
          if (lVar5 == 0) goto LAB_1488b75d1;
          lVar4 = plVar6[1];
        }
        if (lVar4 == 0) {
          uVar3 = FUN_1406ef318();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
          lVar5 = plVar6[2];
          if (lVar5 == 0) {
            if (lVar4 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              if (*plVar6 != 0) {
                plVar1 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar1 == (longlong *)0x0) ||
                   (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                  lVar5 = 0;
                }
                else {
                  uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                  lVar5 = FUN_144aff482(uVar3,plVar6);
                }
                plVar6[2] = lVar5;
              }
            }
          }
        }
        cVar2 = FUN_1409500c0(lVar5,param_2);
        if (cVar2 == '\0') goto LAB_1488b75d1;
        plVar6 = plVar6 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1488b75e2 FUN_1488b75e2 body=46 status=ok
// SIG undefined FUN_1488b75e2(void)

void FUN_1488b75e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140fb4052(&DAT_14cb81100);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b180220;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1488b7610 FUN_1488b7610 body=44 status=ok
// SIG undefined FUN_1488b7610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488b7610(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8110c = _DAT_14cb8110c + -1;
  *param_1 = DAT_14cb81100;
  DAT_14cb81100 = param_1;
  return;
}



// FUNCTION 1488b763c FUN_1488b763c body=46 status=ok
// SIG undefined FUN_1488b763c(void)

void FUN_1488b763c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b180220;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1488b766a FUN_1488b766a body=22 status=ok
// SIG undefined FUN_1488b766a(void)

undefined8 FUN_1488b766a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 *apuStack_70 [2];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  int iStack_48;
  longlong lStack_38;
  ulonglong uStack_28;
  
  lVar1 = DAT_14cb81298;
  if (DAT_14cb81298 == 0) {
    return 0;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14141bbdc(param_1,auStack_50);
  if (iStack_48 == 2) {
    FUN_14141bbdc(param_1,apuStack_70);
    uStack_60 = *apuStack_70[0];
    uStack_58 = *(undefined4 *)(apuStack_70[0] + 1);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1488b781e(lVar1,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    FUN_14141bbdc(param_1,apuStack_70);
    uStack_80 = *(undefined8 *)((longlong)apuStack_70[0] + 0xc);
    uStack_78 = *(undefined4 *)((longlong)apuStack_70[0] + 0x14);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1488b7aea(lVar1,uVar2,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b7680 FUN_1488b7680 body=270 status=ok
// SIG undefined FUN_1488b7680(void)

undefined8 FUN_1488b7680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 *local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  int local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14141bbdc(param_2,local_50);
  if (local_48 == 2) {
    FUN_14141bbdc(param_2,local_70);
    local_60 = *local_70[0];
    local_58 = *(undefined4 *)(local_70[0] + 1);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1488b781e(param_1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_14141bbdc(param_2,local_70);
    local_80 = *(undefined8 *)((longlong)local_70[0] + 0xc);
    local_78 = *(undefined4 *)((longlong)local_70[0] + 0x14);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1488b7aea(param_1,uVar1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b7790 FUN_1488b7790 body=38 status=ok
// SIG undefined FUN_1488b7790(void)

void FUN_1488b7790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb811f0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b1803d0;
  return;
}



// FUNCTION 1488b77b6 FUN_1488b77b6 body=44 status=ok
// SIG undefined FUN_1488b77b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488b77b6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb811fc = _DAT_14cb811fc + -1;
  *param_1 = DAT_14cb811f0;
  DAT_14cb811f0 = param_1;
  return;
}



// FUNCTION 1488b77e2 FUN_1488b77e2 body=38 status=ok
// SIG undefined FUN_1488b77e2(void)

void FUN_1488b77e2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b1803d0;
  return;
}



// FUNCTION 1488b7808 FUN_1488b7808 body=22 status=ok
// SIG undefined FUN_1488b7808(void)

longlong FUN_1488b7808(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined4 auStack_2c [3];
  ulonglong uStack_20;
  
  lVar2 = DAT_14cb81298;
  if (DAT_14cb81298 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a62e5c(auStack_2c,param_1,*(undefined4 *)(DAT_14cb81298 + 0x338),
                *(undefined4 *)(DAT_14cb81298 + 0x33c));
  iVar3 = FUN_144aff4b2(auStack_2c);
  if (iVar3 != 0) {
    FUN_144a78877(auStack_2c[0],iVar3);
  }
  plVar1 = (longlong *)(lVar2 + 0x2e8);
  iVar3 = FUN_1447fa34e(plVar1);
  if (((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, lVar4 == 0)) ||
     (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x30);
    if (lVar5 != 0) goto LAB_1488b78ab;
  }
  lVar5 = FUN_1488b7924(lVar2,lVar4);
LAB_1488b78ab:
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b781e FUN_1488b781e body=185 status=ok
// SIG undefined FUN_1488b781e(void)

void FUN_1488b781e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a62e5c(local_2c,param_2,*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
  iVar1 = FUN_144aff4b2(local_2c);
  if (iVar1 != 0) {
    FUN_144a78877(local_2c[0],iVar1);
  }
  iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8));
  if (((iVar1 == -1) ||
      (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) {
    lVar2 = 0;
  }
  else if (*(longlong *)(lVar2 + 0x30) != 0) goto LAB_1488b78ab;
  FUN_1488b7924(param_1,lVar2);
LAB_1488b78ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b7924 FUN_1488b7924 body=215 status=ok
// SIG undefined FUN_1488b7924(void)

undefined8 FUN_1488b7924(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_144837e54(param_2,0);
  cVar2 = FUN_140dddae6(param_2 + 0x48);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x30);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)FUN_140cbef6c(&DAT_14cb811f0);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_14b1803d0;
      *(undefined8 **)(param_2 + 0x30) = puVar3;
    }
    else {
      if (*(int *)(param_2 + 0x44) == *(int *)(param_2 + 0x40)) goto LAB_1488b7963;
      plVar5 = (longlong *)FUN_1464e5bb0();
      (**(code **)(*plVar5 + 0x2f0))(plVar5,lVar1,1);
      plVar5 = (longlong *)FUN_1464e5bb0();
      (**(code **)(*plVar5 + 0x2e8))(plVar5,lVar1,1);
    }
    FUN_1400f0d6e(param_1,param_2,1);
    uVar4 = FUN_1464e5bb0();
    FUN_1446e7478(param_2 + 0x48,*(undefined8 *)(param_2 + 0x30),uVar4,1);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
LAB_1488b7963:
  return *(undefined8 *)(param_2 + 0x30);
}



// FUNCTION 1488b7a0a FUN_1488b7a0a body=223 status=ok
// SIG undefined FUN_1488b7a0a(void)

undefined8 FUN_1488b7a0a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_144837e54(param_2,0);
  cVar2 = FUN_140dddae6(param_2 + 0x48);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x30);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)FUN_140fb4052(&DAT_14cb81100);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_14b180220;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *(undefined8 **)(param_2 + 0x30) = puVar3;
    }
    else {
      if (*(int *)(param_2 + 0x44) == *(int *)(param_2 + 0x40)) goto LAB_1488b7a49;
      plVar5 = (longlong *)FUN_1464e5b1e();
      (**(code **)(*plVar5 + 0x2f0))(plVar5,lVar1,1);
      plVar5 = (longlong *)FUN_1464e5b1e();
      (**(code **)(*plVar5 + 0x2e8))(plVar5,lVar1,1);
    }
    FUN_1400f0d6e(param_1,param_2,1);
    uVar4 = FUN_1464e5b1e();
    FUN_1446e7478(param_2 + 0x48,*(undefined8 *)(param_2 + 0x30),uVar4,1);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
LAB_1488b7a49:
  return *(undefined8 *)(param_2 + 0x30);
}



// FUNCTION 1488b7aea FUN_1488b7aea body=258 status=ok
// SIG undefined FUN_1488b7aea(void)

longlong FUN_1488b7aea(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_1488b7bcc;
      plVar4 = (longlong *)(*plVar4 + 0x30);
    }
    if ((*plVar4 != 0) && (lVar2 = *(longlong *)(*plVar4 + 0x68), lVar2 != 0)) {
      FUN_144a62e5c(local_2c,param_3,*(undefined4 *)(lVar2 + 0xc0),*(undefined4 *)(lVar2 + 0xc4));
      iVar1 = FUN_144aff4b2(local_2c);
      if (iVar1 != 0) {
        FUN_144a78877(local_2c[0],iVar1);
      }
      iVar1 = FUN_144b0847a((longlong *)(lVar2 + 0x70));
      if (((iVar1 == -1) ||
          (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(lVar2 + 0x70), lVar2 == 0)) ||
         (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) {
        lVar2 = 0;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x30);
        if (lVar3 != 0) goto LAB_1488b7bce;
      }
      lVar3 = FUN_1488b7a0a(param_1,lVar2);
      goto LAB_1488b7bce;
    }
  }
LAB_1488b7bcc:
  lVar3 = 0;
LAB_1488b7bce:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b7c2a FUN_1488b7c2a body=21 status=ok
// SIG undefined FUN_1488b7c2a(void)

void FUN_1488b7c2a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1488b7c40();
  FUN_1486b43da(uVar1);
  return;
}



// FUNCTION 1488b7c40 FUN_1488b7c40 body=113 status=ok
// SIG undefined FUN_1488b7c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488b7c40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb81348;
  if (DAT_14cb81348 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x4200,0);
    lVar4 = 0x3f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x21;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb81348;
    _DAT_14cb81350 = _DAT_14cb81350 + 0x40;
  }
  DAT_14cb81348 = (undefined8 *)*puVar2;
  _DAT_14cb81354 = _DAT_14cb81354 + 1;
  return;
}



// FUNCTION 1488b7cb2 FUN_1488b7cb2 body=44 status=ok
// SIG undefined FUN_1488b7cb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488b7cb2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb81354 = _DAT_14cb81354 + -1;
  *param_1 = DAT_14cb81348;
  DAT_14cb81348 = param_1;
  return;
}



// FUNCTION 1488b7cde FUN_1488b7cde body=28 status=ok
// SIG undefined FUN_1488b7cde(void)

void FUN_1488b7cde(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1486b43da(param_1);
  return;
}



// FUNCTION 1488b7d6a FUN_1488b7d6a body=33 status=ok
// SIG undefined FUN_1488b7d6a(void)

void FUN_1488b7d6a(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x398);
  return;
}



// FUNCTION 1488b7dfc FUN_1488b7dfc body=502 status=ok
// SIG undefined FUN_1488b7dfc(void)

void FUN_1488b7dfc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  local_70[0] = (undefined8 ****)FUN_1405f939e();
  FUN_1488bf08e(local_a8);
  lVar5 = local_98;
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
  UNLOCK();
  local_b0 = local_88;
  lVar7 = local_80;
  if (local_a0 != local_88) {
    local_c0 = local_80;
    puVar8 = local_a0;
    local_b8 = param_1;
    do {
      uVar3 = puVar8[2];
      cVar6 = FUN_1488b7ff4(param_1,uVar2,uVar3);
      if (cVar6 != '\0') {
        iVar1 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
          FUN_14052e0a0(param_2,iVar1);
        }
        lVar7 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar7 = param_2;
        }
        local_58 = 8;
        local_70[0] = (undefined8 *****)0x0;
        FUN_14485c47a(local_70,uVar3);
        local_50 = 7;
        FUN_141814da4((longlong)iVar1 * 0x38 + lVar7,local_70,0);
        param_1 = local_b8;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppuVar10 = local_70;
          if (0x18 < local_58) {
            pppppuVar10 = (undefined8 *****)local_70[0];
          }
          (*pcVar4)(pppppuVar10);
        }
        lVar7 = local_c0;
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
      }
      for (puVar8 = (undefined8 *)FUN_140134102(*puVar8); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)FUN_140134102(*puVar8)) {
        lVar9 = FUN_1447210f0(puVar8[2]);
        if (lVar9 == *local_90) goto LAB_1488b7fa0;
      }
      puVar8 = (undefined8 *)0x0;
LAB_1488b7fa0:
    } while (puVar8 != local_b0);
  }
  LOCK();
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b7ff4 FUN_1488b7ff4 body=152 status=ok
// SIG undefined FUN_1488b7ff4(void)

undefined8 FUN_1488b7ff4(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14020a27c();
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x210) != '\x01') {
LAB_1488b8089:
      uVar3 = 1;
      goto LAB_1488b8040;
    }
    lVar2 = (**(code **)(*(longlong *)(param_3 + 0x390) + 0x28))(param_3 + 0x390);
    if (*(int *)(param_2 + 0x1e8) != 0) {
      local_30[0] = param_2 + 0x1c8;
      local_30[1] = 0;
      local_20 = 0;
      cVar1 = FUN_14008db60(local_30,lVar2 + 0x78);
      if (cVar1 != '\0') goto LAB_1488b8089;
    }
  }
  uVar3 = 0;
LAB_1488b8040:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b808e FUN_1488b808e body=508 status=ok
// SIG undefined FUN_1488b808e(void)

void FUN_1488b808e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  local_70[0] = (undefined8 ****)FUN_1405f939e();
  FUN_1488bf156(local_a8);
  lVar5 = local_98;
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
  UNLOCK();
  local_b0 = local_88;
  lVar7 = local_80;
  if (local_a0 != local_88) {
    local_c0 = local_80;
    puVar8 = local_a0;
    local_b8 = param_1;
    do {
      uVar3 = puVar8[2];
      cVar6 = FUN_1488b828c(param_1,uVar2,uVar3);
      if (cVar6 != '\0') {
        iVar1 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
          FUN_14052e0a0(param_2,iVar1);
        }
        lVar7 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar7 = param_2;
        }
        local_58 = 8;
        local_70[0] = (undefined8 *****)0x0;
        FUN_14485c47a(local_70,uVar3);
        local_50 = 7;
        FUN_141814da4((longlong)iVar1 * 0x38 + lVar7,local_70,0);
        param_1 = local_b8;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppuVar10 = local_70;
          if (0x18 < local_58) {
            pppppuVar10 = (undefined8 *****)local_70[0];
          }
          (*pcVar4)(pppppuVar10);
        }
        lVar7 = local_c0;
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
      }
      for (puVar8 = (undefined8 *)FUN_1488bf1e0(*puVar8); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)FUN_1488bf1e0(*puVar8)) {
        lVar9 = FUN_1447210f0(puVar8[2]);
        if (lVar9 == *local_90) goto LAB_1488b8238;
      }
      puVar8 = (undefined8 *)0x0;
LAB_1488b8238:
    } while (puVar8 != local_b0);
  }
  LOCK();
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b828c FUN_1488b828c body=152 status=ok
// SIG undefined FUN_1488b828c(void)

undefined8 FUN_1488b828c(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14020a27c();
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x210) != '\x01') {
LAB_1488b8321:
      uVar3 = 1;
      goto LAB_1488b82d8;
    }
    lVar2 = (**(code **)(*(longlong *)(param_3 + 0x400) + 0x28))(param_3 + 0x400);
    if (*(int *)(param_2 + 0x1e8) != 0) {
      local_30[0] = param_2 + 0x1c8;
      local_30[1] = 0;
      local_20 = 0;
      cVar1 = FUN_14008db60(local_30,lVar2 + 0x78);
      if (cVar1 != '\0') goto LAB_1488b8321;
    }
  }
  uVar3 = 0;
LAB_1488b82d8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b8326 FUN_1488b8326 body=703 status=ok
// SIG undefined FUN_1488b8326(void)

void FUN_1488b8326(longlong param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined1 local_88 [24];
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)FUN_144a7be76();
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_14007a696();
    lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_14007a696();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (lVar7 != 0 && lVar6 != lVar7) {
        uVar5 = FUN_1413dc03c();
        lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
        if (lVar6 == 0) {
          lVar11 = 0;
        }
        else {
          uVar5 = FUN_1413dc03c();
          lVar9 = FUN_144718840(lVar6,uVar5);
          lVar11 = 0;
          if (lVar6 != lVar9) {
            lVar11 = lVar9;
          }
        }
        FUN_1489af028(local_88,lVar11);
        local_c8 = *(undefined8 *)(param_1 + 0x48);
        local_70[0] = (undefined8 ****)FUN_1405f939e(param_1);
        FUN_1459ae126(local_c0,&DAT_14cb841c0);
        lVar11 = local_98;
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
        local_d0 = local_a0;
        lVar6 = local_b0;
        if (local_b8 != local_a0) {
          local_d8 = local_b0;
          local_e0 = local_a8;
          puVar8 = local_b8;
          plVar4 = local_a8;
          do {
            uVar5 = puVar8[2];
            local_e8 = local_88;
            cVar3 = FUN_1488b85e6(param_1,local_c8,uVar5,lVar7);
            if (cVar3 != '\0') {
              iVar1 = *(int *)(param_2 + 0x388);
              *(uint *)(param_2 + 0x388) = iVar1 + 1U;
              if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
                FUN_14052e0a0(param_2,iVar1);
              }
              lVar6 = *(longlong *)(param_2 + 0x380);
              if (*(longlong *)(param_2 + 0x380) == 0) {
                lVar6 = param_2;
              }
              local_58 = 8;
              local_70[0] = (undefined8 *****)0x0;
              FUN_14485c47a(local_70,uVar5);
              local_50 = 7;
              FUN_141814da4((longlong)iVar1 * 0x38 + lVar6,local_70,0);
              plVar4 = local_e0;
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar2 != (code *)0x0) {
                pppppuVar10 = local_70;
                if (0x18 < local_58) {
                  pppppuVar10 = (undefined8 *****)local_70[0];
                }
                (*pcVar2)(pppppuVar10);
              }
              lVar6 = local_d8;
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
            }
            for (puVar8 = (undefined8 *)FUN_1459ae1d6(*puVar8); puVar8 != (undefined8 *)0x0;
                puVar8 = (undefined8 *)FUN_1459ae1d6(*puVar8)) {
              lVar9 = FUN_1447210f0(puVar8[2]);
              if (lVar9 == *plVar4) goto LAB_1488b85b9;
            }
            puVar8 = (undefined8 *)0x0;
LAB_1488b85b9:
          } while (puVar8 != local_d0);
        }
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b85e6 FUN_1488b85e6 body=246 status=ok
// SIG undefined FUN_1488b85e6(void)

undefined8
FUN_1488b85e6(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
             undefined8 param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  cVar1 = FUN_14020a27c();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x1c8) == '\0') {
    if (*(char *)(param_2 + 0x1d0) == '\0') {
      return 1;
    }
    if (*(longlong *)(param_3 + 0x3f0) == 0) {
      return 0;
    }
    cVar1 = *(char *)(*(longlong *)(param_3 + 0x3f0) + 0x279);
  }
  else {
    if (*(longlong *)(param_3 + 0x3f0) == 0) {
      return 0;
    }
    if ((*(byte *)(param_3 + 0x968) & 0x40) == 0) {
      return 0;
    }
    cVar1 = *(char *)(*(longlong *)(param_3 + 0x3f0) + 0x279);
    cVar2 = (**(code **)(*param_4 + 0x20))(param_4,param_3 + 0x3f0,0);
    if (cVar2 == '\0') {
      return 0;
    }
    if (cVar1 == '\x02') {
      cVar1 = '\x02';
      bVar3 = *(byte *)(param_3 + 0x96a) & 4;
    }
    else {
      if (cVar1 != '\x01') goto LAB_1488b8695;
      bVar3 = FUN_14656301e(param_3 + 0x530,param_5);
      cVar1 = '\x01';
    }
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1488b8695:
  if (*(char *)(param_2 + 0x1d0) != '\x01') {
    return 1;
  }
  if (cVar1 == '\x02') {
    if (*(int *)(param_2 + 0x1cc) != 0) {
      return 1;
    }
  }
  else {
    if (cVar1 != '\x01') {
      return 1;
    }
    if (*(int *)(param_2 + 0x1cc) != 1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1488b86dc FUN_1488b86dc body=754 status=ok
// SIG undefined FUN_1488b86dc(void)

void FUN_1488b86dc(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_1405f939e();
  if (((((lVar7 != 0) && (plVar8 = (longlong *)FUN_1406f625c(lVar7), plVar8 != (longlong *)0x0)) &&
       (lVar7 = (**(code **)(*plVar8 + 0x2b0))(plVar8), lVar7 != 0)) &&
      ((lVar7 = FUN_1401499e8(lVar7), lVar7 != 0 &&
       (plVar8 = (longlong *)FUN_14153cdbc(plVar8), plVar8 != (longlong *)0x0)))) &&
     (plVar8 = (longlong *)(**(code **)(*plVar8 + 0xc0))(plVar8), plVar8 != (longlong *)0x0)) {
    FUN_146556af0(plVar8,&local_80);
    if ((longlong)local_78 != 0) {
      local_c0 = local_80 + (longlong)local_78 * 0xc;
      lVar7 = local_80;
      local_b8 = plVar8;
      local_88 = param_2;
      do {
        local_b0 = lVar7;
        lVar7 = (**(code **)(*local_b8 + 8))(local_b8);
        if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 200) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          plVar8 = *(longlong **)(lVar7 + 0xc0);
          local_a8 = plVar8 + (longlong)*(int *)(lVar7 + 200) * 2;
          do {
            lVar7 = *plVar8;
            plVar12 = (longlong *)(lVar7 + 0x28);
            if (*(longlong **)(lVar7 + 0x38) != (longlong *)0x0) {
              plVar12 = *(longlong **)(lVar7 + 0x38);
            }
            local_a0 = plVar8;
            if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
              local_98 = plVar12 + (longlong)*(int *)(lVar7 + 0x40) * 2;
              do {
                lVar7 = *(longlong *)(*plVar12 + 0x30);
                local_90 = plVar12;
                if ((lVar7 != 0) && (iVar1 = *(int *)(lVar7 + 0x70), (longlong)iVar1 != 0)) {
                  lVar7 = *(longlong *)(lVar7 + 0x68);
                  lVar13 = 0;
                  do {
                    lVar9 = FUN_14479d2ce(*(undefined8 *)(lVar7 + lVar13));
                    if ((lVar9 != 0) &&
                       (cVar6 = FUN_14020a27c(param_1,uVar3,lVar9), lVar5 = local_88, cVar6 != '\0')
                       ) {
                      iVar2 = *(int *)(local_88 + 0x388);
                      *(uint *)(local_88 + 0x388) = iVar2 + 1U;
                      if (*(uint *)(local_88 + 0x38c) < iVar2 + 1U) {
                        FUN_14052e0a0(local_88,iVar2);
                      }
                      lVar10 = *(longlong *)(lVar5 + 0x380);
                      if (lVar10 == 0) {
                        lVar10 = lVar5;
                      }
                      local_58 = 8;
                      local_70[0] = (undefined8 ****)0x0;
                      FUN_14485c47a(local_70,lVar9);
                      local_50 = 7;
                      FUN_141814da4((longlong)iVar2 * 0x38 + lVar10,local_70,0);
                      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_50 * 0x120));
                      if (pcVar4 != (code *)0x0) {
                        ppppuVar11 = local_70;
                        if (0x18 < local_58) {
                          ppppuVar11 = (undefined8 ****)local_70[0];
                        }
                        (*pcVar4)(ppppuVar11);
                      }
                      if (0x18 < local_58) {
                        FUN_1400020a8(local_70[0]);
                      }
                    }
                    lVar13 = lVar13 + 0x10;
                  } while ((longlong)iVar1 * 0x10 != lVar13);
                }
                plVar12 = local_90 + 2;
              } while (plVar12 != local_98);
            }
            plVar8 = local_a0 + 2;
          } while (plVar8 != local_a8);
        }
        lVar7 = local_b0 + 0xc;
      } while (lVar7 != local_c0);
    }
    if (local_80 != 0) {
      FUN_1400020a8(local_80);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b89d0 FUN_1488b89d0 body=508 status=ok
// SIG undefined FUN_1488b89d0(void)

void FUN_1488b89d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  local_70[0] = (undefined8 ****)FUN_1405f939e();
  FUN_1488bf2a0(local_a8);
  lVar5 = local_98;
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
  UNLOCK();
  local_b0 = local_88;
  lVar7 = local_80;
  if (local_a0 != local_88) {
    local_c0 = local_80;
    puVar8 = local_a0;
    local_b8 = param_1;
    do {
      uVar3 = puVar8[2];
      cVar6 = FUN_1488b8bce(param_1,uVar2,uVar3);
      if (cVar6 != '\0') {
        iVar1 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
          FUN_14052e0a0(param_2,iVar1);
        }
        lVar7 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar7 = param_2;
        }
        local_58 = 8;
        local_70[0] = (undefined8 *****)0x0;
        FUN_14485c47a(local_70,uVar3);
        local_50 = 7;
        FUN_141814da4((longlong)iVar1 * 0x38 + lVar7,local_70,0);
        param_1 = local_b8;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppuVar10 = local_70;
          if (0x18 < local_58) {
            pppppuVar10 = (undefined8 *****)local_70[0];
          }
          (*pcVar4)(pppppuVar10);
        }
        lVar7 = local_c0;
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
      }
      for (puVar8 = (undefined8 *)FUN_1488bf32a(*puVar8); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)FUN_1488bf32a(*puVar8)) {
        lVar9 = FUN_1447210f0(puVar8[2]);
        if (lVar9 == *local_90) goto LAB_1488b8b7a;
      }
      puVar8 = (undefined8 *)0x0;
LAB_1488b8b7a:
    } while (puVar8 != local_b0);
  }
  LOCK();
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b8bce FUN_1488b8bce body=152 status=ok
// SIG undefined FUN_1488b8bce(void)

undefined8 FUN_1488b8bce(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14020a27c();
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x210) != '\x01') {
LAB_1488b8c63:
      uVar3 = 1;
      goto LAB_1488b8c1a;
    }
    lVar2 = (**(code **)(*(longlong *)(param_3 + 0x390) + 0x28))(param_3 + 0x390);
    if (*(int *)(param_2 + 0x1e8) != 0) {
      local_30[0] = param_2 + 0x1c8;
      local_30[1] = 0;
      local_20 = 0;
      cVar1 = FUN_14008db60(local_30,lVar2 + 0x78);
      if (cVar1 != '\0') goto LAB_1488b8c63;
    }
  }
  uVar3 = 0;
LAB_1488b8c1a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b8c67 FUN_1488b8c67 body=1406 status=ok
// SIG undefined FUN_1488b8c67(void)

undefined8
FUN_1488b8c67(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
             float *param_6,undefined1 *param_7,double *param_8)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  dVar10 = *param_1 - *param_3;
  dVar9 = param_1[1] - param_3[1];
  dVar8 = param_1[2];
  dVar5 = param_3[2];
  dVar3 = *param_2 * 0.0 + param_2[1] * -0.0;
  dVar6 = param_2[1] - param_2[2] * 0.0;
  dVar4 = param_2[2] * 0.0 - *param_2;
  dVar1 = dVar3 * dVar3 + dVar6 * dVar6 + dVar4 * dVar4;
  fVar16 = (float)SQRT(dVar1);
  *param_7 = 0;
  if (ABS(fVar16) < 0.0001) {
    return 0;
  }
  dVar7 = 1.0 / SQRT(dVar1);
  if (9.99999993922529e-09 < dVar1) {
    dVar6 = dVar6 * dVar7;
    dVar4 = dVar4 * dVar7;
  }
  dVar3 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar1) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 * dVar7) & -(ulonglong)(9.99999993922529e-09 < dVar1));
  fVar15 = (float)((dVar8 - dVar5) * dVar3 + dVar10 * dVar6 + dVar9 * dVar4);
  dVar1 = *param_4;
  if ((double)ABS(fVar15) <= dVar1) {
    dVar11 = (dVar8 - dVar5) * 0.0;
    dVar5 = dVar6 * 0.0 + dVar4 * -0.0;
    dVar8 = dVar4 - dVar3 * 0.0;
    dVar14 = dVar3 * 0.0 - dVar6;
    dVar7 = dVar5 * dVar5 + dVar8 * dVar8 + dVar14 * dVar14;
    if (9.99999993922529e-09 < dVar7) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar8 = dVar8 * dVar7;
      dVar14 = dVar14 * dVar7;
      dVar5 = dVar5 * dVar7;
    }
    fVar16 = (float)(-((dVar10 * 0.0 + dVar9 * -0.0) * dVar3 +
                      (dVar9 - dVar11) * dVar6 + (dVar11 - dVar10) * dVar4) / (double)fVar16);
    dVar4 = dVar1 * dVar1 - (double)(fVar15 * fVar15);
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    dVar1 = *param_2;
    dVar3 = param_2[1];
    dVar6 = param_2[2];
    fVar2 = ABS((float)(dVar4 / (dVar5 * dVar6 + dVar8 * dVar1 + dVar14 * dVar3)));
    fVar15 = fVar16 - fVar2;
    fVar2 = fVar2 + fVar16;
    if (-0.0001 <= fVar15) {
      if ((-0.0001 <= fVar2) && (fVar2 <= fVar15)) {
        fVar15 = fVar2;
      }
    }
    else {
      fVar15 = fVar2;
      if (fVar2 < -0.0001) {
        return 0;
      }
    }
    dVar8 = param_1[2];
    if ((-9.999999747378752e-05 <= dVar6) || (dVar8 <= param_3[2] - param_4[2])) {
      if (dVar6 <= 9.999999747378752e-05) {
        dVar5 = *param_1;
        uVar12 = SUB84(param_1[1],0);
        uVar13 = (undefined4)((ulonglong)param_1[1] >> 0x20);
      }
      else {
        dVar5 = *param_1;
        dVar4 = param_1[1];
        uVar12 = SUB84(dVar4,0);
        uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if ((dVar8 < param_3[2] + param_4[2]) &&
           (fVar16 = (float)(((param_3[2] + param_4[2]) - (dVar5 * 0.0 + dVar4 * 0.0 + dVar8)) /
                            (dVar1 * 0.0 + dVar3 * 0.0 + dVar6)), fVar16 < fVar15)) {
          dVar9 = (double)fVar15;
          *param_5 = dVar1 * dVar9 + dVar5;
          param_5[1] = dVar3 * dVar9 + dVar4;
          param_5[2] = dVar8 + dVar6 * dVar9;
          param_5[2] = param_3[2] + param_4[2];
          *param_6 = fVar15;
          *param_7 = 1;
          dVar3 = (double)fVar16;
          dVar8 = param_2[2];
          dVar5 = param_2[1];
          dVar4 = param_1[2];
          dVar1 = param_1[1];
          *param_8 = dVar3 * *param_2 + *param_1;
          param_8[1] = dVar5 * dVar3 + dVar1;
          param_8[2] = dVar8 * dVar3 + dVar4;
          return 1;
        }
      }
    }
    else {
      dVar5 = *param_1;
      dVar4 = param_1[1];
      uVar12 = SUB84(dVar4,0);
      uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
      fVar16 = (float)(((param_3[2] - param_4[2]) - (dVar5 * 0.0 + dVar4 * 0.0 + dVar8)) /
                      (dVar1 * 0.0 + dVar3 * 0.0 + dVar6));
      if ((0.0001 < fVar16) && (fVar16 < fVar15)) {
        dVar9 = (double)fVar16;
        *param_5 = dVar5 + dVar1 * dVar9;
        param_5[1] = dVar4 + dVar3 * dVar9;
        param_5[2] = dVar8 + dVar6 * dVar9;
        *param_6 = fVar16;
        return 1;
      }
    }
    dVar4 = (double)fVar15;
    *param_5 = dVar1 * dVar4 + dVar5;
    param_5[1] = dVar3 * dVar4 + (double)CONCAT44(uVar13,uVar12);
    param_5[2] = dVar8 + dVar6 * dVar4;
    *param_6 = fVar15;
    dVar4 = param_3[2] + param_4[2];
    dVar5 = param_3[2] - param_4[2];
    dVar8 = param_5[2];
    if (dVar4 <= param_5[2]) {
      dVar8 = dVar4;
    }
    if (dVar8 <= dVar5) {
      dVar8 = dVar5;
    }
    param_5[2] = dVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1488b91e6 FUN_1488b91e6 body=60 status=ok
// SIG undefined FUN_1488b91e6(void)

void FUN_1488b91e6(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xd8,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  return;
}



// FUNCTION 1488b9222 FUN_1488b9222 body=131 status=ok
// SIG undefined FUN_1488b9222(void)

void FUN_1488b9222(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar3 = FUN_140309e34(lVar1 + 0x180,lVar2,lVar1 + 0x198);
  *(undefined4 *)(param_1 + 0x4d0) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x1a0,lVar2,lVar1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x4d4) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x1c0,lVar2,lVar1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x4d8) = uVar3;
  FUN_1488b92a6(param_1);
  return;
}



// FUNCTION 1488b92a6 FUN_1488b92a6 body=878 status=ok
// SIG undefined FUN_1488b92a6(void)

void FUN_1488b92a6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  byte local_a9;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined4 uStack_82;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400ef488();
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_140309ec4(lVar2 + 0x40,&local_a8,lVar3);
  *(ulonglong *)(param_1 + 0x428) = CONCAT44(uStack_94,local_98);
  *(undefined4 *)(param_1 + 0x418) = local_a8;
  *(uint *)(param_1 + 0x41c) = uStack_a4;
  *(undefined4 *)(param_1 + 0x420) = uStack_a0;
  *(undefined4 *)(param_1 + 0x424) = uStack_9c;
  FUN_140d0fa06(lVar2 + 0xd8,&local_a8,lVar3);
  *(ulonglong *)(param_1 + 0x440) = CONCAT44(uStack_94,local_98);
  *(undefined4 *)(param_1 + 0x430) = local_a8;
  *(uint *)(param_1 + 0x434) = uStack_a4;
  *(undefined4 *)(param_1 + 0x438) = uStack_a0;
  *(undefined4 *)(param_1 + 0x43c) = uStack_9c;
  uVar4 = FUN_140309e34(lVar2 + 0x138,lVar3,lVar2 + 0x150);
  *(undefined4 *)(param_1 + 0x448) = uVar4;
  *(uint *)(param_1 + 0x44c) = (uint)*(byte *)(lVar2 + 0x158);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81520) {
    FUN_144b3d300(&DAT_14cb81520);
    if (DAT_14cb81520 == -1) {
      FUN_1446ddc76(&DAT_14cb81518,"ProjectOntoShape",1);
      _Init_thread_footer(&DAT_14cb81520);
    }
  }
  local_b8 = FUN_144a7be76(param_1);
  if (local_b8 == 0) {
LAB_1488b93af:
    local_b8 = 0;
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(local_b8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_b8 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1488b93af;
  }
  FUN_144a886e6(&local_a8,DAT_14cb81518,&local_a9,1);
  *(uint *)(param_1 + 0x46a) = CONCAT22(uStack_8c,uStack_8e);
  *(uint *)(param_1 + 0x46e) = CONCAT22(uStack_88,uStack_8a);
  *(undefined4 *)(param_1 + 0x472) = uStack_86;
  *(undefined4 *)(param_1 + 0x476) = uStack_82;
  *(undefined4 *)(param_1 + 0x460) = local_98;
  *(undefined4 *)(param_1 + 0x464) = uStack_94;
  *(uint *)(param_1 + 0x468) = CONCAT22(uStack_8e,uStack_90);
  *(uint *)(param_1 + 0x46c) = CONCAT22(uStack_8a,uStack_8c);
  *(undefined4 *)(param_1 + 0x450) = local_a8;
  *(uint *)(param_1 + 0x454) = uStack_a4;
  *(undefined4 *)(param_1 + 0x458) = uStack_a0;
  *(undefined4 *)(param_1 + 0x45c) = uStack_9c;
  if ((undefined4 *)(param_1 + 0x480) != &local_78) {
    if (local_58 == 0) {
      *(undefined4 *)(param_1 + 0x490) = local_68;
      *(undefined4 *)(param_1 + 0x494) = uStack_64;
      *(undefined4 *)(param_1 + 0x498) = uStack_60;
      *(undefined4 *)(param_1 + 0x49c) = uStack_5c;
      *(undefined4 *)(param_1 + 0x480) = local_78;
      *(undefined4 *)(param_1 + 0x484) = uStack_74;
      *(undefined4 *)(param_1 + 0x488) = uStack_70;
      *(undefined4 *)(param_1 + 0x48c) = uStack_6c;
    }
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x4a0) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x4a8) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x4ac) = local_50._4_4_;
    local_50 = 0x800000000;
  }
  if ((undefined4 *)(param_1 + 0x4b0) == &local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_38 == 0) {
      *(undefined4 *)(param_1 + 0x4b0) = local_48;
      *(undefined4 *)(param_1 + 0x4b4) = uStack_44;
      *(undefined4 *)(param_1 + 0x4b8) = uStack_40;
      *(undefined4 *)(param_1 + 0x4bc) = uStack_3c;
    }
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x4c0) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x4c8) = (undefined4)local_30;
    *(undefined4 *)(param_1 + 0x4cc) = local_30._4_4_;
    local_30 = 0x400000000;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(lVar2 + 0x159) != '\x01') goto LAB_1488b9590;
  *(undefined1 *)(param_1 + 0x470) = 0;
  lVar2 = FUN_144a7be76(param_1);
  if (lVar2 == 0) {
LAB_1488b954c:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1488b954c;
  }
  lVar2 = FUN_14492b4b4(lVar2);
  if (lVar2 != 0) {
    uStack_a4 = uStack_a4 & 0xffff0000;
    local_a8 = 0;
    cVar1 = FUN_140e8181a(lVar2,&local_a9);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x470) = (char)(1 << (local_a9 & 0x1f));
    }
  }
LAB_1488b9590:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b9616 FUN_1488b9616 body=2304 status=ok
// SIG undefined FUN_1488b9616(void)

undefined8 FUN_1488b9616(longlong param_1,void *param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined7 uVar14;
  double *pdVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_3d8 [32];
  double *local_3b8;
  float *local_3b0;
  char *local_3a8;
  undefined1 *local_3a0;
  float *local_398;
  undefined8 local_388;
  double dStack_380;
  double local_378;
  undefined4 local_2e4;
  undefined4 local_2b8;
  float local_27c;
  undefined1 local_278 [4];
  undefined4 local_274;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_1d4;
  undefined1 local_1cb;
  undefined4 local_1a8;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140 [27];
  char local_125;
  float local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  FUN_144a76660(param_1 + 0x430,&local_f0);
  lVar1 = param_1 + 0x418;
  local_120 = *(undefined8 *)(param_1 + 0x418);
  uStack_118 = *(undefined8 *)(param_1 + 0x420);
  dVar17 = *(double *)(param_1 + 0x428);
  fVar24 = *(float *)(param_1 + 0x4d4);
  fVar2 = *(float *)(param_1 + 0x4d8);
  dVar5 = (double)((fVar24 + fVar2) * 0.5);
  local_108 = (double)*(float *)(param_1 + 0x4d0);
  dVar6 = dVar17 - (double)((fVar2 - fVar24) * 0.5);
  local_3b0 = &local_124;
  local_124 = 0.0;
  local_3a8 = &local_125;
  local_125 = '\0';
  local_3a0 = local_140;
  local_3b8 = &local_158;
  local_110 = dVar6;
  local_100 = local_108;
  local_f8 = dVar5;
  cVar8 = FUN_1488b8c67(lVar1);
  if (cVar8 != '\0') {
    fVar24 = (float)((double)fVar24 + dVar17);
    local_168 = local_148;
    local_178 = local_158;
    dStack_170 = dStack_150;
    bVar9 = 1;
    if ((local_125 == '\x01') && (0.0 < *(float *)(param_1 + 0x4d4))) {
      fVar16 = *(float *)(param_1 + 0x4d4) + *(float *)(param_1 + 0x4d0);
      if (local_124 <= fVar16) {
        fVar16 = local_124;
      }
      dVar4 = (double)fVar16;
      local_168 = local_e0 * dVar4 + *(double *)(param_1 + 0x428);
      dStack_170 = local_e8 * dVar4 + *(double *)(param_1 + 0x420);
      local_178 = dVar4 * local_f0 + *(double *)(param_1 + 0x418);
      bVar9 = 0;
      memset(local_278,0,0x100);
      local_1a8 = 0xffffffff;
      local_274 = 0x3f800000;
      local_1d4 = 0xffffffff;
      uVar10 = FUN_1405f939e(param_1);
      local_3a8 = &DAT_14cad0f10;
      local_3b8 = (double *)CONCAT44(local_3b8._4_4_,*(undefined4 *)(param_1 + 0x44c));
      local_3b0 = (float *)(param_1 + 0x450);
      cVar8 = FUN_1400b50cc(uVar10,local_278,lVar1,&local_178);
      if (cVar8 != '\0') {
        if (local_240 <= (double)(fVar24 + -5.0)) {
          memcpy(param_2,local_278,0x100);
          bVar9 = 1;
        }
        else {
          local_240 = (double)fVar24;
          dVar4 = local_240 - *(double *)(param_1 + 0x428);
          dVar21 = local_248 - *(double *)(param_1 + 0x420);
          dVar19 = local_250 - *(double *)(param_1 + 0x418);
          dVar18 = dVar4 * dVar4 + dVar19 * dVar19 + dVar21 * dVar21;
          if (((dVar18 != 1.0) || (dVar20 = dVar19, dVar22 = dVar21, dVar7 = dVar4, NAN(dVar18))) &&
             (dVar20 = DAT_14c8464e0, dVar22 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar18)) {
            dVar18 = 1.0 / SQRT(dVar18);
            dVar20 = dVar19 * dVar18;
            dVar22 = dVar21 * dVar18;
            dVar7 = dVar4 * dVar18;
          }
          local_378 = dVar7 * 20.0 + local_240;
          dStack_380 = local_248 + dVar22 * 20.0;
          local_388 = local_250 + dVar20 * 20.0;
          uVar10 = FUN_1405f939e(param_1);
          local_3a8 = &DAT_14cad0f10;
          local_3b8 = (double *)CONCAT44(local_3b8._4_4_,*(undefined4 *)(param_1 + 0x44c));
          local_3b0 = (float *)(param_1 + 0x450);
          FUN_1400b50cc(uVar10,param_2,lVar1,&local_388);
          bVar9 = 0;
        }
      }
    }
    if ((*(byte *)((longlong)param_2 + 0xad) & 3) != 1) {
      uVar10 = FUN_1405f939e(param_1);
      local_3b0 = (float *)(param_1 + 0x450);
      local_3a8 = &DAT_14cad0f10;
      local_3b8 = (double *)CONCAT44(local_3b8._4_4_,*(undefined4 *)(param_1 + 0x44c));
      FUN_1400b50cc(uVar10,param_2,lVar1,&local_158);
    }
    if (*(char *)(lVar3 + 0x15a) == '\x01') {
      fVar16 = cosf(*(float *)(lVar3 + 0x15c) * 0.017453292);
      uVar23 = extraout_XMM0_Db;
    }
    else {
      fVar16 = -1.0;
      uVar23 = 0;
    }
    memset(local_278,0,0x100);
    puVar11 = &DAT_ffffffff;
    local_1a8 = 0xffffffff;
    local_274 = 0x3f800000;
    local_1d4 = 0xffffffff;
    local_27c = 3.4028235e+38;
    if (*(char *)(lVar3 + 0x168) == '\x01') {
      pdVar15 = &local_178;
      local_3b8 = &DAT_14c8464e0;
      if ((bool)(bVar9 & (*(byte *)((longlong)param_2 + 0xad) & 3) == 1)) {
        pdVar15 = (double *)((longlong)param_2 + 0x28);
        local_3b8 = (double *)((longlong)param_2 + 0x58);
      }
      local_398 = &local_27c;
      local_3a8 = (char *)CONCAT44(local_3a8._4_4_,fVar24);
      local_3b0 = (float *)CONCAT44(local_3b0._4_4_,fVar16);
      local_3a0 = local_278;
      uVar10 = FUN_1488b9f18(param_1,lVar1,&local_f0,pdVar15);
      uVar14 = (undefined7)((ulonglong)uVar10 >> 8);
      bVar9 = (byte)uVar10 ^ 1 | bVar9;
      puVar11 = (undefined1 *)CONCAT71(uVar14,bVar9);
      if (bVar9 == 0) {
        puVar11 = (undefined1 *)
                  (CONCAT71(uVar14,*(undefined1 *)((longlong)param_2 + 0xad)) & 0xffffffffffffff03);
        dVar18 = local_158;
        dVar19 = dStack_150;
        dVar4 = local_148;
        if ((char)puVar11 == '\x01') {
          dVar18 = *(double *)((longlong)param_2 + 0x28);
          dVar19 = *(double *)((longlong)param_2 + 0x30);
          dVar4 = *(double *)((longlong)param_2 + 0x38);
        }
        local_27c = (float)SQRT((dVar4 - local_240) * (dVar4 - local_240) +
                                (dVar18 - local_250) * (dVar18 - local_250) +
                                (dVar19 - local_248) * (dVar19 - local_248));
      }
    }
    if (((double)fVar16 <= *(double *)((longlong)param_2 + 0x68)) ||
       (*(char *)(lVar3 + 0x160) != '\x01')) {
      if ((*(char *)(lVar3 + 0x161) == '\x01') &&
         (puVar11 = (undefined1 *)
                    CONCAT71((int7)((ulonglong)puVar11 >> 8),*(byte *)((longlong)param_2 + 0xad)),
         (*(byte *)((longlong)param_2 + 0xad) & 3) != 1)) goto LAB_1488b9d6c;
    }
    else {
      puVar11 = (undefined1 *)(ulonglong)*(byte *)((longlong)param_2 + 0xad);
LAB_1488b9d6c:
      if (((byte)puVar11 & 3) == 1) {
        local_148 = *(double *)((longlong)param_2 + 0x68) * 10.0 +
                    *(double *)((longlong)param_2 + 0x38);
        dStack_150 = *(double *)((longlong)param_2 + 0x60) * 10.0 +
                     *(double *)((longlong)param_2 + 0x30);
        local_158 = *(double *)((longlong)param_2 + 0x58) * 10.0 +
                    *(double *)((longlong)param_2 + 0x28);
      }
      memset(&local_388,0,0x100);
      local_2b8 = 0xffffffff;
      local_388 = (double)CONCAT44(0x3f800000,(float)local_388);
      local_2e4 = 0xffffffff;
      local_3a8 = (char *)&local_d8;
      local_d8 = CONCAT44(local_d8._4_4_,0x7f7fffff);
      local_3b8 = (double *)CONCAT71(local_3b8._1_7_,*(undefined1 *)(lVar3 + 0x162));
      local_3b0 = (float *)&local_388;
      puVar11 = (undefined1 *)
                FUN_1488ba354(param_1,&local_158,(float)(dVar6 - dVar5),CONCAT44(uVar23,fVar16));
      if (((char)puVar11 != '\0') &&
         ((puVar11 = (undefined1 *)
                     (CONCAT71((int7)((ulonglong)puVar11 >> 8),local_1cb) & 0xffffffffffffff03),
          (char)puVar11 != '\x01' || ((float)local_d8 < local_27c)))) {
        puVar11 = memcpy(local_278,&local_388,0x100);
      }
    }
    uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),local_1cb) & 0xffffffffffffff03;
    if ((char)uVar12 == '\x01') {
      pvVar13 = memcpy(param_2,local_278,0x100);
      uVar12 = CONCAT71((int7)((ulonglong)pvVar13 >> 8),*(undefined1 *)((longlong)param_2 + 0xad));
    }
    else {
      uVar12 = CONCAT71((int7)(uVar12 >> 8),*(byte *)((longlong)param_2 + 0xad));
      if ((*(byte *)((longlong)param_2 + 0xad) & 3) == 1) {
        dVar5 = *(double *)((longlong)param_2 + 0x38);
        if (((double)fVar24 < dVar5) || (dVar5 < (double)(float)(dVar17 - (double)fVar2))) {
          local_378 = *(double *)((longlong)param_2 + 0x80);
          local_388 = *(double *)((longlong)param_2 + 0x70);
          dStack_380 = *(double *)((longlong)param_2 + 0x78);
          local_c8 = *(undefined8 *)((longlong)param_2 + 0x98);
          local_d8 = *(undefined8 *)((longlong)param_2 + 0x88);
          uStack_d0 = *(undefined8 *)((longlong)param_2 + 0x90);
          memset(param_2,0,0x100);
          *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
          *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
          *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
          *(double *)((longlong)param_2 + 0x80) = local_378;
          *(double *)((longlong)param_2 + 0x70) = local_388;
          *(double *)((longlong)param_2 + 0x78) = dStack_380;
          *(undefined8 *)((longlong)param_2 + 0x98) = local_c8;
          *(float *)((longlong)param_2 + 0x88) = (float)local_d8;
          *(undefined4 *)((longlong)param_2 + 0x8c) = local_d8._4_4_;
          *(undefined4 *)((longlong)param_2 + 0x90) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)param_2 + 0x94) = uStack_d0._4_4_;
          goto LAB_1488b9c45;
        }
        dVar17 = (double)*(float *)(param_1 + 0x448);
        *(double *)((longlong)param_2 + 0x28) =
             dVar17 * *(double *)((longlong)param_2 + 0x58) + *(double *)((longlong)param_2 + 0x28);
        *(double *)((longlong)param_2 + 0x30) =
             *(double *)((longlong)param_2 + 0x60) * dVar17 + *(double *)((longlong)param_2 + 0x30);
        *(double *)((longlong)param_2 + 0x38) =
             dVar5 + *(double *)((longlong)param_2 + 0x68) * dVar17;
      }
    }
    if (((char)(uVar12 & 0xffffffffffffff03) == '\x01') &&
       ((double)fVar16 <= *(double *)((longlong)param_2 + 0x68))) {
      uVar10 = CONCAT71((int7)((uVar12 & 0xffffffffffffff03) >> 8),1);
      goto LAB_1488b9c47;
    }
  }
LAB_1488b9c45:
  uVar10 = 0;
LAB_1488b9c47:
  if ((local_c0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b9f18 FUN_1488b9f18 body=1083 status=ok
// SIG undefined FUN_1488b9f18(void)

undefined8
FUN_1488b9f18(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4,double *param_5
             ,float param_6,undefined4 param_7,undefined1 *param_8,float *param_9)

{
  float fVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_268 [32];
  float local_248;
  longlong local_240;
  undefined1 *local_238;
  double *local_230;
  undefined1 local_228 [4];
  undefined4 local_224;
  undefined1 local_200 [48];
  undefined1 local_1d0 [16];
  double local_1c0;
  undefined4 local_184;
  undefined4 local_158;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  dVar2 = param_5[2];
  if (((((*param_5 != 0.0) || (NAN(*param_5))) || (param_5[1] != 0.0)) ||
      ((NAN(param_5[1]) || (dVar2 != 0.0)))) || (NAN(dVar2))) {
    if (dVar2 < (double)param_6) {
      local_238 = param_8;
      local_240 = CONCAT44(local_240._4_4_,param_7);
      local_248 = param_6;
      cVar3 = FUN_1488bae5c(param_1,param_3,param_4);
      if (cVar3 != '\0') {
        *param_9 = (float)SQRT((*(double *)(param_8 + 0x38) - param_4[2]) *
                               (*(double *)(param_8 + 0x38) - param_4[2]) +
                               (*(double *)(param_8 + 0x28) - *param_4) *
                               (*(double *)(param_8 + 0x28) - *param_4) +
                               (*(double *)(param_8 + 0x30) - param_4[1]) *
                               (*(double *)(param_8 + 0x30) - param_4[1]));
LAB_1488ba34d:
        uVar4 = 1;
        goto LAB_1488ba275;
      }
      goto LAB_1488b9ff5;
    }
  }
  else {
LAB_1488b9ff5:
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x17c);
    fVar8 = 0.0;
    if (0.0 < fVar1) {
      fVar9 = fVar1 / 15.0;
      if (fVar9 <= 0.5) {
        fVar9 = 0.5;
      }
      dVar2 = param_4[2] - *(double *)(param_1 + 0x428);
      dVar7 = param_4[1] - *(double *)(param_1 + 0x420);
      dVar6 = *param_4 - *(double *)(param_1 + 0x418);
      local_230 = param_4;
      FUN_144a79a9c(param_3,&local_d8);
      dVar2 = (double)(float)SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7);
      do {
        fVar8 = fVar8 + fVar9;
        uStack_f0 = uStack_d0;
        local_e8 = local_c8;
        fVar5 = fVar8;
        if (fVar1 <= fVar8) {
          fVar5 = fVar1;
        }
        local_f8 = local_d8 - (double)fVar5;
        FUN_144a76660(&local_f8);
        local_118 = local_100 * dVar2 + *(double *)(param_1 + 0x428);
        local_120 = local_108 * dVar2 + *(double *)(param_1 + 0x420);
        local_128 = local_110 * dVar2 + *(double *)(param_1 + 0x418);
        memset(local_228,0,0x100);
        local_158 = 0xffffffff;
        local_224 = 0x3f800000;
        local_184 = 0xffffffff;
        uVar4 = FUN_1405f939e(param_1);
        local_248 = *(float *)(param_1 + 0x44c);
        local_238 = &DAT_14cad0f10;
        local_240 = param_1 + 0x450;
        cVar3 = FUN_1400b50cc(uVar4,local_228,param_2,&local_128);
        if ((cVar3 != '\0') && (local_1c0 < (double)param_6)) {
          local_238 = param_8;
          local_240 = CONCAT44(local_240._4_4_,param_7);
          local_248 = param_6;
          cVar3 = FUN_1488bae5c(param_1,&local_110,local_200,local_1d0);
          if (cVar3 != '\0') {
            *param_9 = (float)SQRT((*(double *)(param_8 + 0x38) - local_230[2]) *
                                   (*(double *)(param_8 + 0x38) - local_230[2]) +
                                   (*(double *)(param_8 + 0x28) - *local_230) *
                                   (*(double *)(param_8 + 0x28) - *local_230) +
                                   (*(double *)(param_8 + 0x30) - local_230[1]) *
                                   (*(double *)(param_8 + 0x30) - local_230[1]));
            goto LAB_1488ba34d;
          }
        }
      } while (fVar8 < fVar1);
    }
  }
  uVar4 = 0;
LAB_1488ba275:
  if ((local_c0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1488ba354 FUN_1488ba354 body=2377 status=ok
// SIG undefined FUN_1488ba354(void)

undefined8
FUN_1488ba354(longlong param_1,double *param_2,float param_3,float param_4,char param_5,
             void *param_6,float *param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  longlong local_3b0;
  undefined1 *local_3a8;
  double *local_398;
  longlong local_390;
  longlong local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  double local_350;
  double local_340;
  double local_338;
  double local_330;
  undefined4 local_2c4;
  undefined4 local_298;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_208 [4];
  undefined4 local_204;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined4 local_164;
  byte local_15b;
  undefined4 local_138;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  memset(local_208,0,0x100);
  local_218 = param_2[2];
  local_228 = *param_2;
  dStack_220 = param_2[1];
  local_388 = *(longlong *)(param_1 + 0x48);
  dVar2 = (double)param_3;
  lVar1 = param_1 + 0x450;
  local_390 = param_1 + 0x418;
  iVar9 = 0;
  local_398 = param_2;
  do {
    local_248 = local_228;
    dStack_240 = dStack_220;
    local_358 = local_188;
    local_368 = local_198;
    uStack_360 = uStack_190;
    local_f8 = local_170;
    local_108 = local_180;
    dStack_100 = dStack_178;
    local_238 = dVar2;
    memset(local_208,0,0x100);
    local_138 = 0xffffffff;
    local_164 = 0xffffffff;
    local_204 = 0x3f800000;
    local_188 = local_358;
    local_198 = local_368;
    uStack_190 = uStack_360;
    local_170 = local_f8;
    local_180 = local_108;
    dStack_178 = dStack_100;
    uVar7 = FUN_1405f939e(param_1);
    local_3b8 = *(undefined4 *)(param_1 + 0x44c);
    local_3a8 = &DAT_14cad0f10;
    local_3b0 = lVar1;
    FUN_1400b50cc(uVar7,local_208,&local_228,&local_248);
    if ((local_15b & 3) == 1) {
      iVar8 = 3;
      do {
        dVar11 = local_1a0;
        dVar14 = local_1a8;
        dVar12 = local_1b0;
        if (((double)param_4 <= local_1a0) || (local_1d0 < 9.999999747378752e-05)) break;
        local_f8 = local_1a0 * 10.0 + local_1e8;
        dStack_100 = local_1a8 * 10.0 + dStack_1f0;
        local_108 = local_1b0 * 10.0 + local_1f8;
        dVar13 = DAT_14c8463b8 * local_1a8 - local_1b0 * DAT_14c8463c0;
        dVar16 = DAT_14c8463c8 * local_1b0 - local_1a0 * DAT_14c8463b8;
        dVar17 = DAT_14c8463c0 * local_1a0 - DAT_14c8463c8 * local_1a8;
        dVar15 = dVar13 * dVar13 + dVar17 * dVar17 + dVar16 * dVar16;
        if (((dVar15 != 1.0) || (dVar3 = dVar13, dVar4 = dVar16, dVar5 = dVar17, NAN(dVar15))) &&
           (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar15)) {
          dVar15 = 1.0 / SQRT(dVar15);
          dVar3 = dVar13 * dVar15;
          dVar4 = dVar16 * dVar15;
          dVar5 = dVar17 * dVar15;
        }
        if (dVar2 < local_f8) {
          fVar18 = (float)(local_f8 - dVar2);
        }
        else {
          fVar18 = 200.0;
        }
        if (local_1a0 < 0.9998477101325989) {
          dVar13 = local_1a0;
          if (1.0 <= local_1a0) {
            dVar13 = 1.0;
          }
          dVar13 = acos((double)(~-(ulonglong)(local_1a0 < -1.0) & (ulonglong)dVar13 |
                                (ulonglong)
                                ((uint)(-(ulonglong)(local_1a0 < -1.0) >> 0x20) & 0xbff00000) <<
                                0x20));
          fVar10 = atanf((float)dVar13);
          fVar18 = fVar18 / fVar10;
          if (200.0 <= fVar18) {
            fVar18 = 200.0;
          }
          fVar18 = (float)((double)fVar18 / local_1a0);
        }
        dVar13 = (double)fVar18;
        local_250 = (dVar5 * dVar14 - dVar12 * dVar4) * dVar13 + local_f8;
        local_258 = (dVar3 * dVar12 - dVar11 * dVar5) * dVar13 + dStack_100;
        local_260 = (dVar4 * dVar11 - dVar14 * dVar3) * dVar13 + local_108;
        local_368 = 0;
        uStack_360 = 0;
        local_358 = 0x3ff0000000000000;
        local_350 = dVar2;
        FUN_1467f7ca0(&local_108,&local_260,&local_368,&local_260);
        memset(&local_368,0,0x100);
        local_298 = 0xffffffff;
        local_368 = CONCAT44(0x3f800000,(undefined4)local_368);
        local_2c4 = 0xffffffff;
        uVar7 = FUN_1405f939e(param_1);
        local_3b8 = *(undefined4 *)(param_1 + 0x44c);
        local_3a8 = &DAT_14cad0f10;
        local_3b0 = lVar1;
        cVar6 = FUN_1400b50cc(uVar7,&local_368,&local_108,&local_260);
        if (cVar6 == '\0') {
          local_380 = local_108;
          dStack_378 = dStack_100;
          local_370 = local_250;
          if ((local_260 == local_108) && (!NAN(local_260) && !NAN(local_108))) {
            if ((local_258 == dStack_100) &&
               ((!NAN(local_258) && !NAN(dStack_100) && (!NAN(local_250))))) break;
          }
          uVar7 = FUN_1405f939e(param_1);
          local_3b8 = *(undefined4 *)(param_1 + 0x44c);
          local_3a8 = &DAT_14cad0f10;
          local_3b0 = lVar1;
          cVar6 = FUN_1400b50cc(uVar7,&local_368,&local_260,&local_380);
          if (cVar6 == '\0') {
            local_1d0 = local_370;
            local_1e0 = local_380;
            dStack_1d8 = dStack_378;
            local_1e8 = local_370;
            local_1f8 = local_380;
            dStack_1f0 = dStack_378;
          }
          else {
            memcpy(local_208,&local_368,0x100);
          }
          break;
        }
        memcpy(local_208,&local_368,0x100);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      dVar12 = local_1e8;
      if (param_5 != '\0') {
        dVar14 = dStack_1f0 + 0.0;
        dVar11 = local_1f8 + 0.0;
        memset(&local_368,0,0x100);
        local_298 = 0xffffffff;
        local_368 = CONCAT44(0x3f800000,(undefined4)local_368);
        local_2c4 = 0xffffffff;
        local_f8 = (double)*(float *)(local_388 + 0x164) + dVar12;
        local_108 = dVar11;
        dStack_100 = dVar14;
        uVar7 = FUN_1405f939e(param_1);
        local_3b8 = *(undefined4 *)(param_1 + 0x44c);
        local_3a8 = &DAT_14cad0f10;
        local_3b0 = lVar1;
        cVar6 = FUN_1400b50cc(uVar7,&local_368,local_390,&local_108);
        if ((cVar6 != '\0') &&
           (dVar11 = local_330 - *(double *)(param_1 + 0x428),
           dVar16 = local_338 - *(double *)(param_1 + 0x420),
           dVar12 = local_340 - *(double *)(param_1 + 0x418),
           dVar14 = local_f8 - *(double *)(param_1 + 0x428),
           dVar17 = dStack_100 - *(double *)(param_1 + 0x420),
           dVar13 = local_108 - *(double *)(param_1 + 0x418),
           dVar11 * dVar11 + dVar12 * dVar12 + dVar16 * dVar16 <
           dVar14 * dVar14 + dVar13 * dVar13 + dVar17 * dVar17)) {
          memcpy(local_208,&local_368,0x100);
        }
      }
    }
    if ((local_15b & 3) != 1) break;
    if ((double)param_4 <= local_1a0) {
      memcpy(param_6,local_208,0x100);
      dVar12 = *(double *)((longlong)param_6 + 0x38) - local_398[2];
      dVar2 = *(double *)((longlong)param_6 + 0x30) - local_398[1];
      dVar14 = *(double *)((longlong)param_6 + 0x28) - *local_398;
      *param_7 = (float)SQRT(dVar12 * dVar12 + dVar14 * dVar14 + dVar2 * dVar2);
      uVar7 = 1;
      goto LAB_1488baba9;
    }
    local_218 = local_1a0 * 10.0 + local_1d0;
    dStack_220 = local_1a8 * 10.0 + dStack_1d8;
    local_228 = local_1b0 * 10.0 + local_1e0;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 3);
  uVar7 = 0;
LAB_1488baba9:
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1488baca4 FUN_1488baca4 body=438 status=ok
// SIG undefined FUN_1488baca4(void)

void FUN_1488baca4(longlong *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined4 local_dc;
  undefined4 local_b0;
  undefined1 local_80 [56];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  memset(local_180,0,0x100);
  local_b0 = 0xffffffff;
  local_17c = 0x3f800000;
  local_dc = 0xffffffff;
  cVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (cVar3 != '\0') {
    local_30 = (ushort)DAT_14c9aa130;
    if (local_30 < 0x19) {
      pppuVar4 = local_48;
    }
    else {
      pppuVar4 = (undefined8 ***)FUN_14001cc68(DAT_14c9aa130 & 0xffff);
      local_48[0] = pppuVar4;
    }
    if (DAT_14c9aa1c8 == (code *)0x0) {
      memset(pppuVar4,0,(longlong)(int)DAT_14c9aa130);
    }
    else {
      (*DAT_14c9aa1c8)();
    }
    local_28 = 0x19;
    memcpy(local_48[0],local_180,0x100);
    FUN_141814da4(local_80,local_48,0);
    iVar1 = *(int *)(param_2 + 0x388);
    *(uint *)(param_2 + 0x388) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
      FUN_14052e0a0(param_2,iVar1);
    }
    lVar5 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar5 = param_2;
    }
    FUN_1410930e6((longlong)iVar1 * 0x38 + lVar5,local_80);
    FUN_143d90102(local_80);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar4 = local_48;
      if (0x18 < local_30) {
        pppuVar4 = (undefined8 ***)local_48[0];
      }
      (*pcVar2)(pppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bae5c FUN_1488bae5c body=1792 status=ok
// SIG undefined FUN_1488bae5c(void)

undefined8
FUN_1488bae5c(longlong param_1,double *param_2,double *param_3,double *param_4,float param_5,
             float param_6,void *param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  longlong local_270;
  undefined1 *local_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined1 local_228 [4];
  float local_224;
  double local_208;
  double local_1d8;
  undefined4 local_184;
  byte local_17b;
  undefined4 local_158;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (-0.9848077297210693 < param_4[2] || param_4[2] == -0.9848077297210693) {
    FUN_1405f939e();
    dVar2 = *param_4;
    dVar3 = param_4[1];
    dVar5 = dVar2 * dVar2 + dVar3 * dVar3;
    uVar15 = (undefined4)DAT_14c8464f0;
    uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      uVar17 = uVar15;
      uVar18 = uVar16;
      dVar7 = DAT_14c8464e8;
      dVar8 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar5) {
        uVar17 = 0;
        uVar18 = 0;
        dVar7 = dVar3 * (1.0 / SQRT(dVar5));
        dVar8 = dVar2 * (1.0 / SQRT(dVar5));
      }
    }
    else {
      uVar6 = -(ulonglong)(param_4[2] == 0.0) & (ulonglong)param_4[2];
      uVar17 = (int)uVar6;
      uVar18 = (int)(uVar6 >> 0x20);
      dVar7 = dVar3;
      dVar8 = dVar2;
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar5 = dVar2 * dVar2 + dVar3 * dVar3;
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      dVar13 = DAT_14c8464e0;
      dVar9 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar5) {
        uVar15 = 0;
        uVar16 = 0;
        dVar13 = dVar2 * (1.0 / SQRT(dVar5));
        dVar9 = dVar3 * (1.0 / SQRT(dVar5));
      }
    }
    else {
      uVar6 = -(ulonglong)(param_2[2] == 0.0) & (ulonglong)param_2[2];
      uVar15 = (undefined4)uVar6;
      uVar16 = (undefined4)(uVar6 >> 0x20);
      dVar13 = dVar2;
      dVar9 = dVar3;
    }
    dVar3 = (double)CONCAT44(uVar18,uVar17) * 4.0 + param_3[2];
    dVar2 = dVar7 * 4.0 + param_3[1];
    dVar5 = dVar8 * 4.0 + *param_3;
    fVar19 = *(float *)(lVar4 + 0x174);
    fVar20 = 0.0;
    local_108 = dVar5;
    dStack_100 = dVar2;
    local_f8 = dVar3;
    if (0.0 < fVar19) {
      fVar14 = 15.0;
      if (fVar19 <= 15.0) {
        fVar14 = fVar19;
      }
      lVar1 = param_1 + 0x450;
      local_260 = dVar13;
      do {
        local_128 = local_108;
        dStack_120 = dStack_100;
        local_118 = (double)*(float *)(lVar4 + 0x16c) + local_f8;
        memset(local_228,0,0x100);
        local_158 = 0xffffffff;
        local_184 = 0xffffffff;
        local_224 = 1.0;
        uVar11 = FUN_1405f939e(param_1);
        local_278 = *(undefined4 *)(param_1 + 0x44c);
        local_268 = &DAT_14cad0f10;
        local_270 = lVar1;
        cVar10 = FUN_1400b50cc(uVar11,local_228,&local_108,&local_128);
        if (cVar10 == '\0') {
          if (*(float *)(lVar4 + 0x174) <= fVar20) {
            fVar20 = *(float *)(lVar4 + 0x174);
          }
          fVar19 = *(float *)(lVar4 + 0x170);
          if (*(float *)(lVar4 + 0x170) <= *(float *)(lVar4 + 0x178)) {
            fVar19 = *(float *)(lVar4 + 0x178);
          }
          dVar2 = (double)(fVar20 + fVar19);
          local_230 = (double)CONCAT44(uVar16,uVar15) * dVar2 + local_118;
          dStack_238 = dVar9 * dVar2 + dStack_120;
          local_240 = dVar2 * local_260 + local_128;
          memset(local_228,0,0x100);
          local_158 = 0xffffffff;
          local_224 = 1.0;
          local_184 = 0xffffffff;
          uVar11 = FUN_1405f939e(param_1);
          local_278 = *(undefined4 *)(param_1 + 0x44c);
          local_268 = &DAT_14cad0f10;
          local_270 = lVar1;
          cVar10 = FUN_1400b50cc(uVar11,local_228,&local_128,&local_240);
          if ((cVar10 != '\0') &&
             ((local_1d8 < (double)param_5 ||
              ((fVar20 + fVar19) * local_224 < *(float *)(lVar4 + 0x178) + fVar20)))) break;
          local_248 = local_230 - (double)(*(float *)(lVar4 + 0x16c) + 60.0);
          local_258 = local_240;
          dStack_250 = dStack_238;
          local_224 = 1.0;
          if (cVar10 == '\0') {
            uVar11 = FUN_1405f939e(param_1);
            local_278 = *(undefined4 *)(param_1 + 0x44c);
            local_268 = &DAT_14cad0f10;
            local_270 = lVar1;
            cVar10 = FUN_1400b50cc(uVar11,local_228,&local_240,&local_258);
            if ((cVar10 == '\0') || (local_1d8 < (double)param_5)) break;
          }
          fVar14 = *(float *)(lVar4 + 0x178);
          if ((fVar14 != fVar19) || (NAN(fVar14) || NAN(fVar19))) {
            dVar2 = (double)(fVar20 + fVar14);
            local_230 = (double)CONCAT44(uVar16,uVar15) * dVar2 + local_118;
            dStack_250 = dVar9 * dVar2 + dStack_120;
            local_258 = local_260 * dVar2 + local_128;
            local_248 = local_230 - (double)(*(float *)(lVar4 + 0x16c) + 60.0);
            local_224 = 1.0;
            local_240 = local_258;
            dStack_238 = dStack_250;
            uVar11 = FUN_1405f939e(param_1);
            local_278 = *(undefined4 *)(param_1 + 0x44c);
            local_268 = &DAT_14cad0f10;
            local_270 = lVar1;
            FUN_1400b50cc(uVar11,local_228,&local_240,&local_258);
          }
          if ((((local_17b & 3) == 1) && ((double)param_5 <= local_1d8)) &&
             (local_208 <= (double)param_6)) {
            memcpy(param_7,local_228,0x100);
            uVar11 = 1;
            goto LAB_1488baef7;
          }
          break;
        }
        fVar20 = fVar20 + fVar14;
        fVar19 = *(float *)(lVar4 + 0x174);
        fVar12 = fVar20;
        if (fVar19 <= fVar20) {
          fVar12 = fVar19;
        }
        dVar13 = (double)fVar12;
        local_f8 = (double)CONCAT44(uVar18,uVar17) * dVar13 + dVar3;
        dStack_100 = dVar7 * dVar13 + dVar2;
        local_108 = dVar13 * dVar8 + dVar5;
      } while (fVar20 < fVar19);
    }
  }
  uVar11 = 0;
LAB_1488baef7:
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1488bb564 FUN_1488bb564 body=38 status=ok
// SIG undefined FUN_1488bb564(void)

void FUN_1488bb564(longlong param_1,undefined8 param_2)

{
  FUN_140f5d36e();
  FUN_140aa1618(param_1 + 0x80,param_2);
  return;
}



// FUNCTION 1488bb58a FUN_1488bb58a body=63 status=ok
// SIG undefined FUN_1488bb58a(void)

void FUN_1488bb58a(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_1406ff33a();
  uVar1 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x80,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_1488bb5ca(param_1);
  return;
}



// FUNCTION 1488bb5ca FUN_1488bb5ca body=318 status=ok
// SIG undefined FUN_1488bb5ca(void)

void FUN_1488bb5ca(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_144a7be76();
  lVar5 = FUN_144860cdc(uVar4);
  if (lVar5 != 0) {
    plVar1 = (longlong *)(lVar5 + 0x50);
    lVar8 = lVar5 + 0x60;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar8;
    if (*(int *)(lVar5 + 0x78) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = *(int *)(lVar5 + 0x78);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar4 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar4, uStack_48 != lVar8)) {
      do {
        local_60 = uVar4;
        pfVar6 = (float *)FUN_143890da4(*local_78 + (longlong)iVar3 * 0x2b0 + 8,2);
        if ((*pfVar6 <= 3.4028235e+38 && *pfVar6 != 3.4028235e+38) &&
           (fVar2 = pfVar6[5],
           *(float *)(param_1 + 100) <= fVar2 && fVar2 != *(float *)(param_1 + 100))) {
          *(float *)(param_1 + 100) = fVar2;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar8 || local_60._4_4_ != iVar7));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bb70a FUN_1488bb70a body=484 status=ok
// SIG undefined FUN_1488bb70a(void)

void FUN_1488bb70a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong lStack_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_144a7be76();
  lVar4 = FUN_144860cdc(uVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
  }
  local_77 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
  local_7c = *(undefined4 *)(param_1 + 0x58);
  lVar1 = *param_2;
  lStack_90 = param_2[1];
  local_84 = 0x3f80000000000000;
  local_78 = 0;
  uVar2 = (uint)lStack_90;
  uVar7 = 0;
  local_98 = lVar1;
  if ((uint)lStack_90 == 0) {
LAB_1488bb7b6:
    local_88 = uVar7;
    if (uVar7 < (uint)lStack_90) {
      do {
        uVar7 = local_88;
        uVar3 = FUN_14030a32e((longlong)(int)local_88 * 0x38 + lVar1);
        pfVar5 = (float *)FUN_1400b9668(lVar4,2,uVar3);
        fVar8 = -1.0;
        if (pfVar5 != (float *)0x0) {
          fVar8 = *(float *)(param_1 + 100);
          if ((fVar8 == 0.0) && (!NAN(fVar8))) {
            FUN_14023b10e(&local_98,0x3f800000);
            fVar8 = *(float *)(param_1 + 100);
          }
          fVar8 = pfVar5[5] / fVar8;
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          fVar8 = fVar8 - *pfVar5 * *(float *)(param_1 + 0x60);
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
        }
        FUN_14023b10e(&local_98,fVar8);
        local_88 = uVar7 + 1;
        if ((local_88 < uVar2) &&
           ((*(byte *)(lVar1 + 0x34 + (longlong)(int)local_88 * 0x38) & 1) != 0)) {
          uVar7 = uVar7 + 2;
          do {
            local_88 = uVar2;
            if (uVar2 == uVar7) break;
            lVar6 = (longlong)(int)uVar7;
            local_88 = uVar7;
            uVar7 = uVar7 + 1;
          } while ((*(byte *)(lVar1 + 0x34 + lVar6 * 0x38) & 1) != 0);
        }
      } while (local_88 < uVar2);
    }
  }
  else {
    do {
      if ((*(byte *)(lVar1 + 0x34 + (longlong)(int)uVar7 * 0x38) & 1) == 0) goto LAB_1488bb7b6;
      uVar7 = uVar7 + 1;
    } while ((uint)lStack_90 != uVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bb920 FUN_1488bb920 body=66 status=ok
// SIG undefined FUN_1488bb920(void)

bool FUN_1488bb920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_140fecf64(param_3);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_1405d5f74(param_4);
    *(undefined4 *)(lVar3 + 0x5cc) = uVar1;
  }
  return plVar2 != (longlong *)0x0;
}



// FUNCTION 1488bb962 FUN_1488bb962 body=35 status=ok
// SIG undefined FUN_1488bb962(void)

void FUN_1488bb962(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong ****pppplVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *****ppppplVar12;
  int iVar13;
  longlong *****ppppplVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [8];
  longlong *plStack_a8;
  int iStack_a0;
  longlong ****pppplStack_90;
  undefined4 uStack_80;
  longlong ****pppplStack_78;
  undefined8 uStack_70;
  ushort uStack_60;
  byte bStack_58;
  ulonglong uStack_50;
  
  if (*(char *)(param_1 + 0x2b0) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x2b0) = param_2;
  if (param_2 == '\0') {
    FUN_140ebf9e6(param_1 + 0x380);
    return;
  }
  uStack_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pppplStack_78 = *(longlong *****)(param_1 + 0x2b8);
  FUN_1446dcdd4(&plStack_a8);
  if (DAT_14cb818c8 != 0) {
    lVar9 = FUN_144815d88(DAT_14cb818c8,&plStack_a8);
    if ((longlong *****)pppplStack_90 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if (lVar9 == 0) goto LAB_140e3fce2;
    lVar15 = param_1 + 0x380;
    FUN_140e41048(lVar15,lVar9);
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
      if (lVar9 == 0) goto LAB_140e3fce2;
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
    }
    bVar2 = *(byte *)(lVar9 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140e3fce2;
    FUN_140e40572(lVar15,0);
    if (*(char *)(param_1 + 0x2e0) == '\x01') {
      plStack_a8 = (longlong *)((ulonglong)plStack_a8 & 0xffffffffffffff00);
      uStack_80 = 0;
      FUN_1456bb102(&plStack_a8,*(undefined8 *)(param_1 + 0xa8));
      FUN_1448729ea(param_1 + 0x2e8,&pppplStack_78);
      fVar17 = (float)FUN_144a7b41a(&pppplStack_78,0xbf800000);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppplVar12 = &pppplStack_78;
        if (0x18 < uStack_60) {
          ppppplVar12 = (longlong *****)pppplStack_78;
        }
        (*pcVar5)(ppppplVar12);
      }
      if (0x18 < uStack_60) {
        FUN_1400020a8(pppplStack_78);
      }
      FUN_144a5ac3a(&plStack_a8);
      if (0.0 <= fVar17) {
        *(float *)(param_1 + 0x96c) = fVar17;
      }
    }
    lVar9 = FUN_140e40dfb();
    pppplStack_78 = (longlong ****)0x0;
    uStack_70 = 0;
    FUN_140e40420(*(undefined8 *)(param_1 + 0xa8),&pppplStack_78);
    if ((longlong)(int)uStack_70 != 0) {
      ppppplVar12 = (longlong *****)(pppplStack_78 + (int)uStack_70);
      ppppplVar14 = (longlong *****)pppplStack_78;
      do {
        pppplVar3 = *ppppplVar14;
        cVar6 = *(char *)(param_1 + 0x338);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) {
LAB_140e3f9ad:
            FUN_140e40132(lVar15,pppplVar3);
          }
        }
        else if (cVar6 == '\x01') {
          if ((longlong)*(int *)(param_1 + 0x348) != 0) {
            lVar10 = 0;
            do {
              if (*(longlong ****)(*(longlong *)(param_1 + 0x340) + lVar10) == pppplVar3[3])
              goto LAB_140e3f9ad;
              lVar10 = lVar10 + 8;
            } while ((longlong)*(int *)(param_1 + 0x348) * 8 != lVar10);
          }
        }
        else if (cVar6 == '\x03') goto LAB_140e3f9ad;
        cVar6 = *(char *)(param_1 + 0x350);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) goto LAB_140e3ff0e;
        }
        else if (cVar6 == '\x03') {
LAB_140e3ff0e:
          FUN_140f41cc4(lVar15,pppplVar3);
        }
        else if ((cVar6 == '\x01') && ((longlong)*(int *)(param_1 + 0x360) != 0)) {
          lVar10 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(param_1 + 0x358) + lVar10) == pppplVar3[3])
            goto LAB_140e3ff0e;
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(param_1 + 0x360) * 8 != lVar10);
        }
        if ((longlong)*(int *)(param_1 + 0x370) != 0) {
          lVar10 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(param_1 + 0x368) + lVar10) == pppplVar3[3]) {
              FUN_140f41c18(lVar15,pppplVar3);
              break;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(param_1 + 0x370) * 8 != lVar10);
        }
        ppppplVar14 = ppppplVar14 + 1;
      } while (ppppplVar14 != ppppplVar12);
    }
    plStack_a8 = (longlong *)0x0;
    iStack_a0 = 0;
    FUN_1446efa72(&plStack_a8,0,3,0x10);
    plVar1 = plStack_a8;
    iStack_a0 = 3;
    *plStack_a8 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    plStack_a8[2] = lVar10;
    *plStack_a8 = (longlong)&PTR_FUN_14b40fcb0;
    plStack_a8[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      *(uint *)(plStack_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar11 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar11 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar11 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar11 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar11;
    plVar1[4] = (longlong)FUN_140fa3e9e;
    *(undefined4 *)(plVar1 + 5) = 0;
    FUN_1448b6402(lVar15,auStack_b0,&plStack_a8);
    if (iStack_a0 == 0) {
LAB_140e3fb13:
      if (plStack_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (plStack_a8 != (longlong *)0x0) {
      (**(code **)*plStack_a8)(plStack_a8,0);
      FUN_1446efa72(&plStack_a8,0,0,0x10);
      iStack_a0 = 0;
      goto LAB_140e3fb13;
    }
    FUN_140e401f0(lVar15);
    FUN_140e400c2(lVar15);
    lVar9 = *(longlong *)(param_1 + 0xa8);
    plStack_a8 = (longlong *)0x0;
    iStack_a0 = 0;
    FUN_1446efa72(&plStack_a8,0,3,0x10);
    plVar1 = plStack_a8;
    iStack_a0 = 3;
    *plStack_a8 = (longlong)&PTR_LAB_14a915ec0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    plStack_a8[2] = lVar10;
    *plStack_a8 = (longlong)&PTR_FUN_14b40fd20;
    plStack_a8[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      *(uint *)(plStack_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar11 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar11 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar11 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar8;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar11 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar11;
    plVar1[4] = (longlong)FUN_1488bba2a;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (((iStack_a0 == 0) || (plStack_a8 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*plStack_a8 + 0x30))(), cVar6 == '\0')) {
      if (iStack_a0 != 0) {
        pppplStack_90 = pppplStack_78;
        if (plStack_a8 == (longlong *)0x0) goto LAB_140e3fcd8;
        (**(code **)*plStack_a8)(plStack_a8,0);
        FUN_1446efa72(&plStack_a8,0,0,0x10);
        goto LAB_140e3fcbd;
      }
    }
    else {
      plVar1 = (longlong *)(lVar9 + 0x300);
      if (*(int *)(lVar9 + 0x314) < 1) {
        iVar11 = *(int *)(lVar9 + 0x308);
        iVar8 = *(int *)(lVar9 + 0x310) + -1;
        *(int *)(lVar9 + 0x310) = iVar8;
        if (iVar8 <= iVar11) {
          iVar8 = iVar11;
          if (0 < iVar11) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar13 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar1,iVar13);
                FUN_14005b248(plVar1);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar8 = *(int *)(lVar9 + 0x308);
            } while (iVar13 < iVar8);
          }
          iVar13 = 2;
          if (2 < iVar8 * 2) {
            iVar13 = iVar8 * 2;
          }
          *(int *)(lVar9 + 0x310) = iVar13;
          if ((iVar13 < iVar11) && (*(int *)(lVar9 + 0x30c) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_a0 != 0) && (plStack_a8 != (longlong *)0x0)) {
        (**(code **)(*plStack_a8 + 0x38))(plStack_a8,auStack_b0);
      }
      iVar11 = *(int *)(lVar9 + 0x308);
      *(uint *)(lVar9 + 0x308) = iVar11 + 1U;
      if (*(uint *)(lVar9 + 0x30c) < iVar11 + 1U) {
        FUN_1447a71f6(plVar1,iVar11);
      }
      lVar9 = *plVar1;
      lVar15 = (longlong)iVar11 * 0x10;
      *(undefined8 *)(lVar9 + lVar15) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar15) = 0;
      *(longlong **)(lVar9 + lVar15) = plStack_a8;
      plStack_a8 = (longlong *)0x0;
      *(int *)(lVar9 + 8 + lVar15) = iStack_a0;
LAB_140e3fcbd:
      iStack_a0 = 0;
    }
    pppplStack_90 = pppplStack_78;
    if (plStack_a8 != (longlong *)0x0) {
      FUN_1400020a8();
      pppplStack_90 = pppplStack_78;
    }
  }
LAB_140e3fcd8:
  if ((longlong *****)pppplStack_90 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_140e3fce2:
  if ((uStack_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bb986 FUN_1488bb986 body=140 status=ok
// SIG undefined FUN_1488bb986(void)

void FUN_1488bb986(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aa84a();
  FUN_1446f470e(&local_38,L"RepHazardInteractionState",1);
  uVar1 = FUN_140eacb6c();
  FUN_140eacb6c();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bba2a FUN_1488bba2a body=356 status=ok
// SIG undefined FUN_1488bba2a(void)

void FUN_1488bba2a(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_144a3a302();
  if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30) {
    return;
  }
  lVar4 = FUN_140e40dfb();
  cVar1 = *(char *)(param_1 + 0x338);
  if (cVar1 == '\x03') {
LAB_1488bbac7:
    FUN_140e40132(param_1 + 0x380,param_2);
  }
  else if (cVar1 == '\x02') {
    bVar2 = *(byte *)(lVar4 + 0x60);
    uVar3 = (**(code **)(*param_2 + 0x580))(param_2);
    if (uVar3 == bVar2) goto LAB_1488bbac7;
  }
  else if ((cVar1 == '\x01') && ((longlong)*(int *)(param_1 + 0x348) != 0)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x340) + lVar5) == param_2[3]) goto LAB_1488bbac7;
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x348) * 8 != lVar5);
  }
  cVar1 = *(char *)(param_1 + 0x350);
  if (cVar1 != '\x03') {
    if (cVar1 != '\x02') {
      if ((cVar1 == '\x01') && ((longlong)*(int *)(param_1 + 0x360) != 0)) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x358) + lVar4) == param_2[3])
          goto LAB_1488bbb2f;
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(param_1 + 0x360) * 8 != lVar4);
      }
      goto LAB_1488bbb3e;
    }
    bVar2 = *(byte *)(lVar4 + 0x60);
    uVar3 = (**(code **)(*param_2 + 0x580))(param_2);
    if (uVar3 != bVar2) goto LAB_1488bbb3e;
  }
LAB_1488bbb2f:
  FUN_140f41cc4(param_1 + 0x380,param_2);
LAB_1488bbb3e:
  if ((longlong)*(int *)(param_1 + 0x370) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x368) + lVar4) == param_2[3]) {
        FUN_140f41c18(param_1 + 0x380,param_2);
        return;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x370) * 8 != lVar4);
  }
  return;
}



// FUNCTION 1488bbb8e FUN_1488bbb8e body=186 status=ok
// SIG undefined FUN_1488bbb8e(void)

void FUN_1488bbb8e(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb818a8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb818a8,local_58);
  }
  local_78 = param_5;
  local_70 = 0;
  FUN_143d901c6(param_1 + 0x380,uVar1,param_4,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bbc4a FUN_1488bbc4a body=15 status=ok
// SIG undefined FUN_1488bbc4a(void)

void FUN_1488bbc4a(longlong param_1,undefined8 param_2)

{
  FUN_143d909ae(param_1 + 0x380,param_2,0);
  return;
}



// FUNCTION 1488bbc5a FUN_1488bbc5a body=28 status=ok
// SIG undefined FUN_1488bbc5a(void)

void FUN_1488bbc5a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_141155a34(param_1);
  return;
}



// FUNCTION 1488bbc76 FUN_1488bbc76 body=376 status=ok
// SIG undefined FUN_1488bbc76(void)

longlong FUN_1488bbc76(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x60) == 0) {
      plVar7 = (longlong *)(lVar5 + 0x48);
    }
    else {
      plVar7 = (longlong *)(lVar5 + 0x48);
      if (*(int *)(lVar5 + 0x68) - 1U < 0xfffffffe) {
        plVar7 = (longlong *)(lVar5 + 0x60);
      }
    }
    if ((*plVar7 == *param_2) && ((int)plVar7[1] == (int)param_2[1])) goto LAB_1488bbdbe;
    iVar1 = *(int *)(lVar5 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar5 + 0x20);
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar2 + 0x38 + lVar8);
        if (lVar5 == 0) {
LAB_1488bbd36:
          local_78 = *(undefined8 *)(lVar2 + lVar8);
          FUN_1446dcdd4(local_70,&local_78);
          if (DAT_14cb818a8 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_144815d88(DAT_14cb818a8,local_70);
          }
          *(undefined8 *)(lVar2 + 0x38 + lVar8) = uVar4;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar8);
          puVar6 = *(undefined4 **)(lVar5 + 8);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar6,&local_80,1);
          if (lVar3 != local_80) goto LAB_1488bbd36;
        }
        lVar5 = *(longlong *)(lVar2 + 0x38 + lVar8);
        if (lVar5 != 0) {
          if ((*(longlong *)(lVar5 + 0x60) == 0) || (0xfffffffd < *(int *)(lVar5 + 0x68) - 1U)) {
            plVar7 = (longlong *)(lVar5 + 0x48);
          }
          else {
            plVar7 = (longlong *)(lVar5 + 0x60);
          }
          if ((*plVar7 == *param_2) && ((int)plVar7[1] == (int)param_2[1])) goto LAB_1488bbdbe;
        }
        lVar8 = lVar8 + 0x40;
      } while ((longlong)iVar1 * 0x40 != lVar8);
    }
  }
  lVar5 = 0;
LAB_1488bbdbe:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1488bbdf0 FUN_1488bbdf0 body=146 status=ok
// SIG undefined FUN_1488bbdf0(void)

void FUN_1488bbdf0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_20 = &local_28;
  FUN_1448c4ed6(param_1 + 0xe0);
  if (((*(byte *)(param_1 + 0x5e8) & 2) != 0) && (*(char *)(param_1 + 0xf1) == '\0')) {
    FUN_14104f46a(param_1,0,0x3f800000);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bbe84 FUN_1488bbe84 body=145 status=ok
// SIG undefined FUN_1488bbe84(void)

void FUN_1488bbe84(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x5a8) != 0)) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x148);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
      *puVar1 = 0;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  FUN_143d9112a(param_1,*(undefined8 *)(param_1 + 0x80),1);
  return;
}



// FUNCTION 1488bbf16 FUN_1488bbf16 body=252 status=ok
// SIG undefined FUN_1488bbf16(void)

ulonglong FUN_1488bbf16(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_144904448(param_1 + 0x1e8);
  if (cVar3 == '\0') {
    uVar7 = 0;
    goto LAB_1488bbfa5;
  }
  FUN_140665294(param_1 + 0x1e8,&local_28);
  lVar2 = local_28;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1488bc00f:
      lVar6 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 == '\0') goto LAB_1488bc00f;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar6;
  }
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),lVar2 == lVar6);
  if ((local_28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_28 + 0x50));
  }
LAB_1488bbfa5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bc014 FUN_1488bc014 body=151 status=ok
// SIG undefined FUN_1488bc014(void)

void FUN_1488bc014(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14072d42a(param_1 + 0x1e8,0);
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != -1)) {
    local_48 = 0;
    FUN_14071ab80(plVar1,local_40,param_2,*(undefined8 *)(param_1 + 0x5a8));
    FUN_1416659c6(param_1 + 0x1e8,local_40);
    *(undefined8 *)(param_1 + 0x1f8) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bc0ac FUN_1488bc0ac body=28 status=ok
// SIG undefined FUN_1488bc0ac(void)

void FUN_1488bc0ac(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14115bf34(param_1);
  return;
}



// FUNCTION 1488bc0c8 FUN_1488bc0c8 body=32 status=ok
// SIG undefined FUN_1488bc0c8(void)

undefined8 FUN_1488bc0c8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"HazardManager[TickPostPhysics]");
  return param_2;
}



// FUNCTION 1488bc0e8 FUN_1488bc0e8 body=160 status=ok
// SIG undefined FUN_1488bc0e8(void)

undefined8 FUN_1488bc0e8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + -0x18);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FHazardManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488bc18a FUN_1488bc18a body=202 status=ok
// SIG undefined FUN_1488bc18a(void)

undefined8 FUN_1488bc18a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1488bc256(&local_a0,*(undefined8 *)(param_1 + 0x628),*(undefined4 *)(param_1 + 0x630));
  local_50 = (double)*(float *)(param_1 + 0x638);
  local_38 = local_70 + local_50;
  local_40 = local_78 + local_50;
  local_48 = local_80 + local_50;
  local_50 = local_50 + local_88;
  local_58 = local_90;
  local_68 = local_a0;
  uStack_60 = uStack_98;
  FUN_144a80a4c(&local_68,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bc256 FUN_1488bc256 body=405 status=ok
// SIG undefined FUN_1488bc256(void)

double * FUN_1488bc256(double *param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  dVar5 = 0.0;
  uVar12 = 0;
  uVar13 = 0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar6 = 0.0;
  if (param_3 != 0) {
    bVar4 = true;
    lVar3 = 0;
    uVar12 = 0;
    uVar13 = 0;
    do {
      dVar11 = *(double *)(param_2 + lVar3);
      uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
      if (bVar4) {
        dVar8 = *(double *)(param_2 + 8 + lVar3);
        dVar6 = *(double *)(param_2 + 0x10 + lVar3);
        dVar7 = dVar11;
        dVar9 = dVar8;
        dVar10 = dVar6;
        uVar12 = SUB84(dVar11,0);
        uVar13 = uVar14;
      }
      else {
        if (dVar11 <= dVar7) {
          dVar7 = dVar11;
        }
        dVar1 = *(double *)(param_2 + 8 + lVar3);
        dVar2 = *(double *)(param_2 + 0x10 + lVar3);
        if (dVar1 <= dVar8) {
          dVar8 = dVar1;
        }
        if (dVar2 <= dVar6) {
          dVar6 = dVar2;
        }
        if ((double)CONCAT44(uVar13,uVar12) <= dVar11) {
          uVar12 = SUB84(dVar11,0);
          uVar13 = uVar14;
        }
        if (dVar9 <= dVar1) {
          dVar9 = dVar1;
        }
        if (dVar10 <= dVar2) {
          dVar10 = dVar2;
        }
      }
      lVar3 = lVar3 + 0x18;
      bVar4 = false;
    } while ((ulonglong)param_3 * 0x18 != lVar3);
  }
  dVar11 = (dVar10 - dVar6) * 0.5;
  dVar10 = (dVar9 - dVar8) * 0.5;
  dVar9 = ((double)CONCAT44(uVar13,uVar12) - dVar7) * 0.5;
  dVar6 = dVar6 + dVar11;
  dVar8 = dVar8 + dVar10;
  dVar7 = dVar7 + dVar9;
  *param_1 = dVar7;
  param_1[1] = dVar8;
  param_1[2] = dVar6;
  param_1[3] = dVar9;
  param_1[4] = dVar10;
  param_1[5] = dVar11;
  if (param_3 != 0) {
    dVar5 = 0.0;
    lVar3 = 0;
    do {
      dVar10 = *(double *)(param_2 + 0x10 + lVar3) - dVar6;
      dVar9 = *(double *)(param_2 + 8 + lVar3) - dVar8;
      dVar11 = *(double *)(param_2 + lVar3) - dVar7;
      dVar9 = dVar10 * dVar10 + dVar11 * dVar11 + dVar9 * dVar9;
      if (dVar5 <= dVar9) {
        dVar5 = dVar9;
      }
      lVar3 = lVar3 + 0x18;
    } while ((ulonglong)param_3 * 0x18 != lVar3);
  }
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  param_1[6] = dVar5;
  return param_1;
}



// FUNCTION 1488bc412 FUN_1488bc412 body=338 status=ok
// SIG undefined FUN_1488bc412(void)

longlong FUN_1488bc412(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x640);
  if (lVar3 == 0) {
    uVar4 = 0;
    for (lVar3 = param_1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
        uVar4 = 1;
        break;
      }
    }
    local_30 = 0;
    local_38 = 0;
    lVar3 = FUN_140c9d4a9(param_1,0,uVar4,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x640) = lVar3;
    if (*(int *)(param_1 + 0xc) <= DAT_14c9647bc) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
      lVar3 = *(longlong *)(param_1 + 0x640);
    }
    FUN_1406555d4(lVar3,param_1,0);
    FUN_1412e3d1e(&local_28);
    lVar3 = *(longlong *)(param_1 + 0x640);
    *(undefined4 *)(lVar3 + 0xe8) = local_28;
    *(undefined4 *)(lVar3 + 0xec) = uStack_24;
    *(undefined4 *)(lVar3 + 0xf0) = uStack_20;
    *(undefined4 *)(lVar3 + 0xf4) = uStack_1c;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x640) + 0xb9);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x640) + 0xb8);
    *pbVar1 = *pbVar1 & 0xbf;
    *(undefined1 *)(*(longlong *)(param_1 + 0x640) + 0x31) = 2;
    lVar3 = *(longlong *)(param_1 + 0x640);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bc566 FUN_1488bc566 body=989 status=ok
// SIG undefined FUN_1488bc566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488bc566(longlong *param_1,double *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar5 = (int)param_4[1];
  if (-1 < iVar5) {
    plVar1 = param_1 + 0xc5;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    if (*(int *)((longlong)param_1 + 0x634) != iVar5) {
      FUN_1447a8aa0(plVar1);
    }
    lVar12 = param_4[1];
    if ((longlong)(int)lVar12 != 0) {
      lVar6 = *param_4;
      lVar13 = 0;
      do {
        pdVar2 = (double *)(*param_3 + (longlong)*(int *)(lVar6 + lVar13) * 0x18);
        dVar16 = *pdVar2 * param_2[8];
        dVar17 = pdVar2[1] * param_2[9];
        dVar14 = *(double *)(*param_3 + 0x10 + (longlong)*(int *)(lVar6 + lVar13) * 0x18) *
                 param_2[10];
        dVar9 = *param_2;
        dVar11 = param_2[1];
        dVar8 = param_2[2];
        dVar3 = param_2[3];
        dVar19 = dVar17 * dVar9 - dVar16 * dVar11;
        dVar21 = dVar14 * dVar11 - dVar17 * dVar8;
        dVar22 = dVar16 * dVar8 - dVar9 * dVar14;
        dVar21 = dVar21 + dVar21;
        dVar22 = dVar22 + dVar22;
        dVar19 = dVar19 + dVar19;
        dVar16 = ((dVar19 * dVar11 - dVar22 * dVar8) + dVar3 * dVar21 + dVar16 + param_2[4]) -
                 (double)param_1[0x4c];
        dVar8 = ((dVar8 * dVar21 - dVar9 * dVar19) + param_2[3] * dVar22 + dVar17 + param_2[5]) -
                (double)param_1[0x4d];
        dVar9 = (dVar19 * dVar3 + dVar14 + (dVar22 * dVar9 - dVar21 * dVar11) + param_2[6]) -
                (double)param_1[0x4e];
        dVar11 = (double)param_1[0x48];
        dVar14 = (double)param_1[0x49];
        auVar4 = *(undefined1 (*) [16])(param_1 + 0x50);
        dVar22 = (double)param_1[0x4a] * -1.0;
        dVar19 = (double)param_1[0x4b] * 1.0;
        dVar3 = (double)param_1[0x52];
        iVar5 = (int)param_1[0xc6];
        *(uint *)(param_1 + 0xc6) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x634) < iVar5 + 1U) {
          FUN_1403e3958(plVar1,iVar5);
        }
        dVar18 = -dVar11;
        dVar14 = -dVar14;
        dVar20 = dVar16 * dVar22 - dVar18 * dVar9;
        dVar17 = dVar8 * dVar18 - dVar14 * dVar16;
        dVar21 = dVar9 * dVar14 - dVar22 * dVar8;
        dVar21 = dVar21 + dVar21;
        dVar20 = dVar20 + dVar20;
        dVar17 = dVar17 + dVar17;
        auVar15 = divpd(_DAT_149934d80,auVar4);
        dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar15._8_8_) *
                (dVar11 * dVar17 + dVar22 * dVar21 + dVar19 * dVar20 + dVar8);
        lVar7 = *plVar1;
        auVar10._8_4_ = SUB84(dVar8,0);
        auVar10._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar15._0_8_) *
             ((dVar17 * dVar14 - dVar20 * dVar22) + dVar19 * dVar21 + dVar16);
        auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + (longlong)iVar5 * 0x18) = auVar10;
        *(double *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar3)) & (ulonglong)(1.0 / dVar3)) *
             (dVar19 * dVar17 + dVar9 + (dVar20 * dVar18 - dVar21 * dVar14));
        lVar13 = lVar13 + 4;
      } while ((longlong)(int)lVar12 * 4 != lVar13);
    }
    *(undefined4 *)(param_1 + 199) = param_5;
    (**(code **)(*param_1 + 0x540))(param_1);
    FUN_1488bc944(param_1);
    FUN_144907e2c(param_1,0,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 1488bc944 FUN_1488bc944 body=366 status=ok
// SIG undefined FUN_1488bc944(void)

void FUN_1488bc944(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar13 = (longlong *)FUN_1488bc412();
  FUN_1488bcab4(plVar13 + 7,*(undefined4 *)(param_1 + 0x630));
  iVar6 = *(int *)(param_1 + 0x630);
  if ((longlong)iVar6 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x628);
    lVar15 = 0;
    do {
      iVar7 = (int)plVar13[8];
      *(uint *)(plVar13 + 8) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar13 + 0x44) < iVar7 + 1U) {
        FUN_140e25fd0(plVar13 + 7,iVar7);
      }
      puVar1 = (undefined4 *)(lVar8 + lVar15);
      lVar9 = plVar13[7];
      lVar14 = (longlong)iVar7 * 0x50;
      uVar5 = *(undefined4 *)(param_1 + 0x638);
      puVar2 = (undefined8 *)(lVar9 + 8 + lVar14);
      *puVar2 = 0;
      puVar2[1] = 0;
      pbVar3 = (byte *)(lVar9 + 0x18 + lVar14);
      *pbVar3 = *pbVar3 | 1;
      *(undefined1 *)(lVar9 + 0x19 + lVar14) = 3;
      *(undefined4 *)(lVar9 + 0x20 + lVar14) = 6;
      *(longlong *)(lVar9 + 0x28 + lVar14) = lVar9 + lVar14;
      *(undefined ***)(lVar9 + lVar14) = &PTR_FUN_14a418310;
      uVar12 = DAT_14c8464e8;
      puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar14);
      *puVar2 = DAT_14c8464e0;
      puVar2[1] = uVar12;
      *(undefined8 *)(lVar9 + 0x40 + lVar14) = DAT_14c8464f0;
      *(undefined4 *)(lVar9 + 0x48 + lVar14) = uVar5;
      lVar9 = plVar13[7];
      lVar14 = (longlong)((int)plVar13[8] + -1) * 0x50;
      *(undefined8 *)(lVar9 + 0x40 + lVar14) = *(undefined8 *)(puVar1 + 4);
      uVar5 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar4 = (undefined4 *)(lVar9 + 0x30 + lVar14);
      *puVar4 = *puVar1;
      puVar4[1] = uVar5;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      lVar15 = lVar15 + 0x18;
    } while ((longlong)iVar6 * 0x18 != lVar15);
  }
  FUN_1412e3d1e(&local_70);
  *(undefined4 *)(plVar13 + 0x1d) = local_70;
  *(undefined4 *)((longlong)plVar13 + 0xec) = uStack_6c;
  *(undefined4 *)(plVar13 + 0x1e) = uStack_68;
  *(undefined4 *)((longlong)plVar13 + 0xf4) = uStack_64;
  (**(code **)(*plVar13 + 0x2c0))(plVar13);
  FUN_1406cc378(param_1);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bcab4 FUN_1488bcab4 body=68 status=ok
// SIG undefined FUN_1488bcab4(void)

void FUN_1488bcab4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1400d7df2(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147a38878(param_1,param_2);
  return;
}



// FUNCTION 1488bcb32 FUN_1488bcb32 body=40 status=ok
// SIG undefined FUN_1488bcb32(void)

undefined8 FUN_1488bcb32(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14109547a(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488bcba0 FUN_1488bcba0 body=40 status=ok
// SIG undefined FUN_1488bcba0(void)

undefined8 FUN_1488bcba0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14112d98e(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488bcc0e FUN_1488bcc0e body=40 status=ok
// SIG undefined FUN_1488bcc0e(void)

undefined8 FUN_1488bcc0e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14111bd62(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488bcc41 FUN_1488bcc41 body=202 status=ok
// SIG undefined FUN_1488bcc41(void)

undefined8 FUN_1488bcc41(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1459f0cfe();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x41;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bcd0c FUN_1488bcd0c body=186 status=ok
// SIG undefined FUN_1488bcd0c(void)

void FUN_1488bcd0c(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb818a8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb818a8,local_58);
  }
  local_78 = param_5;
  local_70 = 0;
  FUN_143d901c6(param_1 + 0x3a0,uVar1,param_4,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bcdc8 FUN_1488bcdc8 body=177 status=ok
// SIG undefined FUN_1488bcdc8(void)

void FUN_1488bcdc8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14074d544(param_2);
  if ((lVar1 != 0) &&
     (*(longlong *)(param_1 + 0xb30) != lVar1 && *(longlong *)(param_1 + 0xb30) != 0)) {
    local_30 = *param_2;
    if ((*(longlong *)(param_1 + 0xaa0) != local_30) ||
       (local_28 = *(int *)(param_1 + 0xaa8), local_28 != (int)param_2[1])) {
      *(longlong *)(param_1 + 0xaa0) = local_30;
      *(int *)(param_1 + 0xaa8) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0xab0) = 0;
      local_30 = *param_2;
      local_28 = (int)param_2[1];
    }
    local_20 = 0;
    FUN_1488bce7a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bce7a FUN_1488bce7a body=535 status=ok
// SIG undefined FUN_1488bce7a(void)

void FUN_1488bce7a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_14074d544(param_2);
  if (lVar5 != 0) {
    if ((*(longlong *)(param_1 + 0xb30) != lVar5 && *(longlong *)(param_1 + 0xb30) != 0) &&
       (*(byte *)(param_1 + 0xa7c) < 2)) {
      *(longlong *)(param_1 + 0xb30) = lVar5;
      uVar6 = FUN_14050fd64();
      local_68 = 0;
      FUN_14088df30(uVar6,&local_40,*(undefined8 *)(param_1 + 0xb30),0);
      plVar1 = local_38;
      if ((undefined8 **)(param_1 + 0xb58) != &local_40) {
        *(undefined8 **)(param_1 + 0xb58) = local_40;
        local_40 = (undefined8 *)0x0;
        plVar3 = *(longlong **)(param_1 + 0xb60);
        if (local_38 != plVar3) {
          local_38 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xb60) = plVar1;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
      }
      plVar1 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      local_40 = (undefined8 *)0x0;
      local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar4 = local_40;
      local_38 = (longlong *)CONCAT44(local_38._4_4_,3);
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_40[2] = lVar7;
      *local_40 = &PTR_FUN_14b40ff80;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[4] = FUN_1488bd092;
      uVar6 = *(undefined8 *)(param_1 + 0xb58);
      local_58 = 0;
      local_50 = 0;
      FUN_14009d848(&local_58,&local_40);
      FUN_140844560(uVar6,&local_48,&local_58);
      *(undefined8 *)(param_1 + 0xb50) = local_48;
      FUN_1449db362(&local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bd092 FUN_1488bd092 body=187 status=ok
// SIG undefined FUN_1488bd092(void)

void FUN_1488bd092(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_1 + 0xb2a);
  if ((bVar2 & 2) != 0) {
    lVar3 = FUN_140faa2e4(*(longlong *)(param_1 + 0xb30) + 0x18);
    if (*(longlong *)(param_1 + 0x9f8) == lVar3) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0xb2a);
  }
  *(byte *)(param_1 + 0xb2a) = bVar2 | 0x82;
  lVar3 = FUN_140faa2e4(*(longlong *)(param_1 + 0xb30) + 0x18);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x9f8) = lVar3;
  uVar1 = FUN_140f41b0a(*(longlong *)(param_1 + 0xb30) + 0x40);
  FUN_140e41048(param_1 + 0x3a0,uVar1);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    return;
  }
  FUN_141029808(param_1 + 0x3a0,param_1 + 0xab8);
  return;
}



// FUNCTION 1488bd14e FUN_1488bd14e body=335 status=ok
// SIG undefined FUN_1488bd14e(void)

void FUN_1488bd14e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  code *local_68;
  undefined4 **local_60;
  undefined1 local_58 [20];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  if (param_3 != 0) {
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (lVar3 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       == lVar2 + 0x30)) goto LAB_1488bd1aa;
  }
  lVar3 = 0;
LAB_1488bd1aa:
  local_78 = uVar1;
  FUN_1488bd9e0(param_1,param_2,lVar3,param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81978) {
    FUN_144b3d300(&DAT_14cb81978);
    if (DAT_14cb81978 == -1) {
      FUN_1446f470e(&DAT_14cb81970,L"EdgeMask_Strength",1);
      _Init_thread_footer(&DAT_14cb81978);
    }
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_44 = 0;
  }
  else {
    local_44 = 0x3f800000;
  }
  FUN_1405fbff8(local_58,param_3);
  local_60 = &local_70;
  local_68 = FUN_143d99328;
  local_70 = &local_44;
  FUN_1405fbd64(param_2,local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bd29e FUN_1488bd29e body=187 status=ok
// SIG undefined FUN_1488bd29e(void)

void FUN_1488bd29e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa28);
  if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      (**(code **)(*plVar2 + 0x420))();
      *(undefined8 *)(param_1 + 0xa28) = 0;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xa30);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      (**(code **)(*plVar2 + 0x420))(plVar2,0);
      *(undefined8 *)(param_1 + 0xa30) = 0;
    }
  }
  return;
}



// FUNCTION 1488bd35a FUN_1488bd35a body=440 status=ok
// SIG undefined FUN_1488bd35a(void)

void FUN_1488bd35a(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
     (iVar2 = FUN_14490d72a(lVar4), iVar2 != 3)) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = lVar4;
    FUN_1488c0c50(local_b0);
    lVar7 = local_88;
    lVar4 = local_a0;
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
    puVar5 = local_a8;
LAB_1488bd414:
    uVar1 = uStack_70;
    lVar6 = local_78;
    if (puVar5 != local_90) {
      lVar6 = puVar5[2];
      bVar9 = lVar6 == 0;
      lVar8 = lVar6;
      if (lVar6 != param_1 && !bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x168);
          bVar9 = lVar8 == 0;
          if (bVar9) break;
        } while (lVar8 != param_1);
      }
      if (!bVar9) {
        lVar8 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_1405ff466(&local_78,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_78 + lVar8 * 8) = lVar6;
      }
      for (puVar5 = (undefined8 *)FUN_1488c0cda(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_1488c0cda(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_98) goto LAB_1488bd414;
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_1488bd414;
    }
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + -1;
    UNLOCK();
    lVar4 = (longlong)(int)uStack_70;
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        FUN_140e9e6ee(*(undefined8 *)(lVar6 + lVar7),0xbf800000);
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bd514 FUN_1488bd514 body=303 status=ok
// SIG undefined FUN_1488bd514(void)

void FUN_1488bd514(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [48];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1 != (longlong *)0x0 && param_2 != 0) &&
      (lVar3 = (**(code **)(*param_1 + 0x180))(), lVar3 != 0)) &&
     (iVar2 = FUN_14490d72a(lVar3), iVar2 != 3)) {
    local_48 = lVar3;
    FUN_1488c0c50();
    lVar1 = local_58;
    lVar3 = local_70;
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    if (local_78 == local_60) {
      lVar5 = 0;
    }
    else {
      puVar4 = local_78;
      do {
        lVar5 = puVar4[2];
        if (*(int *)(puVar4[2] + 0xa88) == param_2) break;
        for (puVar4 = (undefined8 *)FUN_1488c0cda(*puVar4); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)FUN_1488c0cda(*puVar4)) {
          lVar5 = FUN_1447210f0(puVar4[2]);
          if (lVar5 == *local_68) goto LAB_1488bd602;
        }
        puVar4 = (undefined8 *)0x0;
LAB_1488bd602:
        lVar5 = 0;
      } while (puVar4 != local_60);
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
    if (lVar5 != 0) {
      FUN_140e9e6ee(lVar5,0xbf800000);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bd644 FUN_1488bd644 body=342 status=ok
// SIG undefined FUN_1488bd644(void)

void FUN_1488bd644(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
     (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)) {
    local_50 = lVar4;
    FUN_14592cb42(local_88,&DAT_14cb81b90);
    lVar1 = local_60;
    lVar4 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    plVar7 = local_80;
LAB_1488bd6ea:
    if (plVar7 != local_68) {
      lVar6 = *(longlong *)(plVar7[2] + 0x5a8);
      if (lVar6 != 0) {
        lVar5 = FUN_141048d22();
        if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
            ((*(longlong *)(lVar6 + 0x168) == param_1 || (*(longlong *)(lVar6 + 0x1b0) == param_1)))
            ) && (cVar2 = FUN_14113f0c0(param_2), cVar2 != '\0')) {
          FUN_14879fae9(param_2,lVar6);
        }
      }
      do {
        plVar7 = (longlong *)*plVar7;
        if (plVar7 == (longlong *)0x0) break;
        if (*(longlong *)(plVar7[2] + 0x5a8) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_1447210f0();
        }
      } while (lVar6 != *local_70);
      goto LAB_1488bd6ea;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bd79c FUN_1488bd79c body=26 status=ok
// SIG undefined FUN_1488bd79c(void)

void FUN_1488bd79c(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bd7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 1488bd7b6 FUN_1488bd7b6 body=552 status=ok
// SIG undefined FUN_1488bd7b6(void)

void FUN_1488bd7b6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1;
  local_28 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81998) {
    FUN_144b3d300(&DAT_14cb81998);
    if (DAT_14cb81998 == -1) {
      FUN_1446f470e(&DAT_14cb81990,L"Ripples_Strength",1);
      _Init_thread_footer(&DAT_14cb81998);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819a8) {
    FUN_144b3d300(&DAT_14cb819a8);
    if (DAT_14cb819a8 == -1) {
      FUN_1446f470e(&DAT_14cb819a0,L"Ripples_Size",1);
      _Init_thread_footer(&DAT_14cb819a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819b8) {
    FUN_144b3d300(&DAT_14cb819b8);
    if (DAT_14cb819b8 == -1) {
      FUN_1446f470e(&DAT_14cb819b0,L"Ripples_Speed",1);
      _Init_thread_footer(&DAT_14cb819b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb819c8) {
    FUN_144b3d300(&DAT_14cb819c8);
    if (DAT_14cb819c8 == -1) {
      FUN_1446f470e(&DAT_14cb819c0,L"Ripples_Location",1);
      _Init_thread_footer(&DAT_14cb819c8);
    }
  }
  FUN_1405fbff8(local_40,param_2);
  local_60 = &local_30;
  local_48 = &local_60;
  local_58 = &local_28;
  local_50 = FUN_143d9944c;
  FUN_1405fbd64(param_1,local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bd9e0 FUN_1488bd9e0 body=1396 status=ok
// SIG undefined FUN_1488bd9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488bd9e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
                  )

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  code *local_e8;
  code **local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  code *local_b8;
  ulonglong local_b0;
  code *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81988) && (FUN_144b3d300(&DAT_14cb81988), DAT_14cb81988 == -1)) {
    FUN_1446f470e(&DAT_14cb81980,L"Opacity_DepthFade",1);
    _Init_thread_footer(&DAT_14cb81988);
  }
  FUN_1405fbff8(&local_d0,param_3);
  if (local_d0 == (longlong *)0x0) {
    iVar9 = (**(code **)(*local_c8 + 0x7b0))();
  }
  else {
    iVar9 = (**(code **)(*local_d0 + 0x5f8))();
  }
  if (iVar9 == 0) goto LAB_1488bdd70;
  if (param_4 != 0) {
    puVar12 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_4 + 8) != (undefined4 *)0x0) {
      puVar12 = *(undefined4 **)(param_4 + 8);
    }
    FUN_1447325ac(puVar12,&local_d8,1);
    uVar10 = (uint)((ulonglong)local_d8 >> 0x10);
    uVar14 = (uint)local_d8 & 0xffff;
    uVar10 = FUN_144a78877(((uint)local_d8 << 0x10 | uVar14) + (int)((ulonglong)local_d8 >> 0x20) +
                           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar14 >> 4),0x678bcdb);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar13 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x78);
      }
      iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar10) * 4);
      if (iVar9 != -1) {
        lVar13 = *(longlong *)(param_1 + 0x38);
        do {
          lVar15 = (longlong)iVar9 * 0x60;
          lVar1 = lVar13 + lVar15;
          if ((*(longlong *)(lVar13 + lVar15) == local_d8) &&
             (*(int *)(lVar13 + 8 + lVar15) == 0x678bcdb)) {
            if ((lVar1 != -0x18 && lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
              FUN_1405fbe06(param_2,&local_d0,0);
              if ((*(byte *)(*(longlong *)(param_2 + 0xb30) + 0x8d) & 1) != 0) goto LAB_1488bde7c;
              goto LAB_1488bdb35;
            }
            break;
          }
          iVar9 = *(int *)(lVar1 + 0x58);
        } while (iVar9 != -1);
      }
    }
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xb30) + 0x8d) & 1) == 0) {
    if (local_d0 == (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x638))(local_c8,0,*(undefined8 *)(param_1 + 0x98));
    }
    else {
      (**(code **)(*local_d0 + 0x608))(local_d0,0);
    }
  }
  else {
    if (local_d0 == (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x638))(local_c8,0,*(undefined8 *)(param_1 + 0xa0));
    }
    else {
      (**(code **)(*local_d0 + 0x608))(local_d0,0);
    }
LAB_1488bde7c:
    FUN_1488bd7b6(param_2,param_3);
  }
LAB_1488bdb35:
  plStack_a0 = &local_c0;
  local_a8 = FUN_143d9963e;
  local_c0 = param_1;
  local_b8 = (code *)&local_88;
  local_88 = param_2;
  FUN_1405fbd64(param_2,&local_d0);
  if (param_5 < 0.0) {
    param_5 = *(float *)(param_1 + 0xe0);
  }
  local_88 = CONCAT44(local_88._4_4_,param_5);
  dVar2 = *(double *)(*(longlong *)(param_2 + 0x1c8) + 0x1d8);
  uVar16 = -(ulonglong)(dVar2 != 0.0);
  lVar13 = *(longlong *)(param_3 + 0x198);
  uVar3 = *(undefined8 *)(param_3 + 0x1a0);
  auVar17 = *(undefined1 (*) [16])(param_3 + 0x1b0);
  dVar6 = auVar17._0_8_;
  dVar7 = auVar17._8_8_;
  dVar22 = *(double *)(param_3 + 0x1c0);
  puVar11 = *(undefined8 **)(param_3 + 0x230);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar8 = DAT_14c8463d8;
    *puVar11 = DAT_14c8463d0;
    puVar11[1] = uVar8;
    uVar8 = DAT_14c8463e8;
    puVar11[2] = DAT_14c8463e0;
    puVar11[3] = uVar8;
    uVar8 = DAT_14c846500;
    puVar11[4] = DAT_14c8464f8;
    puVar11[5] = uVar8;
    puVar11[6] = DAT_14c846508;
    *(undefined8 **)(param_3 + 0x230) = puVar11;
  }
  if (((((double)puVar11[4] != dVar6) || (NAN((double)puVar11[4]) || NAN(dVar6))) ||
      ((double)puVar11[5] != dVar7)) || (NAN((double)puVar11[5]) || NAN(dVar7))) {
LAB_1488bdc2e:
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar22;
    dVar4 = (double)DAT_1499387d0;
    dVar5 = DAT_1499387d0._8_8_;
    auVar17 = divpd(auVar17,_DAT_1499387d0);
    auVar20 = divpd(auVar25,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar20 = roundpd(auVar20,auVar20,3);
    dVar6 = dVar6 - auVar17._0_8_ * dVar4;
    dVar7 = dVar7 - auVar17._8_8_ * dVar5;
    auVar26._0_8_ = dVar22 - auVar20._0_8_ * dVar4;
    auVar26._8_8_ = 0.0 - auVar20._8_8_ * dVar5;
    auVar24._0_8_ = dVar6 + dVar4;
    auVar24._8_8_ = dVar7 + dVar5;
    auVar23._0_8_ = dVar4 + auVar26._0_8_;
    auVar23._8_8_ = dVar5 + auVar26._8_8_;
    auVar20._8_8_ = -(ulonglong)(0.0 <= dVar7);
    auVar20._0_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar6;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar20 = blendvpd(auVar24,auVar17,auVar20);
    auVar18._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
    auVar18._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
    auVar17 = blendvpd(auVar23,auVar26,auVar18);
    auVar21._0_8_ = auVar20._0_8_ + -360.0;
    auVar21._8_8_ = auVar20._8_8_ + -360.0;
    auVar19._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
    auVar19._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
    auVar20 = blendvpd(auVar20,auVar21,auVar19);
    dVar22 = auVar17._0_8_;
    *(undefined1 (*) [16])(puVar11 + 4) = auVar20;
    puVar11[6] = ~-(ulonglong)(180.0 < dVar22) & (ulonglong)dVar22 |
                 (ulonglong)(dVar22 + -360.0) & -(ulonglong)(180.0 < dVar22);
    FUN_144a7484c(puVar11 + 4,&local_a8);
    puVar11[2] = local_98;
    puVar11[3] = uStack_90;
    *puVar11 = local_a8;
    puVar11[1] = plStack_a0;
  }
  else if (((double)puVar11[6] != dVar22) || (NAN((double)puVar11[6]) || NAN(dVar22)))
  goto LAB_1488bdc2e;
  local_a8 = (code *)*puVar11;
  plStack_a0 = (longlong *)puVar11[1];
  local_98 = puVar11[2];
  uStack_90 = puVar11[3];
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = lVar13;
  local_b8 = (code *)uVar3;
  local_b0 = CONCAT44(~(uint)(uVar16 >> 0x20),~(uint)uVar16) & 0x3fb99999a0000000 |
             (ulonglong)(double)(0.1 / (float)dVar2) & uVar16;
  FUN_144927ad4(param_3,&local_c0,&local_a8,0);
  local_e8 = FUN_143d993ba;
  local_e0 = &local_a8;
  local_a8 = (code *)&local_88;
  FUN_1405fbd64(param_2,&local_d0);
LAB_1488bdd70:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bdf56 FUN_1488bdf56 body=28 status=ok
// SIG undefined FUN_1488bdf56(void)

void FUN_1488bdf56(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1410839ec(param_1);
  return;
}



// FUNCTION 1488bdf72 FUN_1488bdf72 body=293 status=ok
// SIG undefined FUN_1488bdf72(void)

undefined8 * FUN_1488bdf72(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c511d6();
  *param_1 = &PTR_FUN_14b40f8a0;
  FUN_1400b22c2(&local_68,"/Script/GbxGame.DEPRECATED_AIHeldProjectile");
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 0x15);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 0x16) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xf6;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488be0a6 FUN_1488be0a6 body=65 status=ok
// SIG undefined FUN_1488be0a6(void)

longlong FUN_1488be0a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x5d8))();
  if (lVar1 != 0) {
    lVar2 = FUN_140d12354();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488be0e8 FUN_1488be0e8 body=1446 status=ok
// SIG undefined FUN_1488be0e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488be0e8(longlong *param_1,undefined8 *param_2,float param_3,undefined4 param_4,
                  char param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint extraout_XMM0_Da;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  double *local_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8 [9];
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double dStack_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined2 local_d0;
  undefined6 uStack_ce;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(char *)(param_1[0x15] + 0x178) == '\x03') || ((*(byte *)(param_1[0x7c] + 0x590) & 1) == 0))
  {
    if ((param_5 != '\0') && (param_1[0x59] == 0)) {
      (**(code **)(*param_1 + 0x5e8))(param_1);
    }
    if ((param_1[0x59] != 0) && (*(longlong *)(param_1[0x59] + 0x1c8) != 0)) {
      lVar10 = param_1[0x15];
      if (lVar10 != 0) {
        lVar7 = FUN_144a7cbb2();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          cVar4 = FUN_1449ce97a(lVar10);
          if (cVar4 != '\0') {
            local_f8 = 0;
            uStack_f0 = 0;
            local_d0 = 0;
            local_c8 = DAT_14c8464f8;
            uStack_c0 = DAT_14c846500;
            local_b8 = DAT_14c846508;
            local_b0 = 0;
            local_ac = 0;
            local_a0 = 0;
            local_98 = DAT_14c8464e0;
            uStack_90 = DAT_14c8464e8;
            local_88 = DAT_14c8464f0;
            local_e0 = CONCAT31(local_e0._1_3_,1);
            uStack_dc = (undefined4)param_1[0x25];
            local_d8 = (undefined4)((ulonglong)param_1[0x25] >> 0x20);
            local_200 = &local_178;
            local_178 = 0.0;
            dStack_170 = (double)DAT_14c8464e0;
            dStack_168 = (double)DAT_14c8464e8;
            local_160 = DAT_14c8464f0;
            local_208 = 0xf;
            uVar5 = FUN_14894017a(&local_158,param_1[0x15]);
            lVar10 = param_1[0x7c];
            if (lVar10 == 0) {
              uVar9 = 0x447a0000;
            }
            else {
              uVar5 = FUN_140b536be();
              uVar9 = extraout_XMM0_Da;
            }
            dVar27 = local_158 * 0.0 - dStack_150 * 1.0;
            dVar13 = dStack_150 * 0.0 - local_148 * 0.0;
            dVar28 = local_148 * 1.0 - local_158 * 0.0;
            dVar13 = dVar13 + dVar13;
            dVar28 = dVar28 + dVar28;
            dVar27 = dVar27 + dVar27;
            uVar12 = -(uint)(0.0 < *(float *)(param_2 + 1));
            local_178 = (double)(float)(~uVar12 & uVar9 | (uint)*(float *)(param_2 + 1) & uVar12);
            dStack_168 = (dVar27 * dStack_140 + 0.0 + (dVar28 * local_158 - dVar13 * dStack_150)) *
                         local_178;
            dStack_170 = ((local_148 * dVar13 - local_158 * dVar27) + dStack_140 * dVar28 + 0.0) *
                         local_178;
            local_178 = ((dVar27 * dStack_150 - dVar28 * local_148) + dStack_140 * dVar13 + 1.0) *
                        local_178;
            auVar21 = *(undefined1 (*) [16])(param_2 + 3);
            dVar27 = (double)DAT_1499387d0;
            dVar28 = DAT_1499387d0._8_8_;
            auVar14 = divpd(auVar21,_DAT_1499387d0);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = param_2[5];
            auVar23 = divpd(auVar22,_DAT_1499387d0);
            auVar14 = roundpd(auVar14,auVar14,3);
            auVar23 = roundpd(auVar23,auVar23,3);
            dVar13 = auVar21._0_8_ - auVar14._0_8_ * dVar27;
            dVar1 = auVar21._8_8_ - auVar14._8_8_ * dVar28;
            dVar25 = (double)param_2[5] - auVar23._0_8_ * dVar27;
            dVar26 = 0.0 - auVar23._8_8_ * dVar28;
            auVar24._0_8_ = dVar13 + dVar27;
            auVar24._8_8_ = dVar1 + dVar28;
            auVar20._0_8_ = dVar27 + dVar25;
            auVar20._8_8_ = dVar28 + dVar26;
            auVar15._8_8_ = -(ulonglong)(0.0 <= dVar1);
            auVar15._0_8_ = -(ulonglong)(0.0 <= dVar13);
            auVar21._8_4_ = SUB84(dVar1,0);
            auVar21._0_8_ = dVar13;
            auVar21._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
            auVar14 = blendvpd(auVar24,auVar21,auVar15);
            auVar16._8_8_ = -(ulonglong)(0.0 <= dVar26);
            auVar16._0_8_ = -(ulonglong)(0.0 <= dVar25);
            auVar23._8_8_ = dVar26;
            auVar23._0_8_ = dVar25;
            auVar21 = blendvpd(auVar20,auVar23,auVar16);
            auVar17._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
            auVar17._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
            auVar3._8_8_ = auVar14._8_8_ + -360.0;
            auVar3._0_8_ = auVar14._0_8_ + -360.0;
            auVar23 = blendvpd(auVar14,auVar3,auVar17);
            auVar18._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
            auVar18._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
            auVar2._8_8_ = auVar21._8_8_ + -360.0;
            auVar2._0_8_ = auVar21._0_8_ + -360.0;
            auVar21 = blendvpd(auVar21,auVar2,auVar18);
            lVar7 = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._8_8_));
            auVar14._8_4_ = (int)lVar7;
            auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._0_8_));
            auVar14._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
            iVar6 = movmskpd(uVar5,auVar14);
            auVar19._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar21._8_8_));
            auVar19._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar21._0_8_));
            uVar9 = movmskpd((int)lVar10,auVar19);
            if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
              FUN_1401c9a0e(param_2 + 3,&local_190,&local_178);
              dStack_168 = local_180;
              local_178 = local_190;
              dStack_170 = dStack_188;
            }
            FUN_140ee5bf8(param_1,0);
            (**(code **)(*param_1 + 0x648))(param_1,&local_178);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            goto LAB_1488be32d;
          }
        }
      }
      FUN_14893fab0(&local_e0,param_1[0x15]);
      if ((char)local_c8 == '\x01') {
        local_1f0 = (double)CONCAT44(uStack_dc,local_e0);
        local_1e8 = (double)CONCAT44(uStack_d4,local_d8);
        local_1e0 = (double)CONCAT62(uStack_ce,local_d0);
      }
      else {
        lVar10 = *(longlong *)(param_1[0x15] + 0x1c8);
        if (lVar10 == 0) {
          pdVar8 = (double *)&DAT_14c8464e0;
          uVar5 = (undefined4)DAT_14c8464f0;
          uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar5 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
          uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
          pdVar8 = (double *)(lVar10 + 0x260);
        }
        dVar27 = *pdVar8;
        dVar28 = pdVar8[1];
        FUN_144a76660(&local_158,&local_178);
        dVar13 = (double)param_3;
        local_1e0 = dStack_168 * dVar13 + (double)CONCAT44(uVar29,uVar5);
        local_1e8 = dStack_170 * dVar13 + dVar28;
        local_1f0 = dVar13 * local_178 + dVar27;
      }
      puVar11 = local_1d8;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar11 = *param_2;
        param_2 = param_2 + 1;
        puVar11 = puVar11 + 1;
      }
      local_208 = CONCAT31(local_208._1_3_,param_5);
      (**(code **)(*param_1 + 0x638))(param_1,&local_1f0,local_1d8,param_4);
    }
  }
  else if ((*(byte *)(param_1[0x7c] + 0x590) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_228);
  }
LAB_1488be32d:
  if ((local_80 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488be6d4 FUN_1488be6d4 body=345 status=ok
// SIG undefined FUN_1488be6d4(void)

void FUN_1488be6d4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[0x75] != param_2) && (param_2 != 0)) {
    local_58 = param_2;
    FUN_1446dcdd4(local_50);
    lVar4 = FUN_140a4bd48(local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      if (param_1[0x7a] != 0) {
        *(undefined1 *)(param_1[0x7a] + 0xa1) = 1;
        param_1[0x7a] = 0;
        plVar3 = (longlong *)param_1[0x7b];
        if (plVar3 != (longlong *)0x0) {
          param_1[0x7b] = 0;
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      if ((param_1[0x75] != param_2) || ((int)param_1[0x76] != 0x4000)) {
        param_1[0x75] = param_2;
        *(undefined4 *)(param_1 + 0x76) = 0x4000;
        param_1[0x77] = 0;
      }
      param_1[0x7c] = lVar4;
      if (*(char *)(param_1[0x15] + 0x178) == '\x03') {
        FUN_147f4321c(param_1,param_2);
      }
      if ((*(byte *)(param_1 + 0x55) & 0x20) == 0) {
        (**(code **)(*param_1 + 0x5f0))(param_1);
        (**(code **)(*param_1 + 0x5e8))(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488be82e FUN_1488be82e body=1 status=ok
// SIG undefined FUN_1488be82e(void)

void FUN_1488be82e(void)

{
  return;
}



// FUNCTION 1488be830 FUN_1488be830 body=1 status=ok
// SIG undefined FUN_1488be830(void)

void FUN_1488be830(void)

{
  return;
}



// FUNCTION 1488be832 FUN_1488be832 body=29 status=ok
// SIG undefined FUN_1488be832(void)

undefined8 FUN_1488be832(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be862 FUN_1488be862 body=38 status=ok
// SIG undefined FUN_1488be862(void)

undefined8 FUN_1488be862(undefined8 param_1,int param_2)

{
  FUN_140893974();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be88e FUN_1488be88e body=29 status=ok
// SIG undefined FUN_1488be88e(void)

undefined8 FUN_1488be88e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be8b2 FUN_1488be8b2 body=45 status=ok
// SIG undefined FUN_1488be8b2(void)

longlong FUN_1488be8b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145c30ca8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be8e0 FUN_1488be8e0 body=45 status=ok
// SIG undefined FUN_1488be8e0(void)

longlong FUN_1488be8e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c30ca8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be90e FUN_1488be90e body=52 status=ok
// SIG undefined FUN_1488be90e(void)

undefined8 * FUN_1488be90e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40f880;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be942 FUN_1488be942 body=38 status=ok
// SIG undefined FUN_1488be942(void)

undefined8 FUN_1488be942(undefined8 param_1,int param_2)

{
  FUN_140adedd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488be96e FUN_1488be96e body=116 status=ok
// SIG undefined FUN_1488be96e(void)

void FUN_1488be96e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_148754736(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488be9e4 FUN_1488be9e4 body=158 status=ok
// SIG undefined FUN_1488be9e4(void)

void FUN_1488be9e4(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x32c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x328) * 0x60) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)(param_1 + 0x32c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x328);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x60 + 4) = uVar5;
  *(int *)(param_1 + 0x328) = param_2;
  *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
  lVar4 = param_1 + 0x310;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x318);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1488bea82 FUN_1488bea82 body=316 status=ok
// SIG undefined FUN_1488bea82(void)

void FUN_1488bea82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_1488bebc0;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_120 = local_108;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 1;
      cVar3 = FUN_14493bb52(uVar4,*puVar1,&local_118,0);
      if (cVar3 == '\0') break;
      puVar1 = puVar8;
    } while (puVar8 != puVar2);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bebc0 FUN_1488bebc0 body=91 status=ok
// SIG undefined FUN_1488bebc0(void)

undefined8 FUN_1488bebc0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1488bec1c FUN_1488bec1c body=54 status=ok
// SIG undefined FUN_1488bec1c(void)

longlong FUN_1488bec1c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488bec52 FUN_1488bec52 body=132 status=ok
// SIG undefined FUN_1488bec52(void)

void FUN_1488bec52(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488becf2 FUN_1488becf2 body=29 status=ok
// SIG undefined FUN_1488becf2(void)

bool FUN_1488becf2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488bed10 FUN_1488bed10 body=101 status=ok
// SIG undefined FUN_1488bed10(void)

void FUN_1488bed10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488bed76 FUN_1488bed76 body=134 status=ok
// SIG undefined FUN_1488bed76(void)

void FUN_1488bed76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fb20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488beded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488bedfc FUN_1488bedfc body=44 status=ok
// SIG undefined FUN_1488bedfc(void)

void FUN_1488bedfc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488bee25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488bee28 FUN_1488bee28 body=146 status=ok
// SIG undefined FUN_1488bee28(void)

void FUN_1488bee28(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488beed4 FUN_1488beed4 body=29 status=ok
// SIG undefined FUN_1488beed4(void)

bool FUN_1488beed4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488beef2 FUN_1488beef2 body=26 status=ok
// SIG undefined FUN_1488beef2(void)

bool FUN_1488beef2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488bef16 FUN_1488bef16 body=152 status=ok
// SIG undefined FUN_1488bef16(void)

void FUN_1488bef16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fc00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001488befa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1488befae FUN_1488befae body=179 status=ok
// SIG undefined FUN_1488befae(void)

void FUN_1488befae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fc00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bf051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488bf062 FUN_1488bf062 body=44 status=ok
// SIG undefined FUN_1488bf062(void)

void FUN_1488bf062(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001488bf08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1488bf08e FUN_1488bf08e body=137 status=ok
// SIG undefined FUN_1488bf08e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488bf08e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
  UNLOCK();
  uVar1 = FUN_140134102(DAT_14cb77e48);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb77e48;
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1488bf118(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb77e48;
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1488bf118(param_1 + 4);
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1488bf118 FUN_1488bf118 body=61 status=ok
// SIG undefined FUN_1488bf118(void)

void FUN_1488bf118(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_140134102(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1488bf156 FUN_1488bf156 body=137 status=ok
// SIG undefined FUN_1488bf156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488bf156(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb716c0 = _DAT_14cb716c0 + 1;
  UNLOCK();
  uVar1 = FUN_1488bf1e0(DAT_14cb716b8);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb716b8;
  LOCK();
  _DAT_14cb716c0 = _DAT_14cb716c0 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1488bf262(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb716b8;
  LOCK();
  _DAT_14cb716c0 = _DAT_14cb716c0 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1488bf262(param_1 + 4);
  LOCK();
  _DAT_14cb716c0 = _DAT_14cb716c0 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1488bf1e0 FUN_1488bf1e0 body=130 status=ok
// SIG undefined FUN_1488bf1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488bf1e0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1488bf252:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1488bf252;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1488bf262 FUN_1488bf262 body=61 status=ok
// SIG undefined FUN_1488bf262(void)

void FUN_1488bf262(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_1488bf1e0(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1488bf2a0 FUN_1488bf2a0 body=137 status=ok
// SIG undefined FUN_1488bf2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488bf2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb8a420 = _DAT_14cb8a420 + 1;
  UNLOCK();
  uVar1 = FUN_1488bf32a(DAT_14cb8a418);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb8a418;
  LOCK();
  _DAT_14cb8a420 = _DAT_14cb8a420 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1488bf3ac(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb8a418;
  LOCK();
  _DAT_14cb8a420 = _DAT_14cb8a420 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1488bf3ac(param_1 + 4);
  LOCK();
  _DAT_14cb8a420 = _DAT_14cb8a420 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1488bf32a FUN_1488bf32a body=130 status=ok
// SIG undefined FUN_1488bf32a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488bf32a(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1488bf39c:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1488bf39c;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1488bf3ac FUN_1488bf3ac body=61 status=ok
// SIG undefined FUN_1488bf3ac(void)

void FUN_1488bf3ac(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_1488bf32a(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1488bf3ea FUN_1488bf3ea body=614 status=ok
// SIG undefined FUN_1488bf3ea(void)

void FUN_1488bf3ea(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_140c43e06(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488bf3ea(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bf652 FUN_1488bf652 body=308 status=ok
// SIG undefined FUN_1488bf652(void)

void FUN_1488bf652(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_140c43e06(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bf788 FUN_1488bf788 body=739 status=ok
// SIG undefined FUN_1488bf788(void)

void FUN_1488bf788(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488bf8ac:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488bf8c0;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488bf8ac;
LAB_1488bf8c0:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_140c43e06(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488bf788(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488bfa86 FUN_1488bfa86 body=29 status=ok
// SIG undefined FUN_1488bfa86(void)

bool FUN_1488bfa86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488bfaa4 FUN_1488bfaa4 body=101 status=ok
// SIG undefined FUN_1488bfaa4(void)

void FUN_1488bfaa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fcb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488bfb0a FUN_1488bfb0a body=101 status=ok
// SIG undefined FUN_1488bfb0a(void)

void FUN_1488bfb0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fcb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488bfb70 FUN_1488bfb70 body=134 status=ok
// SIG undefined FUN_1488bfb70(void)

void FUN_1488bfb70(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fcb0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bfbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488bfbf6 FUN_1488bfbf6 body=39 status=ok
// SIG undefined FUN_1488bfbf6(void)

void FUN_1488bfbf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488bfc19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1488bfc38 FUN_1488bfc38 body=101 status=ok
// SIG undefined FUN_1488bfc38(void)

void FUN_1488bfc38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fd20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488bfc9e FUN_1488bfc9e body=101 status=ok
// SIG undefined FUN_1488bfc9e(void)

void FUN_1488bfc9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fd20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488bfd04 FUN_1488bfd04 body=134 status=ok
// SIG undefined FUN_1488bfd04(void)

void FUN_1488bfd04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fd20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bfd7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488bfd8a FUN_1488bfd8a body=44 status=ok
// SIG undefined FUN_1488bfd8a(void)

void FUN_1488bfd8a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488bfdb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488bfdb6 FUN_1488bfdb6 body=156 status=ok
// SIG undefined FUN_1488bfdb6(void)

bool FUN_1488bfdb6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488bfe54 FUN_1488bfe54 body=510 status=ok
// SIG undefined FUN_1488bfe54(void)

void FUN_1488bfe54(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c0054 FUN_1488c0054 body=93 status=ok
// SIG undefined FUN_1488c0054(void)

void FUN_1488c0054(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1461f1464(param_1,param_2,1);
  return;
}



// FUNCTION 1488c00b2 FUN_1488c00b2 body=31 status=ok
// SIG undefined FUN_1488c00b2(void)

undefined8 FUN_1488c00b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c00e6 FUN_1488c00e6 body=85 status=ok
// SIG undefined FUN_1488c00e6(void)

void FUN_1488c00e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fe10;
  return;
}



// FUNCTION 1488c013c FUN_1488c013c body=118 status=ok
// SIG undefined FUN_1488c013c(void)

void FUN_1488c013c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40fe10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c01a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c01b2 FUN_1488c01b2 body=101 status=ok
// SIG undefined FUN_1488c01b2(void)

undefined8 FUN_1488c01b2(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e26496(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c0218 FUN_1488c0218 body=207 status=ok
// SIG undefined FUN_1488c0218(void)

int FUN_1488c0218(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1488c02e8 FUN_1488c02e8 body=382 status=ok
// SIG undefined FUN_1488c02e8(void)

undefined4 * FUN_1488c02e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146254d44(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar7);
    uVar7 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar2 & 1) != 0) && (uVar7 != 0)) {
    FUN_1456cec3c(uVar7);
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1488c0468(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1488bfe54(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c0468 FUN_1488c0468 body=171 status=ok
// SIG undefined FUN_1488c0468(void)

undefined8 FUN_1488c0468(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1488c0218(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1461f1464(param_1,*param_4,1);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1488c048c;
    }
  }
  uVar6 = 0;
LAB_1488c048c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c0514 FUN_1488c0514 body=254 status=ok
// SIG undefined FUN_1488c0514(void)

void FUN_1488c0514(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_50 = *param_2;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_48 = param_2[1];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1488c05de;
          goto LAB_1488c05ed;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1488c05de:
    FUN_14474d06a(param_1,0);
  }
LAB_1488c05ed:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c0614 FUN_1488c0614 body=132 status=ok
// SIG undefined FUN_1488c0614(void)

void FUN_1488c0614(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1488c0698 FUN_1488c0698 body=48 status=ok
// SIG undefined FUN_1488c0698(void)

void FUN_1488c0698(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1488c06c8 FUN_1488c06c8 body=107 status=ok
// SIG undefined FUN_1488c06c8(void)

/* WARNING: Removing unreachable block (ram,0x0001488c06fa) */
/* WARNING: Removing unreachable block (ram,0x0001488c06d6) */
/* WARNING: Removing unreachable block (ram,0x0001488c06ec) */
/* WARNING: Removing unreachable block (ram,0x0001488c0705) */
/* WARNING: Removing unreachable block (ram,0x0001488c06ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488c06c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb81b90;
  LOCK();
  UNLOCK();
  DAT_14cb81b90 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb81b98 = _DAT_14cb81b98 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb81b98 = _DAT_14cb81b98 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1488c0734 FUN_1488c0734 body=31 status=ok
// SIG undefined FUN_1488c0734(void)

undefined8 FUN_1488c0734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c0770 FUN_1488c0770 body=101 status=ok
// SIG undefined FUN_1488c0770(void)

void FUN_1488c0770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ff10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488c07d6 FUN_1488c07d6 body=101 status=ok
// SIG undefined FUN_1488c07d6(void)

void FUN_1488c07d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ff10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488c083c FUN_1488c083c body=134 status=ok
// SIG undefined FUN_1488c083c(void)

void FUN_1488c083c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ff10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c08b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c08d2 FUN_1488c08d2 body=62 status=ok
// SIG undefined FUN_1488c08d2(void)

void FUN_1488c08d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488c0910(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1488c0910 FUN_1488c0910 body=93 status=ok
// SIG undefined FUN_1488c0910(void)

ulonglong FUN_1488c0910(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1488c096e FUN_1488c096e body=147 status=ok
// SIG undefined FUN_1488c096e(void)

void FUN_1488c096e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3400);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1a0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3400,0,param_3,0x1a0);
    memmove(*(void **)((longlong)param_1 + 0x3400),param_1,(longlong)param_2 * 0x1a0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3400,param_2,param_3,0x1a0);
  return;
}



// FUNCTION 1488c0a02 FUN_1488c0a02 body=149 status=ok
// SIG undefined FUN_1488c0a02(void)

void FUN_1488c0a02(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x30);
  return;
}



// FUNCTION 1488c0a98 FUN_1488c0a98 body=107 status=ok
// SIG undefined FUN_1488c0a98(void)

/* WARNING: Removing unreachable block (ram,0x0001488c0aca) */
/* WARNING: Removing unreachable block (ram,0x0001488c0aa6) */
/* WARNING: Removing unreachable block (ram,0x0001488c0abc) */
/* WARNING: Removing unreachable block (ram,0x0001488c0ad5) */
/* WARNING: Removing unreachable block (ram,0x0001488c0abe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488c0a98(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb81908;
  LOCK();
  UNLOCK();
  DAT_14cb81908 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb81910 = _DAT_14cb81910 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb81910 = _DAT_14cb81910 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1488c0b1e FUN_1488c0b1e body=29 status=ok
// SIG undefined FUN_1488c0b1e(void)

bool FUN_1488c0b1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488c0b3c FUN_1488c0b3c body=101 status=ok
// SIG undefined FUN_1488c0b3c(void)

void FUN_1488c0b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ff80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488c0ba2 FUN_1488c0ba2 body=134 status=ok
// SIG undefined FUN_1488c0ba2(void)

void FUN_1488c0ba2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ff80;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c0c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c0c28 FUN_1488c0c28 body=39 status=ok
// SIG undefined FUN_1488c0c28(void)

void FUN_1488c0c28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488c0c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1488c0c50 FUN_1488c0c50 body=137 status=ok
// SIG undefined FUN_1488c0c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488c0c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb81910 = _DAT_14cb81910 + 1;
  UNLOCK();
  uVar1 = FUN_1488c0cda(DAT_14cb81908);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb81908;
  LOCK();
  _DAT_14cb81910 = _DAT_14cb81910 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1488c0d5c(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb81908;
  LOCK();
  _DAT_14cb81910 = _DAT_14cb81910 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1488c0d5c(param_1 + 4);
  LOCK();
  _DAT_14cb81910 = _DAT_14cb81910 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1488c0cda FUN_1488c0cda body=130 status=ok
// SIG undefined FUN_1488c0cda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488c0cda(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1488c0d4c:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1488c0d4c;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1488c0d5c FUN_1488c0d5c body=61 status=ok
// SIG undefined FUN_1488c0d5c(void)

void FUN_1488c0d5c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_1488c0cda(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1488c0db4 FUN_1488c0db4 body=29 status=ok
// SIG undefined FUN_1488c0db4(void)

bool FUN_1488c0db4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488c0dd2 FUN_1488c0dd2 body=26 status=ok
// SIG undefined FUN_1488c0dd2(void)

bool FUN_1488c0dd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488c0dec FUN_1488c0dec body=24 status=ok
// SIG undefined FUN_1488c0dec(void)

bool FUN_1488c0dec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488c0e04 FUN_1488c0e04 body=101 status=ok
// SIG undefined FUN_1488c0e04(void)

void FUN_1488c0e04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488c0e6a FUN_1488c0e6a body=101 status=ok
// SIG undefined FUN_1488c0e6a(void)

void FUN_1488c0e6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488c0ed0 FUN_1488c0ed0 body=134 status=ok
// SIG undefined FUN_1488c0ed0(void)

void FUN_1488c0ed0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410110;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c0f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c0f56 FUN_1488c0f56 body=44 status=ok
// SIG undefined FUN_1488c0f56(void)

void FUN_1488c0f56(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488c0f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488c0f82 FUN_1488c0f82 body=31 status=ok
// SIG undefined FUN_1488c0f82(void)

undefined8 FUN_1488c0f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c0fb6 FUN_1488c0fb6 body=85 status=ok
// SIG undefined FUN_1488c0fb6(void)

void FUN_1488c0fb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410190;
  return;
}



// FUNCTION 1488c100c FUN_1488c100c body=118 status=ok
// SIG undefined FUN_1488c100c(void)

void FUN_1488c100c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410190;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c1073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c1082 FUN_1488c1082 body=105 status=ok
// SIG undefined FUN_1488c1082(void)

undefined8 FUN_1488c1082(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14600d89a(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c10ec FUN_1488c10ec body=45 status=ok
// SIG undefined FUN_1488c10ec(void)

longlong FUN_1488c10ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1459ad4b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c111a FUN_1488c111a body=54 status=ok
// SIG undefined FUN_1488c111a(void)

longlong FUN_1488c111a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c1150 FUN_1488c1150 body=48 status=ok
// SIG undefined FUN_1488c1150(void)

void FUN_1488c1150(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488c1180 FUN_1488c1180 body=308 status=ok
// SIG undefined FUN_1488c1180(void)

void FUN_1488c1180(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14141ccc8(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c12b6 FUN_1488c12b6 body=96 status=ok
// SIG undefined FUN_1488c12b6(void)

void FUN_1488c12b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1488c1316 FUN_1488c1316 body=614 status=ok
// SIG undefined FUN_1488c1316(void)

void FUN_1488c1316(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14127129c(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488c1316(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c157e FUN_1488c157e body=308 status=ok
// SIG undefined FUN_1488c157e(void)

void FUN_1488c157e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14127129c(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c16b4 FUN_1488c16b4 body=739 status=ok
// SIG undefined FUN_1488c16b4(void)

void FUN_1488c16b4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488c17d8:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488c17ec;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488c17d8;
LAB_1488c17ec:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_14127129c(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488c16b4(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c1998 FUN_1488c1998 body=96 status=ok
// SIG undefined FUN_1488c1998(void)

void FUN_1488c1998(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1488c19f8 FUN_1488c19f8 body=614 status=ok
// SIG undefined FUN_1488c19f8(void)

void FUN_1488c19f8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_141143d42(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488c19f8(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c1c60 FUN_1488c1c60 body=308 status=ok
// SIG undefined FUN_1488c1c60(void)

void FUN_1488c1c60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_141143d42(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c1d96 FUN_1488c1d96 body=739 status=ok
// SIG undefined FUN_1488c1d96(void)

void FUN_1488c1d96(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488c1eba:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488c1ece;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488c1eba;
LAB_1488c1ece:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_141143d42(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488c1d96(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


