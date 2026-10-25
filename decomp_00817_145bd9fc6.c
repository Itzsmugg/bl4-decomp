// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145bd9fc6 FUN_145bd9fc6 body=103 status=ok
// SIG undefined FUN_145bd9fc6(void)

longlong FUN_145bd9fc6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,2);
  local_20 = DAT_14cbca728;
  local_18 = DAT_14cbca730;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bda02e FUN_145bda02e body=373 status=ok
// SIG undefined FUN_145bda02e(void)

void FUN_145bda02e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar11 = (longlong)(int)uVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    uVar10 = 0;
    bVar9 = *plVar2 == lVar3;
    uVar6 = 0;
    do {
      uVar4 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar1) {
        uVar4 = uVar1;
      }
      uVar7 = uVar6;
      uVar5 = (ulonglong)uVar6;
      do {
        uVar5 = uVar5 + 1;
        uVar8 = uVar4;
        if (lVar11 <= (longlong)uVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while (bVar9 == (plVar2[uVar5] == lVar3));
      if (bVar9 == false) {
        if (uVar10 != uVar6) {
          memmove(plVar2 + (int)uVar10,plVar2 + uVar6,(longlong)(int)(uVar8 - uVar6) << 3);
        }
        uVar10 = uVar10 + (uVar8 - uVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      uVar6 = uVar8;
    } while ((longlong)uVar5 < lVar11);
    *(uint *)(param_1 + 1) = uVar10;
  }
  return;
}



// FUNCTION 145bda1a4 FUN_145bda1a4 body=102 status=ok
// SIG undefined FUN_145bda1a4(void)

void FUN_145bda1a4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14125746e();
  FUN_145bda20a(&DAT_14cb75ab8,*(undefined8 *)(param_1 + 4));
  if (DAT_14cb75ab0 == param_1) {
    DAT_14cb75ab0 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bda20a FUN_145bda20a body=155 status=ok
// SIG undefined FUN_145bda20a(void)

undefined8 FUN_145bda20a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_145bda2a6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145bda2a6 FUN_145bda2a6 body=91 status=ok
// SIG undefined FUN_145bda2a6(void)

void FUN_145bda2a6(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145bda302(param_1,param_2,1);
  return;
}



// FUNCTION 145bda302 FUN_145bda302 body=134 status=ok
// SIG undefined FUN_145bda302(void)

void FUN_145bda302(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145bda388 FUN_145bda388 body=102 status=ok
// SIG undefined FUN_145bda388(void)

void FUN_145bda388(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14592c3da();
  FUN_145bda3ee(&DAT_14cb75db0,*(undefined8 *)(param_1 + 4));
  if (DAT_14cb75da8 == param_1) {
    DAT_14cb75da8 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bda3ee FUN_145bda3ee body=155 status=ok
// SIG undefined FUN_145bda3ee(void)

undefined8 FUN_145bda3ee(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_145bda48a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145bda48a FUN_145bda48a body=91 status=ok
// SIG undefined FUN_145bda48a(void)

void FUN_145bda48a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145bda4e6(param_1,param_2,1);
  return;
}



// FUNCTION 145bda4e6 FUN_145bda4e6 body=134 status=ok
// SIG undefined FUN_145bda4e6(void)

void FUN_145bda4e6(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145bda56c FUN_145bda56c body=102 status=ok
// SIG undefined FUN_145bda56c(void)

void FUN_145bda56c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145dc5bde();
  FUN_145bda5d2(&DAT_14cb890d8,*(undefined8 *)(param_1 + 4));
  if (DAT_14cb890d0 == param_1) {
    DAT_14cb890d0 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bda5d2 FUN_145bda5d2 body=155 status=ok
// SIG undefined FUN_145bda5d2(void)

undefined8 FUN_145bda5d2(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_145bda66e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145bda66e FUN_145bda66e body=91 status=ok
// SIG undefined FUN_145bda66e(void)

void FUN_145bda66e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145bda6ca(param_1,param_2,1);
  return;
}



// FUNCTION 145bda6ca FUN_145bda6ca body=134 status=ok
// SIG undefined FUN_145bda6ca(void)

void FUN_145bda6ca(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145bda758 FUN_145bda758 body=430 status=ok
// SIG undefined FUN_145bda758(void)

undefined8 * FUN_145bda758(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1410ba828();
  *param_1 = &PTR_FUN_14ae9be20;
  param_1[6] = &PTR_FUN_14ae9c100;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = &PTR_FUN_14aea0590;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb49778) {
    FUN_144b3d300(&DAT_14cb49778);
    if (DAT_14cb49778 == -1) {
      FUN_1414d0f72();
      atexit(FUN_143b4a0e1);
      _Init_thread_footer(&DAT_14cb49778);
    }
  }
  lVar1 = FUN_145bda906(&DAT_14cb49728);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xe] = lVar1;
  lVar1 = FUN_145bda906(&DAT_14cb49750);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xd] = lVar1;
  return param_1;
}



// FUNCTION 145bda906 FUN_145bda906 body=214 status=ok
// SIG undefined FUN_145bda906(void)

longlong FUN_145bda906(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_141247186();
      FUN_140056680(local_28,*(undefined8 *)(param_1 + 0x18));
      FUN_14124722a(local_28,1);
      lVar1 = FUN_1414f31c1(local_28,*(undefined4 *)(param_1 + 0x20));
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x10) = lVar1;
        if ((lVar1 == 0) && ((*(uint *)(param_1 + 0x20) & 0x2002) == 0)) {
          FUN_14283f6fe(*(undefined8 *)(param_1 + 0x18));
        }
      }
      else {
        FUN_1456cec3c(lVar1);
        *(longlong *)(param_1 + 0x10) = lVar1;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      lVar1 = *(longlong *)(param_1 + 0x10);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bda9de FUN_145bda9de body=9 status=ok
// SIG undefined FUN_145bda9de(void)

void FUN_145bda9de(longlong param_1)

{
  FUN_145bda9e8(param_1 + 0x10);
  return;
}



// FUNCTION 145bda9e8 FUN_145bda9e8 body=176 status=ok
// SIG undefined FUN_145bda9e8(void)

void FUN_145bda9e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c1c60;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_145bdaacd(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145bdaa98(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bdaa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bdaa98 FUN_145bdaa98 body=53 status=ok
// SIG undefined FUN_145bdaa98(void)

void FUN_145bdaa98(longlong *param_1)

{
  FUN_145bdab04();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bdaacd FUN_145bdaacd body=55 status=ok
// SIG undefined FUN_145bdaacd(void)

void FUN_145bdaacd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bdab04 FUN_145bdab04 body=350 status=ok
// SIG undefined FUN_145bdab04(void)

void FUN_145bdab04(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x58 + 0x40)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bdac64 FUN_145bdac64 body=128 status=ok
// SIG undefined FUN_145bdac64(void)

undefined8 FUN_145bdac64(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    if (*(int *)(param_1 + 0x1ec) == -1) {
      lVar1 = *(longlong *)(param_1 + -0x1f8);
      if (lVar1 == 0) {
        lVar1 = FUN_1448abda6(param_1 + -0x2a8);
        if (lVar1 == 0) {
          uVar2 = FUN_145bdace4(DAT_14cb0d2b0);
          return uVar2;
        }
      }
      uVar2 = FUN_144a7b302(lVar1);
      return uVar2;
    }
    lVar1 = FUN_14375bb7a();
    if (lVar1 != 0) {
      uVar2 = FUN_147973140(lVar1,*(undefined4 *)(param_1 + 0x1ec));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145bdace4 FUN_145bdace4 body=33 status=ok
// SIG undefined FUN_145bdace4(void)

undefined8 FUN_145bdace4(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xf50) != 0) && (*(longlong *)(param_1 + 0xf60) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xf50) + 0x98);
  }
  return 0;
}



// FUNCTION 145bdad06 FUN_145bdad06 body=77 status=ok
// SIG undefined FUN_145bdad06(void)

undefined8 * FUN_145bdad06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac54d20;
  FUN_145bdad54(param_1 + 0x90);
  FUN_145bdad54(param_1 + 0x82);
  FUN_145837d3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdad54 FUN_145bdad54 body=84 status=ok
// SIG undefined FUN_145bdad54(void)

void FUN_145bdad54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bdada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bdadb4 FUN_145bdadb4 body=149 status=ok
// SIG undefined FUN_145bdadb4(void)

undefined8 * FUN_145bdadb4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb5f00;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1000;
  param_1[0x17] = "audio_event";
  param_1[0x18] = &PTR_s_event_14c762700;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.WwiseEvents");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdae56 FUN_145bdae56 body=149 status=ok
// SIG undefined FUN_145bdae56(void)

undefined8 * FUN_145bdae56(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb6390;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1001;
  param_1[0x17] = "wise_game_parameters";
  param_1[0x18] = &PTR_s_game_parameter_14c762710;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.GameParameters");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdaef8 FUN_145bdaef8 body=149 status=ok
// SIG undefined FUN_145bdaef8(void)

undefined8 * FUN_145bdaef8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb6820;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1007;
  param_1[0x17] = "wwise_soundbanks";
  param_1[0x18] = &PTR_s_soundbank_14c762720;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.SoundBanks");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdaf9a FUN_145bdaf9a body=149 status=ok
// SIG undefined FUN_145bdaf9a(void)

undefined8 * FUN_145bdaf9a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb6cb0;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1003;
  param_1[0x17] = "wwise_states";
  param_1[0x18] = &PTR_s_state_14c762730;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.States");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb03c FUN_145bdb03c body=149 status=ok
// SIG undefined FUN_145bdb03c(void)

undefined8 * FUN_145bdb03c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb7140;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1002;
  param_1[0x17] = "wwise_switches";
  param_1[0x18] = &PTR_s_switch_14c762740;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.Switches");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb0de FUN_145bdb0de body=149 status=ok
// SIG undefined FUN_145bdb0de(void)

undefined8 * FUN_145bdb0de(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb75d0;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1004;
  param_1[0x17] = "wwise_triggers";
  param_1[0x18] = &PTR_s_trigger_14c762750;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.Triggers");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb180 FUN_145bdb180 body=149 status=ok
// SIG undefined FUN_145bdb180(void)

undefined8 * FUN_145bdb180(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14afdc380;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 2;
  *(undefined4 *)(param_1 + 0x16) = 0xdfd4fbca;
  param_1[0x17] = "timeofdaycycle";
  FUN_1400b22c2(local_28,"TimeOfDay.Cycle");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb222 FUN_145bdb222 body=149 status=ok
// SIG undefined FUN_145bdb222(void)

undefined8 * FUN_145bdb222(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b380900;
  *(undefined4 *)(param_1 + 0x16) = 0xbbbb2001;
  param_1[0x17] = "gimmeset";
  param_1[0x18] = &PTR_s_gimme_14c763960;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"Gimme.GimmeSet");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb2c4 FUN_145bdb2c4 body=149 status=ok
// SIG undefined FUN_145bdb2c4(void)

undefined8 * FUN_145bdb2c4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b38c020;
  *(undefined4 *)(param_1 + 0x16) = 0x554e70c5;
  param_1[0x17] = "unlockable";
  param_1[0x18] = &PTR_s_entry_14c763a70;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"General.Unlockables");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb35a FUN_145bdb35a body=53 status=ok
// SIG undefined FUN_145bdb35a(void)

void FUN_145bdb35a(longlong *param_1)

{
  FUN_145bdb390();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bdb390 FUN_145bdb390 body=88 status=ok
// SIG undefined FUN_145bdb390(void)

void FUN_145bdb390(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145bdb3e8 FUN_145bdb3e8 body=340 status=ok
// SIG undefined FUN_145bdb3e8(void)

void FUN_145bdb3e8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_1400d7050();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      cVar3 = (**(code **)(*plVar4 + 0x6c8))(plVar4);
      if (cVar3 != '\0') {
        FUN_1415bde6e(plVar4 + 0x501,&local_38);
        if ((local_38 != 0) && (*(int *)(local_38 + 0x18) != 0)) {
          puVar2 = *(undefined8 **)(local_38 + 0x10);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72((longlong *)(local_38 + 0x10),0,0,0x10);
            *(undefined4 *)(local_38 + 0x18) = 0;
          }
        }
        if ((int)plVar4[0x52d] != 0) {
          puVar2 = (undefined8 *)plVar4[0x52c];
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar4 + 0x52c,0,0,0x10);
            *(undefined4 *)(plVar4 + 0x52d) = 0;
          }
        }
        FUN_140457ffc(plVar4 + 0x467,param_1 + -0x30);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb53e FUN_145bdb53e body=31 status=ok
// SIG undefined FUN_145bdb53e(void)

undefined8 FUN_145bdb53e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdb55e FUN_145bdb55e body=31 status=ok
// SIG undefined FUN_145bdb55e(void)

undefined8 FUN_145bdb55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdb57e FUN_145bdb57e body=134 status=ok
// SIG undefined FUN_145bdb57e(void)

uint FUN_145bdb57e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined1 local_38;
  longlong *local_30;
  DWORD local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = &PTR_FUN_149e051c0;
  local_28 = 0;
  local_30 = param_1;
  FUN_1414d38bc(&local_40,param_2,1);
  uVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2);
  if ((char)uVar1 != '\0') {
    SetLastError(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb606 FUN_145bdb606 body=40 status=ok
// SIG undefined FUN_145bdb606(void)

undefined8 FUN_145bdb606(undefined8 param_1,int param_2)

{
  FUN_145bdb62e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdb62e FUN_145bdb62e body=161 status=ok
// SIG undefined FUN_145bdb62e(void)

void FUN_145bdb62e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab7e830;
  plVar3 = (longlong *)param_1[0x1f];
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
  FUN_145bdb705(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145bdb6d0(param_1 + 0x12);
  FUN_145bdb752(param_1 + 0xe);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bdb6d0 FUN_145bdb6d0 body=53 status=ok
// SIG undefined FUN_145bdb6d0(void)

void FUN_145bdb6d0(longlong *param_1)

{
  FUN_145bdb7ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bdb705 FUN_145bdb705 body=77 status=ok
// SIG undefined FUN_145bdb705(void)

void FUN_145bdb705(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bdb752 FUN_145bdb752 body=124 status=ok
// SIG undefined FUN_145bdb752(void)

void FUN_145bdb752(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145bdb7ce FUN_145bdb7ce body=315 status=ok
// SIG undefined FUN_145bdb7ce(void)

void FUN_145bdb7ce(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_141082322(*local_68 + (longlong)iStack_4c * 0x1030 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145bdb90a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdb90a FUN_145bdb90a body=116 status=ok
// SIG undefined FUN_145bdb90a(void)

void FUN_145bdb90a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1030,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1030)) {
      uVar2 = uVar1 / 0x1030 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1030,8);
  }
  return;
}



// FUNCTION 145bdb98a FUN_145bdb98a body=746 status=ok
// SIG undefined FUN_145bdb98a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145bdb98a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ab92a00;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x40a00000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x41c800003fc00000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  uStack_70 = pcRam000000014cae3d48;
  local_78 = (longlong)DAT_14cae3d40;
  local_88 = DAT_14cae3d30;
  local_98 = (longlong)DAT_14cae3d20;
  local_28 = _DAT_14cae3d50;
  uStack_24 = DAT_14cae3d50_4;
  uStack_20 = (undefined4)uRam000000014cae3d58;
  uStack_1c = uRam000000014cae3d58._4_4_;
  local_38 = DAT_14cae3d40._0_4_;
  uStack_34 = DAT_14cae3d40._4_4_;
  uStack_30 = pcRam000000014cae3d48._0_4_;
  uStack_2c = pcRam000000014cae3d48._4_4_;
  local_48 = DAT_14cae3d30._0_4_;
  uStack_44 = DAT_14cae3d30._4_4_;
  uStack_40 = (undefined4)uRam000000014cae3d38;
  uStack_3c = uRam000000014cae3d38._4_4_;
  local_58 = DAT_14cae3d20._0_4_;
  uStack_54 = DAT_14cae3d20._4_4_;
  uStack_50 = (undefined4)uRam000000014cae3d28;
  uStack_4c = uRam000000014cae3d28._4_4_;
  uVar3 = CONCAT44(uStack_64,local_68);
  uVar4 = CONCAT44(uStack_5c,uStack_60);
  uVar1 = CONCAT44(uStack_8c,uStack_90);
  DAT_14cae3d20 = &DAT_1406309d0;
  uVar2 = CONCAT44(uStack_7c,uStack_80);
  DAT_14cae3d30 = (longlong *)0x0;
  DAT_14cae3d40 = &PTR_LAB_14aba49a0;
  pcRam000000014cae3d48 = FUN_1406309d4;
  uStack_90 = (undefined4)uRam000000014cae3d28;
  uStack_8c = uRam000000014cae3d28._4_4_;
  local_68 = _DAT_14cae3d50;
  uStack_64 = DAT_14cae3d50_4;
  uStack_60 = (undefined4)uRam000000014cae3d58;
  uStack_5c = uRam000000014cae3d58._4_4_;
  uStack_80 = (undefined4)uRam000000014cae3d38;
  uStack_7c = uRam000000014cae3d38._4_4_;
  uRam000000014cae3d28 = uVar1;
  uRam000000014cae3d38 = uVar2;
  _DAT_14cae3d50 = uVar3;
  uRam000000014cae3d58 = uVar4;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  uStack_70 = pcRam000000014cae3c58;
  local_78 = (longlong)DAT_14cae3c50;
  local_88 = DAT_14cae3c40;
  local_98 = (longlong)DAT_14cae3c30;
  local_28 = _DAT_14cae3c60;
  uStack_24 = DAT_14cae3c60_4;
  uStack_20 = (undefined4)uRam000000014cae3c68;
  uStack_1c = uRam000000014cae3c68._4_4_;
  local_38 = DAT_14cae3c50._0_4_;
  uStack_34 = DAT_14cae3c50._4_4_;
  uStack_30 = pcRam000000014cae3c58._0_4_;
  uStack_2c = pcRam000000014cae3c58._4_4_;
  local_48 = DAT_14cae3c40._0_4_;
  uStack_44 = DAT_14cae3c40._4_4_;
  uStack_40 = (undefined4)uRam000000014cae3c48;
  uStack_3c = uRam000000014cae3c48._4_4_;
  local_58 = DAT_14cae3c30._0_4_;
  uStack_54 = DAT_14cae3c30._4_4_;
  uStack_50 = (undefined4)uRam000000014cae3c38;
  uStack_4c = uRam000000014cae3c38._4_4_;
  uVar3 = CONCAT44(uStack_64,local_68);
  uVar4 = CONCAT44(uStack_5c,uStack_60);
  uVar1 = CONCAT44(uStack_8c,uStack_90);
  DAT_14cae3c30 = &LAB_140acf2ee;
  uVar2 = CONCAT44(uStack_7c,uStack_80);
  DAT_14cae3c40 = (longlong *)0x0;
  DAT_14cae3c50 = &PTR_LAB_14aba49c0;
  pcRam000000014cae3c58 = FUN_140acf2f8;
  uStack_90 = (undefined4)uRam000000014cae3c38;
  uStack_8c = uRam000000014cae3c38._4_4_;
  local_68 = _DAT_14cae3c60;
  uStack_64 = DAT_14cae3c60_4;
  uStack_60 = (undefined4)uRam000000014cae3c68;
  uStack_5c = uRam000000014cae3c68._4_4_;
  uStack_80 = (undefined4)uRam000000014cae3c48;
  uStack_7c = uRam000000014cae3c48._4_4_;
  uRam000000014cae3c38 = uVar1;
  uRam000000014cae3c48 = uVar2;
  _DAT_14cae3c60 = uVar3;
  uRam000000014cae3c68 = uVar4;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  uStack_70 = pcRam000000014cae3c98;
  local_78 = (longlong)DAT_14cae3c90;
  local_88 = DAT_14cae3c80;
  local_98 = (longlong)DAT_14cae3c70;
  local_28 = _DAT_14cae3ca0;
  uStack_24 = DAT_14cae3ca0_4;
  uStack_20 = (undefined4)uRam000000014cae3ca8;
  uStack_1c = uRam000000014cae3ca8._4_4_;
  local_38 = DAT_14cae3c90._0_4_;
  uStack_34 = DAT_14cae3c90._4_4_;
  uStack_30 = pcRam000000014cae3c98._0_4_;
  uStack_2c = pcRam000000014cae3c98._4_4_;
  local_48 = DAT_14cae3c80._0_4_;
  uStack_44 = DAT_14cae3c80._4_4_;
  uStack_40 = (undefined4)uRam000000014cae3c88;
  uStack_3c = uRam000000014cae3c88._4_4_;
  local_58 = DAT_14cae3c70._0_4_;
  uStack_54 = DAT_14cae3c70._4_4_;
  uStack_50 = (undefined4)uRam000000014cae3c78;
  uStack_4c = uRam000000014cae3c78._4_4_;
  uVar3 = CONCAT44(uStack_64,local_68);
  uVar4 = CONCAT44(uStack_5c,uStack_60);
  uVar1 = CONCAT44(uStack_8c,uStack_90);
  DAT_14cae3c70 = &LAB_147e673be;
  uVar2 = CONCAT44(uStack_7c,uStack_80);
  DAT_14cae3c80 = (longlong *)0x0;
  DAT_14cae3c90 = &PTR_LAB_14aba49e0;
  pcRam000000014cae3c98 = FUN_147e47e78;
  uStack_90 = (undefined4)uRam000000014cae3c78;
  uStack_8c = uRam000000014cae3c78._4_4_;
  local_68 = _DAT_14cae3ca0;
  uStack_64 = DAT_14cae3ca0_4;
  uStack_60 = (undefined4)uRam000000014cae3ca8;
  uStack_5c = uRam000000014cae3ca8._4_4_;
  uStack_80 = (undefined4)uRam000000014cae3c88;
  uStack_7c = uRam000000014cae3c88._4_4_;
  uRam000000014cae3c78 = uVar1;
  uRam000000014cae3c88 = uVar2;
  _DAT_14cae3ca0 = uVar3;
  uRam000000014cae3ca8 = uVar4;
  if (local_98 != 0) {
    plVar5 = &local_78;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdbc9a FUN_145bdbc9a body=31 status=ok
// SIG undefined FUN_145bdbc9a(void)

undefined8 FUN_145bdbc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdbcba FUN_145bdbcba body=31 status=ok
// SIG undefined FUN_145bdbcba(void)

undefined8 FUN_145bdbcba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdbcda FUN_145bdbcda body=31 status=ok
// SIG undefined FUN_145bdbcda(void)

undefined8 FUN_145bdbcda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bdbcfa FUN_145bdbcfa body=106 status=ok
// SIG undefined FUN_145bdbcfa(void)

void FUN_145bdbcfa(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_144a52528();
  FUN_145bdbd66(local_50,&LAB_14279c80a);
  FUN_145a0ed9c(lVar1 + 0x310,local_58,local_50);
  FUN_1401cb1ee(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdbd66 FUN_145bdbd66 body=135 status=ok
// SIG undefined FUN_145bdbd66(void)

LPCRITICAL_SECTION FUN_145bdbd66(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_1 + 1);
  *puVar1 = &PTR_LAB_149e41ba0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e41b30;
  puVar1[3] = param_2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145bdbdee FUN_145bdbdee body=146 status=ok
// SIG undefined FUN_145bdbdee(void)

code * FUN_145bdbdee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a89e78(0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e23f3e;
}



// FUNCTION 145bdbe80 FUN_145bdbe80 body=113 status=ok
// SIG undefined FUN_145bdbe80(void)

void FUN_145bdbe80(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  
  FUN_145bdbef2();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x150) == '\0') && (*(char *)(lVar1 + 0x1a0) != '\0')) {
      pwVar4 = L"tooltip_matchmaking_disabled";
      uVar3 = 1;
    }
    else {
      pwVar4 = L"tooltip_matchmaking";
      uVar3 = 0;
    }
    *(undefined1 *)(lVar1 + 0x290) = uVar3;
    FUN_14020fad6(lVar1 + 0x298,pwVar4);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 145bdbef2 FUN_145bdbef2 body=8 status=ok
// SIG undefined FUN_145bdbef2(void)

void FUN_145bdbef2(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  return;
}



// FUNCTION 145bdbefa FUN_145bdbefa body=161 status=ok
// SIG undefined FUN_145bdbefa(void)

void FUN_145bdbefa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  FUN_145bdbf9c(puVar2,param_1);
  uVar1 = DAT_14c9995f4;
  uVar3 = FUN_14001cc68(0xb0,0x10);
  FUN_145bdbf9c(uVar3,param_1);
  local_30 = uVar3;
  FUN_145bdc0c8(param_1,&local_30,uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdbf9c FUN_145bdbf9c body=107 status=ok
// SIG undefined FUN_145bdbf9c(void)

undefined8 * FUN_145bdbf9c(undefined8 *param_1)

{
  FUN_145bdc008();
  *param_1 = &PTR_FUN_149f9dea0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_144a89ed8(param_1 + 0x11,0);
  FUN_145bdc052(param_1 + 0xf,*(undefined4 *)(param_1 + 2));
  return param_1;
}



// FUNCTION 145bdc008 FUN_145bdc008 body=73 status=ok
// SIG undefined FUN_145bdc008(void)

undefined8 * FUN_145bdc008(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_149f9a4a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1459a0cf0(param_1 + 1,0);
  *(undefined4 *)param_1[1] = 0;
  return param_1;
}



// FUNCTION 145bdc052 FUN_145bdc052 body=116 status=ok
// SIG undefined FUN_145bdc052(void)

void FUN_145bdc052(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1414d5cb2(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f53dea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145bdc0c8 FUN_145bdc0c8 body=176 status=ok
// SIG undefined FUN_145bdc0c8(void)

undefined8 FUN_145bdc0c8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  puVar4 = (undefined8 *)*param_2;
  if ((ulonglong)uVar2 < 8) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (uVar2 != 0) {
      plVar5 = (longlong *)*plVar1;
      lVar6 = (ulonglong)uVar2 << 4;
      do {
        if (*plVar5 == param_3) {
          if ((plVar5 != (longlong *)0x0) && (plVar5[1] != 0)) goto LAB_145bdc15f;
          break;
        }
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    if (*(int *)(puVar4 + 4) == -1) {
      *(uint *)(puVar4 + 4) = uVar2;
      iVar3 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
        FUN_145bdc1f0(plVar1,iVar3);
      }
      lVar6 = *plVar1;
      *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = param_3;
      *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = *param_2;
      *param_2 = 0;
      return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
    }
  }
LAB_145bdc15f:
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return 0;
}



// FUNCTION 145bdc178 FUN_145bdc178 body=119 status=ok
// SIG undefined FUN_145bdc178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145bdc178(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872dc0) {
    FUN_144b3d300(&DAT_14c872dc0);
    if (DAT_14c872dc0 == -1) {
      _DAT_14c872d40 = 0;
      DAT_14c872d30 = &DAT_14c872d40;
      atexit(FUN_1427863b4);
      _Init_thread_footer(&DAT_14c872dc0);
    }
  }
  return DAT_14c872d30;
}



// FUNCTION 145bdc1f0 FUN_145bdc1f0 body=132 status=ok
// SIG undefined FUN_145bdc1f0(void)

void FUN_145bdc1f0(longlong param_1,int param_2)

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



// FUNCTION 145bdc274 FUN_145bdc274 body=264 status=ok
// SIG undefined FUN_145bdc274(void)

void FUN_145bdc274(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + 0x410;
  FUN_1412b4a80(lVar1,5);
  FUN_1402ba50c(lVar1,0);
  FUN_1402b9d88(lVar1,5,1);
  FUN_140a18d12(lVar1,5,1);
  FUN_14127091c(param_1,1);
  FUN_14025a440(param_1);
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_145bdc386(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7cbb2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(longlong *)(param_1 + 0x648) = lVar1;
      FUN_140e7a304(local_28);
      if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        FUN_145bdc3a6(param_1 + 0x599,param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  *(undefined8 *)(param_1 + 0x648) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 145bdc386 FUN_145bdc386 body=32 status=ok
// SIG undefined FUN_145bdc386(void)

undefined8 FUN_145bdc386(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x260);
  }
  return 0;
}



// FUNCTION 145bdc3a6 FUN_145bdc3a6 body=137 status=ok
// SIG undefined FUN_145bdc3a6(void)

void FUN_145bdc3a6(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_140838726(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x599,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdc430 FUN_145bdc430 body=305 status=ok
// SIG undefined FUN_145bdc430(void)

void FUN_145bdc430(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  FUN_1403d8a98();
  FUN_145bdc562(param_1);
  iVar3 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3a8);
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      plVar4 = *(longlong **)(lVar5 + lVar7);
      if ((plVar4 != (longlong *)0x0 & bVar6) == 1) {
        FUN_1456cec3c(plVar4);
LAB_145bdc4fe:
        (**(code **)(*plVar4 + 0x2e0))(plVar4);
        bVar6 = DAT_14c950c29;
      }
      else if (plVar4 != (longlong *)0x0) goto LAB_145bdc4fe;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(int *)(param_1 + 0x3b4) != 0) {
    FUN_145bdc622(param_1 + 0x3a8);
  }
  *(undefined4 *)(param_1 + 0x538) = 0;
  if (*(int *)(param_1 + 0x53c) != 0) {
    FUN_1488ee8b6(param_1 + 0x530);
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x540) = 0;
    plVar4 = *(longlong **)(param_1 + 0x548);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x548) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145bdc553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145bdc562 FUN_145bdc562 body=174 status=ok
// SIG undefined FUN_145bdc562(void)

void FUN_145bdc562(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x561) != '\x01') goto LAB_145bdc580;
  lVar2 = FUN_1447210f0();
  if ((lVar2 == 0) || (plVar1 = *(longlong **)(lVar2 + 0x938), plVar1 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_145bdc5cf;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_145bdc5cf:
    local_20 = param_1 + 0x3a0;
  }
  local_28 = param_1;
  (**(code **)(*plVar1 + 0x18))(plVar1);
LAB_145bdc580:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdc622 FUN_145bdc622 body=48 status=ok
// SIG undefined FUN_145bdc622(void)

void FUN_145bdc622(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145bdc65a FUN_145bdc65a body=142 status=ok
// SIG undefined FUN_145bdc65a(void)

undefined8 * FUN_145bdc65a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bb6ba30;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_145bdc6e8(param_1 + 9);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f50624dd2f1a9fc;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 145bdc6e8 FUN_145bdc6e8 body=124 status=ok
// SIG undefined FUN_145bdc6e8(void)

undefined8 * FUN_145bdc6e8(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145bdc764(0,0);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    FUN_1491c1950(param_1 + 4,0);
  }
  return param_1;
}



// FUNCTION 145bdc764 FUN_145bdc764 body=49 status=ok
// SIG undefined FUN_145bdc764(void)

void FUN_145bdc764(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bdc79e FUN_145bdc79e body=169 status=ok
// SIG undefined FUN_145bdc79e(void)

undefined8 * FUN_145bdc79e(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac89b00;
  FUN_1414d5e0e(param_1 + 0x10,&DAT_14c9ab028,2);
  param_1[0x10] = &PTR_FUN_14a1a0a20;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x17) = 0x42480000;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 2;
  param_1[0x11] = DAT_14cb23b58;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 145bdc847 FUN_145bdc847 body=43 status=ok
// SIG undefined FUN_145bdc847(void)

void FUN_145bdc847(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145bdc872(puVar1);
  *puVar1 = &PTR_FUN_14b630c70;
  puVar1[6] = &PTR_FUN_14b630f60;
  return;
}



// FUNCTION 145bdc872 FUN_145bdc872 body=361 status=ok
// SIG undefined FUN_145bdc872(void)

undefined8 * FUN_145bdc872(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b65dad0;
  param_1[6] = &PTR_FUN_14b65ddc0;
  FUN_1406d2124(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x3d) = 0x42480000;
  *(undefined4 *)(param_1 + 0x3e) = 0x43160000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xf00000d0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  FUN_14109baa4(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x59) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  FUN_1406d2124(param_1 + 0x5b);
  *(undefined4 *)(param_1 + 0x85) = 0x451c4000;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xf00000d0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  FUN_14109baa4(param_1 + 0x8f);
  *(undefined2 *)(param_1 + 0xa0) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0x3f000000;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x7d) = 1;
    *(undefined1 *)(lVar1 + 0x40) = 1;
    *(undefined2 *)(lVar1 + 0x7a) = 0x101;
    lVar2 = FUN_140d78846();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined2 *)(lVar1 + 0x239) = 0x101;
    }
  }
  return param_1;
}



// FUNCTION 145bdc9dc FUN_145bdc9dc body=179 status=ok
// SIG undefined FUN_145bdc9dc(void)

bool FUN_145bdc9dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 145bdca90 FUN_145bdca90 body=123 status=ok
// SIG undefined FUN_145bdca90(void)

void FUN_145bdca90(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((((*param_4 == '\0') && (iVar3 = FUN_14487fd02(), iVar3 != 3)) &&
      (plVar4 = (longlong *)FUN_1403ca102(param_1), plVar4 != (longlong *)0x0)) &&
     (bVar1 = (**(code **)(*plVar4 + 0x498))(plVar4), bVar1 < 6)) {
    if (((*(longlong *)(param_2 + 8) != 0) &&
        (lVar5 = FUN_140bccd38(*(longlong *)(param_2 + 8),param_2 + 0x18), lVar5 != 0)) &&
       (cVar2 = FUN_1406f1f80(lVar5), cVar2 == '\0')) {
      return;
    }
    *(undefined4 *)(param_1 + 0x5fc) = 0;
    *(undefined1 *)(param_1 + 0x5f4) = 0;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
  }
  return;
}



// FUNCTION 145bdcb0c FUN_145bdcb0c body=158 status=ok
// SIG undefined FUN_145bdcb0c(void)

void FUN_145bdcb0c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdcbac FUN_145bdcbac body=69 status=ok
// SIG undefined FUN_145bdcbac(void)

void FUN_145bdcbac(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x448) != param_2) {
    *(int *)(param_1 + 0x448) = param_2;
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar1 + 0x178) != 0) {
        FUN_145bdcbf2();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bdcbf2 FUN_145bdcbf2 body=139 status=ok
// SIG undefined FUN_145bdcbf2(void)

void FUN_145bdcbf2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((char)param_1[0x2f] == '\x03') {
    iVar3 = FUN_141348de4();
    lVar2 = param_1[0x76];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[0x75];
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar5) != 0) {
          iVar4 = FUN_145bdcc7e();
          if (iVar4 < iVar3) {
            iVar3 = iVar4;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar5);
    }
    *(int *)((longlong)param_1 + 0x3e4) = iVar3;
    (**(code **)(*param_1 + 0x578))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145bdcc69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d0))(param_1);
    return;
  }
  return;
}



// FUNCTION 145bdcc7e FUN_145bdcc7e body=7 status=ok
// SIG undefined FUN_145bdcc7e(void)

undefined4 FUN_145bdcc7e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x448);
}



// FUNCTION 145bdcc86 FUN_145bdcc86 body=43 status=ok
// SIG undefined FUN_145bdcc86(void)

undefined8 FUN_145bdcc86(undefined8 param_1,int param_2)

{
  FUN_145bdccb2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 145bdccb2 FUN_145bdccb2 body=138 status=ok
// SIG undefined FUN_145bdccb2(void)

void FUN_145bdccb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ace90;
  FUN_145bdcd3c(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145bdcd3c FUN_145bdcd3c body=38 status=ok
// SIG undefined FUN_145bdcd3c(void)

void FUN_145bdcd3c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145bdcd62(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145bdcd62 FUN_145bdcd62 body=64 status=ok
// SIG undefined FUN_145bdcd62(void)

void FUN_145bdcd62(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145bdcda2 FUN_145bdcda2 body=103 status=ok
// SIG undefined FUN_145bdcda2(void)

ulonglong FUN_145bdcda2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145bdcdec:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145bdcdec;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145bdce0a FUN_145bdce0a body=103 status=ok
// SIG undefined FUN_145bdce0a(void)

ulonglong FUN_145bdce0a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145bdce54:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145bdce54;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145bdce72 FUN_145bdce72 body=241 status=ok
// SIG undefined FUN_145bdce72(void)

void FUN_145bdce72(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 auStack_a8 [3];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_2;
  auStack_a8[0] = 0;
  FUN_14485c47a(auStack_a8,param_3);
  local_90 = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0x7fefffff;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar3 = *(int *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar3 + 1U) {
    FUN_145bdcf64((longlong *)(param_1 + 0xd8),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  lVar5 = (longlong)iVar3 * 0x88;
  *(undefined8 *)(lVar4 + lVar5) = local_b0;
  ((undefined8 *)(lVar4 + lVar5))[1] = auStack_a8[0];
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5);
  *puVar2 = (undefined4)local_90;
  puVar2[1] = local_90._4_4_;
  puVar2[2] = uStack_88;
  puVar2[3] = uStack_84;
  *(ulonglong *)(lVar4 + 0x2f + lVar5) = CONCAT35(uStack_7c,CONCAT41(uStack_80,uStack_84._3_1_));
  *(undefined1 *)(lVar4 + 0x50 + lVar5) = 0;
  *(undefined1 *)(lVar4 + 0x60 + lVar5) = 0;
  *(undefined1 *)(lVar4 + 0x70 + lVar5) = 0;
  *(undefined1 *)(lVar4 + 0x80 + lVar5) = 0;
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdcf64 FUN_145bdcf64 body=150 status=ok
// SIG undefined FUN_145bdcf64(void)

void FUN_145bdcf64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145bdcffc FUN_145bdcffc body=187 status=ok
// SIG undefined FUN_145bdcffc(void)

longlong FUN_145bdcffc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  FUN_140f26c7f();
  lVar1 = *param_2;
  if (lVar1 != DAT_14cb710c0) {
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar5 = (uint)lVar1 & 0xffff;
      lVar4 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x90);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x60;
          if (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x60) == lVar1)
          goto LAB_145bdd030;
          iVar3 = *(int *)(lVar4 + 0x58);
        } while (iVar3 != -1);
      }
    }
    lVar4 = 0;
LAB_145bdd030:
    param_1 = lVar4 + 8;
    if (lVar4 == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}



// FUNCTION 145bdd0b8 FUN_145bdd0b8 body=129 status=ok
// SIG undefined FUN_145bdd0b8(void)

void FUN_145bdd0b8(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0x1a];
  param_1[0x1a] = uVar1 + 1;
  if (param_1[0x1b] < uVar1 + 1) {
    FUN_14689d934(param_1 + 10,uVar1);
  }
  *(undefined8 *)(param_1 + 10 + (longlong)(int)uVar1 * 2) = param_2;
  if ((param_3 & 1) != 0) {
    uVar2 = param_1[8];
    param_1[8] = uVar2 + 1;
    if (param_1[9] < uVar2 + 1) {
      FUN_14689d954(param_1 + 6,uVar2);
    }
    (param_1 + 6)[(int)uVar2] = uVar1;
  }
  *param_1 = *param_1 | (param_3 >> 1 & 1) << ((byte)uVar1 & 0x1f);
  return;
}



// FUNCTION 145bdd13a FUN_145bdd13a body=152 status=ok
// SIG undefined FUN_145bdd13a(void)

undefined1 * FUN_145bdd13a(undefined1 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c950c18) {
    FUN_144b3d300(&DAT_14c950c18);
    if (DAT_14c950c18 == -1) {
      DAT_14c950c10 = param_1;
      *(undefined8 *)(param_1 + 0x28) = 0x200000000;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0x800000000;
      *param_1 = 1;
      atexit((_func_5014 *)&LAB_1427f0d0c);
      _Init_thread_footer(&DAT_14c950c18);
    }
  }
  return param_1 + 8;
}



// FUNCTION 145bdd1da FUN_145bdd1da body=73 status=ok
// SIG undefined FUN_145bdd1da(void)

undefined8 * FUN_145bdd1da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a5259d0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 145bdd22e FUN_145bdd22e body=70 status=ok
// SIG undefined FUN_145bdd22e(void)

undefined8 * FUN_145bdd22e(undefined8 *param_1)

{
  FUN_1459a4106();
  *param_1 = &PTR_FUN_14a661c00;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145bdd280 FUN_145bdd280 body=70 status=ok
// SIG undefined FUN_145bdd280(void)

undefined8 * FUN_145bdd280(undefined8 *param_1)

{
  FUN_1459a4106();
  *param_1 = &PTR_FUN_14a692d30;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 145bdd2c6 FUN_145bdd2c6 body=149 status=ok
// SIG undefined FUN_145bdd2c6(void)

void FUN_145bdd2c6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_14caf8558 != 0) {
    FUN_14480f766(&DAT_14c872cf8);
    DAT_14caf8558 = 0;
  }
  lVar1 = DAT_14cafa570;
  if (DAT_14cafa570 != 0) {
    *(undefined4 *)(DAT_14cafa570 + 8) = 0;
    if (*(int *)(lVar1 + 0xc) != 0) {
      FUN_147c86524(lVar1,0);
    }
    uVar2 = FUN_140c61bfa();
    if (DAT_14caf8500 != 0) {
      FUN_14480f766(uVar2);
    }
    lVar1 = DAT_14cafa570;
    if (DAT_14cafa570 != 0) {
      FUN_1414d6f74(DAT_14cafa570);
      FUN_1400020a8(lVar1);
    }
    DAT_14cafa570 = 0;
  }
  return;
}



// FUNCTION 145bdd366 FUN_145bdd366 body=70 status=ok
// SIG undefined FUN_145bdd366(void)

longlong * FUN_145bdd366(longlong *param_1)

{
  FUN_140312256();
  *param_1 = (longlong)&PTR_FUN_14ab7d6a0;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xb7;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfc | 2;
  FUN_1403121a6(param_1,0);
  (**(code **)(*param_1 + 0x330))(param_1,1);
  return param_1;
}



// FUNCTION 145bdd3ba FUN_145bdd3ba body=67 status=ok
// SIG undefined FUN_145bdd3ba(void)

undefined8 * FUN_145bdd3ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145bdd40c FUN_145bdd40c body=67 status=ok
// SIG undefined FUN_145bdd40c(void)

undefined8 * FUN_145bdd40c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145bdd45e FUN_145bdd45e body=67 status=ok
// SIG undefined FUN_145bdd45e(void)

undefined8 * FUN_145bdd45e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145bdd4a2 FUN_145bdd4a2 body=254 status=ok
// SIG undefined FUN_145bdd4a2(void)

longlong * FUN_145bdd4a2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *param_2 = 0;
  if ((longlong)*(int *)(param_1 + 0x400) == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x3f8);
    lVar5 = (longlong)*(int *)(param_1 + 0x400) << 3;
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((lVar3 != 0) &&
         (lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28), lVar3 == param_3)
         ) {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
          }
        }
        *param_2 = lVar5;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x400);
  if ((int)(uint)uVar6 < iVar2) {
    iVar4 = ~(uint)uVar6 + iVar2;
    if (iVar4 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x3f8) + (uVar6 & 0xffffffff) * 8),
              (void *)(*(longlong *)(param_1 + 0x3f8) + (uVar6 & 0xffffffff) * 8 + 8),
              (longlong)iVar4 << 3);
      iVar2 = *(int *)(param_1 + 0x400);
    }
    *(int *)(param_1 + 0x400) = iVar2 + -1;
    FUN_145bdd5a0(param_1 + 0x3f8);
  }
  return param_2;
}



// FUNCTION 145bdd5a0 FUN_145bdd5a0 body=62 status=ok
// SIG undefined FUN_145bdd5a0(void)

void FUN_145bdd5a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145bdd5de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145bdd5de FUN_145bdd5de body=89 status=ok
// SIG undefined FUN_145bdd5de(void)

ulonglong FUN_145bdd5de(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145bdd638 FUN_145bdd638 body=1551 status=ok
// SIG undefined FUN_145bdd638(void)

void FUN_145bdd638(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_168 [40];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  longlong local_118 [2];
  longlong *local_108 [2];
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  longlong *local_80;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar8 = *(longlong *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 8);
    lVar5 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar9) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar9 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar9 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar6 = 0;
    if (bVar9) {
      lVar6 = lVar3;
    }
  }
  if (local_c0 == 0) {
    local_88 = L"MissingTableInput";
    local_80._0_4_ = 0x11;
    FUN_1446e940c(&local_a8,&local_88);
    local_88 = L"GetDataTableRow";
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0xf);
    FUN_1446e940c(&local_b8,&local_88);
    pwVar7 = L"Failed to resolve the table input. Be sure the DataTable is valid.";
LAB_145bdd7f9:
    FUN_140208bae(&local_98,&local_b8,&local_a8,pwVar7);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,3);
    local_80 = local_98;
    if (local_98 == (longlong *)0x0) {
      local_78[0] = local_90;
    }
    else {
      (**(code **)(*local_98 + 8))();
      local_78[0] = local_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
  }
  else {
    if ((lVar6 == 0) || (lVar8 == 0)) {
      local_88 = L"MissingOutputProperty";
      local_80._0_4_ = 0x15;
      FUN_1446e940c(&local_a8,&local_88);
      local_88 = L"GetDataTableRow";
      local_80 = (longlong *)CONCAT44(local_80._4_4_,0xf);
      FUN_1446e940c(&local_b8,&local_88);
      pwVar7 = L"Failed to resolve the output parameter for GetDataTableRow.";
      goto LAB_145bdd7f9;
    }
    lVar3 = *(longlong *)(local_c0 + 0x28);
    if (*(longlong *)(lVar6 + 0x70) == lVar3) {
      uVar4 = FUN_145bddc48(local_c0,local_c8,lVar8);
      goto LAB_145bdd768;
    }
    FUN_14010318a(*(longlong *)(lVar6 + 0x70),local_f8,0);
    FUN_145aa9352(local_e8,local_f8);
    if (lVar3 == 0) {
      FUN_140056680(local_118,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(lVar3,local_118,0);
    }
    FUN_145aa9352(local_108,local_118);
    local_88 = L"IncompatibleProperty";
    local_80._0_4_ = 0x14;
    FUN_1446e940c(local_13c,&local_88);
    local_88 = L"GetDataTableRow";
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0xf);
    FUN_1446e940c(local_140,&local_88);
    FUN_140208bae(local_138,local_140,local_13c,
                  L"Incompatible output parameter; the data table\'s type ({0}) is not the same as the return type ({1})."
                 );
    FUN_14023409e(&local_128,local_138,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_108);
    local_68 = 4;
    FUN_14023423e(local_58,local_e8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_128;
    local_b0 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_d8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_88 + lVar8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_88 + lVar8) + 0x10))();
        *(undefined8 *)((longlong)&local_88 + lVar8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar8 + -8) = 0;
      }
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != -0x10);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,3);
    local_80 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      local_78[0] = local_d0;
    }
    else {
      (**(code **)(*local_d8 + 8))();
      local_78[0] = local_d0;
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14282556a(param_1,param_2,&local_88);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  uVar4 = 0;
LAB_145bdd768:
  *param_3 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bddc48 FUN_145bddc48 body=61 status=ok
// SIG undefined FUN_145bddc48(void)

undefined8 FUN_145bddc48(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145bddc86();
  if ((lVar1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1449b16b6(*(longlong *)(param_1 + 0x28),param_3,lVar1,1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 145bddc86 FUN_145bddc86 body=171 status=ok
// SIG undefined FUN_145bddc86(void)

longlong FUN_145bddc86(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1[5] != 0) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c0))(),
     (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      while (plVar3 = (longlong *)(*plVar2 + (longlong)iVar5 * 0x18), *plVar3 != param_2) {
        iVar5 = (int)plVar3[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      if (plVar3 + 1 == (longlong *)0x0) {
        return 0;
      }
      return plVar3[1];
    }
  }
  return 0;
}



// FUNCTION 145bddd32 FUN_145bddd32 body=324 status=ok
// SIG undefined FUN_145bddd32(void)

void FUN_145bddd32(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145bdde78(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdde78 FUN_145bdde78 body=148 status=ok
// SIG undefined FUN_145bdde78(void)

void FUN_145bdde78(undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_38 = (uint)param_3;
  local_18 = 1;
  FUN_1414d6f82(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bddf0e FUN_145bddf0e body=1068 status=ok
// SIG undefined FUN_145bddf0e(void)

void FUN_145bddf0e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [40];
  undefined1 **local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  longlong local_110;
  undefined1 local_104 [8];
  undefined1 local_fc [4];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d4 [20];
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined1 local_b3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68;
  char local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1414d706e();
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  local_98 = 0;
  local_96 = 0;
  local_88 = (undefined4)DAT_14c8464f8;
  uStack_84 = DAT_14c8464f8._4_4_;
  uStack_80 = (undefined4)DAT_14c846500;
  uStack_7c = DAT_14c846500._4_4_;
  local_78 = DAT_14c846508;
  local_90 = 0;
  local_70 = 0x18;
  local_68 = 5;
  local_60 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_57 = 0;
  local_b7 = 0;
  local_b3 = 0;
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_1 + 0x10);
  uVar3 = DAT_14cbcabc0;
  uVar1 = FUN_1408d77e6();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0xd0) = 1;
    local_f8 = (undefined1 *)0x0;
    uVar3 = FUN_1411157a2();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&local_f8);
    if (lVar4 != 0) {
      FUN_14054d68c(lVar4 + 0x80,param_1 + 0x1d8);
      FUN_1446ddc76(local_104,"VerticalOffset",1);
      local_f8 = local_104;
      local_f0 = param_1 + 0x488;
      FUN_140ffad64(lVar4 + 0x88,local_fc,&local_f8,0);
      *(undefined1 *)(lVar4 + 0x331) = 0;
    }
    uVar3 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcabc8,0);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(param_1 + 0x530);
      local_f8 = (undefined1 *)0x0;
      uVar3 = FUN_140c48226();
      lVar6 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar6 != 0) {
        FUN_144955a78(lVar6 + 0x98,&local_c0);
        *(undefined8 *)(lVar6 + 0x98) = 0x42c8000042c80000;
        *(undefined4 *)(lVar6 + 0x19c) = 1;
        local_120 = 0;
        if (lVar4 == 0) {
          local_110 = 0;
          local_118 = (undefined1 *)0x0;
        }
        else {
          FUN_14111569e(lVar4,&local_f8);
          local_110 = local_f0;
          local_118 = local_f8;
        }
        FUN_141115702(&local_f8);
        FUN_1403719a4(lVar6 + 0x1e8,&local_f8);
        FUN_144a2da94(&local_f8);
      }
      local_f8 = (undefined1 *)0x0;
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar4 != 0) {
        FUN_144983130(lVar4 + 0x80,param_1 + 0x198);
        local_128 = local_d4;
        local_f8 = DAT_14cb72618;
        local_f0._0_4_ = CONCAT31(local_f0._1_3_,*(char *)(param_1 + 0x531) == '\x01');
        local_f0._4_4_ = (undefined4)DAT_14cb72620;
        uStack_e8 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
        local_e4 = *(undefined1 *)(param_1 + 0x533);
        local_e0 = DAT_14cb72628;
        local_d8 = *(undefined1 *)(param_1 + 0x532);
        local_130 = &local_f8;
        FUN_140c482d4(lVar4);
      }
    }
    uVar3 = FUN_140a48832();
    lVar2 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcabe8,0);
    if (lVar2 != 0) {
      local_f8 = (undefined1 *)0x0;
      uVar3 = FUN_145bde33c();
      lVar2 = FUN_140c47e50(lVar2,uVar3,&local_f8);
      if (lVar2 != 0) {
        FUN_144983130(lVar2 + 0x1e8,param_1 + 0x198);
        lVar4 = *(longlong *)(param_1 + 0x1d0);
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *(longlong *)(param_1 + 0x1d0);
          }
        }
        *(longlong *)(lVar2 + 0x220) = lVar4;
        *(undefined4 *)(lVar2 + 0x19c) = 1;
        FUN_144983130(lVar2 + 0x230,param_1 + 0x450);
        FUN_144983130(lVar2 + 0x268,param_1 + 0x488);
        FUN_144983130(lVar2 + 0x2a0,param_1 + 0x4c0);
        FUN_144983130(lVar2 + 0x2d8,param_1 + 0x4f8);
        *(byte *)(lVar2 + 0x229) = *(byte *)(param_1 + 0x534) ^ 1;
      }
    }
  }
  FUN_144a2da94(&local_90);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bde33c FUN_145bde33c body=57 status=ok
// SIG undefined FUN_145bde33c(void)

void FUN_145bde33c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0df0 = FUN_140002ddd(FUN_1465ac659,uVar1,L"GbxBrainAspectSettings_Swoop");
  }
  return;
}



// FUNCTION 145bde376 FUN_145bde376 body=90 status=ok
// SIG undefined FUN_145bde376(void)

longlong * FUN_145bde376(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = FUN_1464096c3;
  puVar2[1] = 0;
  FUN_145bde3d0(puVar2 + 2);
  lVar1 = *param_1;
  *param_1 = (longlong)(puVar2 + 2);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  return param_1;
}



// FUNCTION 145bde3d0 FUN_145bde3d0 body=170 status=ok
// SIG undefined FUN_145bde3d0(void)

undefined8 FUN_145bde3d0(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"Messaging",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_14493e38c(uVar2,local_28);
  (**(code **)(*plVar3 + 0x68))(plVar3,&local_28);
  FUN_145bde47c(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bde47c FUN_145bde47c body=1350 status=ok
// SIG undefined FUN_145bde47c(void)

undefined8 * FUN_145bde47c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14aadc6e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar9 = DAT_14c86702c;
  uVar8 = DAT_14c867028;
  uVar7 = DAT_14c867024;
  *(undefined4 *)(param_1 + 3) = DAT_14c867020;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  FUN_145bdec9c(&local_90);
  *(undefined4 *)(param_1 + 5) = (undefined4)local_90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_90._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_88;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_88._4_4_;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = param_1 + 1;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      FUN_1446ddc76(&local_98,"FTraceService",1);
      uStack_88 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_1446ddc76(&local_98,"FTraceService",1);
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      uStack_88 = plVar5;
    }
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_54 = local_98;
    local_90 = lVar4;
    local_4c = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
    FUN_145bded08(&local_90,param_1);
    FUN_145bdee4c(&local_90,param_1);
    FUN_145bdeef0(&local_90,param_1);
    FUN_145bdef94(&local_90,param_1);
    FUN_145bdedaa(&local_90,param_1);
    FUN_145bdf038(&local_90,param_1);
    FUN_145bdf0dc(&local_90,param_1);
    FUN_145bdf180(&local_90,param_1);
    FUN_145bdf224(&local_90,param_1);
    FUN_145bdf2c8(&local_90,param_1);
    FUN_145bdf36c(&local_90,param_1);
    FUN_145bdf410(&local_90,param_1);
    FUN_145bdf4b4(&local_90,param_1);
    FUN_145bdf558(&local_90,param_1);
    FUN_1458bfc2e(&local_90,&local_48);
    plVar2 = local_40;
    if (plVar1 != &local_48) {
      param_1[1] = local_48;
      local_48 = 0;
      plVar6 = (longlong *)param_1[2];
      if (local_40 != plVar6) {
        local_40 = (longlong *)0x0;
        param_1[2] = plVar2;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
    }
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1458bf708(&local_90);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bde9fc();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdea34();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdeadc();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdea6c();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdeb14();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdeb4c();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdeaa4();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdeb84();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bde9c4();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bde9c4();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdebbc();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdebf4();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48._0_4_ = 0x20001;
      uVar10 = FUN_145bdec2c();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
      lVar4 = *plVar1;
      local_48 = CONCAT44(local_48._4_4_,0x20001);
      uVar10 = FUN_145bdec64();
      FUN_1414d7078(uVar10,&local_90);
      FUN_1414d7090(lVar4,&local_90,&local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bde9c4 FUN_145bde9c4 body=55 status=ok
// SIG undefined FUN_145bde9c4(void)

void FUN_145bde9c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc70 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc70 = FUN_140002ddd(FUN_14629e577,uVar1,L"TraceControlSnapshotSend");
  }
  return;
}



// FUNCTION 145bde9fc FUN_145bde9fc body=55 status=ok
// SIG undefined FUN_145bde9fc(void)

void FUN_145bde9fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fad8 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fad8 = FUN_140002ddd(FUN_14629ddf5,uVar1,L"TraceControlStatusPing");
  }
  return;
}



// FUNCTION 145bdea34 FUN_145bdea34 body=55 status=ok
// SIG undefined FUN_145bdea34(void)

void FUN_145bdea34(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb08 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb08 = FUN_140002ddd(FUN_14629dee1,uVar1,L"TraceControlSettingsPing");
  }
  return;
}



// FUNCTION 145bdea6c FUN_145bdea6c body=55 status=ok
// SIG undefined FUN_145bdea6c(void)

void FUN_145bdea6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb50 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb50 = FUN_140002ddd(FUN_14629e05f,uVar1,L"TraceControlChannelsPing");
  }
  return;
}



// FUNCTION 145bdeaa4 FUN_145bdeaa4 body=55 status=ok
// SIG undefined FUN_145bdeaa4(void)

void FUN_145bdeaa4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb98 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb98 = FUN_140002ddd(FUN_14629e1dd,uVar1,L"TraceControlChannelsSet");
  }
  return;
}



// FUNCTION 145bdeadc FUN_145bdeadc body=55 status=ok
// SIG undefined FUN_145bdeadc(void)

void FUN_145bdeadc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fbb0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fbb0 = FUN_140002ddd(FUN_14629e237,uVar1,L"TraceControlDiscoveryPing");
  }
  return;
}



// FUNCTION 145bdeb14 FUN_145bdeb14 body=55 status=ok
// SIG undefined FUN_145bdeb14(void)

void FUN_145bdeb14(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fbe0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fbe0 = FUN_140002ddd(FUN_14629e323,uVar1,L"TraceControlStop");
  }
  return;
}



// FUNCTION 145bdeb4c FUN_145bdeb4c body=55 status=ok
// SIG undefined FUN_145bdeb4c(void)

void FUN_145bdeb4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc10 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc10 = FUN_140002ddd(FUN_14629e40f,uVar1,L"TraceControlSend");
  }
  return;
}



// FUNCTION 145bdeb84 FUN_145bdeb84 body=55 status=ok
// SIG undefined FUN_145bdeb84(void)

void FUN_145bdeb84(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc28 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc28 = FUN_140002ddd(FUN_14629e469,uVar1,L"TraceControlFile");
  }
  return;
}



// FUNCTION 145bdebbc FUN_145bdebbc body=55 status=ok
// SIG undefined FUN_145bdebbc(void)

void FUN_145bdebbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc40 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc40 = FUN_140002ddd(FUN_14629e4c3,uVar1,L"TraceControlPause");
  }
  return;
}



// FUNCTION 145bdebf4 FUN_145bdebf4 body=55 status=ok
// SIG undefined FUN_145bdebf4(void)

void FUN_145bdebf4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc58 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc58 = FUN_140002ddd(FUN_14629e51d,uVar1,L"TraceControlResume");
  }
  return;
}



// FUNCTION 145bdec2c FUN_145bdec2c body=55 status=ok
// SIG undefined FUN_145bdec2c(void)

void FUN_145bdec2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fca0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fca0 = FUN_140002ddd(FUN_14629e663,uVar1,L"TraceControlBookmark");
  }
  return;
}



// FUNCTION 145bdec64 FUN_145bdec64 body=55 status=ok
// SIG undefined FUN_145bdec64(void)

void FUN_145bdec64(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fcd0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fcd0 = FUN_140002ddd(FUN_14629e74f,uVar1,L"TraceControlSetStatNamedEvents");
  }
  return;
}



// FUNCTION 145bdec9c FUN_145bdec9c body=107 status=ok
// SIG undefined FUN_145bdec9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145bdec9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8465b8) {
    FUN_144b3d300(&DAT_14c8465b8);
    if (DAT_14c8465b8 == -1) {
      FUN_1412e3d1e(&DAT_14c8465a8);
      _Init_thread_footer(&DAT_14c8465b8);
    }
  }
  uVar1 = uRam000000014c8465b0;
  *param_1 = _DAT_14c8465a8;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 145bded08 FUN_145bded08 body=162 status=ok
// SIG undefined FUN_145bded08(void)

longlong FUN_145bded08(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0140;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d7464c;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0150;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdedaa FUN_145bdedaa body=162 status=ok
// SIG undefined FUN_145bdedaa(void)

longlong FUN_145bdedaa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae01f8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d7485c;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0210;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdee4c FUN_145bdee4c body=164 status=ok
// SIG undefined FUN_145bdee4c(void)

longlong FUN_145bdee4c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0168;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d7477e;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0180;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdeef0 FUN_145bdeef0 body=164 status=ok
// SIG undefined FUN_145bdeef0(void)

longlong FUN_145bdeef0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0198;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d747e0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae01b0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdef94 FUN_145bdef94 body=164 status=ok
// SIG undefined FUN_145bdef94(void)

longlong FUN_145bdef94(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae01c8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d747e6;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae01e0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf038 FUN_145bdf038 body=164 status=ok
// SIG undefined FUN_145bdf038(void)

longlong FUN_145bdf038(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0228;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d748d6;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0240;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf0dc FUN_145bdf0dc body=164 status=ok
// SIG undefined FUN_145bdf0dc(void)

longlong FUN_145bdf0dc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0258;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d748f0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0270;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf180 FUN_145bdf180 body=164 status=ok
// SIG undefined FUN_145bdf180(void)

longlong FUN_145bdf180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0288;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d7490a;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae02a0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf224 FUN_145bdf224 body=164 status=ok
// SIG undefined FUN_145bdf224(void)

longlong FUN_145bdf224(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae02b8;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d74910;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae02d0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf2c8 FUN_145bdf2c8 body=164 status=ok
// SIG undefined FUN_145bdf2c8(void)

longlong FUN_145bdf2c8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae02e8;
  puVar3[1] = param_2;
  puVar3[2] = &DAT_143744e86;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0300;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf36c FUN_145bdf36c body=164 status=ok
// SIG undefined FUN_145bdf36c(void)

longlong FUN_145bdf36c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0318;
  puVar3[1] = param_2;
  puVar3[2] = &LAB_147d74916;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0330;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf410 FUN_145bdf410 body=164 status=ok
// SIG undefined FUN_145bdf410(void)

longlong FUN_145bdf410(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0348;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d74956;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0360;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf4b4 FUN_145bdf4b4 body=164 status=ok
// SIG undefined FUN_145bdf4b4(void)

longlong FUN_145bdf4b4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae0378;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d749be;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae0390;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf558 FUN_145bdf558 body=164 status=ok
// SIG undefined FUN_145bdf558(void)

longlong FUN_145bdf558(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14aae03a8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147d74a8e;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14aae03c0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 145bdf604 FUN_145bdf604 body=52 status=ok
// SIG undefined FUN_145bdf604(void)

undefined8 * FUN_145bdf604(undefined8 *param_1)

{
  FUN_145bdf638();
  *param_1 = &PTR_FUN_14b7bddc0;
  param_1[6] = &PTR_FUN_14b7be1e8;
  *(undefined2 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 145bdf638 FUN_145bdf638 body=346 status=ok
// SIG undefined FUN_145bdf638(void)

undefined8 * FUN_145bdf638(undefined8 *param_1)

{
  FUN_140bf9282();
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14b4ddcc0;
  param_1[6] = &PTR_FUN_14b4de0e8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  return param_1;
}



// FUNCTION 145bdf792 FUN_145bdf792 body=105 status=ok
// SIG undefined FUN_145bdf792(void)

ulonglong FUN_145bdf792(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_145bdf7ca;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145bdf7fc(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar5 * 8) = *param_2;
LAB_145bdf7ca:
  return uVar5 & 0xffffffff;
}



// FUNCTION 145bdf7fc FUN_145bdf7fc body=132 status=ok
// SIG undefined FUN_145bdf7fc(void)

void FUN_145bdf7fc(longlong param_1,int param_2)

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



// FUNCTION 145bdf880 FUN_145bdf880 body=108 status=ok
// SIG undefined FUN_145bdf880(void)

undefined4 * FUN_145bdf880(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145bdf8ee();
  FUN_145bdf8ee();
  FUN_1448e935e(param_1,&local_30,&DAT_14cb09610,0);
  FUN_145bdf8ee();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdf8ee FUN_145bdf8ee body=289 status=ok
// SIG undefined FUN_145bdf8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145bdf8ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb096b8) {
    FUN_144b3d300(&DAT_14cb096b8);
    if (DAT_14cb096b8 == -1) {
      FUN_1414d71fc();
      FUN_145bdfa10();
      FUN_140db5666(&DAT_14cb09610,0,&DAT_14cb095a8,L"FSparseVolumeTextureUpdatePageTableCS",
                    L"/Engine/Private/SparseVolumeTexture/UpdateSparseVolumeTexture.usf",
                    L"SparseVolumeTextureUpdatePageTableCS",5,1,FUN_147d4cd42,FUN_147d4cce2,
                    &LAB_147d4ccde,&LAB_147d4ccda,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb09c38)
      ;
      _DAT_14cb09610 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14370bc8e);
      _Init_thread_footer(&DAT_14cb096b8);
    }
  }
  return &DAT_14cb09610;
}



// FUNCTION 145bdfa10 FUN_145bdfa10 body=205 status=ok
// SIG undefined FUN_145bdfa10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bdfa10(void)

{
  if ((DAT_14cb0960f & 2) == 0) {
    DAT_14cb0960f = DAT_14cb0960f | 2;
    _DAT_14cb095b0 = L"FSparseVolumeTextureUpdatePageTableCS";
    _DAT_14cb095c8 = FUN_146826540;
    _DAT_14cb095d0 = FUN_146825d77;
    _DAT_14cb095d8 = FUN_146825fd6;
    _DAT_14cb095e0 = FUN_1407e02ea;
    _DAT_14cb095e8 = FUN_146826273;
    _DAT_14cb095c0 = FUN_147d4ccac;
    _DAT_14cb09600 = 0xffffffff000000e0;
    _DAT_14cb09608 = 8;
    DAT_14cb0960c = 0;
    _DAT_14cb095f0 = &LAB_147d4ccd6;
    FUN_145bdfade();
    FUN_1407e00cc(&DAT_14cb095a8);
    return;
  }
  return;
}



// FUNCTION 145bdfade FUN_145bdfade body=123 status=ok
// SIG undefined FUN_145bdfade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bdfade(void)

{
  _DAT_14cb09d30 = L"BASE";
  DAT_14cb09d5a = 4;
  _DAT_14cb09d38 = FUN_140b35ae4();
  _DAT_14cb09d40 = DAT_14cb095b8;
  _DAT_14cb09d48 = &LAB_14682652b;
  DAT_14cb095b8 = &DAT_14cb09d30;
  DAT_14cb0960d = DAT_14cb0960d + '\x01';
  _DAT_14cb09d50 = 0x100000000;
  if (*(char *)(_DAT_14cb09d38 + 100) != '\0') {
    DAT_14cb0960e = DAT_14cb0960e + '\x01';
  }
  return;
}



// FUNCTION 145bdfb5a FUN_145bdfb5a body=226 status=ok
// SIG undefined FUN_145bdfb5a(void)

longlong * FUN_145bdfb5a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146405bfa;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdfc42 FUN_145bdfc42 body=130 status=ok
// SIG undefined FUN_145bdfc42(void)

undefined1 * FUN_145bdfc42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x41;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145bdfc3e;
}



// FUNCTION 145bdfcc4 FUN_145bdfcc4 body=138 status=ok
// SIG undefined FUN_145bdfcc4(void)

code * FUN_145bdfcc4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UpdatePayloadOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56198;
}



// FUNCTION 145bdfd4e FUN_145bdfd4e body=262 status=ok
// SIG undefined FUN_145bdfd4e(void)

undefined4 * FUN_145bdfd4e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bdfed8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_145bdfe56(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145bdffcc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bdfe56 FUN_145bdfe56 body=130 status=ok
// SIG undefined FUN_145bdfe56(void)

undefined8 FUN_145bdfe56(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148998be8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bdfed8 FUN_145bdfed8 body=243 status=ok
// SIG undefined FUN_145bdfed8(void)

int * FUN_145bdfed8(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145bdffcc FUN_145bdffcc body=483 status=ok
// SIG undefined FUN_145bdffcc(void)

void FUN_145bdffcc(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145be01b0 FUN_145be01b0 body=68 status=ok
// SIG undefined FUN_145be01b0(void)

void FUN_145be01b0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 <= *(int *)(param_1 + 0x1808)) {
    uVar1 = FUN_145be01f6(*(int *)(param_1 + 0x1808),*(undefined4 *)(param_1 + 0x180c));
    *(undefined4 *)(param_1 + 0x180c) = uVar1;
    FUN_1457da520(param_1,param_2,uVar1,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145be01f6 FUN_145be01f6 body=114 status=ok
// SIG undefined FUN_145be01f6(void)

ulonglong FUN_145be01f6(uint param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x101) {
    uVar3 = 0x100;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (0x100 < param_2) {
      lVar1 = lVar1 + ((ulonglong)(lVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = lVar1 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
    }
    uVar3 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar2 / 0x18)) {
      uVar3 = uVar2 / 0x18 & 0xffffffff;
    }
  }
  return uVar3;
}



// FUNCTION 145be0268 FUN_145be0268 body=40 status=ok
// SIG undefined FUN_145be0268(void)

undefined8 FUN_145be0268(undefined8 param_1,int param_2)

{
  FUN_145be0290();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be0290 FUN_145be0290 body=76 status=ok
// SIG undefined FUN_145be0290(void)

void FUN_145be0290(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a170910;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145be02dc(param_1 + 5,1);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be02dc FUN_145be02dc body=128 status=ok
// SIG undefined FUN_145be02dc(void)

void FUN_145be02dc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145be035c FUN_145be035c body=40 status=ok
// SIG undefined FUN_145be035c(void)

undefined8 FUN_145be035c(undefined8 param_1,int param_2)

{
  FUN_145be0384();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be0384 FUN_145be0384 body=171 status=ok
// SIG undefined FUN_145be0384(void)

void FUN_145be0384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bddb270;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_145be045a(param_1 + 0x79);
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_145be042f(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145be042f FUN_145be042f body=43 status=ok
// SIG undefined FUN_145be042f(void)

void FUN_145be042f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1496eae74(param_1);
    param_1 = param_1 + 0x180;
  }
  return;
}



// FUNCTION 145be045a FUN_145be045a body=53 status=ok
// SIG undefined FUN_145be045a(void)

void FUN_145be045a(longlong *param_1)

{
  FUN_145be0490();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be0490 FUN_145be0490 body=343 status=ok
// SIG undefined FUN_145be0490(void)

void FUN_145be0490(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1496eb23e(*local_68 + (longlong)iStack_4c * 0x70 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be05e8 FUN_145be05e8 body=774 status=ok
// SIG undefined FUN_145be05e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be05e8(undefined8 param_1)

{
  void *pvVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145be08ef();
  FUN_145be17f3(&local_78);
  local_88 = param_1;
  FUN_14153841e(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ResolutionQuality",&local_78);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ViewDistanceQuality",&uStack_74);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.AntiAliasingQuality",&uStack_70);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ShadowQuality",&uStack_6c);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.GlobalIlluminationQuality",&local_68);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ReflectionQuality",&uStack_64);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.PostProcessQuality",&uStack_60);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.TextureQuality",&uStack_5c);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.EffectsQuality",&local_58);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.FoliageQuality",&uStack_54);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.ShadingQuality",&uStack_50);
  local_88 = param_1;
  FUN_1414d73b6(DAT_14c872ce0,L"ScalabilityGroups",L"sg.LandscapeQuality",&uStack_4c);
  pvVar1 = local_40;
  if (DAT_14cb02a29 == '\0') {
    FUN_145be1251(&local_78,0);
  }
  else {
    DAT_14cb029a8 = local_48;
    _DAT_14cb02998 = local_58;
    uRam000000014cb0299c = uStack_54;
    uRam000000014cb029a0 = uStack_50;
    uRam000000014cb029a4 = uStack_4c;
    _DAT_14cb02988 = local_68;
    uRam000000014cb0298c = uStack_64;
    uRam000000014cb02990 = uStack_60;
    uRam000000014cb02994 = uStack_5c;
    _DAT_14cb02978 = local_78;
    uRam000000014cb0297c = uStack_74;
    uRam000000014cb02980 = uStack_70;
    uRam000000014cb02984 = uStack_6c;
    _DAT_14cb029b8 = local_38;
    if (local_38 == 0 && DAT_14cb029bc == 0) {
      DAT_14cb029bc = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cb029b0,local_38);
      if (local_38 != 0) {
        memcpy(DAT_14cb029b0,pvVar1,(longlong)local_38 << 2);
      }
    }
    pvVar1 = local_30;
    _DAT_14cb029c8 = local_28;
    if (local_28 == 0 && DAT_14cb029cc == 0) {
      DAT_14cb029cc = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cb029c0,local_28);
      if (local_28 != 0) {
        memcpy(DAT_14cb029c0,pvVar1,(longlong)local_28 << 2);
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be08ef FUN_145be08ef body=2251 status=ok
// SIG undefined FUN_145be08ef(void)

void FUN_145be08ef(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  plVar1 = DAT_14cb02758;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb02a28 == '\0') {
    DAT_14cb02a28 = '\x01';
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fdf30;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02770;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fdff2;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02788;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe030;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb027a0;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe06e;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb027b8;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe0ac;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb027d0;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe0ea;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb027e8;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe128;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02800;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe166;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02818;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe1a4;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02830;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe1e2;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02848;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe220;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    plVar1 = DAT_14cb02860;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_1463fe25e;
    (**(code **)(*plVar1 + 200))(plVar1,&local_88);
    FUN_1449db362(&local_88);
    local_58 = 0xbf800000bf800000;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_141292034(&local_88,1);
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
    FUN_145be1251(&local_88,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0xbf800000bf800000;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_141292034(&local_88,1);
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
    FUN_145be11bc(&DAT_14cb02978,&local_88);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0xbf800000bf800000;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_141292034(&local_88,1);
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
    FUN_145be11bc(&DAT_14cb029d0,&local_88);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb02a29 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be11bc FUN_145be11bc body=149 status=ok
// SIG undefined FUN_145be11bc(void)

undefined4 * FUN_145be11bc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  return param_1;
}



// FUNCTION 145be1251 FUN_145be1251 body=1336 status=ok
// SIG undefined FUN_145be1251(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145be1251(undefined4 *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [39];
  byte local_101;
  int local_100;
  int local_fc;
  undefined1 local_f8 [56];
  longlong local_c0;
  longlong local_b0;
  undefined4 local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_70 = 0xbf800000bf800000;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_101 = param_2;
  FUN_141292034(&local_a0,1);
  local_a0 = *param_1;
  iVar1 = param_1[1];
  iVar5 = (**(code **)(*DAT_14cb02878 + 0xb0))();
  iStack_9c = iVar5 + -1;
  if (iVar1 < iVar5 + -1) {
    iStack_9c = iVar1;
  }
  if (iStack_9c < 1) {
    iStack_9c = 0;
  }
  iVar1 = param_1[2];
  iVar5 = (**(code **)(*DAT_14cb02890 + 0xb0))();
  iStack_98 = iVar5 + -1;
  if (iVar1 < iVar5 + -1) {
    iStack_98 = iVar1;
  }
  if (iStack_98 < 1) {
    iStack_98 = 0;
  }
  iVar1 = param_1[3];
  iVar5 = (**(code **)(*DAT_14cb028a8 + 0xb0))();
  iStack_94 = iVar5 + -1;
  if (iVar1 < iVar5 + -1) {
    iStack_94 = iVar1;
  }
  if (iStack_94 < 1) {
    iStack_94 = 0;
  }
  iVar1 = param_1[4];
  iVar5 = (**(code **)(*DAT_14cb028c0 + 0xb0))();
  local_fc = iVar5 + -1;
  if (iVar1 < iVar5 + -1) {
    local_fc = iVar1;
  }
  if (local_fc < 1) {
    local_fc = 0;
  }
  iVar1 = param_1[5];
  local_90 = local_fc;
  iVar5 = (**(code **)(*DAT_14cb028d8 + 0xb0))();
  local_100 = iVar5 + -1;
  if (iVar1 < iVar5 + -1) {
    local_100 = iVar1;
  }
  if (local_100 < 1) {
    local_100 = 0;
  }
  iVar1 = param_1[6];
  iStack_8c = local_100;
  iVar6 = (**(code **)(*DAT_14cb028f0 + 0xb0))();
  iVar5 = iVar6 + -1;
  if (iVar1 < iVar6 + -1) {
    iVar5 = iVar1;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar1 = param_1[7];
  iStack_88 = iVar5;
  iVar7 = (**(code **)(*DAT_14cb02908 + 0xb0))();
  iVar6 = iVar7 + -1;
  if (iVar1 < iVar7 + -1) {
    iVar6 = iVar1;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  iVar1 = param_1[8];
  iStack_84 = iVar6;
  iVar8 = (**(code **)(*DAT_14cb02920 + 0xb0))();
  iVar7 = iVar8 + -1;
  if (iVar1 < iVar8 + -1) {
    iVar7 = iVar1;
  }
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar1 = param_1[9];
  local_80 = iVar7;
  iVar9 = (**(code **)(*DAT_14cb02938 + 0xb0))();
  iVar8 = iVar9 + -1;
  if (iVar1 < iVar9 + -1) {
    iVar8 = iVar1;
  }
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  iVar1 = param_1[10];
  iStack_7c = iVar8;
  iVar10 = (**(code **)(*DAT_14cb02950 + 0xb0))();
  iVar9 = iVar10 + -1;
  if (iVar1 < iVar10 + -1) {
    iVar9 = iVar1;
  }
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  iVar1 = param_1[0xb];
  iStack_78 = iVar9;
  iVar11 = (**(code **)(*DAT_14cb02968 + 0xb0))();
  pvVar3 = local_68;
  iVar10 = iVar11 + -1;
  if (iVar1 < iVar11 + -1) {
    iVar10 = iVar1;
  }
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  iStack_74 = iVar10;
  if (((~DAT_14cb02a29 | local_101) & 1) == 0) {
    DAT_14cb029a8 = local_70;
    _DAT_14cb02998 = local_80;
    iRam000000014cb0299c = iStack_7c;
    iRam000000014cb029a0 = iStack_78;
    _DAT_14cb02988 = local_90;
    iRam000000014cb0298c = iStack_8c;
    iRam000000014cb02990 = iStack_88;
    iRam000000014cb02994 = iStack_84;
    _DAT_14cb02978 = local_a0;
    iRam000000014cb0297c = iStack_9c;
    iRam000000014cb02980 = iStack_98;
    iRam000000014cb02984 = iStack_94;
    iVar1 = (int)uStack_60;
    lVar12 = (longlong)(int)uStack_60;
    _DAT_14cb029b8 = (int)uStack_60;
    iRam000000014cb029a4 = iVar10;
    if ((int)uStack_60 == 0 && DAT_14cb029bc == 0) {
      DAT_14cb029bc = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cb029b0,uStack_60 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(DAT_14cb029b0,pvVar3,lVar12 << 2);
      }
    }
    pvVar3 = local_58;
    iVar1 = (int)uStack_50;
    _DAT_14cb029c8 = (int)uStack_50;
    lVar12 = (longlong)(int)uStack_50;
    if ((int)uStack_50 == 0 && DAT_14cb029cc == 0) {
      DAT_14cb029cc = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cb029c0,uStack_50 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(DAT_14cb029c0,pvVar3,lVar12 << 2);
      }
    }
  }
  FUN_145be17f3(local_f8);
  cVar4 = FUN_145be178a(local_f8,&local_a0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  bVar2 = local_101;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\x01' || bVar2 != 0) {
    uVar13 = CONCAT71((int7)((ulonglong)local_f8 >> 8),local_101);
    FUN_145be1919(local_a0,DAT_14cb029d0,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02768,iStack_9c,DAT_14cb029d4,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02780,iStack_98,DAT_14cb029d8,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02798,iStack_94,DAT_14cb029dc,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb027b0,local_fc,DAT_14cb029e0,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb027c8,local_100,DAT_14cb029e4,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb027e0,iVar5,DAT_14cb029e8,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb027f8,iVar6,DAT_14cb029ec,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02810,iVar7,DAT_14cb029f0,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02828,iVar8,DAT_14cb029f4,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02840,iVar9,DAT_14cb029f8,uVar13 & 0xffffffff);
    FUN_1414d7440(&DAT_14cb02858,iVar10,DAT_14cb029fc,uVar13 & 0xffffffff);
    FUN_145be19a0(&local_a0);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be178a FUN_145be178a body=105 status=ok
// SIG undefined FUN_145be178a(void)

undefined4 FUN_145be178a(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1]))
      || ((((param_1[2] != param_2[2] || (param_1[3] != param_2[3])) ||
           ((param_1[4] != param_2[4] || ((param_1[5] != param_2[5] || (param_1[6] != param_2[6]))))
           )) || (param_1[7] != param_2[7])))) ||
     (((param_1[8] != param_2[8] || (param_1[9] != param_2[9])) || (param_1[10] != param_2[10])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)param_1[0xb] >> 8),param_1[0xb] == param_2[0xb]);
  }
  return uVar1;
}



// FUNCTION 145be17f3 FUN_145be17f3 body=294 status=ok
// SIG undefined FUN_145be17f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145be17f3(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0xc) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_141292034(0,1);
  if (DAT_14cb02a29 == '\0') {
    *param_1 = *DAT_14cb02760;
    param_1[1] = *DAT_14cb02778;
    param_1[2] = *DAT_14cb02790;
    param_1[3] = *DAT_14cb027a8;
    param_1[4] = *DAT_14cb027c0;
    param_1[5] = *DAT_14cb027d8;
    param_1[6] = *DAT_14cb027f0;
    param_1[7] = *DAT_14cb02808;
    param_1[8] = *DAT_14cb02820;
    param_1[9] = *DAT_14cb02838;
    param_1[10] = *DAT_14cb02850;
    param_1[0xb] = *DAT_14cb02868;
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = DAT_14cb029a8;
    uVar4 = uRam000000014cb029a0;
    *(undefined8 *)(param_1 + 8) = _DAT_14cb02998;
    *(undefined8 *)(param_1 + 10) = uVar4;
    uVar4 = uRam000000014cb02990;
    *(undefined8 *)(param_1 + 4) = _DAT_14cb02988;
    *(undefined8 *)(param_1 + 6) = uVar4;
    uVar3 = uRam000000014cb02984;
    uVar2 = uRam000000014cb02980;
    uVar1 = uRam000000014cb0297c;
    *param_1 = _DAT_14cb02978;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    FUN_144a67f5c(param_1 + 0xe,&DAT_14cb029b0);
    FUN_144a67f5c(param_1 + 0x12,&DAT_14cb029c0);
  }
  return param_1;
}



// FUNCTION 145be1919 FUN_145be1919 body=135 status=ok
// SIG undefined FUN_145be1919(void)

void FUN_145be1919(float param_1,float param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = DAT_14cb02758;
  if (param_3 != '\0') {
    uVar1 = (**(code **)(*DAT_14cb02758 + 0x18))(DAT_14cb02758);
    uVar1 = uVar1 & 0xff000000;
LAB_145be1983:
    FUN_140635f48(plVar2,param_1,uVar1,0);
    return;
  }
  if ((param_2 < 0.0) || ((DAT_14cb02a29 & 1) == 0)) {
    fVar3 = (float)(**(code **)(*DAT_14cb02758 + 0xb8))();
    if ((fVar3 != param_1) || (NAN(fVar3) || NAN(param_1))) {
      uVar1 = 0x1000000;
      plVar2 = DAT_14cb02758;
      goto LAB_145be1983;
    }
  }
  return;
}



// FUNCTION 145be19a0 FUN_145be19a0 body=180 status=ok
// SIG undefined FUN_145be19a0(void)

void FUN_145be19a0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb02740;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cb0274c = DAT_14cb0274c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb02738 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb02738 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb0274c = DAT_14cb0274c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145be1a3d;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cb0274c = DAT_14cb0274c + -1;
LAB_145be1a3d:
  FUN_14474d06a(&DAT_14cb02738,0);
  return;
}



// FUNCTION 145be1a54 FUN_145be1a54 body=117 status=ok
// SIG undefined FUN_145be1a54(void)

undefined8 FUN_145be1a54(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 800) != 0) && (*(longlong *)(param_1 + 0x358) != 0)) {
    cVar2 = FUN_144729dda(param_1 + 0x350);
    if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x358), plVar1 != (longlong *)0x0)) {
      cVar2 = FUN_145be1aca(param_1,*(undefined1 *)(param_1 + 0x125));
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
        uVar3 = FUN_1414d837c(uVar3,*(undefined1 *)(*(longlong *)(param_1 + 800) + 0x40));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 145be1aca FUN_145be1aca body=124 status=ok
// SIG undefined FUN_145be1aca(void)

undefined8 FUN_145be1aca(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220) + 0xf0);
  if (lVar1 != 0) {
    cVar2 = '\x05';
    switch(param_2) {
    case '\x01':
    case '\x02':
      cVar2 = param_2;
      break;
    case '\x03':
      cVar2 = FUN_145be1b46(lVar1,3);
      cVar2 = cVar2 * '\x02' + '\x01';
      break;
    case '\x04':
      cVar2 = FUN_145be1b46(lVar1,4);
      cVar2 = cVar2 * '\x02' + '\x02';
      break;
    case '\x06':
      cVar2 = '\a';
    }
    uVar3 = FUN_145be1b46(lVar1,cVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 145be1b46 FUN_145be1b46 body=26 status=ok
// SIG undefined FUN_145be1b46(void)

undefined8 FUN_145be1b46(longlong param_1,byte param_2)

{
  if (param_2 < 6) {
    return CONCAT71((int7)((ulonglong)param_2 * 0x10 >> 8),
                    *(int *)(param_1 + 0xe0 + (ulonglong)param_2 * 0x10) != 0);
  }
  return 0;
}



// FUNCTION 145be1b60 FUN_145be1b60 body=97 status=ok
// SIG undefined FUN_145be1b60(void)

void FUN_145be1b60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1414d83b0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b730dd0;
  puVar1[5] = &PTR_FUN_14b731260;
  puVar1[6] = &PTR_LAB_14b7312a0;
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = &DAT_3f8000003f800000;
  puVar1[0x35] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 145be1bc1 FUN_145be1bc1 body=52 status=ok
// SIG undefined FUN_145be1bc1(void)

void FUN_145be1bc1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145be1bf6 FUN_145be1bf6 body=38 status=ok
// SIG undefined FUN_145be1bf6(void)

undefined8 FUN_145be1bf6(undefined8 param_1,int param_2)

{
  FUN_145be1c1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be1c1c FUN_145be1c1c body=73 status=ok
// SIG undefined FUN_145be1c1c(void)

void FUN_145be1c1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f18f98;
  FUN_1449db362(param_1 + 0x16);
  FUN_1449db362(param_1 + 0x13);
  FUN_1449db362(param_1 + 0xe);
  FUN_1449db362(param_1 + 7);
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 145be1c66 FUN_145be1c66 body=38 status=ok
// SIG undefined FUN_145be1c66(void)

undefined8 FUN_145be1c66(undefined8 param_1,int param_2)

{
  FUN_145be1c8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be1c8c FUN_145be1c8c body=125 status=ok
// SIG undefined FUN_145be1c8c(void)

void FUN_145be1c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa2ad50;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be1d12 FUN_145be1d12 body=155 status=ok
// SIG undefined FUN_145be1d12(void)

undefined8 * FUN_145be1d12(undefined8 *param_1)

{
  FUN_140e3421a();
  *param_1 = &PTR_FUN_14ae3c8c0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  return param_1;
}



// FUNCTION 145be1db8 FUN_145be1db8 body=152 status=ok
// SIG undefined FUN_145be1db8(void)

undefined8 * FUN_145be1db8(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b3e3950;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d180) {
    FUN_144b3d300(&DAT_14cb7d180);
    if (DAT_14cb7d180 == -1) {
      FUN_1446f470e(&DAT_14cb7d178,L"WaypointsChannel",1);
      _Init_thread_footer(&DAT_14cb7d180);
    }
  }
  param_1[8] = DAT_14cb7d178;
  return param_1;
}



// FUNCTION 145be1e50 FUN_145be1e50 body=40 status=ok
// SIG undefined FUN_145be1e50(void)

undefined8 FUN_145be1e50(undefined8 param_1,int param_2)

{
  FUN_145be1e78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be1e78 FUN_145be1e78 body=59 status=ok
// SIG undefined FUN_145be1e78(void)

void FUN_145be1e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb3aa80;
  FUN_145be1eb3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be1eb3 FUN_145be1eb3 body=64 status=ok
// SIG undefined FUN_145be1eb3(void)

void FUN_145be1eb3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145be1ef4 FUN_145be1ef4 body=1041 status=ok
// SIG undefined FUN_145be1ef4(void)

void FUN_145be1ef4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  int local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  int local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined5 local_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong alStack_80 [3];
  undefined8 local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140771728(*(undefined8 *)(param_1 + 0x2918),*(undefined4 *)(param_1 + 0x2920));
  *(undefined4 *)(param_1 + 0x2920) = 0;
  if (*(int *)(param_1 + 0x2924) != 0) {
    FUN_14592cc3a(param_1 + 0x2918);
  }
  lVar5 = FUN_1447210f0(param_1);
  if (lVar5 == 0) goto LAB_145be219a;
  lVar2 = *(longlong *)(param_1 + 0x28c8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar6 = *puVar7;
    lVar8 = FUN_144a61814(uVar6,(undefined8 *)(param_1 + 0x28c8));
    if (lVar8 != 0) {
      FUN_1405a424c(uVar6,lVar2);
    }
    *(undefined8 *)(param_1 + 0x28c8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x28d0);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar6 = *puVar7;
    lVar8 = FUN_144a61814(uVar6,(undefined8 *)(param_1 + 0x28d0));
    if (lVar8 != 0) {
      FUN_1405a424c(uVar6,lVar2);
    }
    *(undefined8 *)(param_1 + 0x28d0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x28c0) == 0) || (*(char *)(param_1 + 0x178) != '\x03'))
  goto LAB_145be219a;
  FUN_140a90258(param_1,alStack_80 + 2);
  if (alStack_80[2] == 0) {
LAB_145be1fb7:
    local_ec = local_ec & 0xffffff00;
    local_e8 = 0;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = DAT_14cb7bd68;
    local_c8 = DAT_14cb7bd70;
    local_c4 = DAT_14cb7bd80;
    local_bc = DAT_14cb7bd88;
    local_b8 = 0;
    uStack_b3 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    alStack_80[0] = 0;
    alStack_80[1] = 0;
    local_f8 = param_1;
    uVar4 = FUN_1414d8526(param_1);
    local_f0 = FUN_1414d842f(param_1,uVar4,&local_d8);
    local_ec = CONCAT31(local_ec._1_3_,1);
    plVar1 = (longlong *)(param_1 + 0x418);
    (**(code **)(*(longlong *)(param_1 + 0x418) + 0x48))(plVar1,&local_118);
    local_100 = local_118;
    FUN_1401533ba(&local_10c,&local_100,1);
    if (local_10c == 0) {
      local_c8 = DAT_14cb7bd70;
      local_d0 = DAT_14cb7bd68;
    }
    else {
      local_c8 = local_104;
      local_d0 = CONCAT44(uStack_108,local_10c);
    }
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_130);
    local_100 = local_130;
    FUN_1401533ba(&local_124,&local_100,1);
    if (local_124 == 0) {
      local_bc = DAT_14cb7bd88;
      local_c4 = DAT_14cb7bd80;
    }
    else {
      local_bc = local_11c;
      local_c4 = CONCAT44(uStack_120,local_124);
    }
    if (*(longlong *)(param_1 + 0x28c0) == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = *(undefined1 *)(*(longlong *)(param_1 + 0x28c0) + 0x595);
    }
    uVar6 = FUN_1414d846e(param_1);
    FUN_14485c47a(&local_e4,uVar6);
    lVar2 = *(longlong *)(param_1 + 0x28c0);
    local_98 = *(undefined8 *)(lVar2 + 0x530);
    uStack_90 = *(undefined8 *)(lVar2 + 0x538);
    local_88 = *(undefined8 *)(lVar2 + 0x540);
    lStack_a0 = param_1;
    FUN_144a787a6(alStack_80,lVar2 + 0x548);
    uVar6 = FUN_145be2306(param_1);
    local_138 = 0;
    FUN_1414d868d(lVar5,uVar6,&local_f8,param_1 + 0x2918);
    FUN_1414d8f88(param_1);
    if (alStack_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_138 = local_68;
    FUN_143d26f48(alStack_80[2],&local_f8,alStack_80[2] + 0x18);
    if ((char)local_f8 == '\x01') {
      if (local_ec == 0) goto LAB_145be1fb7;
    }
    else {
      cVar3 = FUN_140321d1a(&local_f8);
      if (cVar3 == '\0') goto LAB_145be1fb7;
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_145be219a:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be2306 FUN_145be2306 body=666 status=ok
// SIG undefined FUN_145be2306(void)

longlong FUN_145be2306(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x2940);
  if (lVar5 == 0) {
    uVar4 = FUN_1414d8654();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2940) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x2938);
  lVar6 = *(longlong *)(param_1 + 0x2948);
  if (lVar6 == 0) {
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x2948) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x2948) = lVar6;
        if (lVar6 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x2940);
          goto LAB_145be245d;
        }
      }
    }
    if (*(char *)(param_1 + 0x2648) == '\x01') {
      lVar5 = *(longlong *)(param_1 + 0x2658);
      if (lVar5 == 0) {
        uVar4 = FUN_1414d8654();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x2658) = lVar5;
      }
      if (*(longlong *)(param_1 + 0x2660) != 0) {
        return *(longlong *)(param_1 + 0x2660);
      }
      if (lVar5 == 0) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x2650) != 0) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x2650));
        }
        *(longlong *)(param_1 + 0x2660) = lVar5;
        return lVar5;
      }
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x28c0);
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = *(longlong *)(lVar5 + 0x480);
    if (lVar6 == 0) {
      uVar4 = FUN_1414d8654();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(lVar5 + 0x480) = lVar6;
    }
    if (*(longlong *)(lVar5 + 0x488) != 0) {
      return *(longlong *)(lVar5 + 0x488);
    }
    if (lVar6 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar5 + 0x478) != 0) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar5 + 0x478));
      }
      *(longlong *)(lVar5 + 0x488) = lVar6;
      return lVar6;
    }
    return 0;
  }
LAB_145be245d:
  if (lVar5 != 0) {
    return lVar6;
  }
  uVar4 = FUN_1414d8654();
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x2940) = lVar5;
  if (*(longlong *)(param_1 + 0x2948) != 0) {
    return *(longlong *)(param_1 + 0x2948);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*plVar1 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x2948) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 145be25aa FUN_145be25aa body=93 status=ok
// SIG undefined FUN_145be25aa(void)

void FUN_145be25aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be2608 FUN_145be2608 body=314 status=ok
// SIG undefined FUN_145be2608(void)

void FUN_145be2608(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_145be2742();
  lVar1 = FUN_144a883b6(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_14480f766(lVar1 + 0x7790);
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(lVar1 + 0x77a8);
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_14480f766(lVar1 + 0x6048);
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      FUN_1401073f6(lVar1 + 0x6038,param_1);
      FUN_1401073f6(lVar1 + 0x5fc0,param_1);
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3a20) + 0x10))(lVar1 + 0x3a20);
      FUN_140457ffc(uVar3,param_1);
    }
  }
  lVar1 = FUN_14011be0c(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1401073f6(lVar1 + 0x3b8,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145be2742 FUN_145be2742 body=135 status=ok
// SIG undefined FUN_145be2742(void)

void FUN_145be2742(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x58;
  cVar1 = FUN_14486ea84(lVar3);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = FUN_14008e0ae(lVar3);
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14480f766(lVar2 + 0x138);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar3 = FUN_14008e0ae(lVar3);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(lVar3 + 0x168);
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
  }
  return;
}



// FUNCTION 145be27ca FUN_145be27ca body=95 status=ok
// SIG undefined FUN_145be27ca(void)

longlong FUN_145be27ca(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145be282a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 145be282a FUN_145be282a body=150 status=ok
// SIG undefined FUN_145be282a(void)

longlong * FUN_145be282a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 145be28c0 FUN_145be28c0 body=40 status=ok
// SIG undefined FUN_145be28c0(void)

undefined8 FUN_145be28c0(undefined8 param_1,int param_2)

{
  FUN_145be28e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be28e8 FUN_145be28e8 body=69 status=ok
// SIG undefined FUN_145be28e8(void)

void FUN_145be28e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e7aa0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145be292e(param_1 + 0xe);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be292e FUN_145be292e body=53 status=ok
// SIG undefined FUN_145be292e(void)

void FUN_145be292e(longlong *param_1)

{
  FUN_145be2964();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be2964 FUN_145be2964 body=327 status=ok
// SIG undefined FUN_145be2964(void)

void FUN_145be2964(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be2aac FUN_145be2aac body=132 status=ok
// SIG undefined FUN_145be2aac(void)

void FUN_145be2aac(longlong param_1,int param_2)

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



// FUNCTION 145be2b32 FUN_145be2b32 body=189 status=ok
// SIG undefined FUN_145be2b32(void)

void FUN_145be2b32(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x810))(param_1,local_19);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetCurrentCharacterSelectPhase_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x818))(param_1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be2bf4 FUN_145be2bf4 body=52 status=ok
// SIG undefined FUN_145be2bf4(void)

void FUN_145be2bf4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf18) = param_2;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_145a09084(param_1);
    param_2 = *(undefined1 *)(param_1 + 0xf18);
  }
  FUN_145a08fc4(param_1,param_2);
  return;
}



// FUNCTION 145be2c28 FUN_145be2c28 body=2851 status=ok
// SIG undefined FUN_145be2c28(void)

void FUN_145be2c28(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_58 = L"ShadowMaskDesc";
    local_50 = 0xe;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"The final shadow mask that is used by shading");
    local_58 = L"ShadowMask";
    local_50 = 10;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Shadow Mask");
    local_80 = 1;
    local_88 = 0;
    FUN_145be374c(param_1,L"mask",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"ClipmapOrMipDesc";
    local_50 = 0x10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"The chosen clipmap (for directional lights) or mip (for local lights) level");
    local_58 = L"ClipmapOrMip";
    local_50 = 0xc;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Clipmap/Mip Level");
    local_80 = 2;
    local_88 = 0;
    FUN_145be374c(param_1,&DAT_14aaf2dde,&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"VirtualPageDesc";
    local_50 = 0xf;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"Visualization of the virtual page address");
    local_58 = L"VirtualPage";
    local_50 = 0xb;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Virtual Page");
    local_80 = 4;
    local_88 = 0;
    FUN_145be374c(param_1,L"vpage",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"CachedPageDesc";
    local_50 = 0xe;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Cached pages are tinted green, uncached are red. Pages where only the static page is cached (dynamic uncached) are blue."
                 );
    local_58 = L"CachedPage";
    local_50 = 10;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Cached Page");
    local_80 = 8;
    local_88 = 0;
    FUN_145be374c(param_1,L"cache",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"NaniteOverdrawDesc";
    local_50 = 0x12;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"Nanite overdraw into mapped pages");
    local_58 = L"NaniteOverdraw";
    local_50 = 0xe;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Nanite Overdraw");
    local_80 = 0x400;
    local_88 = 0;
    FUN_145be374c(param_1,L"naniteoverdraw",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"SMRTRayCountDesc";
    local_50 = 0x10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Rays evaluated per pixel: red is more, green is fewer. Penumbra regions require more rays and are more expensive."
                 );
    local_58 = L"SMRTRayCount";
    local_50 = 0xc;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"SMRT Ray Count");
    local_80 = 0x10;
    local_88 = 1;
    FUN_145be374c(param_1,L"raycount",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"DirtyPageDebugDesc";
    local_50 = 0x12;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"Show the pages marked as dirty.");
    local_58 = L"DirtyPage";
    local_50 = 9;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Dirty Page");
    local_80 = 0x80;
    local_88 = 1;
    FUN_145be374c(param_1,L"dirty",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"InvalidPageDebugDesc";
    local_50 = 0x14;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Show the pages marked for GPU-driven invalidation (World Position Offset).");
    local_58 = L"InvalidPage";
    local_50 = 0xb;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"GPU Invalidated Page");
    local_80 = 0x100;
    local_88 = 1;
    FUN_145be374c(param_1,L"invalid",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"MergedPageDebugDesc";
    local_50 = 0x13;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"Show the pages that were merged.");
    local_58 = L"MergedPage";
    local_50 = 10;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Merged Page");
    local_80 = 0x200;
    local_88 = 1;
    FUN_145be374c(param_1,L"merged",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"GeneralDebugDesc";
    local_50 = 0x10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"General-purpose debug for use during shader development");
    local_58 = L"GeneralDebug";
    local_50 = 0xc;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"General Debug");
    local_80 = 0x40;
    local_88 = 1;
    FUN_145be374c(param_1,L"debug",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"ClipmapVirtualSpaceDesc";
    local_50 = 0x17;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualization of the clipmap virtual address space and mapped pages");
    local_58 = L"ClipmapVirtualSpace";
    local_50 = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FVirtualShadowMapVisualizationData";
    local_50 = 0x22;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Clipmap Virtual Address Space");
    local_80 = 0x20;
    local_88 = 1;
    FUN_145be374c(param_1,L"clipmapvirtual",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    FUN_145be3cc0(param_1);
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be374c FUN_145be374c body=376 status=ok
// SIG undefined FUN_145be374c(void)

void FUN_145be374c(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_50,param_2,1);
  local_60 = &local_50;
  FUN_145be38c6(param_1 + 8,&local_44,&local_60);
  lVar1 = *(longlong *)(param_1 + 8) + (longlong)local_44 * 0x50;
  ppuVar4 = (undefined8 **)(lVar1 + 8);
  FUN_140056680(&local_60,param_2);
  if (ppuVar4 == &local_60) {
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*ppuVar4 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *ppuVar4 = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar1 + 0x10) = local_58;
    *(undefined4 *)(lVar1 + 0x14) = local_54;
  }
  *(undefined8 *)(lVar1 + 0x18) = local_50;
  plVar2 = (longlong *)*param_3;
  plVar3 = *(longlong **)(lVar1 + 0x20);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x20) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x28) = (int)param_3[1];
  plVar2 = (longlong *)*param_4;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x30) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x38) = (int)param_4[1];
  *(undefined1 *)(lVar1 + 0x40) = param_5;
  *(undefined4 *)(lVar1 + 0x44) = param_6;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be38c6 FUN_145be38c6 body=328 status=ok
// SIG undefined FUN_145be38c6(void)

undefined4 * FUN_145be38c6(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145be3bc4(param_1,local_48);
  FUN_145be3a10(param_3,local_40);
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145be3b1e(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x4c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1414d99f8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be3a10 FUN_145be3a10 body=165 status=ok
// SIG undefined FUN_145be3a10(void)

undefined8 FUN_145be3a10(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_58[2] = 0;
  plStack_40 = (longlong *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a5dc74();
  FUN_144a5dc74(&plStack_30);
  FUN_145be3ab6(param_2,*param_1,local_58);
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be3ab6 FUN_145be3ab6 body=104 status=ok
// SIG undefined FUN_145be3ab6(void)

undefined8 * FUN_145be3ab6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[3] = param_3[2];
  FUN_14023423e(param_1 + 4,param_3 + 3);
  FUN_14023423e(param_1 + 6,param_3 + 5);
  param_1[8] = param_3[7];
  return param_1;
}



// FUNCTION 145be3b1e FUN_145be3b1e body=166 status=ok
// SIG undefined FUN_145be3b1e(void)

undefined8 FUN_145be3b1e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          FUN_1459aaf36((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x48);
          FUN_147da488c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145be3bc4 FUN_145be3bc4 body=251 status=ok
// SIG undefined FUN_145be3bc4(void)

int * FUN_145be3bc4(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 145be3cc0 FUN_145be3cc0 body=950 status=ok
// SIG undefined FUN_145be3cc0(void)

void FUN_145be3cc0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = (longlong *)(param_1 + 8);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar6 = iStack_84;
      lVar4 = *local_a0;
      FUN_140056680(&local_68,&DAT_14a819d6a);
      iVar2 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_78,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar4 = (longlong)iVar6 * 0x50 + lVar4;
      iVar2 = *(int *)(lVar4 + 0x10);
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(&local_78,*(undefined8 *)(lVar4 + 8),iVar6);
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
  }
  puVar1 = (undefined8 *)(param_1 + 0x68);
  FUN_14020fad6(puVar1,
                L"When the viewport view-mode is set to \'Virtual Shadow Map Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
               );
  iVar2 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(puVar1,local_78,iVar2);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*puVar1;
  }
  local_a8 = 1;
  (**(code **)(*DAT_14c8407a8 + 8))
            (DAT_14c8407a8,L"r.Shadow.Virtual.Visualize",&DAT_149dfb77a,puVar7);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  local_a0 = (longlong *)0x0;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_1446efa72(&local_a0,0,2,0x10);
  local_98 = CONCAT44(local_98._4_4_,2);
  *local_a0 = (longlong)&PTR_LAB_14a1361f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_a0[2] = lVar5;
  *local_a0 = (longlong)&PTR_FUN_14aaf9a00;
  local_a0[3] = param_1;
  local_a8 = 1;
  (**(code **)(*plVar3 + 0x90))
            (plVar3,L"r.Shadow.Virtual.Visualize.NextLight",
             L"Set `r.Shadow.Virtual.Visualize.LightName` to the next light.",&local_a0);
  FUN_1449db362(&local_a0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  local_a0 = (longlong *)0x0;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_1446efa72(&local_a0,0,2,0x10);
  local_98 = CONCAT44(local_98._4_4_,2);
  *local_a0 = (longlong)&PTR_LAB_14a1361f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_a0[2] = lVar5;
  *local_a0 = (longlong)&PTR_FUN_14aaf9a70;
  local_a0[3] = param_1;
  local_a8 = 1;
  (**(code **)(*plVar3 + 0x90))
            (plVar3,L"r.Shadow.Virtual.Visualize.PrevLight",
             L"Set `r.Shadow.Virtual.Visualize.LightName` to the previous light.",&local_a0);
  FUN_1449db362(&local_a0);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be4078 FUN_145be4078 body=158 status=ok
// SIG undefined FUN_145be4078(void)

bool FUN_145be4078(longlong param_1,undefined8 param_2)

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



// FUNCTION 145be4118 FUN_145be4118 body=376 status=ok
// SIG undefined FUN_145be4118(void)

void FUN_145be4118(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [72];
  longlong *local_b0;
  int local_a8;
  longlong *local_a0;
  int local_98;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145be44b4(local_f8);
  FUN_1402815f4(param_1,&local_108);
  plVar3 = *(longlong **)(local_108 + 0x160);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (((longlong)(int)plVar3[1] != 0) && ((longlong)(int)plVar3[1] * 200 + *plVar3 != 200)) {
    FUN_145be45e0(local_f8);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    if ((int)plVar3[1] != 0) {
      FUN_145be4292(plVar3,(int)plVar3[1] + -1,1);
      if ((int)plVar3[1] != 0) goto LAB_145be41d7;
    }
    FUN_145be43ec(param_1);
  }
LAB_145be41d7:
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
  if (local_a0 != (longlong *)0x0 && local_98 != 0) {
    (**(code **)(*local_a0 + 0x60))
              (local_a0,param_2 + 0x30,*(longlong *)(param_2 + 0x20) == DAT_14cbd6408);
  }
  if ((local_a8 != 0) && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x60))(local_b0,param_2 + 0x20,*(undefined4 *)(param_2 + 0x28));
  }
  FUN_1459ddea2(local_f8);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be4292 FUN_145be4292 body=128 status=ok
// SIG undefined FUN_145be4292(void)

undefined8 FUN_145be4292(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Dst;
  
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)param_2)) {
    uVar2 = 0;
  }
  else {
    _Dst = (void *)((ulonglong)param_2 * 200 + *param_1);
    FUN_145be4312(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar3 = iVar1 - (param_2 + 1);
    if (iVar3 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 200),(longlong)iVar3 * 200);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (param_3 != '\0') {
      FUN_145be433c(param_1);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 145be4312 FUN_145be4312 body=41 status=ok
// SIG undefined FUN_145be4312(void)

void FUN_145be4312(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459ddea2(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 145be433c FUN_145be433c body=62 status=ok
// SIG undefined FUN_145be433c(void)

void FUN_145be433c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145be437a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 145be437a FUN_145be437a body=113 status=ok
// SIG undefined FUN_145be437a(void)

ulonglong FUN_145be437a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 200) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 200,8);
      uVar1 = uVar1 / 200;
    }
  }
  return uVar1;
}



// FUNCTION 145be43ec FUN_145be43ec body=199 status=ok
// SIG undefined FUN_145be43ec(void)

void FUN_145be43ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0xd98) != 0)) &&
       (*(longlong *)(lVar1 + 0xda0) != 0)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd95b8);
      uVar3 = FUN_140059518(param_1 + 0x44);
      lVar1 = FUN_1404960a8(uVar3);
      if (lVar1 != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
        FUN_14143c516(puVar4);
        *puVar4 = &PTR_FUN_14b9aca98;
        *(undefined1 *)(puVar4 + 4) = 0;
        FUN_14039144e(lVar1,puVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145be44b4 FUN_145be44b4 body=299 status=ok
// SIG undefined FUN_145be44b4(void)

int * FUN_145be44b4(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  *(longlong **)(param_1 + 2) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[4] = (int)plVar3[1];
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  *(longlong **)(param_1 + 6) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[8] = (int)plVar3[1];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  *(longlong **)(param_1 + 0x1e) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x20] = (int)plVar3[1];
  FUN_1400b22c2(param_1 + 0x22,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x26) = 0;
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2a] = (int)plVar3[1];
  param_1[0x2c] = 0;
  FUN_1446ddc76(param_1 + 0x2d,&DAT_14b6bcef8,1);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  iVar2 = DAT_14cbd6d8c + 1;
  *param_1 = DAT_14cbd6d8c;
  DAT_14cbd6d8c = iVar2;
  return param_1;
}



// FUNCTION 145be45e0 FUN_145be45e0 body=369 status=ok
// SIG undefined FUN_145be45e0(void)

undefined4 * FUN_145be45e0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  plVar2 = *(longlong **)(param_1 + 2);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 2) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[4] = param_2[4];
  plVar1 = *(longlong **)(param_2 + 6);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[8] = param_2[8];
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  FUN_145be4752(param_1 + 0xe,param_2 + 0xe);
  FUN_1459de186(param_1 + 0x12,param_2 + 0x12);
  FUN_1459de204(param_1 + 0x16,param_2 + 0x16);
  uVar3 = param_2[0x1b];
  uVar4 = param_2[0x1c];
  uVar5 = param_2[0x1d];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar3;
  param_1[0x1c] = uVar4;
  param_1[0x1d] = uVar5;
  plVar1 = *(longlong **)(param_2 + 0x1e);
  plVar2 = *(longlong **)(param_1 + 0x1e);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x1e) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x20] = param_2[0x20];
  FUN_144a787a6(param_1 + 0x22,param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x2a] = param_2[0x2a];
  uVar6 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 145be4752 FUN_145be4752 body=93 status=ok
// SIG undefined FUN_145be4752(void)

undefined8 * FUN_145be4752(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e0067b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1459de124(param_1,iVar1);
      FUN_14143c535(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145be47b0 FUN_145be47b0 body=79 status=ok
// SIG undefined FUN_145be47b0(void)

undefined8 * FUN_145be47b0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145c4cb64(param_1,iVar1);
      FUN_141502622(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145be4800 FUN_145be4800 body=343 status=ok
// SIG undefined FUN_145be4800(void)

void FUN_145be4800(char *param_1,float param_2,float param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (*param_1 == '\x01') {
    param_1 = param_1 + 0x30;
    cVar2 = FUN_14486ea84(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_14008e0ae(param_1);
      FUN_1414daa56(uVar1,param_2,param_3);
      if (param_4 == '\x01' && param_3 < 1.0) {
        lVar3 = FUN_14008e0ae(param_1);
        fVar5 = *(float *)(lVar3 + 0x30) - *(float *)(lVar3 + 0x24);
        if (param_3 < (float)(-(uint)(fVar5 != 0.0) &
                             (uint)((*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)) / fVar5)))
        {
          uVar1 = FUN_14008e0ae(param_1);
          FUN_14008e202(uVar1,param_3);
          return;
        }
      }
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x54) * param_3;
    fVar5 = param_2 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x74);
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    *(float *)(param_1 + 0x78) = fVar5;
    FUN_14020a6cc(param_1 + 0x70,1);
    if (param_4 == '\x01' && param_3 < 1.0) {
      fVar5 = (float)FUN_14055848a(param_1);
      if (param_3 < fVar5) {
        *(float *)(param_1 + 0x78) = param_3 * *(float *)(param_1 + 0x74);
        FUN_14020a6cc(param_1 + 0x70,1);
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_14036aa80();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145be4958 FUN_145be4958 body=40 status=ok
// SIG undefined FUN_145be4958(void)

undefined8 FUN_145be4958(undefined8 param_1,int param_2)

{
  FUN_145be4980();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be4980 FUN_145be4980 body=225 status=ok
// SIG undefined FUN_145be4980(void)

void FUN_145be4980(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af08490;
  param_1[6] = &PTR_FUN_14af08770;
  param_1[7] = &PTR_FUN_14af08790;
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbe] != 0) {
    plVar1 = param_1 + 0xc2;
    if ((longlong *)param_1[0xc0] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc0];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145a45466(param_1 + 0x85);
  FUN_145be4ae8(param_1 + 0x26);
  FUN_145be4a62(param_1 + 0x10);
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145be4a62 FUN_145be4a62 body=80 status=ok
// SIG undefined FUN_145be4a62(void)

void FUN_145be4a62(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_145be4ab2(param_1);
  return;
}



// FUNCTION 145be4ab2 FUN_145be4ab2 body=53 status=ok
// SIG undefined FUN_145be4ab2(void)

void FUN_145be4ab2(longlong *param_1)

{
  FUN_145be4c34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145be4ae8 FUN_145be4ae8 body=172 status=ok
// SIG undefined FUN_145be4ae8(void)

void FUN_145be4ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af12bd0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x4e);
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145be4b94(param_1);
  return;
}



// FUNCTION 145be4b94 FUN_145be4b94 body=159 status=ok
// SIG undefined FUN_145be4b94(void)

void FUN_145be4b94(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af12b50;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x000145be4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145be4c34 FUN_145be4c34 body=90 status=ok
// SIG undefined FUN_145be4c34(void)

void FUN_145be4c34(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145be4c8e FUN_145be4c8e body=48 status=ok
// SIG undefined FUN_145be4c8e(void)

void FUN_145be4c8e(undefined8 param_1,undefined4 param_2)

{
  FUN_145be4cfc();
  FUN_145be4cbe(param_1);
  FUN_145be4d6c(param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 145be4cbe FUN_145be4cbe body=61 status=ok
// SIG undefined FUN_145be4cbe(void)

void FUN_145be4cbe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_14011c706(lVar1);
    if (lVar1 != 0) {
      FUN_145a00c8a(lVar1,param_1 + 0x390);
      return;
    }
  }
  return;
}



// FUNCTION 145be4cfc FUN_145be4cfc body=82 status=ok
// SIG undefined FUN_145be4cfc(void)

void FUN_145be4cfc(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x438) == '\x01')) {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_140995560(lVar1);
      if (lVar1 != 0) {
        FUN_145be4d4e(lVar1,param_1 + 0x400);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145be4d4e FUN_145be4d4e body=29 status=ok
// SIG undefined FUN_145be4d4e(void)

void FUN_145be4d4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14148624c();
  FUN_145be5096(uVar1,param_2);
  return;
}



// FUNCTION 145be4d6c FUN_145be4d6c body=99 status=ok
// SIG undefined FUN_145be4d6c(void)

void FUN_145be4d6c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,&DAT_149dfb77a);
  FUN_145be4dd0(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be4dd0 FUN_145be4dd0 body=203 status=ok
// SIG undefined FUN_145be4dd0(void)

void FUN_145be4dd0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_144a787a6(param_1 + 0x440);
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_1403ca142();
    if (((*(longlong *)(lVar2 + 0x1f0) != 0) &&
        ((((lVar3 != 0 && (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0x10), lVar2 != 0))
          && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (plVar4 = (longlong *)FUN_14021f720(), plVar4 != (longlong *)0x0)))))) &&
       ((DAT_14c9a1ab0 == 0 || (4 < *(int *)(DAT_14c9a1ab0 + 0x578) - 1U)))) {
      if ((*(int *)((longlong)plVar4 + 0xec) != 0) || (cVar1 = FUN_145be5070(), cVar1 != '\0')) {
        (**(code **)(*plVar4 + 0x2d0))(plVar4);
      }
      FUN_145be4e9c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145be4e9c FUN_145be4e9c body=467 status=ok
// SIG undefined FUN_145be4e9c(void)

undefined8 FUN_145be4e9c(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  lVar3 = FUN_1447210f0();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar4 = FUN_1403ca142();
    if ((*(longlong *)(lVar3 + 0x1f0) != 0) &&
       ((((lVar4 != 0 && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0x10), lVar3 != 0))
         && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      plVar5 = (longlong *)FUN_14021f720();
      if ((plVar5 != (longlong *)0x0) && (*(int *)((longlong)plVar5 + 0xec) == 0)) {
        cVar2 = FUN_145be5070();
        if ((cVar2 == '\0') && (*(char *)((longlong)plVar5 + 0xa1) != '\x01')) {
          if (1 < *(int *)(param_1 + 0x448)) {
            FUN_148d6600a(plVar5,param_1 + 0x440);
            local_38 = FUN_148d7f104;
            local_30 = local_30 & 0xffffffff00000000;
            FUN_148d7f004(plVar5 + 8,local_48,param_1,&local_38);
            local_38 = FUN_1441aa1c4;
            local_30 = local_30 & 0xffffffff00000000;
            FUN_148d7f004(plVar5 + 0xb,local_48,param_1,&local_38);
            (**(code **)(*plVar5 + 0x2d8))(plVar5);
          }
          if (((*(longlong *)(param_1 + 0x450) != 0) && (*(longlong *)(param_1 + 0x458) != 0)) &&
             (0 < *(int *)(*(longlong *)(param_1 + 0x458) + 8))) {
            FUN_1401cb356();
            local_38 = *(code **)(param_1 + 0x450);
            local_30 = *(ulonglong *)(param_1 + 0x458);
            if (local_30 != 0) {
              LOCK();
              *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
              UNLOCK();
            }
            FUN_140d61352(&local_38);
            plVar5 = *(longlong **)(param_1 + 0x458);
            *(undefined8 *)(param_1 + 0x450) = 0;
            *(undefined8 *)(param_1 + 0x458) = 0;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
            }
          }
          uVar6 = 0;
          goto LAB_145be4f5b;
        }
      }
    }
  }
  FUN_1441a9f7e(&local_40);
  uVar6 = 1;
LAB_145be4f5b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145be5070 FUN_145be5070 body=38 status=ok
// SIG undefined FUN_145be5070(void)

undefined8 FUN_145be5070(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1414dac37();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145be5088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145be5096 FUN_145be5096 body=565 status=ok
// SIG undefined FUN_145be5096(void)

void FUN_145be5096(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  uint local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_145be51e0;
  FUN_14014e996(param_2,local_58,1,0);
  if ((longlong)*(int *)(param_1 + 0x6d0) != 0) {
    lVar3 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x6c8) + lVar3) == local_58[0]) {
        if (*(int *)(param_1 + 0x730) == *(int *)(param_1 + 0x75c)) goto LAB_145be51b0;
        lVar3 = param_1 + 0x760;
        if (*(longlong *)(param_1 + 0x768) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x768);
        }
        iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x770) - 1U & local_58[0]) * 4);
        if (iVar5 == -1) goto LAB_145be51b0;
        lVar3 = *(longlong *)(param_1 + 0x728);
        goto LAB_145be5150;
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x6d0) * 0x28 != lVar3);
  }
  goto LAB_145be51d6;
  while (iVar5 = *(int *)(lVar1 + 0x30), iVar5 != -1) {
LAB_145be5150:
    lVar1 = lVar3 + (longlong)iVar5 * 0x38;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x38) == local_58[0]) {
      if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0x28) != (undefined8 *)0x0)) {
        uVar2 = FUN_1447210f0(param_1);
        lVar3 = FUN_140149a73(uVar2,0);
        if ((lVar3 != 0) && (plVar4 = (longlong *)FUN_1401499e8(lVar3), plVar4 != (longlong *)0x0))
        {
          (**(code **)(*plVar4 + 0x78))(plVar4,param_2,*(undefined8 *)(lVar1 + 0x28));
        }
        FUN_145be52cc((longlong *)(param_1 + 0x728),local_58);
      }
      break;
    }
  }
LAB_145be51b0:
  if (*(int *)(param_1 + 0x780) != *(int *)(param_1 + 0x7ac)) {
    lVar3 = param_1 + 0x7b0;
    if (*(longlong *)(param_1 + 0x7b8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x7b8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x7c0) - 1U & local_58[0]) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x778);
      do {
        lVar1 = lVar3 + (longlong)iVar5 * 0x38;
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0x38) == local_58[0]) {
          if ((longlong *)(lVar1 + 0x28) != (longlong *)0x0 && lVar1 != 0) {
            lVar3 = FUN_14620cfe0(param_1,param_2);
            if ((lVar3 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
              FUN_14480f766(lVar3 + 0x350);
            }
            FUN_145be52cc((longlong *)(param_1 + 0x778),local_58);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
    }
  }
  FUN_1411abf60(param_1,param_2);
  FUN_145be531c(param_1 + 0x6c8,local_58);
LAB_145be51d6:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_145be51e0:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145be52cc FUN_145be52cc body=79 status=ok
// SIG undefined FUN_145be52cc(void)

void FUN_145be52cc(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_2) {
          FUN_145be5496();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145be531c FUN_145be531c body=88 status=ok
// SIG undefined FUN_145be531c(void)

void FUN_145be531c(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  
  if ((longlong)(int)param_1[1] != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*param_1 + uVar1) == *param_2) {
        if ((int)(uVar1 >> 3) * -0x33333333 == -1) {
          return;
        }
        FUN_145be5422(param_1);
        FUN_145be5374(param_1);
        return;
      }
      uVar1 = uVar1 + 0x28;
    } while ((longlong)(int)param_1[1] * 0x28 != uVar1);
  }
  return;
}



// FUNCTION 145be5374 FUN_145be5374 body=62 status=ok
// SIG undefined FUN_145be5374(void)

void FUN_145be5374(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145be53b2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 145be53b2 FUN_145be53b2 body=111 status=ok
// SIG undefined FUN_145be53b2(void)

ulonglong FUN_145be53b2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x28) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 145be5422 FUN_145be5422 body=115 status=ok
// SIG undefined FUN_145be5422(void)

void FUN_145be5422(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x28);
  FUN_1456d172d(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x28),(longlong)iVar3 * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145be5496 FUN_145be5496 body=125 status=ok
// SIG undefined FUN_145be5496(void)

void FUN_145be5496(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x38 + 0x30);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x30);
  if (*(longlong *)(*param_1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145be5514(param_1,param_2);
  return;
}



// FUNCTION 145be5514 FUN_145be5514 body=118 status=ok
// SIG undefined FUN_145be5514(void)

void FUN_145be5514(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 145be558a FUN_145be558a body=53 status=ok
// SIG undefined FUN_145be558a(void)

void FUN_145be558a(void)

{
  if (DAT_14c9518c8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c9518c8)(DAT_14c9518c8,1);
  }
  DAT_14c9518c8 = (undefined8 *)0x0;
  FUN_1447f69b6(&DAT_14c9518b0);
  return;
}



// FUNCTION 145be55c0 FUN_145be55c0 body=29 status=ok
// SIG undefined FUN_145be55c0(void)

undefined8 FUN_145be55c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145be55de FUN_145be55de body=49 status=ok
// SIG undefined FUN_145be55de(void)

undefined8 FUN_145be55de(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140056680(param_2,L"TSoftObjectPtr<UObject>");
  }
  else {
    FUN_145be5610(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 145be5610 FUN_145be5610 body=223 status=ok
// SIG undefined FUN_145be5610(void)

undefined8 FUN_145be5610(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xe] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145be56f0 FUN_145be56f0 body=55 status=ok
// SIG undefined FUN_145be56f0(void)

undefined8
FUN_145be56f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FUN_140002266(param_2,L"TSoftObjectPtr<%s>",puVar1);
  return param_2;
}


