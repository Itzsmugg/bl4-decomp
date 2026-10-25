// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14797c9e0 FUN_14797c9e0 body=54 status=ok
// SIG undefined FUN_14797c9e0(void)

longlong FUN_14797c9e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14798a6ea(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x28 + *param_1;
}



// FUNCTION 14797ca16 FUN_14797ca16 body=156 status=ok
// SIG undefined FUN_14797ca16(void)

void FUN_14797ca16(longlong param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  
  if (param_4 == '\0') {
    if (param_3 != '\0') {
      iVar1 = *(int *)(param_1 + 0x28) + param_2;
      if (-1 < iVar1) {
        if (*(int *)(param_1 + 0x2c) < iVar1) {
          FUN_14798a876(param_1 + 0x20);
        }
        iVar1 = param_2 * 3 + *(int *)(param_1 + 0x40);
        if (-1 < iVar1) {
          if (iVar1 <= *(int *)(param_1 + 0x44)) {
            return;
          }
          FUN_14798a8d6(param_1 + 0x38);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    iVar1 = param_2 * 2 + *(int *)(param_1 + 8);
    if (iVar1 < 0) goto LAB_14797caa4;
    if (*(int *)(param_1 + 0xc) < iVar1) {
      FUN_14798a816(param_1,iVar1);
      return;
    }
  }
  else {
    iVar1 = param_2 * 2 + *(int *)(param_1 + 0x58);
    if (iVar1 < 0) {
LAB_14797caa4:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1 + 0x5c) < iVar1) {
      FUN_14798a936(param_1 + 0x50,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14797cab4 FUN_14797cab4 body=136 status=ok
// SIG undefined FUN_14797cab4(void)

void FUN_14797cab4(longlong param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0x170)) {
    lVar2 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x168);
    }
    lVar3 = 0;
    do {
      if ((((*(longlong *)(lVar2 + 0x28 + lVar3) == param_3) &&
           (*(longlong *)(lVar2 + 0x30 + lVar3) == 0)) &&
          (*(int *)(lVar2 + 0x38 + lVar3) == param_4)) &&
         (iVar1 = *(int *)(lVar2 + 0x20 + lVar3), iVar1 + 3 < *(int *)(param_1 + 0x70))) {
        iVar1 = iVar1 + param_2;
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar1);
        }
        if (iVar1 <= *(int *)(lVar2 + 0x24 + lVar3)) {
          return;
        }
        FUN_14011edb0(lVar2 + lVar3 + 8,iVar1);
        return;
      }
      lVar3 = lVar3 + 0x78;
    } while ((longlong)*(int *)(param_1 + 0x170) * 0x78 - lVar3 != 0);
  }
  return;
}



// FUNCTION 14797cb3e FUN_14797cb3e body=325 status=ok
// SIG undefined FUN_14797cb3e(void)

void FUN_14797cb3e(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
                  float param_9,undefined4 param_10,float param_11,undefined1 param_12,
                  undefined4 param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14797cc84(param_1 + 0x60);
  uVar4 = param_2[1];
  *puVar6 = *param_2;
  puVar6[1] = uVar4;
  puVar6[2] = param_2[2];
  *(undefined4 *)(puVar6 + 3) = param_3;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = param_4;
  puVar6[4] = param_5;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(puVar6 + 5) = *param_6;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar1;
  *(undefined4 *)(puVar6 + 6) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar3;
  *(undefined4 *)(puVar6 + 7) = param_7;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = param_8;
  if ((param_9 == 0.0) && (!NAN(param_9))) {
    uVar5 = (**(code **)(*param_5 + 0x30))(param_5);
    param_9 = (float)uVar5;
  }
  *(float *)(puVar6 + 8) = param_9;
  *(undefined4 *)((longlong)puVar6 + 0x44) = param_10;
  if ((param_11 == 0.0) && (!NAN(param_11))) {
    uVar5 = (**(code **)(*param_5 + 0x38))(param_5);
    param_11 = (float)uVar5;
  }
  *(float *)(puVar6 + 9) = param_11;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = param_13;
  *(undefined1 *)(puVar6 + 10) = param_12;
  return;
}



// FUNCTION 14797cc84 FUN_14797cc84 body=50 status=ok
// SIG undefined FUN_14797cc84(void)

longlong FUN_14797cc84(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14798a9a6(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x58 + *param_1;
}



// FUNCTION 14797ccb6 FUN_14797ccb6 body=99 status=ok
// SIG undefined FUN_14797ccb6(void)

undefined4 * FUN_14797ccb6(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145ef7bfc();
  FUN_1448e935e(param_2,&local_30,uVar1,0);
  FUN_145ef7bfc();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797cd1a FUN_14797cd1a body=99 status=ok
// SIG undefined FUN_14797cd1a(void)

undefined4 * FUN_14797cd1a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145d20e94();
  FUN_1448e935e(param_2,&local_30,uVar1,0);
  FUN_145d20e94();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797cd7e FUN_14797cd7e body=56 status=ok
// SIG undefined FUN_14797cd7e(void)

int FUN_14797cd7e(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x4000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 6;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x40);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14797cdba FUN_14797cdba body=135 status=ok
// SIG undefined FUN_14797cdba(void)

undefined8 * FUN_14797cdba(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b) = 0;
  *(undefined8 *)((longlong)param_1 + 99) = 0;
  *(byte *)((longlong)param_1 + 0x6d) = *(byte *)((longlong)param_1 + 0x6d) & 0xc0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_144a5dc74(param_1 + 0x11);
  param_1[0x13] = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 14797ce42 FUN_14797ce42 body=498 status=ok
// SIG undefined FUN_14797ce42(void)

void FUN_14797ce42(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_21();
  if ((int)param_2[8] == 0xdd || 0xef < (int)param_2[8]) goto LAB_14797cef3;
  plVar1 = (longlong *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar3 = *plVar1, lVar3 != 0)) {
      lVar2 = FUN_1446f8646();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      FUN_144757f48(lVar3,0x40);
      local_38 = 0;
      uStack_30 = 0;
      lVar3 = *plVar1;
      if (lVar3 == 0) {
LAB_14797cfc2:
        lVar3 = 0;
      }
      else {
        lVar2 = FUN_1446f8646();
        if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_14797cfc2;
        lVar3 = *plVar1;
      }
      local_48 = 0;
      FUN_14086ecde(lVar3,&local_38,1,0);
      if (0 < (int)uStack_30) {
        lVar3 = 0;
        do {
          FUN_144757f48(*(undefined8 *)(local_38 + lVar3 * 8),0x40);
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < (int)uStack_30);
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (param_1 != 0) {
    lVar3 = FUN_141225fe0();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
        ((*(byte *)(param_2 + 5) & 1) != 0)) && ((*(byte *)(param_1 + 0x61) & 2) != 0)) {
      local_38 = 0;
      (**(code **)(*param_2 + 0x150))(param_2);
      goto LAB_14797cef3;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x30);
LAB_14797cef3:
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0x40) == 0 && *(int *)(param_1 + 0x3c) == 0) &&
      *(int *)(param_1 + 0x44) == 0) && *(int *)(param_1 + 0x48) == 0)) {
    FUN_14797d036(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797d036 FUN_14797d036 body=164 status=ok
// SIG undefined FUN_14797d036(void)

void FUN_14797d036(longlong param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14010318a(param_1,&local_48,0);
  FUN_14619c34a(&local_48);
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140f0be04(puVar1,iVar2 * 2,local_38);
  *(undefined4 *)(param_1 + 0x3c) = local_34;
  *(undefined4 *)(param_1 + 0x40) = local_30;
  *(undefined4 *)(param_1 + 0x44) = local_2c;
  *(undefined4 *)(param_1 + 0x48) = local_28;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797d0dc thunk_FUN_14797ce42 body=5 status=ok
// SIG undefined thunk_FUN_14797ce42(void)

void thunk_FUN_14797ce42(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_21();
  if ((int)param_2[8] == 0xdd || 0xef < (int)param_2[8]) goto LAB_14797cef3;
  plVar1 = (longlong *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar3 = *plVar1, lVar3 != 0)) {
      lVar2 = FUN_1446f8646();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      FUN_144757f48(lVar3,0x40);
      lStack_38 = 0;
      uStack_30 = 0;
      lVar3 = *plVar1;
      if (lVar3 == 0) {
LAB_14797cfc2:
        lVar3 = 0;
      }
      else {
        lVar2 = FUN_1446f8646();
        if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_14797cfc2;
        lVar3 = *plVar1;
      }
      uStack_48 = 0;
      FUN_14086ecde(lVar3,&lStack_38,1,0);
      if (0 < (int)uStack_30) {
        lVar3 = 0;
        do {
          FUN_144757f48(*(undefined8 *)(lStack_38 + lVar3 * 8),0x40);
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < (int)uStack_30);
      }
      if (lStack_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (param_1 != 0) {
    lVar3 = FUN_141225fe0();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
        ((*(byte *)(param_2 + 5) & 1) != 0)) && ((*(byte *)(param_1 + 0x61) & 2) != 0)) {
      lStack_38 = 0;
      (**(code **)(*param_2 + 0x150))(param_2);
      goto LAB_14797cef3;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x30);
LAB_14797cef3:
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0x40) == 0 && *(int *)(param_1 + 0x3c) == 0) &&
      *(int *)(param_1 + 0x44) == 0) && *(int *)(param_1 + 0x48) == 0)) {
    FUN_14797d036(param_1);
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797d0e2 FUN_14797d0e2 body=189 status=ok
// SIG undefined FUN_14797d0e2(void)

undefined8 FUN_14797d0e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14798b394(param_2);
  }
  if (param_1 != 0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x40);
        if (lVar2 == 0) {
LAB_14797d168:
          lVar2 = 0;
        }
        else {
          lVar3 = FUN_14043ab18();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_14797d168;
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14798b3c4(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x250;
        param_1 = lVar2;
      } while (lVar2 != 0);
    }
  }
  return 1;
}



// FUNCTION 14797d1b6 FUN_14797d1b6 body=271 status=ok
// SIG undefined FUN_14797d1b6(void)

undefined8 FUN_14797d1b6(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  bVar1 = *(char *)(param_1 + 0x60) - 1;
  if (bVar1 < 3) {
    pwVar4 = (wchar_t *)(&PTR_u_const_extends_14a7fef08)[bVar1];
  }
  else {
    pwVar4 = L"extends";
  }
  FUN_14020fad6(&local_38,pwVar4);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *(longlong *)(param_1 + 0x58);
      goto LAB_14797d234;
    }
  }
  lVar3 = 0;
LAB_14797d234:
  local_28 = *(undefined8 *)(lVar3 + 0x18);
  FUN_1400021e4(&local_28,&local_48);
  puVar6 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar6 = local_48;
  }
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar5 = local_38;
  }
  FUN_140002266(param_2,L"%s %s",puVar5,puVar6);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797d2d6 FUN_14797d2d6 body=640 status=ok
// SIG undefined FUN_14797d2d6(void)

void FUN_14797d2d6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_41();
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((((lVar5 != 0) && (lVar1 = FUN_1446f8646(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (*(longlong *)(param_1 + 0x30) != 0)))) {
    FUN_1446f8646();
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (((lVar5 == 0) ||
        ((lVar1 = FUN_1446f8646(), lVar1 == 0 || (*(int *)(lVar5 + 0x38) < *(int *)(lVar1 + 0x38))))
        ) || (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
              lVar1 + 0x30)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_144757f48(uVar3,param_2);
    lVar5 = *(longlong *)(param_1 + 0x30);
    if ((((lVar5 == 0) || (lVar1 = FUN_1446f8646(), lVar1 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar4 + 0x1d8))(plVar4,param_2);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (((lVar5 != 0) && (lVar1 = FUN_1446f8646(), lVar1 != 0)) &&
     ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar5 + 0x38) &&
      ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30 && (lVar5 = *(longlong *)(param_1 + 0x28), lVar5 != 0)))))) {
    lVar1 = FUN_1446f8646();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x28);
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((((lVar1 == 0) || (lVar2 = FUN_1446f8646(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x30);
    }
    if (lVar5 != lVar1) {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1446f8646();
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (((lVar5 == 0) || (lVar1 = FUN_1446f8646(), lVar1 == 0)) ||
         ((*(int *)(lVar5 + 0x38) < *(int *)(lVar1 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
      }
      FUN_144757f48(uVar3,param_2);
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (((lVar5 == 0) || (lVar1 = FUN_1446f8646(), lVar1 == 0)) ||
         ((*(int *)(lVar5 + 0x38) < *(int *)(lVar1 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x00014797d50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x1d8))(plVar4,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14797d556 FUN_14797d556 body=154 status=ok
// SIG undefined FUN_14797d556(void)

undefined8 FUN_14797d556(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((((*(byte *)(param_1 + 0x60) & 0xfb) == 0) &&
        (lVar2 = *(longlong *)(param_1 + 0x58), lVar2 != 0)) &&
       (lVar1 = FUN_1446f8646(), lVar1 != 0)) &&
      ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)))) && (lVar2 = *(longlong *)(param_1 + 0x58), lVar2 != 0)) {
    lVar1 = FUN_1446f8646();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    lVar1 = FUN_144a6c4d8();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                      lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 14797d612 FUN_14797d612 body=418 status=ok
// SIG undefined FUN_14797d612(void)

void FUN_14797d612(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_908 [40];
  undefined2 *local_8e0;
  undefined2 *local_8d8;
  undefined2 **local_8d0;
  char local_8c8;
  undefined2 local_8c0 [64];
  undefined2 *local_840;
  undefined2 *local_838;
  ulonglong *local_830;
  char local_828;
  undefined2 local_820 [1024];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_908;
  if (DAT_14cace95c < 0x10) {
    local_840 = local_820;
    local_828 = '\0';
    local_830 = &local_20;
    local_838 = local_840;
    FUN_144750bde(*param_2,0,&local_840);
    if (local_830 <= local_838 + 1) {
      FUN_140213274(&local_840,1);
    }
    *local_838 = 10;
    local_838 = local_838 + 1;
    FUN_144750bde(param_2[1],0,&local_840);
    if (local_830 <= local_838 + 1) {
      FUN_140213274(&local_840,1);
    }
    *local_838 = 10;
    local_8e0 = local_8c0;
    local_8c8 = '\0';
    local_8d0 = &local_840;
    local_8d8 = local_8e0;
    local_838 = local_838 + 1;
    FUN_140212e80(&local_8e0,L"BPGCBreadcrumb_%u",*(undefined4 *)(param_2 + 2));
    puVar1 = local_840;
    *local_838 = 0;
    *local_8d8 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_8e0,puVar1);
    if (local_8c8 == '\x01') {
      FUN_1400020a8(local_8e0);
    }
    if (local_828 == '\x01') {
      FUN_1400020a8(local_840);
    }
  }
  DAT_14cace95c = DAT_14cace95c + 1;
  if ((local_20 ^ (ulonglong)auStack_908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797d7b6 FUN_14797d7b6 body=108 status=ok
// SIG undefined FUN_14797d7b6(void)

longlong * FUN_14797d7b6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *param_1 = lVar2;
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_1458f046a();
    lVar2 = FUN_144718840(lVar2,uVar1);
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14797d828 FUN_14797d828 body=828 status=ok
// SIG undefined FUN_14797d828(void)

void FUN_14797d828(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1427dc336(local_48);
  FUN_1468918e0(param_1,local_48);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    FUN_14020fad6(&local_68,&DAT_149e01fe8);
    iVar1 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(&local_58,local_68,iVar1);
  }
  else {
    local_80 = lVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
    local_e8 = 0;
    FUN_1468d9c7a(&local_78,&local_80,0,0);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
    do {
      lVar3 = FUN_14043ab18();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) {
        local_80 = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        goto LAB_14797d937;
      }
      lVar4 = *(longlong *)(lVar4 + 0x40);
    } while (lVar4 != 0);
    local_80 = 0;
LAB_14797d937:
    local_e8 = 0;
    FUN_1468d9c7a(&local_78,&local_80,0,0);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = local_78;
    uStack_50 = uStack_70;
  }
  pvVar2 = local_68;
  local_a0 = DAT_14c947d08;
  local_98 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_60;
  local_90 = (int)uStack_60;
  if (lVar4 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,uStack_60 & 0xffffffff,0);
    memcpy(local_98,pvVar2,lVar4 * 2);
  }
  local_88 = 1;
  FUN_1407c67d8(param_2);
  pvVar2 = local_58;
  local_c0 = DAT_14c947d10;
  local_b8 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_50;
  local_b0 = (int)uStack_50;
  if (lVar4 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_50 & 0xffffffff,0);
    memcpy(local_b8,pvVar2,lVar4 * 2);
  }
  local_a8 = 1;
  FUN_1407c67d8(param_2);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  FUN_144a83b10(&local_78,*(undefined4 *)(param_1 + 0xd4));
  local_e0 = DAT_14c947d18;
  local_d8 = (undefined4)local_78;
  uStack_d4 = local_78._4_4_;
  uStack_d0 = (undefined4)uStack_70;
  uStack_cc = uStack_70._4_4_;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_c8 = 0;
  FUN_1407c67d8(param_2);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797db66 FUN_14797db66 body=56 status=ok
// SIG undefined FUN_14797db66(void)

undefined8 * FUN_14797db66(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14797db9e FUN_14797db9e body=73 status=ok
// SIG undefined FUN_14797db9e(void)

undefined8 FUN_14797db9e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400796d0(param_1,param_2,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_14043ab18();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 14797dbe8 FUN_14797dbe8 body=295 status=ok
// SIG undefined FUN_14797dbe8(void)

longlong FUN_14797dbe8(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace964) {
    FUN_144b3d300(&DAT_14cace964);
    if (DAT_14cace964 == -1) {
      DAT_14cace960 = '\0';
      local_38 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bEnableInheritableComponents",&DAT_14cace960);
      _Init_thread_footer(&DAT_14cace964);
    }
  }
  if (DAT_14cace960 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    if (param_2 == '\x01' && lVar1 == 0) {
      FUN_1446f470e(&local_28,L"InheritableComponentHandler",1);
      lVar1 = FUN_14797dd10(param_1,local_28);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x2c0) = lVar1;
    }
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797dd10 FUN_14797dd10 body=183 status=ok
// SIG undefined FUN_14797dd10(void)

undefined8 FUN_14797dd10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14594adb0();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 14797ddc8 FUN_14797ddc8 body=1107 status=ok
// SIG undefined FUN_14797ddc8(void)

void FUN_14797ddc8(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (lVar9 = param_1, (*(uint *)(param_1 + 8) & 0x40000000) == 0)) {
    do {
      if ((*(uint *)(lVar9 + 8) & 0x30) != 0) goto LAB_14797e1cc;
      plVar2 = (longlong *)(lVar9 + 0x20);
      lVar9 = *plVar2;
    } while (*plVar2 != 0);
    local_f0 = 0;
    local_f8 = local_f8 & 0xffffffffffffff00;
    lVar9 = FUN_145754019(param_1,*(undefined8 *)(param_2 + 0x94),0,0);
    *(undefined1 *)(lVar9 + 0xb9) = 2;
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    iVar8 = *(int *)(param_1 + 0x2a8);
    *(uint *)(param_1 + 0x2a8) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x2ac) < iVar8 + 1U) {
      FUN_14092ecf6((longlong *)(param_1 + 0x2a0),iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar8 * 8) = lVar9;
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    FUN_1408c8a1a(lVar9);
    FUN_145753ffc(lVar9,param_1);
    FUN_145753fdc(lVar9,*(undefined8 *)(param_2 + 0x9c));
    FUN_1408c8fc2(lVar9,*(undefined4 *)(param_2 + 0x28));
    FUN_1408c8a12(lVar9,*(undefined1 *)(param_2 + 0x2c));
    *(undefined1 *)(lVar9 + 0x48) = *(undefined1 *)(param_2 + 0x90);
    lVar10 = FUN_1408c92bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x94),3);
    if (lVar10 != 0) {
      FUN_1408c8fa8(lVar10,param_1,lVar9,0);
    }
    iVar8 = *(int *)(param_2 + 0x38);
    if (0 < iVar8) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x20 + lVar10 * 0x28) != 0) {
          lVar11 = *(longlong *)(param_2 + 0x30) + lVar10 * 0x28;
          local_78 = 0;
          uStack_70 = 0;
          uVar3 = *(undefined8 *)(lVar11 + 0x18);
          FUN_14485c47a(&local_78,param_1);
          FUN_147a410da(*(longlong *)(lVar11 + 0x20) + 0x30,&local_88);
          uVar6 = local_78;
          if (-1 < (int)local_80) {
            do {
              if ((int)local_88[1] <= (int)local_80) break;
              local_98 = uVar6;
              local_90 = uVar3;
              FUN_147d73806(lVar9,*(undefined4 *)(*local_88 + 4 + (ulonglong)local_80 * 0x1c),
                            &local_98);
              uVar1 = local_80 + 1;
              bVar5 = -2 < (int)local_80;
              local_80 = uVar1;
            } while (bVar5);
          }
          iVar8 = *(int *)(param_2 + 0x38);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar8);
    }
    iVar8 = *(int *)(param_2 + 0x48);
    if (0 < iVar8) {
      lVar11 = 0x20;
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(lVar4 + lVar11) != 0) {
          local_f8 = *(ulonglong *)(lVar4 + -0x18 + lVar11);
          local_a8 = 0;
          uStack_a0 = 0;
          FUN_1408c9004(lVar9,*(undefined8 *)(lVar4 + lVar11),&local_a8,
                        *(undefined8 *)(lVar4 + -8 + lVar11));
          iVar8 = *(int *)(param_2 + 0x48);
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x28;
      } while (lVar10 < iVar8);
    }
    iVar8 = *(int *)(param_2 + 0x58);
    if (0 < iVar8) {
      lVar11 = 0x20;
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(param_2 + 0x50);
        if (*(longlong *)(lVar4 + lVar11) != 0) {
          local_f8 = *(ulonglong *)(lVar4 + -0x18 + lVar11);
          local_b8 = 0;
          uStack_b0 = 0;
          FUN_147d7386e(lVar9,*(undefined8 *)(lVar4 + lVar11),&local_b8,
                        *(undefined8 *)(lVar4 + -8 + lVar11));
          iVar8 = *(int *)(param_2 + 0x58);
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x28;
      } while (lVar10 < iVar8);
    }
    iVar8 = *(int *)(param_2 + 0x68);
    if (0 < iVar8) {
      lVar11 = 0x20;
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(param_2 + 0x60);
        if (*(longlong *)(lVar4 + lVar11) != 0) {
          local_f8 = *(ulonglong *)(lVar4 + -0x18 + lVar11);
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_147d738ca(lVar9,*(undefined8 *)(lVar4 + lVar11),&local_c8,
                        *(undefined8 *)(lVar4 + -8 + lVar11));
          iVar8 = *(int *)(param_2 + 0x68);
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x28;
      } while (lVar10 < iVar8);
    }
    local_78 = 0;
    uVar3 = *(undefined8 *)(param_2 + 0xa4);
    FUN_14485c47a(&local_78,param_1);
    local_d8 = local_78;
    local_d0 = uVar3;
    FUN_145753fe4(lVar9);
    local_88 = (longlong *)0x0;
    uVar3 = *(undefined8 *)(param_2 + 0xac);
    FUN_14485c47a(&local_88,param_1);
    local_e8 = local_88;
    local_e0 = uVar3;
    FUN_145753ff0(lVar9);
    FUN_140b506a4(lVar9);
    bVar7 = *(byte *)(param_2 + 0x2d);
    if ((bVar7 & 1) != 0) {
      *(byte *)(lVar9 + 0x9e) = *(byte *)(lVar9 + 0x9e) | 8;
      FUN_145982b8c(lVar9);
      bVar7 = *(byte *)(param_2 + 0x2d);
    }
    if ((bVar7 & 2) != 0) {
      FUN_145754008(lVar9,1);
      bVar7 = *(byte *)(param_2 + 0x2d);
    }
    if ((bVar7 & 4) != 0) {
      FUN_140b361ee(lVar9,1);
      bVar7 = *(byte *)(param_2 + 0x2d);
    }
    if ((bVar7 & 8) != 0) {
      FUN_147d7398a(lVar9,1);
    }
  }
LAB_14797e1cc:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797e21c FUN_14797e21c body=380 status=ok
// SIG undefined FUN_14797e21c(void)

void FUN_14797e21c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  code *local_48;
  longlong **local_40;
  code *local_38;
  code **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146891920();
  plVar2 = (longlong *)param_1[8];
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  lVar3 = param_1[0x5a];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = param_1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 1000))(param_1);
    lVar3 = param_1[0x22];
    if (lVar3 == 0) goto LAB_14797e2ff;
  }
  local_40 = &local_50;
  local_30 = &local_48;
  local_48 = FUN_14341af9a;
  local_38 = FUN_1449cc908;
  local_58 = 0;
  local_50 = param_2;
  FUN_14482c30e(lVar3,&local_38,CONCAT71((int7)((ulonglong)local_30 >> 8),1),0);
LAB_14797e2ff:
  lVar3 = param_1[0x58];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = param_1[0x57];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797e39a FUN_14797e39a body=832 status=ok
// SIG undefined FUN_14797e39a(void)

void FUN_14797e39a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_7a8 [32];
  undefined1 local_788;
  undefined4 local_780;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  plVar3 = *(longlong **)(param_1 + 0x40);
  lVar11 = plVar3[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar11 = plVar3[0x22];
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar11;
  lVar11 = param_1;
  if (param_1 != 0) {
    while( true ) {
      lVar6 = *(longlong *)(lVar11 + 0x2b8);
      if ((lVar6 != 0) && (iVar1 = *(int *)(lVar6 + 0x40), (longlong)iVar1 != 0)) {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        lVar10 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar6 + lVar10);
          if (lVar11 == param_1) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1447f76d2(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar5;
          }
          uVar5 = FUN_1417ed78e(uVar5,param_1);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447f76d2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar5;
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar1 * 8 != lVar10);
      }
      lVar11 = *(longlong *)(lVar11 + 0x40);
      if (lVar11 == 0) break;
      lVar6 = FUN_14043ab18();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) break;
    }
  }
  iVar1 = *(int *)(param_1 + 0x278);
  if ((longlong)iVar1 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x270);
    lVar6 = 0;
    do {
      lVar10 = *(longlong *)(lVar11 + lVar6);
      if (lVar10 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447f76d2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar10;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  cVar4 = FUN_146900ad3();
  if ((cVar4 != '\0') && (iVar1 = *(int *)(param_1 + 0x298), (longlong)iVar1 != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x290);
    lVar6 = 0;
    do {
      lVar10 = *(longlong *)(lVar11 + 8 + lVar6);
      if (lVar10 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447f76d2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar10;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  lVar11 = *(longlong *)(param_1 + 0x120);
  if (lVar11 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar11;
    if ((*(longlong *)(param_1 + 0x40) != 0) &&
       (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120), lVar11 != 0)) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447f76d2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar11;
    }
    uVar5 = FUN_140005490(param_1,1);
    lVar11 = *(longlong *)(param_1 + 0x120);
    plVar3 = *(longlong **)(lVar11 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x58))(plVar3,uVar5,param_2);
      lVar11 = *(longlong *)(param_1 + 0x120);
    }
    uVar7 = FUN_1446dcc8c();
    local_780 = 2;
    local_788 = 1;
    FUN_140021b28(local_770,uVar7,lVar11,uVar5);
    while (0 < (int)local_68) {
      puVar9 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar9 = local_770;
      }
      puVar8 = *(undefined1 **)(puVar9 + (ulonglong)local_68 * 0xe0 + -0x18);
      if (*(undefined1 **)(puVar9 + (ulonglong)local_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
        puVar8 = puVar9 + (ulonglong)local_68 * 0xe0 + -0xd8;
      }
      plVar3 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)
                    (puVar8 + (longlong)*(int *)(puVar9 + (ulonglong)local_68 * 0xe0 + -8) * 0x18) +
                  0x70) + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x58))
                  (plVar3,*(undefined8 *)
                           (puVar8 + (longlong)*(int *)(puVar9 + (ulonglong)local_68 * 0xe0 + -8) *
                                     0x18 + 8),param_2);
      }
      FUN_140caedf2(local_770);
    }
    FUN_140021a7a(local_770);
  }
  if ((local_48 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797e6dc FUN_14797e6dc body=92 status=ok
// SIG undefined FUN_14797e6dc(void)

undefined8 FUN_14797e6dc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((DAT_14c872bf0 == '\x01') && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    if ((*(longlong **)(param_1 + 0x40) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x108))(), cVar1 == '\0')) {
      return 0;
    }
    if ((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x108))(), cVar1 == '\0')) {
      return 0;
    }
  }
  uVar2 = FUN_146890c00(param_1);
  return uVar2;
}



// FUNCTION 14797e738 FUN_14797e738 body=92 status=ok
// SIG undefined FUN_14797e738(void)

undefined8 FUN_14797e738(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((DAT_14c872bf0 == '\x01') && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    if ((*(longlong **)(param_1 + 0x40) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x100))(), cVar1 == '\0')) {
      return 0;
    }
    if ((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x100))(), cVar1 == '\0')) {
      return 0;
    }
  }
  uVar2 = FUN_146890bfc(param_1);
  return uVar2;
}



// FUNCTION 14797e798 FUN_14797e798 body=29 status=ok
// SIG undefined FUN_14797e798(void)

void FUN_14797e798(longlong param_1)

{
  FUN_146891ab0();
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  return;
}



// FUNCTION 14797e7b6 FUN_14797e7b6 body=343 status=ok
// SIG undefined FUN_14797e7b6(void)

void FUN_14797e7b6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined2 local_68 [2];
  uint local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 600);
  if (param_1 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(longlong *)(param_1 + 0x50);
  }
  local_40 = 0xffffffff;
  local_3c = 0x100;
  local_3a = 0;
  local_50 = param_1;
  FUN_144a2daf0(&local_50);
  if (iVar3 != 0 && local_48 != 0) {
    do {
      if ((*(byte *)(local_48 + 0x38) & 0x20) != 0) {
        iVar3 = iVar3 + -1;
        local_5c = DAT_14c75f434;
        if (DAT_14c998208 == '\0') {
          local_5c = 0;
        }
        local_68[0] = *(undefined2 *)(local_48 + 0x40);
        local_64 = (uint)*(byte *)(local_48 + 0x42);
        local_60 = 0;
        local_58 = 0;
        FUN_14798b4aa(param_2,local_68);
      }
      local_48 = *(longlong *)(local_48 + 0x18);
      FUN_144a2daf0(&local_50);
    } while ((local_48 != 0) && (iVar3 != 0));
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x3f0))(plVar1,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797e90e FUN_14797e90e body=524 status=ok
// SIG undefined FUN_14797e90e(void)

void FUN_14797e90e(longlong *param_1,longlong *param_2,longlong param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == (int *)0x0) {
    param_4 = &local_64;
  }
  local_64 = 0;
  iVar2 = *param_4;
  if (iVar2 < (int)param_1[1]) {
    local_70 = param_1 + 5;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar2 * 0x18) != param_3) break;
      *param_4 = iVar2 + 1;
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x18 + *param_1);
      lVar7 = param_3;
      if (param_3 == 0) {
        bVar8 = true;
        lVar3 = 0;
      }
      else {
        do {
          lVar3 = FUN_144a8e29b(lVar7,*puVar6,3);
          bVar8 = lVar3 == 0;
          if (!bVar8) break;
          plVar4 = (longlong *)(lVar7 + 0x40);
          lVar7 = *plVar4;
        } while (*plVar4 != 0);
      }
      plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
      uVar1 = *(undefined4 *)(puVar6 + 1);
      *plVar4 = lVar3;
      *(undefined4 *)(plVar4 + 1) = uVar1;
      plVar4[2] = 0;
      plVar4[3] = 0;
      iVar2 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
        FUN_1456bd870(local_70,iVar2);
      }
      *(longlong **)(*local_70 + (longlong)iVar2 * 8) = plVar4;
      if (param_2 != (longlong *)0x0) {
        *param_2 = (longlong)plVar4;
      }
      if (!bVar8) {
        lVar7 = *(longlong *)(lVar3 + 8);
        lVar5 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar8 = lVar7 != 0;
          if (lVar7 != lVar5 && bVar8) {
            do {
              lVar7 = *(longlong *)(lVar7 + 0x30);
              bVar8 = lVar7 != 0;
              if (lVar7 == lVar5) break;
            } while (lVar7 != 0);
          }
          if (bVar8) goto LAB_14797ea90;
        }
        else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14797ea90:
          FUN_14797e90e(param_1,plVar4 + 2,*(undefined8 *)(lVar3 + 0x70),param_4);
          goto LAB_14797ea15;
        }
        lVar7 = *(longlong *)(lVar3 + 8);
        lVar5 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar8 = lVar7 != 0;
          if (lVar7 != lVar5 && bVar8) {
            do {
              lVar7 = *(longlong *)(lVar7 + 0x30);
              bVar8 = lVar7 != 0;
              if (lVar7 == lVar5) break;
            } while (lVar7 != 0);
          }
          if (bVar8) goto LAB_14797ead8;
        }
        else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14797ead8:
          FUN_14797eb1c(param_1,lVar3,plVar4 + 2,param_4);
        }
      }
LAB_14797ea15:
      param_2 = plVar4 + 3;
      iVar2 = *param_4;
    } while (iVar2 < (int)param_1[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797eb1c FUN_14797eb1c body=444 status=ok
// SIG undefined FUN_14797eb1c(void)

void FUN_14797eb1c(longlong *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = *param_4;
  if (iVar2 < (int)param_1[1]) {
    do {
      lVar4 = (longlong)iVar2;
      lVar6 = *(longlong *)(*param_1 + lVar4 * 0x18);
      if (lVar6 != 0) {
        if (param_2 == 0) {
          return;
        }
        if (lVar6 != *(longlong *)(param_2 + 0x20)) {
          return;
        }
      }
      *param_4 = iVar2 + 1;
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + lVar4 * 0x18) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_2 + 0x78);
      }
      plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
      uVar1 = *(undefined4 *)(lVar6 + lVar4 * 0x18 + 8);
      *plVar3 = lVar5;
      *(undefined4 *)(plVar3 + 1) = uVar1;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *param_3 = (longlong)plVar3;
      iVar2 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
        FUN_1456bd870(param_1 + 5,iVar2);
      }
      *(longlong **)(param_1[5] + (longlong)iVar2 * 8) = plVar3;
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar4 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar7 = lVar6 != 0;
          if (lVar6 != lVar4 && bVar7) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar7 = lVar6 != 0;
              if (lVar6 == lVar4) break;
            } while (lVar6 != 0);
          }
          if (bVar7) goto LAB_14797ec50;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_14797ec50:
          FUN_14797e90e(param_1,*param_3 + 0x10,*(undefined8 *)(lVar5 + 0x70),param_4);
          goto LAB_14797ec96;
        }
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar4 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar7 = lVar6 != 0;
          if (lVar6 != lVar4 && bVar7) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar7 = lVar6 != 0;
              if (lVar6 == lVar4) break;
            } while (lVar6 != 0);
          }
          if (bVar7) goto LAB_14797ecab;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_14797ecab:
          FUN_14797eb1c(param_1,lVar5,*param_3 + 0x10,param_4);
        }
      }
LAB_14797ec96:
      param_3 = (longlong *)(*param_3 + 0x18);
      iVar2 = *param_4;
    } while (iVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14797ecd8 FUN_14797ecd8 body=56 status=ok
// SIG undefined FUN_14797ecd8(void)

undefined8 * FUN_14797ecd8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + -0x180) == '\x01') {
    puVar2 = (undefined8 *)FUN_147986012(param_1 + 0x88,param_3);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *puVar2;
      goto LAB_14797eceb;
    }
  }
  uVar1 = 0;
LAB_14797eceb:
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14797ed10 FUN_14797ed10 body=193 status=ok
// SIG undefined FUN_14797ed10(void)

void FUN_14797ed10(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(char *)(param_1 + -0x180) == '\x01') &&
     (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
    uVar1 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xd0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x20) == param_3) {
          if ((undefined4 *)(lVar3 + 8) != (undefined4 *)0x0 && lVar3 != 0) {
            uVar4 = *(undefined4 *)(lVar3 + 8);
            uVar5 = *(undefined4 *)(lVar3 + 0xc);
            uVar6 = *(undefined4 *)(lVar3 + 0x10);
            uVar7 = *(undefined4 *)(lVar3 + 0x14);
            goto LAB_14797ed2d;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
LAB_14797ed2d:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  return;
}



// FUNCTION 14797edd2 FUN_14797edd2 body=99 status=ok
// SIG undefined FUN_14797edd2(void)

byte FUN_14797edd2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0xd0) == '\x01') &&
     (*(int *)(param_1 + 0x30c) < *(int *)(param_1 + 0x2e0))) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_14043ab18();
    param_1 = plVar1[2];
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      bVar3 = (**(code **)(*plVar1 + 0x350))(plVar1);
      bVar2 = 1;
      goto LAB_14797ee1b;
    }
  }
  bVar3 = (byte)param_1;
  bVar2 = 0;
LAB_14797ee1b:
  return bVar2 & bVar3;
}



// FUNCTION 14797ee36 FUN_14797ee36 body=140 status=ok
// SIG undefined FUN_14797ee36(void)

longlong * FUN_14797ee36(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = FUN_14043ab18();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && ((**(code **)(*plVar2 + 0x340))(plVar2,param_2,param_3), *param_2 != 0))
    {
      return param_2;
    }
  }
  if ((*(char *)(param_1 + 0xd0) == '\x01') &&
     (plVar2 = (longlong *)FUN_147986012(param_1 + 0x2d8,param_3), plVar2 != (longlong *)0x0)) {
    lVar1 = *plVar2;
  }
  else {
    lVar1 = 0;
  }
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 14797eec2 FUN_14797eec2 body=193 status=ok
// SIG undefined FUN_14797eec2(void)

int * FUN_14797eec2(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14797ed10(param_1 + 0x250,&local_38);
  if (((iStack_34 != 0 || local_38 != 0) || iStack_30 != 0) || iStack_2c != 0) {
    *param_2 = local_38;
    param_2[1] = iStack_34;
    param_2[2] = iStack_30;
    param_2[3] = iStack_2c;
LAB_14797ef10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x348))(plVar1,param_2,param_3);
      goto LAB_14797ef10;
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14797ef84 FUN_14797ef84 body=220 status=ok
// SIG undefined FUN_14797ef84(void)

void FUN_14797ef84(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x2a8)) {
    lVar3 = 0;
    do {
      local_38 = *(int *)(param_1 + 0x2b0) + (int)lVar3;
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + lVar3 * 8);
      cVar1 = (*(code *)*param_2)(param_2[1],&local_40);
      if (cVar1 == '\0') goto LAB_14797f01e;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x2a8));
  }
  if ((param_3 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x40), lVar3 != 0)) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_50 = *param_2;
      local_48 = param_2[1];
      FUN_14797ef84(lVar3,&local_50,1);
    }
  }
LAB_14797f01e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f068 FUN_14797f068 body=310 status=ok
// SIG undefined FUN_14797f068(void)

void FUN_14797f068(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141215e22(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  FUN_141215e22(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = local_48;
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14688c2e2(puVar3,puVar2,0);
  *param_3 = uVar1;
  FUN_1401f9f5c(local_58);
  FUN_1401f9f5c(local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f1a0 FUN_14797f1a0 body=189 status=ok
// SIG undefined FUN_14797f1a0(void)

void FUN_14797f1a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141215e22(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar1 == 0 || plVar1[1] == 0;
  FUN_1401f9f5c(local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f264 FUN_14797f264 body=189 status=ok
// SIG undefined FUN_14797f264(void)

void FUN_14797f264(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141215e22(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar1 != 0 && plVar1[1] != 0;
  FUN_1401f9f5c(local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f328 FUN_14797f328 body=312 status=ok
// SIG undefined FUN_14797f328(void)

void FUN_14797f328(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141215e22(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  FUN_141215e22(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = local_48;
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = FUN_14688c2e2(puVar3,puVar2,0);
  *param_3 = bVar1 ^ 1;
  FUN_1401f9f5c(local_58);
  FUN_1401f9f5c(local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f462 FUN_14797f462 body=268 status=ok
// SIG undefined FUN_14797f462(void)

void FUN_14797f462(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141215e22(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1401fa0f0(puVar1,local_38,0);
  FUN_1401f9f5c(local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797f570 FUN_14797f570 body=806 status=ok
// SIG undefined FUN_14797f570(void)

void FUN_14797f570(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60 [2];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_141215e22(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar7 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar7 = local_60;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar8) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar8 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar8) {
      lVar4 = lVar2;
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar6 = 1;
  if (lVar4 == 0 || lVar2 == 0) {
    local_78 = L"InstancedStruct_GetInvalidValueWarning";
    local_70._0_4_ = 0x26;
    FUN_1446e940c(local_8c,&local_78);
    local_78 = L"UBlueprintInstancedStructLibrary";
    local_70 = (longlong *)CONCAT44(local_70._4_4_,0x20);
    FUN_1446e940c(local_90,&local_78);
    FUN_140208bae(&local_88,local_90,local_8c,
                  L"Failed to resolve the Value for Get Instanced Struct Value");
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,7);
    local_70 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_68 = local_80;
    }
    else {
      (**(code **)(*local_88 + 8))();
      local_68 = local_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    FUN_14282556a(param_1,param_2,&local_78);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  else {
    plVar5 = local_60;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    if ((((plVar5[1] != 0) && (lVar3 = *plVar7, lVar3 != 0)) &&
        (lVar4 = *(longlong *)(lVar4 + 0x70), lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      FUN_1449b16b6(lVar4,lVar2,plVar5[1],1);
      *puVar6 = 0;
    }
  }
  FUN_1401f9f5c(local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797f898 FUN_14797f898 body=538 status=ok
// SIG undefined FUN_14797f898(void)

void FUN_14797f898(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar3 == 0 || *(longlong *)(param_2 + 0x38) == 0) {
    local_58 = L"InstancedStruct_MakeInvalidValueWarning";
    local_50._0_4_ = 0x27;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"UBlueprintInstancedStructLibrary";
    local_50 = (longlong *)CONCAT44(local_50._4_4_,0x20);
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(&local_68,local_70,local_6c,
                  L"Failed to resolve the Value for Make Instanced Struct");
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,7);
    local_50 = local_68;
    if (local_68 == (longlong *)0x0) {
      local_48 = local_60;
    }
    else {
      (**(code **)(*local_68 + 8))();
      local_48 = local_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    FUN_14282556a(param_1,param_2,&local_58);
    FUN_1401f9f5c(param_3);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98,*(undefined8 *)(lVar3 + 0x70));
  }
  FUN_1401fa0f0(param_3);
  return;
}



// FUNCTION 14797fac4 FUN_14797fac4 body=641 status=ok
// SIG undefined FUN_14797fac4(void)

void FUN_14797fac4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141215e22(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar5) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar5 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar3 == 0 || *(longlong *)(param_2 + 0x38) == 0) {
    local_68 = L"InstancedStruct_SetInvalidValueWarning";
    local_60._0_4_ = 0x26;
    FUN_1446e940c(local_7c,&local_68);
    local_68 = L"UBlueprintInstancedStructLibrary";
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0x20);
    FUN_1446e940c(local_80,&local_68);
    FUN_140208bae(&local_78,local_80,local_7c,
                  L"Failed to resolve the Value for Set Instanced Struct Value");
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,7);
    local_60 = local_78;
    if (local_78 == (longlong *)0x0) {
      local_58 = local_70;
    }
    else {
      (**(code **)(*local_78 + 8))();
      local_58 = local_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    FUN_14282556a(param_1,param_2,&local_68);
    FUN_1401f9f5c(puVar4);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  else {
    FUN_1401fa0f0(puVar4,*(undefined8 *)(lVar3 + 0x70));
  }
  FUN_1401f9f5c(local_50);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797fd68 FUN_14797fd68 body=534 status=ok
// SIG undefined FUN_14797fd68(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14797fd68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  size_t _Size;
  undefined1 *_Dst;
  longlong lVar9;
  bool bVar10;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar9 = *(longlong *)(lVar1 + 8);
    lVar7 = FUN_1446ebfd4();
    puVar8 = &local_48;
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar9 != 0;
      if (lVar9 != lVar7 && bVar10) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar10 = lVar9 != 0;
          if (lVar9 == lVar7) break;
        } while (lVar9 != 0);
      }
      if (bVar10) goto LAB_14797fe7c;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_14797fe7c:
      plVar3 = *(longlong **)(lVar1 + 0x70);
      _Size = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
      if ((int)_Size == 0) {
        _Dst = (undefined1 *)0x0;
      }
      else {
        lVar9 = -(_Size + 0x1e & 0xfffffffffffffff0);
        puVar8 = (ulonglong *)((longlong)&local_48 + lVar9);
        _Dst = (undefined1 *)((longlong)&local_48 + lVar9);
      }
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x160);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797fec7;
        (*pcVar4)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797fed7;
        memset(_Dst,0,_Size);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797feec;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797ff18;
        FUN_144a5ded6(param_2,_Dst);
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797ff2d;
        FUN_14470e992(param_2,uVar5,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797ff56;
      uVar6 = FUN_145c51056(uVar2,lVar1,_Dst,0);
      *param_3 = uVar6;
      if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x148);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14797ff7a;
        (*pcVar4)(plVar3,_Dst);
      }
      goto LAB_14797fdf7;
    }
  }
  puVar8 = &local_48;
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_14797fdf7:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar8 + -0x28) = &UNK_14797fe21;
  FUN_144d8e3a0();
}



// FUNCTION 14797ff84 FUN_14797ff84 body=242 status=ok
// SIG undefined FUN_14797ff84(void)

void FUN_14797ff84(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_14798005f:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_14798005f;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14798005f;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      bVar5 = true;
    }
    else {
      bVar5 = *(int *)(lVar2 + 8) ==
              *(int *)(lVar2 + 0x24 + (ulonglong)((*(byte *)(lVar1 + 0x98) & 1) == 0) * 0x10);
    }
    *param_3 = bVar5;
  }
  return;
}



// FUNCTION 147980076 FUN_147980076 body=242 status=ok
// SIG undefined FUN_147980076(void)

void FUN_147980076(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147980151:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_147980151;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147980151;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(lVar2 + 0x24 + (ulonglong)((*(byte *)(lVar1 + 0x98) & 1) == 0) * 0x10) <
              *(int *)(lVar2 + 8);
    }
    *(bool *)param_3 = bVar5;
  }
  return;
}



// FUNCTION 147980168 FUN_147980168 body=415 status=ok
// SIG undefined FUN_147980168(void)

void FUN_147980168(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_14798021d;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_14798021d;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar7) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar7 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar7) goto LAB_1479802d9;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1479802d9:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        FUN_147980982(uVar2,lVar1,uVar3,lVar6);
        return;
      }
    }
  }
LAB_14798021d:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147980308 FUN_147980308 body=239 status=ok
// SIG undefined FUN_147980308(void)

void FUN_147980308(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_1479803e0:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_1479803e0;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_1479803e0;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar2 + 8) -
              *(int *)(lVar2 + 0x24 + (ulonglong)((*(byte *)(lVar1 + 0x98) & 1) == 0) * 0x10);
    }
    *param_3 = iVar3;
  }
  return;
}



// FUNCTION 1479803f8 FUN_1479803f8 body=623 status=ok
// SIG undefined FUN_1479803f8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1479803f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  size_t _Size;
  undefined1 *_Dst;
  bool bVar10;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147980539:
    puVar9 = auStack_88;
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar7 = FUN_1446ebfd4();
    puVar9 = auStack_88;
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar10) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar10 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar10) goto LAB_147980539;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147980539;
    plVar3 = *(longlong **)(lVar1 + 0x70);
    _Size = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
    if ((int)_Size == 0) {
      _Dst = (undefined1 *)0x0;
    }
    else {
      lVar8 = -(_Size + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar8;
      _Dst = auStack_88 + lVar8;
    }
    if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
      pcVar4 = *(code **)(*plVar3 + 0x160);
      *(undefined8 *)(puVar9 + -0x28) = 0x1479804de;
      (*pcVar4)(plVar3,_Dst);
    }
    else {
      *(undefined8 *)(puVar9 + -0x28) = 0x14798057d;
      memset(_Dst,0,_Size);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(puVar9 + -0x28) = 0x147980592;
    FUN_1446ddbd2();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar9 + -0x28) = 0x147980663;
      FUN_144a5ded6(param_2,_Dst);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar9 + -0x28) = 0x1479805b4;
      FUN_14470e992(param_2,uVar5,_Dst);
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      local_50 = *(undefined1 *)(lVar1 + 0x98);
      local_80 = *(undefined8 *)(lVar1 + 0x70);
      uStack_78 = *(undefined8 *)(lVar1 + 0x78);
      local_68 = *(undefined4 *)(lVar1 + 0x80);
      uStack_64 = *(undefined4 *)(lVar1 + 0x84);
      uStack_60 = *(undefined4 *)(lVar1 + 0x88);
      uStack_5c = *(undefined4 *)(lVar1 + 0x8c);
      local_58 = *(undefined8 *)(lVar1 + 0x90);
      local_70 = lVar2;
      *(undefined8 *)(puVar9 + -0x28) = 0x14798060e;
      uVar6 = FUN_14000bafc(&local_80,_Dst);
    }
    *param_3 = uVar6;
    if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
      pcVar4 = *(code **)(*plVar3 + 0x148);
      *(undefined8 *)(puVar9 + -0x28) = 0x147980631;
      (*pcVar4)(plVar3,_Dst);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_14798056a;
  FUN_144d8e3a0();
}



// FUNCTION 14798066c FUN_14798066c body=415 status=ok
// SIG undefined FUN_14798066c(void)

void FUN_14798066c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_147980721;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147980721;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar7) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar7 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar7) goto LAB_1479807dd;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1479807dd:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        FUN_147980bfc(uVar2,lVar1,uVar3,lVar6);
        return;
      }
    }
  }
LAB_147980721:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 14798080c FUN_14798080c body=370 status=ok
// SIG undefined FUN_14798080c(void)

void FUN_14798080c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar2 = local_20;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    plVar3 = (longlong *)FUN_146fdab03(*(undefined8 *)(local_20 + 0x10),local_28,3);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x100))(plVar3,lVar2 + *(int *)((longlong)plVar3 + 0x44),uVar1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147980982 FUN_147980982 body=633 status=ok
// SIG undefined FUN_147980982(void)

void FUN_147980982(ulonglong *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong *local_a8;
  int local_a0;
  undefined4 local_9c;
  byte local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != (ulonglong *)0x0 && param_1 != (ulonglong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x168))(*(longlong **)(param_2 + 0x70),&local_90)
    ;
    (**(code **)(**(longlong **)(param_4 + 0x78) + 0x168))(*(longlong **)(param_4 + 0x78),&local_58)
    ;
    if (local_90 == local_58) {
      local_60 = *(byte *)(param_2 + 0x98);
      local_90 = *(longlong *)(param_2 + 0x70);
      uStack_88 = *(undefined8 *)(param_2 + 0x78);
      local_78 = *(undefined4 *)(param_2 + 0x80);
      uStack_74 = *(undefined4 *)(param_2 + 0x84);
      uStack_70 = *(undefined4 *)(param_2 + 0x88);
      uStack_6c = *(undefined4 *)(param_2 + 0x8c);
      local_68 = *(undefined8 *)(param_2 + 0x90);
      bVar1 = *(byte *)(param_4 + 0x70);
      local_80 = param_1;
      local_9c = (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
      local_b0 = *(longlong *)(param_4 + 0x78);
      local_a0 = *(int *)(local_b0 + 0x34);
      local_a8 = param_3;
      local_98 = bVar1;
      FUN_14474d2ba(&local_b0,0);
      plVar2 = *(longlong **)(param_4 + 0x78);
      iVar4 = (int)param_1[1];
      iVar8 = 0;
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar9);
          cVar3 = FUN_1446ec082(&local_90,&local_50);
          iVar8 = iVar9;
          if (cVar3 != '\0') break;
          iVar9 = iVar9 + 1;
          iVar8 = iVar4;
        } while (iVar4 != iVar9);
      }
      local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
      cVar3 = FUN_1446ec082(&local_90);
      if (cVar3 != '\0') {
        do {
          local_48 = 1;
          local_50 = &local_b0;
          iVar4 = FUN_144a482cc(&local_b0,&local_50);
          FUN_144ae1314(&local_b0,iVar4,1);
          if ((local_60 & 1) == 0) {
            uVar7 = *local_80;
          }
          else {
            uVar5 = *local_80;
            uVar7 = ((longlong)uVar5 >> 0x18) + (longlong)local_80;
            if ((uVar5 & 1) == 0) {
              uVar7 = uVar5;
            }
          }
          if ((int)local_a8[1] == 0) {
            lVar6 = 0;
          }
          else {
            if ((local_98 & 1) == 0) {
              uVar5 = *local_a8;
            }
            else {
              uVar5 = *local_a8;
              if ((uVar5 & 1) != 0) {
                uVar5 = (longlong)local_a8 + ((longlong)uVar5 >> 0x18);
              }
            }
            lVar6 = (longlong)local_a0 * (longlong)iVar4 + uVar5;
          }
          (**(code **)(*plVar2 + 0x110))
                    (plVar2,lVar6,uVar7 + (longlong)local_68._4_4_ * (longlong)iVar8);
          uVar5 = local_80[1];
          do {
            iVar8 = iVar8 + 1;
            if ((int)uVar5 <= iVar8) break;
            local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
            cVar3 = FUN_1446ec082(&local_90,&local_50);
          } while (cVar3 == '\0');
          local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
          cVar3 = FUN_1446ec082(&local_90,&local_50);
        } while (cVar3 != '\0');
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147980bfc FUN_147980bfc body=642 status=ok
// SIG undefined FUN_147980bfc(void)

void FUN_147980bfc(ulonglong *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong *local_a8;
  int local_a0;
  undefined4 local_9c;
  byte local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != (ulonglong *)0x0 && param_1 != (ulonglong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x168))(*(longlong **)(param_2 + 0x78),&local_90)
    ;
    (**(code **)(**(longlong **)(param_4 + 0x78) + 0x168))(*(longlong **)(param_4 + 0x78),&local_58)
    ;
    if (local_90 == local_58) {
      local_60 = *(byte *)(param_2 + 0x98);
      local_90 = *(longlong *)(param_2 + 0x70);
      uStack_88 = *(undefined8 *)(param_2 + 0x78);
      local_78 = *(int *)(param_2 + 0x80);
      uStack_74 = *(undefined4 *)(param_2 + 0x84);
      uStack_70 = *(undefined4 *)(param_2 + 0x88);
      uStack_6c = *(undefined4 *)(param_2 + 0x8c);
      local_68 = *(undefined8 *)(param_2 + 0x90);
      bVar1 = *(byte *)(param_4 + 0x70);
      local_80 = param_1;
      local_9c = (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
      local_b0 = *(longlong *)(param_4 + 0x78);
      local_a0 = *(int *)(local_b0 + 0x34);
      local_a8 = param_3;
      local_98 = bVar1;
      FUN_14474d2ba(&local_b0,0);
      plVar2 = *(longlong **)(param_4 + 0x78);
      iVar4 = (int)param_1[1];
      iVar8 = 0;
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar9);
          cVar3 = FUN_1446ec082(&local_90,&local_50);
          iVar8 = iVar9;
          if (cVar3 != '\0') break;
          iVar9 = iVar9 + 1;
          iVar8 = iVar4;
        } while (iVar4 != iVar9);
      }
      local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
      cVar3 = FUN_1446ec082(&local_90);
      if (cVar3 != '\0') {
        do {
          local_48 = 1;
          local_50 = &local_b0;
          iVar4 = FUN_144a482cc(&local_b0,&local_50);
          FUN_144ae1314(&local_b0,iVar4,1);
          if ((local_60 & 1) == 0) {
            uVar6 = *local_80;
          }
          else {
            uVar7 = *local_80;
            uVar6 = ((longlong)uVar7 >> 0x18) + (longlong)local_80;
            if ((uVar7 & 1) == 0) {
              uVar6 = uVar7;
            }
          }
          if ((int)local_a8[1] == 0) {
            lVar5 = 0;
          }
          else {
            if ((local_98 & 1) == 0) {
              uVar7 = *local_a8;
            }
            else {
              uVar7 = *local_a8;
              if ((uVar7 & 1) != 0) {
                uVar7 = (longlong)local_a8 + ((longlong)uVar7 >> 0x18);
              }
            }
            lVar5 = (longlong)local_a0 * (longlong)iVar4 + uVar7;
          }
          (**(code **)(*plVar2 + 0x110))
                    (plVar2,lVar5,
                     uVar6 + (longlong)local_68._4_4_ * (longlong)iVar8 + (longlong)local_78);
          uVar7 = local_80[1];
          do {
            iVar8 = iVar8 + 1;
            if ((int)uVar7 <= iVar8) break;
            local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
            cVar3 = FUN_1446ec082(&local_90,&local_50);
          } while (cVar3 == '\0');
          local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar8);
          cVar3 = FUN_1446ec082(&local_90,&local_50);
        } while (cVar3 != '\0');
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147980e98 FUN_147980e98 body=526 status=ok
// SIG undefined FUN_147980e98(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147980e98(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  size_t _Size;
  longlong lVar8;
  undefined1 *_Dst;
  bool bVar9;
  undefined1 auStack_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar6 = FUN_144a7e162();
    puVar7 = auStack_48;
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar6 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar6) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_147980fa9;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_147980fa9:
      plVar3 = *(longlong **)(lVar1 + 0x70);
      _Size = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
      if ((int)_Size == 0) {
        _Dst = (undefined1 *)0x0;
      }
      else {
        lVar8 = -(_Size + 0x1e & 0xfffffffffffffff0);
        puVar7 = auStack_48 + lVar8;
        _Dst = auStack_48 + lVar8;
      }
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x160);
        *(undefined8 *)(puVar7 + -0x28) = 0x147980ff4;
        (*pcVar4)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar7 + -0x28) = 0x147981004;
        memset(_Dst,0,_Size);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(puVar7 + -0x28) = 0x147981019;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        *(undefined8 *)(puVar7 + -0x28) = 0x147981045;
        FUN_144a5ded6(param_2,_Dst);
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar7 + -0x28) = 0x14798105a;
        FUN_14470e992(param_2,uVar5,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      *(undefined8 *)(puVar7 + -0x28) = 0x147981080;
      FUN_14798263a(uVar2,lVar1,_Dst);
      if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x148);
        *(undefined8 *)(puVar7 + -0x28) = 0x1479810a2;
        (*pcVar4)(plVar3,_Dst);
      }
      goto LAB_147980f27;
    }
  }
  puVar7 = auStack_48;
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_147980f27:
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -0x28) = &UNK_147980f4e;
  FUN_144d8e3a0();
}



// FUNCTION 1479810ac FUN_1479810ac body=415 status=ok
// SIG undefined FUN_1479810ac(void)

void FUN_1479810ac(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_144a7e162();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_147981161;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147981161;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar7) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar7 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar7) goto LAB_14798121d;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14798121d:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        FUN_14798279e(uVar2,lVar1,uVar3,lVar6);
        return;
      }
    }
  }
LAB_147981161:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 14798124c FUN_14798124c body=295 status=ok
// SIG undefined FUN_14798124c(void)

void FUN_14798124c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_14798134c:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_144a7e162();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_14798134c;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14798134c;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 != 0) {
      local_50 = *(undefined8 *)(lVar1 + 0x70);
      local_40 = *(undefined4 *)(lVar1 + 0x78);
      uStack_3c = *(undefined4 *)(lVar1 + 0x7c);
      uStack_38 = *(undefined4 *)(lVar1 + 0x80);
      uStack_34 = *(undefined4 *)(lVar1 + 0x84);
      local_30 = *(undefined4 *)(lVar1 + 0x88);
      local_48 = lVar2;
      FUN_1402608fa(&local_50,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147981374 FUN_147981374 body=531 status=ok
// SIG undefined FUN_147981374(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147981374(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  size_t _Size;
  undefined1 *_Dst;
  longlong lVar9;
  bool bVar10;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar9 = *(longlong *)(lVar1 + 8);
    lVar7 = FUN_144a7e162();
    puVar8 = &local_48;
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar9 != 0;
      if (lVar9 != lVar7 && bVar10) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar10 = lVar9 != 0;
          if (lVar9 == lVar7) break;
        } while (lVar9 != 0);
      }
      if (bVar10) goto LAB_147981488;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_147981488:
      plVar3 = *(longlong **)(lVar1 + 0x70);
      _Size = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
      if ((int)_Size == 0) {
        _Dst = (undefined1 *)0x0;
      }
      else {
        lVar9 = -(_Size + 0x1e & 0xfffffffffffffff0);
        puVar8 = (ulonglong *)((longlong)&local_48 + lVar9);
        _Dst = (undefined1 *)((longlong)&local_48 + lVar9);
      }
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x160);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x1479814d3;
        (*pcVar4)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x1479814e3;
        memset(_Dst,0,_Size);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)((longlong)puVar8 + -0x28) = 0x1479814f8;
      FUN_1446ddbd2();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x147981524;
        FUN_144a5ded6(param_2,_Dst);
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x147981539;
        FUN_14470e992(param_2,uVar5,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
      *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14798155f;
      uVar6 = FUN_147982abe(uVar2,lVar1,_Dst);
      *param_3 = uVar6;
      if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x148);
        *(undefined8 *)((longlong)puVar8 + -0x28) = 0x147981583;
        (*pcVar4)(plVar3,_Dst);
      }
      goto LAB_147981403;
    }
  }
  puVar8 = &local_48;
  *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_147981403:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar8 + -0x28) = &UNK_14798142d;
  FUN_144d8e3a0();
}



// FUNCTION 14798158c FUN_14798158c body=604 status=ok
// SIG undefined FUN_14798158c(void)

void FUN_14798158c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_144a7e162();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (!bVar9) goto LAB_147981724;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147981724;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_144a7e162();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar8 = *(longlong *)(param_2 + 0x30);
    if (lVar8 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar5 = *(longlong *)(lVar8 + 8);
      lVar6 = FUN_144a7e162();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar9 = lVar5 != 0;
        if (lVar5 != lVar6 && bVar9) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar9 = lVar5 != 0;
            if (lVar5 == lVar6) break;
          } while (lVar5 != 0);
        }
        if (!bVar9) goto LAB_147981724;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_147981724;
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_144a7e162();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar7 = FUN_144a7e162();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar9 = lVar6 != 0;
          if (lVar6 != lVar7 && bVar9) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar9 = lVar6 != 0;
              if (lVar6 == lVar7) break;
            } while (lVar6 != 0);
          }
          if (bVar9) goto LAB_1479816a5;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_1479816a5:
          *(ulonglong *)(param_2 + 0x20) =
               (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0)
          ;
          FUN_147982f70(uVar2,lVar1,uVar3,lVar8,uVar4,lVar5);
          return;
        }
      }
    }
  }
LAB_147981724:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 1479817e8 FUN_1479817e8 body=604 status=ok
// SIG undefined FUN_1479817e8(void)

void FUN_1479817e8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_144a7e162();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (!bVar9) goto LAB_147981980;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147981980;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_144a7e162();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar8 = *(longlong *)(param_2 + 0x30);
    if (lVar8 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar5 = *(longlong *)(lVar8 + 8);
      lVar6 = FUN_144a7e162();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar9 = lVar5 != 0;
        if (lVar5 != lVar6 && bVar9) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar9 = lVar5 != 0;
            if (lVar5 == lVar6) break;
          } while (lVar5 != 0);
        }
        if (!bVar9) goto LAB_147981980;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_147981980;
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_144a7e162();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar7 = FUN_144a7e162();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar9 = lVar6 != 0;
          if (lVar6 != lVar7 && bVar9) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar9 = lVar6 != 0;
              if (lVar6 == lVar7) break;
            } while (lVar6 != 0);
          }
          if (bVar9) goto LAB_147981901;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_147981901:
          *(ulonglong *)(param_2 + 0x20) =
               (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0)
          ;
          FUN_147982b72(uVar2,lVar1,uVar3,lVar8,uVar4,lVar5);
          return;
        }
      }
    }
  }
LAB_147981980:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 147981a44 FUN_147981a44 body=221 status=ok
// SIG undefined FUN_147981a44(void)

void FUN_147981a44(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
LAB_147981b0c:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a7e162();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_147981b0c;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_147981b0c;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar1 == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = *(int *)(lVar1 + 8) == *(int *)(lVar1 + 0x34);
    }
    *param_3 = bVar4;
  }
  return;
}



// FUNCTION 147981b22 FUN_147981b22 body=221 status=ok
// SIG undefined FUN_147981b22(void)

void FUN_147981b22(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
LAB_147981bea:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a7e162();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_147981bea;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_147981bea;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar1 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(lVar1 + 0x34) < *(int *)(lVar1 + 8);
    }
    *(bool *)param_3 = bVar4;
  }
  return;
}



// FUNCTION 147981c00 FUN_147981c00 body=218 status=ok
// SIG undefined FUN_147981c00(void)

void FUN_147981c00(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
LAB_147981cc5:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar3 = FUN_144a7e162();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_147981cc5;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147981cc5;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34);
    }
    *param_3 = iVar2;
  }
  return;
}



// FUNCTION 147981cda FUN_147981cda body=587 status=ok
// SIG undefined FUN_147981cda(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147981cda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  size_t _Size;
  undefined1 *_Dst;
  bool bVar10;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_147981e11:
    puVar9 = &local_68;
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar7 = FUN_144a7e162();
    puVar9 = &local_68;
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar10 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar10) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar10 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar10) goto LAB_147981e11;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147981e11;
    plVar3 = *(longlong **)(lVar1 + 0x70);
    _Size = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
    if ((int)_Size == 0) {
      _Dst = (undefined1 *)0x0;
    }
    else {
      lVar8 = -(_Size + 0x1e & 0xfffffffffffffff0);
      puVar9 = (undefined8 *)((longlong)&local_68 + lVar8);
      _Dst = (undefined1 *)((longlong)&local_68 + lVar8);
    }
    if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
      pcVar4 = *(code **)(*plVar3 + 0x160);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981db6;
      (*pcVar4)(plVar3,_Dst);
    }
    else {
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981e52;
      memset(_Dst,0,_Size);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981e67;
    FUN_1446ddbd2();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981ef1;
      FUN_144a5ded6(param_2,_Dst);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981e85;
      FUN_14470e992(param_2,uVar5,_Dst);
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x70);
      local_58 = *(undefined4 *)(lVar1 + 0x78);
      uStack_54 = *(undefined4 *)(lVar1 + 0x7c);
      uStack_50 = *(undefined4 *)(lVar1 + 0x80);
      uStack_4c = *(undefined4 *)(lVar1 + 0x84);
      local_48 = *(undefined4 *)(lVar1 + 0x88);
      local_60 = lVar2;
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981f21;
      uVar6 = FUN_14798283a(&local_68,_Dst);
    }
    *param_3 = uVar6;
    if ((*(byte *)((longlong)plVar3 + 0x3c) & 0x10) == 0) {
      pcVar4 = *(code **)(*plVar3 + 0x148);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x147981ebf;
      (*pcVar4)(plVar3,_Dst);
    }
  }
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar9 + -0x28) = &UNK_147981e3f;
  FUN_144d8e3a0();
}



// FUNCTION 147981f2a FUN_147981f2a body=415 status=ok
// SIG undefined FUN_147981f2a(void)

void FUN_147981f2a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_144a7e162();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_147981fdf;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147981fdf;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar7) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar7 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar7) goto LAB_14798209b;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14798209b:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        FUN_1479828d8(uVar2,lVar1,uVar3,lVar6);
        return;
      }
    }
  }
LAB_147981fdf:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 1479820ca FUN_1479820ca body=415 status=ok
// SIG undefined FUN_1479820ca(void)

void FUN_1479820ca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_144a7e162();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_14798217f;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_14798217f;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *(longlong *)(lVar6 + 8);
      lVar5 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar4 != 0;
        if (lVar4 != lVar5 && bVar7) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar7 = lVar4 != 0;
            if (lVar4 == lVar5) break;
          } while (lVar4 != 0);
        }
        if (bVar7) goto LAB_14798223b;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14798223b:
        *(ulonglong *)(param_2 + 0x20) =
             (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
        FUN_1479829cc(uVar2,lVar1,uVar3,lVar6);
        return;
      }
    }
  }
LAB_14798217f:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 14798226a FUN_14798226a body=604 status=ok
// SIG undefined FUN_14798226a(void)

void FUN_14798226a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_144a7e162();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (!bVar9) goto LAB_147982402;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147982402;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_144a7e162();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    lVar8 = *(longlong *)(param_2 + 0x30);
    if (lVar8 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      lVar5 = *(longlong *)(lVar8 + 8);
      lVar6 = FUN_144a7e162();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar9 = lVar5 != 0;
        if (lVar5 != lVar6 && bVar9) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar9 = lVar5 != 0;
            if (lVar5 == lVar6) break;
          } while (lVar5 != 0);
        }
        if (!bVar9) goto LAB_147982402;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_147982402;
      *(undefined8 *)(param_2 + 0x30) = 0;
      FUN_144a7e162();
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
        FUN_144a5ded6(param_2,0);
      }
      else {
        FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar7 = FUN_144a7e162();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar9 = lVar6 != 0;
          if (lVar6 != lVar7 && bVar9) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar9 = lVar6 != 0;
              if (lVar6 == lVar7) break;
            } while (lVar6 != 0);
          }
          if (bVar9) goto LAB_147982383;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_147982383:
          *(ulonglong *)(param_2 + 0x20) =
               (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0)
          ;
          FUN_147982d80(uVar2,lVar1,uVar3,lVar8,uVar4,lVar5);
          return;
        }
      }
    }
  }
LAB_147982402:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 1479824c6 FUN_1479824c6 body=367 status=ok
// SIG undefined FUN_1479824c6(void)

void FUN_1479824c6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar2 = local_20;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    plVar3 = (longlong *)FUN_14798317d(*(undefined8 *)(local_20 + 0x10),local_28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x100))(plVar3,lVar2 + *(int *)((longlong)plVar3 + 0x44),uVar1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798263a FUN_14798263a body=355 status=ok
// SIG undefined FUN_14798263a(void)

void FUN_14798263a(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined2 **local_88;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined2 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    local_78 = *(undefined8 *)(param_2 + 0x70);
    local_58 = *(undefined4 *)(param_2 + 0x88);
    local_68 = *(undefined4 *)(param_2 + 0x78);
    uStack_64 = *(undefined4 *)(param_2 + 0x7c);
    uStack_60 = *(undefined4 *)(param_2 + 0x80);
    uStack_5c = *(undefined4 *)(param_2 + 0x84);
    local_70 = param_1;
    if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) == 0x7fffffff) {
      local_28 = &local_38;
      local_88 = &local_30;
      local_30 = (undefined2 *)&LAB_14798624c;
      local_40 = &local_50;
      local_48 = (undefined2 *)&LAB_147986266;
      local_50 = local_78;
      local_38 = local_78;
      iVar2 = FUN_147986164(local_68,param_3,&local_68);
      uVar1 = DAT_14cae7098;
      if (iVar2 == -1) {
        FUN_1400021e4(param_2 + 0x20,&local_48);
        puVar3 = &DAT_149dfb77a;
        if ((int)local_40 != 0) {
          puVar3 = local_48;
        }
        FUN_140002266(&local_30,
                      L"Attempted add to set \'%s\' beyond the maximum supported capacity!",puVar3);
        puVar3 = &DAT_149dfb77a;
        if ((int)local_28 != 0) {
          puVar3 = local_30;
        }
        FUN_1415b7ec4(puVar3,3,uVar1);
        if (local_30 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      FUN_146896fd6(&local_78,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798279e FUN_14798279e body=156 status=ok
// SIG undefined FUN_14798279e(void)

void FUN_14798279e(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != (ulonglong *)0x0 && param_1 != 0) {
    bVar1 = *(byte *)(param_4 + 0x70);
    (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
    lVar6 = (longlong)(int)param_3[1];
    if (0 < lVar6) {
      iVar2 = *(int *)(*(longlong *)(param_4 + 0x78) + 0x34);
      lVar5 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar3 = 0;
        }
        else {
          if ((bVar1 & 1) == 0) {
            uVar4 = *param_3;
          }
          else {
            uVar4 = *param_3;
            if ((uVar4 & 1) != 0) {
              uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)param_3;
            }
          }
          lVar3 = uVar4 + lVar5;
        }
        FUN_14798263a(param_1,param_2,lVar3);
        lVar5 = lVar5 + iVar2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14798283a FUN_14798283a body=157 status=ok
// SIG undefined FUN_14798283a(void)

bool FUN_14798283a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_1;
  local_20 = &local_30;
  local_58 = &local_28;
  local_28 = &LAB_147986272;
  local_38 = &local_48;
  local_40 = &LAB_14798628c;
  local_30 = local_48;
  iVar1 = FUN_147986164(param_1[1],param_2,param_1 + 2);
  if (iVar1 != -1) {
    FUN_140260c56(param_1,iVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479828d8 FUN_1479828d8 body=242 status=ok
// SIG undefined FUN_1479828d8(void)

void FUN_1479828d8(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [39];
  byte local_71;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != (ulonglong *)0x0 && param_1 != 0) {
    local_71 = *(byte *)(param_4 + 0x70);
    (**(code **)(**(longlong **)(param_4 + 0x78) + 0x178))();
    lVar5 = (longlong)(int)param_3[1];
    if (0 < lVar5) {
      iVar1 = *(int *)(*(longlong *)(param_4 + 0x78) + 0x34);
      lVar4 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar2 = 0;
        }
        else {
          if ((local_71 & 1) == 0) {
            uVar3 = *param_3;
          }
          else {
            uVar3 = *param_3;
            if ((uVar3 & 1) != 0) {
              uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)param_3;
            }
          }
          lVar2 = uVar3 + lVar4;
        }
        local_70 = *(undefined8 *)(param_2 + 0x70);
        local_50 = *(undefined4 *)(param_2 + 0x88);
        local_60 = *(undefined4 *)(param_2 + 0x78);
        uStack_5c = *(undefined4 *)(param_2 + 0x7c);
        uStack_58 = *(undefined4 *)(param_2 + 0x80);
        uStack_54 = *(undefined4 *)(param_2 + 0x84);
        local_68 = param_1;
        FUN_14798283a(&local_70,lVar2);
        lVar4 = lVar4 + iVar1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479829cc FUN_1479829cc body=240 status=ok
// SIG undefined FUN_1479829cc(void)

void FUN_1479829cc(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0 && param_1 != (longlong *)0x0) {
    local_48 = *(undefined8 *)(param_2 + 0x70);
    local_58 = &local_48;
    local_38 = *(undefined4 *)(param_2 + 0x78);
    uStack_34 = *(undefined4 *)(param_2 + 0x7c);
    uStack_30 = *(undefined4 *)(param_2 + 0x80);
    uStack_2c = *(undefined4 *)(param_2 + 0x84);
    local_28 = *(int *)(param_2 + 0x88);
    local_50 = 0xffffffffffffffff;
    local_40 = param_1;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_14115298c(param_3,param_4,(longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40
                     );
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147982abe FUN_147982abe body=179 status=ok
// SIG undefined FUN_147982abe(void)

bool FUN_147982abe(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined1 **local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    local_60 = *(undefined8 *)(param_2 + 0x70);
    local_50 = *(undefined4 *)(param_2 + 0x78);
    uStack_4c = *(undefined4 *)(param_2 + 0x7c);
    uStack_48 = *(undefined4 *)(param_2 + 0x80);
    uStack_44 = *(undefined4 *)(param_2 + 0x84);
    local_40 = *(undefined4 *)(param_2 + 0x88);
    local_10 = &local_20;
    local_68 = &local_18;
    local_18 = &LAB_14798624c;
    local_28 = &local_38;
    local_30 = &LAB_147986266;
    local_58 = param_1;
    local_38 = local_60;
    local_20 = local_60;
    iVar1 = FUN_147986164(local_50,param_3,&local_50);
    bVar2 = iVar1 != -1;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147982b72 FUN_147982b72 body=524 status=ok
// SIG undefined FUN_147982b72(void)

void FUN_147982b72(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_5 != 0 && (param_3 != 0 && param_1 != (longlong *)0x0)) {
    local_a0 = *(undefined8 *)(param_2 + 0x70);
    local_90 = *(undefined8 *)(param_2 + 0x78);
    uStack_88 = *(undefined8 *)(param_2 + 0x80);
    local_80 = *(int *)(param_2 + 0x88);
    uVar1 = *(undefined8 *)(param_4 + 0x70);
    local_b8 = *(undefined8 *)(param_4 + 0x78);
    uStack_b0 = *(undefined8 *)(param_4 + 0x80);
    local_a8 = *(undefined4 *)(param_4 + 0x88);
    local_f0 = *(undefined8 *)(param_6 + 0x70);
    local_e8 = param_5;
    local_e0 = *(undefined4 *)(param_6 + 0x78);
    uStack_dc = *(undefined4 *)(param_6 + 0x7c);
    uStack_d8 = *(undefined4 *)(param_6 + 0x80);
    uStack_d4 = *(undefined4 *)(param_6 + 0x84);
    local_d0 = *(undefined4 *)(param_6 + 0x88);
    local_c8 = uVar1;
    local_c0 = param_3;
    local_98 = param_1;
    FUN_1402608fa(&local_f0,0);
    local_f8 = 0xffffffffffffffff;
    local_100 = &local_a0;
    FUN_14000a0a0(&local_100);
    if (-1 < (int)(uint)local_f8) {
      do {
        lVar4 = local_100[1];
        if (*(int *)(lVar4 + 0x28) <= (int)(uint)local_f8) break;
        lVar3 = lVar4 + 0x10;
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          lVar3 = *(longlong *)(lVar4 + 0x20);
        }
        if ((*(uint *)(lVar3 + (ulonglong)((uint)local_f8 >> 5) * 4) >> ((uint)local_f8 & 0x1f) & 1)
            == 0) break;
        lVar4 = (longlong)(int)(uint)local_f8 * (longlong)local_80 + *local_98;
        local_50 = &local_60;
        local_58 = &LAB_14798624c;
        local_70 = &LAB_147986266;
        local_108 = &local_58;
        local_78 = uVar1;
        local_68 = &local_78;
        local_60 = uVar1;
        iVar2 = FUN_147986164(param_3,lVar4,&local_b8,&local_70);
        if (iVar2 != -1) {
          FUN_146896fd6(&local_f0,lVar4);
        }
        FUN_14000a0a0(&local_100);
      } while (-1 < (int)(uint)local_f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147982d80 FUN_147982d80 body=495 status=ok
// SIG undefined FUN_147982d80(void)

void FUN_147982d80(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_5 != 0 && (param_3 != (longlong *)0x0 && param_1 != (longlong *)0x0)) {
    local_40 = *(undefined8 *)(param_2 + 0x70);
    local_30 = *(undefined8 *)(param_2 + 0x78);
    uStack_28 = *(undefined8 *)(param_2 + 0x80);
    local_20 = *(int *)(param_2 + 0x88);
    local_68 = *(undefined8 *)(param_4 + 0x70);
    local_58 = *(undefined8 *)(param_4 + 0x78);
    uStack_50 = *(undefined8 *)(param_4 + 0x80);
    local_48 = *(int *)(param_4 + 0x88);
    local_90 = *(undefined8 *)(param_6 + 0x70);
    local_88 = param_5;
    local_80 = *(undefined4 *)(param_6 + 0x78);
    uStack_7c = *(undefined4 *)(param_6 + 0x7c);
    uStack_78 = *(undefined4 *)(param_6 + 0x80);
    uStack_74 = *(undefined4 *)(param_6 + 0x84);
    local_70 = *(undefined4 *)(param_6 + 0x88);
    local_60 = param_3;
    local_38 = param_1;
    FUN_1402608fa(&local_90,0);
    local_98 = 0xffffffffffffffff;
    local_a0 = &local_40;
    FUN_14000a0a0(&local_a0);
    if (-1 < (int)(uint)local_98) {
      do {
        lVar1 = local_a0[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_98) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_98 >> 5) * 4) >> ((uint)local_98 & 0x1f) & 1)
            == 0) break;
        FUN_146896fd6(&local_90,(longlong)(int)(uint)local_98 * (longlong)local_20 + *local_38);
        FUN_14000a0a0(&local_a0);
      } while (-1 < (int)(uint)local_98);
    }
    local_a0 = &local_68;
    local_98 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_a0);
    if (-1 < (int)(uint)local_98) {
      do {
        lVar1 = local_a0[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_98) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_98 >> 5) * 4) >> ((uint)local_98 & 0x1f) & 1)
            == 0) break;
        FUN_146896fd6(&local_90,(longlong)(int)(uint)local_98 * (longlong)local_48 + *local_60);
        FUN_14000a0a0(&local_a0);
      } while (-1 < (int)(uint)local_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147982f70 FUN_147982f70 body=524 status=ok
// SIG undefined FUN_147982f70(void)

void FUN_147982f70(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_5 != 0 && (param_3 != 0 && param_1 != (longlong *)0x0)) {
    local_a0 = *(undefined8 *)(param_2 + 0x70);
    local_90 = *(undefined8 *)(param_2 + 0x78);
    uStack_88 = *(undefined8 *)(param_2 + 0x80);
    local_80 = *(int *)(param_2 + 0x88);
    uVar1 = *(undefined8 *)(param_4 + 0x70);
    local_b8 = *(undefined8 *)(param_4 + 0x78);
    uStack_b0 = *(undefined8 *)(param_4 + 0x80);
    local_a8 = *(undefined4 *)(param_4 + 0x88);
    local_f0 = *(undefined8 *)(param_6 + 0x70);
    local_e8 = param_5;
    local_e0 = *(undefined4 *)(param_6 + 0x78);
    uStack_dc = *(undefined4 *)(param_6 + 0x7c);
    uStack_d8 = *(undefined4 *)(param_6 + 0x80);
    uStack_d4 = *(undefined4 *)(param_6 + 0x84);
    local_d0 = *(undefined4 *)(param_6 + 0x88);
    local_c8 = uVar1;
    local_c0 = param_3;
    local_98 = param_1;
    FUN_1402608fa(&local_f0,0);
    local_f8 = 0xffffffffffffffff;
    local_100 = &local_a0;
    FUN_14000a0a0(&local_100);
    if (-1 < (int)(uint)local_f8) {
      do {
        lVar4 = local_100[1];
        if (*(int *)(lVar4 + 0x28) <= (int)(uint)local_f8) break;
        lVar3 = lVar4 + 0x10;
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          lVar3 = *(longlong *)(lVar4 + 0x20);
        }
        if ((*(uint *)(lVar3 + (ulonglong)((uint)local_f8 >> 5) * 4) >> ((uint)local_f8 & 0x1f) & 1)
            == 0) break;
        lVar4 = (longlong)(int)(uint)local_f8 * (longlong)local_80 + *local_98;
        local_50 = &local_60;
        local_58 = &LAB_14798624c;
        local_70 = &LAB_147986266;
        local_108 = &local_58;
        local_78 = uVar1;
        local_68 = &local_78;
        local_60 = uVar1;
        iVar2 = FUN_147986164(param_3,lVar4,&local_b8,&local_70);
        if (iVar2 == -1) {
          FUN_146896fd6(&local_f0,lVar4);
        }
        FUN_14000a0a0(&local_100);
      } while (-1 < (int)(uint)local_f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798317d FUN_14798317d body=164 status=ok
// SIG undefined FUN_14798317d(void)

longlong FUN_14798317d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_14798b52a(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147983199;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_14798b52a(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147983199:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14798322c FUN_14798322c body=47 status=ok
// SIG undefined FUN_14798322c(void)

longlong FUN_14798322c(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)*param_2;
  iVar1 = *param_3;
  if (iVar1 < *param_2) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar2 * 4);
    do {
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),iVar3 == iVar1);
      if (iVar3 == iVar1) {
        return lVar2;
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar3 * 4);
    } while (iVar3 != -1);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147983260 FUN_147983260 body=29 status=ok
// SIG undefined FUN_147983260(void)

undefined8 FUN_147983260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14798327e FUN_14798327e body=29 status=ok
// SIG undefined FUN_14798327e(void)

undefined8 FUN_14798327e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479832ba FUN_1479832ba body=16 status=ok
// SIG undefined FUN_1479832ba(void)

undefined8 FUN_1479832ba(void)

{
  FUN_1434a2226();
  return 0;
}



// FUNCTION 1479832ca FUN_1479832ca body=16 status=ok
// SIG undefined FUN_1479832ca(void)

undefined8 FUN_1479832ca(void)

{
  FUN_1434a2226();
  return 0;
}



// FUNCTION 1479832da FUN_1479832da body=16 status=ok
// SIG undefined FUN_1479832da(void)

undefined8 FUN_1479832da(void)

{
  FUN_1434a2226();
  return 0;
}



// FUNCTION 1479832f6 FUN_1479832f6 body=16 status=ok
// SIG undefined FUN_1479832f6(void)

undefined8 FUN_1479832f6(void)

{
  FUN_1434a2226();
  return 0;
}



// FUNCTION 147983306 FUN_147983306 body=38 status=ok
// SIG undefined FUN_147983306(void)

undefined8 FUN_147983306(undefined8 param_1,int param_2)

{
  FUN_1463ae92e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14798332c FUN_14798332c body=48 status=ok
// SIG undefined FUN_14798332c(void)

longlong FUN_14798332c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_140731102(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14798346c FUN_14798346c body=59 status=ok
// SIG undefined FUN_14798346c(void)

undefined8 FUN_14798346c(longlong *param_1)

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



// FUNCTION 14798350e FUN_14798350e body=29 status=ok
// SIG undefined FUN_14798350e(void)

undefined8 FUN_14798350e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14798352c FUN_14798352c body=29 status=ok
// SIG undefined FUN_14798352c(void)

void FUN_14798352c(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0x20;
  return;
}



// FUNCTION 14798354a FUN_14798354a body=29 status=ok
// SIG undefined FUN_14798354a(void)

void FUN_14798354a(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0x20;
  return;
}



// FUNCTION 14798358e FUN_14798358e body=112 status=ok
// SIG undefined FUN_14798358e(void)

undefined8 FUN_14798358e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147983626 FUN_147983626 body=59 status=ok
// SIG undefined FUN_147983626(void)

undefined8 FUN_147983626(longlong *param_1)

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



// FUNCTION 14798366c FUN_14798366c body=38 status=ok
// SIG undefined FUN_14798366c(void)

void FUN_14798366c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14798372e FUN_14798372e body=80 status=ok
// SIG undefined FUN_14798372e(void)

undefined8 FUN_14798372e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479837a6 FUN_1479837a6 body=59 status=ok
// SIG undefined FUN_1479837a6(void)

undefined8 FUN_1479837a6(longlong *param_1)

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



// FUNCTION 1479837ec FUN_1479837ec body=38 status=ok
// SIG undefined FUN_1479837ec(void)

void FUN_1479837ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14798389e FUN_14798389e body=75 status=ok
// SIG undefined FUN_14798389e(void)

undefined1 FUN_14798389e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147983912 FUN_147983912 body=59 status=ok
// SIG undefined FUN_147983912(void)

undefined8 FUN_147983912(longlong *param_1)

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



// FUNCTION 147983958 FUN_147983958 body=38 status=ok
// SIG undefined FUN_147983958(void)

void FUN_147983958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1479839ce FUN_1479839ce body=52 status=ok
// SIG undefined FUN_1479839ce(void)

void FUN_1479839ce(longlong *param_1)

{
  FUN_147983a02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147983a02 FUN_147983a02 body=89 status=ok
// SIG undefined FUN_147983a02(void)

void FUN_147983a02(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147983a5c FUN_147983a5c body=60 status=ok
// SIG undefined FUN_147983a5c(void)

undefined8 * FUN_147983a5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7fd210;
  FUN_1463af974(param_1 + 5);
  FUN_144760f98(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147983a98 FUN_147983a98 body=87 status=ok
// SIG undefined FUN_147983a98(void)

undefined8 FUN_147983a98(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f57c6(&DAT_14cace4b8,local_20);
  FUN_1400021e4(local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147983af0 FUN_147983af0 body=29 status=ok
// SIG undefined FUN_147983af0(void)

undefined8 FUN_147983af0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cace4b8);
  return param_2;
}



// FUNCTION 147983b0e FUN_147983b0e body=75 status=ok
// SIG undefined FUN_147983b0e(void)

longlong * FUN_147983b0e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    if ((char)param_2[10] == '\x01') {
      FUN_147983b5a(param_1);
    }
    else if ((char)param_1[10] == '\x01') {
      if (*param_1 != 0) {
        plVar1 = param_1 + 4;
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          plVar1 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return param_1;
}



// FUNCTION 147983b5a FUN_147983b5a body=110 status=ok
// SIG undefined FUN_147983b5a(void)

longlong * FUN_147983b5a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((char)param_1[10] == '\x01') && (*param_1 != 0)) {
    plVar4 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  if (*param_1 != 0) {
    *param_2 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 147983bc8 FUN_147983bc8 body=225 status=ok
// SIG undefined FUN_147983bc8(void)

undefined8 FUN_147983bc8(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_14a1ca410;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14a7fd240;
  local_28[3] = &DAT_14cace4c8;
  local_28[4] = FUN_147983caa;
  FUN_140aa4534(&DAT_14cb10950,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147983caa FUN_147983caa body=51 status=ok
// SIG undefined FUN_147983caa(void)

void FUN_147983caa(undefined8 param_1,longlong *param_2)

{
  FUN_1405f3418();
  if (*param_2 != 0) {
    FUN_1402eb876(param_1,*(undefined8 *)(*param_2 + 0x30));
    return;
  }
  return;
}



// FUNCTION 147983cde FUN_147983cde body=29 status=ok
// SIG undefined FUN_147983cde(void)

undefined8 FUN_147983cde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147983d18 FUN_147983d18 body=93 status=ok
// SIG undefined FUN_147983d18(void)

void FUN_147983d18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7fd240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147983d76 FUN_147983d76 body=93 status=ok
// SIG undefined FUN_147983d76(void)

void FUN_147983d76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7fd240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147983dd4 FUN_147983dd4 body=126 status=ok
// SIG undefined FUN_147983dd4(void)

void FUN_147983dd4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7fd240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147983e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147983e60 FUN_147983e60 body=21 status=ok
// SIG undefined FUN_147983e60(void)

undefined8 FUN_147983e60(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147983e75 FUN_147983e75 body=368 status=ok
// SIG undefined FUN_147983e75(void)

void FUN_147983e75(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  longlong local_c8;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = FUN_1401cb356();
  lVar2 = *param_1;
  lVar3 = param_1[2];
  param_1[2] = 0;
  local_98 = param_1[6];
  uStack_90 = param_1[7];
  local_a8 = (undefined4)param_1[4];
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_a0 = (undefined4)param_1[5];
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (lVar2 != 0) {
    *param_1 = 0;
  }
  local_78[0] = (code *)0x0;
  local_c8 = lVar2;
  local_68 = (longlong *)FUN_14001cc68(0x60,0x10);
  *local_68 = (longlong)&PTR_LAB_14a7fd2b0;
  local_68[2] = lVar2;
  local_68[4] = lVar3;
  local_b8 = (longlong *)0x0;
  *(undefined4 *)(local_68 + 8) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_68 + 0x44) = local_98._4_4_;
  *(undefined4 *)(local_68 + 9) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_90._4_4_;
  *(undefined4 *)(local_68 + 6) = local_a8;
  *(undefined4 *)((longlong)local_68 + 0x34) = uStack_a4;
  *(undefined4 *)(local_68 + 7) = uStack_a0;
  *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_9c;
  if (lVar2 != 0) {
    local_c8 = 0;
  }
  if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
    local_78[0] = FUN_14341952c;
  }
  local_e8 = local_78;
  FUN_1401cbba4(uVar4,local_d8,L"FAudioThread::RunCommandOnGameThread",0);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (local_78[0] != (code *)0x0) {
    plVar5 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_c8 != 0) {
    plVar5 = (longlong *)&local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar5 = local_b8;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147983ff0 FUN_147983ff0 body=29 status=ok
// SIG undefined FUN_147983ff0(void)

void FUN_147983ff0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14798400e FUN_14798400e body=71 status=ok
// SIG undefined FUN_14798400e(void)

undefined8 * FUN_14798400e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a7fd2b0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147984056 FUN_147984056 body=212 status=ok
// SIG undefined FUN_147984056(void)

undefined8 * FUN_147984056(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_147984079;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_1479840fd:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_14798409c;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1479840fd;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_14798409c:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_147984079:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 14798412a FUN_14798412a body=40 status=ok
// SIG undefined FUN_14798412a(void)

undefined8 FUN_14798412a(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_147984178(param_1);
  }
  return param_1;
}



// FUNCTION 147984152 FUN_147984152 body=38 status=ok
// SIG undefined FUN_147984152(void)

undefined8 FUN_147984152(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147984178 FUN_147984178 body=145 status=ok
// SIG undefined FUN_147984178(void)

void FUN_147984178(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_144a23e24();
  if ((int)plVar2[2] < 0x100) {
    lVar3 = plVar2[1];
  }
  else {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      uVar1 = FUN_14493c560();
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
      }
      *(longlong *)(lVar4 + 8) = lVar3;
      FUN_144a8fde6(&DAT_14c896180,uVar1);
    }
    *plVar2 = plVar2[1];
    *(undefined4 *)(plVar2 + 2) = 0;
    lVar3 = 0;
  }
  *param_1 = lVar3;
  plVar2[1] = (longlong)param_1;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  return;
}



// FUNCTION 14798420a FUN_14798420a body=48 status=ok
// SIG undefined FUN_14798420a(void)

void FUN_14798420a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 14798423a FUN_14798423a body=111 status=ok
// SIG undefined FUN_14798423a(void)

void FUN_14798423a(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (DAT_14cace500 == DAT_14cace508) {
    DAT_14cace508 = DAT_14cace4f0;
    if (DAT_14cace500 == DAT_14cace4f0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      return;
    }
  }
  uVar1 = *DAT_14cace500;
  *DAT_14cace500 = 0;
  DAT_14cace500 = (undefined8 *)uVar1;
  return;
}



// FUNCTION 1479842c8 FUN_1479842c8 body=46 status=ok
// SIG undefined FUN_1479842c8(void)

void FUN_1479842c8(undefined8 param_1,longlong param_2)

{
  FUN_1458793b1(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14798430c FUN_14798430c body=75 status=ok
// SIG undefined FUN_14798430c(void)

undefined8 FUN_14798430c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined2 *)(param_2 + lVar1) = *(undefined2 *)(param_3 + lVar1);
      FUN_1477daebe();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147984380 FUN_147984380 body=59 status=ok
// SIG undefined FUN_147984380(void)

undefined8 FUN_147984380(longlong *param_1)

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



// FUNCTION 14798441e FUN_14798441e body=52 status=ok
// SIG undefined FUN_14798441e(void)

void FUN_14798441e(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1458793b1(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14798448e FUN_14798448e body=54 status=ok
// SIG undefined FUN_14798448e(void)

undefined1 FUN_14798448e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479845a6(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1479844ec FUN_1479844ec body=59 status=ok
// SIG undefined FUN_1479844ec(void)

undefined8 FUN_1479844ec(longlong *param_1)

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



// FUNCTION 147984532 FUN_147984532 body=38 status=ok
// SIG undefined FUN_147984532(void)

void FUN_147984532(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1479845a6 FUN_1479845a6 body=77 status=ok
// SIG undefined FUN_1479845a6(void)

longlong * FUN_1479845a6(longlong *param_1,longlong *param_2)

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
  FUN_1479845f4(param_1 + 1,param_2 + 1);
  *(int *)(param_1 + 3) = (int)param_2[3];
  return param_1;
}



// FUNCTION 1479845f4 FUN_1479845f4 body=79 status=ok
// SIG undefined FUN_1479845f4(void)

undefined8 * FUN_1479845f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147965b48(param_1,iVar1);
      FUN_147965baa(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479846ac FUN_1479846ac body=59 status=ok
// SIG undefined FUN_1479846ac(void)

undefined8 FUN_1479846ac(longlong *param_1)

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



// FUNCTION 14798474e FUN_14798474e body=80 status=ok
// SIG undefined FUN_14798474e(void)

longlong * FUN_14798474e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147046527(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147984820 FUN_147984820 body=59 status=ok
// SIG undefined FUN_147984820(void)

undefined8 FUN_147984820(longlong *param_1)

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



// FUNCTION 1479848f0 FUN_1479848f0 body=63 status=ok
// SIG undefined FUN_1479848f0(void)

undefined1 FUN_1479848f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147985040(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 147984958 FUN_147984958 body=59 status=ok
// SIG undefined FUN_147984958(void)

undefined8 FUN_147984958(longlong *param_1)

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



// FUNCTION 1479849a4 FUN_1479849a4 body=40 status=ok
// SIG undefined FUN_1479849a4(void)

void FUN_1479849a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_147984af2(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 147984af2 FUN_147984af2 body=209 status=ok
// SIG undefined FUN_147984af2(void)

void FUN_147984af2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_147984bc4(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_147984d60(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_147984e18(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_147984ed0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147984f88(param_1);
  return;
}



// FUNCTION 147984bc4 FUN_147984bc4 body=54 status=ok
// SIG undefined FUN_147984bc4(void)

void FUN_147984bc4(longlong *param_1)

{
  FUN_147984bfa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147984bfa FUN_147984bfa body=356 status=ok
// SIG undefined FUN_147984bfa(void)

void FUN_147984bfa(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 147984d60 FUN_147984d60 body=54 status=ok
// SIG undefined FUN_147984d60(void)

void FUN_147984d60(longlong *param_1)

{
  FUN_147984d96(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147984d96 FUN_147984d96 body=128 status=ok
// SIG undefined FUN_147984d96(void)

void FUN_147984d96(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147984e18 FUN_147984e18 body=54 status=ok
// SIG undefined FUN_147984e18(void)

void FUN_147984e18(longlong *param_1)

{
  FUN_147984e4e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147984e4e FUN_147984e4e body=128 status=ok
// SIG undefined FUN_147984e4e(void)

void FUN_147984e4e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407f13e6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147984ed0 FUN_147984ed0 body=54 status=ok
// SIG undefined FUN_147984ed0(void)

void FUN_147984ed0(longlong *param_1)

{
  FUN_147984f06(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147984f06 FUN_147984f06 body=128 status=ok
// SIG undefined FUN_147984f06(void)

void FUN_147984f06(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407f13e6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147984f88 FUN_147984f88 body=54 status=ok
// SIG undefined FUN_147984f88(void)

void FUN_147984f88(longlong *param_1)

{
  FUN_147984fbe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147984fbe FUN_147984fbe body=128 status=ok
// SIG undefined FUN_147984fbe(void)

void FUN_147984fbe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147985040 FUN_147985040 body=94 status=ok
// SIG undefined FUN_147985040(void)

longlong FUN_147985040(longlong param_1,longlong param_2)

{
  FUN_14798509e();
  FUN_147985192(param_1 + 0x50,param_2 + 0x50);
  FUN_147985286(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14798537a(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14798546a(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 14798509e FUN_14798509e body=122 status=ok
// SIG undefined FUN_14798509e(void)

longlong FUN_14798509e(longlong param_1,longlong param_2)

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
    FUN_147985118(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147985118 FUN_147985118 body=121 status=ok
// SIG undefined FUN_147985118(void)

undefined8 * FUN_147985118(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147984fbe(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 147985192 FUN_147985192 body=122 status=ok
// SIG undefined FUN_147985192(void)

longlong FUN_147985192(longlong param_1,longlong param_2)

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
    FUN_14798520c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14798520c FUN_14798520c body=121 status=ok
// SIG undefined FUN_14798520c(void)

undefined8 * FUN_14798520c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147984f06(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14042c636(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x24);
    }
  }
  return param_1;
}



// FUNCTION 147985286 FUN_147985286 body=122 status=ok
// SIG undefined FUN_147985286(void)

longlong FUN_147985286(longlong param_1,longlong param_2)

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
    FUN_147985300(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147985300 FUN_147985300 body=121 status=ok
// SIG undefined FUN_147985300(void)

undefined8 * FUN_147985300(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147984e4e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14042c636(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x24);
    }
  }
  return param_1;
}



// FUNCTION 14798537a FUN_14798537a body=122 status=ok
// SIG undefined FUN_14798537a(void)

longlong FUN_14798537a(longlong param_1,longlong param_2)

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
    FUN_1479853f4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1479853f4 FUN_1479853f4 body=117 status=ok
// SIG undefined FUN_1479853f4(void)

undefined8 * FUN_1479853f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147984d96(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 14798546a FUN_14798546a body=122 status=ok
// SIG undefined FUN_14798546a(void)

longlong FUN_14798546a(longlong param_1,longlong param_2)

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
    FUN_1479854e4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1479854e4 FUN_1479854e4 body=201 status=ok
// SIG undefined FUN_1479854e4(void)

undefined8 * FUN_1479854e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147984bfa(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1479855ae(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1479855ae FUN_1479855ae body=109 status=ok
// SIG undefined FUN_1479855ae(void)

undefined4 * FUN_1479855ae(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_14798561c(param_1 + 2,iVar1);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14798561c FUN_14798561c body=89 status=ok
// SIG undefined FUN_14798561c(void)

void FUN_14798561c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1479856c8 FUN_1479856c8 body=59 status=ok
// SIG undefined FUN_1479856c8(void)

undefined8 FUN_1479856c8(longlong *param_1)

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



// FUNCTION 1479857b2 FUN_1479857b2 body=59 status=ok
// SIG undefined FUN_1479857b2(void)

undefined8 FUN_1479857b2(longlong *param_1)

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



// FUNCTION 147985884 FUN_147985884 body=100 status=ok
// SIG undefined FUN_147985884(void)

undefined1 FUN_147985884(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147985910 FUN_147985910 body=59 status=ok
// SIG undefined FUN_147985910(void)

undefined8 FUN_147985910(longlong *param_1)

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



// FUNCTION 1479859ee FUN_1479859ee body=117 status=ok
// SIG undefined FUN_1479859ee(void)

undefined1 FUN_1479859ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147985a8c FUN_147985a8c body=59 status=ok
// SIG undefined FUN_147985a8c(void)

undefined8 FUN_147985a8c(longlong *param_1)

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



// FUNCTION 147985b80 FUN_147985b80 body=96 status=ok
// SIG undefined FUN_147985b80(void)

undefined8 FUN_147985b80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147985cbc(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
    FUN_147985d0c(param_2 + 0x28,param_3 + 0x28);
    FUN_1447a122a(param_2 + 0x38,param_3 + 0x38);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 147985c08 FUN_147985c08 body=59 status=ok
// SIG undefined FUN_147985c08(void)

undefined8 FUN_147985c08(longlong *param_1)

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



// FUNCTION 147985c4e FUN_147985c4e body=32 status=ok
// SIG undefined FUN_147985c4e(void)

void FUN_147985c4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1400d0e42(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147985cbc FUN_147985cbc body=79 status=ok
// SIG undefined FUN_147985cbc(void)

undefined8 * FUN_147985cbc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147985da0(param_1,iVar1);
      FUN_147985e13(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147985d0c FUN_147985d0c body=148 status=ok
// SIG undefined FUN_147985d0c(void)

longlong * FUN_147985d0c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  
  if (param_2 != param_1) {
    FUN_140731294(param_1,(int)param_2[1]);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar2 = *param_2;
      lVar13 = 0;
      do {
        puVar3 = *(undefined4 **)(lVar2 + lVar13);
        puVar12 = (undefined4 *)FUN_14001cc68(0x20,0x10);
        uVar4 = puVar3[1];
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        uVar7 = puVar3[4];
        uVar8 = puVar3[5];
        uVar9 = puVar3[6];
        uVar10 = puVar3[7];
        *puVar12 = *puVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        puVar12[4] = uVar7;
        puVar12[5] = uVar8;
        puVar12[6] = uVar9;
        puVar12[7] = uVar10;
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1456bd870(param_1,iVar1);
        }
        *(undefined4 **)(*param_1 + (longlong)iVar1 * 8) = puVar12;
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar13);
    }
  }
  return param_1;
}



// FUNCTION 147985da0 FUN_147985da0 body=115 status=ok
// SIG undefined FUN_147985da0(void)

void FUN_147985da0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147985e13 FUN_147985e13 body=102 status=ok
// SIG undefined FUN_147985e13(void)

void FUN_147985e13(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147985ea2 FUN_147985ea2 body=101 status=ok
// SIG undefined FUN_147985ea2(void)

undefined1 FUN_147985ea2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147985f30 FUN_147985f30 body=59 status=ok
// SIG undefined FUN_147985f30(void)

undefined8 FUN_147985f30(longlong *param_1)

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



// FUNCTION 147985fd2 FUN_147985fd2 body=64 status=ok
// SIG undefined FUN_147985fd2(void)

undefined8 * FUN_147985fd2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147986012 FUN_147986012 body=273 status=ok
// SIG undefined FUN_147986012(void)

longlong FUN_147986012(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      lVar1 = *local_60;
      lVar2 = (longlong)iStack_44 * 0x20;
      if ((((*(int *)(lVar1 + 8 + lVar2) == *param_2) &&
           (*(int *)(lVar1 + 0xc + lVar2) == param_2[1])) &&
          (*(int *)(lVar1 + 0x10 + lVar2) == param_2[2])) &&
         (*(int *)(lVar1 + 0x14 + lVar2) == param_2[3])) {
        lVar1 = lVar1 + lVar2;
        goto LAB_147986101;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_147986101:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147986164 FUN_147986164 body=231 status=ok
// SIG undefined FUN_147986164(void)

int FUN_147986164(longlong *param_1,longlong param_2,int *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    pcVar1 = (code *)*param_5;
    uVar2 = param_5[1];
    local_50 = param_2;
    iVar4 = (*(code *)*param_4)(param_4[1]);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = (longlong)iVar4 * (longlong)param_3[4] + *param_1;
        local_58 = param_2;
        local_50 = lVar6;
        cVar3 = (*pcVar1)(uVar2,&local_58,&local_50);
        if (cVar3 != '\0') goto LAB_147986190;
        iVar4 = *(int *)(lVar6 + *param_3);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147986190:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1479862fc FUN_1479862fc body=59 status=ok
// SIG undefined FUN_1479862fc(void)

undefined8 FUN_1479862fc(longlong *param_1)

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



// FUNCTION 14798639d FUN_14798639d body=51 status=ok
// SIG undefined FUN_14798639d(void)

void FUN_14798639d(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1479863d0 FUN_1479863d0 body=187 status=ok
// SIG undefined FUN_1479863d0(void)

void FUN_1479863d0(LPCRITICAL_SECTION param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_147986455;
          goto LAB_147986464;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_147986455:
    FUN_14109be94(param_1,0);
  }
LAB_147986464:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147986477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14798648c FUN_14798648c body=322 status=ok
// SIG undefined FUN_14798648c(void)

void FUN_14798648c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479865d0 FUN_1479865d0 body=282 status=ok
// SIG undefined FUN_1479865d0(void)

void FUN_1479865d0(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_14340d97a(*local_60 + (longlong)iStack_44 * 0x40 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479866ec FUN_1479866ec body=107 status=ok
// SIG undefined FUN_1479866ec(void)

void FUN_1479866ec(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147986758(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147986758 FUN_147986758 body=132 status=ok
// SIG undefined FUN_147986758(void)

void FUN_147986758(longlong param_1,int param_2)

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



// FUNCTION 1479867de FUN_1479867de body=175 status=ok
// SIG undefined FUN_1479867de(void)

void FUN_1479867de(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147986867;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147986867:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14798688e FUN_14798688e body=201 status=ok
// SIG undefined FUN_14798688e(void)

void FUN_14798688e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147986958 FUN_147986958 body=29 status=ok
// SIG undefined FUN_147986958(void)

undefined8 FUN_147986958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147986992 FUN_147986992 body=93 status=ok
// SIG undefined FUN_147986992(void)

void FUN_147986992(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a7fe860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1479869f0 FUN_1479869f0 body=93 status=ok
// SIG undefined FUN_1479869f0(void)

void FUN_1479869f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a7fe860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147986a4e FUN_147986a4e body=126 status=ok
// SIG undefined FUN_147986a4e(void)

void FUN_147986a4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7fe860;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147986abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147986ad8 FUN_147986ad8 body=21 status=ok
// SIG undefined FUN_147986ad8(void)

undefined8 FUN_147986ad8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147986aee FUN_147986aee body=291 status=ok
// SIG undefined FUN_147986aee(void)

undefined4 * FUN_147986aee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147986c12(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_147973b6c(local_40 + 2,uVar1);
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147986cf8(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0xf] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147986e16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147986c12 FUN_147986c12 body=229 status=ok
// SIG undefined FUN_147986c12(void)

int * FUN_147986c12(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406cd6a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 147986cf8 FUN_147986cf8 body=172 status=ok
// SIG undefined FUN_147986cf8(void)

undefined8 FUN_147986cf8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_14340d97a(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147986da4(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 147986da4 FUN_147986da4 body=114 status=ok
// SIG undefined FUN_147986da4(void)

void FUN_147986da4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147986e16 FUN_147986e16 body=422 status=ok
// SIG undefined FUN_147986e16(void)

void FUN_147986e16(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147986fbe FUN_147986fbe body=81 status=ok
// SIG undefined FUN_147986fbe(void)

void FUN_147986fbe(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_147987010(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147987010 FUN_147987010 body=123 status=ok
// SIG undefined FUN_147987010(void)

void FUN_147987010(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  FUN_14340d97a(*param_1 + lVar2 + 8);
  FUN_147986da4(param_1,param_2);
  return;
}



// FUNCTION 14798708c FUN_14798708c body=132 status=ok
// SIG undefined FUN_14798708c(void)

void FUN_14798708c(longlong param_1,int param_2)

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



// FUNCTION 147987112 FUN_147987112 body=132 status=ok
// SIG undefined FUN_147987112(void)

void FUN_147987112(longlong param_1,int param_2)

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



// FUNCTION 147987198 FUN_147987198 body=132 status=ok
// SIG undefined FUN_147987198(void)

void FUN_147987198(longlong param_1,int param_2)

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



// FUNCTION 14798721e FUN_14798721e body=132 status=ok
// SIG undefined FUN_14798721e(void)

void FUN_14798721e(longlong param_1,int param_2)

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



// FUNCTION 1479872a4 FUN_1479872a4 body=132 status=ok
// SIG undefined FUN_1479872a4(void)

void FUN_1479872a4(longlong param_1,int param_2)

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



// FUNCTION 14798732a FUN_14798732a body=132 status=ok
// SIG undefined FUN_14798732a(void)

void FUN_14798732a(longlong param_1,int param_2)

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



// FUNCTION 1479873af FUN_1479873af body=905 status=ok
// SIG undefined FUN_1479873af(void)

void FUN_1479873af(longlong param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *_Src;
  int *piVar8;
  int *_Src_00;
  int *piVar9;
  int *_Src_01;
  float fVar10;
  undefined1 auStack_4f8 [36];
  int local_4d4;
  longlong *local_4d0;
  int *local_4c8;
  int *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined4 local_4a8 [188];
  undefined1 local_1b8 [368];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (1 < (int)param_2) {
    memset(local_4a8,0,0x2f0);
    local_4b0 = (ulonglong)param_2 * 0x170 + param_1 + -0x170;
    local_4b8 = param_1;
    fVar10 = logf((float)(int)param_2);
    local_4a8[0] = (undefined4)(longlong)(fVar10 + fVar10);
    local_4d0 = &local_4b8;
    do {
      piVar9 = (int *)*local_4d0;
      _Src = (int *)local_4d0[1];
      local_4d4 = (int)local_4d0[2];
      iVar3 = (int)((ulonglong)((longlong)_Src - (longlong)piVar9) >> 4);
      _Src_00 = piVar9;
      piVar6 = _Src;
      if (local_4d4 != 0) {
LAB_14798749e:
        local_4c0 = piVar6;
        local_4c8 = _Src_00;
        _Src_00 = piVar9;
        uVar7 = iVar3 * -0x1642c859 + 1;
        if (8 < (int)uVar7) {
          memcpy(local_1b8,_Src_00 + (ulonglong)(uVar7 >> 1) * 0x5c,0x170);
          memcpy(_Src_00 + (ulonglong)(uVar7 >> 1) * 0x5c,_Src_00,0x170);
          memcpy(_Src_00,local_1b8,0x170);
          _Src_01 = _Src + 0x5c;
          piVar9 = _Src_00;
          do {
            piVar6 = piVar9 + 0x5c;
            piVar2 = piVar9 + 0x5c;
            do {
              piVar9 = piVar2;
              piVar5 = piVar6;
              if (_Src < piVar9) break;
              piVar6 = piVar5 + 0x5c;
              piVar2 = piVar9 + 0x5c;
            } while (*piVar9 <= *_Src_00);
            piVar2 = _Src_01 + -0xb8;
            do {
              piVar8 = _Src_01;
              piVar6 = piVar2;
              _Src_01 = piVar8 + -0x5c;
              if (_Src_01 <= _Src_00) break;
              piVar2 = piVar6 + -0x5c;
            } while (*_Src_00 <= *_Src_01);
            if (_Src_01 < piVar9) goto LAB_147987593;
            memcpy(local_1b8,piVar9,0x170);
            memcpy(piVar9,_Src_01,0x170);
            memcpy(_Src_01,local_1b8,0x170);
          } while( true );
        }
        if (_Src_00 < _Src) {
          do {
            piVar9 = _Src_00;
            if (_Src_00 + 0x5c <= _Src) {
              piVar6 = _Src_00 + 0x5c;
              iVar3 = *_Src_00;
              do {
                iVar1 = *piVar6;
                iVar4 = iVar3;
                if (iVar3 <= iVar1) {
                  iVar4 = iVar1;
                }
                if (iVar3 < iVar1) {
                  piVar9 = piVar6;
                }
                piVar6 = piVar6 + 0x5c;
                iVar3 = iVar4;
              } while (piVar6 <= _Src);
            }
            piVar6 = _Src + -0x5c;
            memcpy(local_1b8,piVar9,0x170);
            memcpy(piVar9,_Src,0x170);
            memcpy(_Src,local_1b8,0x170);
            _Src = piVar6;
          } while (_Src_00 < piVar6);
        }
        goto LAB_14798770b;
      }
LAB_14798772f:
      FUN_147987739(piVar9);
LAB_14798770b:
      local_4d0 = local_4d0 + -3;
    } while (&local_4b8 <= local_4d0);
  }
  if ((local_48 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147987593:
  memcpy(local_1b8,_Src_00,0x170);
  memcpy(_Src_00,_Src_01,0x170);
  memcpy(_Src_01,local_1b8,0x170);
  local_4d4 = local_4d4 + -1;
  piVar8 = piVar8 + -0xb8;
  if ((longlong)piVar6 - (longlong)local_4c8 < (longlong)local_4c0 - (longlong)piVar5) {
    if (piVar9 < _Src) {
      *local_4d0 = (longlong)piVar9;
      local_4d0[1] = (longlong)_Src;
      *(int *)(local_4d0 + 2) = local_4d4;
      local_4d0 = local_4d0 + 3;
    }
    piVar9 = _Src_00;
    if (_Src_01 <= _Src_00 + 0x5c) goto LAB_14798770b;
  }
  else {
    if (_Src_00 + 0x5c < _Src_01) {
      *local_4d0 = (longlong)_Src_00;
      local_4d0[1] = (longlong)piVar8;
      *(int *)(local_4d0 + 2) = local_4d4;
      local_4d0 = local_4d0 + 3;
    }
    piVar6 = _Src;
    piVar8 = _Src;
    _Src_00 = piVar5;
    if (_Src <= piVar9) goto LAB_14798770b;
  }
  iVar3 = (int)((ulonglong)((longlong)piVar6 - (longlong)_Src_00) >> 4);
  _Src = piVar8;
  local_4c8 = _Src_00;
  local_4c0 = piVar6;
  if (local_4d4 == 0) goto LAB_14798772f;
  goto LAB_14798749e;
}



// FUNCTION 147987739 FUN_147987739 body=642 status=ok
// SIG undefined FUN_147987739(void)

void FUN_147987739(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [376];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x00014798778a:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar2 * 0x170) <=
            *(int *)((longlong)param_1 + (longlong)iVar1 * 0x170))) {
          iVar2 = iVar1;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar4 * 0x170) <
            *(int *)((longlong)param_1 + (longlong)iVar2 * 0x170)) {
          pvVar6 = (void *)((longlong)iVar4 * 0x170 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0x170 + (longlong)param_1);
          memcpy(local_1b8,pvVar6,0x170);
          memcpy(pvVar6,pvVar5,0x170);
          memcpy(pvVar5,local_1b8,0x170);
          iVar4 = iVar2;
          goto joined_r0x00014798778a;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0x170 + (longlong)param_1);
      memcpy(local_1b8,param_1,0x170);
      memcpy(param_1,pvVar5,0x170);
      memcpy(pvVar5,local_1b8,0x170);
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar2 = 1;
          iVar3 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar1 = iVar2;
            if (((longlong)iVar4 < (longlong)uVar7) &&
               (*(int *)((longlong)param_1 + (longlong)iVar2 * 0x170) <=
                *(int *)((longlong)param_1 + (longlong)iVar4 * 0x170))) {
              iVar1 = iVar4;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar1 * 0x170) <=
                *(int *)((longlong)param_1 + (longlong)iVar3 * 0x170)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0x170 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0x170 + (longlong)param_1);
            memcpy(local_1b8,pvVar6,0x170);
            memcpy(pvVar6,pvVar5,0x170);
            memcpy(pvVar5,local_1b8,0x170);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0x170 + (longlong)param_1);
          memcpy(local_1b8,param_1,0x170);
          memcpy(param_1,pvVar5,0x170);
          memcpy(pvVar5,local_1b8,0x170);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479879ee FUN_1479879ee body=29 status=ok
// SIG undefined FUN_1479879ee(void)

undefined8 FUN_1479879ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147987a0c FUN_147987a0c body=143 status=ok
// SIG undefined FUN_147987a0c(void)

void FUN_147987a0c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147987a9c FUN_147987a9c body=135 status=ok
// SIG undefined FUN_147987a9c(void)

longlong FUN_147987a9c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147987b24();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_147987ad6;
  }
  local_30 = param_3;
  FUN_147987c08(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147987ad6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147987b24 FUN_147987b24 body=228 status=ok
// SIG undefined FUN_147987b24(void)

int FUN_147987b24(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 147987c08 FUN_147987c08 body=292 status=ok
// SIG undefined FUN_147987c08(void)

undefined4 * FUN_147987c08(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147987d2e(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  *local_38 = *puVar1;
  lVar6 = puVar1[1];
  local_38[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  cVar2 = FUN_147987e14(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14798808a(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147987d2e FUN_147987d2e body=230 status=ok
// SIG undefined FUN_147987d2e(void)

int * FUN_147987d2e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147987e14 FUN_147987e14 body=287 status=ok
// SIG undefined FUN_147987e14(void)

undefined8 FUN_147987e14(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_147987f34(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_147987f34(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_147988018(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_147987e3c;
    }
  }
  uVar13 = 0;
LAB_147987e3c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147987f34 FUN_147987f34 body=228 status=ok
// SIG undefined FUN_147987f34(void)

int FUN_147987f34(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 147988018 FUN_147988018 body=114 status=ok
// SIG undefined FUN_147988018(void)

void FUN_147988018(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14798808a FUN_14798808a body=527 status=ok
// SIG undefined FUN_14798808a(void)

void FUN_14798808a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14798829a FUN_14798829a body=391 status=ok
// SIG undefined FUN_14798829a(void)

void FUN_14798829a(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar8) {
          FUN_147988422(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479882e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147988422 FUN_147988422 body=87 status=ok
// SIG undefined FUN_147988422(void)

void FUN_147988422(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14798847a();
  return;
}



// FUNCTION 14798847a FUN_14798847a body=78 status=ok
// SIG undefined FUN_14798847a(void)

void FUN_14798847a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x28);
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
  FUN_147988018(param_1,param_2);
  return;
}



// FUNCTION 1479884c8 FUN_1479884c8 body=144 status=ok
// SIG undefined FUN_1479884c8(void)

void FUN_1479884c8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_147988632(param_2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x30 + lVar1;
        cVar2 = FUN_147975474(lVar5,param_2);
        if (cVar2 != '\0') {
          FUN_147988558(param_1,iVar3);
          return;
        }
        iVar3 = *(int *)(lVar5 + 0x28);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 147988558 FUN_147988558 body=95 status=ok
// SIG undefined FUN_147988558(void)

void FUN_147988558(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1479885b8();
  return;
}



// FUNCTION 1479885b8 FUN_1479885b8 body=122 status=ok
// SIG undefined FUN_1479885b8(void)

void FUN_1479885b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147988632 FUN_147988632 body=129 status=ok
// SIG undefined FUN_147988632(void)

uint FUN_147988632(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_1447addd0(param_1 + 1,0x10);
  uVar1 = *param_1;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4);
  uVar3 = (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + *(int *)(param_1 + 3) ^ uVar3;
  return iVar2 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
}



// FUNCTION 1479886b4 FUN_1479886b4 body=121 status=ok
// SIG undefined FUN_1479886b4(void)

longlong FUN_1479886b4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14798872e();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147988786(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x18;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0xc;
}



// FUNCTION 14798872e FUN_14798872e body=88 status=ok
// SIG undefined FUN_14798872e(void)

longlong * FUN_14798872e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if ((*plVar2 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar1 * 0x18) == (int)param_3[1])) {
          return plVar2;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147988786 FUN_147988786 body=283 status=ok
// SIG undefined FUN_147988786(void)

undefined4 * FUN_147988786(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479888a2(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined8 *)((longlong)local_40 + 0xc) = 0xffffffff00000000;
  cVar2 = FUN_147988988(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147988a82(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479888a2 FUN_1479888a2 body=230 status=ok
// SIG undefined FUN_1479888a2(void)

int * FUN_1479888a2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147988988 FUN_147988988 body=136 status=ok
// SIG undefined FUN_147988988(void)

undefined8 FUN_147988988(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == (int)param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147988a10((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147988a10 FUN_147988a10 body=114 status=ok
// SIG undefined FUN_147988a10(void)

void FUN_147988a10(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147988a82 FUN_147988a82 body=505 status=ok
// SIG undefined FUN_147988a82(void)

void FUN_147988a82(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar3 = *(undefined8 *)(lVar2 + lVar5 * 0x18);
        uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar8 = ((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar7 >> 4);
        uVar10 = (longlong)
                 (int)(uVar8 * 0x40 + *(int *)(lVar2 + 8 + lVar5 * 0x18) + (uVar8 >> 2) + 0x9e3779b9
                      ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147988c7c FUN_147988c7c body=111 status=ok
// SIG undefined FUN_147988c7c(void)

void FUN_147988c7c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    puVar3 = (undefined8 *)param_1[0x15];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_1[0x15] = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147988ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147988cec FUN_147988cec body=111 status=ok
// SIG undefined FUN_147988cec(void)

int FUN_147988cec(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147975474(lVar1 + (longlong)iVar4 * 0x30,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147988d5c FUN_147988d5c body=122 status=ok
// SIG undefined FUN_147988d5c(void)

void FUN_147988d5c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_147988cec();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x30 + *param_1 == 0)) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_147988dd8(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147988dd8 FUN_147988dd8 body=289 status=ok
// SIG undefined FUN_147988dd8(void)

undefined4 * FUN_147988dd8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147988efa(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined8 *)param_4[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  local_40[3] = puVar1[3];
  local_40[4] = uVar7;
  local_40[5] = uVar8;
  local_40[6] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  *(undefined8 *)(local_40 + 8) = *puVar2;
  local_40[10] = 0xffffffff;
  cVar10 = FUN_147988fe8(param_1,param_3,local_40,local_48);
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xb] = param_3;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[10] = *(undefined4 *)
                      (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                                4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_147989052(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147988efa FUN_147988efa body=238 status=ok
// SIG undefined FUN_147988efa(void)

int * FUN_147988efa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140044672(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147988fe8 FUN_147988fe8 body=106 status=ok
// SIG undefined FUN_147988fe8(void)

undefined8 FUN_147988fe8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_147988cec(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1479885b8(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 147989052 FUN_147989052 body=445 status=ok
// SIG undefined FUN_147989052(void)

void FUN_147989052(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_147988632(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147989210 FUN_147989210 body=168 status=ok
// SIG undefined FUN_147989210(void)

undefined8 *
FUN_147989210(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144a23e74(param_1,2,1);
  *param_1 = &PTR_FUN_14a7fead0;
  FUN_144a24082(param_1,param_2,param_4,param_5,param_6);
  param_1[0x16] = *param_3;
  param_1[0x18] = param_3[2];
  param_3[2] = 0;
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[7];
  param_1[0x1c] = param_3[6];
  param_1[0x1d] = uVar3;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar2;
  if (param_1[0x16] != 0) {
    *param_3 = 0;
  }
  return param_1;
}



// FUNCTION 1479892b8 FUN_1479892b8 body=99 status=ok
// SIG undefined FUN_1479892b8(void)

void FUN_1479892b8(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xd0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar3 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xc0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014798930e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 14798931c FUN_14798931c body=38 status=ok
// SIG undefined FUN_14798931c(void)

undefined8 FUN_14798931c(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147989342 FUN_147989342 body=155 status=ok
// SIG undefined FUN_147989342(void)

undefined8 * FUN_147989342(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14796d024(param_1 + 2,param_2 + 2);
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = param_2[0xf];
  return param_1;
}



// FUNCTION 1479893de FUN_1479893de body=300 status=ok
// SIG undefined FUN_1479893de(void)

undefined4 * FUN_1479893de(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14798950c(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1479786e0(local_40 + 2,uVar1);
  local_40[0x24] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1479895f8(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x25] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x24] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147989714(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798950c FUN_14798950c body=235 status=ok
// SIG undefined FUN_14798950c(void)

int * FUN_14798950c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14125fb0c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x98);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x98) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x98 + *param_1;
  return param_2;
}



// FUNCTION 1479895f8 FUN_1479895f8 body=162 status=ok
// SIG undefined FUN_1479895f8(void)

undefined8 FUN_1479895f8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x98);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x98) == *param_3) {
          FUN_14796516a((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x90);
          FUN_14798969a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14798969a FUN_14798969a body=122 status=ok
// SIG undefined FUN_14798969a(void)

void FUN_14798969a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
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


