// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484dc0a8 thunk_FUN_1484dc0f4 body=5 status=ok
// SIG undefined thunk_FUN_1484dc0f4(void)

void thunk_FUN_1484dc0f4(void)

{
  FUN_1484dc0f4();
  return;
}



// FUNCTION 1484dc0b2 FUN_1484dc0b2 body=5 status=ok
// SIG undefined FUN_1484dc0b2(void)

longlong FUN_1484dc0b2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484dc0b8 FUN_1484dc0b8 body=29 status=ok
// SIG undefined FUN_1484dc0b8(void)

void FUN_1484dc0b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484dc0d6 FUN_1484dc0d6 body=29 status=ok
// SIG undefined FUN_1484dc0d6(void)

undefined8 FUN_1484dc0d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484dc0f4 FUN_1484dc0f4 body=347 status=ok
// SIG undefined FUN_1484dc0f4(void)

void FUN_1484dc0f4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  uVar7 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar9 = 0;
  if ((uVar7 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar5 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar5) break;
      uVar6 = uVar5 >> 9;
      uVar8 = uVar5 & 0x1ff;
      uVar9 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    lVar2 = param_1[1];
    do {
      local_4c = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar9 * 4);
      lVar3 = *(longlong *)param_1[2];
      uVar4 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],&local_4c);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
       (ulonglong)(uVar9 & 0x1ff) * 4) = uVar4;
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar5 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar5 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar5;
    } while (uVar9 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484dc250 thunk_FUN_1484dc29c body=5 status=ok
// SIG undefined thunk_FUN_1484dc29c(void)

void thunk_FUN_1484dc29c(void)

{
  FUN_1484dc29c();
  return;
}



// FUNCTION 1484dc25a FUN_1484dc25a body=5 status=ok
// SIG undefined FUN_1484dc25a(void)

longlong FUN_1484dc25a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484dc260 FUN_1484dc260 body=29 status=ok
// SIG undefined FUN_1484dc260(void)

void FUN_1484dc260(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484dc27e FUN_1484dc27e body=29 status=ok
// SIG undefined FUN_1484dc27e(void)

undefined8 FUN_1484dc27e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484dc29c FUN_1484dc29c body=485 status=ok
// SIG undefined FUN_1484dc29c(void)

void FUN_1484dc29c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [48];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)*param_1;
  lVar3 = FUN_146bcdc68(*(undefined8 *)(param_1[2] + 0x208),DAT_14c99c780);
  if (lVar3 != 0) {
    lVar2 = param_1[2];
    uVar8 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
    uVar9 = 0;
    if ((uVar8 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar5 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar5) break;
        uVar6 = uVar5 >> 9;
        uVar7 = uVar5 & 0x1ff;
        uVar9 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar6] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar9 != uVar8) {
      do {
        lVar4 = (longlong)*(int *)(*plVar1 + (longlong)(int)uVar9 * 4) * 0x30;
        local_b8 = 0xc00000002;
        uStack_b0 = 0x10000000001;
        local_70 = 0;
        local_68 = 0xc00000000;
        local_a8 = local_a0;
        FUN_1484ac716(&local_a8,*(longlong *)(param_1[1] + 0x80) + lVar4,
                      *(longlong *)(param_1[1] + 0x80) + lVar4 + 0x18,&local_b8);
        FUN_146bea50a((ulonglong)((uVar9 & 0x1ff) << 6) +
                      *(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar9 >> 9) * 8),
                      local_a0);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar8) {
          uVar10 = uVar8;
        }
        do {
          uVar5 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar5 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar2 + 0x28) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar5;
      } while (uVar9 != uVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484dc482 thunk_FUN_1484dc4ce body=5 status=ok
// SIG undefined thunk_FUN_1484dc4ce(void)

void thunk_FUN_1484dc4ce(void)

{
  FUN_1484dc4ce();
  return;
}



// FUNCTION 1484dc48c FUN_1484dc48c body=5 status=ok
// SIG undefined FUN_1484dc48c(void)

longlong FUN_1484dc48c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484dc492 FUN_1484dc492 body=29 status=ok
// SIG undefined FUN_1484dc492(void)

void FUN_1484dc492(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484dc4b0 FUN_1484dc4b0 body=29 status=ok
// SIG undefined FUN_1484dc4b0(void)

undefined8 FUN_1484dc4b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484dc4ce FUN_1484dc4ce body=403 status=ok
// SIG undefined FUN_1484dc4ce(void)

void FUN_1484dc4ce(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar10 = 0xc;
    lVar11 = 0;
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x310))();
      if (lVar7 < *(int *)(lVar3 + 8)) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x20) + 0x310))();
        uVar5 = *(undefined8 *)(*plVar4 + lVar11);
      }
      else {
        uVar5 = 0;
      }
      *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + lVar7 * 8) = uVar5;
      lVar1 = *(longlong *)(param_1 + 8);
      lVar6 = *(longlong *)(param_1 + 0x20);
      lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x310))();
      uVar2 = 0xffffffff;
      if (lVar7 < *(int *)(lVar3 + 8)) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x20) + 0x310))();
        uVar2 = *(undefined4 *)(*plVar4 + 8 + lVar11);
      }
      *(undefined4 *)(*(longlong *)(lVar6 + 0x18) + lVar7 * 4) = uVar2;
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar6 = *(longlong *)(param_1 + 8);
      lVar3 = (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x310))();
      puVar9 = local_c8;
      if (lVar7 < *(int *)(lVar3 + 8)) {
        lVar3 = (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x310))();
        lVar6 = 0xc;
        puVar8 = (undefined8 *)(lVar11 * 8 + *(longlong *)(lVar3 + 0x10));
      }
      else {
        lVar6 = 0xc;
        puVar8 = &DAT_14c846480;
      }
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar9 = local_c8;
      puVar8 = (undefined8 *)(lVar11 * 8 + *(longlong *)(lVar1 + 0x18));
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar9 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) + -0xc + lVar10);
      *puVar9 = &DAT_3f8000003f800000;
      puVar9[1] = &DAT_3f8000003f800000;
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + 0xc;
      lVar10 = lVar10 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x38));
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dc662 FUN_1484dc662 body=122 status=ok
// SIG undefined FUN_1484dc662(void)

uint FUN_1484dc662(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 4);
  lVar5 = (longlong)iVar1;
  uVar2 = (uint)*(ushort *)
                 (*(longlong *)
                   (*(longlong *)
                     (**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8) +
                   0x10) + lVar5 * 0xf8);
  if (((-1 < lVar5) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10))) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + lVar5 * 4) != -1)) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x3b8))();
    uVar4 = *(int *)(lVar3 + 8) - 1;
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + lVar5 * 4);
    if ((int)uVar2 < (int)uVar4) {
      uVar4 = uVar2;
    }
    uVar2 = 0;
    if (0 < (int)uVar4) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}



// FUNCTION 1484dc6dc FUN_1484dc6dc body=229 status=ok
// SIG undefined FUN_1484dc6dc(void)

int * FUN_1484dc6dc(longlong *param_1,int *param_2)

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



// FUNCTION 1484dc7c2 FUN_1484dc7c2 body=333 status=ok
// SIG undefined FUN_1484dc7c2(void)

int * FUN_1484dc7c2(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1406cd6a8(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x40) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x40) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x40) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x40;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x40) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x40) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 1484dc910 FUN_1484dc910 body=114 status=ok
// SIG undefined FUN_1484dc910(void)

void FUN_1484dc910(longlong *param_1,int param_2)

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



// FUNCTION 1484dc982 FUN_1484dc982 body=95 status=ok
// SIG undefined FUN_1484dc982(void)

void FUN_1484dc982(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1484dc9e2 FUN_1484dc9e2 body=242 status=ok
// SIG undefined FUN_1484dc9e2(void)

void FUN_1484dc9e2(longlong param_1,int param_2,double *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  uVar8 = param_2 * 3 + 1;
  uVar8 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  uVar6 = param_2 * 3 + 2;
  uVar6 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)(param_1 + 0x48);
    *(double *)(param_4 + lVar7 * 8) =
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar6 >> 7 & 0x7fffff) * 8) +
                            (ulonglong)((uVar6 & 0x7f) << 4) + lVar7 * 4) * dVar3 +
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar8 >> 7 & 0x7fffff) * 8) +
                            (ulonglong)((uVar8 & 0x7f) << 4) + lVar7 * 4) * dVar2 +
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 7 & 0x7fffff) * 8) +
                            (ulonglong)((uVar4 & 0x7f) << 4) + lVar7 * 4) * dVar1;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return;
}



// FUNCTION 1484dcad4 FUN_1484dcad4 body=628 status=ok
// SIG undefined FUN_1484dcad4(void)

void FUN_1484dcad4(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5,double *param_6)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    local_e0 = *param_2;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0x10) + (ulonglong)(*(uint *)(local_e0 + lVar9) >> 9) * 8);
      uVar8 = (ulonglong)(*(uint *)(local_e0 + lVar9) & 0x1ff);
      pdVar1 = (double *)(lVar3 + uVar8 * 0x18);
      local_c0 = (&DAT_14c758c60)[param_4 >> 0x10 & 0xff];
      local_bc = (&DAT_14c758c60)[param_4 >> 8 & 0xff];
      local_b8 = (&DAT_14c758c60)[param_4 & 0xff];
      dVar11 = *pdVar1 * param_6[8];
      dVar12 = pdVar1[1] * param_6[9];
      dVar10 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18) * param_6[10];
      dVar4 = *param_6;
      dVar5 = param_6[1];
      dVar6 = param_6[2];
      dVar2 = param_6[3];
      dVar13 = dVar12 * dVar4 - dVar11 * dVar5;
      dVar14 = dVar10 * dVar5 - dVar12 * dVar6;
      dVar15 = dVar11 * dVar6 - dVar4 * dVar10;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar12 = (dVar6 * dVar14 - dVar4 * dVar13) + param_6[3] * dVar15 + dVar12 + param_6[5];
      local_c8 = dVar13 * dVar2 + dVar10 + (dVar15 * dVar4 - dVar14 * dVar5) + param_6[6];
      local_d8._8_4_ = SUB84(dVar12,0);
      local_d8._0_8_ = (dVar13 * dVar5 - dVar15 * dVar6) + dVar2 * dVar14 + dVar11 + param_6[4];
      local_d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_e8 = 0;
      local_b4 = (float)(param_4 >> 0x18) * 0.003921569;
      (**(code **)(*param_5 + 0x40))(param_5,local_d8,&local_c0,param_3);
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar9);
  }
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dcd49 FUN_1484dcd49 body=628 status=ok
// SIG undefined FUN_1484dcd49(void)

void FUN_1484dcd49(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    local_100 = *param_2;
    lVar6 = 0;
    do {
      FUN_146c149e0(param_1,&local_c8,*(undefined4 *)(local_100 + lVar6));
      local_d8 = (&DAT_14c758c60)[param_4 >> 0x10 & 0xff];
      local_d4 = (&DAT_14c758c60)[param_4 >> 8 & 0xff];
      local_d0 = (&DAT_14c758c60)[param_4 & 0xff];
      dVar8 = local_c8 * param_6[8];
      dVar9 = dStack_c0 * param_6[9];
      dVar7 = local_b8 * param_6[10];
      dVar2 = *param_6;
      dVar3 = param_6[1];
      dVar4 = param_6[2];
      dVar1 = param_6[3];
      dVar10 = dVar9 * dVar2 - dVar8 * dVar3;
      dVar11 = dVar7 * dVar3 - dVar9 * dVar4;
      dVar12 = dVar8 * dVar4 - dVar2 * dVar7;
      dVar11 = dVar11 + dVar11;
      dVar12 = dVar12 + dVar12;
      dVar10 = dVar10 + dVar10;
      dVar9 = (dVar4 * dVar11 - dVar2 * dVar10) + param_6[3] * dVar12 + dVar9 + param_6[5];
      local_e8 = dVar10 * dVar1 + dVar7 + (dVar12 * dVar2 - dVar11 * dVar3) + param_6[6];
      local_f8._8_4_ = SUB84(dVar9,0);
      local_f8._0_8_ = (dVar10 * dVar3 - dVar12 * dVar4) + dVar1 * dVar11 + dVar8 + param_6[4];
      local_f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_108 = 0;
      local_cc = (float)(param_4 >> 0x18) * 0.003921569;
      (**(code **)(*param_5 + 0x40))(param_5,local_f8,&local_d8,param_3);
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar6);
  }
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dcfbe FUN_1484dcfbe body=2104 status=ok
// SIG undefined FUN_1484dcfbe(void)

void FUN_1484dcfbe(undefined4 *param_1,int param_2,double param_3,undefined4 param_4,uint param_5,
                  byte param_6,longlong *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_278 [32];
  byte local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined1 local_240;
  byte local_229;
  float local_228;
  int local_224;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_f8 = *(double *)(param_1 + 0xc);
  local_128 = *param_1;
  uStack_124 = param_1[1];
  uStack_120 = param_1[2];
  uStack_11c = param_1[3];
  local_118 = *(double *)(param_1 + 4);
  dStack_110 = *(double *)(param_1 + 6);
  local_108 = param_1[8];
  uStack_104 = param_1[9];
  uStack_100 = param_1[10];
  uStack_fc = param_1[0xb];
  local_220 = param_3;
  FUN_1483bed02(&local_128,param_8);
  if (1 < param_2) {
    dVar3 = (double)CONCAT44(uStack_104,local_108);
    dVar4 = (double)CONCAT44(uStack_fc,uStack_100);
    dVar1 = dVar4 + dVar4;
    dVar2 = dVar3 + dVar3;
    local_178 = dVar1 * dStack_110 - dVar2 * local_f8;
    local_188 = dVar1 * local_f8 + dVar2 * dStack_110;
    local_190 = 1.0 - (dVar3 * dVar2 + dVar4 * dVar1);
    local_170 = dVar1 * dVar3 + local_f8 * (dStack_110 + dStack_110);
    local_198 = 1.0 - ((dStack_110 + dStack_110) * dStack_110 + dVar4 * dVar1);
    local_180 = dVar2 * dStack_110 - dVar1 * local_f8;
    local_1d0 = (double)CONCAT44(uStack_11c,uStack_120);
    dVar1 = (double)(param_2 + -1) * local_220 * 0.5;
    local_1b0 = local_118 - dVar1 * local_170;
    local_1b8 = local_1d0 - dVar1 * local_198;
    local_1a0 = dVar1 * local_170 + local_118;
    local_1a8 = dVar1 * local_198 + local_1d0;
    local_1c8 = local_118 - dVar1 * local_178;
    local_1c0 = dVar1 * local_178 + local_118;
    local_1d8 = local_1d0 - dVar1 * local_188;
    local_1d0 = dVar1 * local_188 + local_1d0;
    local_210 = (double)CONCAT44(uStack_124,local_128);
    local_1e0 = local_210 - dVar1 * local_180;
    local_218 = dVar1 * local_180 + local_210;
    local_1e8 = local_210 - dVar1 * local_190;
    local_210 = dVar1 * local_190 + local_210;
    param_2 = param_2 / 2;
    param_6 = param_6 ^ 1;
    uVar13 = (ulonglong)(param_5 >> 0x10 & 0xff);
    uVar14 = (ulonglong)(param_5 >> 8 & 0xff);
    local_228 = (float)(param_5 >> 0x18) * 0.003921569;
    uVar12 = (ulonglong)(param_5 & 0xff);
    dVar1 = 0.0;
    local_229 = param_6;
    local_200 = uVar14;
    local_1f8 = uVar13;
    local_1f0 = uVar12;
    do {
      dVar11 = local_1a0;
      dVar10 = local_1a8;
      dVar9 = local_1b0;
      dVar8 = local_1b8;
      dVar7 = local_1e0;
      dVar4 = dVar1 * local_220;
      dVar5 = local_178 * dVar4;
      dVar2 = local_188 * dVar4;
      dVar3 = local_190 * dVar4;
      local_138 = (&DAT_14c758c60)[uVar13];
      local_134 = (&DAT_14c758c60)[uVar14];
      local_130 = (&DAT_14c758c60)[uVar12];
      local_150 = local_218 - dVar3;
      local_148 = local_1a8 - dVar2;
      local_140 = local_1a0 - dVar5;
      local_168 = local_1e0 - dVar3;
      local_160 = local_1b8 - dVar2;
      local_158 = local_1b0 - dVar5;
      local_12c = local_228;
      local_240 = 1;
      local_248 = 0;
      local_258 = param_6;
      local_250 = param_4;
      local_224 = param_2;
      local_208 = dVar1;
      (**(code **)(*param_7 + 0x30))(param_7,&local_168,&local_150);
      fVar6 = local_228;
      local_158 = dVar9 + dVar5;
      local_160 = dVar8 + dVar2;
      local_168 = dVar7 + dVar3;
      local_140 = dVar5 + dVar11;
      local_148 = dVar2 + dVar10;
      local_150 = dVar3 + local_218;
      local_138 = (&DAT_14c758c60)[uVar13];
      local_134 = (&DAT_14c758c60)[uVar14];
      local_130 = (&DAT_14c758c60)[uVar12];
      local_12c = local_228;
      local_240 = 1;
      local_248 = 0;
      local_258 = param_6;
      local_250 = param_4;
      (**(code **)(*param_7 + 0x30))(param_7,&local_168,&local_150,&local_138);
      dVar10 = local_1c0;
      dVar9 = local_1c8;
      dVar8 = local_1d0;
      dVar7 = local_1d8;
      dVar5 = local_1e8;
      dVar3 = local_170 * dVar4;
      dVar2 = local_198 * dVar4;
      dVar4 = dVar4 * local_180;
      local_138 = (&DAT_14c758c60)[uVar13];
      local_134 = (&DAT_14c758c60)[uVar14];
      local_130 = (&DAT_14c758c60)[uVar12];
      local_150 = local_210 - dVar4;
      local_148 = local_1d0 - dVar2;
      local_140 = local_1c0 - dVar3;
      local_168 = local_1e8 - dVar4;
      local_160 = local_1d8 - dVar2;
      local_158 = local_1c8 - dVar3;
      local_12c = fVar6;
      local_240 = 1;
      local_248 = 0;
      local_258 = param_6;
      local_250 = param_4;
      (**(code **)(*param_7 + 0x30))(param_7,&local_168,&local_150,&local_138);
      dVar1 = local_208;
      local_158 = dVar9 + dVar3;
      local_160 = dVar7 + dVar2;
      local_168 = dVar5 + dVar4;
      local_140 = dVar3 + dVar10;
      local_148 = dVar2 + dVar8;
      local_150 = dVar4 + local_210;
      local_138 = (&DAT_14c758c60)[uVar13];
      local_134 = (&DAT_14c758c60)[uVar14];
      local_130 = (&DAT_14c758c60)[uVar12];
      local_12c = fVar6;
      local_240 = 1;
      local_248 = 0;
      local_258 = param_6;
      local_250 = param_4;
      (**(code **)(*param_7 + 0x30))(param_7,&local_168,&local_150,&local_138);
      dVar1 = dVar1 + 1.0;
      param_2 = local_224 + -1;
    } while (param_2 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dd7f7 FUN_1484dd7f7 body=503 status=ok
// SIG undefined FUN_1484dd7f7(void)

void FUN_1484dd7f7(undefined8 param_1,double *param_2,int param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
                  double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  double *local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar6 = *param_2 * param_9[8];
  dVar7 = param_2[1] * param_9[9];
  dVar4 = param_2[2] * param_9[10];
  dVar1 = *param_9;
  dVar2 = param_9[1];
  dVar3 = param_9[2];
  dVar5 = param_9[3];
  dVar8 = dVar7 * dVar1 - dVar6 * dVar2;
  dVar9 = dVar4 * dVar2 - dVar7 * dVar3;
  dVar10 = dVar6 * dVar3 - dVar1 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = (dVar3 * dVar9 - dVar1 * dVar8) + param_9[3] * dVar10 + dVar7 + param_9[5];
  local_a8 = dVar8 * dVar5 + dVar4 + (dVar10 * dVar1 - dVar9 * dVar2) + param_9[6];
  local_b8._8_4_ = SUB84(dVar7,0);
  local_b8._0_8_ = (dVar8 * dVar2 - dVar10 * dVar3) + dVar5 * dVar9 + dVar6 + param_9[4];
  local_b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar5 = (double)FUN_148556b6a(dVar4,local_b8,param_4);
  local_c0 = param_9;
  local_c8 = param_8;
  local_d0 = param_7;
  local_d8 = param_6;
  FUN_1484dcfbe(param_2,param_3,dVar5 / (double)param_3,param_5);
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dd9ef FUN_1484dd9ef body=752 status=ok
// SIG undefined FUN_1484dd9ef(void)

void FUN_1484dd9ef(double param_1,double param_2,double *param_3,double *param_4,longlong *param_5,
                  double *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double *local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar6 = log(param_2);
  dVar6 = dVar6 / 1.6094379124341003;
  auVar9._0_8_ = ABS(dVar6);
  auVar9._8_8_ = extraout_XMM0_Qb & 0x7fffffffffffffff;
  auVar8._4_12_ = auVar9._4_12_;
  auVar8._0_4_ = (float)auVar9._0_8_;
  auVar9 = roundss(auVar8,auVar8,9);
  local_a8 = (double *)0x0;
  uStack_a0 = 0;
  FUN_1400bd09c(&local_a8,2,1);
  lVar3 = 0;
  do {
    dVar7 = pow(5.0,(double)auVar9._0_4_ *
                    (double)(-(ulonglong)(0.0 < dVar6) & 0x3ff0000000000000 |
                            ~-(ulonglong)(0.0 < dVar6) &
                            -(ulonglong)(dVar6 < 0.0) & 0xbff0000000000000) - (double)(int)lVar3);
    local_a8[lVar3] = dVar7 * param_1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  local_d8 = param_6[1];
  local_d0 = param_6[2];
  local_e0 = *local_a8;
  if ((local_e0 != 0.0) || (NAN(local_e0))) {
    auVar10._0_8_ = (local_d8 + local_e0 * 0.5) / local_e0;
    auVar10._8_8_ = 0;
    auVar9 = roundpd(auVar10,auVar10,1);
    local_d8 = auVar9._0_8_ * local_e0;
    auVar11._0_8_ = (local_e0 * 0.5 + *param_6) / local_e0;
    auVar11._8_8_ = 0;
    auVar9 = roundpd(auVar11,auVar11,1);
    local_e0 = auVar9._0_8_ * local_e0;
  }
  else {
    local_e0 = *param_6;
  }
  local_c8 = param_6[3];
  dStack_c0 = param_6[4];
  local_b8 = param_6[5];
  dStack_b0 = param_6[6];
  bVar4 = false;
  lVar3 = 0;
  do {
    exp2f((float)-(int)lVar3);
    dVar7 = *local_a8 + *local_a8;
    dVar6 = ((param_3[1] - param_4[1]) + dVar7) / local_a8[lVar3];
    dVar7 = ((*param_3 - *param_4) + dVar7) / local_a8[lVar3];
    uVar5 = -(ulonglong)(dVar6 <= dVar7);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = ~uVar5 & (ulonglong)dVar6 | (ulonglong)dVar7 & uVar5;
    auVar9 = roundsd(ZEXT816(0),auVar12,10);
    if (500 < (int)auVar9._0_8_) break;
    lVar2 = (longlong)(int)param_5[1] + -1;
    if (lVar3 < lVar2) {
      lVar2 = lVar3;
    }
    local_108 = *(undefined4 *)(*param_5 + lVar2 * 4);
    local_f0 = param_9;
    local_f8 = param_8;
    local_100 = 0;
    FUN_1484dcfbe(&local_e0);
    lVar3 = 1;
    bVar1 = !bVar4;
    bVar4 = true;
  } while (bVar1);
  if (local_a8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ddd28 FUN_1484ddd28 body=1200 status=ok
// SIG undefined FUN_1484ddd28(void)

void FUN_1484ddd28(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  longlong local_400;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong local_3c0;
  undefined1 *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  longlong local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  longlong local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  longlong local_300;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  longlong local_2c0;
  code *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong local_280;
  undefined1 *local_268;
  undefined8 local_258;
  undefined **local_248;
  longlong local_240;
  undefined1 *local_228;
  undefined8 local_218;
  undefined **local_208;
  longlong local_200;
  undefined1 *local_1e8;
  undefined8 local_1d8;
  undefined **local_1c8;
  longlong local_1c0;
  undefined1 *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  longlong local_180;
  undefined1 *local_168;
  undefined8 local_158;
  undefined **local_148;
  longlong local_140;
  undefined1 *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong local_100;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_448;
  lVar1 = FUN_1484de1d9();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x120) = lVar1;
  local_58 = 0;
  local_48 = &PTR_LAB_14af11260;
  local_68 = &LAB_143b877dc;
  local_40 = param_1;
  FUN_1484c9b00(lVar1 + 0x28,lVar1 + 0xa8);
  local_98 = 0;
  local_88 = &PTR_LAB_14af11280;
  local_a8 = &LAB_143b87830;
  local_80 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xa9);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14af112a0;
  local_e8 = &LAB_143b87884;
  local_c0 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xaa);
  local_118 = 0;
  local_108 = &PTR_LAB_14af112c0;
  local_128 = &LAB_143b878d8;
  local_100 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xab);
  local_158 = 0;
  local_148 = &PTR_LAB_14af112e0;
  local_168 = &LAB_143b8792c;
  local_140 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xac);
  local_198 = 0;
  local_188 = &PTR_LAB_14af11300;
  local_1a8 = &LAB_143b87980;
  local_180 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xad);
  local_1d8 = 0;
  local_1c8 = &PTR_LAB_14af11320;
  local_1e8 = &LAB_143b879d4;
  local_1c0 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xae);
  local_218 = 0;
  local_208 = &PTR_LAB_14af11340;
  local_228 = &LAB_143b87a28;
  local_200 = param_1;
  FUN_1484de26e(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xb0);
  local_258 = 0;
  local_248 = &PTR_LAB_14af11360;
  local_268 = &LAB_143b87a7c;
  local_240 = param_1;
  FUN_1484de26e(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xcc);
  local_298 = 0;
  local_288 = &PTR_LAB_14af11380;
  local_2a8 = FUN_143b87ad0;
  local_280 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xd0);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14af113a0;
  local_2e8 = &LAB_143b87ba4;
  local_2c0 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xb4);
  local_318 = 0;
  local_308 = &PTR_LAB_14af113c0;
  local_328 = &LAB_143b87bf8;
  local_300 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xb8);
  local_358 = 0;
  local_348 = &PTR_LAB_14af113e0;
  local_368 = &LAB_143b87c4c;
  local_340 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xbc);
  local_398 = 0;
  local_388 = &PTR_LAB_14af11400;
  local_3a8 = &LAB_143b87ca0;
  local_380 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xc0);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14af11420;
  local_3e8 = &LAB_143b87cf4;
  local_3c0 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 0xc4);
  local_418 = 0;
  local_408 = &PTR_LAB_14af11440;
  local_428 = &LAB_143b87d48;
  local_400 = param_1;
  FUN_1484de346(*(longlong *)(param_1 + 0x120) + 0x28,*(longlong *)(param_1 + 0x120) + 200);
  *(undefined1 *)(param_1 + 0x130) = 0;
  plVar2 = (longlong *)FUN_1484de41e(*(undefined8 *)(param_1 + 0x28));
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  *(longlong **)(param_1 + 0x128) = plVar2;
  lVar1 = FUN_1485583eb(0,1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  plVar2[0xd5] = lVar1;
  (**(code **)(*plVar2 + 0x638))(plVar2,0,lVar1);
  FUN_140486fc4(*(undefined8 *)(param_1 + 0x128),
                *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1c8),0);
  FUN_140b506a4(*(undefined8 *)(param_1 + 0x128));
  if ((local_20 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484de1d9 FUN_1484de1d9 body=148 status=ok
// SIG undefined FUN_1484de1d9(void)

undefined8 FUN_1484de1d9(undefined8 param_1)

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
  uVar1 = FUN_1459eee8c();
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



// FUNCTION 1484de26e FUN_1484de26e body=215 status=ok
// SIG undefined FUN_1484de26e(void)

int FUN_1484de26e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14850ee6a(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484de346 FUN_1484de346 body=215 status=ok
// SIG undefined FUN_1484de346(void)

int FUN_1484de346(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14850f19c(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484de41e FUN_1484de41e body=148 status=ok
// SIG undefined FUN_1484de41e(void)

undefined8 FUN_1484de41e(undefined8 param_1)

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
  uVar1 = FUN_1459eef78();
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



// FUNCTION 1484de4b4 FUN_1484de4b4 body=589 status=ok
// SIG undefined FUN_1484de4b4(void)

void FUN_1484de4b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar19 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar19[1] = (longlong)&DAT_100000001;
  *plVar19 = (longlong)&PTR_FUN_14af11460;
  plVar19[2] = (longlong)&PTR_FUN_14af11478;
  plVar19[4] = 0;
  plVar19[6] = 0;
  local_68 = (code *)plVar19[4];
  local_60 = (longlong *)plVar19[5];
  local_58 = plVar19[6];
  local_50 = plVar19[7];
  lVar8 = plVar19[8];
  lVar9 = plVar19[9];
  lVar10 = plVar19[10];
  lVar11 = plVar19[0xb];
  lVar12 = *param_2;
  lVar13 = param_2[1];
  lVar14 = param_2[2];
  lVar15 = param_2[3];
  lVar16 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar17 = param_2[5];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar18 = param_2[7];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(plVar19 + 10) = (int)param_2[6];
  *(undefined4 *)((longlong)plVar19 + 0x54) = uVar6;
  *(int *)(plVar19 + 0xb) = (int)lVar18;
  *(undefined4 *)((longlong)plVar19 + 0x5c) = uVar7;
  *(int *)(plVar19 + 8) = (int)lVar16;
  *(undefined4 *)((longlong)plVar19 + 0x44) = uVar4;
  *(int *)(plVar19 + 9) = (int)lVar17;
  *(undefined4 *)((longlong)plVar19 + 0x4c) = uVar5;
  plVar19[6] = lVar14;
  plVar19[7] = lVar15;
  plVar19[4] = lVar12;
  plVar19[5] = lVar13;
  local_48._0_4_ = (undefined4)lVar8;
  local_48._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  local_38._0_4_ = (undefined4)lVar10;
  local_38._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar11;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  param_2[2] = local_58;
  param_2[3] = local_50;
  *param_2 = (longlong)local_68;
  param_2[1] = (longlong)local_60;
  local_48 = lVar8;
  uStack_40 = lVar9;
  local_38 = lVar10;
  uStack_30 = lVar11;
  if (plVar19 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = 0x10;
    plVar20 = *(longlong **)(param_1 + 0x140);
    if (plVar20 == (longlong *)0x0) goto LAB_1484de65d;
    *(undefined8 *)(param_1 + 0x140) = 0;
LAB_1484de5d3:
    LOCK();
    plVar1 = plVar20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    if (plVar19 == (longlong *)0x0) goto LAB_1484de65d;
  }
  else {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x138) = plVar19 + 2;
    plVar20 = *(longlong **)(param_1 + 0x140);
    if (plVar19 == plVar20) {
      LOCK();
      plVar20 = plVar19 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x140) = plVar19;
      if (plVar20 != (longlong *)0x0) goto LAB_1484de5d3;
    }
  }
  LOCK();
  plVar20 = plVar19 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar19)(plVar19);
    LOCK();
    piVar2 = (int *)((longlong)plVar19 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
LAB_1484de65d:
  if ((*(char *)(*(longlong *)(param_1 + 0x120) + 0xd0) == '\x01') &&
     (*(longlong **)(param_1 + 0x138) != (longlong *)0x0)) {
    local_60 = &local_70;
    local_68 = FUN_143b87d9c;
    local_70 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x138) + 8))();
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x654) = 0x3f800000;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  local_80 = *(undefined8 *)(param_1 + 0x138);
  local_78 = *(longlong *)(param_1 + 0x140);
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  FUN_1484de702(uVar3,&local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484de702 FUN_1484de702 body=220 status=ok
// SIG undefined FUN_1484de702(void)

void FUN_1484de702(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x6f0);
  *(longlong **)(param_1 + 0x6e8) = plVar4;
  *(longlong *)(param_1 + 0x6f0) = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x6e8);
  }
  if (plVar4 != (longlong *)0x0) {
    local_28 = &local_38;
    local_30 = FUN_143b87e08;
    local_38 = param_1;
    (**(code **)(*plVar4 + 8))();
  }
  FUN_1448215fa(param_1);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484de7e0 FUN_1484de7e0 body=37 status=ok
// SIG undefined FUN_1484de7e0(void)

void FUN_1484de7e0(longlong param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_1484de806();
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1484de806 FUN_1484de806 body=538 status=ok
// SIG undefined FUN_1484de806(void)

void FUN_1484de806(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(param_1 + 0x120) + 0xa8) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  FUN_14045627c(*(undefined8 *)(param_1 + 0x128),1,1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x650) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xcc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x658) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xb0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x65c) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xa9);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x668) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xaa);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x674) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xab);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x680) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xac);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x68c) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xad);
  *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x698) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xae);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x660) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xb4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x66c) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xb8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x678) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xbc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x684) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xc0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x690) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xc4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x69c) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 200);
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (*(longlong **)(lVar1 + 0x6e8) != (longlong *)0x0) {
    local_20 = &local_30;
    local_28 = FUN_143b87e08;
    local_30 = lVar1;
    (**(code **)(**(longlong **)(lVar1 + 0x6e8) + 8))();
  }
  FUN_1448215fa(lVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dea34 FUN_1484dea34 body=108 status=ok
// SIG undefined FUN_1484dea34(void)

void FUN_1484dea34(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (*(longlong **)(lVar1 + 0x6e8) != (longlong *)0x0) {
    local_18 = &local_28;
    local_20 = FUN_143b87e08;
    local_28 = lVar1;
    (**(code **)(**(longlong **)(lVar1 + 0x6e8) + 8))();
  }
  FUN_1448215fa(lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484deaa2 FUN_1484deaa2 body=23 status=ok
// SIG undefined FUN_1484deaa2(void)

void FUN_1484deaa2(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0xa9) = (uint)param_2 * 0x1010101;
  *(short *)(param_1 + 0xad) = (short)((uint)param_2 * 0x1010101);
  return;
}



// FUNCTION 1484deaee FUN_1484deaee body=119 status=ok
// SIG undefined FUN_1484deaee(void)

undefined8 FUN_1484deaee(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  code *local_28;
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x6e8) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    local_30 = &local_18;
    local_18 = 0;
    local_20 = &local_38;
    local_28 = FUN_143b87e7a;
    local_38 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 8))();
    uVar1 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484deb6c FUN_1484deb6c body=29 status=ok
// SIG undefined FUN_1484deb6c(void)

undefined8 FUN_1484deb6c(longlong param_1,undefined8 param_2)

{
  FUN_144a80a4c(param_1 + 0x6b0);
  return param_2;
}



// FUNCTION 1484deb96 FUN_1484deb96 body=60 status=ok
// SIG undefined FUN_1484deb96(void)

void FUN_1484deb96(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x650) = param_2;
  FUN_1406552bc(param_1,0,param_2);
  return;
}



// FUNCTION 1484debd2 FUN_1484debd2 body=96 status=ok
// SIG undefined FUN_1484debd2(void)

void FUN_1484debd2(longlong param_1)

{
  if (*(int *)(param_1 + 0x6a4) < 0) {
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    FUN_140549ad6(param_1 + 0x698,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x6a0) = 0;
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x690) = 1;
  return;
}



// FUNCTION 1484dec32 FUN_1484dec32 body=426 status=ok
// SIG undefined FUN_1484dec32(void)

void FUN_1484dec32(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1484dedde FUN_1484dedde body=277 status=ok
// SIG undefined FUN_1484dedde(void)

void FUN_1484dedde(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      *(undefined4 *)(*local_80 + 0x18 + (longlong)iStack_64 * 0x28) = *param_2;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484deef4 FUN_1484deef4 body=289 status=ok
// SIG undefined FUN_1484deef4(void)

void FUN_1484deef4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      *(undefined4 *)(*local_88 + 0x1c + (longlong)iStack_6c * 0x28) = param_2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484df016 FUN_1484df016 body=289 status=ok
// SIG undefined FUN_1484df016(void)

void FUN_1484df016(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      *(undefined4 *)(*local_88 + 0x20 + (longlong)iStack_6c * 0x28) = param_2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484df138 FUN_1484df138 body=66 status=ok
// SIG undefined FUN_1484df138(void)

undefined8 FUN_1484df138(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x6cc) < *(int *)(param_1 + 0x6a0)) {
    uVar1 = FUN_14001cc68(0x610,0x10);
    FUN_143b816a0(uVar1,param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1484df180 FUN_1484df180 body=838 status=ok
// SIG undefined FUN_1484df180(void)

undefined8 FUN_1484df180(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x690) != '\x01') goto LAB_1484df445;
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_d0 = 0x100000000;
  local_c0 = 0xffffffff;
  uStack_b8 = 0;
  lStack_c8 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_d0);
    iVar11 = *(int *)(param_1 + 0x6c0);
  }
  uStack_d8 = CONCAT44(uStack_b4,uStack_b8);
  local_f0 = local_d0;
  lStack_e8 = lStack_c8;
  local_e0 = local_c0;
  uVar8 = local_e0;
  local_e0._4_4_ = (int)((ulonglong)local_c0 >> 0x20);
  local_f8 = plVar1;
  if (local_e0._4_4_ == iVar11) {
    uVar19 = 0;
    uVar21 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar16 = 0;
    uVar18 = 0;
    if (lStack_c8 != lVar2) goto LAB_1484df294;
  }
  else {
LAB_1484df294:
    bVar10 = true;
    uVar16 = 0;
    uVar18 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar19 = 0;
    uVar21 = 0;
    iVar9 = local_e0._4_4_;
    local_e0 = uVar8;
    do {
      pdVar3 = (double *)(*local_f8 + (longlong)iVar9 * 0x28);
      dVar4 = *pdVar3;
      uVar20 = SUB84(dVar4,0);
      uVar22 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (bVar10) {
        uVar13 = SUB84(pdVar3[1],0);
        uVar14 = (undefined4)((ulonglong)pdVar3[1] >> 0x20);
        uVar16 = SUB84(pdVar3[2],0);
        uVar18 = (undefined4)((ulonglong)pdVar3[2] >> 0x20);
        uVar15 = uVar16;
        uVar17 = uVar18;
        uVar24 = uVar20;
        uVar25 = uVar22;
        uVar26 = uVar13;
        uVar27 = uVar14;
        uVar19 = uVar20;
        uVar21 = uVar22;
      }
      else {
        if (dVar4 <= (double)CONCAT44(uVar25,uVar24)) {
          uVar24 = uVar20;
          uVar25 = uVar22;
        }
        dVar6 = pdVar3[1];
        dVar7 = pdVar3[2];
        uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (dVar6 <= (double)CONCAT44(uVar27,uVar26)) {
          uVar26 = SUB84(dVar6,0);
          uVar27 = uVar28;
        }
        uVar23 = (undefined4)((ulonglong)dVar7 >> 0x20);
        if (dVar7 <= (double)CONCAT44(uVar18,uVar16)) {
          uVar16 = SUB84(dVar7,0);
          uVar18 = uVar23;
        }
        if ((double)CONCAT44(uVar21,uVar19) <= dVar4) {
          uVar19 = uVar20;
          uVar21 = uVar22;
        }
        if ((double)CONCAT44(uVar14,uVar13) <= dVar6) {
          uVar13 = SUB84(dVar6,0);
          uVar14 = uVar28;
        }
        if ((double)CONCAT44(uVar17,uVar15) <= dVar7) {
          uVar15 = SUB84(dVar7,0);
          uVar17 = uVar23;
        }
      }
      local_e0 = CONCAT44(local_e0._4_4_,(uint)local_e0 & ~local_f0._4_4_);
      FUN_1449c0562(&local_f0);
      bVar10 = false;
      iVar9 = local_e0._4_4_;
      uVar8 = local_e0;
    } while (local_f8 != plVar1 || (lStack_e8 != lVar2 || local_e0._4_4_ != iVar11));
  }
  local_e0 = uVar8;
  dVar6 = ((double)CONCAT44(uVar17,uVar15) - (double)CONCAT44(uVar18,uVar16)) * 0.5;
  dVar4 = ((double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar27,uVar26)) * 0.5;
  dVar7 = ((double)CONCAT44(uVar21,uVar19) - (double)CONCAT44(uVar25,uVar24)) * 0.5;
  dVar12 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar4 * dVar4);
  *(double *)(param_1 + 0x658) = (double)CONCAT44(uVar25,uVar24) + dVar7;
  *(double *)(param_1 + 0x660) = (double)CONCAT44(uVar27,uVar26) + dVar4;
  *(double *)(param_1 + 0x668) = (double)CONCAT44(uVar18,uVar16) + dVar6;
  *(double *)(param_1 + 0x670) = dVar7;
  *(double *)(param_1 + 0x678) = dVar4;
  *(double *)(param_1 + 0x680) = dVar6;
  *(double *)(param_1 + 0x688) = dVar12;
  *(undefined1 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x6cc) < *(int *)(param_1 + 0x6a0)) {
    dVar5 = (double)*(float *)(*(longlong *)(param_1 + 0x698) + 0x1c);
    *(double *)(param_1 + 0x670) = dVar7 + dVar5;
    *(double *)(param_1 + 0x678) = dVar4 + dVar5;
    *(double *)(param_1 + 0x680) = dVar6 + dVar5;
    *(double *)(param_1 + 0x688) = dVar12 + dVar5;
  }
LAB_1484df445:
  FUN_144a80a4c(param_1 + 0x658,param_2,param_3);
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484df4c8 FUN_1484df4c8 body=358 status=ok
// SIG undefined FUN_1484df4c8(void)

void FUN_1484df4c8(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  ulonglong uStack_60;
  int local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_1;
  if (0 < param_4) {
    FUN_1484dec32(param_1 + 0x698,
                  (param_4 * param_2 + *(int *)(param_1 + 0x6a0)) - *(int *)(param_1 + 0x6cc));
    FUN_148511f52(&local_68,param_4);
  }
  if (0 < param_2) {
    lVar1 = local_70 + 0x698;
    iVar12 = 0;
    do {
      bVar13 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar13) {
        FUN_148511f52(&local_68,0);
      }
      local_58[0] = iVar12;
      (*(code *)*param_3)(param_3[1],local_58,&local_68);
      lVar9 = local_68;
      lVar10 = (longlong)(int)uStack_60;
      if (lVar10 != 0) {
        lVar11 = 0;
        do {
          FUN_148511cac(lVar1);
          *(undefined8 *)(local_50 + 8) = *(undefined8 *)(lVar9 + 0x20 + lVar11);
          puVar3 = (undefined4 *)(lVar9 + lVar11);
          uVar4 = *puVar3;
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          uVar8 = puVar2[1];
          *(undefined8 *)(local_50 + 4) = *puVar2;
          *(undefined8 *)(local_50 + 6) = uVar8;
          *local_50 = uVar4;
          local_50[1] = uVar5;
          local_50[2] = uVar6;
          local_50[3] = uVar7;
          *(undefined1 *)(local_70 + 0x690) = 1;
          lVar11 = lVar11 + 0x28;
        } while (lVar10 * 0x28 != lVar11);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_2);
  }
  FUN_1448215fa(local_70);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484df634 FUN_1484df634 body=1936 status=ok
// SIG undefined FUN_1484df634(void)

void FUN_1484df634(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  char param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined1 auStack_428 [32];
  longlong local_408;
  longlong *local_400;
  undefined4 *local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined1 local_3e0 [8];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 *local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 *local_398;
  undefined1 *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 local_374 [4];
  undefined8 *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  longlong local_328;
  undefined4 local_320;
  undefined1 local_318 [80];
  undefined8 local_2c8;
  longlong local_2b8;
  int local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  longlong local_240;
  char local_230;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar27 = param_1 + 0x140;
  local_3f8 = param_3;
  FUN_146c00942(lVar27);
  *(bool *)(param_1 + 0x470) = param_4 != (undefined8 *)0x0;
  local_408 = param_1;
  if (param_4 != (undefined8 *)0x0) {
    puVar25 = (undefined8 *)(param_1 + 0x410);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar25 = *param_4;
      param_4 = param_4 + 1;
      puVar25 = puVar25 + 1;
    }
    local_2a0 = *(longlong *)(param_1 + 0x410);
    uStack_298 = *(undefined8 *)(param_1 + 0x418);
    local_290 = *(longlong *)(param_1 + 0x420);
    uStack_288 = *(undefined8 *)(param_1 + 0x428);
    local_280 = *(undefined8 *)(param_1 + 0x430);
    uStack_278 = *(undefined8 *)(param_1 + 0x438);
    local_270 = *(undefined8 *)(param_1 + 0x440);
    local_268 = *(undefined4 *)(param_1 + 0x450);
    uStack_264 = *(undefined4 *)(param_1 + 0x454);
    uStack_260 = *(undefined4 *)(param_1 + 0x458);
    uStack_25c = *(undefined4 *)(param_1 + 0x45c);
    local_258 = *(undefined8 *)(param_1 + 0x460);
    FUN_146c3cd49(lVar27,&local_2a0,1);
  }
  plVar28 = (longlong *)(local_408 + 0x390);
  FUN_14051b394(plVar28,*(int *)(local_408 + 0x280) * 0x200 + *(int *)(local_408 + 0x284),1);
  uVar20 = *(int *)(local_408 + 0x280) * 0x200 + *(int *)(local_408 + 0x284);
  uVar23 = 0;
  if ((uVar20 != 0) &&
     (uVar23 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_408 + 0x288) - 1U))) {
    uVar24 = 1;
    uVar15 = 1;
    if (1 < (int)uVar20) {
      uVar24 = uVar20;
    }
    do {
      uVar23 = uVar24;
      if (uVar24 == uVar15) break;
      uVar17 = uVar15 >> 9;
      uVar26 = uVar15 & 0x1ff;
      uVar23 = uVar15;
      uVar15 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_408 + 0x288))[uVar17] +
                                         (ulonglong)uVar26 * 2) - 1U));
  }
  if (uVar23 != uVar20) {
    do {
      FUN_146c13dec(lVar27,&local_2a0,uVar23);
      lVar16 = *plVar28;
      *(longlong *)(lVar16 + 0x10 + (longlong)(int)uVar23 * 0x18) = local_290;
      puVar3 = (undefined4 *)(lVar16 + (longlong)(int)uVar23 * 0x18);
      *puVar3 = (undefined4)local_2a0;
      puVar3[1] = local_2a0._4_4_;
      puVar3[2] = (undefined4)uStack_298;
      puVar3[3] = uStack_298._4_4_;
      uVar24 = uVar23 + 1;
      if ((int)(uVar23 + 1) < (int)uVar20) {
        uVar24 = uVar20;
      }
      do {
        uVar15 = uVar24;
        if (uVar24 - 1 == uVar23) break;
        uVar23 = uVar23 + 1;
        uVar15 = uVar23;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_408 + 0x288) +
                                             (ulonglong)(uVar23 >> 9) * 8) +
                                           (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
      uVar23 = uVar15;
    } while (uVar23 != uVar20);
  }
  FUN_146bff712(&local_2a0,lVar27);
  FUN_1482d2c96(local_318,&local_2a0);
  local_2c8 = 0x3f847ae147ae147b;
  FUN_1482d2df4(local_318);
  lVar16 = local_408;
  lVar27 = local_408 + 0x3a0;
  FUN_1407058ce(lVar27);
  local_400 = (longlong *)(lVar16 + 0x360);
  *(undefined4 *)(lVar16 + 0x368) = 0;
  if (*(int *)(lVar16 + 0x36c) < 0) {
    FUN_14481578e(local_400,0);
  }
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_370 = &local_2a0;
  if ((longlong)local_2b0 != 0) {
    local_3f0 = (longlong)local_2b0 * 0x1c0 + local_2b8;
    lVar16 = local_2b8;
    do {
      local_3a8 = *(undefined8 *)(lVar16 + 0x170);
      local_3a0 = *(undefined4 *)(lVar16 + 0x178);
      FUN_148320f20(&local_370,&local_3a8);
      puVar1 = (undefined1 *)(lVar16 + 0x130);
      local_398 = (undefined8 *)&DAT_100000000;
      local_388 = 0xffffffff;
      local_380 = 0;
      iVar18 = 0;
      local_390 = puVar1;
      if (*(int *)(lVar16 + 0x148) != 0) {
        FUN_1449c0562(&local_398);
        iVar18 = *(int *)(lVar16 + 0x148);
      }
      plVar28 = (longlong *)(lVar16 + 0x120);
      local_3c0 = local_388;
      uVar12 = local_3c0;
      local_3b8 = local_380;
      local_3b4 = local_37c;
      uStack_3d0 = local_398;
      local_3c8 = local_390;
      local_3c0._4_4_ = (int)((ulonglong)local_388 >> 0x20);
      iVar13 = local_3c0._4_4_;
      local_3e8 = lVar16;
      local_3d8 = plVar28;
      if ((local_3c0._4_4_ != iVar18) || (local_3c0 = uVar12, local_390 != puVar1)) {
        do {
          local_3c0 = uVar12;
          local_3e0 = *(undefined1 (*) [8])(*local_3d8 + (longlong)iVar13 * 0x10);
          local_398 = (undefined8 *)(local_3e0 + 4);
          local_390 = local_3e0;
          FUN_140263e2a(lVar27,local_374,&local_398,0);
          local_3c0 = CONCAT44(local_3c0._4_4_,(uint)local_3c0 & ~uStack_3d0._4_4_);
          FUN_1449c0562(&uStack_3d0);
          iVar13 = local_3c0._4_4_;
          uVar12 = local_3c0;
        } while (local_3d8 != plVar28 || (local_3c8 != puVar1 || local_3c0._4_4_ != iVar18));
      }
      lVar16 = local_3e8 + 0x1c0;
    } while (lVar16 != local_3f0);
  }
  FUN_140619b9c(&local_368,&local_3d8);
  if (local_400 == &local_3d8) {
    if (local_3d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_400 != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(local_408 + 0x360) = local_3d8;
    local_3d8 = (longlong *)0x0;
    *(undefined4 *)(local_408 + 0x368) = (undefined4)uStack_3d0;
    *(uint *)(local_408 + 0x36c) = uStack_3d0._4_4_;
  }
  plVar28 = (longlong *)(local_408 + 0x370);
  *(undefined4 *)(local_408 + 0x378) = 0;
  if (*(int *)(local_408 + 0x37c) < 0) {
    FUN_1447a8aa0(plVar28,0);
  }
  plVar2 = (longlong *)(local_408 + 0x380);
  *(undefined4 *)(local_408 + 0x388) = 0;
  if (*(int *)(local_408 + 0x38c) < 0) {
    FUN_1447a8aa0(plVar2,0);
  }
  iVar18 = *(int *)(local_408 + 0x368);
  lVar27 = local_408;
  if ((longlong)iVar18 != 0) {
    lVar16 = *(longlong *)(local_408 + 0x360);
    lVar21 = 0;
    do {
      uVar23 = *(uint *)(lVar16 + lVar21);
      uVar19 = (ulonglong)(uVar23 >> 9);
      lVar22 = *(longlong *)(local_290 + uVar19 * 8);
      uVar23 = uVar23 & 0x1ff;
      plVar4 = (longlong *)(lVar22 + (ulonglong)uVar23 * 0x18);
      local_3d8 = (longlong *)*plVar4;
      uStack_3d0 = (undefined8 *)plVar4[1];
      local_3c8 = *(undefined1 **)(lVar22 + 0x10 + (ulonglong)uVar23 * 0x18);
      iVar13 = *(int *)(lVar27 + 0x378);
      *(uint *)(lVar27 + 0x378) = iVar13 + 1U;
      if (*(uint *)(lVar27 + 0x37c) < iVar13 + 1U) {
        FUN_1403e3958(plVar28,iVar13);
        lVar27 = local_408;
      }
      lVar22 = *plVar28;
      *(undefined1 **)(lVar22 + 0x10 + (longlong)iVar13 * 0x18) = local_3c8;
      puVar3 = (undefined4 *)(lVar22 + (longlong)iVar13 * 0x18);
      *puVar3 = (undefined4)local_3d8;
      puVar3[1] = local_3d8._4_4_;
      puVar3[2] = (undefined4)uStack_3d0;
      puVar3[3] = uStack_3d0._4_4_;
      pfVar14 = (float *)&DAT_14c846370;
      if (local_230 == '\x01') {
        pfVar14 = (float *)((ulonglong)(uVar23 * 0xc) + *(longlong *)(local_240 + uVar19 * 8));
      }
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[1];
      fVar7 = *pfVar14;
      iVar13 = *(int *)(lVar27 + 0x388);
      lVar22 = (longlong)iVar13;
      *(uint *)(lVar27 + 0x388) = iVar13 + 1U;
      if (*(uint *)(lVar27 + 0x38c) < iVar13 + 1U) {
        FUN_1403e3958(plVar2,iVar13);
        lVar27 = local_408;
      }
      lVar8 = *plVar2;
      *(double *)(lVar8 + lVar22 * 0x18) = (double)fVar7;
      *(double *)(lVar8 + 8 + lVar22 * 0x18) = (double)fVar6;
      *(double *)(lVar8 + 0x10 + lVar22 * 0x18) = (double)fVar5;
      lVar21 = lVar21 + 4;
    } while ((longlong)iVar18 * 4 != lVar21);
  }
  if (param_5 != '\0') {
    local_3d8 = &local_2a0;
    lVar27 = local_408;
    if ((longlong)local_2b0 != 0) {
      lVar16 = (longlong)local_2b0 * 0x1c0;
      lVar21 = local_2b8 + 0x100;
      do {
        FUN_146bc603c(&local_3d8,lVar21,0);
        lVar21 = lVar21 + 0x1c0;
        lVar16 = lVar16 + -0x1c0;
        lVar27 = local_408;
      } while (lVar16 != 0);
    }
  }
  *(undefined8 *)(lVar27 + 0x400) = *(undefined8 *)(local_3f8 + 4);
  uVar9 = local_3f8[1];
  uVar10 = local_3f8[2];
  uVar11 = local_3f8[3];
  *(undefined4 *)(lVar27 + 0x3f0) = *local_3f8;
  *(undefined4 *)(lVar27 + 0x3f4) = uVar9;
  *(undefined4 *)(lVar27 + 0x3f8) = uVar10;
  *(undefined4 *)(lVar27 + 0x3fc) = uVar11;
  FUN_14851bbe8(lVar27,&local_2a0,1,0xf);
  local_320 = 0;
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_368);
  FUN_14830cf42(local_318);
  FUN_141082778(&local_2a0);
  if ((local_80 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484dfdc6 FUN_1484dfdc6 body=152 status=ok
// SIG undefined FUN_1484dfdc6(void)

void FUN_1484dfdc6(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined1 auStack_278 [40];
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [544];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_3 == '\0') {
    local_250 = *param_2;
    local_248 = param_2[1];
    FUN_14851c368(param_1);
  }
  else {
    FUN_146bff712(local_240,param_1 + 0x140);
    (*(code *)*param_2)(param_2[1],local_240);
    FUN_14851c2f2(param_1,local_240);
    FUN_141082778(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dfe60 FUN_1484dfe60 body=483 status=ok
// SIG undefined FUN_1484dfe60(void)

void FUN_1484dfe60(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined1 local_129;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108 [4];
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = *(double *)(param_1 + 0x400);
  local_148 = *(undefined4 *)(param_1 + 0x3f0);
  uStack_144 = *(undefined4 *)(param_1 + 0x3f4);
  uStack_140 = *(undefined4 *)(param_1 + 0x3f8);
  uStack_13c = *(undefined4 *)(param_1 + 0x3fc);
  local_150 = 0x40f869f000000000;
  local_160 = 1;
  local_168 = 1;
  local_129 = param_3;
  FUN_146c005f0(param_2,param_1 + 0x140,1,1);
  local_d8 = (undefined1 *)(local_138 * -99999.0);
  local_e0 = (double)CONCAT44(uStack_13c,uStack_140) * -99999.0;
  local_e8 = (double)CONCAT44(uStack_144,local_148) * -99999.0;
  FUN_146c3c4e4(param_2);
  FUN_1482d2c96(&local_e8,param_2);
  plVar1 = local_c8;
  local_128 = (double)local_d8;
  local_48 = (undefined4)local_a8;
  uStack_44 = local_a8._4_4_;
  uStack_40 = (undefined4)uStack_a0;
  uStack_3c = uStack_a0._4_4_;
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = (undefined4)uStack_b0;
  uStack_4c = uStack_b0._4_4_;
  local_68 = (undefined4)local_c8;
  uStack_64 = local_c8._4_4_;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  local_78 = (undefined4)local_d8;
  uStack_74 = local_d8._4_4_;
  uStack_70 = uStack_d0;
  uStack_6c = uStack_cc;
  local_d8 = &LAB_143b89588;
  local_c8 = (longlong *)0x0;
  local_b8 = &PTR_LAB_14af11780;
  uStack_b0 = &local_150;
  local_a8 = &local_129;
  uStack_a0 = &local_148;
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if (local_128 != 0.0) {
    if (plVar1 == (longlong *)0x0) {
      plVar1 = local_108;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1482d2df4(&local_e8);
  FUN_14830cf42(&local_e8);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0044 FUN_1484e0044 body=336 status=ok
// SIG undefined FUN_1484e0044(void)

void FUN_1484e0044(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14001cc68(0x5e0,0x10);
  local_98 = 1;
  FUN_1482e14f4(lVar1,param_2,param_3,8);
  lVar2 = *(longlong *)(param_1 + 0x138);
  *(longlong *)(param_1 + 0x138) = lVar1;
  if (lVar2 != 0) {
    FUN_1482e1868(lVar2);
    FUN_1400020a8(lVar2);
    lVar1 = *(longlong *)(param_1 + 0x138);
  }
  lVar1 = lVar1 + 8;
  *(bool *)(param_1 + 0x470) = param_4 != (undefined8 *)0x0;
  if (param_4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(param_1 + 0x410);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    local_80 = *(undefined8 *)(param_1 + 0x410);
    uStack_78 = *(undefined8 *)(param_1 + 0x418);
    local_70 = *(undefined8 *)(param_1 + 0x420);
    uStack_68 = *(undefined8 *)(param_1 + 0x428);
    local_60 = *(undefined8 *)(param_1 + 0x430);
    uStack_58 = *(undefined8 *)(param_1 + 0x438);
    local_50 = *(undefined8 *)(param_1 + 0x440);
    local_48 = *(undefined4 *)(param_1 + 0x450);
    uStack_44 = *(undefined4 *)(param_1 + 0x454);
    uStack_40 = *(undefined4 *)(param_1 + 0x458);
    uStack_3c = *(undefined4 *)(param_1 + 0x45c);
    local_38 = *(undefined8 *)(param_1 + 0x460);
    FUN_146c3cd49(lVar1,&local_80,1);
  }
  local_90 = 1;
  local_98 = 1;
  FUN_146c005f0(param_1 + 0x140,lVar1,1,1);
  FUN_14851bbe8(param_1,lVar1,1,0xf);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0196 FUN_1484e0196 body=545 status=ok
// SIG undefined FUN_1484e0196(void)

void FUN_1484e0196(longlong param_1,undefined8 param_2,undefined1 param_3,double param_4,
                  double param_5,byte param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  longlong local_2e8;
  uint local_2e0;
  uint local_2dc;
  undefined8 local_2d8;
  undefined1 local_2cc;
  byte local_2cb;
  float local_2c8;
  float local_2c4;
  undefined1 local_290 [320];
  int local_150;
  int local_14c;
  undefined8 *local_148;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_146bff712(local_290,param_1 + 0x140);
  FUN_1482df8e6(local_2f8,local_290);
  uVar3 = local_150 * 0x200 + local_14c;
  uVar6 = 0;
  if ((uVar3 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)*local_148 - 1U))) {
    uVar7 = 1;
    uVar1 = 1;
    if (1 < (int)uVar3) {
      uVar7 = uVar3;
    }
    do {
      uVar6 = uVar7;
      if (uVar7 == uVar1) break;
      uVar2 = uVar1 >> 9;
      uVar4 = uVar1 & 0x1ff;
      uVar6 = uVar1;
      uVar1 = uVar1 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_148[uVar2] + (ulonglong)uVar4 * 2) - 1U));
  }
  if (uVar6 != uVar3) {
    do {
      uVar7 = local_2e0;
      lVar5 = (longlong)(int)local_2e0;
      local_2e0 = local_2e0 + 1;
      if (local_2dc < local_2e0) {
        FUN_1446f48e2(&local_2e8,uVar7);
      }
      *(uint *)(local_2e8 + lVar5 * 4) = uVar6;
      uVar7 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar3) {
        uVar7 = uVar3;
      }
      do {
        uVar1 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar1 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(local_148[uVar6 >> 9] + (ulonglong)(uVar6 & 0x1ff) * 2)
                                - 1U));
      uVar6 = uVar1;
    } while (uVar6 != uVar3);
  }
  local_2c8 = (float)param_4;
  local_2c4 = (float)param_5;
  local_2cb = param_6 ^ 1;
  local_2d8 = param_2;
  local_2cc = param_3;
  FUN_1482df9a8(local_2f8);
  FUN_146c3906a(local_290,0,1,1);
  FUN_14851bbe8(param_1,local_290,1,0xf);
  FUN_1482df938(local_2f8);
  FUN_141082778(local_290);
  if ((local_70 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e03b8 FUN_1484e03b8 body=234 status=ok
// SIG undefined FUN_1484e03b8(void)

void FUN_1484e03b8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
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
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 1;
  local_78 = 1;
  FUN_146c005f0(param_2,param_1 + 0x140,1,1);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3ff00000;
    local_30 = 0;
    uStack_2c = 0x3ff00000;
    uStack_28 = 0;
    uStack_24 = 0x3ff00000;
    local_20 = 0x3ff0000000000000;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1c8);
    puVar2 = &DAT_14c846480;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x240);
    }
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    local_58 = *(undefined4 *)(puVar2 + 2);
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_50 = *(undefined4 *)(puVar2 + 3);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0x1c);
    local_48 = *(undefined4 *)(puVar2 + 4);
    uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x24);
    uStack_40 = *(undefined4 *)(puVar2 + 5);
    uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x2c);
    uVar3 = *(undefined4 *)(puVar2 + 6);
    uVar4 = *(undefined4 *)((longlong)puVar2 + 0x34);
    local_30 = *(undefined4 *)(puVar2 + 8);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0x44);
    uStack_28 = *(undefined4 *)(puVar2 + 9);
    uStack_24 = *(undefined4 *)((longlong)puVar2 + 0x4c);
    local_20 = puVar2[10];
  }
  local_38 = CONCAT44(uVar4,uVar3);
  FUN_146c3cd49(param_2,&local_68,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e04a4 FUN_1484e04a4 body=336 status=ok
// SIG undefined FUN_1484e04a4(void)

void FUN_1484e04a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14001cc68(0x5e0,0x10);
  local_98 = 1;
  FUN_1482e14f4(lVar1,param_2,param_3,8);
  lVar2 = *(longlong *)(param_1 + 0x138);
  *(longlong *)(param_1 + 0x138) = lVar1;
  if (lVar2 != 0) {
    FUN_1482e1868(lVar2);
    FUN_1400020a8(lVar2);
    lVar1 = *(longlong *)(param_1 + 0x138);
  }
  lVar1 = lVar1 + 8;
  *(bool *)(param_1 + 0x470) = param_4 != (undefined8 *)0x0;
  if (param_4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(param_1 + 0x410);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    local_80 = *(undefined8 *)(param_1 + 0x410);
    uStack_78 = *(undefined8 *)(param_1 + 0x418);
    local_70 = *(undefined8 *)(param_1 + 0x420);
    uStack_68 = *(undefined8 *)(param_1 + 0x428);
    local_60 = *(undefined8 *)(param_1 + 0x430);
    uStack_58 = *(undefined8 *)(param_1 + 0x438);
    local_50 = *(undefined8 *)(param_1 + 0x440);
    local_48 = *(undefined4 *)(param_1 + 0x450);
    uStack_44 = *(undefined4 *)(param_1 + 0x454);
    uStack_40 = *(undefined4 *)(param_1 + 0x458);
    uStack_3c = *(undefined4 *)(param_1 + 0x45c);
    local_38 = *(undefined8 *)(param_1 + 0x460);
    FUN_146c3cd49(lVar1,&local_80,1);
  }
  local_90 = 1;
  local_98 = 1;
  FUN_146c005f0(param_1 + 0x140,lVar1,1,1);
  FUN_14851bbe8(param_1,lVar1,1,0xf);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e05f6 FUN_1484e05f6 body=152 status=ok
// SIG undefined FUN_1484e05f6(void)

void FUN_1484e05f6(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined1 auStack_278 [40];
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [544];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_3 == '\0') {
    local_250 = *param_2;
    local_248 = param_2[1];
    FUN_14851c368(param_1);
  }
  else {
    FUN_146bff712(local_240,param_1 + 0x140);
    (*(code *)*param_2)(param_2[1],local_240);
    FUN_14851c2f2(param_1,local_240);
    FUN_141082778(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0694 FUN_1484e0694 body=179 status=ok
// SIG undefined FUN_1484e0694(void)

void FUN_1484e0694(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e0748(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0748 FUN_1484e0748 body=251 status=ok
// SIG undefined FUN_1484e0748(void)

ulonglong FUN_1484e0748(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar3 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar3;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_1485125ac(param_1 + 0x80,uVar1,param_2);
  if (iVar2 == -1) {
    uVar3 = FUN_1484e2e03(*(undefined8 *)(param_1 + 0x28));
    FUN_140486fc4(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1c8),0);
    lVar4 = FUN_1485583eb(0,1);
    if (lVar4 != 0) {
      FUN_1484d0608(uVar3,lVar4);
    }
    FUN_140b506a4(uVar3);
    local_48 = uVar3;
    if ((uVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(uVar3);
    }
    local_38 = &local_48;
    local_40 = param_2;
    FUN_148512638(param_1 + 0x80,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0844 FUN_1484e0844 body=179 status=ok
// SIG undefined FUN_1484e0844(void)

void FUN_1484e0844(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e08f8(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e08f8 FUN_1484e08f8 body=280 status=ok
// SIG undefined FUN_1484e08f8(void)

ulonglong FUN_1484e08f8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar3 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar3;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_148513302(param_1 + 0xd0,uVar1,param_2);
  if (iVar2 == -1) {
    uVar3 = FUN_1484e2f3b(*(undefined8 *)(param_1 + 0x28));
    FUN_140486fc4(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1c8),0);
    lVar4 = FUN_148558365(0,1);
    if (lVar4 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar4);
      }
      *(longlong *)(uVar3 + 0x650) = lVar4;
      FUN_1406552bc(uVar3,0,lVar4);
    }
    FUN_140b506a4(uVar3);
    local_48 = uVar3;
    if ((uVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(uVar3);
    }
    local_38 = &local_48;
    local_40 = param_2;
    FUN_14851338e(param_1 + 0xd0,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0a12 FUN_1484e0a12 body=179 status=ok
// SIG undefined FUN_1484e0a12(void)

void FUN_1484e0a12(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e0ac6(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0ac6 FUN_1484e0ac6 body=223 status=ok
// SIG undefined FUN_1484e0ac6(void)

ulonglong FUN_1484e0ac6(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar3 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar3;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_148511fc2(param_1 + 0x30,uVar1,param_2);
  if (iVar2 == -1) {
    uVar3 = FUN_1484e2af0(*(undefined8 *)(param_1 + 0x28));
    FUN_140486fc4(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1c8),0);
    FUN_140b506a4(uVar3);
    local_48 = uVar3;
    if ((uVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(uVar3);
    }
    local_38 = &local_48;
    local_40 = param_2;
    FUN_14851204e(param_1 + 0x30,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0ba6 FUN_1484e0ba6 body=315 status=ok
// SIG undefined FUN_1484e0ba6(void)

void FUN_1484e0ba6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e0ce2(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0ce2 FUN_1484e0ce2 body=313 status=ok
// SIG undefined FUN_1484e0ce2(void)

void FUN_1484e0ce2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [64];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_1411371f6(local_b8);
  uVar1 = FUN_14586a0bc();
  local_e8 = local_b8;
  lVar2 = FUN_141137228(param_2,uVar1,&DAT_14c8464e0,&local_d8);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[5] = lVar2;
  plVar3 = (longlong *)FUN_1484e2747(lVar2);
  FUN_14092e51e(param_1[5],plVar3);
  *(undefined4 *)(plVar3 + 200) = 0x3f800000;
  FUN_14045627c(plVar3,0,1);
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
  FUN_1413d4c10(param_1[5],param_3,0,0);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0e1c FUN_1484e0e1c body=66 status=ok
// SIG undefined FUN_1484e0e1c(void)

void FUN_1484e0e1c(longlong *param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))();
  if (param_1[5] != 0) {
    FUN_140aeefbc(param_1[5],0,1);
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1484e0e5e FUN_1484e0e5e body=50 status=ok
// SIG undefined FUN_1484e0e5e(void)

void FUN_1484e0e5e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2a8))();
  if (param_1[5] != 0) {
    FUN_140aeefbc(param_1[5],0,1);
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1484e0e90 FUN_1484e0e90 body=179 status=ok
// SIG undefined FUN_1484e0e90(void)

void FUN_1484e0e90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e0f44(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e0f44 FUN_1484e0f44 body=108 status=ok
// SIG undefined FUN_1484e0f44(void)

ulonglong FUN_1484e0f44(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_1485125ac((longlong *)(param_1 + 0x80),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x80);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  return uVar7;
}



// FUNCTION 1484e0fb0 FUN_1484e0fb0 body=179 status=ok
// SIG undefined FUN_1484e0fb0(void)

void FUN_1484e0fb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e1064(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1064 FUN_1484e1064 body=111 status=ok
// SIG undefined FUN_1484e1064(void)

ulonglong FUN_1484e1064(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_148513302((longlong *)(param_1 + 0xd0),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xd0);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  return uVar7;
}



// FUNCTION 1484e10d4 FUN_1484e10d4 body=179 status=ok
// SIG undefined FUN_1484e10d4(void)

void FUN_1484e10d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e1188(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1188 FUN_1484e1188 body=108 status=ok
// SIG undefined FUN_1484e1188(void)

ulonglong FUN_1484e1188(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_148511fc2((longlong *)(param_1 + 0x30),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x30);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  return uVar7;
}



// FUNCTION 1484e1210 FUN_1484e1210 body=158 status=ok
// SIG undefined FUN_1484e1210(void)

void FUN_1484e1210(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e12b0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e12b0 FUN_1484e12b0 body=355 status=ok
// SIG undefined FUN_1484e12b0(void)

void FUN_1484e12b0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x80);
    lVar2 = param_1 + 0x90;
    local_58 = 0x100000000;
    local_48 = (longlong *)&DAT_ffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0xa8);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    plVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_68 = plVar3, uStack_50 != lVar2)) {
      do {
        local_68 = plVar3;
        FUN_14850b8aa(&local_58,(longlong)iVar4 * 0x20 + *local_80);
        FUN_1401bf202(local_48);
        (**(code **)(*local_48 + 0x420))(local_48,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        plVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar5));
    }
  }
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    FUN_148512cea(param_1 + 0x80);
    FUN_148512e2e(param_1 + 0x80);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1418 FUN_1484e1418 body=158 status=ok
// SIG undefined FUN_1484e1418(void)

void FUN_1484e1418(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e14b8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e14b8 FUN_1484e14b8 body=358 status=ok
// SIG undefined FUN_1484e14b8(void)

void FUN_1484e14b8(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0xd0);
    lVar2 = param_1 + 0xe0;
    local_58 = 0x100000000;
    local_48 = (longlong *)&DAT_ffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0xf8) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0xf8);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    plVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_68 = plVar3, uStack_50 != lVar2)) {
      do {
        local_68 = plVar3;
        FUN_14850b920(&local_58,(longlong)iVar4 * 0x20 + *local_80);
        FUN_1401bf202(local_48);
        (**(code **)(*local_48 + 0x420))(local_48,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        plVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar5));
    }
  }
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    FUN_148513a40(param_1 + 0xd0);
    FUN_148513b84(param_1 + 0xd0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1624 FUN_1484e1624 body=158 status=ok
// SIG undefined FUN_1484e1624(void)

void FUN_1484e1624(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e16c4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e16c4 FUN_1484e16c4 body=337 status=ok
// SIG undefined FUN_1484e16c4(void)

void FUN_1484e16c4(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar2 = param_1 + 0x40;
    local_58 = 0x100000000;
    local_48 = (longlong *)&DAT_ffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x58);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    plVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_68 = plVar3, uStack_50 != lVar2)) {
      do {
        local_68 = plVar3;
        FUN_14850b834(&local_58,(longlong)iVar4 * 0x20 + *local_80);
        FUN_1401bf202(local_48);
        (**(code **)(*local_48 + 0x420))(local_48,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        plVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar5));
    }
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    FUN_1485130a0(param_1 + 0x30);
    FUN_1485131e4(param_1 + 0x30);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1822 FUN_1484e1822 body=257 status=ok
// SIG undefined FUN_1484e1822(void)

void FUN_1484e1822(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e1924(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1924 FUN_1484e1924 body=162 status=ok
// SIG undefined FUN_1484e1924(void)

bool FUN_1484e1924(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  plVar6 = (longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar4 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar4 = uVar7;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  iVar3 = FUN_1485125ac(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x20 + *plVar6;
  }
  puVar8 = (undefined8 *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (longlong *)*puVar8;
    FUN_148512b96(plVar6,param_2);
    if (param_3 != '\0') {
      FUN_1401bf202(plVar1);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
    }
  }
  return puVar8 != (undefined8 *)0x0;
}



// FUNCTION 1484e19d2 FUN_1484e19d2 body=257 status=ok
// SIG undefined FUN_1484e19d2(void)

void FUN_1484e19d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e1ad4(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1ad4 FUN_1484e1ad4 body=165 status=ok
// SIG undefined FUN_1484e1ad4(void)

bool FUN_1484e1ad4(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  plVar6 = (longlong *)(param_1 + 0xd0);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar4 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar4 = uVar7;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  iVar3 = FUN_148513302(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x20 + *plVar6;
  }
  puVar8 = (undefined8 *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (longlong *)*puVar8;
    FUN_1485138ec(plVar6,param_2);
    if (param_3 != '\0') {
      FUN_1401bf202(plVar1);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
    }
  }
  return puVar8 != (undefined8 *)0x0;
}



// FUNCTION 1484e1b86 FUN_1484e1b86 body=257 status=ok
// SIG undefined FUN_1484e1b86(void)

void FUN_1484e1b86(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e1c88(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1c88 FUN_1484e1c88 body=162 status=ok
// SIG undefined FUN_1484e1c88(void)

bool FUN_1484e1c88(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  plVar6 = (longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar4 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar4 = uVar7;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  iVar3 = FUN_148511fc2(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x20 + *plVar6;
  }
  puVar8 = (undefined8 *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (longlong *)*puVar8;
    FUN_148512f4c(plVar6,param_2);
    if (param_3 != '\0') {
      FUN_1401bf202(plVar1);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
    }
  }
  return puVar8 != (undefined8 *)0x0;
}



// FUNCTION 1484e1d2a FUN_1484e1d2a body=156 status=ok
// SIG undefined FUN_1484e1d2a(void)

void FUN_1484e1d2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e1dc8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1dc8 FUN_1484e1dc8 body=302 status=ok
// SIG undefined FUN_1484e1dc8(void)

void FUN_1484e1dc8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x90;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0xa8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  uVar3 = local_68;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
  iVar4 = local_68._4_4_;
  local_80 = plVar1;
  if ((local_68._4_4_ != iVar5) || (local_68 = uVar3, uStack_50 != lVar2)) {
    do {
      local_68 = uVar3;
      FUN_14850b8aa(&local_58,(longlong)iVar4 * 0x20 + *local_80);
      FUN_1484d0608(local_48,param_2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      iVar4 = local_68._4_4_;
      uVar3 = local_68;
    } while (local_80 != plVar1 ||
             (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1ef8 FUN_1484e1ef8 body=156 status=ok
// SIG undefined FUN_1484e1ef8(void)

void FUN_1484e1ef8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484e1f96(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e1f96 FUN_1484e1f96 body=346 status=ok
// SIG undefined FUN_1484e1f96(void)

void FUN_1484e1f96(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0xf8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  lVar3 = local_68;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
  iVar4 = local_68._4_4_;
  local_80 = plVar1;
  if ((local_68._4_4_ != iVar5) || (local_68 = lVar3, uStack_50 != lVar2)) {
    do {
      local_68 = lVar3;
      FUN_14850b920(&local_58,(longlong)iVar4 * 0x20 + *local_80);
      lVar3 = local_48;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(param_2);
      }
      *(longlong *)(lVar3 + 0x650) = param_2;
      FUN_1406552bc(lVar3,0,param_2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      iVar4 = local_68._4_4_;
      lVar3 = local_68;
    } while (local_80 != plVar1 ||
             (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e20f8 FUN_1484e20f8 body=254 status=ok
// SIG undefined FUN_1484e20f8(void)

void FUN_1484e20f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  uVar1 = FUN_1484e21f8(param_1,local_38,local_40);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e21f8 FUN_1484e21f8 body=127 status=ok
// SIG undefined FUN_1484e21f8(void)

bool FUN_1484e21f8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_1485125ac((longlong *)(param_1 + 0x80),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x80);
  }
  puVar5 = (undefined8 *)(uVar6 + 0x10);
  if (uVar6 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1484d0608(*puVar5,param_3);
  }
  return puVar5 != (undefined8 *)0x0;
}



// FUNCTION 1484e2284 FUN_1484e2284 body=257 status=ok
// SIG undefined FUN_1484e2284(void)

void FUN_1484e2284(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e2386(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e2386 FUN_1484e2386 body=129 status=ok
// SIG undefined FUN_1484e2386(void)

bool FUN_1484e2386(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_1485125ac((longlong *)(param_1 + 0x80),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x80);
  }
  puVar5 = (undefined8 *)(uVar6 + 0x10);
  if (uVar6 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14045627c(*puVar5,param_3,1);
  }
  return puVar5 != (undefined8 *)0x0;
}



// FUNCTION 1484e240e FUN_1484e240e body=254 status=ok
// SIG undefined FUN_1484e240e(void)

void FUN_1484e240e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  uVar1 = FUN_1484e250e(param_1,local_38,local_40);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e250e FUN_1484e250e body=164 status=ok
// SIG undefined FUN_1484e250e(void)

bool FUN_1484e250e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar4 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar4 = uVar7;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  iVar3 = FUN_148513302((longlong *)(param_1 + 0xd0),uVar2,param_2);
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xd0);
  }
  plVar6 = (longlong *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *plVar6;
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_3);
    }
    *(longlong *)(lVar1 + 0x650) = param_3;
    FUN_1406552bc(lVar1,0,param_3);
  }
  return plVar6 != (longlong *)0x0;
}



// FUNCTION 1484e25be FUN_1484e25be body=257 status=ok
// SIG undefined FUN_1484e25be(void)

void FUN_1484e25be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484e26c0(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e26c0 FUN_1484e26c0 body=132 status=ok
// SIG undefined FUN_1484e26c0(void)

bool FUN_1484e26c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_148513302((longlong *)(param_1 + 0xd0),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xd0);
  }
  puVar5 = (undefined8 *)(uVar6 + 0x10);
  if (uVar6 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14045627c(*puVar5,param_3,1);
  }
  return puVar5 != (undefined8 *)0x0;
}



// FUNCTION 1484e2747 FUN_1484e2747 body=148 status=ok
// SIG undefined FUN_1484e2747(void)

undefined8 FUN_1484e2747(undefined8 param_1)

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
  uVar1 = FUN_140f974a4();
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



// FUNCTION 1484e27dc FUN_1484e27dc body=35 status=ok
// SIG undefined FUN_1484e27dc(void)

void FUN_1484e27dc(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1413d4c10(*(longlong *)(param_1 + 0x28),param_2,0,0,0);
  }
  return;
}



// FUNCTION 1484e2800 FUN_1484e2800 body=751 status=ok
// SIG undefined FUN_1484e2800(void)

void FUN_1484e2800(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x58);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uVar3 = local_78;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar4 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar5) || (local_78 = uVar3, uStack_60 != lVar2)) {
    do {
      local_78 = uVar3;
      FUN_14850b834(&local_68,(longlong)iVar4 * 0x20 + *local_90);
      FUN_14045627c(local_58,param_2,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      uVar3 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar5));
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x90;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0xa8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uVar3 = local_78;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar4 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar5) || (local_78 = uVar3, uStack_60 != lVar2)) {
    do {
      local_78 = uVar3;
      FUN_14850b8aa(&local_68,(longlong)iVar4 * 0x20 + *local_90);
      FUN_14045627c(local_58,param_2,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      uVar3 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar5));
  }
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0xf8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uVar3 = local_78;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar4 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar5) || (local_78 = uVar3, uStack_60 != lVar2)) {
    do {
      local_78 = uVar3;
      FUN_14850b920(&local_68,(longlong)iVar4 * 0x20 + *local_90);
      FUN_14045627c(local_58,param_2,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      uVar3 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e2af0 FUN_1484e2af0 body=148 status=ok
// SIG undefined FUN_1484e2af0(void)

undefined8 FUN_1484e2af0(undefined8 param_1)

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
  uVar1 = FUN_14588af30();
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



// FUNCTION 1484e2b86 FUN_1484e2b86 body=162 status=ok
// SIG undefined FUN_1484e2b86(void)

longlong FUN_1484e2b86(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1484e1188();
  if (lVar1 == 0) {
    lVar1 = FUN_1484e0ac6(param_1,param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1484e2c02;
    }
  }
  FUN_1484e2c2a(lVar1);
  local_48 = *param_4;
  local_40 = param_4[1];
  local_58 = 0;
  FUN_1484e2cd8(lVar1,param_3,&local_48,param_5);
LAB_1484e2c02:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e2c2a FUN_1484e2c2a body=173 status=ok
// SIG undefined FUN_1484e2c2a(void)

void FUN_1484e2c2a(longlong *param_1)

{
  int iVar1;
  
  if (*(int *)((longlong)param_1 + 0x69c) < 0) {
    *(undefined4 *)(param_1 + 0xd3) = 0;
    FUN_1456b3fa4(param_1 + 0xd2,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  param_1[0xd8] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (*(int *)((longlong)param_1 + 0x6fc) < (int)param_1[0xda]) {
    iVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x638))(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xda] - *(int *)((longlong)param_1 + 0x6fc));
  }
  FUN_1484e322c(param_1 + 0xd9);
  FUN_148513e8a(param_1 + 0xe0);
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0xd1) = 1;
  return;
}



// FUNCTION 1484e2cd8 FUN_1484e2cd8 body=298 status=ok
// SIG undefined FUN_1484e2cd8(void)

void FUN_1484e2cd8(longlong param_1,int param_2,undefined8 *param_3,int param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  if (0 < param_4) {
    FUN_1484e3340(param_1 + 0x690,
                  (param_4 * param_2 + *(int *)(param_1 + 0x698)) - *(int *)(param_1 + 0x6c4));
    FUN_1485141da(&local_68,param_4);
  }
  if (0 < param_2) {
    iVar2 = 0;
    do {
      bVar3 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar3) {
        FUN_1485141da(&local_68,0);
      }
      local_4c = iVar2;
      (*(code *)*param_3)(param_3[1],&local_4c,&local_68);
      if ((longlong)(int)uStack_60 != 0) {
        lVar1 = (longlong)(int)uStack_60 * 0xe0;
        do {
          FUN_1484e350c(param_1);
          lVar1 = lVar1 + -0xe0;
        } while (lVar1 != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  if (param_5 == '\0') {
    FUN_1448215fa(param_1);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e2e03 FUN_1484e2e03 body=148 status=ok
// SIG undefined FUN_1484e2e03(void)

undefined8 FUN_1484e2e03(undefined8 param_1)

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
  uVar1 = FUN_141153e08();
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



// FUNCTION 1484e2e98 FUN_1484e2e98 body=162 status=ok
// SIG undefined FUN_1484e2e98(void)

longlong FUN_1484e2e98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1484e0f44();
  if (lVar1 == 0) {
    lVar1 = FUN_1484e0748(param_1,param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1484e2f00;
    }
  }
  FUN_1484d04e2(lVar1);
  local_48 = *param_4;
  local_40 = param_4[1];
  local_58 = 0;
  FUN_1484d1044(lVar1,param_3,&local_48,param_5);
LAB_1484e2f00:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e2f3b FUN_1484e2f3b body=148 status=ok
// SIG undefined FUN_1484e2f3b(void)

undefined8 FUN_1484e2f3b(undefined8 param_1)

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
  uVar1 = FUN_141247bec();
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



// FUNCTION 1484e2fd0 FUN_1484e2fd0 body=150 status=ok
// SIG undefined FUN_1484e2fd0(void)

void FUN_1484e2fd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1484e1064();
  if (lVar1 == 0) {
    lVar1 = FUN_1484e08f8(param_1,param_2);
    if (lVar1 == 0) goto LAB_1484e3043;
  }
  FUN_1484debd2(lVar1);
  local_48 = *param_4;
  local_40 = param_4[1];
  FUN_1484df4c8(lVar1,param_3,&local_48,param_5);
LAB_1484e3043:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e3074 FUN_1484e3074 body=386 status=ok
// SIG undefined FUN_1484e3074(void)

undefined4 FUN_1484e3074(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  ulonglong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  ulonglong *local_78;
  undefined4 *puStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  if ((int)param_1[0xe1] != *(int *)((longlong)param_1 + 0x734)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 0xe7;
    if ((longlong *)param_1[0xe8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xe8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[0xe9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(param_1[0xe0] + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            uVar2 = (undefined4)puVar1[1];
            goto LAB_1484e31cd;
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = (ulonglong *)0x0;
  puStack_70 = (undefined4 *)0x0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  FUN_148513cfc(param_1 + 0xd9,local_88);
  FUN_148513dde(local_80,&local_78);
  FUN_1484e31f8(&local_78);
  puStack_70 = &local_94;
  local_94 = local_88[0];
  local_78 = &local_90;
  FUN_1474bddaa(param_1 + 0xe0,local_88,&local_78,0);
  (**(code **)(*param_1 + 0x638))(param_1,local_94,local_90);
  uVar2 = local_94;
LAB_1484e31cd:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e31f8 FUN_1484e31f8 body=52 status=ok
// SIG undefined FUN_1484e31f8(void)

void FUN_1484e31f8(longlong *param_1)

{
  FUN_148513ca2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484e322c FUN_1484e322c body=275 status=ok
// SIG undefined FUN_1484e322c(void)

void FUN_1484e322c(longlong *param_1)

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
      FUN_1484e31f8((longlong)iStack_44 * 0x38 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e3340 FUN_1484e3340 body=424 status=ok
// SIG undefined FUN_1484e3340(void)

void FUN_1484e3340(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong *_Dst;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = (int)param_1[1];
  uVar8 = param_2 - iVar2;
  if (uVar8 != 0 && iVar2 <= (int)param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)param_2);
    }
    iVar9 = *(int *)((longlong)param_1 + 0xc);
    iVar10 = iVar2;
    if (iVar9 < (int)param_2) {
      FUN_1456b3fa4(param_1);
      iVar10 = (int)param_1[1];
      iVar9 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar10 + uVar8;
    if ((uint)(iVar9 - iVar10) < uVar8) {
      FUN_1459b6280(param_1);
    }
    if (iVar10 < (int)param_2) {
      lVar3 = *param_1;
      iVar9 = *(int *)((longlong)param_1 + 0x34);
      uVar6 = (ulonglong)param_2;
      do {
        if (iVar9 != 0) {
          *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = (int)uVar6 + -1;
        }
        *(undefined4 *)(lVar3 + -8 + uVar6 * 8) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (undefined4)param_1[6];
        }
        uVar1 = uVar6 - 1;
        *(undefined4 *)(lVar3 + -4 + uVar6 * 8) = uVar4;
        *(int *)(param_1 + 6) = (int)uVar6 + -1;
        iVar9 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar9;
        uVar6 = uVar1;
      } while ((longlong)iVar10 < (longlong)uVar1);
    }
    if (iVar2 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar11 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar11) {
          FUN_14499171c(plVar7,0,uVar11,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar11 = uVar11 + (uVar11 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar11 << 2));
        iVar2 = (int)param_1[5];
        iVar9 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar9 = iVar2;
        }
        if (iVar2 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar5 = -(char)(iVar2 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar4 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar4,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1484e34ea FUN_1484e34ea body=34 status=ok
// SIG undefined FUN_1484e34ea(void)

void FUN_1484e34ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1448215fa();
  FUN_1484e350c(param_1,param_2);
  return;
}



// FUNCTION 1484e350c FUN_1484e350c body=150 status=ok
// SIG undefined FUN_1484e350c(void)

undefined4 FUN_1484e350c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1484e3074(param_1,*param_2);
  uVar2 = FUN_1484e35a4((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x6c8),param_2);
  FUN_1485140fe(param_1 + 0x690,local_38);
  *local_30 = CONCAT44(uVar2,iVar1);
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x688) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e35a4 FUN_1484e35a4 body=126 status=ok
// SIG undefined FUN_1484e35a4(void)

undefined4 FUN_1484e35a4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148514012(param_1,local_28);
  lVar1 = *param_2;
  *local_20 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  memcpy(local_20 + 1,param_2 + 1,0xd8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e3624 FUN_1484e3624 body=155 status=ok
// SIG undefined FUN_1484e3624(void)

void FUN_1484e3624(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1484e3074(param_1,*param_3);
  uVar2 = FUN_1484e35a4((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x6c8),param_3);
  FUN_14851424a(param_1 + 0x690,local_40,param_2);
  *local_38 = CONCAT44(uVar2,iVar1);
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x688) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e36c0 FUN_1484e36c0 body=473 status=ok
// SIG undefined FUN_1484e36c0(void)

void FUN_1484e36c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  lVar3 = param_1[0xd9];
  uVar4 = *(ulonglong *)(param_1[0xd2] + (longlong)param_2 * 8);
  lVar8 = (longlong)(int)uVar4 * 0x38;
  FUN_148514388(lVar3 + lVar8,uVar4 >> 0x20);
  if (*(int *)(lVar3 + 8 + lVar8) == *(int *)(lVar3 + 0x34 + lVar8)) {
    FUN_1484e31f8(lVar8 + param_1[0xd9]);
    FUN_148514402(param_1 + 0xd9,uVar4 & 0xffffffff);
    plVar1 = param_1 + 0xe0;
    plVar2 = param_1 + 0xe2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = plVar2;
    if ((int)param_1[0xe5] != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_1[0xe5];
    }
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar7) || (local_60 != plVar2)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar5;
      do {
        if (*(int *)(*local_90 + 8 + (longlong)iVar6 * 0x18) == (int)uVar4) {
          uVar5 = local_78;
          if (*(longlong *)(*local_90 + (longlong)iVar6 * 0x18) != 0) {
            FUN_148514476(plVar1);
            uVar5 = local_78;
          }
          break;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar1 || (local_80 != plVar2 || local_78._4_4_ != iVar7));
    }
    local_78 = uVar5;
    (**(code **)(*param_1 + 0x638))(param_1,uVar4 & 0xffffffff,0);
  }
  FUN_148514558(param_1 + 0xd2,param_2);
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0xd1) = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e389a FUN_1484e389a body=544 status=ok
// SIG undefined FUN_1484e389a(void)

undefined4 *
FUN_1484e389a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_200 [72];
  undefined8 local_1b8 [9];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90 [5];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_8 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_8);
  }
  local_128 = param_8;
  local_110 = param_3[2];
  local_120 = *param_3;
  uStack_118 = param_3[1];
  local_e8 = param_7[2];
  local_f8 = *param_7;
  uStack_f0 = param_7[1];
  local_108 = 0;
  uStack_100 = 0;
  local_e0 = 0xffffffff;
  local_c8 = param_4[2];
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_a0 = param_7[2];
  local_b0 = *param_7;
  uStack_a8 = param_7[1];
  local_c0 = 0x3ff0000000000000;
  local_b8 = 0;
  local_98 = 0xffffffff;
  local_90[2] = param_5[2];
  local_90[0] = *param_5;
  local_90[1] = param_5[1];
  local_58 = param_7[2];
  local_68 = *(undefined4 *)param_7;
  uStack_64 = *(undefined4 *)((longlong)param_7 + 4);
  uStack_60 = *(undefined4 *)(param_7 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0xc);
  local_90[3] = 0x3ff0000000000000;
  local_90[4] = 0x3ff0000000000000;
  local_50 = 0xffffffff;
  local_208 = param_8;
  if ((param_8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(param_8);
  }
  memcpy(local_200,&local_120,0xd8);
  puVar4 = local_90;
  puVar5 = local_1b8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_160 = param_6[2];
  local_170 = *param_6;
  uStack_168 = param_6[1];
  local_148 = *(undefined4 *)param_7;
  uStack_144 = *(undefined4 *)((longlong)param_7 + 4);
  uStack_140 = *(undefined4 *)(param_7 + 1);
  uStack_13c = *(undefined4 *)((longlong)param_7 + 0xc);
  local_138 = param_7[2];
  local_158 = 0;
  local_150 = 0x3ff0000000000000;
  local_130 = 0xffffffff;
  FUN_1448215fa(param_1);
  uVar1 = FUN_1484e350c(param_1,&local_128);
  FUN_1448215fa(param_1);
  uVar2 = FUN_1484e350c(param_1,&local_208);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e3abc FUN_1484e3abc body=653 status=ok
// SIG undefined FUN_1484e3abc(void)

void FUN_1484e3abc(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x6c8);
  lVar2 = param_1 + 0x6d8;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = lVar2;
  if (*(int *)(param_1 + 0x6f0) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(param_1 + 0x6f0);
  }
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78 = local_a8;
  lVar3 = local_78;
  uStack_70 = uStack_a0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != lVar2)) {
    iVar6 = local_78._4_4_;
    local_78 = lVar3;
    do {
      lVar5 = *local_90;
      lVar3 = lVar5 + (longlong)iVar6 * 0x38;
      lVar10 = lVar3 + 0x10;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar10;
      if (*(int *)(lVar3 + 0x28) != 0) {
        FUN_1449c0562(&local_68);
      }
      plVar8 = (longlong *)(lVar5 + (longlong)iVar6 * 0x38);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar7 = *(uint *)(plVar8 + 5);
      local_68 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
      local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
      local_50 = uVar7 & 0xffffffe0;
      local_b8 = plVar8;
      local_60 = lVar10;
      if (*(uint *)(plVar8 + 5) != uVar7) {
        FUN_1449c0562(&local_68);
        uVar7 = local_58._4_4_;
      }
      lVar3 = local_60;
      if ((local_b8 != plVar8 || local_a8 != local_60) || uStack_a0._4_4_ != uVar7) {
        do {
          lVar5 = *local_b8;
          lVar10 = (longlong)(int)uStack_a0._4_4_ * 0xe0;
          uVar4 = *param_2;
          *(undefined4 *)(lVar5 + 0x48 + lVar10) = uVar4;
          *(undefined4 *)(lVar5 + 0x90 + lVar10) = uVar4;
          *(undefined4 *)(lVar5 + 0xd8 + lVar10) = *param_2;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar8 || (local_a8 != lVar3 || uStack_a0._4_4_ != uVar7));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      lVar3 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar9));
  }
  local_78 = lVar3;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e3d4a FUN_1484e3d4a body=502 status=ok
// SIG undefined FUN_1484e3d4a(void)

void FUN_1484e3d4a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  uint local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar4 = FUN_1484e3074();
  local_70 = (longlong *)(param_1 + 0x690);
  local_148 = param_1 + 0x6a0;
  local_150 = 0x100000000;
  local_140 = 0xffffffff;
  iStack_13c = 0;
  local_138 = 0;
  if (*(int *)(param_1 + 0x6b8) != 0) {
    FUN_1449c0562(&local_150);
  }
  local_68 = local_150;
  local_60 = local_148;
  local_58 = local_140;
  iStack_54 = iStack_13c;
  local_50 = local_138;
  local_4c = local_134;
  if (iStack_13c < *(int *)(local_148 + 0x18)) {
    do {
      iVar1 = *(int *)(*local_70 + (longlong)iStack_54 * 8);
      if (iVar1 != iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar1 * 0x38);
        lVar5 = (longlong)*(int *)(*local_70 + 4 + (longlong)iStack_54 * 8) * 0xe0;
        if ((DAT_14c950c29 == 1) && (*(longlong *)(lVar2 + lVar5) != 0)) {
          FUN_14689c22e();
        }
        bVar3 = DAT_14c950c29;
        memcpy(&local_148,(void *)(lVar2 + lVar5 + 8),0xd8);
        if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
          FUN_14689c22e(param_2);
        }
        iVar1 = iStack_54;
        local_150 = param_2;
        FUN_1484e36c0(param_1,iStack_54);
        FUN_1484e3624(param_1,iVar1,&local_150);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  FUN_1448215fa(param_1);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e3f42 FUN_1484e3f42 body=66 status=ok
// SIG undefined FUN_1484e3f42(void)

undefined8 FUN_1484e3f42(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x6c4) < *(int *)(param_1 + 0x698)) {
    uVar1 = FUN_14001cc68(0x610,0x10);
    FUN_143b82264(uVar1,param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1484e3f8c FUN_1484e3f8c body=1288 status=ok
// SIG undefined FUN_1484e3f8c(void)

undefined8 FUN_1484e3f8c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x688) != '\x01') goto LAB_1484e440e;
  local_148 = (longlong *)(param_1 + 0x6c8);
  lVar1 = param_1 + 0x6d8;
  local_130 = (longlong *)&DAT_100000000;
  local_120 = 0xffffffff;
  uStack_118 = uStack_118 & 0xffffffff00000000;
  local_140 = param_3;
  local_138 = param_2;
  uStack_128 = lVar1;
  if (*(int *)(param_1 + 0x6f0) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_130);
    iVar10 = *(int *)(param_1 + 0x6f0);
  }
  local_108 = local_148;
  local_100 = local_130;
  lStack_f8 = uStack_128;
  local_f0 = local_120;
  lVar2 = local_f0;
  uStack_e8 = uStack_118;
  local_f0._4_4_ = (int)((ulonglong)local_120 >> 0x20);
  if (local_f0._4_4_ == iVar10) {
    uVar25 = 0;
    uVar26 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar13 = 0;
    uVar14 = 0;
    if (uStack_128 != lVar1) goto LAB_1484e40b9;
  }
  else {
LAB_1484e40b9:
    uVar13 = 0;
    uVar14 = 0;
    bVar7 = false;
    uVar22 = 0;
    uVar23 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar25 = 0;
    uVar26 = 0;
    iVar8 = local_f0._4_4_;
    local_f0 = lVar2;
    do {
      lVar6 = *local_108;
      lVar2 = lVar6 + (longlong)iVar8 * 0x38;
      lVar11 = lVar2 + 0x10;
      local_e0 = 0x100000000;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = lVar11;
      if (*(int *)(lVar2 + 0x28) != 0) {
        FUN_1449c0562(&local_e0);
      }
      plVar12 = (longlong *)(lVar6 + (longlong)iVar8 * 0x38);
      uStack_118 = local_d0;
      local_110 = local_c8;
      local_10c = local_c4;
      uStack_128 = local_e0;
      local_120 = local_d8;
      uVar9 = *(uint *)(plVar12 + 5);
      local_e0 = CONCAT44(1 << ((byte)uVar9 & 0x1f),(int)uVar9 >> 5);
      local_d0 = CONCAT44(uVar9,-1 << ((byte)uVar9 & 0x1f));
      local_c8 = uVar9 & 0xffffffe0;
      local_130 = plVar12;
      local_d8 = lVar11;
      if (*(uint *)(plVar12 + 5) != uVar9) {
        FUN_1449c0562(&local_e0);
        uVar9 = local_d0._4_4_;
      }
      lVar2 = local_d8;
      if ((local_130 != plVar12 || local_120 != local_d8) || uStack_118._4_4_ != uVar9) {
        do {
          lVar6 = *local_130 + (longlong)(int)uStack_118._4_4_ * 0xe0;
          dVar3 = *(double *)(*local_130 + 8 + (longlong)(int)uStack_118._4_4_ * 0xe0);
          uVar27 = SUB84(dVar3,0);
          uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (bVar7) {
            if (dVar3 <= (double)CONCAT44(uVar21,uVar20)) {
              uVar20 = uVar27;
              uVar21 = uVar28;
            }
            dVar4 = *(double *)(lVar6 + 0x10);
            dVar5 = *(double *)(lVar6 + 0x18);
            uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
            if (dVar4 <= (double)CONCAT44(uVar23,uVar22)) {
              uVar22 = SUB84(dVar4,0);
              uVar23 = uVar24;
            }
            uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
            if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
              uVar13 = SUB84(dVar5,0);
              uVar14 = uVar15;
            }
            if ((double)CONCAT44(uVar26,uVar25) <= dVar3) {
              uVar25 = uVar27;
              uVar26 = uVar28;
            }
            if ((double)CONCAT44(uVar17,uVar16) <= dVar4) {
              uVar16 = SUB84(dVar4,0);
              uVar17 = uVar24;
            }
            if ((double)CONCAT44(uVar19,uVar18) <= dVar5) {
              uVar18 = SUB84(dVar5,0);
              uVar19 = uVar15;
            }
          }
          else {
            uVar16 = (undefined4)*(undefined8 *)(lVar6 + 0x10);
            uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x10) >> 0x20);
            uVar13 = (undefined4)*(undefined8 *)(lVar6 + 0x18);
            uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
            uVar18 = uVar13;
            uVar19 = uVar14;
            uVar20 = uVar27;
            uVar21 = uVar28;
            uVar22 = uVar16;
            uVar23 = uVar17;
            uVar25 = uVar27;
            uVar26 = uVar28;
          }
          dVar3 = *(double *)(lVar6 + 0x50);
          dVar4 = *(double *)(lVar6 + 0x58);
          uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= (double)CONCAT44(uVar21,uVar20)) {
            uVar20 = SUB84(dVar3,0);
            uVar21 = uVar27;
          }
          uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
          if (dVar4 <= (double)CONCAT44(uVar23,uVar22)) {
            uVar22 = SUB84(dVar4,0);
            uVar23 = uVar28;
          }
          dVar5 = *(double *)(lVar6 + 0x60);
          uVar24 = (undefined4)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
            uVar13 = SUB84(dVar5,0);
            uVar14 = uVar24;
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar3) {
            uVar25 = SUB84(dVar3,0);
            uVar26 = uVar27;
          }
          if ((double)CONCAT44(uVar17,uVar16) <= dVar4) {
            uVar16 = SUB84(dVar4,0);
            uVar17 = uVar28;
          }
          if ((double)CONCAT44(uVar19,uVar18) <= dVar5) {
            uVar18 = SUB84(dVar5,0);
            uVar19 = uVar24;
          }
          dVar3 = *(double *)(lVar6 + 0x98);
          uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= (double)CONCAT44(uVar21,uVar20)) {
            uVar20 = SUB84(dVar3,0);
            uVar21 = uVar27;
          }
          dVar4 = *(double *)(lVar6 + 0xa0);
          uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
          if (dVar4 <= (double)CONCAT44(uVar23,uVar22)) {
            uVar22 = SUB84(dVar4,0);
            uVar23 = uVar28;
          }
          dVar5 = *(double *)(lVar6 + 0xa8);
          uVar24 = (undefined4)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
            uVar13 = SUB84(dVar5,0);
            uVar14 = uVar24;
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar3) {
            uVar25 = SUB84(dVar3,0);
            uVar26 = uVar27;
          }
          if ((double)CONCAT44(uVar17,uVar16) <= dVar4) {
            uVar16 = SUB84(dVar4,0);
            uVar17 = uVar28;
          }
          if ((double)CONCAT44(uVar19,uVar18) <= dVar5) {
            uVar18 = SUB84(dVar5,0);
            uVar19 = uVar24;
          }
          uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
          FUN_1449c0562(&uStack_128);
          bVar7 = true;
        } while (local_130 != plVar12 || (local_120 != lVar2 || uStack_118._4_4_ != uVar9));
      }
      local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~local_100._4_4_);
      FUN_1449c0562(&local_100);
      iVar8 = local_f0._4_4_;
      lVar2 = local_f0;
    } while (local_108 != local_148 || (lStack_f8 != lVar1 || local_f0._4_4_ != iVar10));
  }
  local_f0 = lVar2;
  dVar4 = ((double)CONCAT44(uVar19,uVar18) - (double)CONCAT44(uVar14,uVar13)) * 0.5;
  dVar3 = ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
  dVar5 = ((double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar21,uVar20)) * 0.5;
  *(double *)(param_1 + 0x650) = (double)CONCAT44(uVar21,uVar20) + dVar5;
  *(double *)(param_1 + 0x658) = (double)CONCAT44(uVar23,uVar22) + dVar3;
  *(double *)(param_1 + 0x660) = (double)CONCAT44(uVar14,uVar13) + dVar4;
  *(double *)(param_1 + 0x668) = dVar5;
  *(double *)(param_1 + 0x670) = dVar3;
  *(double *)(param_1 + 0x678) = dVar4;
  *(double *)(param_1 + 0x680) = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
  *(undefined1 *)(param_1 + 0x688) = 0;
  param_2 = local_138;
  param_3 = local_140;
LAB_1484e440e:
  FUN_144a80a4c(param_1 + 0x650,param_2,param_3);
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484e44b4 FUN_1484e44b4 body=816 status=ok
// SIG undefined FUN_1484e44b4(void)

void FUN_1484e44b4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = FUN_1484e47e5();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  FUN_14851b11a(lVar1,param_2,&DAT_14c846480);
  FUN_14851b89a(*(undefined8 *)(param_1 + 0x30),0);
  lVar1 = FUN_1484e487a(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_1484e0ce2(lVar1,param_2,&DAT_14c846480);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14af117a0;
  local_68[0] = FUN_143b89640;
  local_40 = param_1;
  FUN_1484de4b4(*(undefined8 *)(param_1 + 0x38),local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  lVar1 = FUN_1484e2af0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x48));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  FUN_140486fc4(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50),0);
  FUN_140b506a4(*(undefined8 *)(param_1 + 0x40));
  lVar1 = FUN_1484e490f(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  local_98 = 0;
  local_88 = &PTR_LAB_14af117c0;
  local_a8 = &LAB_143b896be;
  local_80 = param_1;
  FUN_1484c9b00(lVar1 + 0x28,lVar1 + 0xa8);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14af117e0;
  local_e8 = &LAB_143b89712;
  local_c0 = param_1;
  FUN_1484c9b00(*(longlong *)(param_1 + 0x28) + 0x28,*(longlong *)(param_1 + 0x28) + 200);
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xa8) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xa8);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xa9) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 200);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xaa) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 200);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xab) = 0;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xac) = 0;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xae) = 0;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xb0) = 0x3f000000;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xcc) = 0x3f000000;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xd0) = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120);
  lVar3 = (longlong)*(int *)(lVar1 + 0x30);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x28);
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar4) + 8))();
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  lVar1 = FUN_148557ea9(&DAT_149e1e2f8,0,0);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x50) = lVar1;
    if (lVar1 != 0) goto LAB_1484e479d;
    lVar1 = FUN_148557883();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) goto LAB_1484e4791;
  }
  else {
LAB_1484e4791:
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x50) = lVar1;
LAB_1484e479d:
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e47e5 FUN_1484e47e5 body=148 status=ok
// SIG undefined FUN_1484e47e5(void)

undefined8 FUN_1484e47e5(undefined8 param_1)

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
  uVar1 = FUN_1410a5580();
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



// FUNCTION 1484e487a FUN_1484e487a body=148 status=ok
// SIG undefined FUN_1484e487a(void)

undefined8 FUN_1484e487a(undefined8 param_1)

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
  uVar1 = FUN_14121c29a();
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



// FUNCTION 1484e490f FUN_1484e490f body=148 status=ok
// SIG undefined FUN_1484e490f(void)

undefined8 FUN_1484e490f(undefined8 param_1)

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
  uVar1 = FUN_1459ef064();
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



// FUNCTION 1484e49a4 FUN_1484e49a4 body=84 status=ok
// SIG undefined FUN_1484e49a4(void)

void FUN_1484e49a4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  (**(code **)(*plVar1 + 0x2a8))(plVar1);
  if (plVar1[5] != 0) {
    FUN_140aeefbc(plVar1[5],0,1);
    plVar1[5] = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1484e49f8 FUN_1484e49f8 body=39 status=ok
// SIG undefined FUN_1484e49f8(void)

void FUN_1484e49f8(longlong param_1)

{
  FUN_14113129a(param_1 + 0x58);
  FUN_14851b480(*(undefined8 *)(param_1 + 0x30),param_1 + 0x58);
  return;
}



// FUNCTION 1484e4a20 FUN_1484e4a20 body=181 status=ok
// SIG undefined FUN_1484e4a20(void)

void FUN_1484e4a20(longlong param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_3 + 6) == '\0') {
    uVar3 = 0xffffffff;
    uVar4 = 0xffefffff;
    uVar5 = 0xffffffff;
    uVar6 = 0x7fefffff;
    uVar9 = 0x7fefffffffffffff;
    uVar10 = 0xffefffffffffffff;
    uVar11 = 0xffefffffffffffff;
    uVar7 = uVar5;
    uVar8 = uVar6;
  }
  else {
    uVar5 = (undefined4)*param_3;
    uVar6 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar9 = param_3[2];
    uVar3 = (undefined4)param_3[3];
    uVar4 = (undefined4)((ulonglong)param_3[3] >> 0x20);
    uVar10 = param_3[4];
    uVar11 = param_3[5];
    uVar7 = (int)param_3[1];
    uVar8 = (int)((ulonglong)param_3[1] >> 0x20);
  }
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uVar6,uVar5);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uVar8,uVar7);
  *(undefined8 *)(param_1 + 0xb0) = uVar9;
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uVar4,uVar3);
  *(undefined8 *)(param_1 + 0xc0) = uVar10;
  *(undefined8 *)(param_1 + 200) = uVar11;
  auVar1 = *param_2;
  uVar11 = *(undefined8 *)(param_2[2] + 8);
  uVar7 = *(undefined4 *)param_2[3];
  uVar8 = *(undefined4 *)(param_2[3] + 4);
  uVar9 = *(undefined8 *)(param_2[1] + 8);
  uVar10 = *(undefined8 *)param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  *(int *)(param_1 + 0x80) = auVar1._0_4_;
  *(int *)(param_1 + 0x84) = auVar1._4_4_;
  auVar2._8_4_ = (int)uVar10;
  auVar2._0_8_ = auVar1._8_8_;
  auVar2._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  return;
}



// FUNCTION 1484e4ad6 FUN_1484e4ad6 body=61 status=ok
// SIG undefined FUN_1484e4ad6(void)

void FUN_1484e4ad6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14851b91a(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28);
  if (lVar1 != 0) {
    FUN_1413d4c10(lVar1,param_2,0,0,0);
  }
  return;
}



// FUNCTION 1484e4b14 FUN_1484e4b14 body=1035 status=ok
// SIG undefined FUN_1484e4b14(void)

void FUN_1484e4b14(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [11];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_2 + 0x18))(param_2,local_108);
  pdVar11 = local_108;
  pdVar12 = (double *)(param_1 + 0x110);
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar12 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    pdVar12 = pdVar12 + 1;
  }
  FUN_1484e4f20(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xa8) == '\x01') {
    dVar13 = *(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xa8);
    local_108[2] = *(double *)(param_1 + 0xe0);
    local_108[0] = *(double *)(param_1 + 0xd0);
    local_108[1] = *(double *)(param_1 + 0xd8);
    dVar1 = *(double *)(param_1 + 0xe8);
    dVar2 = *(double *)(param_1 + 0xf0);
    dVar3 = *(double *)(param_1 + 0xf8);
    dVar5 = dVar3 + dVar3;
    dVar6 = dVar2 + dVar2;
    dVar4 = *(double *)(param_1 + 0x100);
    dVar14 = (double)(float)((double)(-(ulonglong)(0.0 <= dVar13) & (ulonglong)dVar13) *
                            (double)*(float *)(*(longlong *)(param_1 + 0x28) + 0xb0));
    dVar13 = (dVar5 * dVar1 - dVar6 * dVar4) * dVar14;
    dVar7 = (dVar5 * dVar4 + dVar6 * dVar1) * dVar14;
    dVar8 = (1.0 - (dVar2 * dVar6 + dVar3 * dVar5)) * dVar14;
    dVar2 = (dVar5 * dVar2 + dVar4 * (dVar1 + dVar1)) * dVar14;
    dVar3 = (1.0 - ((dVar1 + dVar1) * dVar1 + dVar3 * dVar5)) * dVar14;
    dVar14 = (dVar6 * dVar1 - dVar5 * dVar4) * dVar14;
    plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    local_110 = local_108[2] + dVar13;
    local_118 = local_108[1] + dVar7;
    local_120 = local_108[0] + dVar8;
    local_140 = 1;
    local_148 = 0;
    local_150 = 0x3f000000;
    local_158 = 1;
    (**(code **)(*plVar9 + 0x30))(plVar9,local_108,&local_120,&DAT_149e1e308);
    plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    local_128 = local_108[2] + dVar13;
    local_130 = local_108[1] + dVar7;
    local_138 = local_108[0] + dVar8;
    local_110 = dVar2 + local_128;
    local_118 = dVar3 + local_130;
    local_120 = dVar14 + local_138;
    local_140 = 1;
    local_148 = 0;
    local_150 = 0x3f000000;
    local_158 = 1;
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_138,&local_120,&DAT_149e1e308);
    plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    local_110 = dVar2 + local_108[2];
    local_118 = dVar3 + local_108[1];
    local_120 = dVar14 + local_108[0];
    local_128 = dVar13 + local_108[2] + dVar2;
    local_130 = dVar7 + local_108[1] + dVar3;
    local_138 = dVar8 + local_108[0] + dVar14;
    local_140 = 1;
    local_148 = 0;
    local_150 = 0x3f000000;
    local_158 = 1;
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_138,&local_120,&DAT_149e1e308);
    plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    local_110 = dVar2 + local_108[2];
    local_118 = dVar3 + local_108[1];
    local_120 = dVar14 + local_108[0];
    local_140 = 1;
    local_148 = 0;
    local_150 = 0x3f000000;
    local_158 = 1;
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_120,local_108,&DAT_149e1e308);
  }
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e4f20 FUN_1484e4f20 body=1734 status=ok
// SIG undefined FUN_1484e4f20(void)

void FUN_1484e4f20(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f8 = (double)DAT_14c8464f0;
  local_108 = DAT_14c8464e0;
  dStack_100 = (double)DAT_14c8464e8;
  dStack_f0 = 0.0;
  dStack_e8 = 0.0;
  local_e0 = 0.0;
  dStack_d8 = 1.0;
  dVar6 = *(double *)(param_1 + 0x140);
  dVar7 = *(double *)(param_1 + 0x130);
  dVar13 = *(double *)(param_1 + 0x138);
  dVar2 = dVar6 - dVar7 * 0.0;
  dVar3 = dVar7 * 0.0 - dVar13;
  dVar12 = dVar13 * 0.0 + dVar6 * -0.0;
  dVar3 = dVar3 + dVar3;
  dVar2 = dVar2 + dVar2;
  dVar12 = dVar12 + dVar12;
  dVar1 = *(double *)(param_1 + 0x148);
  local_178 = -((dVar7 * dVar2 - dVar12 * dVar13) + dVar1 * dVar3 + 0.0);
  local_188 = -((dVar13 * dVar3 - dVar2 * dVar6) + dVar12 * dVar1 + 1.0);
  dStack_180 = -((dVar6 * dVar12 - dVar3 * dVar7) + dVar1 * dVar2 + 0.0);
  FUN_1482ae234(&local_108,2,&local_188);
  local_188 = dStack_f0 * (local_e0 + local_e0) + dStack_d8 * (dStack_e8 + dStack_e8);
  dStack_180 = (local_e0 + local_e0) * dStack_e8 - (dStack_f0 + dStack_f0) * dStack_d8;
  local_178 = 1.0 - ((dStack_e8 + dStack_e8) * dStack_e8 + dStack_f0 * (dStack_f0 + dStack_f0));
  dVar6 = *(double *)(param_1 + 0x140);
  dVar7 = *(double *)(param_1 + 0x130);
  dVar13 = *(double *)(param_1 + 0x138);
  dVar3 = dVar7 - dVar13 * 0.0;
  dVar2 = dVar6 * 0.0 + dVar7 * -0.0;
  dVar12 = dVar13 * 0.0 - dVar6;
  dVar3 = dVar3 + dVar3;
  dVar2 = dVar2 + dVar2;
  dVar12 = dVar12 + dVar12;
  dVar1 = *(double *)(param_1 + 0x148);
  local_110 = (dVar7 * dVar2 - dVar12 * dVar13) + dVar1 * dVar3 + 0.0;
  local_118 = (dVar6 * dVar12 - dVar3 * dVar7) + dVar1 * dVar2 + 1.0;
  local_120 = (dVar13 * dVar3 - dVar2 * dVar6) + dVar12 * dVar1 + 0.0;
  uVar5 = 0;
  FUN_1482ae2be(&local_108,0,&local_120,&local_188);
  local_f8 = (*(double *)(param_1 + 0xb0) + *(double *)(param_1 + 200)) * 0.5;
  dStack_100 = (*(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xc0)) * 0.5;
  local_108 = (*(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0xb8)) * 0.5;
  uVar8 = 0xffffffff;
  uVar10 = 0xffefffff;
  dVar6 = 1.79769313486232e+308;
  do {
    lVar4 = param_1 + 0x18;
    if (((uVar5 >> 1 ^ uVar5) & 1) == 0) {
      lVar4 = param_1;
    }
    local_188 = *(double *)(lVar4 + 0xa0);
    lVar4 = param_1 + 0x20;
    if ((uVar5 & 2) == 0) {
      lVar4 = param_1 + 8;
    }
    dStack_180 = *(double *)(lVar4 + 0xa0);
    lVar4 = param_1 + 0x28;
    if (uVar5 < 4) {
      lVar4 = param_1 + 0x10;
    }
    local_178 = *(double *)(lVar4 + 0xa0);
    FUN_146bca7ae(&local_108,&local_120,&local_188,2);
    dVar7 = local_120;
    if (dVar6 <= local_120) {
      dVar7 = dVar6;
    }
    uVar9 = SUB84(local_120,0);
    uVar11 = (int)((ulonglong)local_120 >> 0x20);
    if (local_120 <= (double)CONCAT44(uVar10,uVar8)) {
      uVar9 = uVar8;
      uVar11 = uVar10;
    }
    uVar5 = uVar5 + 1;
    uVar8 = uVar9;
    uVar10 = uVar11;
    dVar6 = dVar7;
  } while (uVar5 != 8);
  lVar4 = *(longlong *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xa8);
  dVar6 = (double)(float)((double)(-(ulonglong)(0.0 <= dVar6) & (ulonglong)dVar6) *
                         (double)*(float *)(lVar4 + 0xb0));
  dVar13 = (double)CONCAT44(uVar11,uVar9) - dVar7;
  dVar13 = (double)(-(ulonglong)(0.0 <= dVar13) & (ulonglong)dVar13);
  if (*(int *)(lVar4 + 0xac) == 0) {
    dVar7 = dVar7 - *(double *)(lVar4 + 0xb8) * (dVar13 * 0.1 + dVar6);
  }
  else {
    dVar7 = (dVar13 * 0.1 + (double)CONCAT44(uVar11,uVar9)) * *(double *)(lVar4 + 0xb8);
  }
  dVar13 = *(double *)(lVar4 + 0xc0) * dVar6;
  dVar1 = local_e0 + local_e0;
  dVar2 = dStack_e8 + dStack_e8;
  local_108 = ((1.0 - (dStack_e8 * dVar2 + local_e0 * dVar1)) * dVar7 -
              (dVar2 * dStack_f0 - dVar1 * dStack_d8) * dVar13) + local_108;
  dStack_100 = ((dVar1 * dStack_d8 + dVar2 * dStack_f0) * dVar7 -
               (1.0 - ((dStack_f0 + dStack_f0) * dStack_f0 + local_e0 * dVar1)) * dVar13) +
               dStack_100;
  local_158 = ((dVar1 * dStack_f0 - dVar2 * dStack_d8) * dVar7 -
              (dVar1 * dStack_e8 + dStack_d8 * (dStack_f0 + dStack_f0)) * dVar13) + local_f8;
  *(double *)(param_1 + 0xf0) = dStack_e8;
  *(double *)(param_1 + 0xf8) = local_e0;
  *(double *)(param_1 + 0x100) = dStack_d8;
  *(double *)(param_1 + 0xe0) = local_158;
  *(double *)(param_1 + 0xe8) = dStack_f0;
  *(double *)(param_1 + 0xd0) = local_108;
  *(double *)(param_1 + 0xd8) = dStack_100;
  local_138 = DAT_14c846520 * dVar6;
  local_188 = dStack_f0;
  dStack_180 = dStack_e8;
  local_178 = local_e0;
  dStack_170 = dStack_d8;
  local_168._8_4_ = SUB84(dStack_100,0);
  local_168._0_8_ = local_108;
  local_168._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  uStack_150 = 0;
  local_148._8_4_ = SUB84(DAT_14c846518 * dVar6,0);
  local_148._0_8_ = dVar6 * DAT_14c846510;
  local_148._12_4_ = (int)((ulonglong)(DAT_14c846518 * dVar6) >> 0x20);
  uStack_130 = 0;
  local_f8 = local_158;
  FUN_1484e4ad6(param_1);
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e55e8 FUN_1484e55e8 body=222 status=ok
// SIG undefined FUN_1484e55e8(void)

void FUN_1484e55e8(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x160) == '\x01') {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xa8);
    FUN_14851bab8(*(undefined8 *)(param_1 + 0x30),
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xa8) = uVar1;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xa9) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 200);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 0xaa) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 200);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120);
    lVar3 = (longlong)*(int *)(lVar2 + 0x30);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar4) + 8))();
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar2 + 0x130) == '\x01') {
    FUN_1484de806(lVar2);
    *(undefined1 *)(lVar2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1484e56c6 FUN_1484e56c6 body=1610 status=ok
// SIG undefined FUN_1484e56c6(void)

void FUN_1484e56c6(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_3e8 [32];
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  double *local_3b8;
  undefined8 local_3b0;
  uint local_39c;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388;
  double local_380;
  double local_378;
  undefined8 local_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  undefined8 local_350;
  double local_348;
  undefined8 local_340;
  undefined8 local_334;
  undefined4 local_32c;
  double local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined1 local_2ee;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [520];
  longlong local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)local_3e8;
  local_3c8 = (undefined8 *)((ulonglong)local_3c8 & 0xffffffffffffff00);
  uVar12 = 0;
  local_388 = param_1;
  FUN_1411b354a(local_2d0,0,0,0);
  FUN_14582ed12(local_2d0);
  if (0 < *(int *)(local_c8 + 0x28)) {
    uVar12 = **(undefined8 **)(local_c8 + 0x20);
  }
  if (*(int *)(local_c8 + 0x38) < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = **(undefined8 **)(local_c8 + 0x30);
  }
  if ((int)param_3 < 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((int)param_3 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28)) {
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (ulonglong)param_3 * 8);
    }
  }
  uVar11 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar6 = 0;
  if ((uVar11 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar4 = 1;
    if (1 < (int)uVar11) {
      uVar7 = uVar11;
    }
    do {
      uVar6 = uVar7;
      if (uVar7 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar9 = uVar4 & 0x1ff;
      uVar6 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar5] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  fVar16 = (float)DAT_14c84635c;
  fVar18 = DAT_14c8461b4._4_4_;
  fVar20 = (float)DAT_14c8461b4;
  fVar22 = DAT_14c84635c._4_4_;
  uVar7 = uVar11;
  if (uVar6 != uVar11) {
    do {
      local_390 = uVar12;
      local_398 = uVar14;
      local_39c = uVar7;
      uVar7 = uVar6 * 3;
      lVar3 = *(longlong *)(lVar8 + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < iVar1) {
        local_350 = (double)CONCAT44(*(undefined4 *)
                                      (*(longlong *)(lVar3 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4),iVar1);
        local_348 = (double)CONCAT44(local_348._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)(lVar3 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4));
        lVar3 = 0;
        fVar15 = fVar16;
        fVar17 = fVar18;
        fVar19 = fVar20;
        fVar21 = fVar22;
        do {
          uVar11 = *(uint *)((longlong)&local_350 + lVar3 * 4);
          lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x48) + (ulonglong)(uVar11 >> 5 & 0x3fffff8))
          ;
          uVar10 = (ulonglong)((uVar11 & 0xff) << 3);
          fVar20 = *(float *)(lVar13 + uVar10);
          fVar18 = *(float *)(lVar13 + 4 + uVar10);
          *(float *)(&local_2e8 + lVar3) = fVar20;
          *(float *)((longlong)&local_2e8 + lVar3 * 8 + 4) = fVar18;
          fVar16 = fVar20;
          if (fVar15 <= fVar20) {
            fVar16 = fVar15;
          }
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          fVar22 = fVar18;
          if (fVar21 <= fVar18) {
            fVar22 = fVar21;
          }
          if (fVar18 <= fVar17) {
            fVar18 = fVar17;
          }
          lVar3 = lVar3 + 1;
          fVar15 = fVar16;
          fVar17 = fVar18;
          fVar19 = fVar20;
          fVar21 = fVar22;
        } while (lVar3 != 3);
        local_368 = -NAN;
        local_360 = (double)CONCAT44(local_360._4_4_,0xffffffff);
        local_380 = -NAN;
        local_378 = (double)CONCAT44(local_378._4_4_,0xffffffff);
        local_334 = 0xffffffffffffffff;
        local_32c = 0xffffffff;
        lVar13 = 0;
        lVar3 = 0;
        do {
          uVar2 = FUN_146c2d0a4(local_390,(longlong)&local_2e8 + lVar13);
          dStack_320 = (double)*(float *)((longlong)&local_2e8 + lVar3 * 2 + 4);
          local_328 = (double)*(float *)((longlong)&local_2e8 + lVar3 * 2);
          *(undefined4 *)((longlong)&local_380 + lVar3) = uVar2;
          local_318 = 0;
          local_308 = DAT_14c846338;
          local_310 = DAT_14c846330;
          local_2fc = DAT_14c846338;
          local_304 = DAT_14c846330;
          local_2f8 = CONCAT44(DAT_14c84635c._4_4_,(float)DAT_14c84635c);
          local_2f0 = 0;
          local_2ee = 0;
          uVar2 = FUN_146c02208(local_2d0,&local_328);
          *(undefined4 *)((longlong)&local_368 + lVar3) = uVar2;
          dStack_320 = (double)CONCAT44(dStack_320._4_4_,DAT_14c84636c);
          local_328 = DAT_14c846364;
          uVar2 = FUN_146c2f9e2(local_398,&local_328);
          *(undefined4 *)((longlong)&local_334 + lVar3) = uVar2;
          lVar3 = lVar3 + 4;
          lVar13 = lVar13 + 8;
        } while (lVar3 != 0xc);
        if (0.0 < ((local_2d8._4_4_ - local_2e8._4_4_) * ((float)local_2e0 - (float)local_2e8) -
                  ((float)local_2d8 - (float)local_2e8) * (local_2e0._4_4_ - local_2e8._4_4_)) * 0.5
           ) {
          local_368 = (double)((longlong)local_368 << 0x20 | (ulonglong)local_368 >> 0x20);
          local_380 = (double)((longlong)local_380 << 0x20 | (ulonglong)local_380 >> 0x20);
        }
        uVar2 = FUN_146c01152(local_2d0,&local_368,0);
        FUN_146c01486(local_390,uVar2,&local_380,1);
        FUN_146c01580(local_398,uVar2,&local_334,1);
        uVar11 = local_39c;
      }
      uVar7 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar11) {
        uVar7 = uVar11;
      }
      do {
        uVar4 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar4 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar4;
      uVar7 = local_39c;
      uVar14 = local_398;
      uVar12 = local_390;
    } while (uVar6 != uVar11);
  }
  lVar8 = local_388;
  FUN_1484e2c2a(*(undefined8 *)(local_388 + 0x40));
  if (*(char *)(lVar8 + 0x48) != '\0') {
    local_3b0 = *(undefined8 *)(lVar8 + 0x50);
    local_3b8 = &local_328;
    local_328 = 0.0;
    dStack_320 = 0.0;
    local_318 = 0xbff0000000000000;
    local_378 = (double)(fVar22 + -0.01);
    local_350 = (double)(fVar20 + 0.01);
    local_3c0 = &local_2e8;
    local_2d8 = 0xbf847ae140000000;
    local_360 = (double)(fVar18 + 0.01);
    local_3c8 = &local_350;
    local_340 = 0xbf847ae140000000;
    local_380 = (double)(fVar16 + -0.01);
    local_358 = 0xbf847ae140000000;
    local_370 = 0xbf847ae140000000;
    local_368 = local_380;
    local_348 = local_360;
    local_2e8 = local_350;
    local_2e0 = local_378;
    FUN_1484e389a(*(undefined8 *)(lVar8 + 0x40),&local_334);
  }
  FUN_14851bd0c(*(undefined8 *)(lVar8 + 0x30),local_2d0,1,0xf);
  FUN_1484dea34(*(undefined8 *)(lVar8 + 0x38));
  FUN_141082778(local_2d0);
  if ((local_b0 ^ (ulonglong)local_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e5d22 FUN_1484e5d22 body=719 status=ok
// SIG undefined FUN_1484e5d22(void)

void FUN_1484e5d22(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x270) != '\x01') goto LAB_1484e5f73;
  lVar1 = param_1 + 0x120;
  FUN_14845339e(lVar1);
  iVar3 = *(int *)(param_1 + 0xd0);
  if (0 < iVar3) {
    uVar8 = 0x260;
    if (*(char *)(param_1 + 0x5b4) == '\0') {
      uVar8 = (ulonglong)*(byte *)(param_1 + 0x5b5) << 5 | 0x240;
    }
    lVar9 = uVar8 + param_1;
    if (iVar3 != 1) {
      lVar10 = 0;
      uVar8 = (ulonglong)(iVar3 - 1);
      do {
        FUN_1484e5ff2(lVar1,*(longlong *)(param_1 + 200) + lVar10,
                      *(longlong *)(param_1 + 200) + lVar10 + 0x38,lVar9);
        lVar10 = lVar10 + 0x38;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (*(char *)(param_1 + 0x5b5) == '\0') {
      if (*(char *)(param_1 + 0x110) == '\x01') {
        lVar9 = (ulonglong)*(byte *)(param_1 + 0x5b4) * 0x10 + param_1 + 0x250;
        lVar10 = param_1 + 0xd8;
        lVar7 = (ulonglong)(iVar3 - 1) * 0x38 + *(longlong *)(param_1 + 200);
        goto LAB_1484e5fe8;
      }
    }
    else if (*(char *)(param_1 + 0x5b6) == '\x01') {
      lVar7 = *(longlong *)(param_1 + 200);
      lVar10 = lVar7 + (longlong)*(int *)(param_1 + 0xd0) * 0x38 + -0x38;
LAB_1484e5fe8:
      FUN_1484e5ff2(lVar1,lVar7,lVar10,lVar9);
    }
  }
  if ((*(char *)(param_1 + 0x5b5) == '\0') && (*(char *)(param_1 + 0x110) == '\x01')) {
    local_b8 = *(undefined1 *)(param_1 + 0x15c);
    dVar12 = *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 0x220);
    dVar13 = *(double *)(param_1 + 0xe0) * *(double *)(param_1 + 0x228);
    dVar11 = *(double *)(param_1 + 0xe8) * *(double *)(param_1 + 0x230);
    dVar4 = *(double *)(param_1 + 0x1f0);
    dVar2 = *(double *)(param_1 + 0x1f8);
    dVar5 = *(double *)(param_1 + 0x1e0);
    dVar6 = *(double *)(param_1 + 0x1e8);
    dVar14 = dVar13 * dVar5 - dVar12 * dVar6;
    dVar15 = dVar11 * dVar6 - dVar13 * dVar4;
    dVar16 = dVar12 * dVar4 - dVar5 * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar4 * dVar15 - dVar5 * dVar14) + *(double *)(param_1 + 0x1f8) * dVar16 + dVar13 +
             *(double *)(param_1 + 0x208);
    local_98 = dVar14 * dVar2 + dVar11 + (dVar16 * dVar5 - dVar15 * dVar6) +
               *(double *)(param_1 + 0x210);
    local_a8._8_4_ = SUB84(dVar13,0);
    local_a8._0_8_ =
         (dVar14 * dVar6 - dVar16 * dVar4) + dVar2 * dVar15 + dVar12 + *(double *)(param_1 + 0x200);
    local_a8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x10))
              (lVar1,local_a8,param_1 + 0x250,*(undefined4 *)(param_1 + 0x154));
  }
  FUN_14845342a(lVar1);
LAB_1484e5f73:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e5ff2 FUN_1484e5ff2 body=725 status=ok
// SIG undefined FUN_1484e5ff2(void)

void FUN_1484e5ff2(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = *(undefined1 *)((longlong)param_1 + 0x3c);
  local_e8 = (undefined4)param_1[4];
  dVar4 = *param_3 * (double)param_1[0x20];
  dVar5 = param_3[1] * (double)param_1[0x21];
  dVar3 = param_3[2] * (double)param_1[0x22];
  dVar1 = (double)param_1[0x1b];
  dVar2 = (double)param_1[0x1b];
  dVar9 = (double)param_1[0x18];
  dVar10 = (double)param_1[0x19];
  dVar11 = (double)param_1[0x1a];
  dVar6 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar7 = dVar3 * dVar10 - dVar5 * dVar11;
  dVar8 = dVar4 * dVar11 - dVar3 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar5 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar2 * dVar8 + dVar5 + (double)param_1[0x1d];
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (dVar6 * dVar10 - dVar8 * dVar11) + dVar1 * dVar7 + dVar4 + (double)param_1[0x1c]
  ;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = dVar6 * dVar1 + dVar3 + (dVar8 * dVar9 - dVar7 * dVar10) + (double)param_1[0x1e];
  dVar7 = *param_2 * (double)param_1[0x20];
  dVar8 = param_2[1] * (double)param_1[0x21];
  dVar5 = param_2[2] * (double)param_1[0x22];
  dVar3 = dVar8 * dVar9 - dVar10 * dVar7;
  dVar6 = dVar5 * dVar10 - dVar11 * dVar8;
  dVar4 = dVar7 * dVar11 - dVar9 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar2 = (dVar11 * dVar6 - dVar9 * dVar3) + dVar2 * dVar4 + dVar8 + (double)param_1[0x1d];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ = (dVar3 * dVar10 - dVar4 * dVar11) + dVar1 * dVar6 + dVar7 + (double)param_1[0x1c]
  ;
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8 = dVar3 * dVar1 + dVar5 + (dVar4 * dVar9 - dVar6 * dVar10) + (double)param_1[0x1e];
  (**(code **)(*param_1 + 8))();
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e62c8 FUN_1484e62c8 body=89 status=ok
// SIG undefined FUN_1484e62c8(void)

void FUN_1484e62c8(longlong param_1)

{
  FUN_146c00942(param_1 + 0x278);
  *(longlong *)(param_1 + 0x4a8) = param_1 + 0x278;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  FUN_146bee918(param_1 + 0x4a0,0);
  *(ulonglong *)(param_1 + 0x4b0) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(param_1 + 0x4a8) + 0x214) +
             *(int *)(*(longlong *)(param_1 + 0x4a8) + 0x218));
  return;
}



// FUNCTION 1484e6394 FUN_1484e6394 body=1625 status=ok
// SIG undefined FUN_1484e6394(void)

undefined4 FUN_1484e6394(longlong param_1,double *param_2,double *param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  double *pdVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 *local_210;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0 [7];
  uint local_184;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double *local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_d0;
  
  dVar4 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_200 = param_1 + 0x278;
  dVar7 = 1.79769313486232e+308;
  uVar16 = 0;
  uVar17 = 0x3ff00000;
  uVar18 = 0;
  uVar19 = 0;
  if (*(int *)(param_1 + 1000) < 1) {
LAB_1484e64da:
    uVar10 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    local_210 = &local_178;
    local_178 = 1.79769313486232e+308;
    local_168 = 0.0;
    local_158 = (double *)0x0;
    local_128 = 0;
    local_218 = local_1c0;
    (**(code **)(*(longlong *)(param_1 + 0x4a0) + 0x30))
              (param_1 + 0x4a0,param_2,local_180,&local_184);
    uVar9 = local_184;
    if (local_168 != 0.0) {
      pdVar12 = local_158;
      if (local_158 == (double *)0x0) {
        pdVar12 = &local_148;
      }
      (**(code **)((longlong)*pdVar12 + 0x10))();
    }
    lVar2 = local_200;
    if (uVar9 == 0xffffffff) goto LAB_1484e64da;
    FUN_1484e6d92(&local_178,local_200,uVar9,param_2);
    FUN_146c14b3a(lVar2,local_1c0,uVar9,0);
    uVar18 = (undefined4)local_1c0[3];
    uVar19 = (undefined4)((ulonglong)local_1c0[3] >> 0x20);
    uVar20 = (undefined4)local_1c0[4];
    uVar21 = (undefined4)((ulonglong)local_1c0[4] >> 0x20);
    uVar22 = (undefined4)local_1c0[5];
    uVar23 = (undefined4)((ulonglong)local_1c0[5] >> 0x20);
    dVar4 = local_108 * local_e8 + local_120 * local_f0 + local_138 * local_f8;
    dVar6 = local_110 * local_e8 +
            (double)CONCAT71(uStack_127,local_128) * local_f0 + local_140 * local_f8;
    dVar5 = local_e8 * local_118 + local_f0 * local_130 + local_f8 * local_148;
    uVar16 = (undefined4)local_1c0[6];
    uVar17 = (undefined4)((ulonglong)local_1c0[6] >> 0x20);
    dVar7 = (dVar4 - param_2[2]) * param_2[5] +
            (dVar5 - *param_2) * param_2[3] + (dVar6 - param_2[1]) * param_2[4];
    uVar10 = CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
  }
  uVar15 = (undefined4)uVar10;
  if (*(char *)(param_1 + 0x5a8) == '\x01') {
    local_148 = *(double *)(param_1 + 0x5a0);
    local_218 = &local_178;
    local_178 = *(double *)(param_1 + 0x570);
    uStack_170 = *(double *)(param_1 + 0x578);
    local_168 = *(double *)(param_1 + 0x580);
    uStack_160 = *(undefined8 *)(param_1 + 0x588);
    local_158 = *(double **)(param_1 + 0x590);
    uStack_150 = *(undefined8 *)(param_1 + 0x598);
    cVar8 = FUN_14848488c(param_1 + 0x570,param_2,param_2 + 3,2);
    if (cVar8 != '\0') {
      if ((local_168 - param_2[2]) * param_2[5] +
          (local_178 - *param_2) * param_2[3] + (uStack_170 - param_2[1]) * param_2[4] < dVar7) {
        uVar18 = (undefined4)uStack_160;
        uVar19 = (undefined4)((ulonglong)uStack_160 >> 0x20);
        uVar20 = SUB84(local_158,0);
        uVar21 = (undefined4)((ulonglong)local_158 >> 0x20);
        uVar22 = (undefined4)uStack_150;
        uVar23 = (undefined4)((ulonglong)uStack_150 >> 0x20);
        uVar15 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        uVar16 = SUB84(local_148,0);
        uVar17 = (undefined4)((ulonglong)local_148 >> 0x20);
        dVar4 = local_168;
        dVar5 = local_178;
        dVar6 = uStack_170;
      }
    }
  }
  if ((char)uVar15 == '\0') goto LAB_1484e64f6;
  *param_3 = dVar5;
  param_3[1] = dVar6;
  param_3[2] = dVar4;
  param_3[3] = (double)CONCAT44(uVar19,uVar18);
  param_3[4] = (double)CONCAT44(uVar21,uVar20);
  param_3[5] = (double)CONCAT44(uVar23,uVar22);
  param_3[6] = (double)CONCAT44(uVar17,uVar16);
  local_184 = local_184 & 0xffffff00;
  cVar8 = FUN_1484e6abe(param_1,param_3);
  if (cVar8 == '\0') {
    if (param_4 == '\0') goto LAB_1484e64f6;
    if ((*(char *)(param_1 + 0xc0) == '\x01') && (0 < *(int *)(param_1 + 1000))) {
      local_218 = &local_178;
      local_178 = 1.79769313486232e+308;
      local_168 = 0.0;
      local_158 = (double *)0x0;
      local_128 = 0;
      uVar9 = FUN_146bde17a(param_1 + 0x4a0,param_3,local_180,0x7fefffffffffffff);
      if (local_168 != 0.0) {
        pdVar12 = local_158;
        if (local_158 == (double *)0x0) {
          pdVar12 = &local_148;
        }
        (**(code **)((longlong)*pdVar12 + 0x10))();
      }
      if (uVar9 != 0xffffffff) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar9 >> 9) * 8);
        uVar13 = (ulonglong)(uVar9 & 0x1ff);
        local_168 = *(double *)(lVar2 + 0x10 + uVar13 * 0x18);
        pdVar12 = (double *)(lVar2 + uVar13 * 0x18);
        local_178 = *pdVar12;
        uStack_170 = pdVar12[1];
        puVar1 = (undefined8 *)(lVar2 + uVar13 * 0x18);
        local_1d8 = *puVar1;
        uStack_1d0 = puVar1[1];
        local_1c8 = *(undefined8 *)(lVar2 + 0x10 + uVar13 * 0x18);
        local_1f8 = *(undefined4 *)param_3;
        uStack_1f4 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_1f0 = *(undefined4 *)(param_3 + 1);
        uStack_1ec = *(undefined4 *)((longlong)param_3 + 0xc);
        local_1e8 = param_3[2];
        pcVar3 = *(code **)(param_1 + 0x80);
        plVar14 = (longlong *)(param_1 + 0xa0);
        if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_1 + 0x90);
        }
        uVar10 = (**(code **)(*plVar14 + 8))();
        cVar8 = (*pcVar3)(uVar10,&local_1f8,&local_1d8);
        if (cVar8 != '\0') {
          param_3[2] = local_168;
          *(undefined4 *)param_3 = (undefined4)local_178;
          *(undefined4 *)((longlong)param_3 + 4) = local_178._4_4_;
          *(undefined4 *)(param_3 + 1) = (undefined4)uStack_170;
          *(undefined4 *)((longlong)param_3 + 0xc) = uStack_170._4_4_;
          local_218 = (undefined8 *)CONCAT71(local_218._1_7_,1);
          FUN_146c393d4(local_1c0,local_200,uVar9,1);
          FUN_1482ae234(param_3,2,local_1c0);
        }
      }
    }
    if (*(char *)(param_1 + 0xc1) != '\x01') goto LAB_1484e64f6;
    cVar8 = FUN_144729dda(param_1 + 0x28);
    if (cVar8 == '\0') goto LAB_1484e64f6;
    uVar10 = FUN_14479d2ce(param_1 + 0x28);
    cVar8 = FUN_148557342(uVar10,param_3,&local_178);
    if (cVar8 == '\0') goto LAB_1484e64f6;
    param_3[2] = local_168;
    uVar18 = (undefined4)local_178;
    uVar19 = local_178._4_4_;
    uVar16 = (undefined4)uStack_170;
    uVar17 = uStack_170._4_4_;
  }
  else {
    if ((char)local_184 == '\x01') {
      puVar11 = *(undefined4 **)(param_1 + 200);
    }
    else {
      puVar11 = (undefined4 *)
                ((longlong)(*(int *)(param_1 + 0xd0) + -1) * 0x38 + *(longlong *)(param_1 + 200));
    }
    param_3[6] = *(double *)(puVar11 + 0xc);
    uVar18 = *puVar11;
    uVar19 = puVar11[1];
    uVar16 = puVar11[2];
    uVar17 = puVar11[3];
    dVar4 = *(double *)(puVar11 + 4);
    dVar5 = *(double *)(puVar11 + 6);
    dVar6 = *(double *)(puVar11 + 10);
    param_3[4] = *(double *)(puVar11 + 8);
    param_3[5] = dVar6;
    param_3[2] = dVar4;
    param_3[3] = dVar5;
  }
  *(undefined4 *)param_3 = uVar18;
  *(undefined4 *)((longlong)param_3 + 4) = uVar19;
  *(undefined4 *)(param_3 + 1) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
LAB_1484e64f6:
  if ((local_d0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e69ee FUN_1484e69ee body=206 status=ok
// SIG undefined FUN_1484e69ee(void)

undefined4 FUN_1484e69ee(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0x3ff0000000000000;
  uVar2 = FUN_1484e6394(0,param_2,&local_58,1);
  *(char *)(param_1 + 0x110) = (char)uVar2;
  if ((char)uVar2 != '\0') {
    *(undefined8 *)(param_1 + 0x108) = local_28;
    *(undefined4 *)(param_1 + 0xf8) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 0xfc) = uStack_38._4_4_;
    *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x104) = uStack_30._4_4_;
    *(undefined4 *)(param_1 + 0xe8) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0xec) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0xf4) = uStack_40._4_4_;
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0xdc) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0xe4) = uStack_50._4_4_;
    uVar1 = FUN_1484e6abe(param_1,param_1 + 0xd8,0);
    *(undefined1 *)(param_1 + 0x5b4) = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e6abe FUN_1484e6abe body=386 status=ok
// SIG undefined FUN_1484e6abe(void)

undefined8 FUN_1484e6abe(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    uVar4 = *(uint *)(param_1 + 0x5ac);
    if (((uVar4 & 0xfffffffd) == 0) && (2 < *(int *)(param_1 + 0xd0))) {
      puVar1 = *(undefined8 **)(param_1 + 200);
      local_48 = puVar1[2];
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = *(undefined8 *)(param_2 + 4);
      pcVar2 = *(code **)(param_1 + 0x80);
      plVar7 = (longlong *)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x90);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      cVar3 = (*pcVar2)(uVar5,&local_78,&local_58);
      if ((param_3 != (undefined1 *)0x0) && (cVar3 != '\0')) {
        *param_3 = 1;
      }
      uVar5 = 1;
      if (cVar3 != '\0') goto LAB_1484e6c16;
      uVar4 = *(uint *)(param_1 + 0x5ac);
    }
    if ((uVar4 - 1 < 2) && (1 < (longlong)*(int *)(param_1 + 0xd0))) {
      lVar6 = (longlong)*(int *)(param_1 + 0xd0) * 0x38;
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 200) + -0x28 + lVar6);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 200) + -0x38 + lVar6);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      local_b8 = *param_2;
      uStack_b4 = param_2[1];
      uStack_b0 = param_2[2];
      uStack_ac = param_2[3];
      local_a8 = *(undefined8 *)(param_2 + 4);
      pcVar2 = *(code **)(param_1 + 0x80);
      plVar7 = (longlong *)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x90);
      }
      uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
      cVar3 = (*pcVar2)(uVar5,&local_b8,&local_98);
      uVar5 = 1;
      if (cVar3 != '\0') goto LAB_1484e6c16;
    }
  }
  uVar5 = 0;
LAB_1484e6c16:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e6c42 FUN_1484e6c42 body=268 status=ok
// SIG undefined FUN_1484e6c42(void)

undefined4 FUN_1484e6c42(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uVar6 = FUN_1484e6394(0,param_2,&local_68,1);
  if ((char)uVar6 != '\0') {
    cVar5 = FUN_1484e6abe(param_1,&local_68,param_1 + 0x5b6);
    if (cVar5 == '\0') {
      iVar3 = *(int *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0xd0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xd4) < iVar3 + 1U) {
        FUN_146c8d502((longlong *)(param_1 + 200),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 200);
      lVar7 = (longlong)iVar3 * 0x38;
      *(undefined8 *)(lVar4 + 0x30 + lVar7) = local_38;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar7);
      *puVar2 = uStack_48;
      puVar2[1] = uStack_40;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar7);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar7);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
    }
    else {
      *(undefined1 *)(param_1 + 0x5b5) = 1;
    }
    *(undefined1 *)(param_1 + 0x5b4) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e6d50 FUN_1484e6d50 body=65 status=ok
// SIG undefined FUN_1484e6d50(void)

undefined8 FUN_1484e6d50(longlong param_1)

{
  if (*(char *)(param_1 + 0x5b5) == '\x01') {
    *(undefined2 *)(param_1 + 0x5b5) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xd0) < 1) {
      return 0;
    }
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    FUN_146c8d592(param_1 + 200);
  }
  return 1;
}



// FUNCTION 1484e6d92 FUN_1484e6d92 body=263 status=ok
// SIG undefined FUN_1484e6d92(void)

undefined4 * FUN_1484e6d92(undefined4 *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar16 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar15 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar15 * 0xc);
  lVar3 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar19 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar19 * 0x18);
  puVar17 = (undefined8 *)(lVar3 + uVar19 * 0x18);
  local_68[0] = *puVar17;
  local_68[1] = puVar17[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar15 * 0xc);
  lVar3 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar19 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar19 * 0x18);
  puVar17 = (undefined8 *)(lVar3 + uVar19 * 0x18);
  local_68[3] = *puVar17;
  uStack_48 = puVar17[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar15 * 0xc);
  lVar16 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar15 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18);
  puVar17 = (undefined8 *)(lVar16 + uVar15 * 0x18);
  local_38 = *puVar17;
  uStack_30 = puVar17[1];
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  uVar8 = param_4[4];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  uVar12 = param_4[9];
  uVar13 = param_4[10];
  uVar14 = param_4[0xb];
  param_1[8] = param_4[8];
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  param_1[0xb] = uVar14;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  puVar17 = local_68;
  puVar18 = (undefined8 *)(param_1 + 0xc);
  for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  FUN_146bd80f0(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e6e9a FUN_1484e6e9a body=93 status=ok
// SIG undefined FUN_1484e6e9a(void)

ulonglong FUN_1484e6e9a(longlong param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5ac);
  uVar3 = 0;
  if (uVar1 < 3) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x5b5);
  }
  else {
    if (uVar1 == 3) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
      plVar4 = (longlong *)(param_1 + 0x50);
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0x40);
      }
      uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001484e6ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
      return uVar3;
    }
    if (uVar1 == 4) {
      uVar3 = (ulonglong)
              CONCAT31((int3)((uint)*(int *)(param_1 + 0xd0) >> 8),
                       *(int *)(param_1 + 0x5b0) <= *(int *)(param_1 + 0xd0));
    }
  }
  return uVar3;
}



// FUNCTION 1484e6efc FUN_1484e6efc body=287 status=ok
// SIG undefined FUN_1484e6efc(void)

void FUN_1484e6efc(undefined8 param_1,longlong *param_2)

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
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_2[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_2;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar4 = (longlong)iStack_6c;
      iVar3 = FUN_144a7cc9e(param_1,*(undefined4 *)(lVar2 + lVar4 * 0xc));
      if (iVar3 == 0) {
        FUN_1447cbafe(param_1,&local_60,lVar2 + lVar4 * 0xc,0);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e701c FUN_1484e701c body=353 status=ok
// SIG undefined FUN_1484e701c(void)

ulonglong FUN_1484e701c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
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
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) <
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
LAB_1484e7047:
    uVar5 = 0;
    uVar2 = local_58;
  }
  else {
    local_40 = param_2 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    local_70 = param_2;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1484e7047;
        uVar1 = *(uint *)(*local_70 + (longlong)iVar3 * 0xc);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar1) * 4);
        if (iVar3 == -1) goto LAB_1484e7047;
        while (*(uint *)(*param_1 + (longlong)iVar3 * 0xc) != uVar1) {
          iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
          if (iVar3 == -1) goto LAB_1484e7047;
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1484e717e FUN_1484e717e body=2481 status=ok
// SIG undefined FUN_1484e717e(void)

void FUN_1484e717e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484445fc();
  lVar5 = FUN_1484e7b30(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x448) = lVar5;
  *(undefined1 *)(lVar5 + 0x38) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x448) + 0x2a0))(*(longlong **)(param_1 + 0x448),param_2);
  local_88 = FUN_1484e7ca2;
  uStack_80._0_4_ = 0;
  FUN_1484e7bc6(*(longlong *)(param_1 + 0x448) + 0x88,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e7e24;
  uStack_80._0_4_ = 0;
  FUN_1484e7d48(*(longlong *)(param_1 + 0x448) + 0xa0,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e83ca;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  FUN_1484e82ee(*(longlong *)(param_1 + 0x448) + 0xb8,&local_c8,param_1,&local_88);
  uVar6 = FUN_1409ffe1d();
  plVar7 = (longlong *)FUN_1484e866c(uVar6);
  lVar5 = *(longlong *)(param_1 + 0x448) + 0x30;
  if (*(longlong *)(param_1 + 0x448) == 0) {
    lVar5 = 0;
  }
  (**(code **)(*plVar7 + 0x358))(plVar7,param_1 + 0x30,lVar5);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  uStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(plVar7 + 0x10,1,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar9 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar9 = &local_68;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  uStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(plVar7 + 0x10,2,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar9 = local_78;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar8 + 0x2e8))(plVar8,plVar7,0);
  uVar6 = FUN_1409ffe1d();
  plVar7 = (longlong *)FUN_1484101e0(uVar6);
  (**(code **)(*plVar7 + 0x300))(plVar7,param_1 + 0x38);
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar8 + 0x2e8))(plVar8,plVar7,0);
  *(undefined8 *)(param_1 + 0x300) = 0x3f800000ffff0000;
  *(undefined8 *)(param_1 + 0x30c) = 0xffffff00ff00ff00;
  local_c8 = *(code **)(param_1 + 0x400);
  uStack_80 = *(undefined8 *)(param_1 + 0x408);
  local_b8 = *(undefined ****)(param_1 + 0x410);
  uStack_70 = *(undefined8 *)(param_1 + 0x418);
  local_68 = *(undefined ***)(param_1 + 0x420);
  uStack_60 = *(undefined1 **)(param_1 + 0x428);
  local_58 = *(undefined8 *)(param_1 + 0x430);
  uStack_50 = *(undefined8 *)(param_1 + 0x438);
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar2 = uStack_60;
  local_78 = local_b8;
  uVar1 = uStack_70;
  local_88 = local_c8;
  uVar6 = uStack_80;
  *(ulonglong *)(param_1 + 0x430) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x438) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0x420) = &PTR_LAB_14af119b0;
  *(undefined4 *)(param_1 + 0x428) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x42c) = uStack_9c;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(ulonglong *)(param_1 + 0x418) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(param_1 + 0x400) = &LAB_143b897e2;
  *(ulonglong *)(param_1 + 0x408) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (uint)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar6;
  uStack_70 = uVar1;
  uStack_60 = (undefined1 *)uVar2;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if (local_c8 != (code *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &local_a8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  plVar7 = (longlong *)FUN_148444614(param_1);
  uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7);
  uVar6 = FUN_148451354(uVar6);
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3a0) = lVar5;
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3a8) = lVar5;
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3b0) = lVar5;
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3b8) = lVar5;
  lVar5 = FUN_1484c6256(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3c0) = lVar5;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar5 = FUN_14843d06b(uVar6,0x7e,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3d0) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar5 = FUN_14843d06b(uVar6,0x1007e,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3d8) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar5 = FUN_14843d06b(uVar6,0x1fffe,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3e0) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar5 = FUN_14843d06b(uVar6,0x15fe,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 1000) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar5 = FUN_14843d06b(uVar6,0x1fffe,param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(param_1 + 0x3f0) = lVar5;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = FUN_1484e87de;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e8702(*(longlong *)(param_1 + 0x3a0) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e9eae;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3a0) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484ea0da;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3a0) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x3d0) + 800))
            (*(longlong **)(param_1 + 0x3d0),*(undefined8 *)(param_1 + 0x3a0),0);
  (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x350))(*(longlong **)(param_1 + 0x3d0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + 0x83) = 1;
  local_88 = FUN_1484e87de;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e8702(*(longlong *)(param_1 + 0x3a8) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e9eae;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3a8) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484ea0da;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3a8) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x3d8) + 800))
            (*(longlong **)(param_1 + 0x3d8),*(undefined8 *)(param_1 + 0x3a8),0);
  (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x350))(*(longlong **)(param_1 + 0x3d8),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d8) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x3d8) + 0x83) = 1;
  local_88 = FUN_1484e87de;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e8702(*(longlong *)(param_1 + 0x3b0) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e9eae;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3b0) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484ea0da;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3b0) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x3e0) + 800))
            (*(longlong **)(param_1 + 0x3e0),*(undefined8 *)(param_1 + 0x3b0),0);
  (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x350))(*(longlong **)(param_1 + 0x3e0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x3e0) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x3e0) + 0x83) = 1;
  local_88 = FUN_1484e87de;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e8702(*(longlong *)(param_1 + 0x3b8) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e9eae;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3b8) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484ea0da;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3b8) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 1000) + 800))
            (*(longlong **)(param_1 + 1000),*(undefined8 *)(param_1 + 0x3b8),0);
  (**(code **)(**(longlong **)(param_1 + 1000) + 0x350))(*(longlong **)(param_1 + 1000),0);
  *(undefined1 *)(*(longlong *)(param_1 + 1000) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 1000) + 0x83) = 1;
  local_88 = FUN_1484e87de;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e8702(*(longlong *)(param_1 + 0x3c0) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484e9eae;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3c0) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484ea0da;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484e9dd2(*(longlong *)(param_1 + 0x3c0) + 0x70,&local_c8,param_1,&local_88);
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 800))
            (*(longlong **)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x3c0),0);
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x350))(*(longlong **)(param_1 + 0x3f0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x3f0) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x3f0) + 0x83) = 1;
  lVar5 = *(longlong *)(param_1 + 0x3a0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_1 + 0x3a0);
    }
  }
  *(longlong *)(param_1 + 0x3c8) = lVar5;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e7b30 FUN_1484e7b30 body=148 status=ok
// SIG undefined FUN_1484e7b30(void)

undefined8 FUN_1484e7b30(undefined8 param_1)

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
  uVar1 = FUN_1458f267a();
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



// FUNCTION 1484e7bc6 FUN_1484e7bc6 body=218 status=ok
// SIG undefined FUN_1484e7bc6(void)

undefined8
FUN_1484e7bc6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af11860;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e7ca2 FUN_1484e7ca2 body=165 status=ok
// SIG undefined FUN_1484e7ca2(void)

void FUN_1484e7ca2(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c3f772(param_1 + 0x4a8,param_1 + 0x458);
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN_1484ec3d2(param_1);
  plVar1 = (longlong *)FUN_148444614(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  local_28 = DAT_14cb4cc10;
  if (DAT_14cb4cc10 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb4cc10 + 8))();
  }
  local_20 = DAT_14cb4cc18;
  FUN_148558a3c(param_1 + 0x55c,&local_28,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e7d48 FUN_1484e7d48 body=218 status=ok
// SIG undefined FUN_1484e7d48(void)

undefined8
FUN_1484e7d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12a70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af118d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1485148a8(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e7e24 FUN_1484e7e24 body=1224 status=ok
// SIG undefined FUN_1484e7e24(void)

void FUN_1484e7e24(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0;
  undefined8 *local_198;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168 [3];
  undefined8 local_150;
  code *local_148;
  longlong **local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  uint local_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_168[0] = 0;
  local_168[1] = 0;
  local_150 = param_2;
  FUN_1403ed7b2(local_168,*(undefined4 *)(param_1 + 0x198),1);
  local_140 = &local_138;
  local_198 = &local_188;
  local_188 = 0;
  local_180 = (undefined1 *)((ulonglong)local_180._4_4_ << 0x20);
  local_148 = FUN_143b9570a;
  local_1a0 = 0;
  local_138 = (longlong *)(param_1 + 0x130);
  local_130 = &local_150;
  local_128 = local_168;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x198),1);
  iVar4 = *(int *)(param_1 + 0x198);
  if (0 < iVar4) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      if (*(char *)(local_168[0] + lVar9) == '\x01') {
        FUN_1447cbafe(local_98,&local_138,*(longlong *)(param_1 + 400) + lVar8,0);
        iVar4 = *(int *)(param_1 + 0x198);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar9 < iVar4);
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  local_188 = 0x100000000;
  local_178 = 0xffffffff;
  iStack_174 = 0;
  local_170 = 0;
  iVar4 = 0;
  local_180 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_188);
    iVar4 = local_70;
  }
  local_120 = local_178;
  iStack_11c = iStack_174;
  local_118 = local_170;
  local_114 = local_16c;
  local_130 = (undefined8 *)local_188;
  local_128 = (longlong *)local_180;
  local_138 = local_98;
  if ((iStack_174 != iVar4) || (local_180 != local_88)) {
    do {
      if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
        uVar1 = *(uint *)(*local_138 + (longlong)iStack_11c * 0xc);
        lVar8 = *(longlong *)(param_1 + 0x2e0);
        if (*(longlong *)(param_1 + 0x2e0) == 0) {
          lVar8 = param_1 + 0x2d8;
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2e8) - 1U & uVar1) * 4);
        if (iVar7 != -1) {
          do {
            lVar8 = *(longlong *)(param_1 + 0x2a0) + (longlong)iVar7 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar7 * 0x10) == uVar1)
            goto LAB_1484e8115;
            iVar7 = *(int *)(lVar8 + 8);
          } while (iVar7 != -1);
        }
      }
      lVar8 = 0;
LAB_1484e8115:
      FUN_1447cbafe(&local_e8,&local_188,lVar8 + 4,0);
      local_120 = local_120 & ~local_130._4_4_;
      FUN_1449c0562(&local_130);
    } while (local_138 != local_98 || (local_128 != (longlong *)local_88 || iStack_11c != iVar4));
  }
  pcVar2 = *(code **)(param_1 + 800);
  plVar6 = (longlong *)(param_1 + 0x340);
  if (*(longlong **)(param_1 + 0x330) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x330);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x360);
    plVar6 = (longlong *)(param_1 + 0x380);
    if (*(longlong **)(param_1 + 0x370) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x370);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5);
    if (cVar3 == '\0') {
      FUN_145c3f772(param_1 + 0x458,&local_e8);
    }
    else {
      FUN_146286f4e(param_1 + 0x4a8,&local_138,&local_e8);
      FUN_145be27ca(param_1 + 0x458,&local_138);
      local_f0 = 0;
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_138);
    }
  }
  else {
    FUN_145c3f772(param_1 + 0x458,param_1 + 0x4a8);
    pcVar2 = *(code **)(param_1 + 0x360);
    plVar6 = (longlong *)(param_1 + 0x380);
    if (*(longlong **)(param_1 + 0x370) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x370);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5);
    if (cVar3 == '\0') {
      FUN_1468b3f6e(param_1 + 0x458,&local_e8);
    }
    else {
      FUN_1484e6efc();
    }
  }
  FUN_1484ec238(param_1);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_98);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e82ee FUN_1484e82ee body=218 status=ok
// SIG undefined FUN_1484e82ee(void)

undefined8
FUN_1484e82ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12ae0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af11940;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148514c42(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e83ca FUN_1484e83ca body=673 status=ok
// SIG undefined FUN_1484e83ca(void)

void FUN_1484e83ca(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x450) = 0;
  if (*(int *)(param_1 + 0x4b0) - *(int *)(param_1 + 0x4dc) ==
      *(int *)(param_1 + 0x460) - *(int *)(param_1 + 0x48c)) {
    cVar2 = FUN_1484e701c(param_1 + 0x4a8,param_1 + 0x458);
    if (cVar2 != '\0') goto LAB_1484e8600;
  }
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2b0))(*(longlong **)(param_1 + 0x3c8),local_c8);
  local_f0 = param_1 + 0x28;
  plVar3 = (longlong *)FUN_14479d2ce();
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_e8 = lVar4 + 0x28;
  puVar5 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x558);
  *puVar5 = &PTR_LAB_14af07a90;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  FUN_145c3f772(puVar5 + 1,param_1 + 0x4a8);
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar8 = local_c8;
  puVar9 = puVar5 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_c8;
  puVar9 = puVar5 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(puVar5 + 0x24) = uVar1;
  local_e0 = param_1 + 0x458;
  local_d0 = puVar5;
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(local_e8,param_1,&local_d0,&DAT_14cb4cc00);
  plVar3 = (longlong *)FUN_14479d2ce(local_f0);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_f0 = lVar4 + 0x28;
  puVar5 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x558);
  *puVar5 = &PTR_LAB_14af07a90;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  FUN_145c3f772(puVar5 + 1,local_e0);
  *(undefined1 *)(puVar5 + 0xb) = 1;
  puVar8 = local_c8;
  puVar9 = puVar5 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_c8;
  puVar9 = puVar5 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(puVar5 + 0x24) = uVar1;
  local_d8 = puVar5;
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(local_f0,param_1,&local_d8,&DAT_14cb4cc10);
  FUN_1447f69b6(param_1 + 0x58);
LAB_1484e8600:
  FUN_1484ea6be(param_1);
  plVar3 = (longlong *)FUN_148444614(param_1);
  uVar6 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  FUN_148558a82(param_1 + 0x55c,uVar6);
  FUN_1484ec238(param_1);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e866c FUN_1484e866c body=148 status=ok
// SIG undefined FUN_1484e866c(void)

undefined8 FUN_1484e866c(undefined8 param_1)

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
  uVar1 = FUN_1459edee0();
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



// FUNCTION 1484e8702 FUN_1484e8702 body=218 status=ok
// SIG undefined FUN_1484e8702(void)

undefined8
FUN_1484e8702(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af119d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e87de FUN_1484e87de body=5619 status=ok
// SIG undefined FUN_1484e87de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484e87de(longlong param_1,longlong param_2,double *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 (*_Dst) [16];
  undefined8 *puVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar25;
  undefined1 auVar19 [16];
  double dVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  double dVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar58 [16];
  double dVar59;
  undefined4 uVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  double dVar76;
  double dVar77;
  undefined1 auStack_418 [32];
  double local_3f8;
  double dStack_3f0;
  longlong *local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  ulonglong local_378;
  ulonglong uStack_370;
  undefined8 local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar28 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (((*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x48c)) &&
      (*(char *)(param_1 + 0x3f8) == '\x01')) && (*(char *)(param_2 + 0xd1) == '\0')) {
    auVar40 = *(undefined1 (*) [16])(param_1 + 0xe0);
    auVar38 = *(undefined1 (*) [16])(param_1 + 0xf0);
    auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar40._8_8_));
    auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar40._0_8_));
    uVar7 = movmskpd(*(int *)(param_1 + 0x460),auVar51);
    auVar58._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_));
    auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_));
    iVar11 = movmskpd((int)param_1,auVar58);
    uVar12 = iVar11 << 2 | uVar7;
    if (uVar12 == 0) {
      local_3f8 = DAT_14c8464b0;
      dStack_3f0 = DAT_14c8464b8;
      auVar18 = _DAT_14c8464c0;
      auVar40 = _DAT_14c8464d0;
      dVar27 = DAT_14c846490;
      dVar32 = DAT_14c846498;
      dVar34 = DAT_14c8464a0;
      dVar68 = DAT_14c8464a8;
      dVar33 = DAT_14c846480;
      dVar62 = DAT_14c846488;
    }
    else {
      auVar58 = divpd(_DAT_149934d80,auVar40);
      auVar51 = divpd(ZEXT816(0x3ff0000000000000),auVar38);
      auVar18._0_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar40._0_8_)) & auVar58._0_8_);
      auVar18._8_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar40._8_8_)) & auVar58._8_8_);
      dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) & auVar51._0_8_);
      auVar40._8_8_ = 0;
      auVar40._0_8_ = dVar25;
      dVar27 = *(double *)(param_1 + 0xb0) * -1.0;
      dVar32 = *(double *)(param_1 + 0xb8) * 1.0;
      dVar33 = -*(double *)(param_1 + 0xa0);
      dVar62 = -*(double *)(param_1 + 0xa8);
      dVar34 = *(double *)(param_1 + 0xc0) * auVar18._0_8_;
      dVar68 = *(double *)(param_1 + 200) * auVar18._8_8_;
      dVar25 = *(double *)(param_1 + 0xd0) * dVar25;
      dVar66 = dVar68 * dVar33 - dVar62 * dVar34;
      dVar50 = dVar25 * dVar62 - dVar27 * dVar68;
      dVar16 = dVar34 * dVar27 - dVar33 * dVar25;
      dVar50 = dVar50 + dVar50;
      dVar16 = dVar16 + dVar16;
      dVar66 = dVar66 + dVar66;
      dVar34 = 0.0 - ((dVar66 * dVar62 - dVar16 * dVar27) + dVar32 * dVar50 + dVar34);
      dVar68 = 0.0 - (dVar66 * *(double *)(param_1 + 0xa0) + dVar27 * dVar50 +
                     dVar32 * dVar16 + dVar68);
      local_3f8 = 0.0 - (dVar32 * dVar66 + dVar25 + (dVar16 * dVar33 - dVar50 * dVar62));
      dStack_3f0 = 0.0;
    }
    auVar38 = *(undefined1 (*) [16])(param_3 + 8);
    dVar66 = auVar38._0_8_;
    dStack_350 = auVar38._8_8_;
    auVar51 = *(undefined1 (*) [16])(param_3 + 10);
    dVar50 = auVar51._0_8_;
    uVar60 = auVar51._0_4_;
    uVar73 = auVar51._4_4_;
    uVar74 = auVar51._8_4_;
    uVar75 = auVar51._12_4_;
    auVar38 = minpd(auVar38,auVar18);
    auVar51 = minpd(auVar51,auVar40);
    auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
    auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
    iVar11 = movmskpd(uVar7,auVar39);
    auVar38._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
    uVar7 = movmskpd(uVar12,auVar38);
    dVar16 = auVar18._0_8_;
    dVar25 = auVar18._8_8_;
    dVar61 = auVar40._0_8_;
    if ((uVar7 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar16 = dVar16 * param_3[4];
      dVar25 = dVar25 * param_3[5];
      dVar61 = dVar61 * param_3[6];
      dVar63 = auVar40._8_8_ * param_3[7];
      dVar50 = dVar25 * dVar33 - dVar62 * dVar16;
      dVar56 = dVar61 * dVar62 - dVar27 * dVar25;
      dVar65 = dVar16 * dVar27 - dVar33 * dVar61;
      dVar69 = dVar63 * dVar32 - dVar32 * dVar63;
      dVar56 = dVar56 + dVar56;
      dVar65 = dVar65 + dVar65;
      dVar50 = dVar50 + dVar50;
      dVar69 = dVar69 + dVar69;
      local_3f8 = local_3f8 + (dVar65 * dVar33 - dVar62 * dVar56) + dVar32 * dVar50 + dVar61;
      dStack_3f0 = dStack_3f0 + (dVar69 * dVar32 - dVar69 * dVar32) + dVar32 * dVar69 + dVar63;
      local_118 = dVar34 + (dVar50 * dVar62 - dVar27 * dVar65) + dVar32 * dVar56 + dVar16;
      dStack_110 = dVar68 + (dVar56 * dVar27 - dVar50 * dVar33) + dVar32 * dVar65 + dVar25;
    }
    else {
      dVar69 = dVar62 + dVar62;
      dVar65 = dVar27 + dVar27;
      dVar56 = dVar33 * (dVar33 + dVar33);
      local_1f8 = ((double)DAT_149934d80 - (dVar27 * dVar65 + dVar62 * dVar69)) * dVar16;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar27 * dVar65 + dVar56)) * dVar25;
      dVar63 = (dVar33 + dVar33) * dVar32;
      local_1d8 = (dVar69 * dVar33 - dVar65 * dVar32) * dVar25;
      dVar27 = (dVar65 * dVar62 - dVar63) * dVar61;
      dStack_1f0 = (dVar69 * dVar33 + dVar65 * dVar32) * dVar16;
      local_1c8 = (dVar65 * dVar62 + dVar63) * dVar25;
      local_1a8 = (1.0 - (dVar56 + dVar62 * dVar69)) * dVar61;
      local_1e8 = (dVar33 * dVar65 - dVar69 * dVar32) * dVar16;
      dStack_1e0 = 0.0;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar27,0);
      local_1b8._0_8_ = (dVar69 * dVar32 + dVar33 * dVar65) * dVar61;
      local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar68,0);
      local_198._0_8_ = dVar34;
      local_198._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      local_188 = local_3f8;
      uStack_180 = 0x3ff0000000000000;
      dVar27 = *param_3;
      dVar32 = param_3[1];
      dVar33 = param_3[2];
      dVar62 = dVar32 + dVar32;
      dVar56 = dVar33 + dVar33;
      dVar68 = dVar27 * (dVar27 + dVar27);
      dVar34 = param_3[3];
      dVar65 = dVar56 * dVar34;
      dVar63 = (dVar27 + dVar27) * param_3[3];
      dVar34 = dVar62 * dVar34;
      local_258 = (dVar62 * dVar27 - dVar65) * dStack_350;
      dStack_230 = (dVar56 * dVar32 - dVar63) * dVar50;
      local_278 = ((double)DAT_149934d80 - (dVar33 * dVar56 + dVar32 * dVar62)) * dVar66;
      dStack_250 = (DAT_149934d80._8_8_ - (dVar33 * dVar56 + dVar68)) * dStack_350;
      dStack_270 = (dVar62 * dVar27 + dVar65) * dVar66;
      local_248 = (dVar56 * dVar32 + dVar63) * dStack_350;
      local_238 = (dVar34 + *param_3 * dVar56) * dVar50;
      local_268 = (*param_3 * dVar56 - dVar34) * dVar66;
      uStack_260 = 0;
      uStack_240 = 0;
      local_228 = (1.0 - (dVar68 + dVar32 * dVar62)) * dVar50;
      uStack_220 = 0;
      local_218 = param_3[4];
      dStack_210 = param_3[5];
      local_208 = param_3[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar25 * dStack_350);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar66);
      auVar28 = blendvpd(_DAT_149936790,auVar28,auVar19);
      uVar15 = -(ulonglong)(0.0 <= dVar61 * dVar50);
      dVar66 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar50 = auVar28._0_8_;
      local_168 = local_168 * dVar50;
      local_170 = local_170 * dVar50;
      local_178 = (longlong *)((double)local_178 * dVar50);
      dVar50 = auVar28._8_8_;
      local_148 = local_148 * dVar50;
      local_150 = local_150 * dVar50;
      local_158 = dVar50 * local_158;
      local_128 = local_128 * dVar66;
      local_130 = local_130 * dVar66;
      local_138 = dVar66 * local_138;
      FUN_14481fd10(local_298,&local_178);
      local_3f8 = local_108;
      dStack_3f0 = 0.0;
      dVar66 = param_3[8];
      dStack_350 = param_3[9];
      uVar60 = *(undefined4 *)(param_3 + 10);
      uVar73 = *(undefined4 *)((longlong)param_3 + 0x54);
      uVar74 = *(undefined4 *)(param_3 + 0xb);
      uVar75 = *(undefined4 *)((longlong)param_3 + 0x5c);
    }
    local_3e0 = (longlong *)(param_1 + 0x458);
    local_3a8 = *param_3;
    dStack_3a0 = param_3[1];
    local_388 = *(undefined1 (*) [16])(param_3 + 2);
    dVar68 = *(double *)(param_1 + 0xa0);
    dVar27 = *(double *)(param_1 + 0xa8);
    dVar62 = *(double *)(param_1 + 0xb0) * -1.0;
    dVar61 = *(double *)(param_1 + 0xb8) * 1.0;
    dVar50 = *(double *)(param_1 + 0xa0);
    dVar16 = *(double *)(param_1 + 0xa0);
    local_3d8 = *(double *)(param_1 + 0xa8);
    dStack_3d0 = *(double *)(param_1 + 0xa8);
    dVar32 = *(double *)(param_1 + 0x520);
    dVar33 = *(double *)(param_1 + 0x528);
    local_398 = *(undefined1 (*) [16])(param_1 + 0x530);
    dVar34 = (double)CONCAT44(uVar73,uVar60) / *(double *)(param_1 + 0x550);
    uVar60 = SUB84(dStack_350,0);
    uVar2 = (ulonglong)dStack_350 >> 0x20;
    dVar25 = dStack_350 / *(double *)(param_1 + 0x548);
    local_358 = dVar66 / *(double *)(param_1 + 0x540);
    dVar66 = *(double *)(param_1 + 0x508) - *(double *)(param_1 + 0xc0);
    dVar56 = *(double *)(param_1 + 0x510) - *(double *)(param_1 + 200);
    dVar65 = *(double *)(param_1 + 0x518) - *(double *)(param_1 + 0xd0);
    dVar63 = 0.0 - *(double *)(param_1 + 0xd8);
    uVar15 = *(ulonglong *)*(undefined1 (*) [16])(param_1 + 0xe0);
    uVar5 = *(ulonglong *)(param_1 + 0xe8);
    auVar28 = *(undefined1 (*) [16])(param_1 + 0xe0);
    local_378 = *(ulonglong *)(param_1 + 0xf0);
    uStack_370 = *(ulonglong *)(param_1 + 0xf8);
    lVar9 = *(longlong *)(param_1 + 0x80);
    local_360 = *(undefined8 *)(param_1 + 0x90);
    local_3c0 = (double)(param_1 + 0x468);
    local_1f8 = 2.12199579096527e-314;
    local_1e8 = 2.12199579047121e-314;
    dStack_1e0 = (double)((ulonglong)dStack_1e0 & 0xffffffff00000000);
    iVar11 = 0;
    dStack_1f0 = local_3c0;
    if (*(int *)(param_1 + 0x480) != 0) {
      FUN_1449c0562(&local_1f8);
      iVar11 = *(int *)(param_1 + 0x480);
    }
    dVar69 = local_358;
    local_160 = local_1e8;
    dVar6 = local_160;
    local_158 = dStack_1e0;
    local_170 = local_1f8;
    local_168 = dStack_1f0;
    local_178 = local_3e0;
    local_160._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
    if ((local_160._4_4_ != iVar11) || (dStack_1f0 != local_3c0)) {
      local_318 = -dVar68;
      dStack_310 = -dVar27;
      dVar71 = dVar66 * dVar62 - local_318 * dVar65;
      dVar72 = dVar61 * 0.0 - dVar61 * 0.0;
      dVar57 = dVar56 * local_318 - dStack_310 * dVar66;
      dVar59 = dVar65 * dStack_310 - dVar62 * dVar56;
      local_2a8._8_4_ = uVar74;
      local_2a8._0_8_ = dVar34;
      local_2a8._12_4_ = uVar75;
      local_2b8._8_4_ = uVar60;
      local_2b8._0_8_ = dVar25;
      local_2b8._12_4_ = (int)uVar2;
      local_348 = (double)local_388._8_8_;
      dStack_340 = (double)local_388._0_8_;
      dVar76 = dStack_3a0 * dVar62 * -1.0 +
               ((local_3a8 * dVar61 - (double)local_388._8_8_ * dVar50 * 1.0) -
               (double)local_388._0_8_ * local_3d8);
      dVar77 = local_3a8 * dVar62 * 1.0 +
               ((dStack_3a0 * dVar61 - (double)local_388._0_8_ * dVar16 * -1.0) -
               (double)local_388._8_8_ * dStack_3d0);
      dVar67 = dVar33 * dVar62 * -1.0 +
               ((dVar32 * dVar61 - dVar50 * (double)local_398._8_8_ * 1.0) -
               (double)local_398._0_8_ * local_3d8);
      dVar70 = dVar32 * dVar62 * 1.0 +
               ((dVar33 * dVar61 - dVar16 * (double)local_398._0_8_ * -1.0) -
               (double)local_398._8_8_ * dStack_3d0);
      dVar37 = (double)local_388._8_8_ * dVar62 * 1.0 +
               local_3a8 * local_3d8 +
               ((double)local_388._0_8_ * dVar61 - dStack_3a0 * dVar50 * 1.0);
      dVar49 = (double)local_388._0_8_ * dVar62 * -1.0 +
               dStack_3a0 * dStack_3d0 +
               ((double)local_388._8_8_ * dVar61 - local_3a8 * dVar16 * -1.0);
      dVar59 = dVar59 + dVar59;
      dVar71 = dVar71 + dVar71;
      dVar57 = dVar57 + dVar57;
      dVar64 = dVar57 * dStack_310 - dVar62 * dVar71;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = local_378;
      auVar3._12_4_ = 0x3ff00000;
      auVar40 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
      uVar2 = DAT_149931180;
      dVar17 = ((double)local_398._8_8_ * dVar62 * 1.0 +
               local_3d8 * dVar32 + (dVar61 * (double)local_398._0_8_ - dVar50 * dVar33 * 1.0)) *
               -1.0;
      dVar26 = ((double)local_398._0_8_ * dVar62 * -1.0 +
               dStack_3d0 * dVar33 + (dVar61 * (double)local_398._8_8_ - dVar16 * dVar32 * -1.0)) *
               1.0;
      dVar35 = local_3f8 -
               (dVar61 * dVar57 + dVar65 + (dVar71 * local_318 - dStack_310 * dVar59)) *
               (double)(-(ulonglong)(9.99999993922529e-09 < (double)(local_378 & uVar2)) &
                       auVar40._0_8_);
      dStack_3f0 = dStack_3f0 -
                   (dVar61 * (dVar72 + dVar72) + dVar63 + dVar64) *
                   (double)(-(ulonglong)
                             (9.99999993922529e-09 <
                             (double)((ulonglong)(DAT_149931180._12_4_ & 0x3ff00000) << 0x20)) &
                           auVar40._8_8_);
      auVar28 = divpd(_DAT_149934d80,auVar28);
      dVar50 = local_118 -
               (double)(-(ulonglong)(9.99999993922529e-09 < (double)(uVar15 & uVar2)) &
                       auVar28._0_8_) * (dVar64 + dVar59 * dVar61 + dVar66);
      dVar16 = dStack_110 -
               (double)(-(ulonglong)(9.99999993922529e-09 < (double)(uVar5 & DAT_149931180._8_8_)) &
                       auVar28._8_8_) *
               (dVar57 * dVar68 + dVar62 * dVar59 + dVar71 * dVar61 + dVar56);
      dVar59 = (dVar17 * dVar77 + (dVar76 * dVar26 * 1.0 - dVar49 * dVar67)) -
               dVar70 * dVar37 * -1.0;
      dVar71 = (dVar26 * dVar77 + (dVar76 * dVar17 * -1.0 - dVar49 * dVar70)) -
               dVar67 * dVar37 * 1.0;
      dVar72 = dVar26 * dVar37 * 1.0 + dVar77 * dVar67 + (dVar49 * dVar17 - dVar76 * dVar70 * 1.0);
      dVar70 = dVar17 * dVar37 * -1.0 + dVar77 * dVar70 + (dVar49 * dVar26 - dVar76 * dVar67 * -1.0)
      ;
      dVar57 = (double)(lVar9 + 0x80);
      dVar64 = dVar72 * 0.0 * -1.0 + dVar71 * 0.0 + dVar59 * 1.0 * 1.0 + dVar70 * 0.0;
      dVar67 = dVar72 * 0.0 * 1.0 + dVar71 * 1.0 + dVar59 * 0.0 * -1.0 + dVar70 * 0.0;
      dVar37 = dVar72 * 1.0 * 1.0 + ((dVar59 * 0.0 * 1.0 + dVar70 * 0.0) - dVar71 * 0.0);
      dVar49 = dVar72 * 0.0 * -1.0 + ((dVar59 * 0.0 * -1.0 + dVar70 * 1.0) - dVar71 * 0.0);
      dVar17 = dVar37 * dVar37 + dVar64 * dVar64;
      dVar26 = dVar49 * dVar49 + dVar67 * dVar67;
      auVar29._0_8_ = dVar17 + dVar26;
      auVar29._8_8_ = dVar17 + dVar26;
      auVar28._8_8_ = dStack_350;
      auVar28._0_8_ = local_358;
      auVar20._8_8_ = -(ulonglong)(1e-08 <= auVar29._8_8_);
      auVar20._0_8_ = -(ulonglong)(1e-08 <= auVar29._0_8_);
      auVar40 = sqrtpd(auVar29,auVar29);
      auVar40 = divpd(_DAT_149934d80,auVar40);
      auVar36._0_8_ = auVar40._0_8_ * dVar37;
      auVar36._8_8_ = auVar40._8_8_ * dVar49;
      local_388 = blendvpd(_DAT_149935300,auVar36,auVar20);
      local_378 = (ulonglong)(dVar64 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar29._0_8_);
      uStack_370 = (ulonglong)(dVar67 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar29._8_8_);
      local_398 = auVar28 & _DAT_149931180;
      local_3b8 = local_398;
      if (local_398._0_8_ <= (double)((ulonglong)dVar25 & uVar2)) {
        local_3b8._8_8_ = local_398._8_8_;
        local_3b8._0_8_ = (ulonglong)dVar25 & uVar2;
      }
      dStack_3d0 = 0.0;
      iVar8 = local_160._4_4_;
      local_3f8 = dVar35;
      local_3d8 = dVar35;
      local_3a8 = dVar57;
      local_338 = dVar62;
      dStack_330 = dVar61;
      local_328 = dVar33;
      dStack_320 = dVar32;
      local_308 = dStack_310;
      dStack_300 = dVar62;
      local_2f8 = dVar65;
      dStack_2f0 = dVar63;
      local_2e8 = dVar68;
      dStack_2e0 = dVar27;
      local_2d8 = dVar66;
      dStack_2d0 = dVar56;
      local_2c8 = uVar15;
      uStack_2c0 = uVar5;
      if (local_3b8._0_8_ <= (double)((ulonglong)dVar34 & uVar2)) {
        local_3b8._0_8_ = (ulonglong)dVar34 & uVar2;
      }
      do {
        local_160 = dVar6;
        iVar8 = *(int *)(*local_178 + (longlong)iVar8 * 0xc);
        lVar9 = FUN_140757faa(dVar57,iVar8);
        lVar10 = FUN_140757faa(local_360,iVar8);
        if (5 < *(uint *)(lVar9 + 0x14)) goto switchD_1484e9723_caseD_4;
        lVar13 = (longlong)iVar8 * 0x80 + *(longlong *)(param_1 + 0x2f0);
        _Dst = (undefined1 (*) [16])(lVar13 + 0x20);
        switch(*(uint *)(lVar9 + 0x14)) {
        case 0:
          dVar68 = *(double *)(lVar10 + 0x38);
          dVar66 = *(double *)(lVar10 + 0x40);
          *(double *)(lVar13 + 0x40) = *(double *)(lVar10 + 0x30) + dVar50;
          *(double *)(lVar13 + 0x48) = dVar68 + dVar16;
          *(double *)(lVar13 + 0x50) = dVar66 + dVar35;
          *(undefined8 *)(lVar13 + 0x58) = 0;
          *(double *)(lVar13 + 0x60) = dVar69;
          *(double *)(lVar13 + 0x68) = dVar25;
          *(double *)(lVar13 + 0x70) = dVar34;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(ulonglong *)*_Dst = local_378;
          *(ulonglong *)(lVar13 + 0x28) = uStack_370;
          *(undefined8 *)(lVar13 + 0x30) = local_388._0_8_;
          *(undefined8 *)(lVar13 + 0x38) = local_388._8_8_;
          *(float *)(lVar9 + 0x48) =
               (float)((double)*(float *)(lVar10 + 0x48) * (double)local_3b8._0_8_);
          uVar4 = DAT_14c846520;
          uVar1 = DAT_14c846518;
          *(undefined8 *)(lVar13 + 0x60) = DAT_14c846510;
          *(undefined8 *)(lVar13 + 0x68) = uVar1;
          *(undefined8 *)(lVar13 + 0x70) = uVar4;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          FUN_144a78e48(_Dst);
          goto LAB_1484e9ae2;
        case 1:
          FUN_144a7484c(lVar10 + 0x48,&local_1f8);
          dVar27 = dStack_1f0 * dVar72 * -1.0 +
                   dVar59 * dStack_1e0 * 1.0 + dVar70 * local_1f8 + dVar71 * local_1e8;
          dVar32 = local_1f8 * dVar72 * 1.0 +
                   dVar59 * local_1e8 * -1.0 + dVar70 * dStack_1f0 + dVar71 * dStack_1e0;
          dVar66 = dStack_1e0 * dVar72 * 1.0 +
                   ((dVar59 * dStack_1f0 * 1.0 + dVar70 * local_1e8) - dVar71 * local_1f8);
          dVar68 = local_1e8 * dVar72 * -1.0 +
                   ((dVar59 * local_1f8 * -1.0 + dVar70 * dStack_1e0) - dVar71 * dStack_1f0);
          dVar33 = dVar66 * dVar66 + dVar27 * dVar27;
          dVar62 = dVar68 * dVar68 + dVar32 * dVar32;
          auVar43._0_8_ = dVar33 + dVar62;
          auVar43._8_8_ = dVar33 + dVar62;
          auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar43._8_8_);
          auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar43._0_8_);
          auVar28 = sqrtpd(auVar43,auVar43);
          auVar40 = divpd(_DAT_149934d80,auVar28);
          auVar53._0_8_ = auVar40._0_8_ * dVar66;
          auVar53._8_8_ = auVar40._8_8_ * dVar68;
          auVar28 = blendvpd(_DAT_149935300,auVar53,auVar22);
          dVar68 = *(double *)(lVar10 + 0x38);
          dVar66 = *(double *)(lVar10 + 0x40);
          *(double *)(lVar13 + 0x40) = *(double *)(lVar10 + 0x30) + dVar50;
          *(double *)(lVar13 + 0x48) = dVar68 + dVar16;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = dVar66 + dVar35;
          *(undefined1 (*) [16])(lVar13 + 0x50) = auVar44;
          *(double *)(lVar13 + 0x60) = dVar69;
          *(double *)(lVar13 + 0x68) = dVar25;
          *(double *)(lVar13 + 0x70) = dVar34;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(ulonglong *)*_Dst =
               (ulonglong)(dVar27 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar43._0_8_);
          *(ulonglong *)(lVar13 + 0x28) =
               (ulonglong)(dVar32 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar43._8_8_);
          *(undefined1 (*) [16])(lVar13 + 0x30) = auVar28;
          *(float *)(lVar9 + 0x60) = (float)((double)*(float *)(lVar10 + 0x60) * local_358);
          *(float *)(lVar9 + 100) =
               (float)((double)*(float *)(lVar10 + 100) * *(double *)(lVar13 + 0x68));
          *(float *)(lVar9 + 0x68) =
               (float)((double)*(float *)(lVar10 + 0x68) * *(double *)(lVar13 + 0x70));
          break;
        case 2:
          FUN_144a7484c(lVar10 + 0x48,&local_1f8);
          dVar27 = dStack_1f0 * dVar72 * -1.0 +
                   dVar59 * dStack_1e0 * 1.0 + dVar70 * local_1f8 + dVar71 * local_1e8;
          dVar32 = local_1f8 * dVar72 * 1.0 +
                   dVar59 * local_1e8 * -1.0 + dVar70 * dStack_1f0 + dVar71 * dStack_1e0;
          dVar66 = dStack_1e0 * dVar72 * 1.0 +
                   ((dVar59 * dStack_1f0 * 1.0 + dVar70 * local_1e8) - dVar71 * local_1f8);
          dVar68 = local_1e8 * dVar72 * -1.0 +
                   ((dVar59 * local_1f8 * -1.0 + dVar70 * dStack_1e0) - dVar71 * dStack_1f0);
          dVar33 = dVar66 * dVar66 + dVar27 * dVar27;
          dVar62 = dVar68 * dVar68 + dVar32 * dVar32;
          auVar41._0_8_ = dVar33 + dVar62;
          auVar41._8_8_ = dVar33 + dVar62;
          auVar21._8_8_ = -(ulonglong)(1e-08 <= auVar41._8_8_);
          auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar41._0_8_);
          auVar28 = sqrtpd(auVar41,auVar41);
          auVar40 = divpd(_DAT_149934d80,auVar28);
          auVar52._0_8_ = auVar40._0_8_ * dVar66;
          auVar52._8_8_ = auVar40._8_8_ * dVar68;
          auVar28 = blendvpd(_DAT_149935300,auVar52,auVar21);
          dVar68 = *(double *)(lVar10 + 0x38);
          dVar66 = *(double *)(lVar10 + 0x40);
          *(double *)(lVar13 + 0x40) = *(double *)(lVar10 + 0x30) + dVar50;
          *(double *)(lVar13 + 0x48) = dVar68 + dVar16;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = dVar66 + dVar35;
          *(undefined1 (*) [16])(lVar13 + 0x50) = auVar42;
          *(double *)(lVar13 + 0x60) = dVar69;
          *(double *)(lVar13 + 0x68) = dVar25;
          *(double *)(lVar13 + 0x70) = dVar34;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(ulonglong *)*_Dst =
               (ulonglong)(dVar27 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar41._0_8_);
          *(ulonglong *)(lVar13 + 0x28) =
               (ulonglong)(dVar32 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar41._8_8_);
          *(undefined1 (*) [16])(lVar13 + 0x30) = auVar28;
          *(float *)(lVar9 + 0x60) =
               (float)((double)*(float *)(lVar10 + 0x60) * (double)local_398._0_8_);
          *(float *)(lVar9 + 100) =
               (float)(ABS(*(double *)(lVar13 + 0x70)) * (double)*(float *)(lVar10 + 100));
          break;
        case 3:
          memmove(_Dst,(void *)(lVar10 + 0x90),0x60);
          dVar66 = *(double *)*_Dst;
          dVar68 = *(double *)(lVar13 + 0x28);
          dVar27 = *(double *)(lVar13 + 0x30);
          dVar32 = *(double *)(lVar13 + 0x38);
          dVar33 = dVar68 * dVar72 * -1.0 +
                   dVar59 * dVar32 * 1.0 + dVar70 * dVar66 + dVar71 * dVar27;
          dVar62 = dVar66 * dVar72 * 1.0 +
                   dVar59 * dVar27 * -1.0 + dVar70 * dVar68 + dVar71 * dVar32;
          dVar61 = dVar32 * dVar72 * 1.0 +
                   ((dVar59 * dVar68 * 1.0 + dVar70 * dVar27) - dVar71 * dVar66);
          dVar66 = dVar27 * dVar72 * -1.0 +
                   ((dVar59 * dVar66 * -1.0 + dVar70 * dVar32) - dVar71 * dVar68);
          *(double *)(lVar13 + 0x40) = *(double *)(lVar13 + 0x40) + dVar50;
          *(double *)(lVar13 + 0x48) = *(double *)(lVar13 + 0x48) + dVar16;
          *(double *)(lVar13 + 0x50) = *(double *)(lVar13 + 0x50) + local_3d8;
          *(double *)(lVar13 + 0x58) = *(double *)(lVar13 + 0x58) + dStack_3d0;
          dVar68 = dVar61 * dVar61 + dVar33 * dVar33;
          dVar27 = dVar66 * dVar66 + dVar62 * dVar62;
          auVar45._0_8_ = dVar68 + dVar27;
          auVar45._8_8_ = dVar68 + dVar27;
          auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar45._8_8_);
          auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar45._0_8_);
          auVar28 = sqrtpd(auVar45,auVar45);
          auVar40 = divpd(_DAT_149934d80,auVar28);
          auVar54._0_8_ = auVar40._0_8_ * dVar61;
          auVar54._8_8_ = auVar40._8_8_ * dVar66;
          auVar28 = blendvpd(_DAT_149935300,auVar54,auVar23);
          auVar46._0_8_ = *(double *)(lVar13 + 0x60) * dVar69;
          auVar46._8_8_ = *(double *)(lVar13 + 0x68) * dVar25;
          *(undefined1 (*) [16])(lVar13 + 0x60) = auVar46;
          *(double *)(lVar13 + 0x70) = *(double *)(lVar13 + 0x70) * dVar34;
          *(double *)(lVar13 + 0x78) = *(double *)(lVar13 + 0x78) * 0.0;
          auVar30._0_8_ = (ulonglong)(dVar33 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar45._0_8_)
          ;
          auVar30._8_8_ = (ulonglong)(dVar62 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar45._8_8_)
          ;
          *_Dst = auVar30;
          *(undefined1 (*) [16])(lVar13 + 0x30) = auVar28;
          FUN_144a78e48(_Dst);
          puVar14 = (undefined8 *)(lVar9 + 0x90);
          goto LAB_1484e9dc5;
        case 4:
          goto switchD_1484e9723_caseD_4;
        case 5:
          memmove(_Dst,(void *)(lVar10 + 0x30),0x60);
          dVar66 = *(double *)*_Dst;
          dVar68 = *(double *)(lVar13 + 0x28);
          dVar27 = *(double *)(lVar13 + 0x30);
          dVar32 = *(double *)(lVar13 + 0x38);
          dVar33 = dVar68 * dVar72 * -1.0 +
                   dVar59 * dVar32 * 1.0 + dVar70 * dVar66 + dVar71 * dVar27;
          dVar62 = dVar66 * dVar72 * 1.0 +
                   dVar59 * dVar27 * -1.0 + dVar70 * dVar68 + dVar71 * dVar32;
          dVar61 = dVar32 * dVar72 * 1.0 +
                   ((dVar59 * dVar68 * 1.0 + dVar70 * dVar27) - dVar71 * dVar66);
          dVar66 = dVar27 * dVar72 * -1.0 +
                   ((dVar59 * dVar66 * -1.0 + dVar70 * dVar32) - dVar71 * dVar68);
          *(double *)(lVar13 + 0x40) = *(double *)(lVar13 + 0x40) + dVar50;
          *(double *)(lVar13 + 0x48) = *(double *)(lVar13 + 0x48) + dVar16;
          *(double *)(lVar13 + 0x50) = *(double *)(lVar13 + 0x50) + local_3d8;
          *(double *)(lVar13 + 0x58) = *(double *)(lVar13 + 0x58) + dStack_3d0;
          dVar68 = dVar61 * dVar61 + dVar33 * dVar33;
          dVar27 = dVar66 * dVar66 + dVar62 * dVar62;
          auVar47._0_8_ = dVar68 + dVar27;
          auVar47._8_8_ = dVar68 + dVar27;
          auVar24._8_8_ = -(ulonglong)(1e-08 <= auVar47._8_8_);
          auVar24._0_8_ = -(ulonglong)(1e-08 <= auVar47._0_8_);
          auVar28 = sqrtpd(auVar47,auVar47);
          auVar40 = divpd(_DAT_149934d80,auVar28);
          auVar55._0_8_ = auVar40._0_8_ * dVar61;
          auVar55._8_8_ = auVar40._8_8_ * dVar66;
          auVar28 = blendvpd(_DAT_149935300,auVar55,auVar24);
          auVar48._0_8_ = *(double *)(lVar13 + 0x60) * dVar69;
          auVar48._8_8_ = *(double *)(lVar13 + 0x68) * dVar25;
          *(undefined1 (*) [16])(lVar13 + 0x60) = auVar48;
          *(double *)(lVar13 + 0x70) = *(double *)(lVar13 + 0x70) * dVar34;
          *(double *)(lVar13 + 0x78) = *(double *)(lVar13 + 0x78) * 0.0;
          auVar31._0_8_ = (ulonglong)(dVar33 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar47._0_8_)
          ;
          auVar31._8_8_ = (ulonglong)(dVar62 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar47._8_8_)
          ;
          *_Dst = auVar31;
          *(undefined1 (*) [16])(lVar13 + 0x30) = auVar28;
          FUN_144a78e48(_Dst);
          puVar14 = (undefined8 *)(lVar9 + 0x30);
LAB_1484e9dc5:
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar14 = *(undefined8 *)*_Dst;
            _Dst = (undefined1 (*) [16])((longlong)*_Dst + 8);
            puVar14 = puVar14 + 1;
          }
          goto switchD_1484e9723_caseD_4;
        }
        uVar4 = DAT_14c846520;
        uVar1 = DAT_14c846518;
        *(undefined8 *)(lVar13 + 0x60) = DAT_14c846510;
        *(undefined8 *)(lVar13 + 0x68) = uVar1;
        *(undefined8 *)(lVar13 + 0x70) = uVar4;
        *(undefined8 *)(lVar13 + 0x78) = 0;
        FUN_144a78e48(_Dst);
        dVar57 = local_3a8;
        local_1f8 = *(double *)*_Dst;
        dStack_1f0 = *(double *)(lVar13 + 0x28);
        local_1e8 = *(double *)(lVar13 + 0x30);
        dStack_1e0 = *(double *)(lVar13 + 0x38);
        FUN_1448052ee(&local_1f8,&local_278);
        *(double *)(lVar9 + 0x58) = local_268;
        *(double *)(lVar9 + 0x48) = local_278;
        *(double *)(lVar9 + 0x50) = dStack_270;
LAB_1484e9ae2:
        uVar4 = *(undefined8 *)(lVar13 + 0x48);
        uVar1 = *(undefined8 *)(lVar13 + 0x50);
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)(lVar9 + 0x38) = uVar4;
        *(undefined8 *)(lVar9 + 0x40) = uVar1;
switchD_1484e9723_caseD_4:
        local_160 = (double)CONCAT44(local_160._4_4_,(uint)local_160 & ~local_170._4_4_);
        FUN_1449c0562(&local_170);
        iVar8 = local_160._4_4_;
        dVar6 = local_160;
      } while (local_178 != local_3e0 || (local_168 != local_3c0 || local_160._4_4_ != iVar11));
    }
    local_160 = dVar6;
    FUN_1484eb09e(param_1,0);
    FUN_1447f69b6(param_1 + 0x40);
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484e9dd2 FUN_1484e9dd2 body=218 status=ok
// SIG undefined FUN_1484e9dd2(void)

undefined8
FUN_1484e9dd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af11a40;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484e9eae FUN_1484e9eae body=554 status=ok
// SIG undefined FUN_1484e9eae(void)

void FUN_1484e9eae(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&DAT_14cb4cc20);
  lVar4 = *(longlong *)(param_1 + 0x80);
  plVar3 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af11af0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x81) = 0;
  FUN_14058b698(plVar3 + 2,lVar4 + 0x80);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x98);
    if (plVar5 == (longlong *)0x0) goto LAB_1484e9fd7;
    *(undefined8 *)(param_1 + 0x98) = 0;
LAB_1484e9f96:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1484e9fd7;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x90) = plVar3 + 2;
    plVar5 = *(longlong **)(param_1 + 0x98);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x98) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1484e9f96;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1484e9fd7:
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_98);
  *(undefined4 *)(param_1 + 0x508) = local_78;
  *(undefined4 *)(param_1 + 0x50c) = uStack_74;
  *(undefined4 *)(param_1 + 0x510) = uStack_70;
  *(undefined4 *)(param_1 + 0x514) = uStack_6c;
  *(undefined8 *)(param_1 + 0x518) = local_68;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_98);
  *(undefined4 *)(param_1 + 0x520) = local_98;
  *(undefined4 *)(param_1 + 0x524) = uStack_94;
  *(undefined4 *)(param_1 + 0x528) = uStack_90;
  *(undefined4 *)(param_1 + 0x52c) = uStack_8c;
  *(undefined4 *)(param_1 + 0x530) = local_88;
  *(undefined4 *)(param_1 + 0x534) = uStack_84;
  *(undefined4 *)(param_1 + 0x538) = uStack_80;
  *(undefined4 *)(param_1 + 0x53c) = uStack_7c;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_98);
  *(undefined4 *)(param_1 + 0x540) = local_58;
  *(undefined4 *)(param_1 + 0x544) = uStack_54;
  *(undefined4 *)(param_1 + 0x548) = uStack_50;
  *(undefined4 *)(param_1 + 0x54c) = uStack_4c;
  *(undefined8 *)(param_1 + 0x550) = local_48;
  *(undefined1 *)(param_1 + 0x3f8) = 1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ea0da FUN_1484ea0da body=1256 status=ok
// SIG undefined FUN_1484ea0da(void)

void FUN_1484ea0da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  double dVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = *(longlong *)(param_1 + 0x80);
  plVar9 = (longlong *)(param_1 + 0x458);
  lVar11 = param_1 + 0x468;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  iVar15 = 0;
  lStack_60 = lVar11;
  if (*(int *)(param_1 + 0x480) != 0) {
    FUN_1449c0562(&local_68);
    iVar15 = *(int *)(param_1 + 0x480);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = uStack_50;
  local_84 = uStack_4c;
  local_a0 = (longlong *)local_68;
  local_98 = lStack_60;
  local_a8 = plVar9;
  if ((iStack_54 != iVar15) || (lStack_60 != lVar11)) {
    do {
      iVar4 = *(int *)(*local_a8 + (longlong)iStack_8c * 0xc);
      lVar8 = FUN_140757faa(lVar10 + 0x80,iVar4);
      if (5 < *(uint *)(lVar8 + 0x14)) goto switchD_1484ea209_caseD_4;
      lVar12 = (longlong)iVar4 * 0x80 + *(longlong *)(param_1 + 0x2f0);
      puVar13 = (undefined8 *)(lVar12 + 0x20);
      switch(*(uint *)(lVar8 + 0x14)) {
      case 0:
        FUN_144a78e48(puVar13);
        uVar6 = *(undefined8 *)(lVar12 + 0x48);
        uVar3 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(lVar8 + 0x38) = uVar6;
        *(undefined8 *)(lVar8 + 0x40) = uVar3;
        dVar7 = ABS(*(double *)(lVar12 + 0x60));
        if (ABS(*(double *)(lVar12 + 0x60)) <= ABS(*(double *)(lVar12 + 0x68))) {
          dVar7 = ABS(*(double *)(lVar12 + 0x68));
        }
        if (dVar7 <= ABS(*(double *)(lVar12 + 0x70))) {
          dVar7 = ABS(*(double *)(lVar12 + 0x70));
        }
        *(float *)(lVar8 + 0x48) = (float)((double)*(float *)(lVar8 + 0x48) * dVar7);
        break;
      case 1:
        FUN_144a78e48(puVar13);
        local_68 = *puVar13;
        lStack_60 = *(longlong *)(lVar12 + 0x28);
        local_58 = *(uint *)(lVar12 + 0x30);
        iStack_54 = *(int *)(lVar12 + 0x34);
        uStack_50 = *(undefined4 *)(lVar12 + 0x38);
        uStack_4c = *(undefined4 *)(lVar12 + 0x3c);
        FUN_1448052ee(&local_68,&local_80);
        *(undefined8 *)(lVar8 + 0x58) = local_70;
        *(undefined8 *)(lVar8 + 0x48) = local_80;
        *(undefined8 *)(lVar8 + 0x50) = uStack_78;
        uVar6 = *(undefined8 *)(lVar12 + 0x48);
        uVar3 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(lVar8 + 0x38) = uVar6;
        *(undefined8 *)(lVar8 + 0x40) = uVar3;
        *(float *)(lVar8 + 0x60) =
             (float)((double)*(float *)(lVar8 + 0x60) * *(double *)(lVar12 + 0x60));
        *(float *)(lVar8 + 100) =
             (float)((double)*(float *)(lVar8 + 100) * *(double *)(lVar12 + 0x68));
        *(float *)(lVar8 + 0x68) =
             (float)((double)*(float *)(lVar8 + 0x68) * *(double *)(lVar12 + 0x70));
        break;
      case 2:
        FUN_144a78e48(puVar13);
        local_68 = *puVar13;
        lStack_60 = *(longlong *)(lVar12 + 0x28);
        local_58 = *(uint *)(lVar12 + 0x30);
        iStack_54 = *(int *)(lVar12 + 0x34);
        uStack_50 = *(undefined4 *)(lVar12 + 0x38);
        uStack_4c = *(undefined4 *)(lVar12 + 0x3c);
        FUN_1448052ee(&local_68,&local_80);
        *(undefined8 *)(lVar8 + 0x58) = local_70;
        *(undefined8 *)(lVar8 + 0x48) = local_80;
        *(undefined8 *)(lVar8 + 0x50) = uStack_78;
        uVar6 = *(undefined8 *)(lVar12 + 0x48);
        uVar3 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(lVar8 + 0x38) = uVar6;
        *(undefined8 *)(lVar8 + 0x40) = uVar3;
        *(float *)(lVar8 + 0x60) =
             (float)((double)*(float *)(lVar8 + 0x60) * ABS(*(double *)(lVar12 + 0x60)));
        *(float *)(lVar8 + 100) =
             (float)((double)*(float *)(lVar8 + 100) * ABS(*(double *)(lVar12 + 0x70)));
        break;
      case 3:
        FUN_144a78e48(puVar13);
        puVar14 = (undefined8 *)(lVar8 + 0x90);
        goto LAB_1484ea3b4;
      case 5:
        FUN_144a78e48(puVar13);
        puVar14 = (undefined8 *)(lVar8 + 0x30);
LAB_1484ea3b4:
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
      }
switchD_1484ea209_caseD_4:
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar9 || (local_98 != lVar11 || iStack_8c != iVar15));
  }
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar10 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
  lVar11 = *(longlong *)(param_1 + 0x80);
  plVar9 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14af11af0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x81) = 0;
  FUN_14058b698(plVar9 + 2,lVar11 + 0x80);
  local_b0 = FUN_14001cc68(0x30,0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x558);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_68 = *(undefined8 *)(param_1 + 0x90);
  lStack_60 = *(longlong *)(param_1 + 0x98);
  if (lStack_60 != 0) {
    LOCK();
    *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
    UNLOCK();
  }
  local_a8 = plVar9 + 2;
  local_a0 = plVar9;
  FUN_1484f0bd0(local_b0,&local_68,&local_a8,uVar5);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))
            ((longlong *)(lVar10 + 0x28),param_1,&local_b0,&DAT_14cb4cc20);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x40);
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar11 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
  FUN_1484eb09e(param_1,1);
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar9 = *(longlong **)(param_1 + 0x98);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ea5c4 FUN_1484ea5c4 body=249 status=ok
// SIG undefined FUN_1484ea5c4(void)

void FUN_1484ea5c4(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  
  puVar17 = (undefined8 *)(param_1 + 0xa0);
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar17 = *param_4;
    param_4 = param_4 + 1;
    puVar17 = puVar17 + 1;
  }
  uVar3 = *param_2;
  lVar16 = param_2[1];
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(longlong *)(param_1 + 0x88) = lVar16;
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
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  uVar13 = param_3[9];
  uVar14 = param_3[10];
  uVar15 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x120) = param_3[8];
  *(undefined4 *)(param_1 + 0x124) = uVar13;
  *(undefined4 *)(param_1 + 0x128) = uVar14;
  *(undefined4 *)(param_1 + 300) = uVar15;
  *(undefined4 *)(param_1 + 0x110) = uVar9;
  *(undefined4 *)(param_1 + 0x114) = uVar10;
  *(undefined4 *)(param_1 + 0x118) = uVar11;
  *(undefined4 *)(param_1 + 0x11c) = uVar12;
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  *(undefined4 *)(param_1 + 0x104) = uVar6;
  *(undefined4 *)(param_1 + 0x108) = uVar7;
  *(undefined4 *)(param_1 + 0x10c) = uVar8;
  FUN_14068ded2(param_1 + 0x458,0);
  FUN_1484ea6be(param_1);
  FUN_1484eb09e(param_1,1);
  *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x558) + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001484ea6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484ea6be FUN_1484ea6be body=2527 status=ok
// SIG undefined FUN_1484ea6be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484ea6be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_388 [40];
  int *local_360 [2];
  longlong local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  code *local_300;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  code *local_280;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [12];
  uint uStack_15c;
  undefined1 local_158 [12];
  int iStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  ulonglong local_e0;
  double dVar3;
  double dVar5;
  
  uVar14 = (undefined4)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((((*(longlong *)(param_1 + 0x3d0) != 0) && (*(longlong *)(param_1 + 0x3d8) != 0)) &&
      (*(longlong *)(param_1 + 0x3e0) != 0)) &&
     ((*(longlong *)(param_1 + 1000) != 0 && (*(longlong *)(param_1 + 0x3f0) != 0)))) {
    plVar1 = (longlong *)(param_1 + 0x458);
    local_350 = param_1;
    if (*(int *)(param_1 + 0x460) == *(int *)(param_1 + 0x48c)) {
      local_298 = 0;
      local_288 = &PTR_LAB_14af11b10;
      local_280 = FUN_143b955e2;
      local_2a8 = &LAB_1485165fa;
      FUN_143b83e5e(&local_350);
      iVar12 = *(int *)(param_1 + 0x460);
      iVar10 = *(int *)(param_1 + 0x48c);
      dVar17 = 0.0;
      dVar33 = 0.0;
      dVar34 = 0.0;
    }
    else {
      lVar8 = param_1 + 0x468;
      local_1e8._8_8_ = lVar8;
      local_1e8._0_8_ = 0x100000000;
      local_1d8 = 2.12199579047121e-314;
      dStack_1d0 = (double)((ulonglong)dStack_1d0 & 0xffffffff00000000);
      iVar12 = 0;
      if (*(int *)(param_1 + 0x480) != 0) {
        FUN_1449c0562(local_1e8);
        iVar12 = *(int *)(param_1 + 0x480);
      }
      uVar14 = (undefined4)param_3;
      local_148 = dStack_1d0;
      stack0xfffffffffffffeb0 = local_1d8;
      local_158._0_8_ = local_1e8._8_8_;
      auVar20 = _local_158;
      stack0xfffffffffffffea0 = (double)local_1e8._0_8_;
      local_168._0_8_ = plVar1;
      iStack_14c = (int)((ulonglong)local_1d8 >> 0x20);
      _local_158 = auVar20;
      if ((iStack_14c == iVar12) && (local_1e8._8_8_ == lVar8)) {
        dVar19 = 0.0;
        dVar33 = 0.0;
        dVar34 = 0.0;
      }
      else {
        dVar33 = 0.0;
        dVar34 = 0.0;
        dVar19 = 0.0;
        plVar11 = plVar1;
        iVar10 = iStack_14c;
        do {
          lVar7 = (longlong)*(int *)(*plVar11 + (longlong)iVar10 * 0xc) * 0x80;
          pdVar9 = (double *)(*(longlong *)(param_1 + 0x2f0) + 0x40 + lVar7);
          dVar33 = dVar33 + *pdVar9;
          dVar34 = dVar34 + pdVar9[1];
          dVar19 = dVar19 + *(double *)(*(longlong *)(param_1 + 0x2f0) + 0x50 + lVar7);
          local_158._8_4_ = local_158._8_4_ & ~uStack_15c;
          FUN_1449c0562(local_168 + 8);
          bVar13 = local_158._0_8_ != lVar8 || iStack_14c != iVar12;
          param_3 = CONCAT71((int7)((ulonglong)param_3 >> 8),bVar13);
          uVar14 = (undefined4)param_3;
          plVar11 = (longlong *)local_168._0_8_;
          iVar10 = iStack_14c;
        } while ((longlong *)local_168._0_8_ != plVar1 || bVar13);
      }
      iVar12 = *(int *)(param_1 + 0x460);
      iVar10 = *(int *)(param_1 + 0x48c);
      dVar17 = 1.0 / (double)(iVar12 - iVar10);
      dVar33 = dVar33 * dVar17;
      dVar34 = dVar34 * dVar17;
      dVar17 = dVar17 * dVar19;
    }
    if (iVar12 - iVar10 == 1) {
      FUN_140619b9c(plVar1,local_360);
      auVar36 = _DAT_149934d80;
      lVar8 = (longlong)*local_360[0] * 0x80 + *(longlong *)(param_1 + 0x2f0);
      pdVar9 = (double *)(lVar8 + 0x20);
      auVar20 = *(undefined1 (*) [16])(param_1 + 0xe0);
      dVar19 = auVar20._0_8_;
      dVar4 = auVar20._8_8_;
      dVar24 = SUB168(*(undefined1 (*) [16])(param_1 + 0xf0),0);
      auVar21 = *(undefined1 (*) [16])(lVar8 + 0x60);
      dVar3 = auVar21._0_8_;
      dVar5 = auVar21._8_8_;
      dVar2 = SUB168(*(undefined1 (*) [16])(lVar8 + 0x70),0);
      auVar20 = minpd(auVar21,auVar20);
      auVar26 = minpd(*(undefined1 (*) [16])(lVar8 + 0x70),*(undefined1 (*) [16])(param_1 + 0xf0));
      auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      iVar12 = movmskpd((int)*(longlong *)(param_1 + 0x2f0),auVar21);
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      uVar15 = movmskpd(uVar14,auVar27);
      if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar29 = *pdVar9;
        dVar23 = *(double *)(lVar8 + 0x28);
        dVar30 = *(double *)(lVar8 + 0x30);
        dVar31 = *(double *)(lVar8 + 0x38);
        dVar2 = *(double *)(param_1 + 0xb8);
        dVar3 = *(double *)(param_1 + 0xb8);
        dVar4 = *(double *)(param_1 + 0xa0);
        dVar5 = *(double *)(param_1 + 0xa0);
        dVar25 = *(double *)(param_1 + 0xa8);
        dVar28 = *(double *)(param_1 + 0xa8);
        dVar35 = *(double *)(param_1 + 0xb0);
        dVar6 = *(double *)(param_1 + 0xb0);
        dVar19 = dVar23 * dVar35 * -1.0 + dVar30 * dVar25 + dVar31 * dVar4 * 1.0 + dVar29 * dVar2;
        dVar24 = dVar29 * dVar6 * 1.0 + dVar31 * dVar28 + dVar30 * dVar5 * -1.0 + dVar23 * dVar3;
        auVar20._0_8_ =
             dVar31 * dVar35 * 1.0 + ((dVar4 * dVar23 * 1.0 + dVar2 * dVar30) - dVar29 * dVar25);
        auVar20._8_8_ =
             dVar30 * dVar6 * -1.0 + ((dVar5 * dVar29 * -1.0 + dVar3 * dVar31) - dVar23 * dVar28);
      }
      else {
        dVar28 = *(double *)(param_1 + 0xa0);
        dVar6 = *(double *)(param_1 + 0xa8);
        dVar29 = *(double *)(param_1 + 0xb0);
        dVar23 = dVar6 + dVar6;
        dVar30 = dVar29 + dVar29;
        dVar25 = dVar28 * (dVar28 + dVar28);
        dStack_1c0 = (DAT_149934d80._8_8_ - (dVar29 * dVar30 + dVar25)) * dVar4;
        local_198 = (1.0 - (dVar25 + dVar6 * dVar23)) * dVar24;
        dVar35 = *(double *)(param_1 + 0xa0) * dVar30;
        dVar25 = *(double *)(param_1 + 0xb8);
        dVar31 = dVar30 * dVar25;
        dVar32 = (dVar28 + dVar28) * *(double *)(param_1 + 0xb8);
        dVar25 = dVar23 * dVar25;
        local_1c8 = (dVar23 * dVar28 - dVar31) * dVar4;
        dStack_1a0 = (dVar30 * dVar6 - dVar32) * dVar24;
        dVar28 = (dVar23 * dVar28 + dVar31) * dVar19;
        local_1b8 = (dVar30 * dVar6 + dVar32) * dVar4;
        local_1a8 = (dVar25 + dVar35) * dVar24;
        local_1d8 = (dVar35 - dVar25) * dVar19;
        local_1e8._8_4_ = SUB84(dVar28,0);
        local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar29 * dVar30 + dVar6 * dVar23)) * dVar19;
        local_1e8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        dStack_1d0 = 0.0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = *(undefined8 *)(param_1 + 0xc0);
        uStack_180 = *(undefined8 *)(param_1 + 200);
        local_178 = *(undefined8 *)(param_1 + 0xd0);
        uStack_170 = 0x3ff0000000000000;
        dVar35 = *pdVar9;
        dVar6 = *(double *)(lVar8 + 0x28);
        dVar28 = *(double *)(lVar8 + 0x30);
        dVar29 = dVar6 + dVar6;
        dVar23 = dVar28 + dVar28;
        dVar32 = dVar35 * (dVar35 + dVar35);
        dVar25 = *(double *)(lVar8 + 0x38);
        dVar30 = dVar23 * dVar25;
        dVar31 = (dVar35 + dVar35) * *(double *)(lVar8 + 0x38);
        dVar25 = dVar29 * dVar25;
        dStack_220 = (dVar23 * dVar6 - dVar31) * dVar2;
        local_268 = ((double)DAT_149934d80 - (dVar28 * dVar23 + dVar6 * dVar29)) * dVar3;
        dVar28 = (DAT_149934d80._8_8_ - (dVar28 * dVar23 + dVar32)) * dVar5;
        dStack_260 = (dVar29 * dVar35 + dVar30) * dVar3;
        local_238 = (dVar23 * dVar6 + dVar31) * dVar5;
        local_228 = (dVar25 + *pdVar9 * dVar23) * dVar2;
        local_258 = (*pdVar9 * dVar23 - dVar25) * dVar3;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar28,0);
        local_248._0_8_ = (dVar29 * dVar35 - dVar30) * dVar5;
        local_248._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_230 = 0;
        local_218 = (1.0 - (dVar32 + dVar6 * dVar29)) * dVar2;
        uStack_210 = 0;
        local_208 = *(undefined8 *)(lVar8 + 0x40);
        uStack_200 = *(undefined8 *)(lVar8 + 0x48);
        local_1f8 = *(undefined8 *)(lVar8 + 0x50);
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_168);
        FUN_144a1c686(local_168,0x3e45798ee0000000);
        auVar26._8_8_ = -(ulonglong)(0.0 <= dVar4 * dVar5);
        auVar26._0_8_ = -(ulonglong)(0.0 <= dVar19 * dVar3);
        auVar20 = blendvpd(_DAT_149936790,auVar36,auVar26);
        uVar16 = -(ulonglong)(0.0 <= dVar24 * dVar2);
        dVar19 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
        dVar24 = auVar20._0_8_;
        stack0xfffffffffffffea0 = stack0xfffffffffffffea0 * dVar24;
        local_168._0_8_ = (double)local_168._0_8_ * dVar24;
        local_158._0_8_ = (double)local_158._0_8_ * dVar24;
        dVar24 = auVar20._8_8_;
        local_138 = local_138 * dVar24;
        dStack_140 = dStack_140 * dVar24;
        local_148 = dVar24 * local_148;
        local_118 = local_118 * dVar19;
        dStack_120 = dStack_120 * dVar19;
        local_128 = dVar19 * local_128;
        FUN_14481fd10(&local_348,local_168);
        dVar19 = local_338 * local_338 + local_348 * local_348;
        dVar24 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
        auVar22._0_8_ = dVar19 + dVar24;
        auVar22._8_8_ = dVar19 + dVar24;
        auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar20 = sqrtpd(auVar22,auVar22);
        auVar20 = divpd(auVar36,auVar20);
        auVar36._0_8_ = auVar20._0_8_ * local_338;
        auVar36._8_8_ = auVar20._8_8_ * dStack_330;
        dVar19 = (double)((ulonglong)(local_348 * auVar20._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        dVar24 = (double)((ulonglong)(dStack_340 * auVar20._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
        auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar18);
      }
      if (local_360[0] != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      dVar19 = *(double *)(param_1 + 0xa0);
      dVar24 = *(double *)(param_1 + 0xa8);
      auVar20 = *(undefined1 (*) [16])(param_1 + 0xb0);
    }
    FUN_1484ec3d2(param_1);
    dVar33 = dVar33 * *(double *)(param_1 + 0xe0);
    dVar34 = dVar34 * *(double *)(param_1 + 0xe8);
    dVar17 = dVar17 * *(double *)(param_1 + 0xf0);
    dVar2 = *(double *)(param_1 + 0xa0);
    dVar4 = *(double *)(param_1 + 0xa8);
    dVar5 = *(double *)(param_1 + 0xb0);
    dVar3 = *(double *)(param_1 + 0xb8);
    dVar25 = dVar34 * dVar2 - dVar33 * dVar4;
    dVar28 = dVar17 * dVar4 - dVar34 * dVar5;
    dVar35 = dVar33 * dVar5 - dVar2 * dVar17;
    dVar28 = dVar28 + dVar28;
    dVar35 = dVar35 + dVar35;
    dVar25 = dVar25 + dVar25;
    local_148 = (dVar25 * dVar4 - dVar35 * dVar5) + dVar3 * dVar28 + dVar33 +
                *(double *)(param_1 + 0xc0);
    dStack_140 = (dVar5 * dVar28 - dVar2 * dVar25) + *(double *)(param_1 + 0xb8) * dVar35 + dVar34 +
                 *(double *)(param_1 + 200);
    local_138 = dVar25 * dVar3 + dVar17 + (dVar35 * dVar2 - dVar28 * dVar4) +
                *(double *)(param_1 + 0xd0);
    local_2c0 = local_168;
    local_168._8_4_ = SUB84(dVar24,0);
    local_168._0_8_ = dVar19;
    uStack_15c = (int)((ulonglong)dVar24 >> 0x20);
    uStack_130 = 0;
    local_128 = 1.0;
    dStack_120 = 1.0;
    local_118 = 1.0;
    uStack_110 = 0;
    local_2d8 = 0;
    local_2c8 = &PTR_LAB_14af11b30;
    local_2e8 = &LAB_143b9565e;
    _local_158 = auVar20;
    FUN_143b83e5e(&local_350);
    local_318 = 0;
    local_308 = &PTR_LAB_14af11b10;
    local_300 = FUN_143b956b8;
    local_328 = &LAB_1485165fa;
    FUN_143b83e5e(&local_350);
  }
  if ((local_e0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484eb09e FUN_1484eb09e body=3658 status=ok
// SIG undefined FUN_1484eb09e(void)

void FUN_1484eb09e(undefined **param_1,char param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  char local_211;
  undefined **local_210;
  undefined **local_208;
  code *local_200;
  undefined ***local_1f8;
  code *local_1f0;
  undefined ***local_1e8;
  code *local_1e0;
  undefined ***local_1d8;
  code *local_1d0;
  undefined ***local_1c8;
  code *local_1c0;
  undefined ***local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined **local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined ***local_198;
  undefined8 *puStack_190;
  undefined **local_188;
  undefined4 *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  undefined4 *puStack_170;
  uint local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined **local_138;
  undefined4 *puStack_130;
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined **ppuStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_d8 = (undefined **)0x0;
  local_c8 = (undefined ***)0x0;
  if (param_2 == '\0') {
    local_188 = &PTR_LAB_14af11ad0;
    pcVar4 = FUN_143b89d58;
  }
  else {
    FUN_146c83e96(param_1 + 0x26,1,1);
    FUN_1484d04e2(param_1[0x49]);
    *(undefined4 *)(param_1 + 0x5f) = 0;
    if (*(int *)((longlong)param_1 + 0x2fc) != 0) {
      FUN_1485156a2(param_1 + 0x5e);
    }
    FUN_140dc1ef6(param_1 + 0x4a,0);
    FUN_14010afec(param_1 + 0x54,0);
    local_188 = &PTR_LAB_14af11ab0;
    pcVar4 = FUN_143b89870;
  }
  puVar3 = uStack_a0;
  puStack_180 = (undefined4 *)ppuStack_b0;
  ppuVar1 = local_b8;
  puVar9 = uStack_c0;
  local_198 = local_c8;
  local_1a8 = local_d8;
  local_128 = local_a8;
  uStack_124 = uStack_a4;
  uStack_120 = (undefined4)uStack_a0;
  uStack_11c = uStack_a0._4_4_;
  local_138 = local_b8;
  puStack_130 = (undefined4 *)ppuStack_b0;
  local_148 = (undefined4)local_c8;
  uStack_144 = local_c8._4_4_;
  uStack_140 = (undefined4)uStack_c0;
  uStack_13c = uStack_c0._4_4_;
  local_158._0_4_ = (undefined4)local_d8;
  local_158._4_4_ = local_d8._4_4_;
  uStack_150 = uStack_d0;
  uStack_14c = uStack_cc;
  uStack_a0 = puStack_170;
  local_d8 = (undefined **)pcVar4;
  local_c8 = (undefined ***)0x0;
  uStack_c0 = puStack_190;
  local_b8 = local_188;
  ppuStack_b0 = param_1;
  uStack_1a0 = uStack_d0;
  uStack_19c = uStack_cc;
  local_188 = ppuVar1;
  local_178 = local_a8;
  uStack_174 = uStack_a4;
  puStack_170 = puVar3;
  puStack_190 = puVar9;
  if (local_1a8 != (undefined **)0x0) {
    pppuVar7 = local_198;
    if (local_198 == (undefined ***)0x0) {
      pppuVar7 = &local_188;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  puVar2 = param_1[0x10];
  ppuVar1 = (undefined **)(puVar2 + 0x80);
  local_1ac = 0;
  local_211 = param_2;
  if (*(int *)(puVar2 + 0x88) < 1) {
    uVar11 = 0;
  }
  else {
    local_208 = param_1 + 0x92;
    local_210 = param_1 + 0x5e;
    uVar11 = 0;
    do {
      local_138 = (undefined **)0x0;
      puStack_130 = (undefined4 *)0x0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_150 = local_1ac;
      lVar5 = 0x300;
      if (*(int *)(param_1 + 0x8c) != *(int *)((longlong)param_1 + 0x48c)) {
        ppuVar6 = (undefined **)param_1[0x93];
        if ((undefined **)param_1[0x93] == (undefined **)0x0) {
          ppuVar6 = local_208;
        }
        iVar8 = *(int *)((longlong)ppuVar6 +
                        (ulonglong)(*(int *)(param_1 + 0x94) + 0x7fffffffU & uVar11) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(param_1[0x8b] + (longlong)iVar8 * 0xc) == uVar11) {
              lVar5 = 0x310;
              break;
            }
            iVar8 = *(int *)(param_1[0x8b] + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      local_1b0 = *(undefined4 *)((longlong)param_1 + lVar5);
      local_158._0_4_ = 0;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,param_2);
      puStack_190 = &local_158;
      local_178 = 0x18;
      puStack_170 = &local_1ac;
      local_1b8 = &local_1a8;
      local_1c0 = FUN_143b8a18a;
      local_228 = 0;
      local_1a8 = param_1;
      local_198 = (undefined ***)&local_d8;
      local_188 = ppuVar1;
      puStack_180 = &local_1b0;
      uStack_174 = uVar11;
      local_168 = uVar11;
      local_158._4_4_ = uVar11;
      local_148 = local_1b0;
      FUN_1484d1044(param_1[0x49],1,&local_1c0,0xffffffff);
      uStack_14c = local_1ac;
      if (param_2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x5f);
        *(uint *)(param_1 + 0x5f) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2fc) < iVar8 + 1U) {
          FUN_148515964(local_210,iVar8);
        }
        puVar9 = &local_158;
        puVar10 = (undefined8 *)(*local_210 + (longlong)iVar8 * 0x80);
        for (lVar5 = 0x10; param_2 = local_211, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(puVar2 + 0x88));
  }
  if (0 < *(int *)(puVar2 + 0x98)) {
    local_208 = param_1 + 0x92;
    local_210 = param_1 + 0x5e;
    uVar12 = 0;
    do {
      local_138 = (undefined **)0x0;
      puStack_130 = (undefined4 *)0x0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_150 = local_1ac;
      lVar5 = 0x300;
      if (*(int *)(param_1 + 0x8c) != *(int *)((longlong)param_1 + 0x48c)) {
        ppuVar6 = (undefined **)param_1[0x93];
        if ((undefined **)param_1[0x93] == (undefined **)0x0) {
          ppuVar6 = local_208;
        }
        iVar8 = *(int *)((longlong)ppuVar6 +
                        (ulonglong)(*(int *)(param_1 + 0x94) + 0x7fffffffU & uVar11) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(param_1[0x8b] + (longlong)iVar8 * 0xc) == uVar11) {
              lVar5 = 0x310;
              break;
            }
            iVar8 = *(int *)(param_1[0x8b] + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      local_1b0 = *(undefined4 *)((longlong)param_1 + lVar5);
      local_158._0_4_ = 1;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,param_2);
      puStack_190 = &local_158;
      puStack_180 = &local_1b0;
      local_178 = 0x18;
      puStack_170 = &local_1ac;
      local_1c8 = &local_1a8;
      local_1d0 = FUN_143b8c340;
      local_228 = 0;
      local_1a8 = param_1;
      local_198 = (undefined ***)&local_d8;
      local_188 = ppuVar1;
      uStack_174 = uVar11;
      local_168 = uVar12;
      local_158._4_4_ = uVar11;
      local_148 = local_1b0;
      FUN_1484d1044(param_1[0x49],1,&local_1d0,0xffffffff);
      uStack_14c = local_1ac;
      if (param_2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x5f);
        *(uint *)(param_1 + 0x5f) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2fc) < iVar8 + 1U) {
          FUN_148515964(local_210,iVar8);
        }
        puVar9 = &local_158;
        puVar10 = (undefined8 *)(*local_210 + (longlong)iVar8 * 0x80);
        for (lVar5 = 0x10; param_2 = local_211, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(puVar2 + 0x98));
  }
  if (0 < *(int *)(puVar2 + 0xa8)) {
    local_208 = param_1 + 0x92;
    local_210 = param_1 + 0x5e;
    uVar12 = 0;
    do {
      local_138 = (undefined **)0x0;
      puStack_130 = (undefined4 *)0x0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_150 = local_1ac;
      lVar5 = 0x300;
      if (*(int *)(param_1 + 0x8c) != *(int *)((longlong)param_1 + 0x48c)) {
        ppuVar6 = (undefined **)param_1[0x93];
        if ((undefined **)param_1[0x93] == (undefined **)0x0) {
          ppuVar6 = local_208;
        }
        iVar8 = *(int *)((longlong)ppuVar6 +
                        (ulonglong)(*(int *)(param_1 + 0x94) + 0x7fffffffU & uVar11) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(param_1[0x8b] + (longlong)iVar8 * 0xc) == uVar11) {
              lVar5 = 0x310;
              break;
            }
            iVar8 = *(int *)(param_1[0x8b] + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      local_1b0 = *(undefined4 *)((longlong)param_1 + lVar5);
      local_158._0_4_ = 2;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,param_2);
      puStack_190 = &local_158;
      puStack_180 = &local_1b0;
      local_178 = 0x18;
      puStack_170 = &local_1ac;
      local_1d8 = &local_1a8;
      local_1e0 = FUN_143b8d13c;
      local_228 = 0;
      local_1a8 = param_1;
      local_198 = (undefined ***)&local_d8;
      local_188 = ppuVar1;
      uStack_174 = uVar11;
      local_168 = uVar12;
      local_158._4_4_ = uVar11;
      local_148 = local_1b0;
      FUN_1484d1044(param_1[0x49],1,&local_1e0,0xffffffff);
      uStack_14c = local_1ac;
      if (param_2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x5f);
        *(uint *)(param_1 + 0x5f) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2fc) < iVar8 + 1U) {
          FUN_148515964(local_210,iVar8);
        }
        puVar9 = &local_158;
        puVar10 = (undefined8 *)(*local_210 + (longlong)iVar8 * 0x80);
        for (lVar5 = 0x10; param_2 = local_211, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(puVar2 + 0xa8));
  }
  if (0 < *(int *)(puVar2 + 0xb8)) {
    local_208 = param_1 + 0x92;
    local_210 = param_1 + 0x5e;
    uVar12 = 0;
    do {
      local_138 = (undefined **)0x0;
      puStack_130 = (undefined4 *)0x0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_150 = local_1ac;
      lVar5 = 0x300;
      if (*(int *)(param_1 + 0x8c) != *(int *)((longlong)param_1 + 0x48c)) {
        ppuVar6 = (undefined **)param_1[0x93];
        if ((undefined **)param_1[0x93] == (undefined **)0x0) {
          ppuVar6 = local_208;
        }
        iVar8 = *(int *)((longlong)ppuVar6 +
                        (ulonglong)(*(int *)(param_1 + 0x94) + 0x7fffffffU & uVar11) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(param_1[0x8b] + (longlong)iVar8 * 0xc) == uVar11) {
              lVar5 = 0x310;
              break;
            }
            iVar8 = *(int *)(param_1[0x8b] + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      local_1b0 = *(undefined4 *)((longlong)param_1 + lVar5);
      local_158._0_4_ = 3;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,param_2);
      puStack_190 = &local_158;
      puStack_180 = &local_1b0;
      local_178 = 0x18;
      puStack_170 = &local_1ac;
      local_1e8 = &local_1a8;
      local_1f0 = FUN_143b928be;
      local_228 = 0;
      local_1a8 = param_1;
      local_198 = (undefined ***)&local_d8;
      local_188 = ppuVar1;
      uStack_174 = uVar11;
      local_168 = uVar12;
      local_158._4_4_ = uVar11;
      local_148 = local_1b0;
      FUN_1484d1044(param_1[0x49],1,&local_1f0,0xffffffff);
      uStack_14c = local_1ac;
      if (param_2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x5f);
        *(uint *)(param_1 + 0x5f) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2fc) < iVar8 + 1U) {
          FUN_148515964(local_210,iVar8);
        }
        puVar9 = &local_158;
        puVar10 = (undefined8 *)(*local_210 + (longlong)iVar8 * 0x80);
        for (lVar5 = 0x10; param_2 = local_211, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(puVar2 + 0xb8));
  }
  if (0 < *(int *)(puVar2 + 0xd8)) {
    local_208 = param_1 + 0x92;
    local_210 = param_1 + 0x5e;
    uVar12 = 0;
    do {
      local_138 = (undefined **)0x0;
      puStack_130 = (undefined4 *)0x0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_150 = local_1ac;
      lVar5 = 0x300;
      if (*(int *)(param_1 + 0x8c) != *(int *)((longlong)param_1 + 0x48c)) {
        ppuVar6 = (undefined **)param_1[0x93];
        if ((undefined **)param_1[0x93] == (undefined **)0x0) {
          ppuVar6 = local_208;
        }
        iVar8 = *(int *)((longlong)ppuVar6 +
                        (ulonglong)(*(int *)(param_1 + 0x94) + 0x7fffffffU & uVar11) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(param_1[0x8b] + (longlong)iVar8 * 0xc) == uVar11) {
              lVar5 = 0x310;
              break;
            }
            iVar8 = *(int *)(param_1[0x8b] + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      local_1b0 = *(undefined4 *)((longlong)param_1 + lVar5);
      local_158._0_4_ = 5;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,param_2);
      puStack_190 = &local_158;
      puStack_180 = &local_1b0;
      local_178 = 0x18;
      puStack_170 = &local_1ac;
      local_1f8 = &local_1a8;
      local_200 = FUN_143b9467a;
      local_228 = 0;
      local_1a8 = param_1;
      local_198 = (undefined ***)&local_d8;
      local_188 = ppuVar1;
      uStack_174 = uVar11;
      local_168 = uVar12;
      local_158._4_4_ = uVar11;
      local_148 = local_1b0;
      FUN_1484d1044(param_1[0x49],1,&local_200,0xffffffff);
      uStack_14c = local_1ac;
      if (param_2 != '\0') {
        iVar8 = *(int *)(param_1 + 0x5f);
        *(uint *)(param_1 + 0x5f) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2fc) < iVar8 + 1U) {
          FUN_148515964(local_210,iVar8);
        }
        puVar9 = &local_158;
        puVar10 = (undefined8 *)(*local_210 + (longlong)iVar8 * 0x80);
        for (lVar5 = 0x10; param_2 = local_211, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(puVar2 + 0xd8));
  }
  if (local_d8 != (undefined **)0x0) {
    pppuVar7 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar7 = &local_b8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_90 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ebeea FUN_1484ebeea body=427 status=ok
// SIG undefined FUN_1484ebeea(void)

void FUN_1484ebeea(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = *(longlong **)(param_1 + 0x240);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2);
    if (plVar2[5] != 0) {
      FUN_140aeefbc(plVar2[5],0,1);
      plVar2[5] = 0;
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  FUN_1411371f6(local_a8);
  lVar1 = FUN_1484ec096(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x240) = lVar1;
  local_108[0] = 0;
  local_108[1] = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1484e0ce2(lVar1,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x240);
  FUN_1400b22c2(local_108,"CollisionPrimitives");
  lVar1 = FUN_1484e0748(uVar3,local_108);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x248) = lVar1;
  if (local_108[0] != 0) {
    FUN_1400020a8();
    lVar1 = *(longlong *)(param_1 + 0x248);
  }
  plVar2 = (longlong *)FUN_148444614(param_1);
  uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  uVar3 = FUN_1485583eb(uVar3,0);
  FUN_1484d0608(lVar1,uVar3);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ec096 FUN_1484ec096 body=148 status=ok
// SIG undefined FUN_1484ec096(void)

undefined8 FUN_1484ec096(undefined8 param_1)

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
  uVar1 = FUN_1410fb3ea();
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



// FUNCTION 1484ec12c FUN_1484ec12c body=159 status=ok
// SIG undefined FUN_1484ec12c(void)

void FUN_1484ec12c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_148444614();
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148558a96(param_1 + 0x55c,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x240);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    if (plVar1[5] != 0) {
      FUN_140aeefbc(plVar1[5],0,1);
      plVar1[5] = 0;
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  plVar1 = (longlong *)FUN_148444614(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)FUN_148451354(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001484ec1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,*(code **)(*plVar1 + 0x2d8));
  return;
}



// FUNCTION 1484ec1cc FUN_1484ec1cc body=87 status=ok
// SIG undefined FUN_1484ec1cc(void)

void FUN_1484ec1cc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148444614();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x0001484ec220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x448) + 0x2b0))(*(longlong **)(param_1 + 0x448),param_2);
  return;
}



// FUNCTION 1484ec238 FUN_1484ec238 body=409 status=ok
// SIG undefined FUN_1484ec238(void)

void FUN_1484ec238(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1484ea6be();
  FUN_1484ec3d2(param_1);
  if (0 < *(int *)(param_1 + 0x2f8)) {
    uVar4 = 0;
    do {
      lVar2 = 0x300;
      if (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x48c)) {
        lVar3 = *(longlong *)(param_1 + 0x498);
        if (*(longlong *)(param_1 + 0x498) == 0) {
          lVar3 = param_1 + 0x490;
        }
        iVar1 = *(int *)(lVar3 + (ulonglong)((uint)uVar4 & *(int *)(param_1 + 0x4a0) + 0x7fffffffU)
                                 * 4);
        if (iVar1 != -1) {
          do {
            if (uVar4 == *(uint *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar1 * 0xc)) {
              lVar2 = 0x310;
              break;
            }
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar1 * 0xc + 4);
          } while (iVar1 != -1);
        }
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + 0x10 + uVar4 * 0x80) =
           *(undefined4 *)(param_1 + lVar2);
      if (*(int *)(param_1 + 600) != *(int *)(param_1 + 0x284)) {
        lVar2 = *(longlong *)(param_1 + 0x290);
        if (*(longlong *)(param_1 + 0x290) == 0) {
          lVar2 = param_1 + 0x288;
        }
        iVar1 = *(int *)(lVar2 + (ulonglong)((uint)uVar4 & *(int *)(param_1 + 0x298) + 0x7fffffffU)
                                 * 4);
        if (iVar1 != -1) {
          do {
            lVar2 = *(longlong *)(param_1 + 0x250) + (longlong)iVar1 * 0x20;
            if (uVar4 == *(uint *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar1 * 0x20))
            goto LAB_1484ec2b3;
            iVar1 = *(int *)(lVar2 + 0x18);
          } while (iVar1 != -1);
        }
      }
      lVar2 = 0;
LAB_1484ec2b3:
      iVar1 = *(int *)(lVar2 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar3 = 0;
        do {
          FUN_1484d0916(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(lVar2 + lVar3),
                        *(longlong *)(param_1 + 0x2f0) + uVar4 * 0x80 + 0x10);
          lVar3 = lVar3 + 4;
        } while ((longlong)iVar1 * 4 != lVar3);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x2f8));
  }
  return;
}



// FUNCTION 1484ec3d2 FUN_1484ec3d2 body=707 status=ok
// SIG undefined FUN_1484ec3d2(void)

void FUN_1484ec3d2(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  int *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = *(longlong **)(param_1 + 0x3d0);
  if ((((plVar4 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x3d8) == 0)) ||
      (*(longlong *)(param_1 + 0x3e0) == 0)) ||
     ((*(longlong *)(param_1 + 1000) == 0 || (*(longlong *)(param_1 + 0x3f0) == 0))))
  goto switchD_1484ec577_caseD_4;
  (**(code **)(*plVar4 + 0x350))(plVar4,0);
  (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x350))(*(longlong **)(param_1 + 0x3d8),0);
  (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x350))(*(longlong **)(param_1 + 0x3e0),0);
  (**(code **)(**(longlong **)(param_1 + 1000) + 0x350))(*(longlong **)(param_1 + 1000),0);
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x350))(*(longlong **)(param_1 + 0x3f0),0);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_1 + 0x3a0);
    }
  }
  *(longlong *)(param_1 + 0x3c8) = lVar3;
  if ((*(char *)(param_1 + 0x450) != '\0') ||
     (*(int *)(param_1 + 0x460) == *(int *)(param_1 + 0x48c))) goto switchD_1484ec577_caseD_4;
  if ((*(int *)(param_1 + 0x78) != 0) &&
     ((*(longlong **)(param_1 + 0x70) != (longlong *)0x0 &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(), cVar2 != '\0')))) {
    if (*(int *)(param_1 + 0x78) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x70);
    }
    cVar2 = (**(code **)(*plVar4 + 0x58))();
    if (cVar2 != '\0') goto switchD_1484ec577_caseD_4;
  }
  if (*(int *)(param_1 + 0x460) - *(int *)(param_1 + 0x48c) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140619b9c(param_1 + 0x458,local_28);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + (longlong)*local_28[0] * 0x80);
  if (local_28[0] != (int *)0x0) {
    FUN_1400020a8();
  }
  switch(uVar1) {
  case 0:
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x350))(*(longlong **)(param_1 + 0x3d8),1);
    lVar3 = *(longlong *)(param_1 + 0x3a8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
LAB_1484ec699:
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + 0x3a8);
      }
    }
    break;
  case 1:
    (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x350))(*(longlong **)(param_1 + 0x3e0),1);
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) goto LAB_1484ec699;
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_1 + 0x3b0);
    }
    break;
  case 2:
    (**(code **)(**(longlong **)(param_1 + 1000) + 0x350))(*(longlong **)(param_1 + 1000),1);
    lVar3 = *(longlong *)(param_1 + 0x3b8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) goto LAB_1484ec699;
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_1 + 0x3b8);
    }
    break;
  case 3:
  case 5:
    (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x350))(*(longlong **)(param_1 + 0x3f0),1);
    lVar3 = *(longlong *)(param_1 + 0x3c0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) goto LAB_1484ec699;
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_1 + 0x3c0);
    }
    break;
  default:
    goto switchD_1484ec577_caseD_4;
  }
  *(longlong *)(param_1 + 0x3c8) = lVar3;
switchD_1484ec577_caseD_4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ec6a8 FUN_1484ec6a8 body=248 status=ok
// SIG undefined FUN_1484ec6a8(void)

void FUN_1484ec6a8(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [56];
  undefined8 local_80;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x400);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x420);
    if (*(undefined8 **)(param_1 + 0x410) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x410);
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  cVar1 = FUN_146c84bb4(param_1 + 0x130,&local_e8,local_b8,local_68);
  if (cVar1 != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 8) = local_80;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
    param_3[0x28] = 0;
    *(undefined8 *)(param_3 + 0x2c) = 0;
    *(undefined8 *)(param_3 + 0x34) = 0;
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ec7a2 FUN_1484ec7a2 body=234 status=ok
// SIG undefined FUN_1484ec7a2(void)

uint * FUN_1484ec7a2(longlong param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [40];
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = local_70 & 0xffffff00;
  uStack_68 = 0x47efffffe0000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3ff0000000000000;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  cVar1 = FUN_1484ec6a8(param_1 + -0x30,param_3);
  if (cVar1 != '\0') {
    param_2[0xc] = uStack_44._4_4_;
    param_2[0xd] = (uint)uStack_3c;
    param_2[0xe] = uStack_3c._4_4_;
    param_2[0xf] = uStack_34;
    param_2[8] = (uint)local_50;
    param_2[9] = local_50._4_4_;
    param_2[10] = uStack_48;
    param_2[0xb] = (uint)uStack_44;
    param_2[4] = (uint)local_60;
    param_2[5] = local_60._4_4_;
    param_2[6] = (uint)uStack_58;
    param_2[7] = uStack_58._4_4_;
    *param_2 = local_70;
    param_2[1] = uStack_6c;
    param_2[2] = (uint)uStack_68;
    param_2[3] = uStack_68._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  *(undefined1 *)param_2 = 1;
  param_2[2] = 0xe0000000;
  param_2[3] = 0x47efffff;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0x3ff00000;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484ec88e FUN_1484ec88e body=1775 status=ok
// SIG undefined FUN_1484ec88e(void)

void FUN_1484ec88e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  uint local_1c0 [20];
  undefined4 *local_170;
  undefined8 *local_168;
  undefined4 local_15c;
  undefined8 local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_f8 [2];
  undefined8 local_e8 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar12 = param_1 + -8;
  plVar5 = (longlong *)FUN_14479d2ce(lVar12);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&DAT_14cb4cc10);
  lVar6 = param_1 + 0x428;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,lVar6);
  local_f8[0] = *(longlong *)(param_1 + 0x3d0);
  local_e8[0] = 0;
  if (local_f8[0] != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x3f0);
    if (*(undefined8 **)(param_1 + 0x3e0) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x3e0);
    }
    (**(code **)*puVar11)(puVar11,local_e8);
  }
  lVar10 = param_1 + -0x30;
  local_158[0] = *param_2;
  local_158[1] = param_2[1];
  local_148 = *(undefined4 *)(param_2 + 2);
  uStack_144 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_140 = *(undefined4 *)(param_2 + 3);
  uStack_13c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_138 = param_2[4];
  uStack_130 = *(undefined4 *)(param_2 + 5);
  uStack_12c = CONCAT44(uStack_12c._4_4_,*(undefined4 *)((longlong)param_2 + 0x2c));
  cVar3 = FUN_146c84bb4(param_1 + 0x100,local_158,local_1c0,local_f8);
  if (cVar3 == '\0') {
    FUN_14068ded2(lVar6,0);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x2f0);
    plVar5 = (longlong *)(param_1 + 0x310);
    if (*(longlong **)(param_1 + 0x300) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x300);
    }
    uVar7 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar7);
    pcVar2 = *(code **)(param_1 + 0x330);
    plVar5 = (longlong *)(param_1 + 0x350);
    if (*(longlong **)(param_1 + 0x340) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x340);
    }
    (**(code **)(*plVar5 + 8))();
    cVar4 = (*pcVar2)();
    if (cVar3 == '\0') {
      if (cVar4 != '\0') {
        if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
          lVar8 = param_1 + 0x2a8;
          if (*(longlong *)(param_1 + 0x2b0) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x2b0);
          }
          iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & local_1c0[0]) * 4);
          if (iVar13 != -1) {
            do {
              lVar8 = *(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10;
              if (*(uint *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10) ==
                  local_1c0[0]) goto LAB_1484ecda9;
              iVar13 = *(int *)(lVar8 + 8);
            } while (iVar13 != -1);
          }
        }
        lVar8 = 0;
LAB_1484ecda9:
        FUN_144a7cc9e(lVar6,*(undefined4 *)(lVar8 + 4));
        goto LAB_1484ecabc;
      }
      if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
        lVar8 = param_1 + 0x2a8;
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x2b0);
        }
        iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & local_1c0[0]) * 4);
        if (iVar13 != -1) {
          do {
            lVar8 = *(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10) == local_1c0[0])
            goto LAB_1484ece5c;
            iVar13 = *(int *)(lVar8 + 8);
          } while (iVar13 != -1);
        }
      }
      lVar8 = 0;
LAB_1484ece5c:
      local_15c = *(undefined4 *)(lVar8 + 4);
      local_168 = local_158;
      local_138 = 0;
      uStack_130 = 0;
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      local_170 = &local_15c;
      FUN_1400bab40(local_158);
      FUN_145be27ca(lVar6,local_158);
    }
    else {
      if (cVar4 == '\0') {
        if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
          lVar8 = param_1 + 0x2a8;
          if (*(longlong *)(param_1 + 0x2b0) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x2b0);
          }
          iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & local_1c0[0]) * 4);
          if (iVar13 != -1) {
            do {
              lVar8 = *(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10;
              if (*(uint *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10) ==
                  local_1c0[0]) goto LAB_1484ecdfc;
              iVar13 = *(int *)(lVar8 + 8);
            } while (iVar13 != -1);
          }
        }
        lVar8 = 0;
LAB_1484ecdfc:
        FUN_1447cbafe(lVar6,local_158,lVar8 + 4,0);
        goto LAB_1484ecabc;
      }
      if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
        lVar8 = param_1 + 0x2a8;
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x2b0);
        }
        iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & local_1c0[0]) * 4);
        if (iVar13 != -1) {
          do {
            lVar8 = *(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar13 * 0x10) == local_1c0[0])
            goto LAB_1484eca52;
            iVar13 = *(int *)(lVar8 + 8);
          } while (iVar13 != -1);
        }
      }
      lVar8 = 0;
LAB_1484eca52:
      local_15c = *(undefined4 *)(lVar8 + 4);
      local_168 = local_158;
      local_138 = 0;
      uStack_130 = 0;
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      local_170 = &local_15c;
      FUN_1400bab40(local_158);
      FUN_1484e6efc(lVar6,local_158);
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(local_158);
  }
LAB_1484ecabc:
  FUN_1484ec238(lVar10);
  if (((int)uStack_b0 - local_84 != *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x45c)) ||
     (cVar3 = FUN_1484e701c(&local_b8,lVar6), cVar3 == '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x398) + 0x2b0))
              (*(longlong **)(param_1 + 0x398),local_158);
    plVar5 = (longlong *)FUN_14479d2ce(lVar12);
    lVar8 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    local_1f8 = lVar8 + 0x28;
    puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    local_1ec = *(undefined4 *)(param_1 + 0x528);
    *puVar9 = &PTR_LAB_14af07a90;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    local_1e8 = lVar12;
    local_1e0 = lVar10;
    local_1d8 = lVar6;
    FUN_145c3f772(puVar9 + 1,&local_b8);
    *(undefined1 *)(puVar9 + 0xb) = 0;
    puVar11 = local_158;
    puVar14 = puVar9 + 0xc;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
    puVar11 = local_158;
    puVar14 = puVar9 + 0x18;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)(puVar9 + 0x24) = local_1ec;
    local_1c8 = puVar9;
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))(local_1f8,lVar10,&local_1c8,&DAT_14cb4cc00);
    plVar5 = (longlong *)FUN_14479d2ce(local_1e8);
    lVar10 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    local_1f8 = lVar10 + 0x28;
    puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x528);
    *puVar9 = &PTR_LAB_14af07a90;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    FUN_145c3f772(puVar9 + 1,local_1d8);
    lVar6 = local_1e0;
    lVar12 = local_1e8;
    *(undefined1 *)(puVar9 + 0xb) = 1;
    puVar11 = local_158;
    puVar14 = puVar9 + 0xc;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
    puVar11 = local_158;
    puVar14 = puVar9 + 0x18;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)(puVar9 + 0x24) = uVar1;
    local_1d0 = puVar9;
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))
              (local_1f8,local_1e0,&local_1d0,&DAT_14cb4cc10);
    FUN_1484ea6be(lVar6);
    FUN_1447f69b6(param_1 + 0x28);
  }
  plVar5 = (longlong *)FUN_14479d2ce(lVar12);
  lVar12 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ecf7e FUN_1484ecf7e body=85 status=ok
// SIG undefined FUN_1484ecf7e(void)

undefined1 * FUN_1484ecf7e(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_1484ec6a8(param_1 + -0x38,param_3,param_2);
  return param_2;
}



// FUNCTION 1484ecfde FUN_1484ecfde body=111 status=ok
// SIG undefined FUN_1484ecfde(void)

void FUN_1484ecfde(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < (longlong)*(int *)(param_1 + 0x440)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x440) * 0x80;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x2f0) + 8 + lVar1);
    if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x2f0) + 0xc + lVar1)) {
      do {
        FUN_1484d0916(*(undefined8 *)(param_1 + 0x248),iVar2,param_1 + 0x314);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x2f0) + 0xc +
                               (longlong)*(int *)(param_1 + 0x440) * 0x80));
    }
    *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
  }
  return;
}



// FUNCTION 1484ed04e FUN_1484ed04e body=556 status=ok
// SIG undefined FUN_1484ed04e(void)

undefined4 FUN_1484ed04e(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8 [20];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68[0] = *(longlong *)(param_1 + 0x3c8);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar4 = (undefined8 *)(param_1 + 1000);
    if (*(undefined8 **)(param_1 + 0x3d8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x3d8);
    }
    (**(code **)*puVar4)(puVar4,local_58);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_c8 = param_2[8];
  uStack_c4 = param_2[9];
  uStack_c0 = param_2[10];
  uStack_bc = param_2[0xb];
  uVar2 = FUN_146c84bb4(param_1 + 0xf8,&local_e8,local_b8,local_68);
  if (((char)uVar2 != '\0') && (local_b8[0] != *(uint *)(param_1 + 0x408))) {
    FUN_1484ecfde();
    if (*(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x29c)) {
      lVar5 = param_1 + 0x2a0;
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x2a8);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x2b0) - 1U & local_b8[0]) * 4);
      if (iVar6 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x268) + (longlong)iVar6 * 0x10;
          if (*(uint *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar6 * 0x10) == local_b8[0])
          goto LAB_1484ed13f;
          iVar6 = *(int *)(lVar5 + 8);
        } while (iVar6 != -1);
      }
    }
    lVar5 = 0;
LAB_1484ed13f:
    uVar1 = *(uint *)(lVar5 + 4);
    *(uint *)(param_1 + 0x408) = uVar1;
    if (*(int *)(param_1 + 0x428) != *(int *)(param_1 + 0x454)) {
      lVar5 = param_1 + 0x458;
      if (*(longlong *)(param_1 + 0x460) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x460);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x468) - 1U & uVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x420) + (longlong)iVar6 * 0xc) == uVar1) {
            *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d8);
            lVar5 = *(longlong *)(param_1 + 0x2b8);
            goto LAB_1484ed173;
          }
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x420) + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x2b8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(lVar5 + 0x10 + (longlong)(int)uVar1 * 0x80);
LAB_1484ed173:
    lVar3 = (longlong)(int)uVar1 * 0x80;
    iVar6 = *(int *)(lVar5 + 8 + lVar3);
    if (iVar6 < *(int *)(lVar5 + 0xc + lVar3)) {
      do {
        FUN_1484d0916(*(undefined8 *)(param_1 + 0x210),iVar6,param_1 + 0x2d4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(longlong *)(param_1 + 0x2b8) + 0xc +
                               (longlong)*(int *)(param_1 + 0x408) * 0x80));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1484ed2ba FUN_1484ed2ba body=1831 status=ok
// SIG undefined FUN_1484ed2ba(void)

void FUN_1484ed2ba(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong *local_168;
  undefined4 local_15c;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined **local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte local_120;
  undefined1 local_11f;
  undefined4 local_118;
  undefined ***local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  float local_f0;
  undefined8 local_d8;
  undefined1 local_cc [4];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar9 = *(longlong *)(param_1 + 0x80);
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af11af0;
  local_168 = plVar5 + 2;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x81) = 0;
  FUN_14058b698(local_168,lVar9 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  dVar14 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x110);
  dVar14 = (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14);
  dVar15 = *(double *)(param_1 + 0x120) - *(double *)(param_1 + 0x108);
  dVar15 = (double)(-(ulonglong)(0.0 <= dVar15) & (ulonglong)dVar15);
  uVar13 = -(ulonglong)(dVar14 <= dVar15);
  dVar15 = (double)(~uVar13 & (ulonglong)dVar14 | uVar13 & (ulonglong)dVar15);
  dVar14 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100);
  dVar14 = (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14);
  uVar13 = -(ulonglong)(dVar15 <= dVar14);
  local_f0 = (float)((double)(uVar13 & (ulonglong)dVar14 | ~uVar13 & (ulonglong)dVar15) * 0.5);
  local_110 = &local_138;
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_120 = local_120 | 1;
  local_11f = 3;
  local_118 = 6;
  local_138 = &PTR_FUN_14a418310;
  local_108 = DAT_14c8464e0;
  uStack_100 = (undefined4)DAT_14c8464e8;
  uStack_fc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  local_f8 = (undefined4)DAT_14c8464f0;
  uStack_f4 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  iVar3 = *(int *)(lVar9 + 0x88);
  *(uint *)(lVar9 + 0x88) = iVar3 + 1U;
  if (*(uint *)(lVar9 + 0x8c) < iVar3 + 1U) {
    FUN_140e25fd0(lVar9 + 0x80,iVar3);
  }
  lVar7 = *(longlong *)(lVar9 + 0x80);
  lVar10 = (longlong)iVar3 * 0x50;
  *(undefined ***)(lVar7 + lVar10) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar7 + 8 + lVar10) = local_130;
  *(ulonglong *)(lVar7 + 0xc + lVar10) = CONCAT44(uStack_128,uStack_12c);
  *(undefined4 *)(lVar7 + 0x14 + lVar10) = uStack_124;
  *(byte *)(lVar7 + 0x18 + lVar10) = *(byte *)(lVar7 + 0x18 + lVar10) & 0xfe | local_120 & 1;
  *(undefined1 *)(lVar7 + 0x19 + lVar10) = local_11f;
  *(undefined4 *)(lVar7 + 0x20 + lVar10) = 6;
  *(longlong *)(lVar7 + 0x28 + lVar10) = lVar7 + lVar10;
  *(undefined ***)(lVar7 + lVar10) = &PTR_FUN_14a418310;
  puVar2 = (undefined4 *)(lVar7 + 0x30 + lVar10);
  *puVar2 = (undefined4)local_108;
  puVar2[1] = local_108._4_4_;
  puVar2[2] = uStack_100;
  puVar2[3] = uStack_fc;
  puVar12 = (undefined8 *)(lVar7 + 0x3c + lVar10);
  *puVar12 = CONCAT44(local_f8,uStack_fc);
  puVar12[1] = CONCAT44(local_f0,uStack_f4);
  lVar7 = param_1 + 0x458;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,lVar7);
  FUN_14068ded2(lVar7,0);
  local_138 = (undefined **)CONCAT44(local_138._4_4_,*(int *)(lVar9 + 0x88) + -1);
  local_150 = lVar7;
  FUN_144984904(lVar7,&local_c8,&local_138,0);
  lVar9 = param_1 + 0x28;
  plVar6 = (longlong *)FUN_14479d2ce();
  lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  local_138 = (undefined **)0x14af07874;
  local_130 = 0xd;
  FUN_1446e940c(&local_c8,&local_138);
  local_138 = (undefined **)0x14af06d98;
  local_130 = 0x1c;
  FUN_1446e940c(local_cc,&local_138);
  FUN_140208bae(&local_138,local_cc,&local_c8,L"Add Sphere Collision Primitive");
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&local_138);
  if (local_138 != (undefined **)0x0) {
    (**(code **)(*local_138 + 0x10))();
  }
  plVar6 = (longlong *)FUN_14479d2ce(lVar9);
  lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  lVar7 = *(longlong *)(param_1 + 0x80);
  plVar6 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14af11af0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x81) = 0;
  FUN_14058b698(plVar6 + 2,lVar7 + 0x80);
  local_d8 = FUN_14001cc68(0x30,0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x558);
  local_130 = SUB84(plVar6,0);
  uStack_12c = (undefined4)((ulonglong)plVar6 >> 0x20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_c8 = local_168;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_168 = plVar5;
  local_138 = (undefined **)(plVar6 + 2);
  local_c0 = plVar5;
  FUN_1484f0bd0(local_d8,&local_c8,&local_138,uVar4);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))
            ((longlong *)(lVar10 + 0x28),param_1,&local_d8,&DAT_14cb4cc20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x40);
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2b0))
            (*(longlong **)(param_1 + 0x3c8),&local_138);
  local_158 = lVar9;
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar7 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_170 = lVar7 + 0x28;
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  local_15c = *(undefined4 *)(param_1 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,&local_b8);
  *(undefined1 *)(puVar8 + 0xb) = 0;
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0xc;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0x18;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = local_15c;
  local_140 = puVar8;
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(local_170,param_1,&local_140,&DAT_14cb4cc00);
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_170 = lVar9 + 0x28;
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,local_150);
  *(undefined1 *)(puVar8 + 0xb) = 1;
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = uVar4;
  local_148 = puVar8;
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x20))(local_170,param_1,&local_148,&DAT_14cb4cc10);
  FUN_1447f69b6(param_1 + 0x58);
  plVar5 = (longlong *)FUN_14479d2ce(local_158);
  lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
  FUN_1484eb09e(param_1,1);
  FUN_1484ea6be(param_1);
  FUN_1484ec3d2(param_1);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  plVar5 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_168 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ed9e2 FUN_1484ed9e2 body=1857 status=ok
// SIG undefined FUN_1484ed9e2(void)

void FUN_1484ed9e2(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong *local_178;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  undefined **local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte local_120;
  undefined1 local_11f;
  undefined4 local_118;
  undefined ***local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar10 = *(longlong *)(param_1 + 0x80);
  plVar6 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14af11af0;
  local_178 = plVar6 + 2;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x81) = 0;
  FUN_14058b698(local_178,lVar10 + 0x80);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  dVar5 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x110);
  fStack_d0 = (float)(double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5);
  dVar5 = *(double *)(param_1 + 0x120) - *(double *)(param_1 + 0x108);
  fStack_d4 = (float)(double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5);
  dVar5 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100);
  local_d8 = (float)(double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5);
  local_110 = &local_138;
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 1;
  local_120 = local_120 | 1;
  local_11f = 3;
  local_118 = 6;
  local_138 = &PTR_FUN_14a1e3c70;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  local_f8 = DAT_14c8464f0;
  uStack_f0 = (undefined4)DAT_14c8464f8;
  uStack_ec = DAT_14c8464f8._4_4_;
  uStack_e8 = (undefined4)DAT_14c846500;
  uStack_e4 = DAT_14c846500._4_4_;
  uStack_e0 = DAT_14c846508;
  iVar3 = *(int *)(lVar10 + 0x98);
  *(uint *)(lVar10 + 0x98) = iVar3 + 1U;
  if (*(uint *)(lVar10 + 0x9c) < iVar3 + 1U) {
    FUN_140c9d5a2(lVar10 + 0x90,iVar3);
  }
  lVar8 = *(longlong *)(lVar10 + 0x90);
  lVar11 = (longlong)iVar3 * 0x70;
  *(undefined ***)(lVar8 + lVar11) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar8 + 8 + lVar11) = local_130;
  *(ulonglong *)(lVar8 + 0xc + lVar11) = CONCAT44(uStack_128,uStack_12c);
  *(undefined4 *)(lVar8 + 0x14 + lVar11) = uStack_124;
  *(byte *)(lVar8 + 0x18 + lVar11) = *(byte *)(lVar8 + 0x18 + lVar11) & 0xfe | local_120 & 1;
  *(undefined1 *)(lVar8 + 0x19 + lVar11) = local_11f;
  *(undefined4 *)(lVar8 + 0x20 + lVar11) = 6;
  *(longlong *)(lVar8 + 0x28 + lVar11) = lVar8 + lVar11;
  *(undefined ***)(lVar8 + lVar11) = &PTR_FUN_14a1e3c70;
  puVar2 = (undefined4 *)(lVar8 + 0x30 + lVar11);
  *puVar2 = (undefined4)local_108;
  puVar2[1] = local_108._4_4_;
  puVar2[2] = (undefined4)uStack_100;
  puVar2[3] = uStack_100._4_4_;
  puVar2 = (undefined4 *)(lVar8 + 0x40 + lVar11);
  *puVar2 = (undefined4)local_f8;
  puVar2[1] = local_f8._4_4_;
  puVar2[2] = uStack_f0;
  puVar2[3] = uStack_ec;
  puVar2 = (undefined4 *)(lVar8 + 0x50 + lVar11);
  *puVar2 = uStack_e8;
  puVar2[1] = uStack_e4;
  puVar2[2] = (undefined4)uStack_e0;
  puVar2[3] = uStack_e0._4_4_;
  puVar2 = (undefined4 *)(lVar8 + 0x5c + lVar11);
  *puVar2 = uStack_e0._4_4_;
  puVar2[1] = local_d8;
  puVar2[2] = fStack_d4;
  puVar2[3] = fStack_d0;
  lVar8 = param_1 + 0x458;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,lVar8);
  FUN_14068ded2(lVar8,0);
  local_138 = (undefined **)
              CONCAT44(local_138._4_4_,*(int *)(lVar10 + 0x88) + *(int *)(lVar10 + 0x98) + -1);
  local_160 = lVar8;
  FUN_144984904(lVar8,&local_c8,&local_138,0);
  lVar10 = param_1 + 0x28;
  plVar7 = (longlong *)FUN_14479d2ce();
  lVar8 = (**(code **)(*plVar7 + 0x2c8))(plVar7);
  local_138 = (undefined **)0x14af078c8;
  local_130 = 10;
  FUN_1446e940c(&local_c8,&local_138);
  local_138 = (undefined **)0x14af06d98;
  local_130 = 0x1c;
  FUN_1446e940c(local_13c,&local_138);
  FUN_140208bae(&local_138,local_13c,&local_c8,L"Add Box Collision Primitive");
  (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28,&local_138);
  if (local_138 != (undefined **)0x0) {
    (**(code **)(*local_138 + 0x10))();
  }
  plVar7 = (longlong *)FUN_14479d2ce(lVar10);
  lVar11 = (**(code **)(*plVar7 + 0x2c8))(plVar7);
  lVar8 = *(longlong *)(param_1 + 0x80);
  plVar7 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14af11af0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x81) = 0;
  FUN_14058b698(plVar7 + 2,lVar8 + 0x80);
  local_148 = FUN_14001cc68(0x30,0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x558);
  local_130 = SUB84(plVar7,0);
  uStack_12c = (undefined4)((ulonglong)plVar7 >> 0x20);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_c8 = local_178;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_178 = plVar6;
  local_138 = (undefined **)(plVar7 + 2);
  local_c0 = plVar6;
  FUN_1484f0bd0(local_148,&local_c8,&local_138,uVar4);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x20))
            ((longlong *)(lVar11 + 0x28),param_1,&local_148,&DAT_14cb4cc20);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_1447f69b6(param_1 + 0x40);
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2b0))
            (*(longlong **)(param_1 + 0x3c8),&local_138);
  local_168 = lVar10;
  plVar6 = (longlong *)FUN_14479d2ce(lVar10);
  lVar8 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  local_180 = lVar8 + 0x28;
  puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  local_16c = *(undefined4 *)(param_1 + 0x558);
  *puVar9 = &PTR_LAB_14af07a90;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  FUN_145c3f772(puVar9 + 1,&local_b8);
  *(undefined1 *)(puVar9 + 0xb) = 0;
  pppuVar12 = &local_138;
  puVar13 = puVar9 + 0xc;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *pppuVar12;
    pppuVar12 = pppuVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  pppuVar12 = &local_138;
  puVar13 = puVar9 + 0x18;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *pppuVar12;
    pppuVar12 = pppuVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(puVar9 + 0x24) = local_16c;
  local_150 = puVar9;
  (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))(local_180,param_1,&local_150,&DAT_14cb4cc00);
  plVar6 = (longlong *)FUN_14479d2ce(lVar10);
  lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  local_180 = lVar10 + 0x28;
  puVar9 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x558);
  *puVar9 = &PTR_LAB_14af07a90;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  FUN_145c3f772(puVar9 + 1,local_160);
  *(undefined1 *)(puVar9 + 0xb) = 1;
  pppuVar12 = &local_138;
  puVar13 = puVar9 + 0xc;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *pppuVar12;
    pppuVar12 = pppuVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  pppuVar12 = &local_138;
  puVar13 = puVar9 + 0x18;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *pppuVar12;
    pppuVar12 = pppuVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(puVar9 + 0x24) = uVar4;
  local_158 = puVar9;
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))(local_180,param_1,&local_158,&DAT_14cb4cc10);
  FUN_1447f69b6(param_1 + 0x58);
  plVar6 = (longlong *)FUN_14479d2ce(local_168);
  lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
  FUN_1484eb09e(param_1,1);
  FUN_1484ea6be(param_1);
  FUN_1484ec3d2(param_1);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  plVar6 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_178 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ee124 FUN_1484ee124 body=1861 status=ok
// SIG undefined FUN_1484ee124(void)

void FUN_1484ee124(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong *local_178;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  undefined **local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte local_120;
  undefined1 local_11f;
  undefined4 local_118;
  undefined ***local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar9 = *(longlong *)(param_1 + 0x80);
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af11af0;
  local_178 = plVar5 + 2;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x81) = 0;
  FUN_14058b698(local_178,lVar9 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  dVar4 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x110);
  fStack_d4 = (float)(double)(-(ulonglong)(0.0 <= dVar4) & (ulonglong)dVar4);
  dVar15 = *(double *)(param_1 + 0x120) - *(double *)(param_1 + 0x108);
  dVar15 = (double)(-(ulonglong)(0.0 <= dVar15) & (ulonglong)dVar15);
  dVar4 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100);
  dVar4 = (double)(-(ulonglong)(0.0 <= dVar4) & (ulonglong)dVar4);
  uVar13 = SUB84(dVar4,0);
  uVar14 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (dVar4 <= dVar15) {
    uVar13 = SUB84(dVar15,0);
    uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  local_d8 = (float)((double)CONCAT44(uVar14,uVar13) * 0.5);
  local_110 = &local_138;
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 2;
  local_120 = local_120 | 1;
  local_11f = 3;
  local_118 = 6;
  local_138 = &PTR_FUN_14a1dee70;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  local_f8 = DAT_14c8464f0;
  uStack_f0 = (undefined4)DAT_14c8464f8;
  uStack_ec = DAT_14c8464f8._4_4_;
  uStack_e8 = (undefined4)DAT_14c846500;
  uStack_e4 = DAT_14c846500._4_4_;
  uStack_e0 = DAT_14c846508;
  iVar3 = *(int *)(lVar9 + 0xa8);
  *(uint *)(lVar9 + 0xa8) = iVar3 + 1U;
  if (*(uint *)(lVar9 + 0xac) < iVar3 + 1U) {
    FUN_1407e1e9e(lVar9 + 0xa0,iVar3);
  }
  lVar7 = *(longlong *)(lVar9 + 0xa0);
  lVar10 = (longlong)iVar3 * 0x68;
  *(undefined ***)(lVar7 + lVar10) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar7 + 8 + lVar10) = local_130;
  *(ulonglong *)(lVar7 + 0xc + lVar10) = CONCAT44(uStack_128,uStack_12c);
  *(undefined4 *)(lVar7 + 0x14 + lVar10) = uStack_124;
  *(byte *)(lVar7 + 0x18 + lVar10) = *(byte *)(lVar7 + 0x18 + lVar10) & 0xfe | local_120 & 1;
  *(undefined1 *)(lVar7 + 0x19 + lVar10) = local_11f;
  *(undefined4 *)(lVar7 + 0x20 + lVar10) = 6;
  *(longlong *)(lVar7 + 0x28 + lVar10) = lVar7 + lVar10;
  *(undefined ***)(lVar7 + lVar10) = &PTR_FUN_14a1dee70;
  puVar2 = (undefined4 *)(lVar7 + 0x30 + lVar10);
  *puVar2 = (undefined4)local_108;
  puVar2[1] = local_108._4_4_;
  puVar2[2] = (undefined4)uStack_100;
  puVar2[3] = uStack_100._4_4_;
  puVar2 = (undefined4 *)(lVar7 + 0x40 + lVar10);
  *puVar2 = (undefined4)local_f8;
  puVar2[1] = local_f8._4_4_;
  puVar2[2] = uStack_f0;
  puVar2[3] = uStack_ec;
  puVar2 = (undefined4 *)(lVar7 + 0x50 + lVar10);
  *puVar2 = uStack_e8;
  puVar2[1] = uStack_e4;
  puVar2[2] = (undefined4)uStack_e0;
  puVar2[3] = uStack_e0._4_4_;
  *(ulonglong *)(lVar7 + 0x60 + lVar10) = CONCAT44(fStack_d4,local_d8);
  lVar7 = param_1 + 0x458;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,lVar7);
  FUN_14068ded2(lVar7,0);
  local_138 = (undefined **)
              CONCAT44(local_138._4_4_,
                       *(int *)(lVar9 + 0x88) + *(int *)(lVar9 + 0x98) + *(int *)(lVar9 + 0xa8) + -1
                      );
  local_160 = lVar7;
  FUN_144984904(lVar7,&local_c8,&local_138,0);
  lVar9 = param_1 + 0x28;
  plVar6 = (longlong *)FUN_14479d2ce();
  lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  local_138 = (undefined **)0x14af0791e;
  local_130 = 0xe;
  FUN_1446e940c(&local_c8,&local_138);
  local_138 = (undefined **)0x14af06d98;
  local_130 = 0x1c;
  FUN_1446e940c(local_13c,&local_138);
  FUN_140208bae(&local_138,local_13c,&local_c8,L"Add Capsule Collision Primitive");
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&local_138);
  if (local_138 != (undefined **)0x0) {
    (**(code **)(*local_138 + 0x10))();
  }
  plVar6 = (longlong *)FUN_14479d2ce(lVar9);
  lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  lVar7 = *(longlong *)(param_1 + 0x80);
  plVar6 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14af11af0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x81) = 0;
  FUN_14058b698(plVar6 + 2,lVar7 + 0x80);
  local_148 = FUN_14001cc68(0x30,0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x558);
  local_130 = SUB84(plVar6,0);
  uStack_12c = (undefined4)((ulonglong)plVar6 >> 0x20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_c8 = local_178;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_178 = plVar5;
  local_138 = (undefined **)(plVar6 + 2);
  local_c0 = plVar5;
  FUN_1484f0bd0(local_148,&local_c8,&local_138,uVar13);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))
            ((longlong *)(lVar10 + 0x28),param_1,&local_148,&DAT_14cb4cc20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x40);
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2b0))
            (*(longlong **)(param_1 + 0x3c8),&local_138);
  local_168 = lVar9;
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar7 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_180 = lVar7 + 0x28;
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  local_16c = *(undefined4 *)(param_1 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,&local_b8);
  *(undefined1 *)(puVar8 + 0xb) = 0;
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0xc;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0x18;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = local_16c;
  local_150 = puVar8;
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(local_180,param_1,&local_150,&DAT_14cb4cc00);
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_180 = lVar9 + 0x28;
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,local_160);
  *(undefined1 *)(puVar8 + 0xb) = 1;
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  pppuVar11 = &local_138;
  puVar12 = puVar8 + 0x18;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *pppuVar11;
    pppuVar11 = pppuVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = uVar13;
  local_158 = puVar8;
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x20))(local_180,param_1,&local_158,&DAT_14cb4cc10);
  FUN_1447f69b6(param_1 + 0x58);
  plVar5 = (longlong *)FUN_14479d2ce(local_168);
  lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
  FUN_1484eb09e(param_1,1);
  FUN_1484ea6be(param_1);
  FUN_1484ec3d2(param_1);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  plVar5 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_178 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ee86a FUN_1484ee86a body=4319 status=ok
// SIG undefined FUN_1484ee86a(void)

void FUN_1484ee86a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined ***pppuVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  longlong *local_2f0;
  undefined4 local_2e4;
  longlong local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2ac [4];
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  longlong *local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined ***local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  lVar16 = *(longlong *)(param_1 + 0x80);
  lVar3 = lVar16 + 0x80;
  plVar12 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14af11af0;
  plVar14 = plVar12 + 2;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  plVar12[0xd] = 0;
  plVar12[0xe] = 0;
  plVar12[0xf] = 0;
  *(undefined8 *)((longlong)plVar12 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar12 + 0x81) = 0;
  FUN_14058b698(plVar14,lVar3);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x48c)) {
    local_2f8 = (longlong *)(param_1 + 0x458);
    lVar20 = param_1 + 0x468;
    local_1a8 = (undefined **)0x100000000;
    uStack_198 = 0xffffffff;
    iStack_194 = 0;
    local_190 = 0;
    iVar17 = 0;
    local_2f0 = plVar14;
    local_2e0 = param_1;
    local_2d8 = plVar12;
    local_1e8 = lVar20;
    if (*(int *)(param_1 + 0x480) != 0) {
      local_1a0 = lVar20;
      FUN_1449c0562(&local_1a8);
      iVar17 = *(int *)(local_2e0 + 0x480);
      local_1e8 = local_1a0;
    }
    local_1e0 = CONCAT44(iStack_194,uStack_198);
    local_1d8 = CONCAT44(local_18c,local_190);
    uStack_1f0 = local_1a8;
    local_1f8 = local_2f8;
    local_1a0 = local_1e8;
    if ((iStack_194 != iVar17) || (local_1e8 != lVar20)) {
      iVar10 = iStack_194;
      do {
        lVar13 = FUN_140757faa(lVar3,*(undefined4 *)(*local_1f8 + (longlong)iVar10 * 0xc));
        uVar9 = uStack_260;
        uVar8 = uStack_270;
        uVar7 = uStack_280;
        switch(*(undefined4 *)(lVar13 + 0x14)) {
        case 0:
          local_1a0._0_4_ = *(undefined4 *)(lVar13 + 8);
          local_1a0._4_4_ = (undefined4)*(undefined8 *)(lVar13 + 0xc);
          uStack_198 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0xc) >> 0x20);
          iStack_194 = 0;
          local_190._0_2_ =
               CONCAT11(*(undefined1 *)(lVar13 + 0x19),
                        (byte)local_190 & 0xfe | *(byte *)(lVar13 + 0x18) & 1);
          local_188 = 6;
          local_1a8 = &PTR_FUN_14a418310;
          local_178 = *(undefined8 *)(lVar13 + 0x30);
          uStack_170 = *(undefined4 *)(lVar13 + 0x38);
          uStack_16c = *(undefined4 *)(lVar13 + 0x3c);
          local_168 = *(undefined4 *)(lVar13 + 0x40);
          uStack_164 = *(undefined4 *)(lVar13 + 0x44);
          uStack_160 = *(undefined4 *)(lVar13 + 0x48);
          lVar13 = (longlong)(int)uStack_260;
          uVar11 = (int)uStack_260 + 1;
          uStack_260 = CONCAT44(uStack_260._4_4_,uVar11);
          local_180 = &local_1a8;
          if (uStack_260._4_4_ < uVar11) {
            FUN_140e25fd0(&local_268,uVar9 & 0xffffffff);
          }
          lVar13 = lVar13 * 0x50;
          *(undefined ***)(local_268 + lVar13) = &PTR_FUN_14a1dee50;
          *(undefined4 *)(local_268 + 8 + lVar13) = (undefined4)local_1a0;
          *(ulonglong *)(local_268 + 0xc + lVar13) = CONCAT44(uStack_198,local_1a0._4_4_);
          *(int *)(local_268 + 0x14 + lVar13) = iStack_194;
          *(byte *)(local_268 + 0x18 + lVar13) =
               *(byte *)(local_268 + 0x18 + lVar13) & 0xfe | (byte)local_190 & 1;
          *(undefined1 *)(local_268 + 0x19 + lVar13) = local_190._1_1_;
          *(undefined4 *)(local_268 + 0x20 + lVar13) = 6;
          *(longlong *)(local_268 + 0x28 + lVar13) = local_268 + lVar13;
          *(undefined ***)(local_268 + lVar13) = &PTR_FUN_14a418310;
          puVar5 = (undefined4 *)(local_268 + 0x30 + lVar13);
          *puVar5 = (undefined4)local_178;
          puVar5[1] = local_178._4_4_;
          puVar5[2] = uStack_170;
          puVar5[3] = uStack_16c;
          puVar19 = (undefined8 *)(local_268 + 0x3c + lVar13);
          *puVar19 = CONCAT44(local_168,uStack_16c);
          puVar19[1] = CONCAT44(uStack_160,uStack_164);
          break;
        case 1:
          local_1a0._0_4_ = *(undefined4 *)(lVar13 + 8);
          local_1a0._4_4_ = (undefined4)*(undefined8 *)(lVar13 + 0xc);
          uStack_198 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0xc) >> 0x20);
          iStack_194 = 1;
          local_190._0_2_ =
               CONCAT11(*(undefined1 *)(lVar13 + 0x19),
                        (byte)local_190 & 0xfe | *(byte *)(lVar13 + 0x18) & 1);
          local_188 = 6;
          local_1a8 = &PTR_FUN_14a1e3c70;
          local_178 = *(undefined8 *)(lVar13 + 0x30);
          uStack_170 = *(undefined4 *)(lVar13 + 0x38);
          uStack_16c = *(undefined4 *)(lVar13 + 0x3c);
          local_168 = *(undefined4 *)(lVar13 + 0x40);
          uStack_164 = *(undefined4 *)(lVar13 + 0x44);
          uStack_160 = *(undefined4 *)(lVar13 + 0x48);
          uStack_15c = *(undefined4 *)(lVar13 + 0x4c);
          local_158 = *(undefined8 *)(lVar13 + 0x50);
          uStack_150 = *(undefined4 *)(lVar13 + 0x58);
          uStack_14c = *(undefined4 *)(lVar13 + 0x5c);
          local_148 = *(undefined4 *)(lVar13 + 0x60);
          uStack_144 = *(undefined4 *)(lVar13 + 100);
          uStack_140 = *(undefined4 *)(lVar13 + 0x68);
          lVar13 = (longlong)(int)uStack_270;
          uVar11 = (int)uStack_270 + 1;
          uStack_270 = CONCAT44(uStack_270._4_4_,uVar11);
          local_180 = &local_1a8;
          if (uStack_270._4_4_ < uVar11) {
            FUN_140c9d5a2(&local_278,uVar8 & 0xffffffff);
          }
          lVar13 = lVar13 * 0x70;
          *(undefined ***)(local_278 + lVar13) = &PTR_FUN_14a1dee50;
          *(undefined4 *)(local_278 + 8 + lVar13) = (undefined4)local_1a0;
          *(ulonglong *)(local_278 + 0xc + lVar13) = CONCAT44(uStack_198,local_1a0._4_4_);
          *(int *)(local_278 + 0x14 + lVar13) = iStack_194;
          *(byte *)(local_278 + 0x18 + lVar13) =
               *(byte *)(local_278 + 0x18 + lVar13) & 0xfe | (byte)local_190 & 1;
          *(undefined1 *)(local_278 + 0x19 + lVar13) = local_190._1_1_;
          *(undefined4 *)(local_278 + 0x20 + lVar13) = 6;
          *(longlong *)(local_278 + 0x28 + lVar13) = local_278 + lVar13;
          *(undefined ***)(local_278 + lVar13) = &PTR_FUN_14a1e3c70;
          puVar5 = (undefined4 *)(local_278 + 0x30 + lVar13);
          *puVar5 = (undefined4)local_178;
          puVar5[1] = local_178._4_4_;
          puVar5[2] = uStack_170;
          puVar5[3] = uStack_16c;
          puVar19 = (undefined8 *)(local_278 + 0x40 + lVar13);
          *puVar19 = CONCAT44(uStack_164,local_168);
          puVar19[1] = CONCAT44(uStack_15c,uStack_160);
          puVar19 = (undefined8 *)(local_278 + 0x50 + lVar13);
          *puVar19 = local_158;
          puVar19[1] = CONCAT44(uStack_14c,uStack_150);
          puVar19 = (undefined8 *)(local_278 + 0x5c + lVar13);
          *puVar19 = CONCAT44(local_148,uStack_14c);
          puVar19[1] = CONCAT44(uStack_140,uStack_144);
          break;
        case 2:
          local_1a0._0_4_ = *(undefined4 *)(lVar13 + 8);
          local_1a0._4_4_ = (undefined4)*(undefined8 *)(lVar13 + 0xc);
          uStack_198 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0xc) >> 0x20);
          iStack_194 = 2;
          local_190._0_2_ =
               CONCAT11(*(undefined1 *)(lVar13 + 0x19),
                        (byte)local_190 & 0xfe | *(byte *)(lVar13 + 0x18) & 1);
          local_188 = 6;
          local_1a8 = &PTR_FUN_14a1dee70;
          local_148 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
          uStack_144 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
          local_178 = *(undefined8 *)(lVar13 + 0x30);
          uStack_170 = *(undefined4 *)(lVar13 + 0x38);
          uStack_16c = *(undefined4 *)(lVar13 + 0x3c);
          local_168 = *(undefined4 *)(lVar13 + 0x40);
          uStack_164 = *(undefined4 *)(lVar13 + 0x44);
          uStack_160 = *(undefined4 *)(lVar13 + 0x48);
          uStack_15c = *(undefined4 *)(lVar13 + 0x4c);
          local_158 = *(undefined8 *)(lVar13 + 0x50);
          uStack_150 = *(undefined4 *)(lVar13 + 0x58);
          uStack_14c = *(undefined4 *)(lVar13 + 0x5c);
          lVar13 = (longlong)(int)uStack_280;
          uVar11 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar11);
          local_180 = &local_1a8;
          if (uStack_280._4_4_ < uVar11) {
            FUN_1407e1e9e(&local_288,uVar7 & 0xffffffff);
          }
          lVar13 = lVar13 * 0x68;
          *(undefined ***)(local_288 + lVar13) = &PTR_FUN_14a1dee50;
          *(undefined4 *)(local_288 + 8 + lVar13) = (undefined4)local_1a0;
          *(ulonglong *)(local_288 + 0xc + lVar13) = CONCAT44(uStack_198,local_1a0._4_4_);
          *(int *)(local_288 + 0x14 + lVar13) = iStack_194;
          *(byte *)(local_288 + 0x18 + lVar13) =
               *(byte *)(local_288 + 0x18 + lVar13) & 0xfe | (byte)local_190 & 1;
          *(undefined1 *)(local_288 + 0x19 + lVar13) = local_190._1_1_;
          *(undefined4 *)(local_288 + 0x20 + lVar13) = 6;
          *(longlong *)(local_288 + 0x28 + lVar13) = local_288 + lVar13;
          *(undefined ***)(local_288 + lVar13) = &PTR_FUN_14a1dee70;
          puVar5 = (undefined4 *)(local_288 + 0x30 + lVar13);
          *puVar5 = (undefined4)local_178;
          puVar5[1] = local_178._4_4_;
          puVar5[2] = uStack_170;
          puVar5[3] = uStack_16c;
          puVar19 = (undefined8 *)(local_288 + 0x40 + lVar13);
          *puVar19 = CONCAT44(uStack_164,local_168);
          puVar19[1] = CONCAT44(uStack_15c,uStack_160);
          puVar19 = (undefined8 *)(local_288 + 0x50 + lVar13);
          *puVar19 = local_158;
          puVar19[1] = CONCAT44(uStack_14c,uStack_150);
          *(ulonglong *)(local_288 + 0x60 + lVar13) = CONCAT44(uStack_144,local_148);
          break;
        case 3:
          FUN_147c4992e(&local_1a8,lVar13);
          uVar7 = uStack_290;
          lVar13 = (longlong)(int)uStack_290;
          uVar11 = (int)uStack_290 + 1;
          uStack_290 = CONCAT44(uStack_290._4_4_,uVar11);
          if (uStack_290._4_4_ < uVar11) {
            FUN_1474ba6a4(&local_298,uVar7 & 0xffffffff);
          }
          FUN_147c4992e(lVar13 * 0x100 + local_298,&local_1a8);
          FUN_1400d7e72(&local_1a8);
          break;
        case 5:
          local_1a0._0_4_ = 0;
          local_1a0._4_4_ = 0;
          uStack_198 = 0;
          iStack_194 = 7;
          local_190._0_1_ = (byte)local_190 | 1;
          local_190._0_2_ = CONCAT11(3,(byte)local_190);
          local_188 = 6;
          local_1a8 = &PTR_FUN_14a418060;
          local_178 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          local_168 = 0;
          uStack_164 = 0;
          uStack_160 = 0;
          uStack_15c = 0x3ff00000;
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_158 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_138 = 0x3ff0000000000000;
          uStack_130 = 0x3ff0000000000000;
          local_128 = 0x3ff0000000000000;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_180 = &local_1a8;
          FUN_147c4cfbe(&local_1a8,lVar13);
          uVar7 = uStack_2a0;
          lVar13 = (longlong)(int)uStack_2a0;
          uVar11 = (int)uStack_2a0 + 1;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar11);
          if (uStack_2a0._4_4_ < uVar11) {
            FUN_147c63fee(&local_2a8,uVar7 & 0xffffffff);
          }
          lVar13 = lVar13 * 0xa0;
          puVar19 = (undefined8 *)(local_2a8 + 8 + lVar13);
          *puVar19 = 0;
          puVar19[1] = 0x700000000;
          pbVar4 = (byte *)(local_2a8 + 0x18 + lVar13);
          *pbVar4 = *pbVar4 | 1;
          *(undefined1 *)(local_2a8 + 0x19 + lVar13) = 3;
          *(undefined4 *)(local_2a8 + 0x20 + lVar13) = 6;
          *(longlong *)(local_2a8 + 0x28 + lVar13) = local_2a8 + lVar13;
          *(undefined ***)(local_2a8 + lVar13) = &PTR_FUN_14a418060;
          puVar19 = (undefined8 *)(local_2a8 + 0x30 + lVar13);
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar5 = (undefined4 *)(local_2a8 + 0x40 + lVar13);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0x3ff00000;
          puVar19 = (undefined8 *)(local_2a8 + 0x50 + lVar13);
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19 = (undefined8 *)(local_2a8 + 0x60 + lVar13);
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19 = (undefined8 *)(local_2a8 + 0x70 + lVar13);
          *puVar19 = 0x3ff0000000000000;
          puVar19[1] = 0x3ff0000000000000;
          puVar19 = (undefined8 *)(local_2a8 + 0x80 + lVar13);
          *puVar19 = 0x3ff0000000000000;
          puVar19[1] = 0;
          puVar19 = (undefined8 *)(local_2a8 + 0x90 + lVar13);
          *puVar19 = 0;
          puVar19[1] = 0;
          FUN_147c4cfbe(local_2a8 + lVar13,&local_1a8);
          FUN_1474b86e2(&local_1a8);
        }
        local_1e0 = CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~uStack_1f0._4_4_);
        FUN_1449c0562(&uStack_1f0);
        iVar10 = local_1e0._4_4_;
      } while (local_1f8 != local_2f8 || (local_1e8 != lVar20 || local_1e0._4_4_ != iVar17));
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (longlong *)0x0;
    uStack_1f0 = (undefined **)0x0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_228 = 0;
    local_220 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_21c = 0xffffffff00000080;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_145c3f772(&local_248,local_2f8);
    local_1a8._0_4_ = *(int *)(lVar16 + 0x88);
    if (0 < (int)uStack_260) {
      do {
        FUN_1447cbafe(&local_1f8,&local_258,&local_1a8,0);
        local_1a8._0_4_ = (int)local_1a8 + 1;
      } while ((int)local_1a8 < (int)uStack_260 + *(int *)(lVar16 + 0x88));
    }
    FUN_1407e1d32(lVar3,&local_268);
    lVar3 = local_2e0;
    plVar14 = local_2f0;
    iVar17 = *(int *)(lVar16 + 0x88);
    local_1a8._0_4_ = *(int *)(lVar16 + 0x98) + iVar17;
    if ((int)local_1a8 < (int)uStack_270 + (int)local_1a8) {
      do {
        FUN_1447cbafe(&local_1f8,&local_258,&local_1a8,0);
        local_1a8._0_4_ = (int)local_1a8 + 1;
      } while ((int)local_1a8 < *(int *)(lVar16 + 0x98) + iVar17 + (int)uStack_270);
    }
    FUN_1407e1c1c(lVar16 + 0x90,&local_278);
    iVar17 = iVar17 + *(int *)(lVar16 + 0x98);
    local_1a8._0_4_ = *(int *)(lVar16 + 0xa8) + iVar17;
    if ((int)local_1a8 < (int)uStack_280 + (int)local_1a8) {
      do {
        FUN_1447cbafe(&local_1f8,&local_258,&local_1a8,0);
        local_1a8._0_4_ = (int)local_1a8 + 1;
      } while ((int)local_1a8 < *(int *)(lVar16 + 0xa8) + iVar17 + (int)uStack_280);
    }
    FUN_1407e1c78(lVar16 + 0xa0,&local_288);
    iVar17 = iVar17 + *(int *)(lVar16 + 0xa8);
    local_1a8._0_4_ = *(int *)(lVar16 + 0xb8) + iVar17;
    if ((int)local_1a8 < (int)uStack_290 + (int)local_1a8) {
      do {
        FUN_1447cbafe(&local_1f8,&local_258,&local_1a8,0);
        local_1a8._0_4_ = (int)local_1a8 + 1;
      } while ((int)local_1a8 < *(int *)(lVar16 + 0xb8) + iVar17 + (int)uStack_290);
    }
    FUN_1407e1cd4(lVar16 + 0xb0,&local_298);
    iVar17 = iVar17 + *(int *)(lVar16 + 0xb8);
    local_1a8._0_4_ = *(int *)(lVar16 + 0xd8) + iVar17;
    if ((int)local_1a8 < (int)uStack_2a0 + (int)local_1a8) {
      do {
        FUN_1447cbafe(&local_1f8,&local_258,&local_1a8,0);
        local_1a8._0_4_ = (int)local_1a8 + 1;
      } while ((int)local_1a8 < *(int *)(lVar16 + 0xd8) + iVar17 + (int)uStack_2a0);
    }
    FUN_1407e1d92(lVar16 + 0xd0,&local_2a8);
    lVar16 = lVar3 + 0x28;
    plVar12 = (longlong *)FUN_14479d2ce(lVar16);
    lVar20 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
    local_1a8 = (undefined **)0x14af0798c;
    local_1a0._0_4_ = 0x16;
    FUN_1446e940c(&local_258,&local_1a8);
    local_1a8 = (undefined **)0x14af06d98;
    local_1a0._0_4_ = 0x1c;
    FUN_1446e940c(local_2ac,&local_1a8);
    FUN_140208bae(&local_1a8,local_2ac,&local_258,L"Duplicate Selected Collision Primitives");
    (**(code **)(*(longlong *)(lVar20 + 0x28) + 0x10))(lVar20 + 0x28,&local_1a8);
    if (local_1a8 != (undefined **)0x0) {
      (**(code **)(*local_1a8 + 0x10))();
    }
    plVar12 = (longlong *)FUN_14479d2ce(lVar16);
    lVar13 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
    lVar20 = *(longlong *)(lVar3 + 0x80);
    plVar12 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af11af0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    plVar12[0xe] = 0;
    plVar12[0xf] = 0;
    *(undefined8 *)((longlong)plVar12 + 0x79) = 0;
    *(undefined8 *)((longlong)plVar12 + 0x81) = 0;
    FUN_14058b698(plVar12 + 2,lVar20 + 0x80);
    local_2b8 = FUN_14001cc68(0x30,0x10);
    uVar6 = *(undefined4 *)(lVar3 + 0x558);
    local_1a0._0_4_ = SUB84(plVar12,0);
    local_1a0._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_258 = plVar14;
    local_250 = local_2d8;
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2d8 + 1) = (int)local_2d8[1] + 1;
      UNLOCK();
    }
    local_1a8 = (undefined **)(plVar12 + 2);
    FUN_1484f0bd0(local_2b8,&local_258,&local_1a8,uVar6);
    (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x20))
              ((longlong *)(lVar13 + 0x28),lVar3,&local_2b8,&DAT_14cb4cc20);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_1447f69b6(lVar3 + 0x40);
    FUN_145c3f772(local_2f8,&local_1f8);
    (**(code **)(**(longlong **)(lVar3 + 0x3c8) + 0x2b0))(*(longlong **)(lVar3 + 0x3c8),&local_1a8);
    plVar14 = (longlong *)FUN_14479d2ce(lVar16);
    lVar20 = (**(code **)(*plVar14 + 0x2c8))(plVar14);
    local_2f0 = (longlong *)(lVar20 + 0x28);
    puVar15 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    local_2e4 = *(undefined4 *)(lVar3 + 0x558);
    *puVar15 = &PTR_LAB_14af07a90;
    puVar15[5] = 0;
    *(undefined4 *)(puVar15 + 6) = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *(undefined8 *)((longlong)puVar15 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = 0;
    puVar15[9] = 0;
    *(undefined4 *)(puVar15 + 10) = 0;
    FUN_145c3f772(puVar15 + 1,&local_248);
    *(undefined1 *)(puVar15 + 0xb) = 0;
    pppuVar18 = &local_1a8;
    puVar19 = puVar15 + 0xc;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar19 = *pppuVar18;
      pppuVar18 = pppuVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    pppuVar18 = &local_1a8;
    puVar19 = puVar15 + 0x18;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar19 = *pppuVar18;
      pppuVar18 = pppuVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    *(undefined4 *)(puVar15 + 0x24) = local_2e4;
    local_2d0 = lVar16;
    local_2c0 = puVar15;
    (**(code **)(*(longlong *)(lVar20 + 0x28) + 0x20))(local_2f0,lVar3,&local_2c0,&DAT_14cb4cc00);
    plVar14 = (longlong *)FUN_14479d2ce(lVar16);
    lVar16 = (**(code **)(*plVar14 + 0x2c8))(plVar14);
    local_2f0 = (longlong *)(lVar16 + 0x28);
    puVar15 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    uVar6 = *(undefined4 *)(lVar3 + 0x558);
    *puVar15 = &PTR_LAB_14af07a90;
    puVar15[5] = 0;
    *(undefined4 *)(puVar15 + 6) = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *(undefined8 *)((longlong)puVar15 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = 0;
    puVar15[9] = 0;
    *(undefined4 *)(puVar15 + 10) = 0;
    FUN_145c3f772(puVar15 + 1,local_2f8);
    *(undefined1 *)(puVar15 + 0xb) = 1;
    pppuVar18 = &local_1a8;
    puVar19 = puVar15 + 0xc;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar19 = *pppuVar18;
      pppuVar18 = pppuVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    pppuVar18 = &local_1a8;
    puVar19 = puVar15 + 0x18;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar19 = *pppuVar18;
      pppuVar18 = pppuVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    *(undefined4 *)(puVar15 + 0x24) = uVar6;
    local_2c8 = puVar15;
    (**(code **)(*(longlong *)(lVar16 + 0x28) + 0x20))(local_2f0,lVar3,&local_2c8,&DAT_14cb4cc10);
    FUN_1447f69b6(lVar3 + 0x58);
    plVar14 = (longlong *)FUN_14479d2ce(local_2d0);
    lVar16 = (**(code **)(*plVar14 + 0x2c8))(plVar14);
    (**(code **)(*(longlong *)(lVar16 + 0x28) + 0x18))(lVar16 + 0x28);
    FUN_1484eb09e(lVar3,1);
    FUN_1484ea6be(lVar3);
    FUN_1484ec3d2(lVar3);
    local_200 = 0;
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_248);
    plVar12 = local_2d8;
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_1f8);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_1400d7e46(local_2a8,uStack_2a0 & 0xffffffff);
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7e1b(local_298,uStack_290 & 0xffffffff);
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df0(local_288,uStack_280 & 0xffffffff);
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df1(local_278,uStack_270 & 0xffffffff);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df2(local_268,uStack_260 & 0xffffffff);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ef94a FUN_1484ef94a body=1814 status=ok
// SIG undefined FUN_1484ef94a(void)

void FUN_1484ef94a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  wchar_t **ppwVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  wchar_t *local_148;
  undefined4 local_140;
  longlong local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar10 = *(longlong *)(param_1 + 0x80);
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af11af0;
  local_188 = plVar5 + 2;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x81) = 0;
  FUN_14058b698(local_188,lVar10 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_190 = param_1 + 0x458;
  local_1a0 = param_1;
  local_180 = plVar5;
  FUN_140619b9c(local_190,&local_e8);
  FUN_144958a06(local_e8,local_e0);
  lVar7 = local_e8;
  if ((longlong)local_e0 != 0) {
    local_178 = lVar10 + 0xe0;
    local_170 = lVar10 + 0xd0;
    local_168 = lVar10 + 0xc0;
    local_198 = lVar10 + 0xb0;
    lVar6 = 0;
    iVar15 = 0;
    do {
      iVar3 = iVar15 + *(int *)(lVar7 + lVar6);
      if (iVar3 < *(int *)(lVar10 + 0x88)) {
        FUN_1484f0062(lVar10 + 0x80,iVar3,1);
      }
      else {
        iVar12 = *(int *)(lVar7 + lVar6) - *(int *)(lVar10 + 0x88);
        iVar3 = iVar15 + iVar12;
        if (iVar3 < *(int *)(lVar10 + 0x98)) {
          FUN_1484f00c4(lVar10 + 0x90,iVar3,1);
        }
        else {
          iVar12 = iVar12 - *(int *)(lVar10 + 0x98);
          iVar3 = iVar15 + iVar12;
          if (iVar3 < *(int *)(lVar10 + 0xa8)) {
            FUN_140931d2e(lVar10 + 0xa0,iVar3,1);
          }
          else {
            iVar12 = iVar12 - *(int *)(lVar10 + 0xa8);
            iVar3 = iVar15 + iVar12;
            if (iVar3 < *(int *)(lVar10 + 0xb8)) {
              FUN_1484f0122(local_198,iVar3,1);
            }
            else {
              iVar12 = iVar12 - *(int *)(lVar10 + 0xb8);
              iVar3 = iVar15 + iVar12;
              if (iVar3 < *(int *)(lVar10 + 200)) {
                FUN_1484f0190(local_168,iVar3);
              }
              else {
                iVar12 = iVar12 - *(int *)(lVar10 + 200);
                iVar3 = iVar15 + iVar12;
                if (iVar3 < *(int *)(lVar10 + 0xd8)) {
                  FUN_1484f01dc(local_170,iVar3);
                }
                else if ((iVar12 - *(int *)(lVar10 + 0xd8)) + iVar15 < *(int *)(lVar10 + 0xe8)) {
                  FUN_1484f0236(local_178);
                }
              }
            }
          }
        }
      }
      iVar15 = iVar15 + -1;
      lVar6 = lVar6 + 4;
    } while ((longlong)local_e0 * 4 != lVar6);
  }
  lVar7 = local_1a0;
  lVar10 = local_1a0 + 0x28;
  plVar5 = (longlong *)FUN_14479d2ce(lVar10);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_148 = L"DeleteSelectionUndo";
  local_140 = 0x13;
  FUN_1446e940c(&local_b8,&local_148);
  local_148 = L"UCollisionPrimitivesMechanic";
  local_140 = 0x1c;
  FUN_1446e940c(&local_c8,&local_148);
  FUN_140208bae(&local_148,&local_c8,&local_b8,L"Delete Selected Collision Primitives");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_148);
  if (local_148 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_148 + 0x10))();
  }
  lVar6 = local_190;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145c3f772(&local_b8,local_190);
  FUN_14068ded2(lVar6,0);
  (**(code **)(**(longlong **)(lVar7 + 0x3c8) + 0x2b0))(*(longlong **)(lVar7 + 0x3c8),&local_148);
  plVar5 = (longlong *)FUN_14479d2ce(lVar10);
  lVar7 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_198 = lVar10;
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar4 = *(undefined4 *)(local_1a0 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,&local_b8);
  *(undefined1 *)(puVar8 + 0xb) = 0;
  ppwVar13 = &local_148;
  puVar14 = puVar8 + 0xc;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *ppwVar13;
    ppwVar13 = ppwVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  ppwVar13 = &local_148;
  puVar14 = puVar8 + 0x18;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *ppwVar13;
    ppwVar13 = ppwVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = uVar4;
  local_150 = puVar8;
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))
            (lVar7 + 0x28,local_1a0,&local_150,&DAT_14cb4cc00);
  plVar5 = (longlong *)FUN_14479d2ce(local_198);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  uVar4 = *(undefined4 *)(local_1a0 + 0x558);
  *puVar8 = &PTR_LAB_14af07a90;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  FUN_145c3f772(puVar8 + 1,local_190);
  lVar7 = local_198;
  lVar10 = local_1a0;
  *(undefined1 *)(puVar8 + 0xb) = 1;
  ppwVar13 = &local_148;
  puVar14 = puVar8 + 0xc;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *ppwVar13;
    ppwVar13 = ppwVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  ppwVar13 = &local_148;
  puVar14 = puVar8 + 0x18;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *ppwVar13;
    ppwVar13 = ppwVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(puVar8 + 0x24) = uVar4;
  local_158 = puVar8;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))
            (lVar6 + 0x28,local_1a0,&local_158,&DAT_14cb4cc10);
  FUN_1447f69b6(lVar10 + 0x58);
  plVar5 = (longlong *)FUN_14479d2ce(lVar7);
  lVar11 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  lVar6 = *(longlong *)(lVar10 + 0x80);
  plVar9 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14af11af0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x81) = 0;
  FUN_14058b698(plVar9 + 2,lVar6 + 0x80);
  local_160 = FUN_14001cc68(0x30,0x10);
  plVar5 = local_180;
  uVar4 = *(undefined4 *)(lVar10 + 0x558);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_d8 = local_188;
  local_d0 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  local_c8 = plVar9 + 2;
  local_c0 = plVar9;
  FUN_1484f0bd0(local_160,&local_d8,&local_c8,uVar4);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x20))
            ((longlong *)(lVar11 + 0x28),lVar10,&local_160,&DAT_14cb4cc20);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1447f69b6(lVar10 + 0x40);
  plVar9 = (longlong *)FUN_14479d2ce(lVar7);
  lVar7 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  FUN_1484eb09e(lVar10,1);
  FUN_1484ea6be(lVar10);
  FUN_1484ec3d2(lVar10);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484f0062 FUN_1484f0062 body=97 status=ok
// SIG undefined FUN_1484f0062(void)

void FUN_1484f0062(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 0x50),
            (void *)((longlong)(int)param_2 * 0x50 + *param_1 + 0x50),
            (longlong)(int)(~param_2 + iVar1) * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_14851664c(param_1);
  return;
}



// FUNCTION 1484f00c4 FUN_1484f00c4 body=93 status=ok
// SIG undefined FUN_1484f00c4(void)

void FUN_1484f00c4(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 0x70),
            (void *)((longlong)(int)param_2 * 0x70 + *param_1 + 0x70),
            (longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_148516702(param_1);
  return;
}



// FUNCTION 1484f0122 FUN_1484f0122 body=109 status=ok
// SIG undefined FUN_1484f0122(void)

void FUN_1484f0122(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x100 + *param_1);
  FUN_1400d7e72(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x100),(longlong)(int)(~param_2 + iVar1) << 8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_1485167b0(param_1);
  return;
}



// FUNCTION 1484f0190 FUN_1484f0190 body=76 status=ok
// SIG undefined FUN_1484f0190(void)

void FUN_1484f0190(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 0x70),
            (void *)((longlong)(int)param_2 * 0x70 + *param_1 + 0x70),
            (longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148516852(param_1);
  return;
}



// FUNCTION 1484f01dc FUN_1484f01dc body=90 status=ok
// SIG undefined FUN_1484f01dc(void)

void FUN_1484f01dc(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xa0 + *param_1);
  FUN_1474b86e2(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa0),(longlong)(int)(~param_2 + iVar1) * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1485168f8(param_1);
  return;
}



// FUNCTION 1484f0236 FUN_1484f0236 body=79 status=ok
// SIG undefined FUN_1484f0236(void)

void FUN_1484f0236(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x38 + *param_1);
  FUN_1474b868e(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar1) * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1485169a6(param_1);
  return;
}



// FUNCTION 1484f0286 FUN_1484f0286 body=1404 status=ok
// SIG undefined FUN_1484f0286(void)

void FUN_1484f0286(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t **ppwVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [36];
  undefined4 local_174;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  wchar_t *local_138;
  undefined4 local_130;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar9 = *(longlong *)(param_1 + 0x80) + 0x80;
  plVar4 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14af11af0;
  local_158 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x81) = 0;
  FUN_14058b698(local_158,lVar9);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_147a2cbea(lVar9);
  lVar9 = param_1 + 0x28;
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_138 = L"DeleteAllUndo";
  local_130 = 0xd;
  FUN_1446e940c(&local_b8,&local_138);
  local_138 = L"UCollisionPrimitivesMechanic";
  local_130 = 0x1c;
  FUN_1446e940c(&local_c8,&local_138);
  FUN_140208bae(&local_138,&local_c8,&local_b8,L"Delete All Collision Primitives");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_138);
  if (local_138 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_138 + 0x10))();
  }
  lVar6 = param_1 + 0x458;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_160 = lVar6;
  FUN_145c3f772(&local_b8,lVar6);
  FUN_14068ded2(lVar6,0);
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2b0))
            (*(longlong **)(param_1 + 0x3c8),&local_138);
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_170 = lVar6 + 0x28;
  local_168 = lVar9;
  puVar7 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  local_174 = *(undefined4 *)(param_1 + 0x558);
  *puVar7 = &PTR_LAB_14af07a90;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  puVar7[9] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  FUN_145c3f772(puVar7 + 1,&local_b8);
  *(undefined1 *)(puVar7 + 0xb) = 0;
  ppwVar10 = &local_138;
  puVar11 = puVar7 + 0xc;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *ppwVar10;
    ppwVar10 = ppwVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  ppwVar10 = &local_138;
  puVar11 = puVar7 + 0x18;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *ppwVar10;
    ppwVar10 = ppwVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(puVar7 + 0x24) = local_174;
  local_140 = puVar7;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(local_170,param_1,&local_140,&DAT_14cb4cc00);
  plVar5 = (longlong *)FUN_14479d2ce(local_168);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_170 = lVar6 + 0x28;
  puVar7 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  local_174 = *(undefined4 *)(param_1 + 0x558);
  *puVar7 = &PTR_LAB_14af07a90;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  puVar7[9] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  FUN_145c3f772(puVar7 + 1,local_160);
  lVar9 = local_168;
  *(undefined1 *)(puVar7 + 0xb) = 1;
  ppwVar10 = &local_138;
  puVar11 = puVar7 + 0xc;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *ppwVar10;
    ppwVar10 = ppwVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  ppwVar10 = &local_138;
  puVar11 = puVar7 + 0x18;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *ppwVar10;
    ppwVar10 = ppwVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(puVar7 + 0x24) = local_174;
  local_148 = puVar7;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(local_170,param_1,&local_148,&DAT_14cb4cc10);
  FUN_1447f69b6(param_1 + 0x58);
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar8 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  lVar6 = *(longlong *)(param_1 + 0x80);
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af11af0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x79) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x81) = 0;
  FUN_14058b698(plVar5 + 2,lVar6 + 0x80);
  local_150 = FUN_14001cc68(0x30,0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x558);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_d8 = local_158;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_d0 = plVar4;
  local_c8 = plVar5 + 2;
  local_c0 = plVar5;
  FUN_1484f0bd0(local_150,&local_d8,&local_c8,uVar3);
  (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
            ((longlong *)(lVar8 + 0x28),param_1,&local_150,&DAT_14cb4cc20);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x40);
  plVar5 = (longlong *)FUN_14479d2ce(lVar9);
  lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
  FUN_1484eb09e(param_1,1);
  FUN_1484ea6be(param_1);
  FUN_1484ec3d2(param_1);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f0804 FUN_1484f0804 body=79 status=ok
// SIG undefined FUN_1484f0804(void)

void FUN_1484f0804(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80) + 0x80;
  FUN_1401842de(lVar1);
  FUN_14058b698(lVar1,param_2);
  FUN_1484eb09e(param_1,1);
  FUN_1484ea6be(param_1);
  FUN_1484ec3d2(param_1);
  return;
}



// FUNCTION 1484f0854 FUN_1484f0854 body=428 status=ok
// SIG undefined FUN_1484f0854(void)

void FUN_1484f0854(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar3 = FUN_145b75096();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_1484f08a6;
  }
  param_2 = 0;
LAB_1484f08a6:
  plVar1 = (longlong *)(param_1 + 8);
  lVar3 = param_1 + 0x18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  iVar4 = 0;
  local_a0 = param_2;
  local_68 = lVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_70);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  local_98 = plVar1;
  if ((iStack_5c != iVar4) || (local_68 != lVar3)) {
    lVar2 = local_a0 + 0x458;
    do {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc));
        FUN_1447cbafe(lVar2,local_4c,&local_70,0);
      }
      else {
        FUN_144a7cc9e(lVar2);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (local_88 != lVar3 || iStack_7c != iVar4));
  }
  lVar3 = local_a0;
  FUN_1484ec238(local_a0);
  FUN_1447f69b6(lVar3 + 0x58);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f0a02 FUN_1484f0a02 body=428 status=ok
// SIG undefined FUN_1484f0a02(void)

void FUN_1484f0a02(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar3 = FUN_145b75096();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_1484f0a54;
  }
  param_2 = 0;
LAB_1484f0a54:
  plVar1 = (longlong *)(param_1 + 8);
  lVar3 = param_1 + 0x18;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  iVar4 = 0;
  local_a0 = param_2;
  local_68 = lVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_70);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  local_98 = plVar1;
  if ((iStack_5c != iVar4) || (local_68 != lVar3)) {
    lVar2 = local_a0 + 0x458;
    do {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        FUN_144a7cc9e(lVar2);
      }
      else {
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc));
        FUN_1447cbafe(lVar2,local_4c,&local_70,0);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (local_88 != lVar3 || iStack_7c != iVar4));
  }
  lVar3 = local_a0;
  FUN_1484ec238(local_a0);
  FUN_1447f69b6(lVar3 + 0x58);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f0bb0 FUN_1484f0bb0 body=32 status=ok
// SIG undefined FUN_1484f0bb0(void)

undefined8 FUN_1484f0bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCollisionPrimitivesMechanicSelectionChange");
  return param_2;
}



// FUNCTION 1484f0bd0 FUN_1484f0bd0 body=162 status=ok
// SIG undefined FUN_1484f0bd0(void)

undefined8 *
FUN_1484f0bd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14af07b30;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_3;
  lVar3 = param_3[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = param_4;
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
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 1484f0c72 FUN_1484f0c72 body=81 status=ok
// SIG undefined FUN_1484f0c72(void)

void FUN_1484f0c72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75096();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f0ca5;
  }
  param_2 = 0;
LAB_1484f0ca5:
  FUN_1484f0804(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_1447f69b6(param_2 + 0x40);
  return;
}



// FUNCTION 1484f0cc4 FUN_1484f0cc4 body=81 status=ok
// SIG undefined FUN_1484f0cc4(void)

void FUN_1484f0cc4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b75096();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f0cf7;
  }
  param_2 = 0;
LAB_1484f0cf7:
  FUN_1484f0804(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1447f69b6(param_2 + 0x40);
  return;
}



// FUNCTION 1484f0d16 FUN_1484f0d16 body=32 status=ok
// SIG undefined FUN_1484f0d16(void)

undefined8 FUN_1484f0d16(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCollisionPrimitivesMechanicGeometryChange");
  return param_2;
}



// FUNCTION 1484f0d40 FUN_1484f0d40 body=57 status=ok
// SIG undefined FUN_1484f0d40(void)

void FUN_1484f0d40(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_148444614();
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)FUN_148451354(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001484f0d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,*(code **)(*plVar1 + 0x2d8));
  return;
}



// FUNCTION 1484f0d7a FUN_1484f0d7a body=2217 status=ok
// SIG undefined FUN_1484f0d7a(void)

void FUN_1484f0d7a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
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
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined ***pppuVar22;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined ***local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined ***local_88;
  undefined8 uStack_80;
  undefined **local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_3 + 0xc);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x98) = param_3[8];
  *(undefined4 *)(param_1 + 0x9c) = uVar10;
  *(undefined4 *)(param_1 + 0xa0) = uVar11;
  *(undefined4 *)(param_1 + 0xa4) = uVar12;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x90) = uVar8;
  *(undefined4 *)(param_1 + 0x94) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  plVar16 = (longlong *)FUN_148444614();
  uVar17 = (**(code **)(*plVar16 + 0x2c8))(plVar16);
  uVar17 = FUN_148451354(uVar17);
  lVar18 = FUN_1484c6256(param_1);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  *(longlong *)(param_1 + 0xd0) = lVar18;
  local_98 = (undefined1 *)0x0;
  uStack_90 = 0;
  lVar18 = FUN_14843d06b(uVar17,0x3fe,param_1);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  *(longlong *)(param_1 + 200) = lVar18;
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1484f1624(*(longlong *)(param_1 + 0xd0) + 0x28,&local_98,param_1);
  plVar16 = *(longlong **)(param_1 + 200);
  plVar19 = (longlong *)FUN_148444614(param_1);
  lVar20 = (**(code **)(*plVar19 + 0x2c8))(plVar19);
  lVar18 = lVar20 + 0x28;
  if (lVar20 == 0) {
    lVar18 = 0;
  }
  (**(code **)(*plVar16 + 800))(plVar16,*(undefined8 *)(param_1 + 0xd0),lVar18);
  local_98 = *(undefined1 **)(param_1 + 0x90);
  uStack_90 = *(undefined8 *)(param_1 + 0x98);
  local_88 = *(undefined ****)(param_1 + 0xa0);
  uStack_80 = *(undefined8 *)(param_1 + 0xa8);
  local_78 = *(undefined ***)(param_1 + 0x78);
  puStack_70 = *(undefined1 **)(param_1 + 0x80);
  local_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_148415b4c(*(undefined8 *)(param_1 + 200),&local_98,1);
  puVar21 = (undefined8 *)FUN_14001cc68(0xd0);
  memset(puVar21 + 2,0,0xc0);
  *puVar21 = &PTR_FUN_14af11bc0;
  puVar21[0xe] = 0;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[0x14] = 0;
  puVar21[0x15] = 0;
  puVar21[0x16] = 0;
  puVar21[0x17] = 0;
  *(undefined1 *)(puVar21 + 0x18) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  *(undefined8 **)(param_1 + 0xd8) = puVar21;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar16 = (longlong *)FUN_148444614(param_1);
  uVar17 = (**(code **)(*plVar16 + 0x2c8))(plVar16);
  uVar17 = FUN_148452156(uVar17);
  *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8) = uVar17;
  lVar18 = *(longlong *)(param_1 + 0xd8);
  local_d8 = *(undefined1 **)(lVar18 + 0x20);
  uStack_90 = *(undefined8 *)(lVar18 + 0x28);
  local_c8 = *(undefined ****)(lVar18 + 0x30);
  uStack_80 = *(undefined8 *)(lVar18 + 0x38);
  local_78 = *(undefined ***)(lVar18 + 0x40);
  puStack_70 = *(undefined1 **)(lVar18 + 0x48);
  local_68 = *(undefined8 *)(lVar18 + 0x50);
  uStack_60 = *(undefined8 *)(lVar18 + 0x58);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0x50) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0x58) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0x40) = &PTR_LAB_14af11be0;
  *(longlong *)(lVar18 + 0x48) = param_1;
  *(undefined8 *)(lVar18 + 0x30) = 0;
  *(ulonglong *)(lVar18 + 0x38) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar18 + 0x20) = FUN_143b9575a;
  *(ulonglong *)(lVar18 + 0x28) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar22 = &local_b8;
    }
    uStack_90 = uVar17;
    uStack_80 = uVar13;
    local_68 = uVar14;
    uStack_60 = uVar15;
    (*(code *)(*pppuVar22)[2])();
  }
  lVar18 = *(longlong *)(param_1 + 0xd8);
  local_d8 = *(undefined1 **)(lVar18 + 0x60);
  uStack_90 = *(undefined8 *)(lVar18 + 0x68);
  local_c8 = *(undefined ****)(lVar18 + 0x70);
  uStack_80 = *(undefined8 *)(lVar18 + 0x78);
  local_78 = *(undefined ***)(lVar18 + 0x80);
  puStack_70 = *(undefined1 **)(lVar18 + 0x88);
  local_68 = *(undefined8 *)(lVar18 + 0x90);
  uStack_60 = *(undefined8 *)(lVar18 + 0x98);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0x90) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0x98) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0x80) = &PTR_LAB_14af11c00;
  *(longlong *)(lVar18 + 0x88) = param_1;
  *(undefined8 *)(lVar18 + 0x70) = 0;
  *(ulonglong *)(lVar18 + 0x78) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar18 + 0x60) = FUN_143b95814;
  *(ulonglong *)(lVar18 + 0x68) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar17;
  uStack_80 = uVar13;
  local_68 = uVar14;
  uStack_60 = uVar15;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar22 = &local_b8;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  uVar17 = FUN_1409ffe1d();
  lVar18 = FUN_14843c80f(uVar17);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  *(longlong *)(param_1 + 0xe0) = lVar18;
  local_d8 = *(undefined1 **)(lVar18 + 0x80);
  uStack_90 = *(undefined8 *)(lVar18 + 0x88);
  local_c8 = *(undefined ****)(lVar18 + 0x90);
  uStack_80 = *(undefined8 *)(lVar18 + 0x98);
  local_78 = *(undefined ***)(lVar18 + 0xa0);
  puStack_70 = *(undefined1 **)(lVar18 + 0xa8);
  local_68 = *(undefined8 *)(lVar18 + 0xb0);
  uStack_60 = *(undefined8 *)(lVar18 + 0xb8);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0xb0) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0xb8) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0xa0) = &PTR_LAB_14aedb970;
  *(undefined1 **)(lVar18 + 0xa8) = &LAB_148441f18;
  *(undefined8 *)(lVar18 + 0x90) = 0;
  *(ulonglong *)(lVar18 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined1 **)(lVar18 + 0x80) = &LAB_14844e6fa;
  *(ulonglong *)(lVar18 + 0x88) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar17;
  uStack_80 = uVar13;
  local_68 = uVar14;
  uStack_60 = uVar15;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar22 = &local_b8;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14aedb970;
  puStack_70 = &LAB_148441f14;
  local_98 = &LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0xe0) + 200,1,&local_98);
  if (local_98 != (undefined1 *)0x0) {
    pppuVar22 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar22 = &local_78;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x358))
            (*(longlong **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8));
  plVar16 = (longlong *)FUN_148444614(param_1);
  (**(code **)(*plVar16 + 0x2e8))(plVar16,*(undefined8 *)(param_1 + 0xe0),0);
  uVar17 = FUN_1409ffe1d();
  lVar18 = FUN_1484f1732(uVar17);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  *(longlong *)(param_1 + 0xe8) = lVar18;
  local_d8 = *(undefined1 **)(lVar18 + 0x140);
  uStack_90 = *(undefined8 *)(lVar18 + 0x148);
  local_c8 = *(undefined ****)(lVar18 + 0x150);
  uStack_80 = *(undefined8 *)(lVar18 + 0x158);
  local_78 = *(undefined ***)(lVar18 + 0x160);
  puStack_70 = *(undefined1 **)(lVar18 + 0x168);
  local_68 = *(undefined8 *)(lVar18 + 0x170);
  uStack_60 = *(undefined8 *)(lVar18 + 0x178);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0x170) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0x178) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0x160) = &PTR_LAB_14af11c20;
  *(longlong *)(lVar18 + 0x168) = param_1;
  *(undefined8 *)(lVar18 + 0x150) = 0;
  *(ulonglong *)(lVar18 + 0x158) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar18 + 0x140) = FUN_143b95878;
  *(ulonglong *)(lVar18 + 0x148) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar22 = &local_b8;
    }
    uStack_90 = uVar17;
    uStack_80 = uVar13;
    local_68 = uVar14;
    uStack_60 = uVar15;
    (*(code *)(*pppuVar22)[2])();
  }
  lVar18 = *(longlong *)(param_1 + 0xe8);
  local_d8 = *(undefined1 **)(lVar18 + 0x180);
  uStack_90 = *(undefined8 *)(lVar18 + 0x188);
  local_c8 = *(undefined ****)(lVar18 + 400);
  uStack_80 = *(undefined8 *)(lVar18 + 0x198);
  local_78 = *(undefined ***)(lVar18 + 0x1a0);
  puStack_70 = *(undefined1 **)(lVar18 + 0x1a8);
  local_68 = *(undefined8 *)(lVar18 + 0x1b0);
  uStack_60 = *(undefined8 *)(lVar18 + 0x1b8);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0x1b0) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0x1b8) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0x1a0) = &PTR_LAB_14af11c40;
  *(longlong *)(lVar18 + 0x1a8) = param_1;
  *(undefined8 *)(lVar18 + 400) = 0;
  *(ulonglong *)(lVar18 + 0x198) = CONCAT44(uStack_bc,uStack_c0);
  *(code **)(lVar18 + 0x180) = FUN_143b9593e;
  *(ulonglong *)(lVar18 + 0x188) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar22 = &local_b8;
    }
    uStack_90 = uVar17;
    uStack_80 = uVar13;
    local_68 = uVar14;
    uStack_60 = uVar15;
    (*(code *)(*pppuVar22)[2])();
  }
  lVar18 = *(longlong *)(param_1 + 0xe8);
  local_d8 = *(undefined1 **)(lVar18 + 0x80);
  uStack_90 = *(undefined8 *)(lVar18 + 0x88);
  local_c8 = *(undefined ****)(lVar18 + 0x90);
  uStack_80 = *(undefined8 *)(lVar18 + 0x98);
  local_78 = *(undefined ***)(lVar18 + 0xa0);
  puStack_70 = *(undefined1 **)(lVar18 + 0xa8);
  local_68 = *(undefined8 *)(lVar18 + 0xb0);
  uStack_60 = *(undefined8 *)(lVar18 + 0xb8);
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar17 = uStack_90;
  *(ulonglong *)(lVar18 + 0xb0) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(lVar18 + 0xb8) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined ***)(lVar18 + 0xa0) = &PTR_LAB_14aedb970;
  *(undefined1 **)(lVar18 + 0xa8) = &LAB_148441f18;
  *(undefined8 *)(lVar18 + 0x90) = 0;
  *(ulonglong *)(lVar18 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined1 **)(lVar18 + 0x80) = &LAB_14844e6fa;
  *(ulonglong *)(lVar18 + 0x88) = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = puStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar17;
  uStack_80 = uVar13;
  local_68 = uVar14;
  uStack_60 = uVar15;
  if (local_d8 != (undefined1 *)0x0) {
    pppuVar22 = &local_b8;
    if (local_c8 != (undefined ***)0x0) {
      pppuVar22 = local_c8;
    }
    (*(code *)(*pppuVar22)[2])(pppuVar22);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x340))();
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x368))();
  plVar16 = (longlong *)FUN_148444614(param_1);
  (**(code **)(*plVar16 + 0x2e8))(plVar16,*(undefined8 *)(param_1 + 0xe8),0);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1624 FUN_1484f1624 body=210 status=ok
// SIG undefined FUN_1484f1624(void)

undefined8 FUN_1484f1624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aeff220;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14af11b50;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = &LAB_1484f16f8;
  FUN_1484d65de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1732 FUN_1484f1732 body=148 status=ok
// SIG undefined FUN_1484f1732(void)

undefined8 FUN_1484f1732(undefined8 param_1)

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
  uVar1 = FUN_14595b96a();
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



// FUNCTION 1484f17c8 FUN_1484f17c8 body=76 status=ok
// SIG undefined FUN_1484f17c8(void)

void FUN_1484f17c8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  local_c = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1816 FUN_1484f1816 body=876 status=ok
// SIG undefined FUN_1484f1816(void)

void FUN_1484f1816(longlong param_1,undefined8 *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0x88) = param_2[2];
  uVar8 = *(undefined4 *)((longlong)param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 1);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  *(undefined4 *)(param_1 + 0x80) = uVar9;
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  if (param_4 == '\0') {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    if (9.999999747378752e-05 <=
        1.0 - (dVar3 * DAT_14c8463c8 + dVar1 * DAT_14c8463b8 + DAT_14c8463c0 * dVar2)) {
      dStack_d0 = dVar1 * DAT_14c8463c0 - DAT_14c8463b8 * dVar2;
      dVar5 = dVar3 * DAT_14c8463b8 - DAT_14c8463c8 * dVar1;
      dVar6 = dVar2 * DAT_14c8463c8 - DAT_14c8463c0 * dVar3;
      dVar7 = SQRT(dStack_d0 * dStack_d0 + dVar6 * dVar6 + dVar5 * dVar5);
      local_e8 = 0.0;
      dVar14 = 1.0 / dVar7;
      dStack_100 = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar6 * dVar14));
      if (0.0 < dVar7) {
        dStack_d0 = dStack_d0 * dVar14;
        local_e8 = dVar5 * dVar14;
      }
      else {
        dStack_d0 = 0.0;
      }
      local_d8 = dStack_100 * dVar2 - dVar1 * local_e8;
      dStack_f0 = dStack_d0 * dVar1 - dVar3 * dStack_100;
      local_108 = local_e8 * dVar3 - dVar2 * dStack_d0;
      local_98 = param_2[2];
      local_a8 = *param_2;
      uStack_a0 = param_2[1];
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0x3ff0000000000000;
      local_f8 = dVar1;
      dStack_e0 = dVar2;
      local_c8 = dVar3;
      FUN_146bfbbda(&local_88);
      *(undefined8 *)(param_1 + 0x88) = local_98;
      *(undefined4 *)(param_1 + 0x78) = (undefined4)local_a8;
      *(undefined4 *)(param_1 + 0x7c) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_a0;
      *(undefined4 *)(param_1 + 0x84) = uStack_a0._4_4_;
      *(undefined4 *)(param_1 + 0x90) = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0x94) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x9c) = uStack_80._4_4_;
      *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0xa4) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0xac) = uStack_70._4_4_;
    }
    else {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0x3ff0000000000000;
    }
  }
  plVar4 = *(longlong **)(param_1 + 200);
  plVar11 = (longlong *)FUN_148444614(param_1);
  lVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11);
  lVar13 = lVar12 + 0x28;
  if (lVar12 == 0) {
    lVar13 = 0;
  }
  (**(code **)(*plVar4 + 800))(plVar4,*(undefined8 *)(param_1 + 0xd0),lVar13);
  local_108 = *(double *)(param_1 + 0x90);
  dStack_100 = *(double *)(param_1 + 0x98);
  local_f8 = *(double *)(param_1 + 0xa0);
  dStack_f0 = *(double *)(param_1 + 0xa8);
  local_e8 = *(double *)(param_1 + 0x78);
  dStack_e0 = *(double *)(param_1 + 0x80);
  local_d8 = *(double *)(param_1 + 0x88);
  dStack_d0 = 0.0;
  local_c8 = 1.0;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  (**(code **)(**(longlong **)(param_1 + 200) + 0x330))(*(longlong **)(param_1 + 200),&local_108,1);
  FUN_1447f69b6(param_1 + 0xb0);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1b84 FUN_1484f1b84 body=185 status=ok
// SIG undefined FUN_1484f1b84(void)

void FUN_1484f1b84(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0xa8) = param_2[6];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  *(undefined8 *)(param_1 + 0x98) = param_2[4];
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  local_68 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = *(undefined8 *)(param_1 + 0x98);
  local_58 = *(undefined4 *)(param_1 + 0xa0);
  uStack_54 = *(undefined4 *)(param_1 + 0xa4);
  uStack_50 = *(undefined4 *)(param_1 + 0xa8);
  uStack_4c = *(undefined4 *)(param_1 + 0xac);
  local_48 = *(undefined4 *)(param_1 + 0x78);
  uStack_44 = *(undefined4 *)(param_1 + 0x7c);
  uStack_40 = *(undefined4 *)(param_1 + 0x80);
  uStack_3c = *(undefined4 *)(param_1 + 0x84);
  local_38 = *(undefined8 *)(param_1 + 0x88);
  uStack_30 = 0;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  uStack_10 = 0;
  FUN_148415b4c(*(undefined8 *)(param_1 + 200),&local_68,1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1c3e FUN_1484f1c3e body=80 status=ok
// SIG undefined FUN_1484f1c3e(void)

void FUN_1484f1c3e(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(param_1 + 0x30);
    plVar5 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x40);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar2)(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001484f1c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x350))(plVar1,uVar3,*(code **)(*plVar1 + 0x350));
    return;
  }
  return;
}



// FUNCTION 1484f1c8e FUN_1484f1c8e body=766 status=ok
// SIG undefined FUN_1484f1c8e(void)

void FUN_1484f1c8e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_1f8 [32];
  undefined4 **local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168 [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  float local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar4 = FUN_145b75354();
  lVar8 = *(longlong *)(lVar4 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar4);
    lVar8 = *(longlong *)(lVar4 + 0x110);
  }
  if ((lVar8 != 0) && (*(char *)(param_1 + 0x70) != '\0')) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_c8);
    local_f0 = *(undefined4 *)(param_1 + 0x90);
    uStack_ec = *(undefined4 *)(param_1 + 0x94);
    uStack_e8 = *(undefined4 *)(param_1 + 0x98);
    uStack_e4 = *(undefined4 *)(param_1 + 0x9c);
    local_e0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x2b0))(*(longlong **)(param_1 + 0xd0),local_168)
    ;
    local_108 = local_148;
    dStack_100 = dStack_140;
    local_f8 = local_138;
    uVar2 = *(undefined4 *)(lVar8 + 0x3c);
    fVar9 = (local_88 / 90.0) * 0.75;
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
    puVar6 = &DAT_14c846480;
    puVar7 = local_168;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = *(char *)(lVar8 + 0x38);
    if (cVar1 == '\x02') {
      local_1d8 = (undefined4 **)CONCAT44(local_1d8._4_4_,fVar9);
      local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
      local_1d0 = (double *)CONCAT44(local_1d0._4_4_,0x20808080);
      local_1c0 = puVar5;
      local_1b8 = local_168;
      FUN_1484dd7f7(&local_c8,&local_108,uVar2,(double)*(float *)(lVar8 + 0x48) * 90.0);
    }
    else if (cVar1 == '\x01') {
      dVar3 = SQRT((local_138 - local_b8) * (local_138 - local_b8) +
                   (local_148 - local_c8) * (local_148 - local_c8) +
                   (dStack_140 - local_c0) * (dStack_140 - local_c0));
      local_170 = 0;
      local_198._8_4_ = SUB84(dVar3,0);
      local_198._0_8_ = -dVar3;
      local_198._12_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
      local_188 = 0x8000000000000000;
      local_1a8 = (undefined4 *)0x0;
      uStack_1a0 = 1;
      local_180 = dVar3;
      local_178 = dVar3;
      FUN_14602b1fc(&local_1a8,0);
      *local_1a8 = 0x20808080;
      local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,fVar9);
      local_1d0 = &local_108;
      local_1d8 = &local_1a8;
      local_1c0 = puVar5;
      local_1b8 = local_168;
      FUN_1484dd9ef(SUB84((double)*(float *)(lVar8 + 0x44),0),
                    dVar3 / (double)*(float *)(lVar8 + 0x44),&local_180,local_198);
      if (local_1a8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (cVar1 == '\0') {
      local_1d0 = (double *)((ulonglong)local_1d0 & 0xffffffffffffff00);
      local_1d8 = (undefined4 **)CONCAT44(local_1d8._4_4_,0x20808080);
      local_1c8 = puVar5;
      local_1c0 = local_168;
      FUN_1484dcfbe(&local_108,uVar2,(double)*(float *)(lVar8 + 0x40),fVar9);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f1f8e FUN_1484f1f8e body=119 status=ok
// SIG undefined FUN_1484f1f8e(void)

void FUN_1484f1f8e(double *param_1,ulonglong *param_2,byte param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  *(byte *)(param_1 + 3) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x19) = param_4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[2];
  auVar3 = roundpd(auVar3,auVar3,1);
  auVar2 = roundpd(auVar2,auVar2,1);
  auVar1 = roundpd(auVar1,auVar1,1);
  *param_1 = 0.5;
  param_1[1] = 0.5;
  param_1[2] = 0.5;
  param_1[(char)(~((char)param_3 >> 7) + (param_3 ^ (char)param_3 >> 7))] = 0.0;
  *param_1 = auVar1._0_8_ + *param_1;
  param_1[1] = auVar2._0_8_ + param_1[1];
  param_1[2] = auVar3._0_8_ + param_1[2];
  return;
}



// FUNCTION 1484f2006 FUN_1484f2006 body=49 status=ok
// SIG undefined FUN_1484f2006(void)

undefined8 * FUN_1484f2006(ulonglong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1[2];
  auVar3 = roundpd(auVar3,auVar3,1);
  auVar2 = roundpd(auVar2,auVar2,1);
  auVar1 = roundpd(auVar1,auVar1,1);
  *param_2 = auVar1._0_8_;
  param_2[1] = auVar2._0_8_;
  param_2[2] = auVar3._0_8_;
  return param_2;
}



// FUNCTION 1484f2038 FUN_1484f2038 body=49 status=ok
// SIG undefined FUN_1484f2038(void)

undefined8 * FUN_1484f2038(ulonglong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1[2];
  auVar3 = roundpd(auVar3,auVar3,2);
  auVar2 = roundpd(auVar2,auVar2,2);
  auVar1 = roundpd(auVar1,auVar1,2);
  *param_2 = auVar1._0_8_;
  param_2[1] = auVar2._0_8_;
  param_2[2] = auVar3._0_8_;
  return param_2;
}



// FUNCTION 1484f206a FUN_1484f206a body=272 status=ok
// SIG undefined FUN_1484f206a(void)

void FUN_1484f206a(longlong param_1,double param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x49) == '\0') {
    dVar5 = (double)(uint)(1 << (bVar1 & 0x1f));
    uVar3 = -(ulonglong)(0.0 < param_2 / dVar5);
    dVar4 = (double)(~uVar3 & 0x3f1a36e2e0000000 | (ulonglong)(param_2 / dVar5) & uVar3);
    *(double *)(param_1 + 0x40) = dVar4;
  }
  else {
    dVar4 = pow(5.0,(double)(bVar1 >> 1));
    bVar2 = *(byte *)(param_1 + 0x48);
    param_2 = param_2 / (dVar4 * (double)(uint)(1 << (bVar1 - (bVar1 >> 1) & 0x1f)));
    uVar3 = -(ulonglong)(0.0 < param_2);
    dVar4 = (double)(~uVar3 & 0x3f1a36e2e0000000 | (ulonglong)param_2 & uVar3);
    *(double *)(param_1 + 0x40) = dVar4;
    if (*(char *)(param_1 + 0x49) == '\0') {
      dVar5 = (double)(uint)(1 << (bVar2 & 0x1f));
    }
    else {
      dVar5 = pow(5.0,(double)(bVar2 >> 1));
      dVar5 = dVar5 * (double)(uint)(1 << (bVar2 - (bVar2 >> 1) & 0x1f));
    }
  }
  *(double *)(param_1 + 0x50) = dVar4 * dVar5;
  return;
}



// FUNCTION 1484f217a FUN_1484f217a body=1034 status=ok
// SIG undefined FUN_1484f217a(void)

ulonglong FUN_1484f217a(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                       byte param_5,double param_6)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  undefined1 auStack_138 [24];
  double adStack_120 [4];
  byte local_100;
  undefined1 uStack_ff;
  undefined6 uStack_fe;
  double local_f8 [4];
  double local_d8 [6];
  double local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  adStack_120[3] = param_2[2] - *(double *)(param_1 + 0x18);
  adStack_120[2] = param_2[1] - *(double *)(param_1 + 0x10);
  adStack_120[1] = *param_2 - *(double *)(param_1 + 8);
  FUN_146bf2028(param_1 + 0x20,local_d8 + 6);
  uVar14 = 0x3ff00000;
  dVar8 = 1.0 / *(double *)(param_1 + 0x50);
  dVar1 = local_a8[2] * dVar8;
  dVar12 = local_a8[1] * dVar8;
  dVar8 = dVar8 * local_a8[0];
  local_d8[3] = dVar8;
  local_d8[4] = dVar12;
  local_d8[5] = dVar1;
  FUN_146bf2028(param_1 + 0x20,local_d8 + 6,param_3);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1;
  auVar6 = roundpd(auVar6,auVar6,1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar12;
  auVar7 = roundpd(auVar7,auVar7,1);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar8;
  auVar9 = roundpd(auVar9,auVar9,1);
  local_d8[0] = auVar9._0_8_;
  local_d8[1] = (double)auVar7._0_8_;
  local_d8[2] = (double)auVar6._0_8_;
  dVar8 = *(double *)(param_1 + 0x50);
  lVar3 = 0;
  do {
    dVar1 = local_d8[lVar3];
    if (((dVar1 + 1.0) - local_d8[lVar3 + 3]) * dVar8 <= param_6) {
      local_d8[lVar3 + 3] = dVar1 + 1.0;
      dVar12 = (double)(-(ulonglong)(local_d8[lVar3 + 6] < 0.0) & 0x3ff0000000000000);
LAB_1484f233f:
      local_d8[lVar3] = dVar1 + dVar12;
    }
    else if ((local_d8[lVar3 + 3] - dVar1) * dVar8 <= param_6) {
      local_d8[lVar3 + 3] = dVar1;
      dVar12 = (double)(-(ulonglong)(0.0 < local_d8[lVar3 + 6]) & 0xbff0000000000000);
      goto LAB_1484f233f;
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 3) {
      if (param_5 != 0) {
        uVar14 = 0xbff00000;
      }
      local_a8[0] = local_a8[0] * (double)((ulonglong)uVar14 << 0x20);
      local_a8[1] = local_a8[1] * (double)((ulonglong)uVar14 << 0x20);
      local_a8[2] = (double)((ulonglong)uVar14 << 0x20) * local_a8[2];
      dVar8 = 1.79769313486232e+308;
      lVar3 = 0;
      do {
        dVar1 = local_d8[lVar3 + 6];
        bVar5 = 0;
        bVar2 = true;
        do {
          bVar4 = bVar2;
          if ((dVar1 != 0.0) || (NAN(dVar1))) {
            dVar12 = (((double)bVar5 + local_d8[lVar3]) - local_d8[lVar3 + 3]) / dVar1;
            if (((dVar12 == 0.0 & param_5) == 0) && ((0.0 <= dVar12 && (dVar12 < dVar8)))) {
              local_f8[2] = local_d8[5];
              local_f8[0] = local_d8[3];
              local_f8[1] = local_d8[4];
              local_f8[lVar3] = (double)bVar5 + local_d8[lVar3];
              local_100 = (byte)lVar3 + 1;
              if (bVar5 == param_5) {
                local_100 = ~(byte)lVar3;
              }
              uStack_ff = *(undefined1 *)(param_1 + 0x48);
              auVar10._8_8_ = 0;
              auVar10._0_8_ = local_f8[0];
              auVar11._8_8_ = 0;
              auVar11._0_8_ = local_f8[1];
              auVar13._8_8_ = 0;
              auVar13._0_8_ = local_f8[2];
              auVar9 = roundpd(auVar13,auVar13,1);
              auVar7 = roundpd(auVar11,auVar11,1);
              auVar6 = roundpd(auVar10,auVar10,1);
              adStack_120[1] = 0.5;
              adStack_120[2] = 0.5;
              adStack_120[3] = 0.5;
              adStack_120[(char)((local_100 ^ (char)local_100 >> 7) - ((char)local_100 >> 7))] = 0.0
              ;
              adStack_120[1] = auVar6._0_8_ + adStack_120[1];
              adStack_120[2] = auVar7._0_8_ + adStack_120[2];
              adStack_120[3] = auVar9._0_8_ + adStack_120[3];
              *param_4 = adStack_120[1];
              param_4[1] = adStack_120[2];
              param_4[2] = adStack_120[3];
              param_4[3] = (double)CONCAT62(uStack_fe,CONCAT11(uStack_ff,local_100));
              dVar8 = dVar12;
            }
          }
          bVar5 = 1;
          bVar2 = false;
        } while (bVar4);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 3);
      if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
        return -(ulonglong)(0.0 <= dVar8 && dVar8 != 1.79769313486232e+308) & 0xffffff01;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1484f258a FUN_1484f258a body=2067 status=ok
// SIG undefined FUN_1484f258a(void)

void FUN_1484f258a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined ***pppuVar13;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484445fc();
  uVar7 = FUN_1409ffe1d();
  plVar8 = (longlong *)FUN_14843c80f(uVar7);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar8);
  }
  *(longlong **)(param_1 + 0x40) = plVar8;
  (**(code **)(*plVar8 + 0x358))(plVar8,param_1 + 0x30);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x40) + 200,*(undefined4 *)(param_1 + 0x57c),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x40) + 200,*(undefined4 *)(param_1 + 0x584),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(param_1 + 0x40),0);
  uVar7 = FUN_1409ffe1d();
  plVar8 = (longlong *)FUN_1484101e0(uVar7);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar8);
  }
  *(longlong **)(param_1 + 0x48) = plVar8;
  (**(code **)(*plVar8 + 0x300))(plVar8,param_1 + 0x38);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x48) + 0x30,*(undefined4 *)(param_1 + 0x57c),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f18;
  local_88 = (code *)&LAB_14844e6fa;
  FUN_14840df3c(*(longlong *)(param_1 + 0x48) + 0x30,*(undefined4 *)(param_1 + 0x584),&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar13 = local_78;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(param_1 + 0x48),0);
  uVar7 = FUN_1409ffe1d();
  lVar9 = FUN_1484e2f3b(uVar7);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x4f0) = lVar9;
  plVar8 = (longlong *)FUN_148444614(param_1);
  uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  lVar10 = FUN_148558365(uVar7,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
  *(longlong *)(lVar9 + 0x650) = lVar10;
  FUN_1406552bc(lVar9,0,lVar10);
  uVar7 = FUN_1409ffe1d();
  lVar9 = FUN_1484e2e03(uVar7);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x4f8) = lVar9;
  plVar8 = (longlong *)FUN_148444614(param_1);
  uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  uVar7 = FUN_1485583eb(uVar7,0);
  FUN_1484d0608(lVar9,uVar7);
  uVar7 = FUN_1409ffe1d();
  lVar9 = FUN_1484e2f3b(uVar7);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x500) = lVar9;
  plVar8 = (longlong *)FUN_148444614(param_1);
  uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  lVar10 = FUN_148558365(uVar7,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
  *(longlong *)(lVar9 + 0x650) = lVar10;
  FUN_1406552bc(lVar9,0,lVar10);
  uVar7 = FUN_1409ffe1d();
  lVar9 = FUN_1484e2e03(uVar7);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x508) = lVar9;
  plVar8 = (longlong *)FUN_148444614(param_1);
  uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  uVar7 = FUN_1485583eb(uVar7,0);
  FUN_1484d0608(lVar9,uVar7);
  *(undefined8 *)(param_1 + 0x510) = 0xffff0000fff39c12;
  uVar12 = 0xffff0000;
  if (*(char *)(param_1 + 0x119) != '\0') {
    uVar12 = 0xfff39c12;
  }
  *(undefined4 *)(param_1 + 0x518) = uVar12;
  *(undefined8 *)(param_1 + 0x520) = 0x4100000040800000;
  *(undefined4 *)(param_1 + 0x51c) = uVar12;
  *(undefined8 *)(param_1 + 0x530) = 0xffffff00ff00ff00;
  *(undefined8 *)(param_1 + 0x538) = 0xffffff00ffffff00;
  *(undefined8 *)(param_1 + 0x528) = 0xff00ff003f800000;
  local_c8 = *(code **)(param_1 + 0x5f0);
  uStack_80 = *(undefined8 *)(param_1 + 0x5f8);
  local_b8 = *(undefined ****)(param_1 + 0x600);
  uStack_70 = *(undefined8 *)(param_1 + 0x608);
  local_68 = *(undefined ***)(param_1 + 0x610);
  puStack_60 = *(undefined1 **)(param_1 + 0x618);
  local_58 = *(undefined8 *)(param_1 + 0x620);
  uStack_50 = *(undefined8 *)(param_1 + 0x628);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar7 = uStack_80;
  *(ulonglong *)(param_1 + 0x620) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x628) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0x610) = &PTR_LAB_14af11c60;
  *(longlong *)(param_1 + 0x618) = param_1;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(ulonglong *)(param_1 + 0x608) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(param_1 + 0x5f0) = &LAB_143b95a2c;
  *(ulonglong *)(param_1 + 0x5f8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = puStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != (code *)0x0) {
    pppuVar13 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar13 = &local_a8;
    }
    uStack_80 = uVar7;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (*(code *)(*pppuVar13)[2])();
  }
  local_c8 = *(code **)(param_1 + 0x140);
  uStack_80 = *(undefined8 *)(param_1 + 0x148);
  local_b8 = *(undefined ****)(param_1 + 0x150);
  uStack_70 = *(undefined8 *)(param_1 + 0x158);
  local_68 = *(undefined ***)(param_1 + 0x160);
  puStack_60 = *(undefined1 **)(param_1 + 0x168);
  local_58 = *(undefined8 *)(param_1 + 0x170);
  uStack_50 = *(undefined8 *)(param_1 + 0x178);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar7 = uStack_80;
  *(ulonglong *)(param_1 + 0x170) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0x160) = &PTR_LAB_14af11c80;
  *(longlong *)(param_1 + 0x168) = param_1;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(param_1 + 0x140) = &LAB_143b95ae2;
  *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = puStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar7;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != (code *)0x0) {
    pppuVar13 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar13 = local_b8;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  *(undefined8 *)(param_1 + 0x180) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 10000;
  iVar2 = *(int *)(param_1 + 0x328);
  if (*(int *)(param_1 + 0x324) < *(int *)(param_1 + 0x328)) {
    iVar2 = *(int *)(param_1 + 0x324);
  }
  uVar1 = *(uint *)(param_1 + 0x330);
  uVar6 = *(uint *)(param_1 + 0x32c);
  if ((int)*(uint *)(param_1 + 0x32c) <= (int)uVar1) {
    uVar6 = uVar1;
  }
  *(uint *)(param_1 + 0x420) = ~uVar6 + iVar2;
  *(undefined8 *)(param_1 + 0x410) = 0x3e9000003e8;
  *(uint *)(param_1 + 0x418) = ~uVar1 + ~uVar6 + iVar2;
  plVar8 = (longlong *)FUN_148444614(param_1);
  uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  uVar7 = FUN_148451354(uVar7);
  lVar9 = FUN_1484c6256(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x588) = lVar9;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar9 = FUN_14843d06b(uVar7,0x16,param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  *(longlong *)(param_1 + 0x590) = lVar9;
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = FUN_1484f2e7a;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f2d9e(*(longlong *)(param_1 + 0x588) + 0x28,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f3162;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f3086(*(longlong *)(param_1 + 0x588) + 0x58,&local_c8,param_1,&local_88);
  local_88 = FUN_1484f32a4;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1484f3086(*(longlong *)(param_1 + 0x588) + 0x70,&local_c8,param_1,&local_88);
  plVar8 = *(longlong **)(param_1 + 0x590);
  plVar11 = (longlong *)FUN_148444614(param_1);
  lVar10 = (**(code **)(*plVar11 + 0x2c8))(plVar11);
  lVar9 = lVar10 + 0x28;
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  (**(code **)(*plVar8 + 800))(plVar8,*(undefined8 *)(param_1 + 0x588),lVar9);
  (**(code **)(**(longlong **)(param_1 + 0x590) + 0x350))(*(longlong **)(param_1 + 0x590),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0x82) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0x83) = 1;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f2d9e FUN_1484f2d9e body=218 status=ok
// SIG undefined FUN_1484f2d9e(void)

undefined8
FUN_1484f2d9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af11ca0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f2e7a FUN_1484f2e7a body=522 status=ok
// SIG undefined FUN_1484f2e7a(void)

void FUN_1484f2e7a(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x640);
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x598) != '\x01')) goto LAB_1484f2f0b;
  dVar4 = *(double *)(param_3 + 0x30) - *(double *)(param_1 + 0x668);
  dVar5 = *(double *)(param_3 + 0x28) - *(double *)(param_1 + 0x660);
  dVar6 = *(double *)(param_3 + 0x20) - *(double *)(param_1 + 0x658);
  if ((dVar6 == DAT_14c8464e0) &&
     ((((!NAN(dVar6) && !NAN(DAT_14c8464e0) && (dVar5 == DAT_14c8464e8)) &&
       (!NAN(dVar5) && !NAN(DAT_14c8464e8))) &&
      ((dVar4 == DAT_14c8464f0 && (!NAN(dVar4) && !NAN(DAT_14c8464f0))))))) goto LAB_1484f2f0b;
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x125) == *(char *)(param_1 + 0x579)) {
LAB_1484f3007:
      lVar8 = 4;
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x648);
        local_68 = *(double *)(lVar3 + lVar8 * 4) + dVar4;
        dStack_70 = *(double *)(lVar3 + -8 + lVar8 * 4) + dVar5;
        local_78 = *(double *)(lVar3 + -0x10 + lVar8 * 4) + dVar6;
        FUN_1484f4854(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x638) + lVar7 * 4),&local_78)
        ;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 6;
      } while (lVar7 < *(int *)(param_1 + 0x640));
    }
    else {
      pdVar2 = *(double **)(param_1 + 0x648);
      local_68 = dVar4 + pdVar2[2];
      dStack_70 = dVar5 + pdVar2[1];
      local_78 = dVar6 + *pdVar2;
      FUN_148555064(param_1 + 0x130);
      if (*(char *)(param_1 + 0x218) == '\x01') {
        local_68 = *(double *)(param_1 + 0x2d8);
        local_78 = *(double *)(param_1 + 0x2c8);
        dStack_70 = *(double *)(param_1 + 0x2d0);
      }
      lVar7 = (longlong)**(int **)(param_1 + 0x638);
      lVar8 = *(longlong *)(param_1 + 0x80);
      dVar4 = *(double *)(lVar8 + lVar7 * 0x18);
      if ((dVar4 == local_78) && (!NAN(dVar4) && !NAN(local_78))) {
        dVar4 = *(double *)(lVar8 + 8 + lVar7 * 0x18);
        if ((dVar4 == dStack_70) && (!NAN(dVar4) && !NAN(dStack_70))) {
          dVar4 = *(double *)(lVar8 + 0x10 + lVar7 * 0x18);
          if ((dVar4 == local_68) && (!NAN(dVar4) && !NAN(local_68))) goto LAB_1484f2f0b;
        }
      }
      FUN_1484f4854(param_1,lVar7,&local_78);
    }
  }
  else if (0 < iVar1) goto LAB_1484f3007;
  FUN_1447f69b6(param_1 + 0x50);
LAB_1484f2f0b:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f3086 FUN_1484f3086 body=218 status=ok
// SIG undefined FUN_1484f3086(void)

undefined8
FUN_1484f3086(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14af11d10;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f3162 FUN_1484f3162 body=321 status=ok
// SIG undefined FUN_1484f3162(void)

void FUN_1484f3162(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))(lVar9 + 0x28,&DAT_14cb4cca0);
  (**(code **)(*param_2 + 0x2b0))(param_2,local_88);
  *(undefined4 *)(param_1 + 0x658) = local_68;
  *(undefined4 *)(param_1 + 0x65c) = uStack_64;
  *(undefined4 *)(param_1 + 0x660) = uStack_60;
  *(undefined4 *)(param_1 + 0x664) = uStack_5c;
  *(undefined8 *)(param_1 + 0x668) = local_58;
  FUN_14051b394(param_1 + 0x648,*(undefined4 *)(param_1 + 0x640),1);
  if (0 < *(int *)(param_1 + 0x640)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x638) + lVar10 * 4);
      lVar3 = *(longlong *)(param_1 + 0x648);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar11 * 0x18);
      uVar7 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined8 *)(lVar3 + 0x10 + lVar9) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar11 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + lVar9);
      *puVar1 = uVar7;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar10 < *(int *)(param_1 + 0x640));
    if (*(int *)(param_1 + 0x640) == 1) {
      uVar2 = *(undefined1 *)(param_1 + 0x118);
      uVar7 = FUN_1484f47fc(param_1 + 0x80,**(undefined4 **)(param_1 + 0x638));
      FUN_148553cd8(param_1 + 0x130,uVar7,
                    CONCAT71((int7)((ulonglong)local_88 >> 8),uVar2) & 0xffffffff,1);
    }
  }
  *(undefined1 *)(param_1 + 0x598) = 1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f32a4 FUN_1484f32a4 body=522 status=ok
// SIG undefined FUN_1484f32a4(void)

void FUN_1484f32a4(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < *(int *)(param_1 + 0x640)) {
    local_90 = param_1 + 0x28;
    local_98 = param_1 + 0x80;
    lVar10 = 0;
    lVar11 = 0;
    do {
      plVar6 = (longlong *)FUN_14479d2ce(local_90);
      lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
      lVar9 = *(longlong *)(param_1 + 0x638);
      lVar8 = (longlong)*(int *)(lVar9 + lVar11 * 4);
      local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar8 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar8 * 0x18);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      lVar8 = *(longlong *)(param_1 + 0x648);
      local_50 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x670);
      uVar3 = *(undefined4 *)(lVar9 + lVar11 * 4);
      *local_50 = &PTR_LAB_14af08ae0;
      *(undefined4 *)(local_50 + 1) = uVar3;
      local_50[4] = *(undefined8 *)(lVar8 + 0x10 + lVar10);
      puVar2 = (undefined8 *)(lVar8 + lVar10);
      uVar4 = puVar2[1];
      local_50[2] = *puVar2;
      local_50[3] = uVar4;
      *(undefined4 *)(local_50 + 5) = local_68;
      *(undefined4 *)((longlong)local_50 + 0x2c) = uStack_64;
      *(undefined4 *)(local_50 + 6) = uStack_60;
      *(undefined4 *)((longlong)local_50 + 0x34) = uStack_5c;
      local_50[7] = local_58;
      *(undefined4 *)(local_50 + 8) = uVar5;
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))
                (lVar7 + 0x28,param_1,&local_50,&DAT_14cb4cca0);
      lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x638) + lVar11 * 4);
      local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar9 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar9 * 0x18);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      uVar5 = FUN_1484f47fc(local_98,*(undefined4 *)(*(longlong *)(param_1 + 0x638) + lVar11 * 4));
      FUN_14855373c(param_1 + 0x130,uVar5);
      FUN_1485536aa(param_1 + 0x130,&local_88,uVar5);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar11 < *(int *)(param_1 + 0x640));
  }
  if (*(int *)(param_1 + 0x654) < 0) {
    *(undefined4 *)(param_1 + 0x650) = 0;
    FUN_1447a8aa0(param_1 + 0x648,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x650) = 0;
  }
  FUN_1484f4aac(param_1);
  FUN_145b25b1e(param_1 + 0x130);
  FUN_1484f3cf6(param_1);
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
  *(undefined1 *)(param_1 + 0x598) = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f34b0 FUN_1484f34b0 body=565 status=ok
// SIG undefined FUN_1484f34b0(void)

void FUN_1484f34b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [64];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x4e8),0,1);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_1411371f6(local_a8);
  uVar1 = FUN_14586a0bc();
  local_d8 = local_a8;
  lVar2 = FUN_141137228(param_2,uVar1,&DAT_14c8464e0,&local_c8);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(param_1 + 0x4e8) = lVar2;
  (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x170))(*(longlong **)(param_1 + 0x4f0),0,lVar2,0)
  ;
  FUN_14092e51e(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4f0));
  if ((*(byte *)(*(longlong *)(param_1 + 0x4f0) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x170))
            (*(longlong **)(param_1 + 0x4f8),0,*(undefined8 *)(param_1 + 0x4e8),0);
  (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x490))
            (*(longlong **)(param_1 + 0x4f8),*(undefined8 *)(param_1 + 0x4f0),&DAT_14cadad90,0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x4f8) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  (**(code **)(**(longlong **)(param_1 + 0x500) + 0x170))
            (*(longlong **)(param_1 + 0x500),0,*(undefined8 *)(param_1 + 0x4e8),0);
  (**(code **)(**(longlong **)(param_1 + 0x500) + 0x490))
            (*(longlong **)(param_1 + 0x500),*(undefined8 *)(param_1 + 0x4f0),&DAT_14cadad90,0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x500) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  (**(code **)(**(longlong **)(param_1 + 0x508) + 0x170))
            (*(longlong **)(param_1 + 0x508),0,*(undefined8 *)(param_1 + 0x4e8),0);
  (**(code **)(**(longlong **)(param_1 + 0x508) + 0x490))
            (*(longlong **)(param_1 + 0x508),*(undefined8 *)(param_1 + 0x4f0),&DAT_14cadad90,0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x508) + 0x9c) & 1) == 0) {
    FUN_140b506a4();
  }
  else {
    FUN_14072bb4a();
  }
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f36e6 FUN_1484f36e6 body=88 status=ok
// SIG undefined FUN_1484f36e6(void)

void FUN_1484f36e6(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_148444614();
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  plVar1 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x4e8),0,1);
    *(undefined8 *)(param_1 + 0x4e8) = 0;
  }
  return;
}



// FUNCTION 1484f373e FUN_1484f373e body=1244 status=ok
// SIG undefined FUN_1484f373e(void)

void FUN_1484f373e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  float local_150;
  undefined4 local_148;
  undefined1 local_140;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  double local_108;
  double local_100;
  double local_f8;
  float local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar2 = (longlong *)FUN_148444614();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2c8))(plVar2);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x5a0);
  if ((*(char *)(param_1 + 0x125) == '\x01') && (*(char *)(param_1 + 0x218) == '\x01')) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&local_108);
    if (*(char *)(param_1 + 0x218) == '\x01') {
      if (*(char *)(param_1 + 0x251) == '\x01') {
        local_120 = *(double *)(param_1 + 0x280) * 9999.0;
        local_128 = *(double *)(param_1 + 0x278) * 9999.0;
        local_130 = *(double *)(param_1 + 0x270) * 9999.0;
        local_118 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x53a)];
        local_114 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x539)];
        local_110 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x538)];
        bVar1 = *(byte *)(param_1 + 0x53b);
        local_f8 = *(double *)(param_1 + 0x268) + local_120;
        local_100 = *(double *)(param_1 + 0x260) + local_128;
        local_108 = *(double *)(param_1 + 600) + local_130;
        local_120 = *(double *)(param_1 + 0x268) - local_120;
        local_128 = *(double *)(param_1 + 0x260) - local_128;
        local_130 = *(double *)(param_1 + 600) - local_130;
        lVar3 = *plVar2;
      }
      else {
        if (*(char *)(param_1 + 0x368) != '\x01') goto LAB_1484f3946;
        local_150 = (local_c8 / 90.0) * 0.5;
        local_120 = *(double *)(param_1 + 0x280) * 9999.0;
        local_128 = *(double *)(param_1 + 0x278) * 9999.0;
        local_130 = *(double *)(param_1 + 0x270) * 9999.0;
        local_118 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x53a)];
        local_114 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x539)];
        local_110 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x538)];
        local_10c = (float)*(byte *)(param_1 + 0x53b) * 0.003921569;
        local_f8 = *(double *)(param_1 + 0x268) + local_120;
        local_100 = *(double *)(param_1 + 0x260) + local_128;
        local_108 = *(double *)(param_1 + 600) + local_130;
        local_120 = *(double *)(param_1 + 0x268) - local_120;
        local_128 = *(double *)(param_1 + 0x260) - local_128;
        local_130 = *(double *)(param_1 + 600) - local_130;
        local_140 = 1;
        local_148 = 0;
        local_158 = 1;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_130,&local_108,&local_118);
        local_120 = *(double *)(param_1 + 0x398) * 9999.0;
        local_128 = *(double *)(param_1 + 0x390) * 9999.0;
        local_130 = *(double *)(param_1 + 0x388) * 9999.0;
        local_118 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x53a)];
        local_114 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x539)];
        local_110 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x538)];
        bVar1 = *(byte *)(param_1 + 0x53b);
        local_f8 = *(double *)(param_1 + 0x380) + local_120;
        local_100 = *(double *)(param_1 + 0x378) + local_128;
        local_108 = *(double *)(param_1 + 0x370) + local_130;
        local_120 = *(double *)(param_1 + 0x380) - local_120;
        local_128 = *(double *)(param_1 + 0x378) - local_128;
        local_130 = *(double *)(param_1 + 0x370) - local_130;
        lVar3 = *plVar2;
      }
      local_10c = (float)bVar1 * 0.003921569;
      local_150 = (local_c8 / 90.0) * 0.5;
      local_140 = 1;
      local_148 = 0;
      local_158 = 1;
      (**(code **)(lVar3 + 0x30))(plVar2,&local_130,&local_108,&local_118);
    }
  }
LAB_1484f3946:
  if (*(char *)(param_1 + 0x218) == '\x01') {
    lVar3 = 0x53c;
    if ((*(int *)(param_1 + 0x238) == *(int *)(param_1 + 0x410)) ||
       (*(int *)(param_1 + 0x238) == *(int *)(param_1 + 0x414))) goto LAB_1484f396f;
  }
  lVar3 = 0x518;
LAB_1484f396f:
  FUN_1484d0b76(*(undefined8 *)(param_1 + 0x4f8),lVar3 + param_1);
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f3c1c FUN_1484f3c1c body=115 status=ok
// SIG undefined FUN_1484f3c1c(void)

void FUN_1484f3c1c(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1484f3c90();
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x18;
    do {
      FUN_1484f3e04(param_1,*(undefined4 *)(param_1 + 0xc0),lVar1,0);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x118) = param_3;
  FUN_148553688(param_1 + 0x130,param_2);
  FUN_1484f3cf6(param_1);
  return;
}



// FUNCTION 1484f3c90 FUN_1484f3c90 body=102 status=ok
// SIG undefined FUN_1484f3c90(void)

void FUN_1484f3c90(longlong param_1)

{
  FUN_1484f570a(param_1,0xffffffff,0);
  FUN_1484f3d6e(param_1);
  FUN_1484f3dcc(param_1 + 0x80);
  FUN_146c83e96(param_1 + 0x428,1,1);
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x4f8));
  FUN_1484debd2(*(undefined8 *)(param_1 + 0x4f0));
  FUN_148553580(param_1 + 0x130);
  return;
}



// FUNCTION 1484f3cf6 FUN_1484f3cf6 body=120 status=ok
// SIG undefined FUN_1484f3cf6(void)

void FUN_1484f3cf6(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 0) {
LAB_1484f3d4e:
    FUN_1485537ac(param_1 + 0x130,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x119) != '\x01') {
    if (*(int *)(param_1 + 0x640) != 1) goto LAB_1484f3d4e;
    if (**(int **)(param_1 + 0x638) == **(int **)(param_1 + 0xb8)) {
      iVar1 = -1;
    }
    else if (**(int **)(param_1 + 0x638) != (*(int **)(param_1 + 0xb8))[iVar1 + -1])
    goto LAB_1484f3d4e;
  }
  FUN_148553cd8(param_1 + 0x130,iVar1,0,1);
  return;
}



// FUNCTION 1484f3d6e FUN_1484f3d6e body=94 status=ok
// SIG undefined FUN_1484f3d6e(void)

void FUN_1484f3d6e(longlong param_1)

{
  if (-1 < (longlong)*(int *)(param_1 + 0x630)) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x698) + 0x18 +
     (longlong)*(int *)(param_1 + 0x630) * 0x28) = *(undefined4 *)(param_1 + 0x634);
    FUN_1448215fa();
    *(undefined4 *)(param_1 + 0x630) = 0xffffffff;
  }
  FUN_1484debd2(*(undefined8 *)(param_1 + 0x500));
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x508));
  return;
}



// FUNCTION 1484f3dcc FUN_1484f3dcc body=56 status=ok
// SIG undefined FUN_1484f3dcc(void)

void FUN_1484f3dcc(longlong param_1)

{
  FUN_145be4c34();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_14481578e(param_1 + 0x38,0);
  }
  FUN_14010afec(param_1 + 0x48,0);
  return;
}



// FUNCTION 1484f3e04 FUN_1484f3e04 body=992 status=ok
// SIG undefined FUN_1484f3e04(void)

undefined4 FUN_1484f3e04(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined4 *puStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = FUN_1484f41e6(param_1 + 0x80);
  local_e0 = param_1 + 0x428;
  FUN_146c83f12(local_e0,uVar11,param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x524);
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_58 = param_3[2];
  uVar3 = *(undefined4 *)(param_1 + 0x51c);
  lVar13 = *(longlong *)(param_1 + 0x4f0);
  FUN_148511d92(lVar13 + 0x698,&local_a8,uVar11);
  *(undefined8 *)(puStack_a0 + 4) = local_58;
  *puStack_a0 = local_68;
  puStack_a0[1] = uStack_64;
  puStack_a0[2] = uStack_60;
  puStack_a0[3] = uStack_5c;
  puStack_a0[6] = uVar3;
  *(undefined8 *)(puStack_a0 + 7) = uVar4;
  FUN_1448215fa(lVar13);
  *(undefined1 *)(lVar13 + 0x690) = 1;
  iVar12 = *(int *)(param_1 + 0xc0);
  if (1 < iVar12) {
    if ((param_2 != 0) || (bVar9 = 0, *(char *)(param_1 + 0x118) != '\0')) {
      iVar12 = *(int *)(*(longlong *)(param_1 + 0xb8) +
                       (longlong)((param_2 + iVar12 + -1) % iVar12) * 4);
      lVar13 = (longlong)iVar12;
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar13 * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar13 * 0x18);
      local_a8 = *puVar1;
      puStack_a0 = (undefined4 *)puVar1[1];
      FUN_1484f435e(&local_d8,&local_a8,param_3);
      cVar10 = FUN_1484d0cb6(*(undefined8 *)(param_1 + 0x4f8),iVar12);
      if (cVar10 == '\0') {
        local_70 = *(undefined4 *)(param_1 + 0x528);
        local_74 = *(undefined4 *)(param_1 + 0x520);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar13 * 0x18);
        local_a8 = *puVar1;
        puStack_a0 = (undefined4 *)puVar1[1];
        local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar13 * 0x18);
        local_90 = *(undefined4 *)param_3;
        uStack_8c = *(undefined4 *)((longlong)param_3 + 4);
        uStack_88 = *(undefined4 *)(param_3 + 1);
        uStack_84 = *(undefined4 *)((longlong)param_3 + 0xc);
        local_80 = param_3[2];
        local_78 = *(undefined4 *)(param_1 + 0x518);
        FUN_1484d0892(*(undefined8 *)(param_1 + 0x4f8),iVar12);
        FUN_146c83fd2(local_e0,iVar12,&local_d8);
      }
      else {
        lVar14 = *(longlong *)(param_1 + 0x4f8);
        lVar5 = *(longlong *)(lVar14 + 0x698);
        uVar3 = *(undefined4 *)param_3;
        uVar6 = *(undefined4 *)((longlong)param_3 + 4);
        uVar7 = *(undefined4 *)(param_3 + 1);
        uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
        *(undefined8 *)(lVar5 + 0x28 + lVar13 * 0x40) = param_3[2];
        puVar2 = (undefined4 *)(lVar5 + 0x18 + lVar13 * 0x40);
        *puVar2 = uVar3;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        FUN_1448215fa(lVar14);
        *(undefined1 *)(lVar14 + 0x690) = 1;
        FUN_146c845f8(local_e0,iVar12,&local_d8);
      }
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FUN_1400020a8();
      }
      bVar9 = *(byte *)(param_1 + 0x118);
      iVar12 = *(int *)(param_1 + 0xc0);
    }
    if (((bVar9 & 1) != 0) || (iVar12 + -1 != param_2)) {
      lVar14 = (longlong)((param_2 + 1) % iVar12);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + lVar14 * 4);
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar13 * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar13 * 0x18);
      local_a8 = *puVar1;
      puStack_a0 = (undefined4 *)puVar1[1];
      FUN_1484f435e(local_b8,&local_a8,param_3);
      FUN_146c83fd2(local_e0,uVar11,local_b8);
      local_74 = *(undefined4 *)(param_1 + 0x520);
      local_70 = *(undefined4 *)(param_1 + 0x528);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + lVar14 * 4);
      local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar13 * 0x18);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar13 * 0x18);
      local_d8 = *puVar2;
      uStack_d4 = puVar2[1];
      uStack_d0 = puVar2[2];
      uStack_cc = puVar2[3];
      local_a8 = *param_3;
      puStack_a0 = (undefined4 *)param_3[1];
      local_98 = param_3[2];
      local_78 = *(undefined4 *)(param_1 + 0x518);
      local_90 = local_d8;
      uStack_8c = uStack_d4;
      uStack_88 = uStack_d0;
      uStack_84 = uStack_cc;
      local_80 = local_c8;
      FUN_1484d0892(*(undefined8 *)(param_1 + 0x4f8),uVar11,&local_a8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar13 = param_1 + 0x130;
  FUN_1485536aa(lVar13,param_3,param_2);
  if (*(char *)(param_1 + 0x119) == '\x01') {
    if (*(int *)(param_1 + 0xc0) + -1 == param_2) {
      FUN_148550d76(lVar13,*(undefined4 *)(param_1 + 0x414));
      FUN_148550b26(lVar13,param_3,*(undefined4 *)(param_1 + 0x414),*(undefined4 *)(param_1 + 0x418)
                   );
      FUN_1484f3cf6(param_1);
    }
    if (param_2 == 0) {
      FUN_148550d76(lVar13,*(undefined4 *)(param_1 + 0x410));
      FUN_148550b26(lVar13,param_3,*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418)
                   );
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f41e6 FUN_1484f41e6 body=375 status=ok
// SIG undefined FUN_1484f41e6(void)

undefined4 FUN_1484f41e6(longlong param_1,int param_2,undefined4 *param_3,undefined4 **param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = (longlong)param_2;
  if (param_2 < *(int *)(param_1 + 0x40)) {
    lVar5 = lVar8;
    do {
      if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x38) + lVar5 * 4);
        lVar6 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar6 = param_1 + 0x80;
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & uVar1) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 0x10) == uVar1)
            goto LAB_1484f422a;
            iVar7 = *(int *)(lVar6 + 8);
          } while (iVar7 != -1);
        }
      }
      lVar6 = 0;
LAB_1484f422a:
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  local_48 = param_2;
  if (param_4 == (undefined4 **)0x0) {
    param_4 = &local_40;
    FUN_148517486(param_1,param_4);
  }
  else {
    FUN_14851756c(param_1,&local_40,*(undefined4 *)param_4);
  }
  *(undefined8 *)(local_38 + 4) = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_38 = *param_3;
  local_38[1] = uVar2;
  local_38[2] = uVar3;
  local_38[3] = uVar4;
  uVar2 = *(undefined4 *)param_4;
  iVar7 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar7 + 1U;
  local_4c = uVar2;
  if (*(uint *)(param_1 + 0x44) < iVar7 + 1U) {
    FUN_1446f48e2(param_1 + 0x38,iVar7);
  }
  memmove((void *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4 + 4),
          (void *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4),
          (ulonglong)(uint)(iVar7 - param_2) << 2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4) = uVar2;
  local_40 = &local_4c;
  local_38 = &local_48;
  FUN_140263e2a(param_1 + 0x48,local_44,&local_40,0);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_4c;
}



// FUNCTION 1484f435e FUN_1484f435e body=112 status=ok
// SIG undefined FUN_1484f435e(void)

longlong * FUN_1484f435e(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1403e3958(0,0);
  puVar3 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *puVar3 = *param_2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1403e3958(param_1,iVar2);
  }
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = param_3[2];
  uVar8 = param_3[1];
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar8;
  return param_1;
}



// FUNCTION 1484f43ce FUN_1484f43ce body=446 status=ok
// SIG undefined FUN_1484f43ce(void)

void FUN_1484f43ce(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x118) != param_2) {
    lVar3 = (longlong)*(int *)(param_1 + 0xc0);
    if (1 < lVar3) {
      if (param_2 == '\0') {
        FUN_146c843d2(param_1 + 0x428,
                      *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + -4 + lVar3 * 4));
        FUN_1484d0c8c(*(undefined8 *)(param_1 + 0x4f8),
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0xb8) +
                       (longlong)(*(int *)(param_1 + 0xc0) + -1) * 4));
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x80);
        lVar5 = (longlong)**(int **)(param_1 + 0xb8);
        local_88 = *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x18);
        puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x18);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        lVar3 = (longlong)(*(int **)(param_1 + 0xb8))[lVar3 + -1];
        local_48 = *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x18);
        puVar2 = (undefined4 *)(lVar4 + lVar3 * 0x18);
        local_58 = *puVar2;
        uStack_54 = puVar2[1];
        uStack_50 = puVar2[2];
        uStack_4c = puVar2[3];
        FUN_1484f435e(local_40,&local_58,&local_98);
        FUN_146c83fd2(param_1 + 0x428,
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0xb8) +
                       (longlong)(*(int *)(param_1 + 0xc0) + -1) * 4),local_40);
        local_64 = *(undefined4 *)(param_1 + 0x520);
        local_60 = *(undefined4 *)(param_1 + 0x528);
        lVar3 = *(longlong *)(param_1 + 0x80);
        lVar4 = (longlong)**(int **)(param_1 + 0xb8);
        local_70 = *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18);
        puVar2 = (undefined4 *)(lVar3 + lVar4 * 0x18);
        local_80 = *puVar2;
        uStack_7c = puVar2[1];
        uStack_78 = puVar2[2];
        uStack_74 = puVar2[3];
        lVar4 = (longlong)(*(int **)(param_1 + 0xb8))[*(int *)(param_1 + 0xc0) + -1];
        puVar1 = (undefined8 *)(lVar3 + lVar4 * 0x18);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        local_88 = *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18);
        local_68 = *(undefined4 *)(param_1 + 0x518);
        local_58 = local_80;
        uStack_54 = uStack_7c;
        uStack_50 = uStack_78;
        uStack_4c = uStack_74;
        local_48 = local_70;
        FUN_1484d0892(*(undefined8 *)(param_1 + 0x4f8),lVar4,&local_98);
        if (local_40[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    *(char *)(param_1 + 0x118) = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f458e FUN_1484f458e body=190 status=ok
// SIG undefined FUN_1484f458e(void)

void FUN_1484f458e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb8);
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)(lVar4 + lVar6);
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar5 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar5 * 0x18);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) = local_48;
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f464e FUN_1484f464e body=411 status=ok
// SIG undefined FUN_1484f464e(void)

void FUN_1484f464e(longlong param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(byte *)(param_1 + 0x119) != param_2) {
    *(byte *)(param_1 + 0x119) = param_2;
    uVar2 = *(undefined4 *)(param_1 + 0x510 + (ulonglong)(param_2 ^ 1) * 4);
    *(undefined4 *)(param_1 + 0x518) = uVar2;
    *(undefined4 *)(param_1 + 0x51c) = uVar2;
    FUN_1484dedde(*(undefined8 *)(param_1 + 0x4f0),param_1 + 0x51c);
    FUN_1484d0b76(*(undefined8 *)(param_1 + 0x4f8),param_1 + 0x518);
    if (param_2 == 0) {
      FUN_148550d76(param_1 + 0x130,*(undefined4 *)(param_1 + 0x410));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_1484f570a(param_1,0xffffffff,0);
    FUN_1484f3d6e(param_1);
    FUN_1484f43ce(param_1,0);
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      local_28 = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x80) + 0x10 +
                  (longlong)**(int **)(param_1 + 0xb8) * 0x18);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0x80) + (longlong)**(int **)(param_1 + 0xb8) * 0x18);
      local_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      FUN_148550b26(param_1 + 0x130,&local_38,*(undefined4 *)(param_1 + 0x410),
                    *(undefined4 *)(param_1 + 0x418));
      lVar4 = (longlong)
              *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)(*(int *)(param_1 + 0xc0) + -1) * 4
                      );
      local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar4 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar4 * 0x18);
      local_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      FUN_148550b26(param_1 + 0x130,&local_38,*(undefined4 *)(param_1 + 0x414),
                    *(undefined4 *)(param_1 + 0x418));
      iVar3 = *(int *)(param_1 + 0xc0);
    }
    FUN_148553cd8(param_1 + 0x130,iVar3,0,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f47fc FUN_1484f47fc body=88 status=ok
// SIG undefined FUN_1484f47fc(void)

undefined4 FUN_1484f47fc(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar2 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 0x10) == param_2)
        goto LAB_1484f4806;
        iVar1 = *(int *)(lVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1484f4806:
  return *(undefined4 *)(lVar2 + 4);
}



// FUNCTION 1484f4854 FUN_1484f4854 body=599 status=ok
// SIG undefined FUN_1484f4854(void)

void FUN_1484f4854(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar13 = (longlong)param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar13 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar13 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  lVar2 = param_1 + 0x428;
  FUN_146c84584(lVar2,param_2);
  lVar11 = *(longlong *)(param_1 + 0x4f0);
  lVar3 = *(longlong *)(lVar11 + 0x698);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x28) = *(undefined8 *)(param_3 + 4);
  puVar1 = (undefined4 *)(lVar3 + lVar13 * 0x28);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  FUN_1448215fa(lVar11);
  *(undefined1 *)(lVar11 + 0x690) = 1;
  iVar9 = FUN_1484f47fc(param_1 + 0x80,param_2);
  if ((*(char *)(param_1 + 0x118) != '\0') || (bVar8 = 0, **(int **)(param_1 + 0xb8) != param_2)) {
    lVar11 = *(longlong *)(param_1 + 0x4f8);
    lVar12 = (longlong)((iVar9 + *(int *)(param_1 + 0xc0) + -1) % *(int *)(param_1 + 0xc0));
    lVar3 = *(longlong *)(lVar11 + 0x698);
    lVar10 = (longlong)(*(int **)(param_1 + 0xb8))[lVar12] * 0x40;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined8 *)(lVar3 + 0x28 + lVar10) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar10);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_1448215fa(lVar11);
    *(undefined1 *)(lVar11 + 0x690) = 1;
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + lVar12 * 4);
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar11 * 0x18);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar11 * 0x18);
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    FUN_1484f435e(local_58,&local_78,param_3);
    FUN_146c845f8(lVar2,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar12 * 4),local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    bVar8 = *(byte *)(param_1 + 0x118);
  }
  if (((bVar8 & 1) != 0) ||
     (*(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)(*(int *)(param_1 + 0xc0) + -1) * 4) !=
      param_2)) {
    lVar11 = *(longlong *)(param_1 + 0x4f8);
    lVar3 = *(longlong *)(lVar11 + 0x698);
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x40) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar3 + lVar13 * 0x40);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_1448215fa(lVar11);
    *(undefined1 *)(lVar11 + 0x690) = 1;
    lVar11 = (longlong)
             *(int *)(*(longlong *)(param_1 + 0xb8) +
                     (longlong)((iVar9 + 1) % *(int *)(param_1 + 0xc0)) * 4);
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar11 * 0x18);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar11 * 0x18);
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    FUN_1484f435e(local_58,param_3);
    FUN_146c845f8(lVar2,param_2,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f4aac FUN_1484f4aac body=330 status=ok
// SIG undefined FUN_1484f4aac(void)

void FUN_1484f4aac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = *(longlong **)(param_1 + 0x590);
  if (plVar5 == (longlong *)0x0) goto LAB_1484f4aec;
  iVar1 = *(int *)(param_1 + 0x640);
  if ((longlong)iVar1 < 1) {
LAB_1484f4ae1:
    uVar7 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar8 = 0;
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
    local_48 = DAT_14c8464f0;
    do {
      lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x638) + lVar8);
      dVar3 = dVar3 + *(double *)(lVar2 + lVar9 * 0x18);
      dVar4 = dVar4 + *(double *)(lVar2 + 8 + lVar9 * 0x18);
      local_48 = local_48 + *(double *)(lVar2 + 0x10 + lVar9 * 0x18);
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar1 * 4 - lVar8 != 0);
    dVar10 = 1.0 / (double)iVar1;
    local_48 = dVar10 * local_48;
    local_78 = *(undefined8 *)(param_1 + 0x558);
    uStack_70 = *(undefined8 *)(param_1 + 0x560);
    local_68 = *(undefined4 *)(param_1 + 0x568);
    uStack_64 = *(undefined4 *)(param_1 + 0x56c);
    uStack_60 = *(undefined4 *)(param_1 + 0x570);
    uStack_5c = *(undefined4 *)(param_1 + 0x574);
    puVar6 = &local_78;
    local_58._8_4_ = SUB84(dVar4 * dVar10,0);
    local_58._0_8_ = dVar3 * dVar10;
    local_58._12_4_ = (int)((ulonglong)(dVar4 * dVar10) >> 0x20);
    uStack_40 = 0;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0x3ff0000000000000;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0;
    FUN_148415b4c(plVar5,puVar6,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    plVar5 = *(longlong **)(param_1 + 0x590);
    if (plVar5 == (longlong *)0x0) goto LAB_1484f4aec;
    if (*(int *)(param_1 + 0x640) < 1) goto LAB_1484f4ae1;
    uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),*(undefined1 *)(param_1 + 0x580)) ^ 1;
  }
  (**(code **)(*plVar5 + 0x350))(plVar5,uVar7);
LAB_1484f4aec:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f4bf8 FUN_1484f4bf8 body=708 status=ok
// SIG undefined FUN_1484f4bf8(void)

void FUN_1484f4bf8(longlong param_1,double *param_2,undefined1 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_188 [32];
  double *local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_d0;
  longlong local_b8 [2];
  undefined8 local_a8 [6];
  longlong local_78 [2];
  undefined8 local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
  param_3[0x28] = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0;
  if (*(char *)(param_1 + 0x119) == '\0') {
    if (*(char *)(param_1 + 0x580) == '\x01') {
      if ((*(char *)(param_1 + 0x118) == '\0') && (*(int *)(param_1 + 0x640) == 1)) {
        if ((**(int **)(param_1 + 0x638) == **(int **)(param_1 + 0xb8)) ||
           (**(int **)(param_1 + 0x638) ==
            (*(int **)(param_1 + 0xb8))[*(int *)(param_1 + 0xc0) + -1])) goto LAB_1484f4e23;
      }
      local_78[0] = *(longlong *)(param_1 + 0x5f0);
      local_68[0] = 0;
      if (local_78[0] != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x610);
        if (*(undefined8 **)(param_1 + 0x600) != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)(param_1 + 0x600);
        }
        (**(code **)*puVar8)(0,local_68);
      }
      local_158 = *param_2;
      dStack_150 = param_2[1];
      local_148 = param_2[2];
      dStack_140 = param_2[3];
      local_138 = param_2[4];
      dStack_130 = param_2[5];
      cVar7 = FUN_146c84bb4(param_1 + 0x428,&local_158,&local_108,local_78);
    }
    else {
      local_b8[0] = *(longlong *)(param_1 + 0x5f0);
      local_a8[0] = 0;
      if (local_b8[0] != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x610);
        if (*(undefined8 **)(param_1 + 0x600) != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)(param_1 + 0x600);
        }
        (**(code **)*puVar8)(0,local_a8);
      }
      local_158 = *param_2;
      dStack_150 = param_2[1];
      local_148 = param_2[2];
      dStack_140 = param_2[3];
      local_138 = param_2[4];
      dStack_130 = param_2[5];
      cVar7 = FUN_146c84814(param_1 + 0x428,&local_158,&local_108,local_b8);
    }
    if (cVar7 == '\0') goto LAB_1484f4df8;
    *param_3 = 1;
    *(undefined8 *)(param_3 + 8) = local_d0;
  }
  else {
LAB_1484f4e23:
    local_148 = param_2[5];
    local_158 = param_2[3];
    dStack_150 = param_2[4];
    local_118 = param_2[2];
    local_128 = *(undefined4 *)param_2;
    uStack_124 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_120 = *(undefined4 *)(param_2 + 1);
    uStack_11c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_168 = &local_108;
    cVar7 = FUN_14848488c(param_1 + 0x540,&local_128,&local_158,2);
    if (cVar7 == '\0') goto LAB_1484f4df8;
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    dVar3 = *param_2;
    dVar4 = param_2[4];
    dVar5 = param_2[3];
    dVar6 = param_2[5];
    *param_3 = 1;
    *(double *)(param_3 + 8) =
         (local_f8 - dVar1) * dVar6 + (local_108 - dVar3) * dVar5 + (local_100 - dVar2) * dVar4;
  }
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
  param_3[0x28] = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0;
LAB_1484f4df8:
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f4ebe FUN_1484f4ebe body=85 status=ok
// SIG undefined FUN_1484f4ebe(void)

undefined1 * FUN_1484f4ebe(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_1484f4bf8(param_1 + -0x30,param_3,param_2);
  return param_2;
}



// FUNCTION 1484f4f14 FUN_1484f4f14 body=2036 status=ok
// SIG undefined FUN_1484f4f14(void)

void FUN_1484f4f14(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 **ppuVar12;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_c8 [2];
  undefined8 local_b8 [6];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar11 = param_1 + -0x30;
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    local_168 = param_2[5];
    local_178 = param_2[3];
    uStack_170 = param_2[4];
    local_128 = param_2[2];
    local_138 = *param_2;
    uStack_130 = param_2[1];
    local_1b8 = &local_118;
    cVar3 = FUN_14848488c(param_1 + 0x510,&local_138,&local_178,2);
    if (cVar3 == '\0') goto LAB_1484f51f3;
    lVar10 = param_1 + 0x100;
    FUN_148555064(lVar10,&local_118);
    if (*(char *)(param_1 + 0x1e8) == '\x01') {
      if (((*(int *)(param_1 + 0xec) <= *(int *)(param_1 + 0x90)) &&
          (*(int *)(param_1 + 0x208) == *(int *)(param_1 + 0x3e0))) ||
         ((*(int *)(param_1 + 0xf0) <= *(int *)(param_1 + 0x90) &&
          (*(int *)(param_1 + 0x208) == *(int *)(param_1 + 0x3e4))))) {
        lVar7 = param_1 + -8;
        plVar6 = (longlong *)FUN_14479d2ce(lVar7);
        lVar9 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))(lVar9 + 0x28,&DAT_14cb4ccb0);
        iVar5 = -1;
        if (*(char *)(param_1 + 0x1e8) == '\x01') {
          iVar5 = *(int *)(param_1 + 0x208);
        }
        iVar2 = *(int *)(param_1 + 0x3e0);
        FUN_1484f43ce(lVar11,iVar5 == iVar2);
        FUN_1484f464e(lVar11,0);
        plVar6 = (longlong *)FUN_14479d2ce(lVar7);
        lVar9 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        local_140 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x640);
        *local_140 = &PTR_LAB_14af08a40;
        *(undefined1 *)(local_140 + 1) = 1;
        *(bool *)((longlong)local_140 + 9) = iVar5 == iVar2;
        *(undefined4 *)((longlong)local_140 + 0xc) = uVar1;
        (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x20))
                  (lVar9 + 0x28,lVar11,&local_140,&DAT_14cb4ccb0);
        plVar6 = (longlong *)FUN_14479d2ce(lVar7);
        lVar11 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
        FUN_145b25b1e(lVar10);
        param_1 = param_1 + 0x38;
        goto LAB_1484f54ab;
      }
      if (*(char *)(param_1 + 0xf5) != *(char *)(param_1 + 0x549)) {
        local_108 = *(undefined8 *)(param_1 + 0x2a8);
        local_118._0_4_ = *(undefined4 *)(param_1 + 0x298);
        local_118._4_4_ = *(undefined4 *)(param_1 + 0x29c);
        uStack_110 = *(undefined4 *)(param_1 + 0x2a0);
        uStack_10c = *(undefined4 *)(param_1 + 0x2a4);
      }
      FUN_145b25b1e(lVar10);
    }
    lVar10 = param_1 + -8;
    plVar6 = (longlong *)FUN_14479d2ce(lVar10);
    lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&DAT_14cb4cc60);
    uVar4 = FUN_1484f3e04(lVar11,*(undefined4 *)(param_1 + 0x90),&local_118,0);
    plVar6 = (longlong *)FUN_14479d2ce(lVar10);
    lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    iVar5 = *(int *)(param_1 + 0x90);
    local_148 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x640);
    *local_148 = &PTR_LAB_14af089f0;
    *(int *)(local_148 + 1) = iVar5 + -1;
    *(undefined4 *)((longlong)local_148 + 0xc) = uVar4;
    local_148[4] = local_108;
    *(undefined4 *)(local_148 + 2) = (undefined4)local_118;
    *(undefined4 *)((longlong)local_148 + 0x14) = local_118._4_4_;
    *(undefined4 *)(local_148 + 3) = uStack_110;
    *(undefined4 *)((longlong)local_148 + 0x1c) = uStack_10c;
    *(undefined1 *)(local_148 + 5) = 1;
    *(undefined4 *)((longlong)local_148 + 0x2c) = uVar1;
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,lVar11,&local_148,&DAT_14cb4cc60)
    ;
    plVar6 = (longlong *)FUN_14479d2ce(lVar10);
    lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
    FUN_1447f69b6(param_1 + 0x20);
    FUN_1484f3cf6(lVar11);
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x5c0);
    if (*(char *)(param_1 + 0x550) != '\x01') {
      local_b8[0] = 0;
      local_c8[0] = lVar10;
      if (lVar10 != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x5e0);
        if (*(undefined8 **)(param_1 + 0x5d0) != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)(param_1 + 0x5d0);
        }
        (**(code **)*puVar8)(puVar8,local_b8);
      }
      local_178 = *param_2;
      uStack_170 = param_2[1];
      local_168 = param_2[2];
      uStack_160 = *(undefined4 *)(param_2 + 3);
      uStack_15c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_158 = *(undefined4 *)(param_2 + 4);
      uStack_154 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_150 = *(undefined4 *)(param_2 + 5);
      uStack_14c = *(undefined4 *)((longlong)param_2 + 0x2c);
      cVar3 = FUN_146c84814(param_1 + 0x3f8,&local_178,&local_118,local_c8);
      if (cVar3 != '\0') {
        plVar6 = (longlong *)FUN_14479d2ce(param_1 + -8);
        lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))(lVar10 + 0x28,&DAT_14cb4cc90);
        FUN_1484f570a(lVar11,(undefined4)local_118,*(undefined1 *)(param_1 + 0x548));
        plVar6 = (longlong *)FUN_14479d2ce(param_1 + -8);
        lVar11 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
      }
      goto LAB_1484f51f3;
    }
    local_78[0] = 0;
    local_88[0] = lVar10;
    if (lVar10 != 0) {
      puVar8 = (undefined8 *)(param_1 + 0x5e0);
      if (*(undefined8 **)(param_1 + 0x5d0) != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(param_1 + 0x5d0);
      }
      (**(code **)*puVar8)(puVar8,local_78);
    }
    local_178 = *param_2;
    uStack_170 = param_2[1];
    local_168 = param_2[2];
    uStack_160 = *(undefined4 *)(param_2 + 3);
    uStack_15c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_158 = *(undefined4 *)(param_2 + 4);
    uStack_154 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_150 = *(undefined4 *)(param_2 + 5);
    uStack_14c = *(undefined4 *)((longlong)param_2 + 0x2c);
    cVar3 = FUN_146c84bb4(param_1 + 0x3f8,&local_178,&local_118,local_88);
    if (cVar3 == '\0') {
      if ((*(int *)(param_1 + 0x610) != 1) || (*(char *)(param_1 + 0xe8) != '\0'))
      goto LAB_1484f51f3;
      if ((**(int **)(param_1 + 0x608) != **(int **)(param_1 + 0x88)) &&
         (**(int **)(param_1 + 0x608) != (*(int **)(param_1 + 0x88))[*(int *)(param_1 + 0x90) + -1])
         ) goto LAB_1484f51f3;
      lVar10 = param_1 + -8;
      plVar6 = (longlong *)FUN_14479d2ce(lVar10);
      lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&DAT_14cb4cc60);
      local_128 = param_2[5];
      local_138 = param_2[3];
      uStack_130 = param_2[4];
      local_188 = param_2[2];
      local_198 = *(undefined4 *)param_2;
      uStack_194 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_190 = *(undefined4 *)(param_2 + 1);
      uStack_18c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_1b8 = &local_178;
      FUN_14848488c(param_1 + 0x510,&local_198,&local_138,2);
      if (*(char *)(param_1 + 0xf5) != *(char *)(param_1 + 0x549)) {
        FUN_148555064(param_1 + 0x100,&local_178);
        if (*(char *)(param_1 + 0x1e8) == '\x01') {
          local_168 = *(undefined8 *)(param_1 + 0x2a8);
          local_178 = *(undefined8 *)(param_1 + 0x298);
          uStack_170 = *(undefined8 *)(param_1 + 0x2a0);
          FUN_145b25b1e(param_1 + 0x100);
        }
      }
      if (**(int **)(param_1 + 0x608) == **(int **)(param_1 + 0x88)) {
        uVar4 = FUN_1484f3e04(lVar11,0,&local_178,0);
        plVar6 = (longlong *)FUN_14479d2ce(lVar10);
        lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x640);
        *puVar8 = &PTR_LAB_14af089f0;
        *(undefined4 *)(puVar8 + 1) = 0;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
        puVar8[4] = local_168;
        *(undefined4 *)(puVar8 + 2) = (undefined4)local_178;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_178._4_4_;
        *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_170;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_170._4_4_;
        *(undefined1 *)(puVar8 + 5) = 1;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar1;
        ppuVar12 = &local_1a0;
      }
      else {
        uVar4 = FUN_1484f3e04(lVar11,*(undefined4 *)(param_1 + 0x90),&local_178,0);
        plVar6 = (longlong *)FUN_14479d2ce(lVar10);
        lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        iVar5 = *(int *)(param_1 + 0x90);
        puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x640);
        *puVar8 = &PTR_LAB_14af089f0;
        *(int *)(puVar8 + 1) = iVar5 + -1;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
        puVar8[4] = local_168;
        *(undefined4 *)(puVar8 + 2) = (undefined4)local_178;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_178._4_4_;
        *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_170;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_170._4_4_;
        *(undefined1 *)(puVar8 + 5) = 1;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar1;
        ppuVar12 = &local_1a8;
      }
      *ppuVar12 = puVar8;
      lVar10 = *(longlong *)(lVar7 + 0x28);
    }
    else {
      plVar6 = (longlong *)FUN_14479d2ce(param_1 + -8);
      lVar10 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))(lVar10 + 0x28,&DAT_14cb4cc60);
      iVar5 = FUN_1484f47fc(param_1 + 0x50,(undefined4)local_118);
      uVar4 = FUN_1484f3e04(lVar11,iVar5 + 1,&local_f8,0);
      plVar6 = (longlong *)FUN_14479d2ce(param_1 + -8);
      lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
      local_180 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x640);
      *local_180 = &PTR_LAB_14af089f0;
      *(int *)(local_180 + 1) = iVar5 + 1;
      *(undefined4 *)((longlong)local_180 + 0xc) = uVar4;
      local_180[4] = local_e8;
      *(undefined4 *)(local_180 + 2) = local_f8;
      *(undefined4 *)((longlong)local_180 + 0x14) = uStack_f4;
      *(undefined4 *)(local_180 + 3) = uStack_f0;
      *(undefined4 *)((longlong)local_180 + 0x1c) = uStack_ec;
      *(undefined1 *)(local_180 + 5) = 1;
      *(undefined4 *)((longlong)local_180 + 0x2c) = uVar1;
      ppuVar12 = &local_180;
      lVar10 = *(longlong *)(lVar7 + 0x28);
    }
    (**(code **)(lVar10 + 0x20))(lVar7 + 0x28,lVar11,ppuVar12,&DAT_14cb4cc60);
    FUN_1484f570a(lVar11,uVar4,0);
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + -8);
    lVar11 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
    param_1 = param_1 + 0x20;
LAB_1484f54ab:
    FUN_1447f69b6(param_1);
  }
LAB_1484f51f3:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f570a FUN_1484f570a body=684 status=ok
// SIG undefined FUN_1484f570a(void)

void FUN_1484f570a(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [43];
  char local_6d;
  uint local_6c;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == '\0') && (iVar1 = *(int *)(param_1 + 0x640), 0 < (longlong)iVar1)) {
    local_68 = param_1 + 0x638;
    lVar8 = *(longlong *)(param_1 + 0x638);
    lVar11 = 0;
    local_6d = param_3;
    local_6c = param_2;
    do {
      uVar2 = *(uint *)(lVar8 + lVar11);
      if ((-1 < (int)uVar2) &&
         (lVar7 = *(longlong *)(param_1 + 0x4f0), (int)uVar2 < *(int *)(lVar7 + 0x6c0))) {
        lVar5 = lVar7 + 0x6a8;
        if (*(longlong *)(lVar7 + 0x6b8) != 0) {
          lVar5 = *(longlong *)(lVar7 + 0x6b8);
        }
        if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
          *(undefined4 *)(*(longlong *)(lVar7 + 0x698) + 0x18 + (ulonglong)uVar2 * 0x28) =
               *(undefined4 *)(param_1 + 0x51c);
          FUN_1448215fa();
          plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
          lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
          local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar3 = *(undefined4 *)(param_1 + 0x670);
          *local_50 = &PTR_LAB_14af08950;
          *(uint *)(local_50 + 1) = uVar2;
          *(undefined1 *)((longlong)local_50 + 0xc) = 0;
          *(undefined4 *)(local_50 + 2) = uVar3;
          (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))
                    (lVar7 + 0x28,param_1,&local_50,&DAT_14cb4cc80);
        }
      }
      param_2 = local_6c;
      param_3 = local_6d;
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar1 * 4 != lVar11);
    *(undefined4 *)(param_1 + 0x640) = 0;
    if (*(int *)(param_1 + 0x644) != 0) {
      FUN_14481578e(local_68,0);
    }
  }
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) goto LAB_1484f5987;
  lVar8 = param_1 + 0x90;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xa0);
  }
  if ((*(uint *)(lVar8 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0)
  goto LAB_1484f5987;
  if (param_3 == '\0') {
LAB_1484f591c:
    FUN_1484f5a8a(param_1,param_2);
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    lVar11 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    local_60 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x670);
    *local_60 = &PTR_LAB_14af08950;
    *(uint *)(local_60 + 1) = param_2;
    *(undefined1 *)((longlong)local_60 + 0xc) = 1;
    *(undefined4 *)(local_60 + 2) = uVar3;
    ppuVar9 = &local_60;
    lVar8 = *(longlong *)(lVar11 + 0x28);
    puVar10 = &DAT_14cb4cc90;
  }
  else {
    cVar4 = FUN_1484f59b8(param_1,param_2);
    if (cVar4 == '\0') goto LAB_1484f591c;
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    lVar11 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    local_58 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x670);
    *local_58 = &PTR_LAB_14af08950;
    *(uint *)(local_58 + 1) = param_2;
    *(undefined1 *)((longlong)local_58 + 0xc) = 0;
    *(undefined4 *)(local_58 + 2) = uVar3;
    ppuVar9 = &local_58;
    lVar8 = *(longlong *)(lVar11 + 0x28);
    puVar10 = &DAT_14cb4cc80;
  }
  (**(code **)(lVar8 + 0x20))(lVar11 + 0x28,param_1,ppuVar9,puVar10);
LAB_1484f5987:
  FUN_1484f4aac(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f59b8 FUN_1484f59b8 body=210 status=ok
// SIG undefined FUN_1484f59b8(void)

undefined8 FUN_1484f59b8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x640);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x638);
    iVar3 = 1;
    lVar5 = 0;
    lVar4 = 0;
    do {
      if (*(int *)(lVar1 + lVar5) == param_2) {
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar2 - iVar3 != 0) {
          memmove((void *)(lVar1 + (lVar4 >> 0x20) * 4),(void *)(lVar1 + (lVar4 >> 0x20) * 4 + 4),
                  (longlong)(iVar2 - iVar3) << 2);
          iVar2 = *(int *)(param_1 + 0x640);
        }
        *(int *)(param_1 + 0x640) = iVar2 + -1;
        FUN_14479f406(param_1 + 0x638);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x698) + 0x18 + (longlong)param_2 * 0x28) =
             *(undefined4 *)(param_1 + 0x51c);
        FUN_1448215fa();
        FUN_1484f3cf6(param_1);
        return 1;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar2 << 2 != lVar5);
  }
  return 0;
}



// FUNCTION 1484f5a8a FUN_1484f5a8a body=113 status=ok
// SIG undefined FUN_1484f5a8a(void)

void FUN_1484f5a8a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x640);
  *(uint *)(param_1 + 0x640) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x644) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x638,iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x638) + (longlong)iVar1 * 4) = param_2;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x698) + 0x18 + (longlong)param_2 * 0x28) =
       *(undefined4 *)(param_1 + 0x534);
  FUN_1448215fa();
  FUN_1484f3cf6(param_1);
  return;
}



// FUNCTION 1484f5afc FUN_1484f5afc body=7 status=ok
// SIG undefined FUN_1484f5afc(void)

void FUN_1484f5afc(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x125) = param_2;
  return;
}



// FUNCTION 1484f5b04 FUN_1484f5b04 body=36 status=ok
// SIG undefined FUN_1484f5b04(void)

void FUN_1484f5b04(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_148550e22(param_1 + 0x130,param_3,param_2 + *(int *)(param_1 + 0x41c),
                *(undefined4 *)(param_1 + 0x420));
  return;
}



// FUNCTION 1484f5b28 FUN_1484f5b28 body=18 status=ok
// SIG undefined FUN_1484f5b28(void)

void FUN_1484f5b28(longlong param_1,int param_2)

{
  FUN_148550ed2(param_1 + 0x130,param_2 + *(int *)(param_1 + 0x41c));
  return;
}



// FUNCTION 1484f5b3a FUN_1484f5b3a body=85 status=ok
// SIG undefined FUN_1484f5b3a(void)

undefined1 * FUN_1484f5b3a(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_1484f4bf8(param_1 + -0x38,param_3,param_2);
  return param_2;
}



// FUNCTION 1484f5b9a FUN_1484f5b9a body=1237 status=ok
// SIG undefined FUN_1484f5b9a(void)

ulonglong FUN_1484f5b9a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char cVar6;
  byte bVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int local_108 [8];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong local_b8 [2];
  undefined8 local_a8 [6];
  longlong local_78 [2];
  undefined8 local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1 + -0x38;
  bVar7 = *(byte *)(param_1 + 0xe1);
  if ((bVar7 == 0) && (*(char *)(param_1 + 0x548) == '\x01')) {
    local_78[0] = *(longlong *)(param_1 + 0x5b8);
    local_68[0] = 0;
    if (local_78[0] != 0) {
      puVar9 = (undefined8 *)(param_1 + 0x5d8);
      if (*(undefined8 **)(param_1 + 0x5c8) != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)(param_1 + 0x5c8);
      }
      (**(code **)*puVar9)(puVar9,local_68);
    }
    local_188 = *param_2;
    uStack_180 = (undefined4 *)param_2[1];
    local_178 = param_2[2];
    uStack_170 = *(undefined4 *)(param_2 + 3);
    uStack_16c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_168 = *(undefined4 *)(param_2 + 4);
    uStack_164 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_160 = param_2[5];
    cVar6 = FUN_146c84bb4(param_1 + 0x3f0,&local_188,local_108,local_78);
    if (cVar6 == '\0') {
      bVar7 = *(byte *)(param_1 + 0xe1);
      goto LAB_1484f5c6a;
    }
    FUN_1484f3d6e(lVar1);
    puVar9 = *(undefined8 **)(param_1 + 0x4ec);
    local_188 = CONCAT44(uStack_e4,local_e8);
    uStack_180 = (undefined4 *)CONCAT44(uStack_dc,uStack_e0);
    local_178 = local_d8;
    uVar11 = *(undefined4 *)(param_1 + 0x4f4);
    lVar1 = *(longlong *)(param_1 + 0x4c8);
    FUN_148511d92(lVar1 + 0x698,&local_128,0);
    puVar5 = (undefined4 *)CONCAT44(uStack_11c,uStack_120);
    *(undefined8 *)(puVar5 + 4) = local_178;
    *puVar5 = (undefined4)local_188;
    puVar5[1] = local_188._4_4_;
    puVar5[2] = (undefined4)uStack_180;
    puVar5[3] = uStack_180._4_4_;
    puVar5[6] = uVar11;
    *(undefined8 **)(puVar5 + 7) = puVar9;
    FUN_1448215fa(lVar1);
    *(undefined1 *)(lVar1 + 0x690) = 1;
LAB_1484f5fbf:
    uVar10 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  else {
LAB_1484f5c6a:
    if ((bVar7 & 1) == 0) {
      if (*(char *)(param_1 + 0x548) == '\x01') {
        if (*(int *)(param_1 + 0x608) == 1) {
          if ((**(int **)(param_1 + 0x600) == **(int **)(param_1 + 0x80)) ||
             (**(int **)(param_1 + 0x600) ==
              (*(int **)(param_1 + 0x80))[*(int *)(param_1 + 0x88) + -1])) goto LAB_1484f5cb0;
        }
      }
      else {
        local_b8[0] = *(longlong *)(param_1 + 0x5b8);
        local_a8[0] = 0;
        if (local_b8[0] != 0) {
          puVar9 = (undefined8 *)(param_1 + 0x5d8);
          if (*(undefined8 **)(param_1 + 0x5c8) != (undefined8 *)0x0) {
            puVar9 = *(undefined8 **)(param_1 + 0x5c8);
          }
          (**(code **)*puVar9)(puVar9,local_a8);
        }
        local_188 = *param_2;
        uStack_180 = (undefined4 *)param_2[1];
        local_178 = param_2[2];
        uStack_170 = *(undefined4 *)(param_2 + 3);
        uStack_16c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_168 = *(undefined4 *)(param_2 + 4);
        uStack_164 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_160 = param_2[5];
        cVar6 = FUN_146c84814(param_1 + 0x3f0,&local_188,local_108,local_b8);
        if (cVar6 != '\0') {
          uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          if (local_108[0] != *(int *)(param_1 + 0x5f8)) {
            FUN_1484f3d6e(lVar1);
            *(int *)(param_1 + 0x5f8) = local_108[0];
            *(undefined4 *)(param_1 + 0x5fc) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x698) + 0x18 +
                  (longlong)local_108[0] * 0x28);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x698) + 0x18 +
             (longlong)local_108[0] * 0x28) = *(undefined4 *)(param_1 + 0x4f8);
            FUN_1448215fa();
          }
          goto LAB_1484f5f18;
        }
      }
    }
    else {
LAB_1484f5cb0:
      local_178 = param_2[5];
      local_188 = param_2[3];
      uStack_180 = (undefined4 *)param_2[4];
      local_138 = param_2[2];
      local_148 = *(undefined4 *)param_2;
      uStack_144 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_140 = *(undefined4 *)(param_2 + 1);
      uStack_13c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_198 = &local_128;
      cVar6 = FUN_14848488c(param_1 + 0x508,&local_148,&local_188,2);
      if (cVar6 != '\0') {
        uVar11 = *(undefined4 *)(param_1 + 0x4f4);
        if ((*(char *)(param_1 + 0xe1) != '\0') ||
           (*(char *)(param_1 + 0xed) != *(char *)(param_1 + 0x541))) {
          FUN_148555064(param_1 + 0xf8,&local_128);
          if (*(char *)(param_1 + 0x1e0) == '\x01') {
            if (((*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0xe4)) ||
                (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x3d8))) &&
               ((*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0xe8) ||
                (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x3dc))))) {
              if (*(char *)(param_1 + 0xed) == *(char *)(param_1 + 0x541)) {
                FUN_145b25b1e(param_1 + 0xf8);
                goto LAB_1484f5d84;
              }
            }
            else {
              uVar11 = *(undefined4 *)(param_1 + 0x504);
            }
            local_118 = *(undefined8 *)(param_1 + 0x2a0);
            local_128 = *(undefined4 *)(param_1 + 0x290);
            uStack_124 = *(undefined4 *)(param_1 + 0x294);
            uStack_120 = *(undefined4 *)(param_1 + 0x298);
            uStack_11c = *(undefined4 *)(param_1 + 0x29c);
          }
        }
LAB_1484f5d84:
        FUN_1484f3d6e(lVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x4ec);
        local_148 = local_128;
        uStack_144 = uStack_124;
        uStack_140 = uStack_120;
        uStack_13c = uStack_11c;
        local_138 = local_118;
        uVar3 = *(undefined4 *)(param_1 + 0x4f4);
        lVar1 = *(longlong *)(param_1 + 0x4c8);
        puVar9 = &local_188;
        FUN_148511d92(lVar1 + 0x698,puVar9,0);
        *(undefined8 *)(uStack_180 + 4) = local_138;
        *uStack_180 = local_148;
        uStack_180[1] = uStack_144;
        uStack_180[2] = uStack_140;
        uStack_180[3] = uStack_13c;
        uStack_180[6] = uVar3;
        *(undefined8 *)(uStack_180 + 7) = uVar4;
        FUN_1448215fa(lVar1);
        *(undefined1 *)(lVar1 + 0x690) = 1;
        if (0 < (longlong)*(int *)(param_1 + 0x88)) {
          if (*(char *)(param_1 + 0xe1) == '\x01') {
            piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + (longlong)*(int *)(param_1 + 0x88) * 4
                            + -4);
          }
          else {
            piVar8 = *(int **)(param_1 + 0x600);
          }
          local_150 = *(undefined4 *)(param_1 + 0x4f0);
          local_154 = *(undefined4 *)(param_1 + 0x4e8);
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)*piVar8 * 0x18);
          local_188 = *puVar2;
          uStack_180 = (undefined4 *)puVar2[1];
          local_178 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0x48) + 0x10 + (longlong)*piVar8 * 0x18);
          uStack_170 = local_128;
          uStack_16c = uStack_124;
          local_168 = uStack_120;
          uStack_164 = uStack_11c;
          uStack_160 = local_118;
          local_158 = uVar11;
          FUN_1484d0892(*(undefined8 *)(param_1 + 0x4d0),0);
        }
        goto LAB_1484f5fbf;
      }
    }
    uVar10 = 0;
  }
LAB_1484f5f18:
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f6070 FUN_1484f6070 body=37 status=ok
// SIG undefined FUN_1484f6070(void)

void FUN_1484f6070(longlong param_1)

{
  FUN_1484f3d6e(param_1 + -0x38);
  FUN_145b25b1e(param_1 + 0xf8);
  return;
}



// FUNCTION 1484f6146 FUN_1484f6146 body=720 status=ok
// SIG undefined FUN_1484f6146(void)

void FUN_1484f6146(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  void *_Src;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  void *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x640) != 0) {
    lVar9 = param_1 + 0x28;
    plVar6 = (longlong *)FUN_14479d2ce(lVar9);
    lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&DAT_14cb4cc70);
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_1 + 0x640);
    lVar7 = (longlong)local_50;
    _Src = *(void **)(param_1 + 0x638);
    if (lVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_144a06ca8(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar7 << 2);
    }
    FUN_1484f570a(param_1,0xffffffff,0);
    if (*(char *)(param_1 + 0x124) == '\x01') {
      if (*(char *)(param_1 + 0x118) == '\x01') {
        iVar2 = *(int *)(param_1 + 0x11c);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x120);
      }
      if (*(int *)(param_1 + 0xc0) - local_50 < iVar2) {
        plVar6 = (longlong *)FUN_14479d2ce(lVar9);
        lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        local_60 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar4 = *(undefined4 *)(param_1 + 0x670);
        uVar3 = *(undefined1 *)(param_1 + 0x118);
        *local_60 = &PTR_LAB_14af08a40;
        *(undefined1 *)(local_60 + 1) = 0;
        *(undefined1 *)((longlong)local_60 + 9) = uVar3;
        *(undefined4 *)((longlong)local_60 + 0xc) = uVar4;
        (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))
                  (lVar7 + 0x28,param_1,&local_60,&DAT_14cb4ccb0);
        FUN_1484f464e(param_1,1);
        FUN_1447f69b6(param_1 + 0x68);
      }
    }
    if (local_50 != 0) {
      local_90 = local_58;
      lVar7 = (longlong)local_50;
      local_98 = param_1 + 0x80;
      lVar10 = 0;
      do {
        iVar2 = *(int *)((longlong)local_90 + lVar10);
        plVar6 = (longlong *)FUN_14479d2ce(lVar9);
        lVar8 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
        local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + (longlong)iVar2 * 0x18);
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 0x18);
        local_88 = *puVar1;
        uStack_84 = puVar1[1];
        uStack_80 = puVar1[2];
        uStack_7c = puVar1[3];
        uVar5 = FUN_1484f47fc(local_98,iVar2);
        local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        uVar4 = *(undefined4 *)(param_1 + 0x670);
        *local_68 = &PTR_LAB_14af089f0;
        *(undefined4 *)(local_68 + 1) = uVar5;
        *(int *)((longlong)local_68 + 0xc) = iVar2;
        local_68[4] = local_78;
        *(undefined4 *)(local_68 + 2) = local_88;
        *(undefined4 *)((longlong)local_68 + 0x14) = uStack_84;
        *(undefined4 *)(local_68 + 3) = uStack_80;
        *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_7c;
        *(undefined1 *)(local_68 + 5) = 0;
        *(undefined4 *)((longlong)local_68 + 0x2c) = uVar4;
        (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
                  (lVar8 + 0x28,param_1,&local_68,&DAT_14cb4cc70);
        FUN_1484f6418(param_1,iVar2);
        lVar10 = lVar10 + 4;
      } while (lVar7 * 4 != lVar10);
    }
    FUN_1447f69b6(param_1 + 0x50);
    plVar6 = (longlong *)FUN_14479d2ce(lVar9);
    lVar9 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484f6418 FUN_1484f6418 body=744 status=ok
// SIG undefined FUN_1484f6418(void)

undefined4 FUN_1484f6418(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar12 = FUN_1484f47fc(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (1 < iVar3) {
    bVar15 = *(byte *)(param_1 + 0x118) ^ 1;
    if ((iVar12 < 1 & bVar15) == 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)((iVar3 + iVar12 + -1) % iVar3) * 4
                      );
      lVar16 = (longlong)iVar4;
      if ((iVar3 + -1 <= iVar12 & bVar15) == 0 && iVar3 != 2) {
        lVar13 = (longlong)
                 *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)((iVar12 + 1) % iVar3) * 4);
        lVar14 = *(longlong *)(param_1 + 0x80);
        local_48 = *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18);
        puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x18);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        lVar5 = *(longlong *)(param_1 + 0x4f8);
        lVar6 = *(longlong *)(lVar5 + 0x698);
        puVar2 = (undefined4 *)(lVar14 + lVar13 * 0x18);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        *(undefined8 *)(lVar6 + 0x28 + lVar16 * 0x40) =
             *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18);
        puVar2 = (undefined4 *)(lVar6 + 0x18 + lVar16 * 0x40);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        FUN_1448215fa(lVar5);
        *(undefined1 *)(lVar5 + 0x690) = 1;
        local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar16 * 0x18);
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar16 * 0x18);
        local_88 = *puVar2;
        uStack_84 = puVar2[1];
        uStack_80 = puVar2[2];
        uStack_7c = puVar2[3];
        FUN_1484f435e(local_68,&local_88,&local_58);
        FUN_146c845f8(param_1 + 0x428,iVar4,local_68);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_146c843d2(param_1 + 0x428,iVar4);
        FUN_1484d0c8c(*(undefined8 *)(param_1 + 0x4f8),iVar4);
      }
    }
  }
  cVar11 = FUN_1484d0cb6(*(undefined8 *)(param_1 + 0x4f8),param_2);
  if (cVar11 != '\0') {
    FUN_146c843d2(param_1 + 0x428,param_2);
    FUN_1484d0c8c(*(undefined8 *)(param_1 + 0x4f8),param_2);
  }
  FUN_146c84220(param_1 + 0x428,param_2);
  lVar16 = *(longlong *)(param_1 + 0x4f0);
  FUN_148511ee0(lVar16 + 0x698,param_2);
  FUN_1448215fa(lVar16);
  *(undefined1 *)(lVar16 + 0x690) = 1;
  FUN_1484f6702(param_1 + 0x80,iVar12);
  lVar16 = param_1 + 0x130;
  FUN_14855373c(lVar16,iVar12);
  if (*(char *)(param_1 + 0x119) == '\x01') {
    if (iVar12 == *(int *)(param_1 + 0xc0)) {
      FUN_148550d76(lVar16,*(undefined4 *)(param_1 + 0x414));
      if (0 < (longlong)*(int *)(param_1 + 0xc0)) {
        lVar14 = (longlong)
                 *(int *)(*(longlong *)(param_1 + 0xb8) + -4 +
                         (longlong)*(int *)(param_1 + 0xc0) * 4);
        local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar14 * 0x18);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar14 * 0x18);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        FUN_148550b26(lVar16,&local_58,*(undefined4 *)(param_1 + 0x414),
                      *(undefined4 *)(param_1 + 0x418));
      }
      FUN_1484f3cf6(param_1);
    }
    if (iVar12 == 0) {
      FUN_148550d76(lVar16,*(undefined4 *)(param_1 + 0x410));
      if (0 < *(int *)(param_1 + 0xc0)) {
        local_48 = *(undefined8 *)
                    (*(longlong *)(param_1 + 0x80) + 0x10 +
                    (longlong)**(int **)(param_1 + 0xb8) * 0x18);
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x80) + (longlong)**(int **)(param_1 + 0xb8) * 0x18);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        FUN_148550b26(lVar16,&local_58,*(undefined4 *)(param_1 + 0x410),
                      *(undefined4 *)(param_1 + 0x418));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484f6702 FUN_1484f6702 body=247 status=ok
// SIG undefined FUN_1484f6702(void)

void FUN_1484f6702(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((int)(param_2 + 1) < *(int *)(param_1 + 0x40)) {
    lVar3 = (longlong)(int)param_2 + 1;
    do {
      if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4);
        lVar4 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar4 = param_1 + 0x80;
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & uVar1) * 4);
        if (iVar5 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x10) == uVar1)
            goto LAB_1484f6733;
            iVar5 = *(int *)(lVar4 + 8);
          } while (iVar5 != -1);
        }
      }
      lVar4 = 0;
LAB_1484f6733:
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  lVar3 = (longlong)(int)param_2;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4);
  FUN_1485176ba(param_1,uVar2);
  iVar5 = *(int *)(param_1 + 0x40);
  if (~param_2 + iVar5 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4),
            (void *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4 + 4),
            (longlong)(int)(~param_2 + iVar5) << 2);
    iVar5 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar5 + -1;
  FUN_14479f406(param_1 + 0x38);
  FUN_14573a2c8(param_1 + 0x48,uVar2);
  return;
}



// FUNCTION 1484f67fa FUN_1484f67fa body=92 status=ok
// SIG undefined FUN_1484f67fa(void)

void FUN_1484f67fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f682d;
  }
  param_2 = 0;
LAB_1484f682d:
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_1484f5a8a(param_2);
  }
  else {
    FUN_1484f59b8(param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_1484f4aac(param_2);
  return;
}



// FUNCTION 1484f6856 FUN_1484f6856 body=92 status=ok
// SIG undefined FUN_1484f6856(void)

void FUN_1484f6856(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f6889;
  }
  param_2 = 0;
LAB_1484f6889:
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_1484f59b8(param_2);
  }
  else {
    FUN_1484f5a8a(param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_1484f4aac(param_2);
  return;
}



// FUNCTION 1484f68b2 FUN_1484f68b2 body=32 status=ok
// SIG undefined FUN_1484f68b2(void)

undefined8 FUN_1484f68b2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCurveControlPointsMechanicSelectionChange");
  return param_2;
}



// FUNCTION 1484f68d2 FUN_1484f68d2 body=110 status=ok
// SIG undefined FUN_1484f68d2(void)

void FUN_1484f68d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ef150();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1484f6905;
  }
  param_2 = 0;
LAB_1484f6905:
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1484f3e04(param_2,*(undefined4 *)(param_1 + 8),param_1 + 0x10);
  }
  else {
    FUN_1484f6418(param_2,*(undefined4 *)(param_1 + 0xc));
  }
  FUN_1447f69b6(param_2 + 0x50);
  return;
}


