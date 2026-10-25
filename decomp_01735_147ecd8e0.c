// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ecd8e0 FUN_147ecd8e0 body=109 status=ok
// SIG undefined FUN_147ecd8e0(void)

void FUN_147ecd8e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if ((*param_2 == *(longlong *)(param_1 + 0x10)) &&
     ((*(char *)(param_1 + 0x1c) != '\x01' ||
      (((iVar1 = *(int *)(param_1 + 0x18), iVar1 != -1 && (iVar2 = (int)param_2[2], iVar2 != -1)) &&
       ((iVar1 == 0 || ((iVar2 == iVar1 || (iVar2 == 0)))))))))) {
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    if ((*(int *)(param_1 + 0x28) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ecd942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar4,param_2,*(code **)(*plVar3 + 0x60));
      return;
    }
  }
  return;
}



// FUNCTION 147ecd94e FUN_147ecd94e body=200 status=ok
// SIG undefined FUN_147ecd94e(void)

void FUN_147ecd94e(longlong param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  sVar1 = *(short *)(param_1 + 0x48);
  FUN_147ea5e7c(param_1 + 0x38);
  if (sVar1 == 0) {
    FUN_147ea5f2c(param_1 + 0x38,&local_48);
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(local_38,L"Locking Resource with source %s",puVar2);
    (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a0))(param_1 + -0x110,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ecda18 FUN_147ecda18 body=132 status=ok
// SIG undefined FUN_147ecda18(void)

void FUN_147ecda18(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147ea5ea0(param_1 + 0x38);
  if (*(short *)(param_1 + 0x48) == 0) {
    FUN_140056680(local_30,L"unlocked");
    (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a8))(param_1 + -0x110,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecda9e FUN_147ecda9e body=123 status=ok
// SIG undefined FUN_147ecda9e(void)

void FUN_147ecda9e(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147ea5ed0(param_1 + 0x38);
  FUN_140056680(local_30,L"unlocked: forced");
  (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a8))(param_1 + -0x110,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecdb24 FUN_147ecdb24 body=93 status=ok
// SIG undefined FUN_147ecdb24(void)

void FUN_147ecdb24(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a3ee64();
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_147ecdb60;
    }
  }
  lVar2 = 0;
LAB_147ecdb60:
  *(longlong *)(param_1 + 0x120) = lVar2;
  return;
}



// FUNCTION 147ecdb82 FUN_147ecdb82 body=101 status=ok
// SIG undefined FUN_147ecdb82(void)

void FUN_147ecdb82(longlong param_1)

{
  longlong lVar1;
  
  FUN_14134c582();
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return;
  }
  lVar1 = FUN_147ea2fb2();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x118) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    *(longlong *)(param_1 + 0x118) = lVar1;
  }
  FUN_147eac504(lVar1,param_1);
  return;
}



// FUNCTION 147ecdbe8 FUN_147ecdbe8 body=228 status=ok
// SIG undefined FUN_147ecdbe8(void)

void FUN_147ecdbe8(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x130);
  lVar6 = (longlong)iVar2;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x140);
    lVar7 = 0;
    do {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x10 + lVar7 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x128) + lVar7 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      if (0 < (int)uVar4) {
        lVar8 = 0;
        do {
          FUN_147ecd8e0(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar8 * 8),&local_48);
          lVar8 = lVar8 + 1;
          uVar4 = (ulonglong)*(int *)(param_1 + 0x140);
        } while (lVar8 < (longlong)uVar4);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
    iVar3 = *(int *)(param_1 + 0x130) - iVar2;
    iVar5 = iVar2;
    if (iVar3 != 0) {
      memmove(*(void **)(param_1 + 0x128),
              (void *)((longlong)*(void **)(param_1 + 0x128) + lVar6 * 0x18),(longlong)iVar3 * 0x18)
      ;
      iVar5 = *(int *)(param_1 + 0x130);
    }
    *(int *)(param_1 + 0x130) = iVar5 - iVar2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecdcce FUN_147ecdcce body=50 status=ok
// SIG undefined FUN_147ecdcce(void)

void FUN_147ecdcce(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x118) = param_2;
  }
  return;
}



// FUNCTION 147ecdd00 FUN_147ecdd00 body=84 status=ok
// SIG undefined FUN_147ecdd00(void)

void FUN_147ecdd00(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x134) < iVar2 + 1U) {
    FUN_147ed65a6((longlong *)(param_1 + 0x128),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x128);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 147ecdd54 FUN_147ecdd54 body=42 status=ok
// SIG undefined FUN_147ecdd54(void)

void FUN_147ecdd54(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x28))(param_1 + 0x110);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 1;
  }
  return;
}



// FUNCTION 147ecdd7e FUN_147ecdd7e body=45 status=ok
// SIG undefined FUN_147ecdd7e(void)

bool FUN_147ecdd7e(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x2c) & 1) != 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
    (**(code **)(*param_1 + 0x488))();
  }
  return bVar1;
}



// FUNCTION 147ecddc8 FUN_147ecddc8 body=56 status=ok
// SIG undefined FUN_147ecddc8(void)

undefined8 FUN_147ecddc8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)*param_1)(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2,param_1[3]);
  }
  return param_2;
}



// FUNCTION 147ecde00 FUN_147ecde00 body=32 status=ok
// SIG undefined FUN_147ecde00(void)

undefined8 FUN_147ecde00(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_14a35cb10);
  return param_2;
}



// FUNCTION 147ecde2c FUN_147ecde2c body=355 status=ok
// SIG undefined FUN_147ecde2c(void)

void FUN_147ecde2c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca30);
  if (DAT_14cb1fa28 == 0) {
    uVar4 = FUN_140d9472b();
    DAT_14cb1fa28 = FUN_140002ddd(FUN_14642bcbf,uVar4,L"AIDataProviderTypedValue");
  }
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    FUN_14496b17c(0,param_2,param_1,DAT_14cb1fa28,0,0);
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3ca30);
  if (3 < iVar3) {
    FUN_14689ad6a(param_2,param_1 + 0x28);
    return;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  plVar5 = (longlong *)FUN_1403a5ef6();
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar8 = (uint)lVar1 & 0xffff;
    plVar7 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar5[8];
    }
    iVar3 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)plVar5[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar6 = 0;
      do {
        plVar7 = (longlong *)(*plVar5 + (longlong)iVar3 * 0x18);
        if (*plVar7 == lVar1) {
          if (plVar7 == (longlong *)0x0) goto LAB_147ecdee2;
          lVar6 = plVar7[1];
          break;
        }
        iVar3 = (int)plVar7[2];
      } while (iVar3 != -1);
      goto LAB_147ecdee4;
    }
  }
LAB_147ecdee2:
  lVar6 = 0;
LAB_147ecdee4:
  *(longlong *)(param_1 + 0x28) = lVar6;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 147ecdf90 FUN_147ecdf90 body=311 status=ok
// SIG undefined FUN_147ecdf90(void)

ulonglong FUN_147ecdf90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_147ece08b:
    uVar5 = 0;
    goto LAB_147ece08d;
  }
  lVar3 = param_2[1];
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (!bVar7) goto LAB_147ece08b;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_147ece08b;
  (**(code **)(*param_2 + 0x70))(param_2,&local_38,0,0);
  uVar2 = local_30 - 1;
  if (local_30 == 0) {
    uVar2 = 0;
  }
  uVar4 = 8;
  if ((int)uVar2 < 8) {
    uVar4 = uVar2;
  }
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  if (0 < (int)uVar2) {
    iVar6 = local_30 - (int)uVar5;
    if (iVar6 != 0) {
      memmove(local_38,(void *)((longlong)local_38 + uVar5 * 2),(longlong)iVar6 * 2);
    }
    local_30 = local_30 - (int)uVar5;
  }
  if (local_30 == *(int *)(param_1 + 0x28)) {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    if (1 < local_30) {
      iVar6 = FUN_144a80a00(local_38,*(undefined8 *)(param_1 + 0x20));
      bVar7 = iVar6 == 0;
      goto LAB_147ece0b5;
    }
  }
  else {
    bVar7 = *(int *)(param_1 + 0x28) + local_30 == 1;
LAB_147ece0b5:
    uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar7);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
LAB_147ece08d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ece0c8 FUN_147ece0c8 body=35 status=ok
// SIG undefined FUN_147ece0c8(void)

undefined4 FUN_147ece0c8(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44) + *(longlong *)(param_1 + 0x10))
    ;
  }
  puVar2 = (undefined4 *)(param_1 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  return *puVar2;
}



// FUNCTION 147ece0ec FUN_147ece0ec body=36 status=ok
// SIG undefined FUN_147ece0ec(void)

undefined8 FUN_147ece0ec(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,&DAT_149e063bc,*(undefined4 *)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 147ece110 FUN_147ece110 body=36 status=ok
// SIG undefined FUN_147ece110(void)

undefined8 FUN_147ece110(longlong param_1,undefined8 param_2)

{
  FUN_1406112c4(param_2,(double)*(float *)(param_1 + 0x30),1);
  return param_2;
}



// FUNCTION 147ece134 FUN_147ece134 body=35 status=ok
// SIG undefined FUN_147ece134(void)

undefined8 FUN_147ece134(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44) + *(longlong *)(param_1 + 0x10))
    ;
  }
  puVar2 = (undefined1 *)(param_1 + 0x30);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar2);
}



// FUNCTION 147ece158 FUN_147ece158 body=106 status=ok
// SIG undefined FUN_147ece158(void)

undefined8 * FUN_147ece158(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140932b5c();
  puVar3 = (undefined8 *)
           FUN_1447a1f4a(*(undefined8 *)(lVar2 + (ulonglong)(*(byte *)(param_1 + 0x30) ^ 1) * 8));
  *param_2 = 0;
  iVar1 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147ece1c4 FUN_147ece1c4 body=266 status=ok
// SIG undefined FUN_147ece1c4(void)

undefined8 * FUN_147ece1c4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Dst;
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  local_20 = param_3;
  FUN_1400021e4();
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 != 0) {
    _Dst = (void *)*param_2;
    uVar2 = 1;
    lVar4 = 0;
    do {
      if (*(short *)((longlong)_Dst + lVar4) == 0x5f) {
        if (uVar2 != 0) {
          uVar3 = iVar1 - 1;
          if (iVar1 == 0) {
            uVar3 = 0;
          }
          if ((int)uVar2 < (int)uVar3) {
            uVar3 = uVar2;
          }
          if (0 < (int)uVar3) {
            if (iVar1 - uVar3 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar3 * 2),
                      (longlong)(int)(iVar1 - uVar3) * 2);
              iVar1 = *(int *)(param_2 + 1);
            }
            *(uint *)(param_2 + 1) = iVar1 - uVar3;
          }
        }
        break;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 2;
    } while ((longlong)iVar1 * 2 != lVar4);
  }
  FUN_140002184(param_2,0x2e);
  FUN_1400021e4(&local_20,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ece2da FUN_147ece2da body=75 status=ok
// SIG undefined FUN_147ece2da(void)

void FUN_147ece2da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_147ece326(param_2);
  if (lVar2 == 0) {
    fVar3 = 0.0;
    bVar1 = false;
  }
  else {
    fVar3 = (float)FUN_147ece382(lVar2,param_3,*(undefined8 *)(param_1 + 0x28));
    bVar1 = 0.0 < fVar3;
  }
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x30) = fVar3;
  *(bool *)(param_1 + 0x38) = bVar1;
  return;
}



// FUNCTION 147ece326 FUN_147ece326 body=92 status=ok
// SIG undefined FUN_147ece326(void)

undefined8 FUN_147ece326(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x110);
    }
  }
  return 0;
}



// FUNCTION 147ece382 FUN_147ece382 body=570 status=ok
// SIG undefined FUN_147ece382(void)

undefined4 FUN_147ece382(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  
  iVar5 = (int)((ulonglong)param_3 >> 0x20);
  uVar8 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar7 = (ushort)param_3;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar10 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x98);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      while (lVar10 = *(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x20,
            *(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x20) != param_2) {
        iVar9 = *(int *)(lVar10 + 0x18);
        if (iVar9 == -1) goto LAB_147ece397;
      }
      if (lVar10 == 0) goto LAB_147ece397;
      plVar2 = *(longlong **)(lVar10 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      iVar9 = (int)plVar2[1];
      do {
        if (iVar9 == 0) {
          return 0;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar11 = iVar9 == iVar4;
        if (bVar11) {
          *(int *)(plVar2 + 1) = iVar9 + 1;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
        UNLOCK();
      } while (!bVar11);
      lVar10 = *(longlong *)(lVar10 + 8);
      uVar12 = 0;
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x78) != *(int *)(lVar10 + 0xa4))) {
        lVar6 = lVar10 + 0xa8;
        if (*(longlong *)(lVar10 + 0xb0) != 0) {
          lVar6 = *(longlong *)(lVar10 + 0xb0);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar10 + 0xb8) - 1U &
                                 iVar5 + ((int)param_3 << 0x10 | (uint)uVar7) +
                                 ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            plVar3 = (longlong *)(*(longlong *)(lVar10 + 0x70) + (longlong)iVar5 * 0x14);
            if (*plVar3 == param_3) {
              if (plVar3 != (longlong *)0x0) {
                uVar12 = (undefined4)plVar3[1];
              }
              break;
            }
            iVar5 = *(int *)((longlong)plVar3 + 0xc);
          } while (iVar5 != -1);
        }
      }
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return uVar12;
      }
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return uVar12;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar12;
    }
  }
LAB_147ece397:
  if ((longlong)*(int *)(param_1 + 0x48) < 1) {
    return 0;
  }
  lVar10 = 0;
  while (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar10),
        *(uint *)(lVar6 + 0x30) != param_2) {
    lVar10 = lVar10 + 0x10;
    if ((longlong)*(int *)(param_1 + 0x48) * 0x10 == lVar10) {
      return 0;
    }
  }
  if (*(int *)(lVar6 + 0x78) == *(int *)(lVar6 + 0xa4)) {
    return 0;
  }
  lVar10 = lVar6 + 0xa8;
  if (*(longlong *)(lVar6 + 0xb0) != 0) {
    lVar10 = *(longlong *)(lVar6 + 0xb0);
  }
  iVar5 = *(int *)(lVar10 + (ulonglong)
                            (*(int *)(lVar6 + 0xb8) - 1U &
                            ((int)param_3 << 0x10 | (uint)uVar7) + iVar5 +
                            ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar7 >> 4)) * 4);
  if (iVar5 == -1) {
    return 0;
  }
  do {
    plVar2 = (longlong *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar5 * 0x14);
    if (*plVar2 == param_3) {
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      return (int)plVar2[1];
    }
    iVar5 = *(int *)((longlong)plVar2 + 0xc);
  } while (iVar5 != -1);
  return 0;
}



// FUNCTION 147ece5bc FUN_147ece5bc body=123 status=ok
// SIG undefined FUN_147ece5bc(void)

undefined8 FUN_147ece5bc(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0x28,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"QueryParam.%s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ece6b6 FUN_147ece6b6 body=32 status=ok
// SIG undefined FUN_147ece6b6(void)

undefined8 FUN_147ece6b6(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Random number");
  return param_2;
}



// FUNCTION 147ece6da FUN_147ece6da body=209 status=ok
// SIG undefined FUN_147ece6da(void)

void FUN_147ece6da(longlong *param_1,undefined8 param_2,undefined8 param_3,void **param_4)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_40 = param_2;
  local_38 = param_3;
  FUN_1457246e8(&local_30,param_4);
  uVar2 = FUN_14477b072(param_1,DAT_14cb1faf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_40);
  _Src = local_30;
  if (&local_30 != param_4) {
    iVar1 = (int)uStack_28;
    lVar3 = (longlong)(int)uStack_28;
    *(int *)(param_4 + 1) = (int)uStack_28;
    if ((int)uStack_28 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    }
    else {
      FUN_1457242e8(param_4,uStack_28 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(*param_4,_Src,lVar3 << 3);
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ece7ac FUN_147ece7ac body=210 status=ok
// SIG undefined FUN_147ece7ac(void)

void FUN_147ece7ac(longlong *param_1,undefined8 param_2,undefined8 param_3,void **param_4)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_40 = param_2;
  local_38 = param_3;
  FUN_1405b70a4(&local_30,param_4);
  uVar2 = FUN_14477b072(param_1,DAT_14cb1fb08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_40);
  _Src = local_30;
  if (&local_30 != param_4) {
    iVar1 = (int)uStack_28;
    lVar3 = (longlong)(int)uStack_28;
    *(int *)(param_4 + 1) = (int)uStack_28;
    if ((int)uStack_28 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    }
    else {
      FUN_1405b70fe(param_4,uStack_28 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(*param_4,_Src,lVar3 * 0x18);
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ece884 FUN_147ece884 body=1102 status=ok
// SIG undefined FUN_147ece884(void)

void FUN_147ece884(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 *local_b8;
  double dStack_b0;
  double local_a8;
  double *local_98;
  double *pdStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pdVar6 = (double *)FUN_14479d2ce(param_2 + 0x34);
  if ((pdVar6 == (double *)0x0) || ((int)param_1[5] == 0)) goto switchD_147ece91b_default;
  lVar7 = FUN_144a6c4d8();
  if ((*(int *)((longlong)pdVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (pdVar11 = pdVar6,
     *(longlong *)(*(longlong *)((longlong)pdVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
     != lVar7 + 0x30)) {
    pdVar11 = (double *)0x0;
  }
  switch((int)param_1[5]) {
  case 1:
    local_88 = (undefined8 *)0x0;
    local_98 = pdVar6;
    pdStack_90 = pdVar11;
    uVar8 = FUN_14477b072(param_1,DAT_14cb1fb18);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_98);
    if (local_88 != (undefined8 *)0x0) {
      FUN_147ee79a0(param_3);
    }
    break;
  case 2:
    local_88 = (undefined8 *)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0);
    uStack_80 = (undefined4)DAT_14cb1f0a8;
    uStack_7c = DAT_14cb1f0a8._4_4_;
    local_78 = DAT_14cb1f0b0;
    local_98 = pdVar6;
    pdStack_90 = pdVar11;
    uVar8 = FUN_14477b072(param_1,DAT_14cb1fb28);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_98);
    local_a8 = local_78;
    local_b8 = local_88;
    dStack_b0 = (double)CONCAT44(uStack_7c,uStack_80);
    if (((((-(double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0) < (double)local_88) &&
          ((double)local_88 < (double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0))) &&
         (-(double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8) < dStack_b0)) &&
        ((dStack_b0 < (double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8) &&
         (-DAT_14cb1f0b0 < local_78)))) && (local_78 < DAT_14cb1f0b0)) {
      FUN_147ee7e58(param_3,&local_b8);
    }
    break;
  case 3:
    local_98 = (double *)0x0;
    pdStack_90 = (double *)0x0;
    FUN_147ece6da(param_1,pdVar6,pdVar11,&local_98);
    local_b8 = &local_c0;
    local_c0 = 0;
    FUN_147ed663a(&local_98);
    if ((int)pdStack_90 != 0) {
      FUN_147ee7a38(param_3,&local_98);
    }
    goto LAB_147eceadf;
  case 4:
    local_98 = (double *)0x0;
    pdStack_90 = (double *)0x0;
    FUN_147ece7ac(param_1,pdVar6,pdVar11,&local_98);
    pdVar11 = pdStack_90;
    pdVar6 = local_98;
    iVar4 = (int)pdStack_90;
    uVar10 = (ulonglong)(int)pdStack_90;
    if (uVar10 != 0) {
      dVar17 = (double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8);
      if ((*local_98 <= -(double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0)) ||
         ((double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0) <= *local_98)) {
        bVar5 = true;
      }
      else {
        bVar5 = true;
        if (((-dVar17 < local_98[1]) && (local_98[1] < dVar17)) && (-DAT_14cb1f0b0 < local_98[2])) {
          bVar5 = DAT_14cb1f0b0 <= local_98[2];
        }
      }
      iVar9 = 0;
      uVar14 = 0;
      uVar15 = (undefined4)DAT_14cb1f0a0;
      uVar16 = DAT_14cb1f0a0._4_4_;
      dVar18 = DAT_14cb1f0b0;
      do {
        while( true ) {
          iVar3 = (int)uVar14;
          uVar14 = (ulonglong)(iVar3 + 1U);
          lVar7 = (longlong)iVar3;
          if (iVar4 <= (int)(iVar3 + 1U)) break;
          uVar14 = lVar7 + 1;
          pdVar12 = pdVar6 + lVar7 * 3 + 5;
          bVar2 = true;
          do {
            dVar1 = pdVar12[-2];
            if (((dVar1 <= -(double)CONCAT44(uVar16,uVar15)) ||
                ((double)CONCAT44(uVar16,uVar15) < dVar1 || (double)CONCAT44(uVar16,uVar15) == dVar1
                )) || ((pdVar12[-1] <= -dVar17 || ((dVar17 <= pdVar12[-1] || (*pdVar12 <= -dVar18)))
                       ))) {
              if (bVar5 == false) goto LAB_147ecec61;
            }
            else if (dVar18 <= *pdVar12 != bVar5) goto LAB_147ecec45;
            uVar14 = uVar14 + 1;
            bVar2 = (longlong)uVar14 < (longlong)uVar10;
            pdVar12 = pdVar12 + 3;
          } while (uVar10 != uVar14);
          uVar14 = (ulonglong)pdVar11 & 0xffffffff;
LAB_147ecec45:
          if (bVar5 == false) goto LAB_147ecec61;
          bVar5 = false;
          if (!bVar2) goto LAB_147ececb5;
        }
        if (bVar5 != false) break;
        bVar2 = false;
LAB_147ecec61:
        iVar13 = (int)uVar14 - iVar3;
        if (iVar9 != iVar3) {
          memmove(pdVar6 + (longlong)iVar9 * 3,pdVar6 + lVar7 * 3,(longlong)iVar13 * 0x18);
          dVar17 = (double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8);
          uVar15 = (undefined4)DAT_14cb1f0a0;
          uVar16 = DAT_14cb1f0a0._4_4_;
          dVar18 = DAT_14cb1f0b0;
        }
        iVar9 = iVar9 + iVar13;
        bVar5 = true;
      } while (bVar2);
LAB_147ececb5:
      pdStack_90 = (double *)CONCAT44(pdStack_90._4_4_,iVar9);
      if (iVar9 != 0) {
        FUN_147ee7ec2(param_3,&local_98);
      }
    }
LAB_147eceadf:
    if (local_98 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
switchD_147ece91b_default:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ececd4 FUN_147ececd4 body=72 status=ok
// SIG undefined FUN_147ececd4(void)

undefined8 FUN_147ececd4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145a57e26();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147eced15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147eced24 FUN_147eced24 body=77 status=ok
// SIG undefined FUN_147eced24(void)

void FUN_147eced24(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_2 + 0x34);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147eced60;
  }
  lVar1 = 0;
LAB_147eced60:
  FUN_147ee79a0(param_3,lVar1);
  return;
}



// FUNCTION 147eced76 FUN_147eced76 body=45 status=ok
// SIG undefined FUN_147eced76(void)

void FUN_147eced76(longlong param_1)

{
  char cVar1;
  
  FUN_1446e0b6e();
  if ((*(longlong *)(param_1 + 0x30) != 0) && (cVar1 = FUN_144a846f6(), cVar1 != '\0')) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ecedc6 FUN_147ecedc6 body=31 status=ok
// SIG undefined FUN_147ecedc6(void)

void FUN_147ecedc6(longlong *param_1)

{
  FUN_1446e0b6e();
                    /* WARNING: Could not recover jumptable at 0x000147ecedde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1);
  return;
}



// FUNCTION 147ecede6 FUN_147ecede6 body=581 status=ok
// SIG undefined FUN_147ecede6(void)

longlong FUN_147ecede6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_2;
  if (lVar4 == 0) {
LAB_147ecee35:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1411b2cec();
    if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147ecee35;
    lVar4 = *param_2;
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar4 = *(longlong *)(lVar4 + 0x18);
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar5 = (uint)lVar4 & 0xffff;
    lVar3 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar4) {
          if ((plVar1 != (longlong *)0x0) && (lVar4 = plVar1[1], lVar4 != 0)) goto LAB_147ecefa6;
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar1[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar4 = plVar1[0x22];
    }
  }
  local_68 = 0xfff00007;
  local_70 = 0;
  local_78 = 0;
  lVar4 = FUN_14092e7b3(lVar4,param_1,0,0xffffffff);
  local_58 = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar6 = *(int *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xc0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xc4) < iVar6 + 1U) {
    FUN_147ed8632((longlong *)(param_1 + 0xb8),iVar6);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 8) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_1411b2cec();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar4 = *param_2;
      goto LAB_147ecefcd;
    }
  }
  lVar4 = 0;
LAB_147ecefcd:
  local_60 = *(undefined8 *)(lVar4 + 0x18);
  local_50 = &local_60;
  local_48 = &local_58;
  FUN_147ed86b8((longlong *)(param_1 + 0xd8),local_3c);
  lVar4 = local_58;
LAB_147ecefa6:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecf02c FUN_147ecf02c body=76 status=ok
// SIG undefined FUN_147ecf02c(void)

longlong * FUN_147ecf02c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_1447a122a(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147ecf078 FUN_147ecf078 body=491 status=ok
// SIG undefined FUN_147ecf078(void)

ulonglong FUN_147ecf078(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    local_60 = (longlong *)0x0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    cVar3 = FUN_14384d506();
    plVar6 = local_60;
    if ((((cVar3 != '\0') && (local_60 != (longlong *)0x0)) &&
        (lVar4 = FUN_1412474be(), plVar9 = local_60, lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= (int)plVar6[7] &&
        (local_60 != (longlong *)0x0 &&
         *(longlong *)(plVar6[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)))) {
      lVar4 = FUN_1412474be();
      if ((lVar4 == 0) ||
         (((int)plVar9[7] < *(int *)(lVar4 + 0x38) ||
          (plVar6 = local_60,
          *(longlong *)(plVar9[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)))) {
        plVar6 = (longlong *)0x0;
      }
      lVar4 = FUN_1459eb736();
      plVar9 = local_60;
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= (int)plVar6[7])) &&
         (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        if (((local_60 == (longlong *)0x0) || (lVar4 = FUN_1412474be(), lVar4 == 0)) ||
           (((int)plVar9[7] < *(int *)(lVar4 + 0x38) ||
            (plVar6 = local_60,
            *(longlong *)(plVar9[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)))) {
          plVar6 = (longlong *)0x0;
        }
        plVar9 = (longlong *)plVar6[0x22];
        if (plVar9 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          plVar9 = (longlong *)plVar6[0x22];
        }
        lVar4 = local_50;
        if (local_58 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_58);
        }
        uVar1 = *(ushort *)(plVar9 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_58) {
          FUN_140c5c1ec(param_3);
        }
        if (0 < local_58) {
          iVar7 = 0;
          do {
            lVar5 = (**(code **)(*plVar9 + 0x2c8))(plVar9,lVar4);
            if (lVar5 != 0) {
              iVar2 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                FUN_1447d05f2(param_3,iVar2);
              }
              *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar5;
            }
            lVar4 = lVar4 + (ulonglong)uVar1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_58);
        }
      }
    }
    uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),0 < (int)param_3[1]);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147ecf266 FUN_147ecf266 body=144 status=ok
// SIG undefined FUN_147ecf266(void)

void FUN_147ecf266(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x13e) & 2) == 0) {
    FUN_147ed8fb0(*(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x110) + 8 + (longlong)*(int *)(param_1 + 0x2c) * 0x30
                     ) + (longlong)*(int *)(param_1 + 0x120) * 8),param_1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x134);
  FUN_147ed369c(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_147ed7514(param_1 + 0x128,0);
    return;
  }
  return;
}



// FUNCTION 147ecf2f6 FUN_147ecf2f6 body=204 status=ok
// SIG undefined FUN_147ecf2f6(void)

longlong FUN_147ecf2f6(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147ecf3c4(param_1,param_3,param_4);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x49);
  bVar1 = *(byte *)(param_1 + 0x22) & 0xfb | ((*(byte *)(param_2 + 0x34) & 0xfd) == 0) << 2;
  *(byte *)(param_1 + 0x22) = bVar1;
  if (*(double *)(param_3 + 0x150) <= 0.0) {
    dVar2 = -1.0;
  }
  else {
    QueryPerformanceCounter(&local_28);
    dVar2 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0 + *(double *)(param_3 + 0x150);
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  *(double *)(param_1 + 0x10) = dVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x22) = (bVar1 & 0xfc) + 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecf3c4 FUN_147ecf3c4 body=99 status=ok
// SIG undefined FUN_147ecf3c4(void)

void FUN_147ecf3c4(undefined8 *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  iVar2 = param_3;
  if (param_3 == -1) {
    iVar2 = *(int *)((longlong)param_2 + 0x124);
  }
  *(int *)(param_1 + 1) = iVar2;
  if (param_3 == -1) {
    iVar2 = *(int *)((longlong)param_2 + 0x124);
    lVar3 = (longlong)iVar2;
    *(int *)(param_1 + 1) = iVar2;
    if (lVar3 < 0) goto LAB_147ecf408;
    if ((int)param_2[1] <= iVar2) goto LAB_147ecf408;
    uVar1 = *(uint *)(*param_2 + 4 + lVar3 * 8);
    while( true ) {
      if (uVar1 < 0x40000000) {
        return;
      }
LAB_147ecf408:
      lVar3 = lVar3 + 1;
      *(int *)(param_1 + 1) = (int)lVar3;
      if ((int)param_2[1] <= lVar3) break;
      uVar1 = *(uint *)(*param_2 + 4 + lVar3 * 8);
    }
    return;
  }
  *(int *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 147ecf428 FUN_147ecf428 body=356 status=ok
// SIG undefined FUN_147ecf428(void)

void FUN_147ecf428(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if ((bVar2 & 2) != 0) goto LAB_147ecf451;
  if (*(short *)((longlong)param_1 + 0x1e) == 0) {
    bVar2 = bVar2 & 0xfc;
  }
  else if ((bVar2 & 4) == 0) {
    bVar2 = bVar2 | 1;
  }
  else {
    if ((char)param_1[4] == '\0') {
      if ((bVar2 & 1) == 0) goto LAB_147ecf55e;
      bVar4 = *(short *)((longlong)param_1 + 0x1c) == *(short *)((longlong)param_1 + 0x1e);
    }
    else if ((bVar2 & 1) == 0) {
LAB_147ecf55e:
      bVar4 = false;
    }
    else {
      bVar4 = 0 < *(short *)((longlong)param_1 + 0x1c);
    }
    bVar2 = bVar2 & 0xfc | bVar4;
  }
  *(byte *)((longlong)param_1 + 0x22) = bVar2;
LAB_147ecf451:
  _isnan((double)*(float *)(param_1 + 3));
  plVar3 = (longlong *)*param_1;
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if ((*(byte *)((longlong)plVar3 + 0x13e) & 2) == 0) {
    if ((bVar2 & 5) == 4) {
      *(undefined4 *)(param_1 + 3) = 0xbf800000;
      puVar1 = (uint *)(*plVar3 + 4 + (longlong)(int)param_1[1] * 8);
      *puVar1 = *puVar1 | 0x80000000;
      *(int *)(*param_1 + 0x138) = *(int *)(*param_1 + 0x138) + -1;
      plVar3 = (longlong *)*param_1;
    }
    else if ((bVar2 & 2) == 0 && *(char *)((longlong)param_1 + 0x21) == '\0') {
      if (*(short *)((longlong)param_1 + 0x1c) == 0) {
        *(undefined4 *)(param_1 + 3) = 0;
      }
      else {
        *(float *)(param_1 + 3) =
             *(float *)(param_1 + 3) / (float)(int)*(short *)((longlong)param_1 + 0x1c);
      }
    }
    *(int *)(*(longlong *)(plVar3[0x25] + (longlong)(int)param_1[1] * 0x10) +
            (longlong)(int)plVar3[0x24] * 4) = (int)param_1[3];
  }
  else if ((bVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 3) = 0xbf800000;
    puVar1 = (uint *)(*plVar3 + 4 + (longlong)(int)param_1[1] * 8);
    *puVar1 = *puVar1 | 0x80000000;
    *(int *)(*param_1 + 0x138) = *(int *)(*param_1 + 0x138) + -1;
  }
  else {
    if ((bVar2 & 2) != 0) {
      *(int *)(*(longlong *)(plVar3[0x25] + (longlong)(int)param_1[1] * 0x10) +
              (longlong)(int)plVar3[0x24] * 4) = (int)param_1[3];
      plVar3 = (longlong *)*param_1;
    }
    FUN_14384e454(plVar3,(int)param_1[1]);
    *(byte *)(*param_1 + 0x13e) = *(byte *)(*param_1 + 0x13e) | 1;
  }
  return;
}



// FUNCTION 147ecf58c FUN_147ecf58c body=131 status=ok
// SIG undefined FUN_147ecf58c(void)

void FUN_147ecf58c(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_1[0x27]) {
    lVar2 = *param_1;
    fVar5 = -3.4e+38;
    fVar4 = 0.0;
    lVar3 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar3 * 8);
      if (fVar1 <= fVar4) {
        fVar4 = fVar1;
      }
      if (fVar5 <= fVar1) {
        fVar5 = fVar1;
      }
      lVar3 = lVar3 + 1;
    } while ((int)param_1[0x27] != (int)lVar3);
    if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) {
      lVar3 = 0;
      do {
        *(float *)(lVar2 + lVar3 * 8) = (*(float *)(lVar2 + lVar3 * 8) - fVar4) / (fVar5 - fVar4);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)param_1[0x27]);
    }
    else {
      lVar3 = 0;
      do {
        *(uint *)(lVar2 + lVar3 * 8) = ~-(uint)(fVar4 == 0.0) & 0x3f800000;
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)param_1[0x27]);
    }
  }
  return;
}



// FUNCTION 147ecf610 FUN_147ecf610 body=118 status=ok
// SIG undefined FUN_147ecf610(void)

void FUN_147ecf610(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147ed7358(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147ed73de(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147ecf688 FUN_147ecf688 body=114 status=ok
// SIG undefined FUN_147ecf688(void)

void FUN_147ecf688(longlong *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  iVar2 = (int)param_1[0x27];
  if (1 < (longlong)iVar2) {
    lVar3 = 1;
    do {
      pfVar1 = (float *)(*param_1 + lVar3 * 8);
      if (*pfVar1 <= param_2 && param_2 != *pfVar1) {
        iVar2 = (int)lVar3;
        goto LAB_147ecf6b0;
      }
      lVar3 = lVar3 + 1;
    } while (iVar2 != lVar3);
  }
  if (iVar2 < 1) {
    FUN_14384e454(param_1,0);
    return;
  }
LAB_147ecf6b0:
  DAT_14cb1efac = DAT_14cb1efac * 0xbb38435 + 0x3619636b;
  fVar4 = (float)(DAT_14cb1efac >> 9 | 0x3f800000) + -1.0;
  FUN_14384e454(fVar4,(int)((float)iVar2 * fVar4));
  return;
}



// FUNCTION 147ecf6fa FUN_147ecf6fa body=194 status=ok
// SIG undefined FUN_147ecf6fa(void)

void FUN_147ecf6fa(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xbf800000;
  }
  else {
    uVar2 = 0;
    if ((-1 < (int)local_24) && ((int)local_24 < (int)plVar1[1])) {
      uVar2 = *(undefined4 *)(*plVar1 + (ulonglong)local_24 * 8);
    }
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecf7c4 FUN_147ecf7c4 body=189 status=ok
// SIG undefined FUN_147ecf7c4(void)

void FUN_147ecf7c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ecf882(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecf882 FUN_147ecf882 body=260 status=ok
// SIG undefined FUN_147ecf882(void)

bool FUN_147ecf882(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_140c5c1ec(param_2,0);
  }
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x38) + 0x28) == 1)) &&
      (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)) &&
     (((lVar2 = FUN_1412474be(), lVar2 != 0 && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38)))
      && ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30 && (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)))))) {
    lVar2 = FUN_1412474be();
    if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    lVar2 = FUN_1459eb736();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(int *)(param_1 + 0x34) == 3) {
        FUN_147eddeb8(*(undefined8 *)(param_1 + 0x38),param_2);
      }
      else {
        uVar3 = FUN_147eddc70(*(undefined8 *)(param_1 + 0x38),0);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447d05f2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
      }
      return 0 < (int)param_2[1];
    }
  }
  return false;
}



// FUNCTION 147ecf98c FUN_147ecf98c body=189 status=ok
// SIG undefined FUN_147ecf98c(void)

void FUN_147ecf98c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ecfa4a(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfa4a FUN_147ecfa4a body=185 status=ok
// SIG undefined FUN_147ecfa4a(void)

bool FUN_147ecfa4a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1447a8aa0(param_2,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x28) != 1)) {
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 0x34) == 3) {
      FUN_147ede03e(lVar3,param_2);
    }
    else {
      FUN_147eddd82(lVar3,&local_30,0);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1403e3958(param_2,iVar2);
      }
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_20;
      puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar1 = local_30;
      puVar1[1] = uStack_2c;
      puVar1[2] = uStack_28;
      puVar1[3] = uStack_24;
    }
    bVar4 = 0 < (int)param_2[1];
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfb04 FUN_147ecfb04 body=139 status=ok
// SIG undefined FUN_147ecfb04(void)

void FUN_147ecfb04(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecfb90(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfb90 FUN_147ecfb90 body=229 status=ok
// SIG undefined FUN_147ecfb90(void)

longlong * FUN_147ecfb90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)) {
    lVar2 = FUN_1412474be();
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)))) {
      lVar2 = FUN_1412474be();
      if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x58);
      }
      lVar2 = FUN_1459eb736();
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        if (*(int *)(param_1 + 0x34) == 3) {
          FUN_147eddeb8(*(undefined8 *)(param_1 + 0x38),param_2);
        }
        else {
          uVar3 = FUN_147eddc70(*(undefined8 *)(param_1 + 0x38),0);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1447d05f2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 147ecfc76 FUN_147ecfc76 body=139 status=ok
// SIG undefined FUN_147ecfc76(void)

void FUN_147ecfc76(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecfd02(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfd02 FUN_147ecfd02 body=165 status=ok
// SIG undefined FUN_147ecfd02(void)

longlong * FUN_147ecfd02(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x34) == 3) {
      FUN_147ede03e(lVar3,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    FUN_147eddd82(lVar3,&local_30,0);
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1403e3958(param_2,iVar2);
    }
    lVar3 = *param_2;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_20;
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = local_30;
    puVar1[1] = uStack_2c;
    puVar1[2] = uStack_28;
    puVar1[3] = uStack_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfdaa FUN_147ecfdaa body=297 status=ok
// SIG undefined FUN_147ecfdaa(void)

void FUN_147ecfdaa(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_48;
  local_3c = local_4c;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_30 = &local_38;
    local_28 = &local_3c;
    FUN_144a405ac(*(longlong *)(param_1 + 0x48) + 0x70,local_1c,&local_30,0);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecfed8 FUN_147ecfed8 body=385 status=ok
// SIG undefined FUN_147ecfed8(void)

void FUN_147ecfed8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x38) = lVar3;
  *(longlong *)(param_1 + 0x40) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar3 = *param_2;
  lVar5 = *(longlong *)(lVar3 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(lVar3 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar5;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*param_2 + 0x2c);
  local_28 = *(undefined1 *)(*param_2 + 0x28);
  local_30 = param_1;
  FUN_1447cd2ec(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar5 = FUN_145a57e26();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_30 = param_1;
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      FUN_147ed0b56(lVar3 + 200,&local_30);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed005a FUN_147ed005a body=536 status=ok
// SIG undefined FUN_147ed005a(void)

void FUN_147ed005a(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar4 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14ac04970;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar6;
  *local_38 = &PTR_FUN_14ac048a0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_1);
  puVar4[4] = FUN_147ecfed8;
  *(undefined4 *)(puVar4 + 5) = 0;
  iVar5 = FUN_14384e52e(param_3,param_2,&local_38);
  FUN_1449db362(&local_38);
  *(int *)(param_1 + 6) = iVar5;
  if ((iVar5 != -1) && (lVar2 = param_1[4], lVar2 != 0)) {
    lVar6 = FUN_145a57e26();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_38 = param_1;
      if ((param_1 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      FUN_147ed8bba(lVar2 + 200,&local_38);
      if (*(int *)(param_1 + 6) == -1) {
LAB_147ed01eb:
        plVar8 = (longlong *)0x0;
        lVar6 = 0;
      }
      else {
        iVar5 = *(uint *)(lVar2 + 0x48) + 1;
        uVar7 = (ulonglong)*(uint *)(lVar2 + 0x48) << 4 | 8;
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) goto LAB_147ed01eb;
          lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -0x18 + uVar7);
          uVar7 = uVar7 - 0x10;
        } while (*(int *)(lVar6 + 0x30) != *(int *)(param_1 + 6));
        plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x40) + uVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
      }
      param_1[9] = lVar6;
      plVar3 = (longlong *)param_1[10];
      if (plVar8 == plVar3) {
        if (plVar8 == (longlong *)0x0) goto LAB_147ed013a;
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 != 0) goto LAB_147ed013a;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar3 = plVar8;
      }
      else {
        param_1[10] = plVar8;
        if (plVar3 == (longlong *)0x0) goto LAB_147ed013a;
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) goto LAB_147ed013a;
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
      }
      if (iVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_147ed013a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed027a FUN_147ed027a body=490 status=ok
// SIG undefined FUN_147ed027a(void)

void FUN_147ed027a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_58 = &local_48;
  uVar1 = FUN_147ed0466(local_20,local_28,local_30,local_31);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed0466 FUN_147ed0466 body=533 status=ok
// SIG undefined FUN_147ed0466(void)

undefined8
FUN_147ed0466(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0 && param_2 != 0) {
    lVar1 = FUN_147ece326();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1413f6fa8();
      lVar3 = plVar2[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 1000))(plVar2);
        lVar3 = plVar2[0x22];
      }
      if (*(char *)(lVar3 + 0xcf) == '\0') {
        lVar3 = FUN_14490fee6();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar3 = FUN_14490fee6();
          if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
            param_3 = 0;
          }
          param_3 = *(longlong *)(param_3 + 0x3d0);
          if (param_3 == 0) goto LAB_147ed049b;
        }
      }
      lVar3 = *param_5;
      if (lVar3 == 0) {
LAB_147ed05a1:
        lVar3 = FUN_1458b57b4();
      }
      else {
        lVar4 = FUN_1458b57b4();
        if ((((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
             lVar4 + 0x30)) || (lVar3 = *param_5, lVar3 == 0)) goto LAB_147ed05a1;
        lVar4 = FUN_1458b57b4();
        if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          lVar3 = 0;
        }
        else {
          lVar3 = *param_5;
        }
      }
      uVar5 = FUN_147ed0aa6(lVar1,lVar3);
      local_a0 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_98 = param_3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      local_68 = 0;
      local_60 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_147ed005a(uVar5,param_4,&local_a0);
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(&uStack_88);
      goto LAB_147ed049e;
    }
  }
LAB_147ed049b:
  uVar5 = 0;
LAB_147ed049e:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed0688 FUN_147ed0688 body=397 status=ok
// SIG undefined FUN_147ed0688(void)

longlong FUN_147ed0688(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  int *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)((longlong)param_2 + 9) & 1) == 0) ||
     (param_3 == 0 || *(short *)(param_2 + 6) == -1)) {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x02') {
      local_38 = *param_2;
      local_3c = *(int *)((longlong)&DAT_149935368 +
                         (ulonglong)(0.0 < *(float *)((longlong)param_2 + 0xc)) * 4);
      goto LAB_147ed07b4;
    }
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') goto LAB_147ed075e;
      local_3c = *(int *)((longlong)param_2 + 0xc);
      goto LAB_147ed0703;
    }
    local_3c = (int)*(float *)((longlong)param_2 + 0xc);
LAB_147ed072e:
    local_38 = *param_2;
  }
  else {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x02') {
      cVar1 = FUN_147eb9a70(param_3);
      local_38 = *param_2;
      if (cVar1 == '\0') {
        local_3c = -0x40800000;
      }
      else {
        local_3c = 0x3f800000;
      }
LAB_147ed07b4:
      local_30 = &local_38;
      local_28 = &local_3c;
      FUN_140d12ea6(param_1 + 0x18,local_1c,&local_30,0);
      goto LAB_147ed075e;
    }
    if (cVar1 == '\x01') {
      local_3c = FUN_147eb98e8(param_3);
      goto LAB_147ed072e;
    }
    if (cVar1 != '\0') goto LAB_147ed075e;
    local_3c = FUN_147eb99a8(param_3);
LAB_147ed0703:
    local_38 = *param_2;
  }
  local_28 = &local_3c;
  local_30 = &local_38;
  FUN_144a405ac(param_1 + 0x18,local_1c,&local_30,0);
LAB_147ed075e:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed0816 FUN_147ed0816 body=133 status=ok
// SIG undefined FUN_147ed0816(void)

undefined4
FUN_147ed0816(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14384e62a(param_1,local_30,param_2,param_3);
  uVar3 = FUN_14384f5a0(param_1,local_30,param_4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed089c FUN_147ed089c body=95 status=ok
// SIG undefined FUN_147ed089c(void)

uint FUN_147ed089c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_1446e0b6e();
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar3 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar2 = *(uint *)(lVar3 + 8);
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return uVar2;
}



// FUNCTION 147ed08fc FUN_147ed08fc body=141 status=ok
// SIG undefined FUN_147ed08fc(void)

void FUN_147ed08fc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    local_30 = (longlong *)param_2[1];
    local_28 = lVar2;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      local_28 = *param_2;
    }
    local_28 = local_28 + 0x30;
    local_20 = &local_38;
    local_38 = lVar2;
    FUN_147ed7b94(param_1 + 0x58,local_14);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed098a FUN_147ed098a body=152 status=ok
// SIG undefined FUN_147ed098a(void)

ulonglong FUN_147ed098a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed0a24 FUN_147ed0a24 body=41 status=ok
// SIG undefined FUN_147ed0a24(void)

void FUN_147ed0a24(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147ed81ae();
  return;
}



// FUNCTION 147ed0a4e FUN_147ed0a4e body=88 status=ok
// SIG undefined FUN_147ed0a4e(void)

undefined8 * FUN_147ed0a4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ed814c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147ed0aa6 FUN_147ed0aa6 body=175 status=ok
// SIG undefined FUN_147ed0aa6(void)

undefined8 FUN_147ed0aa6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed0b56 FUN_147ed0b56 body=221 status=ok
// SIG undefined FUN_147ed0b56(void)

void FUN_147ed0b56(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147ed0c4e FUN_147ed0c4e body=45 status=ok
// SIG undefined FUN_147ed0c4e(void)

longlong FUN_147ed0c4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145904f50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0c9a FUN_147ed0c9a body=45 status=ok
// SIG undefined FUN_147ed0c9a(void)

longlong FUN_147ed0c9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0cc8 FUN_147ed0cc8 body=45 status=ok
// SIG undefined FUN_147ed0cc8(void)

longlong FUN_147ed0cc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145904f50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0cf6 FUN_147ed0cf6 body=45 status=ok
// SIG undefined FUN_147ed0cf6(void)

longlong FUN_147ed0cf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145904f50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0d24 FUN_147ed0d24 body=45 status=ok
// SIG undefined FUN_147ed0d24(void)

longlong FUN_147ed0d24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145904f50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0d52 FUN_147ed0d52 body=45 status=ok
// SIG undefined FUN_147ed0d52(void)

longlong FUN_147ed0d52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14592bfc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0d80 FUN_147ed0d80 body=45 status=ok
// SIG undefined FUN_147ed0d80(void)

longlong FUN_147ed0d80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14592c014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0dae FUN_147ed0dae body=45 status=ok
// SIG undefined FUN_147ed0dae(void)

longlong FUN_147ed0dae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d49ade(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0ddc FUN_147ed0ddc body=45 status=ok
// SIG undefined FUN_147ed0ddc(void)

longlong FUN_147ed0ddc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e18078(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0e0a FUN_147ed0e0a body=45 status=ok
// SIG undefined FUN_147ed0e0a(void)

longlong FUN_147ed0e0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3cdde(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0e38 FUN_147ed0e38 body=45 status=ok
// SIG undefined FUN_147ed0e38(void)

longlong FUN_147ed0e38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14592bfc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0e66 FUN_147ed0e66 body=45 status=ok
// SIG undefined FUN_147ed0e66(void)

longlong FUN_147ed0e66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145da8042(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0e9e FUN_147ed0e9e body=45 status=ok
// SIG undefined FUN_147ed0e9e(void)

longlong FUN_147ed0e9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145da80e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0ed6 FUN_147ed0ed6 body=45 status=ok
// SIG undefined FUN_147ed0ed6(void)

longlong FUN_147ed0ed6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14592c014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0f04 FUN_147ed0f04 body=45 status=ok
// SIG undefined FUN_147ed0f04(void)

longlong FUN_147ed0f04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14592c014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0f32 FUN_147ed0f32 body=45 status=ok
// SIG undefined FUN_147ed0f32(void)

longlong FUN_147ed0f32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d2978a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0f92 FUN_147ed0f92 body=45 status=ok
// SIG undefined FUN_147ed0f92(void)

longlong FUN_147ed0f92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459c5d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0fc0 FUN_147ed0fc0 body=45 status=ok
// SIG undefined FUN_147ed0fc0(void)

longlong FUN_147ed0fc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cfee22(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed0ff4 FUN_147ed0ff4 body=45 status=ok
// SIG undefined FUN_147ed0ff4(void)

longlong FUN_147ed0ff4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459c5d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed1050 FUN_147ed1050 body=45 status=ok
// SIG undefined FUN_147ed1050(void)

longlong FUN_147ed1050(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed107e FUN_147ed107e body=45 status=ok
// SIG undefined FUN_147ed107e(void)

longlong FUN_147ed107e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed10c0 FUN_147ed10c0 body=45 status=ok
// SIG undefined FUN_147ed10c0(void)

longlong FUN_147ed10c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed10f8 FUN_147ed10f8 body=45 status=ok
// SIG undefined FUN_147ed10f8(void)

longlong FUN_147ed10f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed1126 FUN_147ed1126 body=45 status=ok
// SIG undefined FUN_147ed1126(void)

longlong FUN_147ed1126(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed1164 FUN_147ed1164 body=45 status=ok
// SIG undefined FUN_147ed1164(void)

longlong FUN_147ed1164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed1192 FUN_147ed1192 body=45 status=ok
// SIG undefined FUN_147ed1192(void)

longlong FUN_147ed1192(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed11c0 FUN_147ed11c0 body=45 status=ok
// SIG undefined FUN_147ed11c0(void)

longlong FUN_147ed11c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14597ad9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed11ee FUN_147ed11ee body=45 status=ok
// SIG undefined FUN_147ed11ee(void)

longlong FUN_147ed11ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed121c FUN_147ed121c body=45 status=ok
// SIG undefined FUN_147ed121c(void)

longlong FUN_147ed121c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410a11f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed1254 FUN_147ed1254 body=32 status=ok
// SIG undefined FUN_147ed1254(void)

undefined8 FUN_147ed1254(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147ed1278 FUN_147ed1278 body=45 status=ok
// SIG undefined FUN_147ed1278(void)

longlong FUN_147ed1278(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cde81e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed12a6 FUN_147ed12a6 body=48 status=ok
// SIG undefined FUN_147ed12a6(void)

longlong FUN_147ed12a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145cde81e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed12d6 FUN_147ed12d6 body=34 status=ok
// SIG undefined FUN_147ed12d6(void)

undefined8 FUN_147ed12d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147ed12f8 FUN_147ed12f8 body=34 status=ok
// SIG undefined FUN_147ed12f8(void)

undefined8 FUN_147ed12f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147ed131a FUN_147ed131a body=34 status=ok
// SIG undefined FUN_147ed131a(void)

undefined8 FUN_147ed131a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147ed133c FUN_147ed133c body=48 status=ok
// SIG undefined FUN_147ed133c(void)

longlong FUN_147ed133c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed136c FUN_147ed136c body=48 status=ok
// SIG undefined FUN_147ed136c(void)

longlong FUN_147ed136c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed13a2 FUN_147ed13a2 body=70 status=ok
// SIG undefined FUN_147ed13a2(void)

undefined8 FUN_147ed13a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((((lVar1 != 0) && (lVar2 = FUN_1412474be(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(longlong *)(param_1 + 0x40) != 0);
  }
  return 0;
}



// FUNCTION 147ed13e8 FUN_147ed13e8 body=45 status=ok
// SIG undefined FUN_147ed13e8(void)

longlong FUN_147ed13e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145df0f86(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed143a FUN_147ed143a body=45 status=ok
// SIG undefined FUN_147ed143a(void)

longlong FUN_147ed143a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14597113e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed146c FUN_147ed146c body=45 status=ok
// SIG undefined FUN_147ed146c(void)

longlong FUN_147ed146c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14597113e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ed150a FUN_147ed150a body=59 status=ok
// SIG undefined FUN_147ed150a(void)

undefined8 FUN_147ed150a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed15cc FUN_147ed15cc body=48 status=ok
// SIG undefined FUN_147ed15cc(void)

void FUN_147ed15cc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ed1612 FUN_147ed1612 body=54 status=ok
// SIG undefined FUN_147ed1612(void)

undefined1 FUN_147ed1612(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed170c(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147ed1670 FUN_147ed1670 body=59 status=ok
// SIG undefined FUN_147ed1670(void)

undefined8 FUN_147ed1670(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed170c FUN_147ed170c body=120 status=ok
// SIG undefined FUN_147ed170c(void)

longlong * FUN_147ed170c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  FUN_147ed1784(param_1 + 2,param_2 + 2);
  FUN_147ed17d4(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 147ed1784 FUN_147ed1784 body=79 status=ok
// SIG undefined FUN_147ed1784(void)

undefined8 * FUN_147ed1784(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ed182c(param_1,iVar1);
      FUN_147ed188e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ed17d4 FUN_147ed17d4 body=88 status=ok
// SIG undefined FUN_147ed17d4(void)

undefined8 * FUN_147ed17d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ed18e0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147ed182c FUN_147ed182c body=98 status=ok
// SIG undefined FUN_147ed182c(void)

void FUN_147ed182c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ed188e FUN_147ed188e body=82 status=ok
// SIG undefined FUN_147ed188e(void)

void FUN_147ed188e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147ed18e0 FUN_147ed18e0 body=98 status=ok
// SIG undefined FUN_147ed18e0(void)

void FUN_147ed18e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,2);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ed1944 FUN_147ed1944 body=52 status=ok
// SIG undefined FUN_147ed1944(void)

void FUN_147ed1944(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147ed1978 FUN_147ed1978 body=62 status=ok
// SIG undefined FUN_147ed1978(void)

void FUN_147ed1978(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ed19b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 147ed19b6 FUN_147ed19b6 body=93 status=ok
// SIG undefined FUN_147ed19b6(void)

ulonglong FUN_147ed19b6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,2);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147ed1a14 FUN_147ed1a14 body=190 status=ok
// SIG undefined FUN_147ed1a14(void)

undefined8 FUN_147ed1a14(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    FUN_147eca584(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  FUN_142787b30(local_38,*param_3);
  local_50 = &local_18;
  local_58 = local_38;
  FUN_1407adb6e(&local_48);
  FUN_140230a2e(param_2,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed1ad6 FUN_147ed1ad6 body=130 status=ok
// SIG undefined FUN_147ed1ad6(void)

void FUN_147ed1ad6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed1b5a FUN_147ed1b5a body=191 status=ok
// SIG undefined FUN_147ed1b5a(void)

undefined8 FUN_147ed1b5a(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    FUN_147eca584(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  FUN_142787b30(local_38,*param_3);
  local_50 = &local_18;
  local_58 = local_38;
  FUN_1407adb6e(&local_48);
  FUN_140230a2e(param_2,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed1c1c FUN_147ed1c1c body=190 status=ok
// SIG undefined FUN_147ed1c1c(void)

void FUN_147ed1c1c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ed1cda(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147ed1cda FUN_147ed1cda body=132 status=ok
// SIG undefined FUN_147ed1cda(void)

void FUN_147ed1cda(longlong param_1,int param_2)

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



// FUNCTION 147ed1d60 FUN_147ed1d60 body=215 status=ok
// SIG undefined FUN_147ed1d60(void)

void FUN_147ed1d60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_147ed1e1f;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_147ed1e1f:
      FUN_147ed1e38(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ed1e38 FUN_147ed1e38 body=62 status=ok
// SIG undefined FUN_147ed1e38(void)

void FUN_147ed1e38(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ed1e76(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147ed1e76 FUN_147ed1e76 body=93 status=ok
// SIG undefined FUN_147ed1e76(void)

ulonglong FUN_147ed1e76(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ed1ed3 FUN_147ed1ed3 body=148 status=ok
// SIG undefined FUN_147ed1ed3(void)

undefined8 FUN_147ed1ed3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14585dbdc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed1fc2 FUN_147ed1fc2 body=114 status=ok
// SIG undefined FUN_147ed1fc2(void)

undefined1 FUN_147ed1fc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x18;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + -0x10 + lVar3) = *(undefined8 *)(param_3 + -0x10 + lVar3);
      lVar2 = *(longlong *)(param_3 + -8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -8 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147ed205c FUN_147ed205c body=59 status=ok
// SIG undefined FUN_147ed205c(void)

undefined8 FUN_147ed205c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed20fc FUN_147ed20fc body=34 status=ok
// SIG undefined FUN_147ed20fc(void)

undefined8 FUN_147ed20fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147ed2170 FUN_147ed2170 body=19 status=ok
// SIG undefined FUN_147ed2170(void)

undefined1 FUN_147ed2170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147ecde2c(param_3);
  return 1;
}



// FUNCTION 147ed2192 FUN_147ed2192 body=54 status=ok
// SIG undefined FUN_147ed2192(void)

undefined1 FUN_147ed2192(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2290(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147ed21f0 FUN_147ed21f0 body=59 status=ok
// SIG undefined FUN_147ed21f0(void)

undefined8 FUN_147ed21f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed2290 FUN_147ed2290 body=118 status=ok
// SIG undefined FUN_147ed2290(void)

longlong FUN_147ed2290(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 147ed236a FUN_147ed236a body=54 status=ok
// SIG undefined FUN_147ed236a(void)

undefined1 FUN_147ed236a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed24ca(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147ed23c8 FUN_147ed23c8 body=59 status=ok
// SIG undefined FUN_147ed23c8(void)

undefined8 FUN_147ed23c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed240e FUN_147ed240e body=48 status=ok
// SIG undefined FUN_147ed240e(void)

void FUN_147ed240e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ac03920;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147ed248c FUN_147ed248c body=62 status=ok
// SIG undefined FUN_147ed248c(void)

undefined8 * FUN_147ed248c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac03920;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed24ca FUN_147ed24ca body=89 status=ok
// SIG undefined FUN_147ed24ca(void)

longlong FUN_147ed24ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 147ed2524 FUN_147ed2524 body=59 status=ok
// SIG undefined FUN_147ed2524(void)

void FUN_147ed2524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde30;
  *(undefined4 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a7452c();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed2560 FUN_147ed2560 body=59 status=ok
// SIG undefined FUN_147ed2560(void)

void FUN_147ed2560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde30;
  *(undefined4 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a7452c();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed25c2 FUN_147ed25c2 body=74 status=ok
// SIG undefined FUN_147ed25c2(void)

undefined8 FUN_147ed25c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2290(param_2,param_3);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147ed2634 FUN_147ed2634 body=59 status=ok
// SIG undefined FUN_147ed2634(void)

undefined8 FUN_147ed2634(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed26d6 FUN_147ed26d6 body=59 status=ok
// SIG undefined FUN_147ed26d6(void)

void FUN_147ed26d6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde50;
  *(undefined4 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a64e42();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed2712 FUN_147ed2712 body=59 status=ok
// SIG undefined FUN_147ed2712(void)

void FUN_147ed2712(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde50;
  *(undefined4 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a64e42();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed2774 FUN_147ed2774 body=78 status=ok
// SIG undefined FUN_147ed2774(void)

undefined1 FUN_147ed2774(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2290(param_2,param_3);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147ed27ea FUN_147ed27ea body=59 status=ok
// SIG undefined FUN_147ed27ea(void)

undefined8 FUN_147ed27ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed288c FUN_147ed288c body=56 status=ok
// SIG undefined FUN_147ed288c(void)

void FUN_147ed288c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde70;
  *(undefined1 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a5ab96();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed28c4 FUN_147ed28c4 body=56 status=ok
// SIG undefined FUN_147ed28c4(void)

void FUN_147ed28c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14abfde70;
  *(undefined1 *)(param_2 + 6) = 0;
  uVar1 = FUN_144a5ab96();
  param_2[5] = uVar1;
  return;
}



// FUNCTION 147ed2922 FUN_147ed2922 body=74 status=ok
// SIG undefined FUN_147ed2922(void)

undefined1 FUN_147ed2922(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2290(param_2,param_3);
    *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147ed2994 FUN_147ed2994 body=59 status=ok
// SIG undefined FUN_147ed2994(void)

undefined8 FUN_147ed2994(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed2a36 FUN_147ed2a36 body=34 status=ok
// SIG undefined FUN_147ed2a36(void)

undefined8 FUN_147ed2a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed2b4c FUN_147ed2b4c body=59 status=ok
// SIG undefined FUN_147ed2b4c(void)

undefined8 FUN_147ed2b4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed2c4e FUN_147ed2c4e body=46 status=ok
// SIG undefined FUN_147ed2c4e(void)

void FUN_147ed2c4e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_2 + 0x18);
  return;
}



// FUNCTION 147ed2c92 FUN_147ed2c92 body=54 status=ok
// SIG undefined FUN_147ed2c92(void)

undefined1 FUN_147ed2c92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2dba(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147ed2cf0 FUN_147ed2cf0 body=59 status=ok
// SIG undefined FUN_147ed2cf0(void)

undefined8 FUN_147ed2cf0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed2d36 FUN_147ed2d36 body=54 status=ok
// SIG undefined FUN_147ed2d36(void)

void FUN_147ed2d36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147ed2dba FUN_147ed2dba body=143 status=ok
// SIG undefined FUN_147ed2dba(void)

longlong * FUN_147ed2dba(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  FUN_140d188f2(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 147ed2e4a FUN_147ed2e4a body=55 status=ok
// SIG undefined FUN_147ed2e4a(void)

void FUN_147ed2e4a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x180);
  FUN_143851af0((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 0x178) = 0;
  return;
}



// FUNCTION 147ed2e82 FUN_147ed2e82 body=37 status=ok
// SIG undefined FUN_147ed2e82(void)

void FUN_147ed2e82(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143851af0(param_2 + 1);
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 147ed2ec8 FUN_147ed2ec8 body=63 status=ok
// SIG undefined FUN_147ed2ec8(void)

undefined1 FUN_147ed2ec8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ed2ff2(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 147ed2f30 FUN_147ed2f30 body=59 status=ok
// SIG undefined FUN_147ed2f30(void)

undefined8 FUN_147ed2f30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed2f7c FUN_147ed2f7c body=39 status=ok
// SIG undefined FUN_147ed2f7c(void)

void FUN_147ed2f7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_143851c62(param_2 + 8);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 147ed2ff2 FUN_147ed2ff2 body=81 status=ok
// SIG undefined FUN_147ed2ff2(void)

longlong * FUN_147ed2ff2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_147ed3044(param_1 + 1,param_2 + 1);
  param_1[0x2f] = param_2[0x2f];
  return param_1;
}



// FUNCTION 147ed3044 FUN_147ed3044 body=195 status=ok
// SIG undefined FUN_147ed3044(void)

longlong FUN_147ed3044(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_147e9c348();
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_147ed7936(param_1 + 0x60,param_2 + 0x60);
  FUN_140d188f2(param_1 + 0x70,param_2 + 0x70);
  FUN_147ed31c8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147ed3108(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  FUN_147ed3168(param_1 + 0x128,param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x140);
  uVar5 = *(undefined8 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar8 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  *(undefined8 *)(param_1 + 0x148) = uVar5;
  *(undefined8 *)(param_1 + 0x150) = uVar6;
  *(undefined8 *)(param_1 + 0x158) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = uVar8;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  return param_1;
}



// FUNCTION 147ed3108 FUN_147ed3108 body=95 status=ok
// SIG undefined FUN_147ed3108(void)

undefined8 * FUN_147ed3108(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147ed3525(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ed3554(param_1,iVar1);
      FUN_147ed35c7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ed3168 FUN_147ed3168 body=95 status=ok
// SIG undefined FUN_147ed3168(void)

undefined8 * FUN_147ed3168(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147ed369c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ed36c8(param_1,iVar1);
      FUN_147ed372a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ed31c8 FUN_147ed31c8 body=122 status=ok
// SIG undefined FUN_147ed31c8(void)

longlong FUN_147ed31c8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147ed3242(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147ed3242 FUN_147ed3242 body=250 status=ok
// SIG undefined FUN_147ed3242(void)

longlong * FUN_147ed3242(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147ed333c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_147ed34a6(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147ed333c FUN_147ed333c body=360 status=ok
// SIG undefined FUN_147ed333c(void)

void FUN_147ed333c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147ed34a6 FUN_147ed34a6 body=127 status=ok
// SIG undefined FUN_147ed34a6(void)

longlong * FUN_147ed34a6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 147ed3525 FUN_147ed3525 body=47 status=ok
// SIG undefined FUN_147ed3525(void)

void FUN_147ed3525(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147ed3554 FUN_147ed3554 body=115 status=ok
// SIG undefined FUN_147ed3554(void)

void FUN_147ed3554(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ed35c7 FUN_147ed35c7 body=52 status=ok
// SIG undefined FUN_147ed35c7(void)

void FUN_147ed35c7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147ed35fc(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 147ed35fc FUN_147ed35fc body=160 status=ok
// SIG undefined FUN_147ed35fc(void)

undefined8 * FUN_147ed35fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_147ed814c(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe | *(uint *)(param_2 + 5) & 1;
  return param_1;
}



// FUNCTION 147ed369c FUN_147ed369c body=43 status=ok
// SIG undefined FUN_147ed369c(void)

void FUN_147ed369c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147ed36c8 FUN_147ed36c8 body=98 status=ok
// SIG undefined FUN_147ed36c8(void)

void FUN_147ed36c8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ed372a FUN_147ed372a body=119 status=ok
// SIG undefined FUN_147ed372a(void)

void FUN_147ed372a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147ed37a2 FUN_147ed37a2 body=62 status=ok
// SIG undefined FUN_147ed37a2(void)

void FUN_147ed37a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ed37e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147ed37e0 FUN_147ed37e0 body=112 status=ok
// SIG undefined FUN_147ed37e0(void)

ulonglong FUN_147ed37e0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147ed381a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147ed381a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147ed3850 FUN_147ed3850 body=132 status=ok
// SIG undefined FUN_147ed3850(void)

void FUN_147ed3850(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed38d6 FUN_147ed38d6 body=132 status=ok
// SIG undefined FUN_147ed38d6(void)

void FUN_147ed38d6(longlong param_1,int param_2)

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



// FUNCTION 147ed395c FUN_147ed395c body=34 status=ok
// SIG undefined FUN_147ed395c(void)

undefined8 FUN_147ed395c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed3998 FUN_147ed3998 body=29 status=ok
// SIG undefined FUN_147ed3998(void)

bool FUN_147ed3998(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed39b6 FUN_147ed39b6 body=26 status=ok
// SIG undefined FUN_147ed39b6(void)

bool FUN_147ed39b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed39d0 FUN_147ed39d0 body=24 status=ok
// SIG undefined FUN_147ed39d0(void)

bool FUN_147ed39d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed39f4 FUN_147ed39f4 body=101 status=ok
// SIG undefined FUN_147ed39f4(void)

void FUN_147ed39f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac041c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed3a5a FUN_147ed3a5a body=101 status=ok
// SIG undefined FUN_147ed3a5a(void)

void FUN_147ed3a5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac041c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed3ac0 FUN_147ed3ac0 body=131 status=ok
// SIG undefined FUN_147ed3ac0(void)

void FUN_147ed3ac0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac041c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed3b44 FUN_147ed3b44 body=52 status=ok
// SIG undefined FUN_147ed3b44(void)

void FUN_147ed3b44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed3b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed3b78 FUN_147ed3b78 body=155 status=ok
// SIG undefined FUN_147ed3b78(void)

bool FUN_147ed3b78(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed3c16 FUN_147ed3c16 body=34 status=ok
// SIG undefined FUN_147ed3c16(void)

undefined8 FUN_147ed3c16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed3c52 FUN_147ed3c52 body=29 status=ok
// SIG undefined FUN_147ed3c52(void)

bool FUN_147ed3c52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed3c70 FUN_147ed3c70 body=26 status=ok
// SIG undefined FUN_147ed3c70(void)

bool FUN_147ed3c70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed3c8a FUN_147ed3c8a body=24 status=ok
// SIG undefined FUN_147ed3c8a(void)

bool FUN_147ed3c8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed3ca2 FUN_147ed3ca2 body=101 status=ok
// SIG undefined FUN_147ed3ca2(void)

void FUN_147ed3ca2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac042a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed3d08 FUN_147ed3d08 body=101 status=ok
// SIG undefined FUN_147ed3d08(void)

void FUN_147ed3d08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac042a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed3d6e FUN_147ed3d6e body=131 status=ok
// SIG undefined FUN_147ed3d6e(void)

void FUN_147ed3d6e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac042a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed3df2 FUN_147ed3df2 body=52 status=ok
// SIG undefined FUN_147ed3df2(void)

void FUN_147ed3df2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed3e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed3e26 FUN_147ed3e26 body=155 status=ok
// SIG undefined FUN_147ed3e26(void)

bool FUN_147ed3e26(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed3ec2 FUN_147ed3ec2 body=34 status=ok
// SIG undefined FUN_147ed3ec2(void)

undefined8 FUN_147ed3ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed3efe FUN_147ed3efe body=29 status=ok
// SIG undefined FUN_147ed3efe(void)

bool FUN_147ed3efe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed3f1c FUN_147ed3f1c body=26 status=ok
// SIG undefined FUN_147ed3f1c(void)

bool FUN_147ed3f1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed3f36 FUN_147ed3f36 body=24 status=ok
// SIG undefined FUN_147ed3f36(void)

bool FUN_147ed3f36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed3f4e FUN_147ed3f4e body=101 status=ok
// SIG undefined FUN_147ed3f4e(void)

void FUN_147ed3f4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed3fb4 FUN_147ed3fb4 body=101 status=ok
// SIG undefined FUN_147ed3fb4(void)

void FUN_147ed3fb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed401a FUN_147ed401a body=131 status=ok
// SIG undefined FUN_147ed401a(void)

void FUN_147ed401a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed409e FUN_147ed409e body=52 status=ok
// SIG undefined FUN_147ed409e(void)

void FUN_147ed409e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed40cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed40d2 FUN_147ed40d2 body=155 status=ok
// SIG undefined FUN_147ed40d2(void)

bool FUN_147ed40d2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed416e FUN_147ed416e body=34 status=ok
// SIG undefined FUN_147ed416e(void)

undefined8 FUN_147ed416e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed41aa FUN_147ed41aa body=29 status=ok
// SIG undefined FUN_147ed41aa(void)

bool FUN_147ed41aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed41c8 FUN_147ed41c8 body=26 status=ok
// SIG undefined FUN_147ed41c8(void)

bool FUN_147ed41c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed41e2 FUN_147ed41e2 body=24 status=ok
// SIG undefined FUN_147ed41e2(void)

bool FUN_147ed41e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed41fa FUN_147ed41fa body=101 status=ok
// SIG undefined FUN_147ed41fa(void)

void FUN_147ed41fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4260 FUN_147ed4260 body=101 status=ok
// SIG undefined FUN_147ed4260(void)

void FUN_147ed4260(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed42c6 FUN_147ed42c6 body=131 status=ok
// SIG undefined FUN_147ed42c6(void)

void FUN_147ed42c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed434a FUN_147ed434a body=52 status=ok
// SIG undefined FUN_147ed434a(void)

void FUN_147ed434a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed437b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed437e FUN_147ed437e body=155 status=ok
// SIG undefined FUN_147ed437e(void)

bool FUN_147ed437e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed441a FUN_147ed441a body=36 status=ok
// SIG undefined FUN_147ed441a(void)

undefined8 FUN_147ed441a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed4458 FUN_147ed4458 body=29 status=ok
// SIG undefined FUN_147ed4458(void)

bool FUN_147ed4458(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed4476 FUN_147ed4476 body=26 status=ok
// SIG undefined FUN_147ed4476(void)

bool FUN_147ed4476(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed4490 FUN_147ed4490 body=24 status=ok
// SIG undefined FUN_147ed4490(void)

bool FUN_147ed4490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed44b4 FUN_147ed44b4 body=101 status=ok
// SIG undefined FUN_147ed44b4(void)

void FUN_147ed44b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac043f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed451a FUN_147ed451a body=101 status=ok
// SIG undefined FUN_147ed451a(void)

void FUN_147ed451a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac043f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4580 FUN_147ed4580 body=131 status=ok
// SIG undefined FUN_147ed4580(void)

void FUN_147ed4580(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac043f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed4604 FUN_147ed4604 body=142 status=ok
// SIG undefined FUN_147ed4604(void)

void FUN_147ed4604(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(iVar3 + lVar6);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed4694 FUN_147ed4694 body=207 status=ok
// SIG undefined FUN_147ed4694(void)

bool FUN_147ed4694(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar8 = local_38;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(iVar3 + lVar7);
  }
  if (lVar8 != 0) {
    FUN_140113f3a(lVar8);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed4766 FUN_147ed4766 body=34 status=ok
// SIG undefined FUN_147ed4766(void)

undefined8 FUN_147ed4766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed47a2 FUN_147ed47a2 body=29 status=ok
// SIG undefined FUN_147ed47a2(void)

bool FUN_147ed47a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed47c0 FUN_147ed47c0 body=26 status=ok
// SIG undefined FUN_147ed47c0(void)

bool FUN_147ed47c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed47da FUN_147ed47da body=24 status=ok
// SIG undefined FUN_147ed47da(void)

bool FUN_147ed47da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed47f2 FUN_147ed47f2 body=101 status=ok
// SIG undefined FUN_147ed47f2(void)

void FUN_147ed47f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4858 FUN_147ed4858 body=101 status=ok
// SIG undefined FUN_147ed4858(void)

void FUN_147ed4858(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed48be FUN_147ed48be body=131 status=ok
// SIG undefined FUN_147ed48be(void)

void FUN_147ed48be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed4942 FUN_147ed4942 body=52 status=ok
// SIG undefined FUN_147ed4942(void)

void FUN_147ed4942(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed4973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed4976 FUN_147ed4976 body=155 status=ok
// SIG undefined FUN_147ed4976(void)

bool FUN_147ed4976(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed4a12 FUN_147ed4a12 body=100 status=ok
// SIG undefined FUN_147ed4a12(void)

longlong FUN_147ed4a12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14599402a();
  lVar2 = FUN_147ed4a76(DAT_14c951640,uVar1,0,0,0,0,0,0);
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  FUN_147f07918(lVar2,param_1,param_2);
  return lVar2;
}



// FUNCTION 147ed4a76 FUN_147ed4a76 body=236 status=ok
// SIG undefined FUN_147ed4a76(void)

undefined8
FUN_147ed4a76(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed4b64 FUN_147ed4b64 body=34 status=ok
// SIG undefined FUN_147ed4b64(void)

undefined8 FUN_147ed4b64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed4ba0 FUN_147ed4ba0 body=29 status=ok
// SIG undefined FUN_147ed4ba0(void)

bool FUN_147ed4ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed4bbe FUN_147ed4bbe body=26 status=ok
// SIG undefined FUN_147ed4bbe(void)

bool FUN_147ed4bbe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed4bd8 FUN_147ed4bd8 body=24 status=ok
// SIG undefined FUN_147ed4bd8(void)

bool FUN_147ed4bd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed4bfc FUN_147ed4bfc body=101 status=ok
// SIG undefined FUN_147ed4bfc(void)

void FUN_147ed4bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac044e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4c62 FUN_147ed4c62 body=101 status=ok
// SIG undefined FUN_147ed4c62(void)

void FUN_147ed4c62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac044e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4cc8 FUN_147ed4cc8 body=131 status=ok
// SIG undefined FUN_147ed4cc8(void)

void FUN_147ed4cc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04550;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac044e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed4d4c FUN_147ed4d4c body=52 status=ok
// SIG undefined FUN_147ed4d4c(void)

void FUN_147ed4d4c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed4d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed4d80 FUN_147ed4d80 body=155 status=ok
// SIG undefined FUN_147ed4d80(void)

bool FUN_147ed4d80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed4e1e FUN_147ed4e1e body=36 status=ok
// SIG undefined FUN_147ed4e1e(void)

undefined8 FUN_147ed4e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}


