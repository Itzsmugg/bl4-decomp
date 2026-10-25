// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147409c0e FUN_147409c0e body=122 status=ok
// SIG undefined FUN_147409c0e(void)

longlong FUN_147409c0e(longlong param_1,longlong param_2)

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
    FUN_147409c88(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147409c88 FUN_147409c88 body=445 status=ok
// SIG undefined FUN_147409c88(void)

longlong * FUN_147409c88(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1414251e6(param_1,(ulonglong)uVar3);
    lVar9 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar9 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar9) < uVar3) {
      FUN_140d69980(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar9 = *param_1;
      lVar5 = *param_2;
      lVar15 = 0;
      uVar14 = 0;
      do {
        plVar10 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar10 = param_2 + 2;
        }
        uVar4 = *(uint *)((longlong)plVar10 + (uVar14 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar9 + lVar15) = *(undefined4 *)(lVar5 + lVar15);
        if ((uVar4 >> ((uint)uVar14 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar9 + 4 + lVar15) = *(undefined4 *)(lVar5 + 4 + lVar15);
        }
        else {
          puVar12 = (undefined8 *)(lVar15 + lVar5 + 0xb8 + -0xb0);
          puVar13 = (undefined8 *)(lVar9 + 0xb8 + lVar15 + -0xb0);
          for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined8 *)(lVar9 + 0x70 + lVar15) = 0;
          *(undefined4 *)(lVar9 + 0x78 + lVar15) = 0;
          puVar12 = (undefined8 *)(lVar9 + 0x50 + lVar15);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined8 *)(lVar9 + 0x7c + lVar15) = 0xffffffff00000080;
          *(undefined4 *)(lVar9 + 0x84 + lVar15) = 0;
          *(undefined8 *)(lVar9 + 0x90 + lVar15) = 0;
          *(undefined4 *)(lVar9 + 0x98 + lVar15) = 0;
          FUN_1404114b2(lVar9 + 0x50 + lVar15,lVar5 + 0x50 + lVar15);
          puVar1 = (undefined4 *)(lVar5 + 0xa0 + lVar15);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(lVar9 + 0xa0 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          *(undefined2 *)(lVar9 + 0xb0 + lVar15) = *(undefined2 *)(lVar5 + 0xb0 + lVar15);
          *(undefined8 *)(lVar9 + 0xb8 + lVar15) = *(undefined8 *)(lVar5 + 0xb8 + lVar15);
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0xc0;
      } while (uVar3 != uVar14);
    }
  }
  return param_1;
}



// FUNCTION 147409e46 FUN_147409e46 body=130 status=ok
// SIG undefined FUN_147409e46(void)

int FUN_147409e46(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14ca80470 != DAT_14ca8049c) {
    puVar2 = &DAT_14ca804a0;
    if (DAT_14ca804a8 != (undefined *)0x0) {
      puVar2 = DAT_14ca804a8;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14ca804b0 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1;
        if ((((*(int *)(DAT_14ca80468 + lVar3 * 0x28) == *param_2) &&
             (*(int *)(DAT_14ca80468 + 4 + lVar3 * 0x28) == param_2[1])) &&
            (*(int *)(DAT_14ca80468 + 8 + lVar3 * 0x28) == param_2[2])) &&
           (*(int *)(DAT_14ca80468 + 0xc + lVar3 * 0x28) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(DAT_14ca80468 + lVar3 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147409ec8 FUN_147409ec8 body=195 status=ok
// SIG undefined FUN_147409ec8(void)

void FUN_147409ec8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1407c869a(*(longlong *)(param_2 + 0x10) + 0x80,&local_48,0);
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar3 = local_48;
  }
  if (*(int *)(*(undefined8 **)(param_2 + 0x10) + 1) != 0) {
    puVar2 = (undefined2 *)**(undefined8 **)(param_2 + 0x10);
  }
  FUN_140002266(&local_30,L"[%s - %s]",puVar2,puVar3);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(*param_1,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147409f8c FUN_147409f8c body=106 status=ok
// SIG undefined FUN_147409f8c(void)

void FUN_147409f8c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xbc + (longlong)param_2 * 0xc0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xb8 + lVar5 * 0xc0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xc0 + 0xb8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xc0 + 0xb8);
  FUN_147409ff6();
  return;
}



// FUNCTION 147409ff6 FUN_147409ff6 body=88 status=ok
// SIG undefined FUN_147409ff6(void)

void FUN_147409ff6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xc0;
  *(undefined4 *)(lVar1 + 0x98 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x90 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1404112b2(lVar1 + lVar2 + 0x50);
  FUN_14740a04e(param_1,param_2);
  return;
}



// FUNCTION 14740a04e FUN_14740a04e body=122 status=ok
// SIG undefined FUN_14740a04e(void)

void FUN_14740a04e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0 + 4) = uVar4;
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



// FUNCTION 14740a0c8 FUN_14740a0c8 body=69 status=ok
// SIG undefined FUN_14740a0c8(void)

void FUN_14740a0c8(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1408374a4(param_1);
    return;
  }
  return;
}



// FUNCTION 14740a10e FUN_14740a10e body=52 status=ok
// SIG undefined FUN_14740a10e(void)

void FUN_14740a10e(longlong *param_1)

{
  FUN_14740a142();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14740a142 FUN_14740a142 body=284 status=ok
// SIG undefined FUN_14740a142(void)

void FUN_14740a142(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14740a260(param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740a260 FUN_14740a260 body=48 status=ok
// SIG undefined FUN_14740a260(void)

void FUN_14740a260(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x208,8);
  }
  return;
}



// FUNCTION 14740a290 FUN_14740a290 body=253 status=ok
// SIG undefined FUN_14740a290(void)

int * FUN_14740a290(longlong *param_1,int *param_2)

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
      FUN_14740a428(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x208);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x208) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x208 + *param_1;
  return param_2;
}



// FUNCTION 14740a38e FUN_14740a38e body=154 status=ok
// SIG undefined FUN_14740a38e(void)

undefined8 FUN_14740a38e(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x208);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x208) == *param_3) {
          memmove(_Dst,param_3,0x200);
          FUN_14740a4c0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x200);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14740a428 FUN_14740a428 body=150 status=ok
// SIG undefined FUN_14740a428(void)

void FUN_14740a428(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x208,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x208)) {
      uVar5 = uVar4 / 0x208 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x208,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14740a4c0 FUN_14740a4c0 body=128 status=ok
// SIG undefined FUN_14740a4c0(void)

void FUN_14740a4c0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x208) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x208) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x208 + 4) = uVar4;
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



// FUNCTION 14740a540 FUN_14740a540 body=436 status=ok
// SIG undefined FUN_14740a540(void)

void FUN_14740a540(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
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
  uVar5 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x208;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x204 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x200 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740a6f6 FUN_14740a6f6 body=191 status=ok
// SIG undefined FUN_14740a6f6(void)

undefined8 FUN_14740a6f6(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xc0);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc0) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x98) = 0;
          if (*(longlong *)((longlong)_Dst + 0x90) != 0) {
            FUN_1400020a8();
          }
          FUN_1404112b2((longlong)_Dst + 0x50);
          memmove(_Dst,param_3,0xb8);
          FUN_14740a04e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14740a7b6 FUN_14740a7b6 body=129 status=ok
// SIG undefined FUN_14740a7b6(void)

longlong FUN_14740a7b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14740a837();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1449809d4(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14740a837 FUN_14740a837 body=699 status=ok
// SIG undefined FUN_14740a837(void)

longlong * FUN_14740a837(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_48._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_4c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_40 = param_2 + 2;
    local_48 = (undefined4 *)&DAT_100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = local_48;
    local_68 = local_40;
    local_60 = local_38;
    uVar5 = local_60;
    local_58 = local_30;
    local_54 = local_2c;
    local_60._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_78 = param_2;
    if (local_60._4_4_ < (int)local_40[3]) {
      iVar7 = local_60._4_4_;
      local_60 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0xc + *local_78);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar7 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  else {
    local_48 = (undefined4 *)((ulonglong)local_48._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_48);
      }
    }
    else {
      local_48 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_1401bc250(param_2,(ulonglong)local_48 & 0xffffffff);
    uVar5 = local_60;
    if (0 < (int)local_48) {
      iVar7 = 0;
      do {
        FUN_144a6ca48(param_2,&local_78);
        local_70[1] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_70,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *local_70 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar7 = iVar7 + 1;
        uVar5 = local_60;
      } while (iVar7 < (int)local_48);
    }
  }
  local_60 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14740aaf4 FUN_14740aaf4 body=46 status=ok
// SIG undefined FUN_14740aaf4(void)

void FUN_14740aaf4(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_14740ab22();
  FUN_14740ac96(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 14740ab22 FUN_14740ab22 body=372 status=ok
// SIG undefined FUN_14740ab22(void)

void FUN_14740ab22(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0xc0);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0xc0 + lVar5 + 0xc0);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0xc0);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0xc0 + lVar5),pvVar10,0xc0);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0xc0 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0xc0 + (longlong)pvVar10),(longlong)iVar6 * 0xc0)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1407da7e2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14740ac96 FUN_14740ac96 body=910 status=ok
// SIG undefined FUN_14740ac96(void)

void FUN_14740ac96(longlong param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  void *_Src;
  void *pvVar8;
  void *_Src_00;
  int iVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_448 [32];
  longlong *local_428;
  int local_41c;
  void *local_418;
  void *local_410;
  longlong local_408;
  longlong local_400;
  undefined4 local_3f8 [188];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (1 < (int)param_2) {
    memset(local_3f8,0,0x2f0);
    local_400 = (ulonglong)param_2 * 0xc0 + param_1 + -0xc0;
    local_408 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_3f8[0] = (int)(longlong)(fVar11 + fVar11);
    plVar6 = &local_408;
    do {
      pvVar4 = (void *)*plVar6;
      pvVar7 = (void *)plVar6[1];
      iVar9 = (int)plVar6[2];
      iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)pvVar4) >> 6);
      _Src = pvVar7;
      _Src_00 = pvVar4;
      pvVar10 = pvVar4;
      local_428 = plVar6;
      if (iVar9 != 0) {
LAB_14740ad79:
        uVar5 = iVar2 * -0x55555555 + 1;
        plVar6 = local_428;
        if (8 < (int)uVar5) {
          pvVar10 = (void *)((ulonglong)(uVar5 >> 1) * 0xc0 + (longlong)_Src_00);
          local_41c = iVar9;
          local_418 = pvVar4;
          local_410 = pvVar7;
          memcpy(local_108,pvVar10,0xc0);
          memcpy(pvVar10,_Src_00,0xc0);
          memcpy(_Src_00,local_108,0xc0);
          pvVar4 = (void *)((longlong)_Src + 0xc0);
          pvVar10 = _Src_00;
          do {
            pvVar7 = (void *)((longlong)pvVar10 + 0xc0);
            pvVar1 = (void *)((longlong)pvVar10 + 0xc0);
            do {
              pvVar10 = pvVar1;
              pvVar3 = pvVar7;
              if (_Src < pvVar10) break;
              pvVar7 = (void *)((longlong)pvVar3 + 0xc0);
              pvVar1 = (void *)((longlong)pvVar10 + 0xc0);
            } while (*(longlong *)((longlong)_Src_00 + 0x28) <=
                     *(longlong *)((longlong)pvVar10 + 0x28));
            pvVar1 = (void *)((longlong)pvVar4 + -0x180);
            do {
              pvVar8 = pvVar4;
              pvVar7 = pvVar1;
              pvVar4 = (void *)((longlong)pvVar8 + -0xc0);
              if (pvVar4 <= _Src_00) break;
              pvVar1 = (void *)((longlong)pvVar7 + -0xc0);
            } while (*(longlong *)((longlong)pvVar8 + -0x98) <=
                     *(longlong *)((longlong)_Src_00 + 0x28));
            if (pvVar4 < pvVar10) goto LAB_14740ae82;
            memcpy(local_108,pvVar10,0xc0);
            memcpy(pvVar10,pvVar4,0xc0);
            memcpy(pvVar4,local_108,0xc0);
          } while( true );
        }
        for (; local_428 = plVar6, pvVar4 = _Src_00, pvVar7 = _Src_00, _Src_00 < _Src;
            _Src = (void *)((longlong)_Src + -0xc0)) {
          while (pvVar10 = pvVar4, pvVar4 = (void *)((longlong)pvVar7 + 0xc0), pvVar4 <= _Src) {
            plVar6 = (longlong *)((longlong)pvVar7 + 0xe8);
            pvVar7 = pvVar4;
            if (*(longlong *)((longlong)pvVar10 + 0x28) <= *plVar6) {
              pvVar4 = pvVar10;
            }
          }
          memcpy(local_108,pvVar10,0xc0);
          memcpy(pvVar10,_Src,0xc0);
          memcpy(_Src,local_108,0xc0);
          plVar6 = local_428;
        }
        goto LAB_14740affb;
      }
LAB_14740b015:
      FUN_14740b025(pvVar10);
      plVar6 = local_428;
LAB_14740affb:
      plVar6 = plVar6 + -3;
    } while (&local_408 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14740ae82:
  memcpy(local_108,_Src_00,0xc0);
  memcpy(_Src_00,pvVar4,0xc0);
  memcpy(pvVar4,local_108,0xc0);
  iVar9 = local_41c + -1;
  pvVar8 = (void *)((longlong)pvVar8 + -0x180);
  if ((longlong)pvVar7 - (longlong)local_418 < (longlong)local_410 - (longlong)pvVar3) {
    plVar6 = local_428;
    if (pvVar10 < _Src) {
      *local_428 = (longlong)pvVar10;
      local_428[1] = (longlong)_Src;
      *(int *)(local_428 + 2) = iVar9;
      plVar6 = local_428 + 3;
    }
    pvVar10 = _Src_00;
    if (pvVar4 <= (void *)((longlong)_Src_00 + 0xc0U)) goto LAB_14740affb;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0xc0U) < pvVar4) {
      *local_428 = (longlong)_Src_00;
      local_428[1] = (longlong)pvVar8;
      *(int *)(local_428 + 2) = iVar9;
      local_428 = local_428 + 3;
    }
    plVar6 = local_428;
    pvVar7 = _Src;
    pvVar8 = _Src;
    _Src_00 = pvVar3;
    if (_Src <= pvVar10) goto LAB_14740affb;
  }
  local_428 = plVar6;
  iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)_Src_00) >> 6);
  _Src = pvVar8;
  pvVar4 = _Src_00;
  _Src_00 = pvVar10;
  if (iVar9 == 0) goto LAB_14740b015;
  goto LAB_14740ad79;
}



// FUNCTION 14740b025 FUN_14740b025 body=661 status=ok
// SIG undefined FUN_14740b025(void)

void FUN_14740b025(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x00014740b076:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x28) <=
            *(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x28))) {
          iVar2 = iVar1;
        }
        if (*(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x28) <
            *(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x28)) {
          pvVar6 = (void *)((longlong)iVar4 * 0xc0 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0xc0 + (longlong)param_1);
          memcpy(local_100,pvVar6,0xc0);
          memcpy(pvVar6,pvVar5,0xc0);
          memcpy(pvVar5,local_100,0xc0);
          iVar4 = iVar2;
          goto joined_r0x00014740b076;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0xc0 + (longlong)param_1);
      memcpy(local_100,param_1,0xc0);
      memcpy(param_1,pvVar5,0xc0);
      memcpy(pvVar5,local_100,0xc0);
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
               (*(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x28) <=
                *(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x28))) {
              iVar1 = iVar4;
            }
            if (*(longlong *)((longlong)param_1 + (longlong)iVar3 * 0xc0 + 0x28) <=
                *(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x28)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0xc0 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0xc0 + (longlong)param_1);
            memcpy(local_100,pvVar6,0xc0);
            memcpy(pvVar6,pvVar5,0xc0);
            memcpy(pvVar5,local_100,0xc0);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0xc0 + (longlong)param_1);
          memcpy(local_100,param_1,0xc0);
          memcpy(param_1,pvVar5,0xc0);
          memcpy(pvVar5,local_100,0xc0);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740b2bc FUN_14740b2bc body=46 status=ok
// SIG undefined FUN_14740b2bc(void)

void FUN_14740b2bc(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_14740ab22();
  FUN_14740b2ea(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 14740b2ea FUN_14740b2ea body=910 status=ok
// SIG undefined FUN_14740b2ea(void)

void FUN_14740b2ea(longlong param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  void *_Src;
  void *pvVar8;
  void *_Src_00;
  int iVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_448 [32];
  longlong *local_428;
  int local_41c;
  void *local_418;
  void *local_410;
  longlong local_408;
  longlong local_400;
  undefined4 local_3f8 [188];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (1 < (int)param_2) {
    memset(local_3f8,0,0x2f0);
    local_400 = (ulonglong)param_2 * 0xc0 + param_1 + -0xc0;
    local_408 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_3f8[0] = (int)(longlong)(fVar11 + fVar11);
    plVar6 = &local_408;
    do {
      pvVar4 = (void *)*plVar6;
      pvVar7 = (void *)plVar6[1];
      iVar9 = (int)plVar6[2];
      iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)pvVar4) >> 6);
      _Src = pvVar7;
      _Src_00 = pvVar4;
      pvVar10 = pvVar4;
      local_428 = plVar6;
      if (iVar9 != 0) {
LAB_14740b3cd:
        uVar5 = iVar2 * -0x55555555 + 1;
        plVar6 = local_428;
        if (8 < (int)uVar5) {
          pvVar10 = (void *)((ulonglong)(uVar5 >> 1) * 0xc0 + (longlong)_Src_00);
          local_41c = iVar9;
          local_418 = pvVar4;
          local_410 = pvVar7;
          memcpy(local_108,pvVar10,0xc0);
          memcpy(pvVar10,_Src_00,0xc0);
          memcpy(_Src_00,local_108,0xc0);
          pvVar4 = (void *)((longlong)_Src + 0xc0);
          pvVar10 = _Src_00;
          do {
            pvVar7 = (void *)((longlong)pvVar10 + 0xc0);
            pvVar1 = (void *)((longlong)pvVar10 + 0xc0);
            do {
              pvVar10 = pvVar1;
              pvVar3 = pvVar7;
              if (_Src < pvVar10) break;
              pvVar7 = (void *)((longlong)pvVar3 + 0xc0);
              pvVar1 = (void *)((longlong)pvVar10 + 0xc0);
            } while (*(longlong *)((longlong)_Src_00 + 0x40) <=
                     *(longlong *)((longlong)pvVar10 + 0x40));
            pvVar1 = (void *)((longlong)pvVar4 + -0x180);
            do {
              pvVar8 = pvVar4;
              pvVar7 = pvVar1;
              pvVar4 = (void *)((longlong)pvVar8 + -0xc0);
              if (pvVar4 <= _Src_00) break;
              pvVar1 = (void *)((longlong)pvVar7 + -0xc0);
            } while (*(longlong *)((longlong)pvVar8 + -0x80) <=
                     *(longlong *)((longlong)_Src_00 + 0x40));
            if (pvVar4 < pvVar10) goto LAB_14740b4d6;
            memcpy(local_108,pvVar10,0xc0);
            memcpy(pvVar10,pvVar4,0xc0);
            memcpy(pvVar4,local_108,0xc0);
          } while( true );
        }
        for (; local_428 = plVar6, pvVar4 = _Src_00, pvVar7 = _Src_00, _Src_00 < _Src;
            _Src = (void *)((longlong)_Src + -0xc0)) {
          while (pvVar10 = pvVar4, pvVar4 = (void *)((longlong)pvVar7 + 0xc0), pvVar4 <= _Src) {
            plVar6 = (longlong *)((longlong)pvVar7 + 0x100);
            pvVar7 = pvVar4;
            if (*(longlong *)((longlong)pvVar10 + 0x40) <= *plVar6) {
              pvVar4 = pvVar10;
            }
          }
          memcpy(local_108,pvVar10,0xc0);
          memcpy(pvVar10,_Src,0xc0);
          memcpy(_Src,local_108,0xc0);
          plVar6 = local_428;
        }
        goto LAB_14740b64f;
      }
LAB_14740b669:
      FUN_14740b679(pvVar10);
      plVar6 = local_428;
LAB_14740b64f:
      plVar6 = plVar6 + -3;
    } while (&local_408 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14740b4d6:
  memcpy(local_108,_Src_00,0xc0);
  memcpy(_Src_00,pvVar4,0xc0);
  memcpy(pvVar4,local_108,0xc0);
  iVar9 = local_41c + -1;
  pvVar8 = (void *)((longlong)pvVar8 + -0x180);
  if ((longlong)pvVar7 - (longlong)local_418 < (longlong)local_410 - (longlong)pvVar3) {
    plVar6 = local_428;
    if (pvVar10 < _Src) {
      *local_428 = (longlong)pvVar10;
      local_428[1] = (longlong)_Src;
      *(int *)(local_428 + 2) = iVar9;
      plVar6 = local_428 + 3;
    }
    pvVar10 = _Src_00;
    if (pvVar4 <= (void *)((longlong)_Src_00 + 0xc0U)) goto LAB_14740b64f;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0xc0U) < pvVar4) {
      *local_428 = (longlong)_Src_00;
      local_428[1] = (longlong)pvVar8;
      *(int *)(local_428 + 2) = iVar9;
      local_428 = local_428 + 3;
    }
    plVar6 = local_428;
    pvVar7 = _Src;
    pvVar8 = _Src;
    _Src_00 = pvVar3;
    if (_Src <= pvVar10) goto LAB_14740b64f;
  }
  local_428 = plVar6;
  iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)_Src_00) >> 6);
  _Src = pvVar8;
  pvVar4 = _Src_00;
  _Src_00 = pvVar10;
  if (iVar9 == 0) goto LAB_14740b669;
  goto LAB_14740b3cd;
}



// FUNCTION 14740b679 FUN_14740b679 body=661 status=ok
// SIG undefined FUN_14740b679(void)

void FUN_14740b679(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x00014740b6ca:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x40) <=
            *(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x40))) {
          iVar2 = iVar1;
        }
        if (*(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x40) <
            *(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x40)) {
          pvVar6 = (void *)((longlong)iVar4 * 0xc0 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0xc0 + (longlong)param_1);
          memcpy(local_100,pvVar6,0xc0);
          memcpy(pvVar6,pvVar5,0xc0);
          memcpy(pvVar5,local_100,0xc0);
          iVar4 = iVar2;
          goto joined_r0x00014740b6ca;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0xc0 + (longlong)param_1);
      memcpy(local_100,param_1,0xc0);
      memcpy(param_1,pvVar5,0xc0);
      memcpy(pvVar5,local_100,0xc0);
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
               (*(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xc0 + 0x40) <=
                *(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xc0 + 0x40))) {
              iVar1 = iVar4;
            }
            if (*(longlong *)((longlong)param_1 + (longlong)iVar3 * 0xc0 + 0x40) <=
                *(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xc0 + 0x40)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0xc0 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0xc0 + (longlong)param_1);
            memcpy(local_100,pvVar6,0xc0);
            memcpy(pvVar6,pvVar5,0xc0);
            memcpy(pvVar5,local_100,0xc0);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0xc0 + (longlong)param_1);
          memcpy(local_100,param_1,0xc0);
          memcpy(param_1,pvVar5,0xc0);
          memcpy(pvVar5,local_100,0xc0);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740b914 FUN_14740b914 body=38 status=ok
// SIG undefined FUN_14740b914(void)

undefined8 FUN_14740b914(undefined8 param_1,int param_2)

{
  FUN_14740b93e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14740b93e FUN_14740b93e body=128 status=ok
// SIG undefined FUN_14740b93e(void)

void FUN_14740b93e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a37d458;
  LOCK();
  puVar1 = (uint *)(param_1[7] + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812();
  }
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_140259e20(param_1);
  return;
}



// FUNCTION 14740b9be FUN_14740b9be body=107 status=ok
// SIG undefined FUN_14740b9be(void)

int FUN_14740b9be(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_14740ba2a(lVar1 + (longlong)iVar4 * 0x40,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14740ba2a FUN_14740ba2a body=68 status=ok
// SIG undefined FUN_14740ba2a(void)

undefined8 FUN_14740ba2a(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4))) &&
     (((*(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6) &&
       (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8))) &&
      (*(longlong *)(param_1 + 10) == *(longlong *)(param_2 + 10))))) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 10) >> 8),
                     (char)param_1[2] == (char)param_2[2]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14740ba6e FUN_14740ba6e body=14 status=ok
// SIG undefined FUN_14740ba6e(void)

void FUN_14740ba6e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1431e7648();
  return;
}



// FUNCTION 14740ba7c FUN_14740ba7c body=85 status=ok
// SIG undefined FUN_14740ba7c(void)

void FUN_14740ba7c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1431e7648();
  return;
}



// FUNCTION 14740bad2 FUN_14740bad2 body=830 status=ok
// SIG undefined FUN_14740bad2(void)

void FUN_14740bad2(longlong param_1,uint param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  float fVar19;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [190];
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_388,0,0x2f0);
    local_390 = param_1 + (ulonglong)param_2 * 0x48 + -0x48;
    local_398 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_388[0] = (int)(longlong)(fVar19 + fVar19);
    plVar18 = &local_398;
    do {
      puVar2 = (undefined8 *)*plVar18;
      puVar14 = (undefined8 *)plVar18[1];
      iVar15 = (int)plVar18[2];
      iVar3 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar2) >> 3);
      puVar17 = puVar2;
      puVar10 = puVar14;
      if (iVar15 != 0) {
LAB_14740bba6:
        uVar5 = iVar3 * 0x38e38e39 + 1;
        if (8 < (int)uVar5) {
          puVar7 = puVar2 + (ulonglong)(uVar5 >> 1) * 9;
          puVar11 = local_90;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = puVar2;
          puVar11 = puVar2 + (ulonglong)(uVar5 >> 1) * 9;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = local_90;
          puVar11 = puVar2;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = puVar14 + 9;
          puVar11 = puVar2;
          do {
            puVar9 = puVar11 + 9;
            puVar12 = puVar11 + 9;
            do {
              puVar11 = puVar12;
              puVar6 = puVar9;
              if (puVar14 < puVar11) break;
              bVar1 = (ulonglong)puVar11[6] < (ulonglong)puVar2[6];
              if (puVar11[6] == puVar2[6]) {
                bVar1 = (ulonglong)puVar11[7] < (ulonglong)puVar2[7];
              }
              puVar9 = puVar6 + 9;
              puVar12 = puVar11 + 9;
            } while (!bVar1);
            puVar9 = puVar7 + -0x12;
            do {
              puVar12 = puVar7;
              puVar16 = puVar9;
              puVar7 = puVar12 + -9;
              if (puVar7 <= puVar2) break;
              bVar1 = (ulonglong)puVar2[6] < (ulonglong)puVar12[-3];
              if (puVar2[6] == puVar12[-3]) {
                bVar1 = (ulonglong)puVar2[7] < (ulonglong)puVar12[-2];
              }
              puVar9 = puVar16 + -9;
            } while (!bVar1);
            lVar4 = 9;
            puVar9 = puVar2;
            puVar8 = puVar11;
            puVar13 = local_90;
            if (puVar7 < puVar11) goto code_r0x00014740bcb0;
            for (; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar13 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar9 = puVar7;
            puVar12 = puVar11;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar9 = local_90;
            puVar12 = puVar7;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            }
          } while( true );
        }
        while (puVar10 = puVar2, puVar17 = puVar2, puVar2 < puVar14) {
          while (puVar7 = puVar10, puVar17 = puVar17 + 9, puVar17 <= puVar14) {
            bVar1 = (ulonglong)puVar17[6] < (ulonglong)puVar7[6];
            if (puVar17[6] == puVar7[6]) {
              bVar1 = (ulonglong)puVar17[7] < (ulonglong)puVar7[7];
            }
            puVar10 = puVar17;
            if (!bVar1) {
              puVar10 = puVar7;
            }
          }
          puVar17 = puVar14 + -9;
          puVar10 = puVar7;
          puVar11 = local_90;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar10 = puVar14;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar10 = local_90;
          puVar7 = puVar14;
          for (lVar4 = 9; puVar14 = puVar17, lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        goto LAB_14740bde7;
      }
LAB_14740be01:
      FUN_14740be11(puVar2);
LAB_14740bde7:
      plVar18 = plVar18 + -3;
    } while (&local_398 <= plVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014740bcb0:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar9 = puVar7;
  puVar8 = puVar2;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar9 = local_90;
  puVar8 = puVar7;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar15 = iVar15 + -1;
  puVar12 = puVar12 + -0x12;
  if ((longlong)puVar16 - (longlong)puVar17 < (longlong)puVar10 - (longlong)puVar6) {
    if (puVar11 < puVar14) {
      *plVar18 = (longlong)puVar11;
      plVar18[1] = (longlong)puVar14;
      *(int *)(plVar18 + 2) = iVar15;
      plVar18 = plVar18 + 3;
    }
    puVar6 = puVar2;
    if (puVar7 <= puVar2 + 9) goto LAB_14740bde7;
  }
  else {
    if (puVar2 + 9 < puVar7) {
      *plVar18 = (longlong)puVar2;
      plVar18[1] = (longlong)puVar12;
      *(int *)(plVar18 + 2) = iVar15;
      plVar18 = plVar18 + 3;
    }
    puVar2 = puVar11;
    puVar12 = puVar14;
    puVar16 = puVar14;
    if (puVar14 <= puVar11) goto LAB_14740bde7;
  }
  iVar3 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar6) >> 3);
  puVar14 = puVar12;
  puVar17 = puVar6;
  puVar10 = puVar16;
  if (iVar15 == 0) goto LAB_14740be01;
  goto LAB_14740bba6;
}



// FUNCTION 14740be11 FUN_14740be11 body=692 status=ok
// SIG undefined FUN_14740be11(void)

void FUN_14740be11(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar10 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar10;
joined_r0x00014740be55:
    do {
      iVar6 = iVar1 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar1 * 2 + 2;
        if (iVar7 < (int)param_2) {
          bVar11 = (ulonglong)param_1[(longlong)iVar6 * 9 + 7] <
                   (ulonglong)param_1[(longlong)iVar7 * 9 + 7];
          if (param_1[(longlong)iVar6 * 9 + 6] != param_1[(longlong)iVar7 * 9 + 6]) {
            bVar11 = (ulonglong)param_1[(longlong)iVar6 * 9 + 6] <
                     (ulonglong)param_1[(longlong)iVar7 * 9 + 6];
          }
          if (!bVar11) {
            iVar6 = iVar7;
          }
        }
        lVar2 = (longlong)iVar1;
        lVar8 = (longlong)iVar6;
        bVar11 = (ulonglong)param_1[lVar8 * 9 + 7] < (ulonglong)param_1[lVar2 * 9 + 7];
        if (param_1[lVar8 * 9 + 6] != param_1[lVar2 * 9 + 6]) {
          bVar11 = (ulonglong)param_1[lVar8 * 9 + 6] < (ulonglong)param_1[lVar2 * 9 + 6];
        }
        if (bVar11) {
          puVar4 = param_1 + lVar2 * 9;
          puVar5 = local_78;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = param_1 + lVar8 * 9;
          puVar5 = param_1 + lVar2 * 9;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_78;
          puVar5 = param_1 + lVar8 * 9;
          for (lVar2 = 9; iVar1 = iVar6, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          goto joined_r0x00014740be55;
        }
      }
      bVar11 = iVar10 != 0;
      iVar10 = iVar10 + -1;
      iVar1 = iVar10;
    } while (bVar11);
    if (1 < (int)param_2) {
      puVar4 = param_1;
      puVar5 = local_78;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 9;
      puVar5 = param_1;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = local_78;
      puVar5 = param_1 + ((ulonglong)param_2 - 1) * 9;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (param_2 != 2) {
        uVar9 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar6 = 1;
          iVar10 = 0;
          do {
            lVar2 = (longlong)(iVar1 + 2);
            iVar7 = iVar6;
            if (lVar2 < (longlong)uVar9) {
              bVar11 = (ulonglong)param_1[(longlong)iVar6 * 9 + 7] <
                       (ulonglong)param_1[lVar2 * 9 + 7];
              if (param_1[(longlong)iVar6 * 9 + 6] != param_1[lVar2 * 9 + 6]) {
                bVar11 = (ulonglong)param_1[(longlong)iVar6 * 9 + 6] <
                         (ulonglong)param_1[lVar2 * 9 + 6];
              }
              if (!bVar11) {
                iVar7 = iVar1 + 2;
              }
            }
            lVar2 = (longlong)iVar10;
            lVar8 = (longlong)iVar7;
            bVar11 = (ulonglong)param_1[lVar8 * 9 + 7] < (ulonglong)param_1[lVar2 * 9 + 7];
            if (param_1[lVar8 * 9 + 6] != param_1[lVar2 * 9 + 6]) {
              bVar11 = (ulonglong)param_1[lVar8 * 9 + 6] < (ulonglong)param_1[lVar2 * 9 + 6];
            }
            if (!bVar11) break;
            puVar4 = param_1 + lVar2 * 9;
            puVar5 = local_78;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            puVar4 = param_1 + lVar8 * 9;
            puVar5 = param_1 + lVar2 * 9;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            puVar4 = local_78;
            puVar5 = param_1 + lVar8 * 9;
            for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar1 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar10 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar9);
          puVar4 = param_1;
          puVar5 = local_78;
          for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = param_1 + (uVar9 - 1) * 9;
          puVar5 = param_1;
          for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_78;
          puVar5 = param_1 + (uVar9 - 1) * 9;
          for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          bVar11 = 2 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar11);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740c0c6 FUN_14740c0c6 body=365 status=ok
// SIG undefined FUN_14740c0c6(void)

void FUN_14740c0c6(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = DAT_14ca81240;
  if (DAT_14ca81248 != DAT_14ca81274) {
    puVar5 = &DAT_14ca81278;
    if (DAT_14ca81280 != (undefined *)0x0) {
      puVar5 = DAT_14ca81280;
    }
    iVar1 = *(int *)(puVar5 + ((longlong)
                               (int)((uint)(byte)param_1[2] ^
                                     (int)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20) * 0x17 +
                                     (int)*(undefined8 *)(param_1 + 6) ^
                                     (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) * 0x17 +
                                     (int)*(undefined8 *)(param_1 + 4) ^ param_1[1] ^ *param_1 ^
                                    (int)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20) * 0x17 +
                                    (int)*(undefined8 *)(param_1 + 10) ^
                                    (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) * 0x17 +
                                    (int)*(undefined8 *)(param_1 + 8)) &
                              (longlong)DAT_14ca81288 - 1U) * 4);
    while (lVar2 = (longlong)iVar1, lVar2 != -1) {
      cVar3 = FUN_14740ba2a(lVar2 * 0x40 + lVar7,param_1);
      if (cVar3 != '\0') {
        puVar5 = &DAT_14ca81278;
        if (DAT_14ca81280 != (undefined *)0x0) {
          puVar5 = DAT_14ca81280;
        }
        lVar7 = (longlong)*(int *)(DAT_14ca81240 + 0x3c + (longlong)iVar1 * 0x40);
        iVar6 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar6 == iVar1) {
          puVar4 = (undefined4 *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar6;
            iVar6 = *(int *)(DAT_14ca81240 + 0x38 + lVar7 * 0x40);
          } while (iVar6 != iVar1);
          puVar4 = (undefined4 *)(DAT_14ca81240 + lVar7 * 0x40 + 0x38);
        }
        *puVar4 = *(undefined4 *)(DAT_14ca81240 + (longlong)iVar1 * 0x40 + 0x38);
        FUN_14740c234(&DAT_14ca81240);
        return;
      }
      iVar1 = *(int *)(lVar7 + 0x38 + lVar2 * 0x40);
    }
  }
  return;
}



// FUNCTION 14740c234 FUN_14740c234 body=114 status=ok
// SIG undefined FUN_14740c234(void)

void FUN_14740c234(longlong *param_1,int param_2)

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



// FUNCTION 14740c2a6 FUN_14740c2a6 body=550 status=ok
// SIG undefined FUN_14740c2a6(void)

undefined8 * FUN_14740c2a6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  longlong local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_14a37d370;
  param_1[1] = 0;
  param_1[2] = DAT_14c867d10;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a37d468;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if ((longlong)*(int *)(param_2 + 0x70) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x68);
    lVar3 = (longlong)*(int *)(param_2 + 0x70) << 3;
    lVar2 = 0;
    do {
      local_60 = *(longlong *)(lVar1 + lVar2 * 8) + 0x88;
      local_64 = (undefined4)lVar2;
      local_58 = &local_64;
      FUN_14737ab58(param_1 + 9,local_4c,&local_60,0);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_2 + 0x80) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x78);
    lVar3 = (longlong)*(int *)(param_2 + 0x80) << 3;
    lVar2 = 0;
    do {
      local_60 = *(longlong *)(lVar1 + lVar2 * 8) + 0x88;
      local_64 = (undefined4)lVar2;
      local_58 = &local_64;
      FUN_14737ab58(param_1 + 0x13,local_4c,&local_60,0);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_2 + 0x60) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
    lVar3 = (longlong)*(int *)(param_2 + 0x60) << 3;
    lVar2 = 0;
    do {
      local_60 = *(longlong *)(lVar1 + lVar2 * 8) + 0x88;
      local_64 = (undefined4)lVar2;
      local_58 = &local_64;
      FUN_14737ab58(param_1 + 0x1d,local_4c,&local_60,0);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740c4ce FUN_14740c4ce body=38 status=ok
// SIG undefined FUN_14740c4ce(void)

undefined8 FUN_14740c4ce(undefined8 param_1,int param_2)

{
  FUN_14740c4fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14740c4fa FUN_14740c4fa body=190 status=ok
// SIG undefined FUN_14740c4fa(void)

void FUN_14740c4fa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a37d468;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_146829152(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_146829152(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_146829152(param_1 + 9);
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14740c5b8(param_1);
  return;
}



// FUNCTION 14740c5b8 FUN_14740c5b8 body=84 status=ok
// SIG undefined FUN_14740c5b8(void)

void FUN_14740c5b8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_14a37d478;
  FUN_1431e4a06();
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014740c602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14740c60c FUN_14740c60c body=421 status=ok
// SIG undefined FUN_14740c60c(void)

undefined4 * FUN_14740c60c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14740c7b2(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar18 = *puVar1;
  uVar14 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  uVar9 = puVar1[9];
  uVar10 = puVar1[10];
  uVar11 = puVar1[0xb];
  local_40[8] = puVar1[8];
  local_40[9] = uVar9;
  local_40[10] = uVar10;
  local_40[0xb] = uVar11;
  local_40[4] = uVar5;
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar18;
  local_40[1] = uVar14;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 0xc) = *puVar2;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar18 = (uint)(byte)local_40[2] ^
           (int)((ulonglong)*(undefined8 *)(local_40 + 6) >> 0x20) * 0x17 +
           (int)*(undefined8 *)(local_40 + 6) ^
           (int)((ulonglong)*(undefined8 *)(local_40 + 4) >> 0x20) * 0x17 +
           (int)*(undefined8 *)(local_40 + 4) ^ local_40[1] ^ *local_40 ^
           (int)((ulonglong)*(undefined8 *)(local_40 + 10) >> 0x20) * 0x17 +
           (int)*(undefined8 *)(local_40 + 10) ^
           (int)((ulonglong)*(undefined8 *)(local_40 + 8) >> 0x20) * 0x17 +
           (int)*(undefined8 *)(local_40 + 8);
  cVar13 = FUN_14740c898(param_1,uVar18,local_40,&local_4c);
  uVar12 = local_4c;
  if (cVar13 == '\0') {
    uVar14 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar14) {
      uVar15 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar16 <= *(int *)(param_1 + 0x48))) {
      uVar18 = *(int *)(param_1 + 0x48) - 1U & uVar18;
      local_40[0xf] = uVar18;
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4)
      ;
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar16;
      FUN_14740c908(param_1);
    }
  }
  *param_2 = uVar12;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740c7b2 FUN_14740c7b2 body=229 status=ok
// SIG undefined FUN_14740c7b2(void)

int * FUN_14740c7b2(longlong *param_1,int *param_2)

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



// FUNCTION 14740c898 FUN_14740c898 body=111 status=ok
// SIG undefined FUN_14740c898(void)

undefined8 FUN_14740c898(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_14740b9be(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x30 + lVar16) = *(undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar16);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14740c234(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 14740c908 FUN_14740c908 body=562 status=ok
// SIG undefined FUN_14740c908(void)

void FUN_14740c908(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_60;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar4 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar8 = local_60._4_4_;
      local_60 = uVar4;
      do {
        lVar3 = *local_78;
        lVar10 = (longlong)iVar8 * 0x40;
        uVar4 = *(undefined8 *)(lVar3 + 0x10 + lVar10);
        uVar5 = *(undefined8 *)(lVar3 + 0x18 + lVar10);
        uVar6 = *(undefined8 *)(lVar3 + 0x20 + lVar10);
        uVar7 = *(undefined8 *)(lVar3 + 0x28 + lVar10);
        uVar13 = (longlong)
                 (int)((uint)*(byte *)(lVar3 + 8 + lVar10) ^
                       (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5 ^
                       (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 ^
                       *(uint *)(lVar3 + 4 + lVar10) ^ *(uint *)(lVar3 + lVar10) ^
                      (int)((ulonglong)uVar7 >> 0x20) * 0x17 + (int)uVar7 ^
                      (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6) &
                 (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar12;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8
        ;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740cb40 FUN_14740cb40 body=322 status=ok
// SIG undefined FUN_14740cb40(void)

void FUN_14740cb40(longlong *param_1)

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



// FUNCTION 14740cc84 FUN_14740cc84 body=329 status=ok
// SIG undefined FUN_14740cc84(void)

undefined4 *
FUN_14740cc84(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14740cdce(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  local_48[8] = puVar1[8];
  local_48[9] = uVar11;
  local_48[10] = uVar12;
  local_48[0xb] = uVar13;
  local_48[4] = uVar7;
  local_48[5] = uVar8;
  local_48[6] = uVar9;
  local_48[7] = uVar10;
  *local_48 = uVar3;
  local_48[1] = uVar4;
  local_48[2] = uVar5;
  local_48[3] = uVar6;
  *(undefined8 *)(local_48 + 0xc) = *puVar2;
  local_48[0xe] = 0xffffffff;
  local_54 = local_50[0];
  uVar15 = FUN_14740cf34(local_48);
  local_68 = param_4;
  cVar14 = FUN_14740ceb4(param_1,uVar15,local_48,&local_54);
  uVar3 = local_54;
  if (cVar14 == '\0') {
    uVar16 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar16) {
      uVar17 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      local_48[0xf] = uVar15;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      local_48[0xe] =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_14740d144(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740cdce FUN_14740cdce body=229 status=ok
// SIG undefined FUN_14740cdce(void)

int * FUN_14740cdce(longlong *param_1,int *param_2)

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



// FUNCTION 14740ceb4 FUN_14740ceb4 body=128 status=ok
// SIG undefined FUN_14740ceb4(void)

void FUN_14740ceb4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = FUN_14740d04c();
    if (iVar16 != -1) {
      lVar2 = *param_1;
      lVar17 = (longlong)iVar16 * 0x40;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      uVar11 = param_3[8];
      uVar12 = param_3[9];
      uVar13 = param_3[10];
      uVar14 = param_3[0xb];
      *(undefined8 *)(lVar2 + 0x30 + lVar17) = *(undefined8 *)(param_3 + 0xc);
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar17);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar17);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_14740d0b8(param_1,*param_4);
      *param_4 = iVar16;
      uVar15 = 1;
      goto LAB_14740ced0;
    }
  }
  uVar15 = 0;
LAB_14740ced0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar15;
  }
  return;
}



// FUNCTION 14740cf34 FUN_14740cf34 body=279 status=ok
// SIG undefined FUN_14740cf34(void)

uint FUN_14740cf34(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar2 = ((uint)(param_1[1] >> 0x14) & 0xffff ^ (uint)(param_1[1] >> 4)) * -0x7a143595;
  uVar1 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb ^ (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = ((uint)(param_1[2] >> 0x14) & 0xffff ^ (uint)(param_1[2] >> 4)) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = ((uint)(param_1[3] >> 0x14) & 0xffff ^ (uint)(param_1[3] >> 4)) * -0x7a143595;
  uVar4 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = ((uint)(param_1[4] >> 0x14) & 0xffff ^ (uint)(param_1[4] >> 4)) * -0x7a143595;
  uVar5 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = ((uint)(param_1[5] >> 0x14) & 0xffff ^ (uint)(param_1[5] >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar1 ^ uVar3 ^ uVar4 ^ uVar5 ^ (uVar5 ^ uVar2 ^ uVar3 ^ uVar4 ^ uVar1) >> 0x10 ^ uVar2;
}



// FUNCTION 14740d04c FUN_14740d04c body=107 status=ok
// SIG undefined FUN_14740d04c(void)

int FUN_14740d04c(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_14740d12a(lVar1 + (longlong)iVar4 * 0x40,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14740d0b8 FUN_14740d0b8 body=114 status=ok
// SIG undefined FUN_14740d0b8(void)

void FUN_14740d0b8(longlong *param_1,int param_2)

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



// FUNCTION 14740d12a FUN_14740d12a body=25 status=ok
// SIG undefined FUN_14740d12a(void)

bool FUN_14740d12a(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x30);
  return iVar1 == 0;
}



// FUNCTION 14740d144 FUN_14740d144 body=444 status=ok
// SIG undefined FUN_14740d144(void)

void FUN_14740d144(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_14740cf34(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
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



// FUNCTION 14740d302 FUN_14740d302 body=146 status=ok
// SIG undefined FUN_14740d302(void)

undefined8 FUN_14740d302(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_14740cf34(param_2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)
            *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffffffffffff) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14740d12a(uVar5 * 0x40 + lVar1,param_2);
        if (cVar2 != '\0') {
          FUN_14740d394(param_1,uVar5 & 0xffffffff);
          return 1;
        }
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x38 + uVar5 * 0x40);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  return 0;
}



// FUNCTION 14740d394 FUN_14740d394 body=90 status=ok
// SIG undefined FUN_14740d394(void)

void FUN_14740d394(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_14740d0b8();
  return;
}



// FUNCTION 14740d3ee FUN_14740d3ee body=329 status=ok
// SIG undefined FUN_14740d3ee(void)

undefined4 *
FUN_14740d3ee(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14740d538(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  local_48[8] = puVar1[8];
  local_48[9] = uVar11;
  local_48[10] = uVar12;
  local_48[0xb] = uVar13;
  local_48[4] = uVar7;
  local_48[5] = uVar8;
  local_48[6] = uVar9;
  local_48[7] = uVar10;
  *local_48 = uVar3;
  local_48[1] = uVar4;
  local_48[2] = uVar5;
  local_48[3] = uVar6;
  *(undefined8 *)(local_48 + 0xc) = *puVar2;
  local_48[0xe] = 0xffffffff;
  local_54 = local_50[0];
  uVar15 = FUN_14740cf34(local_48);
  local_68 = param_4;
  cVar14 = FUN_14740d61e(param_1,uVar15,local_48,&local_54);
  uVar3 = local_54;
  if (cVar14 == '\0') {
    uVar16 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar16) {
      uVar17 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      local_48[0xf] = uVar15;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      local_48[0xe] =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_14740d77c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740d538 FUN_14740d538 body=229 status=ok
// SIG undefined FUN_14740d538(void)

int * FUN_14740d538(longlong *param_1,int *param_2)

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



// FUNCTION 14740d61e FUN_14740d61e body=128 status=ok
// SIG undefined FUN_14740d61e(void)

void FUN_14740d61e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = FUN_14740d69e();
    if (iVar16 != -1) {
      lVar2 = *param_1;
      lVar17 = (longlong)iVar16 * 0x40;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      uVar11 = param_3[8];
      uVar12 = param_3[9];
      uVar13 = param_3[10];
      uVar14 = param_3[0xb];
      *(undefined8 *)(lVar2 + 0x30 + lVar17) = *(undefined8 *)(param_3 + 0xc);
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar17);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar17);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_14740d70a(param_1,*param_4);
      *param_4 = iVar16;
      uVar15 = 1;
      goto LAB_14740d63a;
    }
  }
  uVar15 = 0;
LAB_14740d63a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar15;
  }
  return;
}



// FUNCTION 14740d69e FUN_14740d69e body=107 status=ok
// SIG undefined FUN_14740d69e(void)

int FUN_14740d69e(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_14740d12a(lVar1 + (longlong)iVar4 * 0x40,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14740d70a FUN_14740d70a body=114 status=ok
// SIG undefined FUN_14740d70a(void)

void FUN_14740d70a(longlong *param_1,int param_2)

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



// FUNCTION 14740d77c FUN_14740d77c body=444 status=ok
// SIG undefined FUN_14740d77c(void)

void FUN_14740d77c(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_14740cf34(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
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



// FUNCTION 14740d93a FUN_14740d93a body=248 status=ok
// SIG undefined FUN_14740d93a(void)

void FUN_14740d93a(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  
  if (DAT_14ca7ffc8 != DAT_14ca7fff4) {
    iVar3 = FUN_14740cf34();
    lVar7 = DAT_14ca7ffc0;
    puVar5 = &DAT_14ca7fff8;
    if (DAT_14ca80000 != (undefined *)0x0) {
      puVar5 = DAT_14ca80000;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)iVar3 & (longlong)DAT_14ca80008 - 1U) * 4);
    while (lVar1 = (longlong)iVar3, lVar1 != -1) {
      cVar2 = FUN_14740d12a(lVar1 * 0x40 + lVar7,param_1);
      if (cVar2 != '\0') {
        puVar5 = &DAT_14ca7fff8;
        if (DAT_14ca80000 != (undefined *)0x0) {
          puVar5 = DAT_14ca80000;
        }
        lVar7 = (longlong)*(int *)(DAT_14ca7ffc0 + 0x3c + (longlong)iVar3 * 0x40);
        iVar6 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar6 == iVar3) {
          puVar4 = (undefined4 *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar6;
            iVar6 = *(int *)(DAT_14ca7ffc0 + 0x38 + lVar7 * 0x40);
          } while (iVar6 != iVar3);
          puVar4 = (undefined4 *)(DAT_14ca7ffc0 + lVar7 * 0x40 + 0x38);
        }
        *puVar4 = *(undefined4 *)(DAT_14ca7ffc0 + (longlong)iVar3 * 0x40 + 0x38);
        FUN_14740d70a(&DAT_14ca7ffc0);
        return;
      }
      iVar3 = *(int *)(lVar7 + 0x38 + lVar1 * 0x40);
    }
  }
  return;
}



// FUNCTION 14740da34 FUN_14740da34 body=59 status=ok
// SIG undefined FUN_14740da34(void)

void FUN_14740da34(void)

{
  if (1 < DAT_14ca7ffb8) {
    FUN_145d704fe();
    DAT_14ca7ffb8 = 1;
    FUN_14740d144(&DAT_14ca7ff70);
    return;
  }
  FUN_14740da70();
  FUN_145d704fe();
  return;
}



// FUNCTION 14740da70 FUN_14740da70 body=364 status=ok
// SIG undefined FUN_14740da70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14740da70(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca7ffa8;
  if (DAT_14ca7ffb0 != (undefined *)0x0) {
    puVar5 = DAT_14ca7ffb0;
  }
  iVar4 = DAT_14ca7ffb8 + 3;
  if (-1 < DAT_14ca7ffb8) {
    iVar4 = DAT_14ca7ffb8;
  }
  if (DAT_14ca7ff78 - _DAT_14ca7ffa4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca7ff80;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca7ff98 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca7ff98;
    }
    local_78 = &DAT_14ca7ff70;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca7ff80)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar2 * 0x40) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca7ff70 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca7ff80 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca7ffb8) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca7ffb8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740dbde FUN_14740dbde body=59 status=ok
// SIG undefined FUN_14740dbde(void)

void FUN_14740dbde(void)

{
  if (1 < DAT_14ca80008) {
    FUN_145d7059e();
    DAT_14ca80008 = 1;
    FUN_14740d77c(&DAT_14ca7ffc0);
    return;
  }
  FUN_14740dc1a();
  FUN_145d7059e();
  return;
}



// FUNCTION 14740dc1a FUN_14740dc1a body=364 status=ok
// SIG undefined FUN_14740dc1a(void)

void FUN_14740dc1a(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca7fff8;
  if (DAT_14ca80000 != (undefined *)0x0) {
    puVar5 = DAT_14ca80000;
  }
  iVar4 = DAT_14ca80008 + 3;
  if (-1 < DAT_14ca80008) {
    iVar4 = DAT_14ca80008;
  }
  if (DAT_14ca7ffc8 - DAT_14ca7fff4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca7ffd0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca7ffe8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca7ffe8;
    }
    local_78 = &DAT_14ca7ffc0;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca7ffd0)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar2 * 0x40) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca7ffc0 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca7ffd0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca80008) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca80008);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740dd88 FUN_14740dd88 body=128 status=ok
// SIG undefined FUN_14740dd88(void)

void FUN_14740dd88(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca80050;
  if (DAT_14ca80084 != 0) {
    *(int *)(DAT_14ca80050 + (longlong)DAT_14ca80080 * 0x14) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x14) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca80084) {
    iVar4 = DAT_14ca80080;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x14) = iVar4;
  DAT_14ca80084 = DAT_14ca80084 + 1;
  puVar3 = &DAT_14ca80060;
  if (DAT_14ca80070 != (undefined *)0x0) {
    puVar3 = DAT_14ca80070;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca80080 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14740de08 FUN_14740de08 body=366 status=ok
// SIG undefined FUN_14740de08(void)

void FUN_14740de08(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0x60);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0x60 + lVar5 + 0x60);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0x60);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0x60 + lVar5),pvVar10,0x60);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0x60 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0x60 + (longlong)pvVar10),(longlong)iVar6 * 0x60)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1448fc38a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14740df76 FUN_14740df76 body=132 status=ok
// SIG undefined FUN_14740df76(void)

void FUN_14740df76(longlong param_1,int param_2)

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



// FUNCTION 14740dffc FUN_14740dffc body=410 status=ok
// SIG undefined FUN_14740dffc(void)

undefined4 * FUN_14740dffc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140837a60(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  puVar10 = puVar1;
  puVar11 = local_48;
  for (lVar7 = 9; puVar11 = puVar11 + 2, lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  local_48[0x1c] = 0;
  local_48[0x1d] = 0;
  local_48[0x1e] = 0;
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_48[0x16] = 0;
  local_48[0x17] = 0;
  local_48[0x1f] = 0x80;
  local_48[0x20] = 0xffffffff;
  local_48[0x21] = 0;
  local_48[0x24] = 0;
  local_48[0x25] = 0;
  local_48[0x26] = 0;
  FUN_1404114b2(local_48 + 0x14,puVar1 + 9);
  uVar6 = *(uint *)((longlong)puVar1 + 0x9c);
  uVar5 = *(uint *)(puVar1 + 0x14);
  uVar2 = *(uint *)((longlong)puVar1 + 0xa4);
  local_48[0x28] = *(uint *)(puVar1 + 0x13);
  local_48[0x29] = uVar6;
  local_48[0x2a] = uVar5;
  local_48[0x2b] = uVar2;
  *(undefined2 *)(local_48 + 0x2c) = *(undefined2 *)(puVar1 + 0x15);
  local_48[0x2e] = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = *local_48;
  cVar4 = FUN_14740a6f6(param_1,uVar6,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[0x2f] = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0x2e] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1408374a4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740e198 FUN_14740e198 body=128 status=ok
// SIG undefined FUN_14740e198(void)

void FUN_14740e198(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca80558;
  if (DAT_14ca8058c != 0) {
    *(int *)(DAT_14ca80558 + (longlong)DAT_14ca80588 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca8058c) {
    iVar4 = DAT_14ca80588;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14ca8058c = DAT_14ca8058c + 1;
  puVar3 = &DAT_14ca80568;
  if (DAT_14ca80578 != (undefined4 *)0x0) {
    puVar3 = DAT_14ca80578;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca80588 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14740e218 FUN_14740e218 body=300 status=ok
// SIG undefined FUN_14740e218(void)

undefined4 * FUN_14740e218(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14740a290(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_14143db70(local_40 + 2,uVar1);
  local_40[0x80] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14740a38e(param_1,uVar5,local_40,&local_4c);
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
      local_40[0x81] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x80] =
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
      FUN_14740a540(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740e346 FUN_14740e346 body=68 status=ok
// SIG undefined FUN_14740e346(void)

void FUN_14740e346(longlong param_1,uint param_2)

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
  FUN_14610fee8(param_1);
  return;
}



// FUNCTION 14740e38a FUN_14740e38a body=364 status=ok
// SIG undefined FUN_14740e38a(void)

void FUN_14740e38a(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca80590;
  if (DAT_14ca80598 != (undefined *)0x0) {
    puVar5 = DAT_14ca80598;
  }
  iVar4 = DAT_14ca805a0 + 3;
  if (-1 < DAT_14ca805a0) {
    iVar4 = DAT_14ca805a0;
  }
  if (DAT_14ca80560 - DAT_14ca8058c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca80568;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca80580 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca80580;
    }
    local_78 = &DAT_14ca80558;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca80568)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca80558 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca80568 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca805a0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca805a0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740e4f8 FUN_14740e4f8 body=128 status=ok
// SIG undefined FUN_14740e4f8(void)

void FUN_14740e4f8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca80418;
  if (DAT_14ca8044c != 0) {
    *(int *)(DAT_14ca80418 + (longlong)DAT_14ca80448 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca8044c) {
    iVar4 = DAT_14ca80448;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14ca8044c = DAT_14ca8044c + 1;
  puVar3 = &DAT_14ca80428;
  if (DAT_14ca80438 != (undefined4 *)0x0) {
    puVar3 = DAT_14ca80438;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca80448 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14740e578 FUN_14740e578 body=128 status=ok
// SIG undefined FUN_14740e578(void)

void FUN_14740e578(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca80468;
  if (DAT_14ca8049c != 0) {
    *(int *)(DAT_14ca80468 + (longlong)DAT_14ca80498 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca8049c) {
    iVar4 = DAT_14ca80498;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14ca8049c = DAT_14ca8049c + 1;
  puVar3 = &DAT_14ca80478;
  if (DAT_14ca80488 != (undefined *)0x0) {
    puVar3 = DAT_14ca80488;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca80498 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14740e5f8 FUN_14740e5f8 body=252 status=ok
// SIG undefined FUN_14740e5f8(void)

void FUN_14740e5f8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_14ca80470 != DAT_14ca8049c) {
    iVar1 = FUN_1447addd0(param_1,0x10);
    puVar3 = &DAT_14ca804a0;
    if (DAT_14ca804a8 != (undefined *)0x0) {
      puVar3 = DAT_14ca804a8;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)iVar1 & (longlong)DAT_14ca804b0 - 1U) * 4);
    if (iVar1 != -1) {
      do {
        lVar6 = (longlong)iVar1;
        if ((((*(int *)(DAT_14ca80468 + lVar6 * 0x28) == *param_1) &&
             (*(int *)(DAT_14ca80468 + 4 + lVar6 * 0x28) == param_1[1])) &&
            (*(int *)(DAT_14ca80468 + 8 + lVar6 * 0x28) == param_1[2])) &&
           (*(int *)(DAT_14ca80468 + 0xc + lVar6 * 0x28) == param_1[3])) {
          puVar3 = &DAT_14ca804a0;
          if (DAT_14ca804a8 != (undefined *)0x0) {
            puVar3 = DAT_14ca804a8;
          }
          lVar6 = DAT_14ca80468 + (longlong)iVar1 * 0x28;
          lVar5 = (longlong)*(int *)(lVar6 + 0x24);
          iVar4 = *(int *)(puVar3 + lVar5 * 4);
          if (iVar4 == iVar1) {
            puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
          }
          else {
            do {
              lVar5 = (longlong)iVar4;
              iVar4 = *(int *)(DAT_14ca80468 + 0x20 + lVar5 * 0x28);
            } while (iVar4 != iVar1);
            puVar2 = (undefined4 *)(DAT_14ca80468 + lVar5 * 0x28 + 0x20);
          }
          *puVar2 = *(undefined4 *)(lVar6 + 0x20);
          FUN_14740e6f6();
          return;
        }
        iVar1 = *(int *)(DAT_14ca80468 + lVar6 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14740e6f6 FUN_14740e6f6 body=48 status=ok
// SIG undefined FUN_14740e6f6(void)

void FUN_14740e6f6(int param_1)

{
  if (*(longlong *)(DAT_14ca80468 + 0x10 + (longlong)param_1 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14740e578(param_1);
  return;
}



// FUNCTION 14740e726 FUN_14740e726 body=267 status=ok
// SIG undefined FUN_14740e726(void)

void FUN_14740e726(void)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (DAT_14ca80420 != DAT_14ca8044c) {
    puVar3 = DAT_14ca80660;
    if (DAT_14ca80668 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar2 = DAT_14ca80668 + -1;
    if (DAT_14ca80668 == 0) {
      iVar2 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar2,puVar3);
    puVar4 = &DAT_14ca80450;
    if (DAT_14ca80458 != (undefined4 *)0x0) {
      puVar4 = DAT_14ca80458;
    }
    iVar2 = puVar4[(longlong)iVar2 & (longlong)DAT_14ca80460 - 1U];
    if (iVar2 != -1) {
LAB_14740e7b3:
      plVar1 = (longlong *)(DAT_14ca80418 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(DAT_14ca80418 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == DAT_14ca80668) {
        if (1 < DAT_14ca80668) {
          lVar9 = 0;
          do {
            uVar7 = *(ushort *)(*plVar1 + lVar9);
            uVar8 = (ulonglong)uVar7;
            uVar5 = *(ushort *)((longlong)DAT_14ca80660 + lVar9);
            if (uVar7 == uVar5) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar7)) goto LAB_14740e81e;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar6 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_14740e81e;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
        goto LAB_14740e824;
      }
      if (iVar2 + DAT_14ca80668 == 1) goto LAB_14740e824;
      goto LAB_14740e810;
    }
  }
  return;
LAB_14740e81e:
  if (uVar7 == uVar5) {
LAB_14740e824:
    FUN_14740e832();
    return;
  }
LAB_14740e810:
  iVar2 = (int)plVar1[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_14740e7b3;
}



// FUNCTION 14740e832 FUN_14740e832 body=122 status=ok
// SIG undefined FUN_14740e832(void)

void FUN_14740e832(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = (longlong)param_1 * 0x20;
  puVar2 = &DAT_14ca80450;
  if (DAT_14ca80458 != (undefined4 *)0x0) {
    puVar2 = DAT_14ca80458;
  }
  iVar1 = *(int *)(DAT_14ca80418 + 0x1c + lVar3);
  iVar4 = puVar2[iVar1];
  if (iVar4 == param_1) {
    puVar2 = puVar2 + iVar1;
  }
  else {
    do {
      lVar5 = (longlong)iVar4;
      iVar4 = *(int *)(DAT_14ca80418 + 0x18 + lVar5 * 0x20);
    } while (iVar4 != param_1);
    puVar2 = (undefined4 *)(DAT_14ca80418 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(DAT_14ca80418 + lVar3 + 0x18);
  FUN_145d2ccd4(lVar3 + DAT_14ca80418);
  FUN_14740e4f8(param_1);
  return;
}



// FUNCTION 14740e8ac FUN_14740e8ac body=182 status=ok
// SIG undefined FUN_14740e8ac(void)

void FUN_14740e8ac(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca80680;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14ca8068c = DAT_14ca8068c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca80678 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca80678 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca8068c = DAT_14ca8068c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14740e93b;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14ca8068c = DAT_14ca8068c + -1;
LAB_14740e93b:
  FUN_14474d06a(&DAT_14ca80678,0);
  return;
}



// FUNCTION 14740e962 FUN_14740e962 body=162 status=ok
// SIG undefined FUN_14740e962(void)

void FUN_14740e962(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14ca80600;
  if (param_1 <= (int)DAT_14ca80600) {
    if (DAT_14ca80604 == 0) {
      uVar2 = 4;
      if (4 < DAT_14ca80600) {
        uVar2 = DAT_14ca80600;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14ca80600 * 3) >> 3) + (longlong)(int)DAT_14ca80600 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x1f8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1f8)) {
      uVar5 = uVar4 / 0x1f8 & 0xffffffff;
    }
    DAT_14ca80604 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14ca805f8,param_1,uVar5,0x1f8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14740ea06 FUN_14740ea06 body=424 status=ok
// SIG undefined FUN_14740ea06(void)

void FUN_14740ea06(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1407da7e2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140d69980(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0xc0 + lVar2 + -0xbc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x30;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14740ebae FUN_14740ebae body=69 status=ok
// SIG undefined FUN_14740ebae(void)

void FUN_14740ebae(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1402cf4e2(param_1);
    return;
  }
  return;
}



// FUNCTION 14740ebf4 FUN_14740ebf4 body=48 status=ok
// SIG undefined FUN_14740ebf4(void)

void FUN_14740ebf4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14740ec28 FUN_14740ec28 body=46 status=ok
// SIG undefined FUN_14740ec28(void)

void FUN_14740ec28(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_14740ec56();
  FUN_14740edb6(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 14740ec56 FUN_14740ec56 body=352 status=ok
// SIG undefined FUN_14740ec56(void)

void FUN_14740ec56(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar11 = uVar4 - iVar3;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar12 * 0x18);
        if (iVar12 < iVar11) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar12 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar9 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -3;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-2];
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar18 = iVar12;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar5;
      } while (iVar5 != -1);
      iVar12 = (int)param_1[1] - uVar4;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar12 * 0x18);
        iVar10 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14740edb6 FUN_14740edb6 body=831 status=ok
// SIG undefined FUN_14740edb6(void)

void FUN_14740edb6(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_368 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar20 + fVar20);
    plVar13 = &local_368;
    do {
      puVar6 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar6) >> 3);
      puVar17 = puVar14;
      puVar18 = puVar6;
      if (iVar16 != 0) {
LAB_14740ee85:
        uVar9 = iVar7 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = puVar6[uVar10 * 3 + 2];
          uVar2 = puVar6[uVar10 * 3];
          uVar3 = (puVar6 + uVar10 * 3)[1];
          puVar6[uVar10 * 3 + 2] = puVar6[2];
          uVar4 = puVar6[1];
          puVar6[uVar10 * 3] = *puVar6;
          (puVar6 + uVar10 * 3)[1] = uVar4;
          puVar6[2] = uVar1;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar11 = puVar14 + 3;
          puVar8 = puVar6;
          do {
            puVar5 = puVar8 + 3;
            puVar15 = puVar8 + 3;
            do {
              puVar8 = puVar15;
              puVar12 = puVar5;
              if (puVar14 < puVar8) break;
              puVar5 = puVar12 + 3;
              puVar15 = puVar8 + 3;
            } while (*(ulonglong *)(puVar8[1] + 0x10) <= *(ulonglong *)(puVar6[1] + 0x10));
            puVar5 = puVar11 + -6;
            do {
              puVar15 = puVar11;
              puVar19 = puVar5;
              puVar11 = puVar15 + -3;
              if (puVar11 <= puVar6) break;
              puVar5 = puVar19 + -3;
            } while (*(ulonglong *)(puVar6[1] + 0x10) <= *(ulonglong *)(puVar15[-2] + 0x10));
            if (puVar11 < puVar8) goto LAB_14740ef81;
            uVar1 = puVar8[2];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            puVar8[2] = puVar15[-1];
            uVar4 = puVar15[-2];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            puVar15[-1] = uVar1;
            *puVar11 = uVar2;
            puVar15[-2] = uVar3;
          } while( true );
        }
        for (; puVar18 = puVar6, puVar17 = puVar6, puVar6 < puVar14; puVar14 = puVar14 + -3) {
          while (puVar11 = puVar18, puVar17 = puVar17 + 3, puVar17 <= puVar14) {
            puVar18 = puVar17;
            if (*(ulonglong *)(puVar17[1] + 0x10) <= *(ulonglong *)(puVar11[1] + 0x10)) {
              puVar18 = puVar11;
            }
          }
          local_58 = puVar11[2];
          local_68 = *puVar11;
          uStack_60 = puVar11[1];
          uVar2 = local_68;
          uVar3 = uStack_60;
          puVar11[2] = puVar14[2];
          uVar1 = puVar14[1];
          *puVar11 = *puVar14;
          puVar11[1] = uVar1;
          puVar14[2] = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          local_68 = uVar2;
          uStack_60 = uVar3;
        }
        goto LAB_14740f0d4;
      }
LAB_14740f0e9:
      FUN_14740f0f6(puVar6);
LAB_14740f0d4:
      plVar13 = plVar13 + -3;
    } while (&local_368 <= plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14740ef81:
  local_58 = puVar6[2];
  local_68 = *puVar6;
  uStack_60 = puVar6[1];
  uVar2 = local_68;
  uVar3 = uStack_60;
  puVar6[2] = puVar15[-1];
  uVar1 = puVar15[-2];
  *puVar6 = *puVar11;
  puVar6[1] = uVar1;
  puVar15[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_68._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_60._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_68 = uVar2;
  uStack_60 = uVar3;
  if ((longlong)puVar19 - (longlong)puVar18 < (longlong)puVar17 - (longlong)puVar12) {
    if (puVar8 < puVar14) {
      *plVar13 = (longlong)puVar8;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar12 = puVar6;
    if (puVar11 <= puVar6 + 3) goto LAB_14740f0d4;
  }
  else {
    if (puVar6 + 3 < puVar11) {
      *plVar13 = (longlong)puVar6;
      plVar13[1] = (longlong)puVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar6 = puVar8;
    puVar15 = puVar14;
    puVar19 = puVar14;
    if (puVar14 <= puVar8) goto LAB_14740f0d4;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar12) >> 3);
  puVar14 = puVar15;
  puVar17 = puVar19;
  puVar18 = puVar12;
  if (iVar16 == 0) goto LAB_14740f0e9;
  goto LAB_14740ee85;
}



// FUNCTION 14740f0f6 FUN_14740f0f6 body=607 status=ok
// SIG undefined FUN_14740f0f6(void)

void FUN_14740f0f6(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x00014740f12a:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(ulonglong *)(param_1[(longlong)iVar10 * 3 + 1] + 0x10) <=
            *(ulonglong *)(param_1[(longlong)iVar11 * 3 + 1] + 0x10))) {
          iVar10 = iVar11;
        }
        if (*(ulonglong *)(param_1[(longlong)iVar8 * 3 + 1] + 0x10) <
            *(ulonglong *)(param_1[(longlong)iVar10 * 3 + 1] + 0x10)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x00014740f12a;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(ulonglong *)(param_1[(longlong)iVar10 * 3 + 1] + 0x10) <=
                *(ulonglong *)(param_1[(longlong)iVar8 * 3 + 1] + 0x10))) {
              iVar11 = iVar8;
            }
            if (*(ulonglong *)(param_1[(longlong)iVar11 * 3 + 1] + 0x10) <=
                *(ulonglong *)(param_1[(longlong)iVar12 * 3 + 1] + 0x10)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14740f356 FUN_14740f356 body=72 status=ok
// SIG undefined FUN_14740f356(void)

void FUN_14740f356(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)param_1[3]) {
    param_1[3] = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)*param_1) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x10,8);
      *puVar1 = 0;
      puVar1[1] = 0;
      return;
    }
  }
  param_1[2] = *puVar1;
  *puVar1 = 0;
  return;
}



// FUNCTION 14740f39e FUN_14740f39e body=123 status=ok
// SIG undefined FUN_14740f39e(void)

undefined8 * FUN_14740f39e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14740f41a();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14740f41a FUN_14740f41a body=146 status=ok
// SIG undefined FUN_14740f41a(void)

longlong * FUN_14740f41a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14740f4ac FUN_14740f4ac body=154 status=ok
// SIG undefined FUN_14740f4ac(void)

void FUN_14740f4ac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  lVar2 = *(longlong *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x224);
  *(longlong *)(param_1 + 0x218) = lVar1;
  *(longlong *)(param_1 + 0x220) = lVar2;
  if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0x34)) {
    FUN_145711e66(lVar1);
    FUN_145711d52(lVar1);
    lVar2 = *(longlong *)(param_1 + 0x220);
  }
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0x34)) {
    FUN_145711e66(lVar2);
    FUN_145711d52(lVar2);
  }
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    return;
  }
  FUN_145711e66(param_1 + 0x28);
  FUN_145711d52(param_1 + 0x28);
  return;
}



// FUNCTION 14740f546 FUN_14740f546 body=132 status=ok
// SIG undefined FUN_14740f546(void)

void FUN_14740f546(longlong param_1,int param_2)

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



// FUNCTION 14740f5cc FUN_14740f5cc body=116 status=ok
// SIG undefined FUN_14740f5cc(void)

void FUN_14740f5cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 14740f640 FUN_14740f640 body=376 status=ok
// SIG undefined FUN_14740f640(void)

undefined4 *
FUN_14740f640(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14740f7ba(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  FUN_14740f91a(local_48,*param_3);
  local_48[0xb] = *puVar1;
  *(undefined4 *)(local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar8 = (int)((ulonglong)local_48[2] >> 0x20) * 0x17 + (int)local_48[2] ^
          (int)((ulonglong)local_48[1] >> 0x20) * 0x17 + (int)local_48[1] ^
          (int)((ulonglong)*local_48 >> 0x20) * 0x17 + (int)*local_48;
  local_68 = param_4;
  cVar3 = FUN_14740f89c(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
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
      *(uint *)((longlong)local_48 + 100) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14740fa34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14740f7ba FUN_14740f7ba body=226 status=ok
// SIG undefined FUN_14740f7ba(void)

int * FUN_14740f7ba(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 14740f89c FUN_14740f89c body=125 status=ok
// SIG undefined FUN_14740f89c(void)

void FUN_14740f89c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  void *_Dst;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_145711cec();
    if (iVar2 != -1) {
      _Dst = (void *)((longlong)iVar2 * 0x68 + *param_1);
      FUN_145711c9a(_Dst);
      memmove(_Dst,param_3,0x60);
      FUN_14740f5cc(param_1,*param_4);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_14740f8bd;
    }
  }
  uVar1 = 0;
LAB_14740f8bd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14740f91a FUN_14740f91a body=213 status=ok
// SIG undefined FUN_14740f91a(void)

undefined4 * FUN_14740f91a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar3 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar3,(longlong)iVar1 * 2);
  }
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar3 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14740f9f0 FUN_14740f9f0 body=68 status=ok
// SIG undefined FUN_14740f9f0(void)

void FUN_14740f9f0(longlong param_1,uint param_2)

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
  FUN_14740fa34(param_1);
  return;
}



// FUNCTION 14740fa34 FUN_14740fa34 body=505 status=ok
// SIG undefined FUN_14740fa34(void)

void FUN_14740fa34(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar8 = (longlong)iVar6 * 0x68;
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar8);
        uVar5 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
        uVar11 = (longlong)
                 ((int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5 ^
                 (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 ^
                 (int)((ulonglong)*(undefined8 *)(lVar3 + lVar8) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar8)) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 100 + lVar8) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar8) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 14740fc2e FUN_14740fc2e body=197 status=ok
// SIG undefined FUN_14740fc2e(void)

undefined8 FUN_14740fc2e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[2];
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     ((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5 ^
                     (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4 ^
                     (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x68;
        if (((*(longlong *)(*param_1 + (longlong)iVar2 * 0x68) == lVar3) &&
            (*(longlong *)(lVar1 + 8) == lVar4)) && (*(longlong *)(lVar1 + 0x10) == lVar5)) {
          FUN_145711ff2();
          return 1;
        }
        iVar2 = *(int *)(lVar1 + 0x60);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14740fcf4 FUN_14740fcf4 body=147 status=ok
// SIG undefined FUN_14740fcf4(void)

void FUN_14740fcf4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14740fd88 FUN_14740fd88 body=48 status=ok
// SIG undefined FUN_14740fd88(void)

void FUN_14740fd88(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 14740fdbc FUN_14740fdbc body=115 status=ok
// SIG undefined FUN_14740fdbc(void)

void FUN_14740fdbc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x60 + lVar1);
  FUN_145711c9a(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x60),(longlong)iVar3 * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14740fe30 FUN_14740fe30 body=46 status=ok
// SIG undefined FUN_14740fe30(void)

void FUN_14740fe30(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_14740fe5e();
  FUN_14740ffb8(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 14740fe5e FUN_14740fe5e body=346 status=ok
// SIG undefined FUN_14740fe5e(void)

void FUN_14740fe5e(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0x68);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0x68 + lVar5 + 0x68);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0x68);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0x68 + lVar5),pvVar10,0x68);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0x68 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0x68 + (longlong)pvVar10),(longlong)iVar6 * 0x68)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14059f004(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14740ffb8 FUN_14740ffb8 body=759 status=ok
// SIG undefined FUN_14740ffb8(void)

void FUN_14740ffb8(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [190];
  undefined8 local_b0 [13];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (1 < (int)param_2) {
    memset(local_3a8,0,0x2f0);
    local_3b0 = (ulonglong)param_2 * 0x68 + param_1 + -0x68;
    local_3b8 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_3a8[0] = (int)(longlong)(fVar18 + fVar18);
    plVar17 = &local_3b8;
    do {
      puVar1 = (undefined8 *)*plVar17;
      puVar13 = (undefined8 *)plVar17[1];
      iVar14 = (int)plVar17[2];
      iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar1) >> 3);
      puVar16 = puVar1;
      puVar9 = puVar13;
      if (iVar14 != 0) {
LAB_14741008b:
        uVar4 = iVar2 * -0x3b13b13b + 1;
        if (8 < (int)uVar4) {
          puVar6 = puVar1 + (ulonglong)(uVar4 >> 1) * 0xd;
          puVar10 = local_b0;
          for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar1;
          puVar10 = puVar1 + (ulonglong)(uVar4 >> 1) * 0xd;
          for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = local_b0;
          puVar10 = puVar1;
          for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar13 + 0xd;
          puVar10 = puVar1;
          do {
            puVar8 = puVar10 + 0xd;
            puVar11 = puVar10 + 0xd;
            do {
              puVar10 = puVar11;
              puVar5 = puVar8;
              if (puVar13 < puVar10) break;
              puVar8 = puVar5 + 0xd;
              puVar11 = puVar10 + 0xd;
            } while (*(ulonglong *)(puVar10[0xb] + 0x10) <= *(ulonglong *)(puVar1[0xb] + 0x10));
            puVar8 = puVar6 + -0x1a;
            do {
              puVar11 = puVar6;
              puVar15 = puVar8;
              puVar6 = puVar11 + -0xd;
              if (puVar6 <= puVar1) break;
              puVar8 = puVar15 + -0xd;
            } while (*(ulonglong *)(puVar1[0xb] + 0x10) <= *(ulonglong *)(puVar11[-2] + 0x10));
            lVar3 = 0xd;
            puVar8 = puVar1;
            puVar7 = puVar10;
            puVar12 = local_b0;
            if (puVar6 < puVar10) goto code_r0x000147410168;
            for (; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar12 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar8 = puVar6;
            puVar11 = puVar10;
            for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar8 = local_b0;
            puVar11 = puVar6;
            for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
          } while( true );
        }
        while (puVar9 = puVar1, puVar16 = puVar1, puVar1 < puVar13) {
          while (puVar6 = puVar9, puVar16 = puVar16 + 0xd, puVar16 <= puVar13) {
            puVar9 = puVar16;
            if (*(ulonglong *)(puVar16[0xb] + 0x10) <= *(ulonglong *)(puVar6[0xb] + 0x10)) {
              puVar9 = puVar6;
            }
          }
          puVar16 = puVar13 + -0xd;
          puVar9 = puVar6;
          puVar10 = local_b0;
          for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = puVar13;
          for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar9 = local_b0;
          puVar6 = puVar13;
          for (lVar3 = 0xd; puVar13 = puVar16, lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_147410286;
      }
LAB_1474102a0:
      FUN_1474102b0(puVar1);
LAB_147410286:
      plVar17 = plVar17 + -3;
    } while (&local_3b8 <= plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147410168:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar1;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_b0;
  puVar7 = puVar6;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar14 = iVar14 + -1;
  puVar11 = puVar11 + -0x1a;
  if ((longlong)puVar15 - (longlong)puVar16 < (longlong)puVar9 - (longlong)puVar5) {
    if (puVar10 < puVar13) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar13;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar5 = puVar1;
    if (puVar6 <= puVar1 + 0xd) goto LAB_147410286;
  }
  else {
    if (puVar1 + 0xd < puVar6) {
      *plVar17 = (longlong)puVar1;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = iVar14;
      plVar17 = plVar17 + 3;
    }
    puVar1 = puVar10;
    puVar11 = puVar13;
    puVar15 = puVar13;
    if (puVar13 <= puVar10) goto LAB_147410286;
  }
  iVar2 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar5) >> 3);
  puVar13 = puVar11;
  puVar16 = puVar5;
  puVar9 = puVar15;
  if (iVar14 == 0) goto LAB_1474102a0;
  goto LAB_14741008b;
}



// FUNCTION 1474102b0 FUN_1474102b0 body=599 status=ok
// SIG undefined FUN_1474102b0(void)

void FUN_1474102b0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x0001474102f7:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(ulonglong *)(param_1[(longlong)iVar5 * 0xd + 0xb] + 0x10) <=
            *(ulonglong *)(param_1[(longlong)iVar6 * 0xd + 0xb] + 0x10))) {
          iVar5 = iVar6;
        }
        if (*(ulonglong *)(param_1[(longlong)iVar1 * 0xd + 0xb] + 0x10) <
            *(ulonglong *)(param_1[(longlong)iVar5 * 0xd + 0xb] + 0x10)) {
          puVar3 = param_1 + (longlong)iVar1 * 0xd;
          puVar4 = local_88;
          for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0xd;
          puVar4 = param_1 + (longlong)iVar1 * 0xd;
          for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_88;
          puVar4 = param_1 + (longlong)iVar5 * 0xd;
          for (lVar2 = 0xd; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x0001474102f7;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_88;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0xd;
      puVar4 = param_1;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_88;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0xd;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(ulonglong *)(param_1[(longlong)iVar5 * 0xd + 0xb] + 0x10) <=
                *(ulonglong *)(param_1[(longlong)iVar1 * 0xd + 0xb] + 0x10))) {
              iVar6 = iVar1;
            }
            if (*(ulonglong *)(param_1[(longlong)iVar6 * 0xd + 0xb] + 0x10) <=
                *(ulonglong *)(param_1[(longlong)iVar8 * 0xd + 0xb] + 0x10)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0xd;
            puVar4 = local_88;
            for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0xd;
            puVar4 = param_1 + (longlong)iVar8 * 0xd;
            for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_88;
            puVar4 = param_1 + (longlong)iVar6 * 0xd;
            for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_88;
          for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0xd;
          puVar4 = param_1;
          for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_88;
          puVar4 = param_1 + (uVar7 - 1) * 0xd;
          for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147410508 FUN_147410508 body=92 status=ok
// SIG undefined FUN_147410508(void)

void FUN_147410508(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)param_1[3]) {
    param_1[3] = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)*param_1) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      return;
    }
  }
  param_1[2] = *puVar1;
  *puVar1 = 0;
  return;
}



// FUNCTION 147410564 FUN_147410564 body=123 status=ok
// SIG undefined FUN_147410564(void)

undefined8 * FUN_147410564(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1474105e0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1474105e0 FUN_1474105e0 body=379 status=ok
// SIG undefined FUN_1474105e0(void)

longlong * FUN_1474105e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_145711c9a((longlong)iVar6 * 0x68 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741075c FUN_14741075c body=69 status=ok
// SIG undefined FUN_14741075c(void)

void FUN_14741075c(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1404f04d6(param_1);
    return;
  }
  return;
}



// FUNCTION 1474107a2 FUN_1474107a2 body=48 status=ok
// SIG undefined FUN_1474107a2(void)

void FUN_1474107a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,8);
  }
  return;
}



// FUNCTION 1474107d6 FUN_1474107d6 body=46 status=ok
// SIG undefined FUN_1474107d6(void)

void FUN_1474107d6(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_147410804();
  FUN_147410973(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 147410804 FUN_147410804 body=367 status=ok
// SIG undefined FUN_147410804(void)

void FUN_147410804(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0xe8);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0xe8 + lVar5 + 0xe8);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0xe8);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0xe8 + lVar5),pvVar10,0xe8);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0xe8 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0xe8 + (longlong)pvVar10),(longlong)iVar6 * 0xe8)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140032aa6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147410973 FUN_147410973 body=958 status=ok
// SIG undefined FUN_147410973(void)

void FUN_147410973(longlong param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  void *_Src;
  void *pvVar8;
  void *_Src_00;
  int iVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_478 [32];
  longlong *local_458;
  int local_44c;
  void *local_448;
  void *local_440;
  longlong local_438;
  longlong local_430;
  undefined4 local_428 [190];
  undefined1 local_130 [232];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (1 < (int)param_2) {
    memset(local_428,0,0x2f0);
    local_430 = (ulonglong)param_2 * 0xe8 + param_1 + -0xe8;
    local_438 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_428[0] = (int)(longlong)(fVar11 + fVar11);
    plVar6 = &local_438;
    do {
      pvVar4 = (void *)*plVar6;
      pvVar7 = (void *)plVar6[1];
      iVar9 = (int)plVar6[2];
      iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)pvVar4) >> 3);
      _Src = pvVar7;
      _Src_00 = pvVar4;
      pvVar10 = pvVar4;
      local_458 = plVar6;
      if (iVar9 != 0) {
LAB_147410a55:
        uVar5 = iVar2 * 0x4f72c235 + 1;
        plVar6 = local_458;
        if (8 < (int)uVar5) {
          pvVar10 = (void *)((ulonglong)(uVar5 >> 1) * 0xe8 + (longlong)_Src_00);
          local_44c = iVar9;
          local_448 = pvVar4;
          local_440 = pvVar7;
          memcpy(local_130,pvVar10,0xe8);
          memcpy(pvVar10,_Src_00,0xe8);
          memcpy(_Src_00,local_130,0xe8);
          pvVar4 = (void *)((longlong)_Src + 0xe8);
          pvVar10 = _Src_00;
          do {
            pvVar7 = (void *)((longlong)pvVar10 + 0xe8);
            pvVar1 = (void *)((longlong)pvVar10 + 0xe8);
            do {
              pvVar10 = pvVar1;
              pvVar3 = pvVar7;
              if (_Src < pvVar10) break;
              pvVar7 = (void *)((longlong)pvVar3 + 0xe8);
              pvVar1 = (void *)((longlong)pvVar10 + 0xe8);
            } while (*(ulonglong *)(*(longlong *)((longlong)pvVar10 + 0xd8) + 0x10) <=
                     *(ulonglong *)(*(longlong *)((longlong)_Src_00 + 0xd8) + 0x10));
            pvVar1 = (void *)((longlong)pvVar4 + -0x1d0);
            do {
              pvVar8 = pvVar4;
              pvVar7 = pvVar1;
              pvVar4 = (void *)((longlong)pvVar8 + -0xe8);
              if (pvVar4 <= _Src_00) break;
              pvVar1 = (void *)((longlong)pvVar7 + -0xe8);
            } while (*(ulonglong *)(*(longlong *)((longlong)_Src_00 + 0xd8) + 0x10) <=
                     *(ulonglong *)(*(longlong *)((longlong)pvVar8 + -0x10) + 0x10));
            if (pvVar4 < pvVar10) goto LAB_147410b79;
            memcpy(local_130,pvVar10,0xe8);
            memcpy(pvVar10,pvVar4,0xe8);
            memcpy(pvVar4,local_130,0xe8);
          } while( true );
        }
        for (; local_458 = plVar6, pvVar4 = _Src_00, pvVar7 = _Src_00, _Src_00 < _Src;
            _Src = (void *)((longlong)_Src + -0xe8)) {
          while (pvVar10 = pvVar4, pvVar4 = (void *)((longlong)pvVar7 + 0xe8), pvVar4 <= _Src) {
            plVar6 = (longlong *)((longlong)pvVar7 + 0x1c0);
            pvVar7 = pvVar4;
            if (*(ulonglong *)(*plVar6 + 0x10) <=
                *(ulonglong *)(*(longlong *)((longlong)pvVar10 + 0xd8) + 0x10)) {
              pvVar4 = pvVar10;
            }
          }
          memcpy(local_130,pvVar10,0xe8);
          memcpy(pvVar10,_Src,0xe8);
          memcpy(_Src,local_130,0xe8);
          plVar6 = local_458;
        }
        goto LAB_147410d08;
      }
LAB_147410d22:
      FUN_147410d32(pvVar10);
      plVar6 = local_458;
LAB_147410d08:
      plVar6 = plVar6 + -3;
    } while (&local_438 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147410b79:
  memcpy(local_130,_Src_00,0xe8);
  memcpy(_Src_00,pvVar4,0xe8);
  memcpy(pvVar4,local_130,0xe8);
  iVar9 = local_44c + -1;
  pvVar8 = (void *)((longlong)pvVar8 + -0x1d0);
  if ((longlong)pvVar7 - (longlong)local_448 < (longlong)local_440 - (longlong)pvVar3) {
    plVar6 = local_458;
    if (pvVar10 < _Src) {
      *local_458 = (longlong)pvVar10;
      local_458[1] = (longlong)_Src;
      *(int *)(local_458 + 2) = iVar9;
      plVar6 = local_458 + 3;
    }
    pvVar10 = _Src_00;
    if (pvVar4 <= (void *)((longlong)_Src_00 + 0xe8U)) goto LAB_147410d08;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0xe8U) < pvVar4) {
      *local_458 = (longlong)_Src_00;
      local_458[1] = (longlong)pvVar8;
      *(int *)(local_458 + 2) = iVar9;
      local_458 = local_458 + 3;
    }
    plVar6 = local_458;
    pvVar7 = _Src;
    pvVar8 = _Src;
    _Src_00 = pvVar3;
    if (_Src <= pvVar10) goto LAB_147410d08;
  }
  local_458 = plVar6;
  iVar2 = (int)((ulonglong)((longlong)pvVar7 - (longlong)_Src_00) >> 3);
  _Src = pvVar8;
  pvVar4 = _Src_00;
  _Src_00 = pvVar10;
  if (iVar9 == 0) goto LAB_147410d22;
  goto LAB_147410a55;
}



// FUNCTION 147410d32 FUN_147410d32 body=707 status=ok
// SIG undefined FUN_147410d32(void)

void FUN_147410d32(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128 [232];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x000147410d83:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(ulonglong *)(*(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xe8 + 0xd8) + 0x10)
            <= *(ulonglong *)
                (*(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xe8 + 0xd8) + 0x10))) {
          iVar2 = iVar1;
        }
        if (*(ulonglong *)(*(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xe8 + 0xd8) + 0x10)
            < *(ulonglong *)
               (*(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xe8 + 0xd8) + 0x10)) {
          pvVar6 = (void *)((longlong)iVar4 * 0xe8 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0xe8 + (longlong)param_1);
          memcpy(local_128,pvVar6,0xe8);
          memcpy(pvVar6,pvVar5,0xe8);
          memcpy(pvVar5,local_128,0xe8);
          iVar4 = iVar2;
          goto joined_r0x000147410d83;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0xe8 + (longlong)param_1);
      memcpy(local_128,param_1,0xe8);
      memcpy(param_1,pvVar5,0xe8);
      memcpy(pvVar5,local_128,0xe8);
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
               (*(ulonglong *)
                 (*(longlong *)((longlong)param_1 + (longlong)iVar2 * 0xe8 + 0xd8) + 0x10) <=
                *(ulonglong *)
                 (*(longlong *)((longlong)param_1 + (longlong)iVar4 * 0xe8 + 0xd8) + 0x10))) {
              iVar1 = iVar4;
            }
            if (*(ulonglong *)
                 (*(longlong *)((longlong)param_1 + (longlong)iVar1 * 0xe8 + 0xd8) + 0x10) <=
                *(ulonglong *)
                 (*(longlong *)((longlong)param_1 + (longlong)iVar3 * 0xe8 + 0xd8) + 0x10)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0xe8 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0xe8 + (longlong)param_1);
            memcpy(local_128,pvVar6,0xe8);
            memcpy(pvVar6,pvVar5,0xe8);
            memcpy(pvVar5,local_128,0xe8);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0xe8 + (longlong)param_1);
          memcpy(local_128,param_1,0xe8);
          memcpy(param_1,pvVar5,0xe8);
          memcpy(pvVar5,local_128,0xe8);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147410ff6 FUN_147410ff6 body=84 status=ok
// SIG undefined FUN_147410ff6(void)

void FUN_147410ff6(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)param_1[3]) {
    param_1[3] = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)*param_1) {
      _Dst = (void *)FUN_14001cc68(0xe0);
      memset(_Dst,0,0xe0);
      return;
    }
  }
  param_1[2] = *puVar1;
  *puVar1 = 0;
  return;
}



// FUNCTION 14741104a FUN_14741104a body=123 status=ok
// SIG undefined FUN_14741104a(void)

undefined8 * FUN_14741104a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1474110c6();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1474110c6 FUN_1474110c6 body=146 status=ok
// SIG undefined FUN_1474110c6(void)

longlong * FUN_1474110c6(longlong *param_1,longlong *param_2)

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



// FUNCTION 147411158 FUN_147411158 body=414 status=ok
// SIG undefined FUN_147411158(void)

longlong FUN_147411158(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  
  puVar2 = TlsGetValue(*(DWORD *)(param_1 + 0x20));
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *puVar2 = 2;
    lVar3 = 0x50;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x48) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x40) = 0xffffffff00000000;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x28) = 0;
      puVar1 = (undefined4 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0x80;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -8) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0;
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != 0xf0);
    puVar2 = puVar2 + 1;
    TlsSetValue(*(DWORD *)(param_1 + 0x20),puVar2);
  }
  uVar4 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar4 = DAT_14c760d80 ^ 1;
  }
  lVar3 = (longlong)puVar2 + (ulonglong)(uVar4 * 0x50);
  if (*(int *)((longlong)puVar2 + (ulonglong)(uVar4 * 0x50) + 0xc) != -1) {
    return lVar3;
  }
  FUN_1474112f6(lVar3);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar6 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar6 + 1U) {
    FUN_147411348((longlong *)(param_1 + 0x260),iVar6);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar6 * 8) = lVar3;
  if (uVar4 == 0) {
    plVar5 = (longlong *)(param_1 + 0x270);
    iVar6 = *(int *)(param_1 + 0x278);
    *(uint *)(param_1 + 0x278) = iVar6 + 1U;
    if (iVar6 + 1U <= *(uint *)(param_1 + 0x27c)) goto LAB_1474112a4;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x280);
    iVar6 = *(int *)(param_1 + 0x288);
    *(uint *)(param_1 + 0x288) = iVar6 + 1U;
    if (iVar6 + 1U <= *(uint *)(param_1 + 0x28c)) goto LAB_1474112a4;
  }
  FUN_147411348(plVar5,iVar6);
LAB_1474112a4:
  *(longlong *)(*plVar5 + (longlong)iVar6 * 8) = lVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return lVar3;
}



// FUNCTION 1474112f6 FUN_1474112f6 body=82 status=ok
// SIG undefined FUN_1474112f6(void)

undefined8 * FUN_1474112f6(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(param_1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return param_1;
}



// FUNCTION 147411348 FUN_147411348 body=132 status=ok
// SIG undefined FUN_147411348(void)

void FUN_147411348(longlong param_1,int param_2)

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



// FUNCTION 1474113ce FUN_1474113ce body=1098 status=ok
// SIG undefined FUN_1474113ce(void)

undefined8 *
FUN_1474113ce(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  uVar10 = param_3[1];
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar6 = *(undefined4 *)(param_3 + 4);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar8 = *(undefined4 *)(param_3 + 5);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_1[1] = *param_3;
  param_1[2] = uVar10;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 6) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_3 + 6);
  lVar12 = param_3[7];
  param_1[8] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  puVar13 = param_3 + 8;
  puVar14 = param_1 + 9;
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x12) = param_4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = param_4;
  FUN_147411bfe(&local_40,param_3 + 9);
  if (param_1 + 0x13 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[0x13] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x14) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xa4) = local_34;
  }
  FUN_147411bfe(&local_40,param_3 + 0xb);
  if (param_1 + 0x15 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x15] != 0) {
      FUN_1400020a8();
    }
    param_1[0x15] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x16) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xb4) = local_34;
  }
  FUN_147411bfe(&local_40,param_3 + 0xd);
  if (param_1 + 0x17 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x17] != 0) {
      FUN_1400020a8();
    }
    param_1[0x17] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x18) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xc4) = local_34;
  }
  FUN_147411bfe(&local_40,param_3 + 0xf);
  if (param_1 + 0x19 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    param_1[0x19] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x1a) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xd4) = local_34;
  }
  uVar15 = param_3[2];
  iVar1 = *(int *)(param_1 + 0x14);
  param_1[10] = param_1[0x13];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((uVar15 == 0) && (uVar15 = 0x4f1a08f64cae0c3d, iVar1 != 0)) {
    lVar12 = 0;
    uVar15 = 0x4f1a08f64cae0c3d;
    do {
      lVar11 = *(longlong *)(param_1[0x13] + lVar12);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x88);
      }
      uVar15 = uVar15 ^ (uVar15 >> 2) + lVar11 + uVar15 * 0x40 + 0x9e3779b9;
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  param_1[3] = uVar15;
  uVar15 = param_3[3];
  iVar1 = *(int *)(param_1 + 0x16);
  param_1[0xc] = param_1[0x15];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((uVar15 == 0) && (uVar15 = 0x4f1a08f64cae0c3d, iVar1 != 0)) {
    lVar12 = 0;
    uVar15 = 0x4f1a08f64cae0c3d;
    do {
      lVar11 = *(longlong *)(param_1[0x15] + lVar12);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x88);
      }
      uVar15 = uVar15 ^ (uVar15 >> 2) + lVar11 + uVar15 * 0x40 + 0x9e3779b9;
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  param_1[4] = uVar15;
  uVar15 = param_3[4];
  iVar1 = *(int *)(param_1 + 0x18);
  param_1[0xe] = param_1[0x17];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((uVar15 == 0) && (uVar15 = 0x4f1a08f64cae0c3d, iVar1 != 0)) {
    lVar12 = 0;
    uVar15 = 0x4f1a08f64cae0c3d;
    do {
      lVar11 = *(longlong *)(param_1[0x17] + lVar12);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x88);
      }
      uVar15 = uVar15 ^ (uVar15 >> 2) + lVar11 + uVar15 * 0x40 + 0x9e3779b9;
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  param_1[5] = uVar15;
  uVar15 = param_3[5];
  iVar1 = *(int *)(param_1 + 0x1a);
  param_1[0x10] = param_1[0x19];
  *(int *)(param_1 + 0x11) = iVar1;
  if (uVar15 == 0) {
    if (iVar1 == 0) {
      uVar15 = 0x4f1a08f64cae0c3d;
    }
    else {
      lVar12 = 0;
      uVar15 = 0x4f1a08f64cae0c3d;
      do {
        lVar11 = *(longlong *)(param_1[0x19] + lVar12);
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(lVar11 + 0x88);
        }
        uVar15 = uVar15 ^ (uVar15 >> 2) + lVar11 + uVar15 * 0x40 + 0x9e3779b9;
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar1 * 8 != lVar12);
    }
  }
  param_1[6] = uVar15;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14741181a FUN_14741181a body=90 status=ok
// SIG undefined FUN_14741181a(void)

void FUN_14741181a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    puVar2 = param_1;
  }
  FUN_147411874(param_1 + 0x15);
  FUN_147411b84(param_1 + 0x15);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147411869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147411874 FUN_147411874 body=635 status=ok
// SIG undefined FUN_147411874(void)

void FUN_147411874(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8 [8];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1449ee2a2(local_3c,0,0x40000010);
  lVar3 = *param_1;
  (**(code **)(*DAT_14ca83900 + 0x4f0))(DAT_14ca83900,local_c8,param_1 + 1);
  plVar5 = (longlong *)(lVar3 + 0x28);
  if (plVar5 != local_c8) {
    lVar3 = *plVar5;
    *plVar5 = local_c8[0];
    local_c8[0] = 0;
    if (lVar3 == 0) goto LAB_147411919;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c8[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_c8[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147411919:
  lVar3 = param_1[0x1a];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = param_1[0x19];
    lVar6 = 0;
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar4 + lVar6) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  lVar3 = param_1[0x18];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = param_1[0x17];
    lVar6 = 0;
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar4 + lVar6) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  lVar3 = param_1[0x16];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = param_1[0x15];
    lVar6 = 0;
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar4 + lVar6) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  lVar3 = param_1[0x14];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = param_1[0x13];
    lVar6 = 0;
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar4 + lVar6) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  local_60 = 0;
  uStack_74 = 0;
  local_c8[7] = 0;
  uStack_88 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_c8[0] = 0x1800000008;
  local_c8[1] = 1;
  uStack_58 = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_147411af0(param_1 + 1,local_c8);
  if (local_c8[7] != 0) {
    LOCK();
    puVar1 = (uint *)(local_c8[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1449ee22a(local_3c);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147411af0 FUN_147411af0 body=147 status=ok
// SIG undefined FUN_147411af0(void)

undefined4 * FUN_147411af0(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
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
  undefined8 uVar15;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  param_1[8] = param_2[8];
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
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  if (param_1 != param_2) {
    lVar3 = *(longlong *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar15;
  return param_1;
}



// FUNCTION 147411b84 FUN_147411b84 body=122 status=ok
// SIG undefined FUN_147411b84(void)

void FUN_147411b84(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147411bfe FUN_147411bfe body=125 status=ok
// SIG undefined FUN_147411bfe(void)

longlong * FUN_147411bfe(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  *param_1 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar2);
  }
  *(uint *)(param_1 + 1) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147411c7c(param_1,uVar2);
    memcpy((void *)*param_1,_Src,(ulonglong)uVar2 * 8);
    lVar4 = param_1[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = *param_1;
      lVar5 = 0;
      do {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + lVar5) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar5);
    }
  }
  return param_1;
}



// FUNCTION 147411c7c FUN_147411c7c body=86 status=ok
// SIG undefined FUN_147411c7c(void)

void FUN_147411c7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147411cd2 FUN_147411cd2 body=114 status=ok
// SIG undefined FUN_147411cd2(void)

void FUN_147411cd2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147411d44 FUN_147411d44 body=114 status=ok
// SIG undefined FUN_147411d44(void)

void FUN_147411d44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147411db6 FUN_147411db6 body=364 status=ok
// SIG undefined FUN_147411db6(void)

void FUN_147411db6(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14ca81350;
  if (DAT_14ca81358 != (undefined *)0x0) {
    puVar5 = DAT_14ca81358;
  }
  iVar4 = DAT_14ca81360 + 3;
  if (-1 < DAT_14ca81360) {
    iVar4 = DAT_14ca81360;
  }
  if (DAT_14ca81320 - DAT_14ca8134c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca81328;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca81340 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca81340;
    }
    local_78 = &DAT_14ca81318;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca81328)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca81318 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca81328 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca81360) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca81360);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147411f24 FUN_147411f24 body=138 status=ok
// SIG undefined FUN_147411f24(void)

void FUN_147411f24(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 147411fae FUN_147411fae body=141 status=ok
// SIG undefined FUN_147411fae(void)

ulonglong FUN_147411fae(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    cVar3 = FUN_142791832();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x2a0);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x2a0) = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      FUN_1414eae4e(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741203c FUN_14741203c body=141 status=ok
// SIG undefined FUN_14741203c(void)

ulonglong FUN_14741203c(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    cVar3 = FUN_142791832();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x2a0);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x2a0) = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      FUN_1414eaf48(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474120ca FUN_1474120ca body=141 status=ok
// SIG undefined FUN_1474120ca(void)

ulonglong FUN_1474120ca(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    cVar3 = FUN_142791832();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x2a0);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x2a0) = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      FUN_1414eb048(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147412158 FUN_147412158 body=65 status=ok
// SIG undefined FUN_147412158(void)

void FUN_147412158(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14178dc2a(param_1);
  }
  param_1[0xe] = 0xfefefefefefefefe;
  param_1[0xf] = 0xfefefefefefefefe;
  param_1[0xc] = 0xfefefefefefefefe;
  param_1[0xd] = 0xfefefefefefefefe;
  param_1[10] = 0xfefefefefefefefe;
  param_1[0xb] = 0xfefefefefefefefe;
  param_1[8] = 0xfefefefefefefefe;
  param_1[9] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474121aa FUN_1474121aa body=11 status=ok
// SIG undefined FUN_1474121aa(void)

undefined8 * FUN_1474121aa(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 1474121b6 FUN_1474121b6 body=14 status=ok
// SIG undefined FUN_1474121b6(void)

undefined8 * FUN_1474121b6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1474121c4 FUN_1474121c4 body=57 status=ok
// SIG undefined FUN_1474121c4(void)

undefined8 * FUN_1474121c4(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140180cec();
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1407c8b48(param_2,&DAT_14a37e51a);
  }
  return param_2;
}



// FUNCTION 1474121fd FUN_1474121fd body=371 status=ok
// SIG undefined FUN_1474121fd(void)

bool FUN_1474121fd(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca83bac) {
    FUN_144b3d300(&DAT_14ca83bac);
    if (DAT_14ca83bac == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca83ba8 = FUN_14054d46e(&DAT_14c846b20,L"nogpucrashdebugging");
      _Init_thread_footer(&DAT_14ca83bac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca83bb4) {
    FUN_144b3d300(&DAT_14ca83bb4);
    if (DAT_14ca83bb4 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca83bb0 = FUN_14054d46e(&DAT_14c846b20,L"gpucrashdebugging");
      _Init_thread_footer(&DAT_14ca83bb4);
    }
  }
  lVar1 = DAT_14ca83ba0;
  if (DAT_14ca83ba8 == '\0') {
    bVar4 = true;
    if (DAT_14ca83bb0 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar3 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar3 = (ulonglong)(bVar2 ^ 1);
      }
      bVar4 = *(int *)(lVar1 + uVar3 * 4) != 0;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 147412370 FUN_147412370 body=183 status=ok
// SIG undefined FUN_147412370(void)

void FUN_147412370(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x188))
            (*(longlong **)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x34));
  return;
}



// FUNCTION 147412428 FUN_147412428 body=225 status=ok
// SIG undefined FUN_147412428(void)

void FUN_147412428(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *(int *)(param_1 + 0x38);
  if (0 < local_20) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if ((*(int *)(lVar1 + lVar4) != -1) && (lVar2 = *(longlong *)(lVar1 + 8 + lVar4), lVar2 != 0))
      {
        plVar3 = *(longlong **)(lVar2 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar3[1] = DAT_14c872be0;
          UNLOCK();
          LOCK();
          plVar3[3] = plVar3[3] + 1;
          UNLOCK();
          LOCK();
          if (*plVar3 == -1) {
            *plVar3 = DAT_14c872be0;
          }
          UNLOCK();
        }
        *(undefined8 *)(lVar1 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x48);
        local_20 = *(int *)(param_1 + 0x38);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x88;
    } while (lVar5 < local_20);
  }
  local_40 = *(undefined1 *)(param_1 + 0x40);
  local_28 = *(undefined8 *)(param_1 + 0x30);
  local_48 = &local_28;
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x60))
            (*(longlong **)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14741250a FUN_14741250a body=232 status=ok
// SIG undefined FUN_14741250a(void)

void FUN_14741250a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 *local_50;
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *(int *)(param_1 + 0x68);
  if (0 < local_20) {
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x60);
      if (*(int *)(lVar1 + -0x10 + lVar5) != -1) {
        lVar2 = *(longlong *)(lVar1 + -8 + lVar5);
        plVar3 = *(longlong **)(lVar2 + 8);
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar3[1] = DAT_14c872be0;
          UNLOCK();
          LOCK();
          plVar3[3] = plVar3[3] + 1;
          UNLOCK();
          LOCK();
          if (*plVar3 == -1) {
            *plVar3 = DAT_14c872be0;
          }
          UNLOCK();
        }
        *(undefined8 *)(lVar1 + lVar5) = uVar4;
        local_20 = *(int *)(param_1 + 0x68);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x1a0;
    } while (lVar6 < local_20);
  }
  local_48 = *(undefined1 *)(param_1 + 0x70);
  local_28 = *(undefined8 *)(param_1 + 0x60);
  local_50 = &local_28;
  local_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_34 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x58);
  uStack_2c = *(undefined4 *)(param_1 + 0x5c);
  local_58 = &local_38;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x68))
            (*(longlong **)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474125f4 FUN_1474125f4 body=174 status=ok
// SIG undefined FUN_1474125f4(void)

void FUN_1474125f4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar2 = FUN_147405001(*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong *)(param_1 + 0x640) == 0) {
    (**(code **)(*plVar1 + 0x248))
              (plVar1,uVar2,*(undefined8 *)(param_1 + 0x638),lVar3,param_1 + 0x28,
               CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x64c)),*(undefined4 *)(param_1 + 0x650));
  }
  else {
    (**(code **)(*plVar1 + 0x250))
              (plVar1,uVar2,*(undefined8 *)(param_1 + 0x638),lVar3,param_1 + 0x28,
               *(longlong *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x648));
  }
  return;
}



// FUNCTION 1474126a2 FUN_1474126a2 body=100 status=ok
// SIG undefined FUN_1474126a2(void)

void FUN_1474126a2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_147405001(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                      (*(longlong **)(param_1 + 0x18),uVar1);
    *(longlong *)(param_1 + 0x10) = lVar2;
  }
  (**(code **)(**(longlong **)(param_2 + 0x38) + 600))
            (*(longlong **)(param_2 + 0x38),lVar2,uVar1,*(undefined4 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
  return;
}



// FUNCTION 147412706 FUN_147412706 body=27 status=ok
// SIG undefined FUN_147412706(void)

ulonglong FUN_147412706(void)

{
  ulonglong uVar1;
  
  if (DAT_14ca85450 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)DAT_14ca85450 >> 8),*(undefined1 *)(DAT_14ca85450 + 0xa0)) ^
            1;
  }
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 147412722 FUN_147412722 body=1021 status=ok
// SIG undefined FUN_147412722(void)

void FUN_147412722(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  void *_Dst;
  uint uVar10;
  size_t sVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 *local_100;
  ulonglong *local_f0;
  uint local_e4;
  void *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  undefined1 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar10 = *(uint *)(param_2 + 1);
  local_d8 = param_2;
  if (uVar10 != 0) {
    uVar12 = 0;
    local_f0 = param_1;
    local_e4 = uVar10;
    do {
      uVar4 = uVar12 + 1;
      if (uVar12 + 1 < uVar10) {
        uVar4 = uVar10;
      }
      lVar15 = *local_d8;
      uVar18 = 0;
      uVar5 = 0;
      uVar13 = uVar12;
      do {
        uVar8 = *(longlong *)
                 (*(longlong *)(lVar15 + (longlong)(int)uVar13 * 0x20) + 0x18 +
                 (ulonglong)(*(int *)(lVar15 + 8 + (longlong)(int)uVar13 * 0x20) == 1) * 8) + uVar5;
        uVar18 = uVar18 + (uVar8 < 0x7fffffff);
        uVar14 = uVar13;
        if (0x7ffffffe < uVar8) break;
        uVar13 = uVar13 + 1;
        uVar5 = uVar8;
        uVar14 = uVar4;
      } while (uVar4 != uVar13);
      if (uVar18 != 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 1;
        local_94 = 0;
        uStack_8c = 0;
        local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_80 = 0;
        local_7c = 0;
        local_78 = L"RHIScratchBuffer";
        local_70 = 0;
        uStack_68 = 0;
        local_b8 = (undefined4)uVar5;
        uStack_b4 = 0;
        uStack_b0 = 0x90008;
        if (uVar5 == 0) {
          FUN_14570b4be(0x9000800000000,&local_a8,0x90008,0);
          param_1 = local_f0;
        }
        if (*(char *)((longlong)param_1 + 0x69) == '\0') {
          FUN_14002049c(param_1,1);
          local_100 = &local_a8;
          local_108 = 0x400;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_1,&local_b8);
          *(undefined4 *)(local_c0 + 0x18) = 0x400;
          FUN_14002049c(param_1,0);
        }
        else {
          local_100 = &local_a8;
          local_108 = 0x400;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_1,&local_b8);
          *(undefined4 *)(local_c0 + 0x18) = 0x400;
        }
        lVar17 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          puVar2 = (uint *)(local_c0 + 8);
          uVar10 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar10 & 0x3fffffff) == 1) {
            FUN_144a54812(local_c0);
          }
        }
        local_d0 = lVar17;
        sVar11 = (longlong)(int)uVar18 * 0x20;
        pvVar16 = (void *)(*local_f0 + 7 & 0xfffffffffffffff8);
        pvVar6 = (void *)((longlong)pvVar16 + sVar11);
        if ((void *)local_f0[1] < pvVar6) {
          FUN_140023dd8(local_f0,(uint)sVar11 | 8);
          pvVar16 = (void *)(*local_f0 + 7 & 0xfffffffffffffff8);
          pvVar6 = (void *)((longlong)pvVar16 + sVar11);
        }
        *local_f0 = (ulonglong)pvVar6;
        local_e0 = pvVar16;
        memcpy(pvVar16,(void *)(lVar15 + (longlong)(int)uVar12 * 0x20),sVar11);
        if (0 < (int)uVar18) {
          local_c8 = (ulonglong)uVar18 << 5;
          lVar15 = (longlong)(int)uVar12 * 0x20 + lVar15;
          lVar17 = 0;
          do {
            iVar3 = *(int *)(lVar15 + 0x18 + lVar17);
            if ((longlong)iVar3 != 0) {
              pvVar16 = *(void **)(lVar15 + 0x10 + lVar17);
              sVar11 = (longlong)iVar3 * 0x28;
              _Dst = (void *)(*local_f0 + 7 & 0xfffffffffffffff8);
              pvVar6 = (void *)((longlong)_Dst + sVar11);
              if ((void *)local_f0[1] < pvVar6) {
                FUN_140023dd8(local_f0,(int)sVar11 + 8);
                _Dst = (void *)(*local_f0 + 7 & 0xfffffffffffffff8);
                pvVar6 = (void *)((longlong)_Dst + sVar11);
              }
              *local_f0 = (ulonglong)pvVar6;
              memcpy(_Dst,pvVar16,sVar11);
              *(void **)((longlong)local_e0 + lVar17 + 0x10) = _Dst;
              *(int *)((longlong)local_e0 + lVar17 + 0x18) = iVar3;
            }
            lVar17 = lVar17 + 0x20;
          } while (local_c8 != lVar17);
        }
        puVar7 = (undefined8 *)(*local_f0 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar7 + 8;
        if ((undefined8 *)local_f0[1] < puVar9) {
          FUN_140023dd8(local_f0,0x48);
          puVar7 = (undefined8 *)(*local_f0 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar7 + 8;
        }
        *local_f0 = (ulonglong)puVar9;
        *(int *)(local_f0 + 0xc) = (int)local_f0[0xc] + 1;
        *(undefined8 **)local_f0[6] = puVar7;
        local_f0[6] = (ulonglong)(puVar7 + 1);
        puVar7[1] = 0;
        *puVar7 = &PTR_FUN_14a236970;
        puVar7[2] = local_e0;
        *(uint *)(puVar7 + 3) = uVar18;
        puVar7[4] = local_d0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = local_d0;
        FUN_14494c7ac(local_f0,&local_b8,1);
        uVar10 = local_e4;
        puVar9 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
        param_1 = local_f0;
        if (puVar9 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar9 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
            param_1 = local_f0;
          }
        }
      }
      uVar12 = uVar14;
    } while (uVar14 < uVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147412b20 FUN_147412b20 body=120 status=ok
// SIG undefined FUN_147412b20(void)

void FUN_147412b20(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 3;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x20);
    puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar1;
  param_2[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14a380c40;
  puVar1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147412b9e FUN_147412b9e body=165 status=ok
// SIG undefined FUN_147412b9e(void)

undefined8 *
FUN_147412b9e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  
  lVar6 = (**(code **)(*param_4 + 8))(param_4);
  iVar8 = *(int *)(param_6 + 3) *
          *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(byte *)(lVar6 + 0x33) * 4);
  iVar5 = *(int *)((longlong)param_6 + 0x1c) * iVar8;
  lVar6 = (ulonglong)*(uint *)(param_6 + 4) * (longlong)iVar5;
  uVar7 = FUN_14001cc68(lVar6,0);
  uVar4 = DAT_14c7590b0;
  *param_2 = param_4;
  *(undefined4 *)(param_2 + 1) = param_5;
  *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_6 + 4);
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = param_6[3];
  *(undefined8 *)((longlong)param_2 + 0x1c) = param_6[2];
  *(undefined8 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x14) = uVar2;
  *(int *)(param_2 + 6) = iVar8;
  *(int *)((longlong)param_2 + 0x34) = iVar5;
  param_2[7] = uVar7;
  *(int *)(param_2 + 8) = (int)lVar6;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  return param_2;
}



// FUNCTION 147412c44 FUN_147412c44 body=94 status=ok
// SIG undefined FUN_147412c44(void)

void FUN_147412c44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*DAT_14ca83900 + 0x220))
            (DAT_14ca83900,param_2,*param_3,*(undefined4 *)(param_3 + 1),(longlong)param_3 + 0xc,
             *(undefined4 *)(param_3 + 6),*(undefined4 *)((longlong)param_3 + 0x34),param_3[7]);
  FUN_1400020a8(param_3[7]);
  param_3[7] = 0;
  return;
}



// FUNCTION 147412ca2 FUN_147412ca2 body=81 status=ok
// SIG undefined FUN_147412ca2(void)

void FUN_147412ca2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_3[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*DAT_14ca83900 + 0x458))(DAT_14ca83900,param_2,*param_3 + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x88;
    } while (lVar2 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 147412cf4 FUN_147412cf4 body=195 status=ok
// SIG undefined FUN_147412cf4(void)

undefined8
FUN_147412cf4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             longlong *param_5,longlong *param_6)

{
  char cVar1;
  
  if (DAT_14c842750 == '\x01') {
    cVar1 = FUN_1431eb928();
    (**(code **)(*DAT_14ca83900 + 0xb0))(DAT_14ca83900,param_2,param_4,param_5,param_6);
    if (param_3 != 0 && cVar1 == '\x01') {
      LOCK();
      DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
      UNLOCK();
      if (DAT_14ca84aa8 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
      }
    }
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0xb0))(DAT_14ca83900,param_2,param_4,param_5,param_6);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 147412db8 FUN_147412db8 body=210 status=ok
// SIG undefined FUN_147412db8(void)

void FUN_147412db8(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  if ((DAT_14ca84d98 != '\x01') && (DAT_14c842750 == '\x01')) {
    bVar2 = FUN_1431eb928();
    uVar1 = *(uint *)(param_2 + 0x17c);
    if (uVar1 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
    }
    if (param_4 != -1) {
      iVar3 = param_4;
    }
    (**(code **)(*DAT_14ca83900 + 0x268))(DAT_14ca83900,param_3,iVar3);
    if ((param_2 != 0 & bVar2) != 0) {
      LOCK();
      DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
      UNLOCK();
      if (DAT_14ca84aa8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147412e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
        return;
      }
    }
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x17c);
  if (uVar1 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
  }
  if (param_4 != -1) {
    iVar3 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000147412e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x268))(DAT_14ca83900,param_3,iVar3);
  return;
}



// FUNCTION 147412e8a FUN_147412e8a body=259 status=ok
// SIG undefined FUN_147412e8a(void)

void * FUN_147412e8a(void *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  
  iVar3 = 0;
  memset(param_1,0,0x610);
  iVar1 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar4 = 0;
    do {
      pvVar5 = param_1;
      switch(*(undefined1 *)(lVar2 + 10 + lVar4)) {
      case 0:
        break;
      case 1:
        pvVar5 = (void *)((longlong)param_1 + 0x200);
        break;
      case 2:
        pvVar5 = (void *)((longlong)param_1 + 0x580);
        break;
      case 3:
        pvVar5 = (void *)((longlong)param_1 + 0x480);
        break;
      case 4:
        pvVar5 = (void *)((longlong)param_1 + 0x400);
        break;
      default:
        goto switchD_147412ef9_default;
      }
      *(undefined8 *)((longlong)pvVar5 + (ulonglong)*(ushort *)(lVar2 + 8 + lVar4) * 8) =
           *(undefined8 *)(lVar2 + lVar4);
switchD_147412ef9_default:
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    iVar3 = *(int *)((longlong)param_1 + 0x60c);
  }
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar5 = *(void **)(param_2 + 0x38);
  *(int *)((longlong)param_1 + 0x608) = iVar1;
  if (iVar1 == 0 && iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  }
  else {
    FUN_1474143b4((undefined8 *)((longlong)param_1 + 0x600),iVar1,iVar3);
    if (iVar1 != 0) {
      memcpy(*(void **)((longlong)param_1 + 0x600),pvVar5,(longlong)iVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 147412f8e FUN_147412f8e body=286 status=ok
// SIG undefined FUN_147412f8e(void)

void FUN_147412f8e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_698 [32];
  undefined1 *local_678;
  undefined4 local_670;
  undefined4 local_668;
  undefined1 local_658 [1536];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_698;
  FUN_147412e8a(local_658,param_5);
  uVar2 = *param_1 + 7 & 0xfffffffffffffff8;
  uVar1 = uVar2 + 0x658;
  if (param_1[1] < uVar1) {
    FUN_140023dd8(param_1,0x660);
    uVar2 = *param_1 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar2 + 0x658;
  }
  *param_1 = uVar1;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(ulonglong *)param_1[6] = uVar2;
  param_1[6] = uVar2 + 8;
  local_668 = param_7;
  local_670 = param_6;
  local_678 = local_658;
  FUN_1474142ce(uVar2,param_2,param_3,param_4);
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined4 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined4 *)(param_5 + 0x40) = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474130ae FUN_1474130ae body=286 status=ok
// SIG undefined FUN_1474130ae(void)

void FUN_1474130ae(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_698 [32];
  undefined1 *local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined1 local_658 [1536];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_698;
  FUN_147412e8a(local_658,param_5);
  uVar2 = *param_1 + 7 & 0xfffffffffffffff8;
  uVar1 = uVar2 + 0x658;
  if (param_1[1] < uVar1) {
    FUN_140023dd8(param_1,0x660);
    uVar2 = *param_1 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar2 + 0x658;
  }
  *param_1 = uVar1;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(ulonglong *)param_1[6] = uVar2;
  param_1[6] = uVar2 + 8;
  local_668 = param_7;
  local_670 = param_6;
  local_678 = local_658;
  FUN_147414416(uVar2,param_2,param_3,param_4);
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined4 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined4 *)(param_5 + 0x40) = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474131cd FUN_1474131cd body=386 status=ok
// SIG undefined FUN_1474131cd(void)

void FUN_1474131cd(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  uint local_58 [10];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = (ulonglong)DAT_14c760da4;
  if (uVar9 != 0) {
    memset(local_58,0,uVar9 * 4);
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar11 = 0;
    do {
      local_58[*(uint *)(lVar1 + 0x28 + lVar11)] =
           local_58[*(uint *)(lVar1 + 0x28 + lVar11)] |
           1 << (*(byte *)(lVar1 + 0x2c + lVar11) & 0x1f);
      lVar11 = lVar11 + 0x48;
    } while ((longlong)(int)lVar3 * 0x48 != lVar11);
  }
  iVar7 = 0;
  if (uVar9 != 0) {
    uVar5 = 0;
    iVar7 = 0;
    do {
      uVar12 = (ulonglong)local_58[uVar5] - (ulonglong)(local_58[uVar5] >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      iVar7 = iVar7 + (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x38);
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar5);
  }
  FUN_1472db19a(param_2,iVar7,1);
  if (DAT_14c760da4 != 0) {
    uVar9 = 0;
    iVar7 = 0;
    uVar4 = DAT_14c760da4;
    do {
      uVar8 = local_58[uVar9];
      if (uVar8 != 0) {
        iVar10 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
          }
        }
        do {
          piVar6 = (int *)FUN_14001cc68(0x10,0x10);
          piVar6[2] = 0;
          piVar6[3] = 0;
          *piVar6 = iVar10;
          piVar6[1] = (int)uVar9;
          *(int **)(*param_2 + (longlong)iVar7 * 8) = piVar6;
          bVar2 = (byte)iVar10 & 0x1f;
          uVar8 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar8;
          if (uVar8 == 0) {
            iVar10 = 0x20;
          }
          else {
            iVar10 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
              }
            }
          }
          iVar7 = iVar7 + 1;
          uVar4 = DAT_14c760da4;
        } while (uVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147413350 FUN_147413350 body=76 status=ok
// SIG undefined FUN_147413350(void)

longlong FUN_147413350(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x800000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x800000000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(longlong *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 8);
  }
  FUN_14741339c(param_1 + 0x18,uVar1);
  return param_1;
}



// FUNCTION 14741339c FUN_14741339c body=123 status=ok
// SIG undefined FUN_14741339c(void)

void FUN_14741339c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474146d2(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x48) = param_2;
    FUN_147414742(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147413418 FUN_147413418 body=153 status=ok
// SIG undefined FUN_147413418(void)

longlong * FUN_147413418(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar2 = (longlong *)(param_1 + 0x10);
  iVar1 = (int)param_2[1];
  lVar7 = 0x10;
LAB_147413433:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar3 = 0;
    do {
      uVar5 = *(ushort *)(*plVar2 + lVar3);
      uVar6 = (ulonglong)uVar5;
      uVar4 = *(ushort *)(*param_2 + lVar3);
      if (uVar5 == uVar4) {
        if (uVar5 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar4 | uVar5)) goto LAB_1474134a9;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_1474134a9;
      }
      lVar3 = lVar3 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_14741348b;
LAB_1474134a9:
  if (uVar5 == uVar4) {
    return plVar2;
  }
LAB_14741348b:
  plVar2 = (longlong *)(param_1 + lVar7 + 0x18);
  lVar7 = lVar7 + 0x18;
  if (lVar7 == 0xd0) {
    return (longlong *)0x0;
  }
  goto LAB_147413433;
}



// FUNCTION 1474134b2 FUN_1474134b2 body=743 status=ok
// SIG undefined FUN_1474134b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474134b2(void)

{
  DAT_14ca84d88 = 0;
  _DAT_14ca84d8c = 0xf00000000;
  _DAT_14ca84d94 = 0x10100;
  _DAT_14ca84d98 = 0;
  DAT_14ca84da0 = 0;
  _DAT_14ca84da8 = 0;
  DAT_14ca84db0 = 0;
  _DAT_14ca84db8 = 0;
  DAT_14ca84dc0 = 0;
  _DAT_14ca84dc8 = 0;
  DAT_14ca84dd0 = 0;
  _DAT_14ca84dd8 = 0;
  _DAT_14ca84de0 = 0xffffffff;
  DAT_14ca84de4 = 0;
  _DAT_14ca84df4 = 0x101000100000000;
  _DAT_14ca84de8 = 0;
  DAT_14ca84df0 = 0;
  _DAT_14ca84dfc = 0;
  DAT_14ca84dfe = 1;
  _DAT_14ca84dff = 0;
  _DAT_14ca84e05 = 0;
  uRam000000014ca84e07 = 0;
  _DAT_14ca84e0d = 1;
  DAT_14ca84e10 = 0x7fffffff;
  _DAT_14ca84e14 = 0x10001000101;
  _DAT_14ca84e1c = 0x100;
  _DAT_14ca84e26 = 0;
  _DAT_14ca84e1e = 0;
  _DAT_14ca84e28 = 0x10001;
  _DAT_14ca84e2c = 0;
  DAT_14ca84e30 = 0xffff;
  _DAT_14ca84e34 = 0;
  DAT_14ca84e36 = 0;
  _DAT_14ca84e38 = 0x80000000800;
  DAT_14ca84e40 = 0x800;
  _DAT_14ca84e48 = 0x8000000;
  DAT_14ca84e50 = 0x8000000;
  DAT_14ca84e58 = 0x8000;
  _DAT_14ca84e60 = 0x80000000800;
  _DAT_14ca84e68 = 0x10001;
  _DAT_14ca84e6c = 0x1000000100;
  DAT_14ca84e74 = 0x400;
  DAT_14ca84e78 = 0;
  _DAT_14ca84e7c = 0x7fffffff7fffffff;
  uRam000000014ca84e94 = 0x101010101;
  _DAT_14ca84e84 = 0x101010101010101;
  uRam000000014ca84e8c = 0x101010101;
  _DAT_14ca84e91 = 0x10101;
  _DAT_14ca84e99 = 0;
  DAT_14ca84e9b = 0;
  DAT_14ca84eb0 = 0;
  DAT_14ca84ea0 = 0;
  uRam000000014ca84ea8 = 0;
  DAT_14ca84eb8 = 0;
  DAT_14ca84ec0 = 0;
  DAT_14ca84ec8 = 0;
  DAT_14ca84ed0 = 0;
  _DAT_14ca84ed8 = 0;
  DAT_14ca84ee0 = 0;
  _DAT_14ca84ee8 = 0;
  _DAT_14ca84ef0 = 1;
  DAT_14ca84ef2 = 0;
  _DAT_14ca84efc = 0;
  _DAT_14ca84ef4 = 0;
  _DAT_14ca84f10 = 0;
  _DAT_14ca84f00 = 0;
  uRam000000014ca84f08 = 0;
  _DAT_14ca84f1c = 0;
  _DAT_14ca84f14 = 0;
  DAT_14ca84f18._1_3_ = 0;
  _DAT_14ca84f21 = 1;
  DAT_14ca84f23 = 0;
  DAT_14ca84f2c = DAT_14c9a52a0;
  _DAT_14ca84f24 = DAT_14c9a5298;
  _DAT_14ca84f30 = 0x101;
  DAT_14ca84f36 = 0;
  _DAT_14ca84f32 = 0;
  _DAT_14ca84f38 = 0;
  _DAT_14ca84f40 = 0;
  _DAT_14ca84f47 = 0;
  DAT_14ca84f4c._0_1_ = 10;
  DAT_14ca84f50 = 1;
  DAT_14ca84f68 = 0;
  _DAT_14ca84f58 = 0;
  _DAT_14ca84f60 = 0;
  _DAT_14ca85064 = 1;
  _DAT_14ca85068 = 0;
  DAT_14ca8506c = 0x100;
  _DAT_14ca8507e = 0;
  _DAT_14ca8507a = 0;
  DAT_14ca85080 = 1;
  memcpy(&DAT_14ca84f6c,&DAT_14ca83f90,0xf8);
  _DAT_14ca85070 = 0x9b009b009b009b;
  DAT_14ca85078 = 0x9b;
  return;
}



// FUNCTION 14741379a FUN_14741379a body=135 status=ok
// SIG undefined FUN_14741379a(void)

longlong FUN_14741379a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  cVar2 = DAT_14ca85169;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  lVar3 = (**(code **)(*DAT_14ca83900 + 0x158))
                    (DAT_14ca83900,&DAT_14ca85100,uVar1,param_2,param_3,0);
  if (cVar2 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  return lVar3 + (ulonglong)*(uint *)(param_1 + 0x20);
}



// FUNCTION 147413822 FUN_147413822 body=112 status=ok
// SIG undefined FUN_147413822(void)

void FUN_147413822(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 147413892 FUN_147413892 body=151 status=ok
// SIG undefined FUN_147413892(void)

void FUN_147413892(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3) + 0xa8);
      if (uVar2 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3) + 0xa8);
      if (uVar2 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x70) * 8 != lVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar3) + 0xa8);
      if (uVar2 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x80) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14741392a FUN_14741392a body=96 status=ok
// SIG undefined FUN_14741392a(void)

undefined * FUN_14741392a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca84ca8) {
    FUN_144b3d300(&DAT_14ca84ca8);
    if (DAT_14ca84ca8 == -1) {
      FUN_1458114c4(&DAT_14ca84b28);
      _Init_thread_footer(&DAT_14ca84ca8);
    }
  }
  return &DAT_14ca84b28;
}



// FUNCTION 14741398a FUN_14741398a body=352 status=ok
// SIG undefined FUN_14741398a(void)

int FUN_14741398a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = 0x31;
  if (DAT_14ca843d0 != param_1) {
    if (DAT_14ca843d8 == param_1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0xe;
      if (((((((DAT_14ca843e0 != param_1) && (iVar1 = 0xf, DAT_14ca843e8 != param_1)) &&
             (iVar1 = 0x18, DAT_14ca843f0 != param_1)) &&
            ((iVar1 = 0xb, DAT_14ca843f8 != param_1 && (iVar1 = 0xc, DAT_14ca84400 != param_1)))) &&
           ((iVar1 = 0x1e, DAT_14ca84408 != param_1 &&
            ((iVar1 = 0x1f, DAT_14ca84410 != param_1 && (iVar1 = 0x1b, DAT_14ca84418 != param_1)))))
           ) && (iVar1 = 0x10, DAT_14ca84420 != param_1)) &&
         ((((iVar1 = 0x34, DAT_14ca84428 != param_1 && (iVar1 = 0x35, DAT_14ca84430 != param_1)) &&
           (iVar1 = 0x16, DAT_14ca84438 != param_1)) &&
          (((iVar1 = 0x15, DAT_14ca84440 != param_1 && (iVar1 = 0x11, DAT_14ca84448 != param_1)) &&
           ((iVar1 = 0x14, DAT_14ca84450 != param_1 &&
            ((iVar1 = 0x33, DAT_14ca84458 != param_1 && (iVar1 = 0x30, DAT_14ca84460 != param_1)))))
           ))))) {
        iVar4 = 0x20;
        lVar3 = 0x10;
        do {
          lVar2 = FUN_14741392a();
          if (*(longlong *)(lVar2 + lVar3) == param_1) {
            return iVar4;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 0x18;
          iVar1 = 0x9b;
        } while (lVar3 != 400);
      }
    }
  }
  return iVar1;
}



// FUNCTION 147413aea FUN_147413aea body=78 status=ok
// SIG undefined FUN_147413aea(void)

undefined8 * FUN_147413aea(undefined8 *param_1,longlong param_2)

{
  FUN_1402b577a(param_1,0x19);
  *param_1 = &PTR_FUN_14a37fd30;
  if (param_2 == 0) {
    param_2 = DAT_14ca84b20;
  }
  param_1[0xc] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = 0xffffffffff;
  return param_1;
}



// FUNCTION 147413b3c FUN_147413b3c body=51 status=ok
// SIG undefined FUN_147413b3c(void)

undefined8 * FUN_147413b3c(longlong param_1,undefined8 *param_2)

{
  if ((*(int *)(param_1 + 0x68) == -1) || (*(char *)(param_1 + 0x6c) == -1)) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(*(longlong **)(param_1 + 0x60),param_2);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x68);
  }
  return param_2;
}



// FUNCTION 147413b96 FUN_147413b96 body=189 status=ok
// SIG undefined FUN_147413b96(void)

undefined8 *
FUN_147413b96(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14a37fd70;
  param_1[1] = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x95) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  *param_1 = &PTR_FUN_14a37fd80;
  FUN_144a8af26(param_1 + 0x15,param_6);
  param_1[0x1f] = 0;
  param_1[0x20] = 0x100000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x100000000;
  return param_1;
}



// FUNCTION 147413c54 FUN_147413c54 body=64 status=ok
// SIG undefined FUN_147413c54(void)

undefined8 FUN_147413c54(void)

{
  undefined1 auStack_38 [40];
  LARGE_INTEGER local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_10);
  FUN_141628ed8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147413c95 FUN_147413c95 body=122 status=ok
// SIG undefined FUN_147413c95(void)

int FUN_147413c95(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  
  lVar5 = DAT_14ca84510;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar6 ^ 1);
  }
  lVar4 = DAT_14ca844f8;
  iVar1 = *(int *)(lVar5 + uVar7 * 4);
  if (iVar1 < 0) {
    if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar6 ^ 1);
    }
    iVar2 = *(int *)(lVar4 + uVar7 * 4);
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



// FUNCTION 147413d1e thunk_FUN_141628ed8 body=5 status=ok
// SIG undefined thunk_FUN_141628ed8(void)

byte thunk_FUN_141628ed8(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_108 [32];
  uint *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 uStack_c9;
  uint uStack_c8;
  undefined1 auStack_c4 [7];
  undefined1 uStack_bd;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"norenderthread");
  if (cVar2 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20);
    if (cVar2 == '\0') {
      if ((int)DAT_14c8c27ac < 1) {
        memset(auStack_b0,0,0x82);
        uStack_b4 = 0;
        uStack_b8 = 0;
        uStack_bc = 0;
        FUN_140e55932(auStack_b0,&uStack_b4,&uStack_b8,&uStack_bc);
        uVar1 = uStack_bc;
        puStack_e0 = &uStack_c9;
        puStack_e8 = &uStack_c8;
        FUN_1457b80ec(uStack_b8,uStack_bc,&uStack_bd,auStack_c4);
        DAT_14c8c27ac = uVar1;
        if ((0 < (int)uStack_c8) && (DAT_14c8c27ac = uVar1, (int)uStack_c8 <= (int)uVar1)) {
          DAT_14c8c27ac = uStack_c8;
        }
      }
      if (1 < (int)DAT_14c8c27ac) {
        if (DAT_14c846b14 == '\x01') {
          bVar3 = DAT_14c83f0f8;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c83f0fc) &&
             (FUN_144b3d300(&DAT_14c83f0fc), bVar3 = DAT_14c83f0f8, DAT_14c83f0fc == -1)) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
            DAT_14c83f0f8 = bVar3 ^ 1;
            _Init_thread_footer(&DAT_14c83f0fc);
            bVar3 = DAT_14c83f0f8;
          }
        }
        else {
          bVar3 = 1;
        }
        goto LAB_141628f4e;
      }
    }
  }
  bVar3 = 0;
LAB_141628f4e:
  if ((uStack_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147413d24 FUN_147413d24 body=1 status=ok
// SIG undefined FUN_147413d24(void)

void FUN_147413d24(void)

{
  return;
}



// FUNCTION 147413d25 FUN_147413d25 body=4 status=ok
// SIG undefined FUN_147413d25(void)

undefined8 FUN_147413d25(void)

{
  return 0;
}



// FUNCTION 147413d2a FUN_147413d2a body=38 status=ok
// SIG undefined FUN_147413d2a(void)

undefined8 FUN_147413d2a(undefined8 param_1,int param_2)

{
  FUN_145bf0f7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413d50 FUN_147413d50 body=39 status=ok
// SIG undefined FUN_147413d50(void)

undefined8 * FUN_147413d50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413d78 FUN_147413d78 body=39 status=ok
// SIG undefined FUN_147413d78(void)

undefined8 * FUN_147413d78(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413da0 FUN_147413da0 body=87 status=ok
// SIG undefined FUN_147413da0(void)

undefined8 * FUN_147413da0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a37fd30;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413dfa FUN_147413dfa body=70 status=ok
// SIG undefined FUN_147413dfa(void)

longlong FUN_147413dfa(longlong param_1,int param_2)

{
  FUN_144724170(param_1 + 0x108);
  FUN_144724248(param_1 + 0xe0);
  FUN_14017d484(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413e40 FUN_147413e40 body=38 status=ok
// SIG undefined FUN_147413e40(void)

undefined8 FUN_147413e40(undefined8 param_1,int param_2)

{
  FUN_145cdd540();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147413efa FUN_147413efa body=31 status=ok
// SIG undefined FUN_147413efa(void)

undefined8
FUN_147413efa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147414016(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147413f36 FUN_147413f36 body=74 status=ok
// SIG undefined FUN_147413f36(void)

void FUN_147413f36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_14614309e();
  FUN_1467ac8f2(param_1,&DAT_14ca83980,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147413f80 FUN_147413f80 body=51 status=ok
// SIG undefined FUN_147413f80(void)

void FUN_147413f80(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147413fb4 FUN_147413fb4 body=97 status=ok
// SIG undefined FUN_147413fb4(void)

void FUN_147413fb4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14614309e();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca83980,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147414016 FUN_147414016 body=100 status=ok
// SIG undefined FUN_147414016(void)

void FUN_147414016(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_14741407a(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14614309e();
  FUN_1467ac844(param_1,param_2,&DAT_14ca83980,uVar1,uVar3);
  return;
}



// FUNCTION 14741407a FUN_14741407a body=59 status=ok
// SIG undefined FUN_14741407a(void)

void FUN_14741407a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_1474140b6(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_14741410c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1474140b6 FUN_1474140b6 body=85 status=ok
// SIG undefined FUN_1474140b6(void)

void FUN_1474140b6(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_141770dc0(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 14741410c FUN_14741410c body=62 status=ok
// SIG undefined FUN_14741410c(void)

void FUN_14741410c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14741414a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 14741414a FUN_14741414a body=93 status=ok
// SIG undefined FUN_14741414a(void)

ulonglong FUN_14741414a(uint param_1,uint param_2)

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



// FUNCTION 1474141d4 FUN_1474141d4 body=107 status=ok
// SIG undefined FUN_1474141d4(void)

void FUN_1474141d4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14ca83f78;
  if (param_1 <= (int)DAT_14ca83f78) {
    iVar2 = 0x10;
    if (0x10 < DAT_14ca83f78) {
      lVar5 = (longlong)(int)DAT_14ca83f78;
      if (0x10 < DAT_14ca83f7c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14ca83f7c = iVar2;
    FUN_147414240(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14ca83f78);
}



// FUNCTION 147414240 FUN_147414240 body=142 status=ok
// SIG undefined FUN_147414240(void)

void FUN_147414240(int param_1,uint param_2)

{
  if (param_2 < 0x11) {
    if (DAT_14ca83f70 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14ca83d70,DAT_14ca83f70,(longlong)param_1 << 5);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14ca83f70 == (void *)0x0) {
    FUN_1446efa72(&DAT_14ca83f70,0,param_2,0x20);
    memmove(DAT_14ca83f70,&DAT_14ca83d70,(longlong)param_1 << 5);
    return;
  }
  FUN_1446efa72(&DAT_14ca83f70,param_1,param_2,0x20);
  return;
}



// FUNCTION 1474142ce FUN_1474142ce body=230 status=ok
// SIG undefined FUN_1474142ce(void)

undefined8 *
FUN_1474142ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             void *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a380c58;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = param_4;
  memcpy(param_1 + 5,param_5,0x600);
  param_1[0xc5] = 0;
  iVar1 = *(int *)((longlong)param_5 + 0x608);
  _Src = *(void **)((longlong)param_5 + 0x600);
  *(int *)(param_1 + 0xc6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  }
  else {
    FUN_1474143b4(param_1 + 0xc5,iVar1,0);
    memcpy((void *)param_1[0xc5],_Src,(longlong)iVar1 << 4);
  }
  param_1[199] = param_3;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x64c) = param_6;
  *(undefined4 *)(param_1 + 0xca) = param_7;
  return param_1;
}



// FUNCTION 1474143b4 FUN_1474143b4 body=98 status=ok
// SIG undefined FUN_1474143b4(void)

void FUN_1474143b4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147414416 FUN_147414416 body=220 status=ok
// SIG undefined FUN_147414416(void)

undefined8 *
FUN_147414416(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             void *param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a380c58;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = param_4;
  memcpy(param_1 + 5,param_5,0x600);
  param_1[0xc5] = 0;
  iVar1 = *(int *)((longlong)param_5 + 0x608);
  _Src = *(void **)((longlong)param_5 + 0x600);
  *(int *)(param_1 + 0xc6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  }
  else {
    FUN_1474143b4(param_1 + 0xc5,iVar1,0);
    memcpy((void *)param_1[0xc5],_Src,(longlong)iVar1 << 4);
  }
  param_1[199] = param_3;
  param_1[200] = param_6;
  *(undefined4 *)(param_1 + 0xc9) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  return param_1;
}



// FUNCTION 14741451a FUN_14741451a body=93 status=ok
// SIG undefined FUN_14741451a(void)

void FUN_14741451a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a380e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147414578 FUN_147414578 body=126 status=ok
// SIG undefined FUN_147414578(void)

void FUN_147414578(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a380e50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474145e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147414604 FUN_147414604 body=23 status=ok
// SIG undefined FUN_147414604(void)

undefined8 FUN_147414604(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14741461c FUN_14741461c body=48 status=ok
// SIG undefined FUN_14741461c(void)

void FUN_14741461c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14741464c FUN_14741464c body=132 status=ok
// SIG undefined FUN_14741464c(void)

void FUN_14741464c(longlong param_1,int param_2)

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



// FUNCTION 1474146d2 FUN_1474146d2 body=110 status=ok
// SIG undefined FUN_1474146d2(void)

void FUN_1474146d2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_144b1c58c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147414742 FUN_147414742 body=52 status=ok
// SIG undefined FUN_147414742(void)

void FUN_147414742(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147414776(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_144b1c58c(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 147414776 FUN_147414776 body=108 status=ok
// SIG undefined FUN_147414776(void)

ulonglong FUN_147414776(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1474147e2 FUN_1474147e2 body=381 status=ok
// SIG undefined FUN_1474147e2(void)

int * FUN_1474147e2(longlong param_1,int *param_2,ulonglong param_3,int param_4)

{
  void *_Src;
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_88 [40];
  int *local_60;
  int *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (param_3 & 0xffffffff) * 0x20;
  local_58 = (int *)0x0;
  local_50 = *(int *)(param_1 + 0x20 + lVar5);
  lVar8 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x18 + lVar5);
  if (lVar8 == 0) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    FUN_147414e26(&local_58,local_50);
    memcpy(local_58,_Src,lVar8 << 2);
    iVar4 = local_50;
    piVar3 = local_58;
    lVar5 = (longlong)local_50;
    iVar7 = 0;
    if (lVar5 != 0) {
      bVar2 = param_4 <= *local_58;
      local_60 = param_2;
      iVar9 = 0;
      do {
        lVar6 = (longlong)iVar9;
        lVar8 = lVar6;
        iVar10 = iVar9;
        iVar1 = iVar9 + 1;
        if (iVar9 + 1 < iVar4) {
          iVar1 = iVar4;
        }
        do {
          lVar8 = lVar8 + 1;
          iVar11 = iVar1;
          if (lVar5 <= lVar8) break;
          iVar11 = iVar10 + 1;
          iVar10 = iVar11;
        } while (bVar2 == param_4 <= piVar3[lVar8]);
        if (!bVar2) {
          if (iVar7 != iVar9) {
            memmove(piVar3 + iVar7,piVar3 + lVar6,(longlong)(iVar11 - iVar9) << 2);
          }
          iVar7 = iVar7 + (iVar11 - iVar9);
        }
        bVar2 = (bool)(bVar2 ^ 1);
        iVar9 = iVar11;
      } while (lVar8 < lVar5);
      iVar4 = 0;
      param_2 = local_60;
      local_50 = iVar7;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        lVar5 = 0;
        do {
          iVar9 = *(int *)((longlong)local_58 + lVar5);
          if (*(int *)((longlong)local_58 + lVar5) < iVar4) {
            iVar9 = iVar4;
          }
          iVar4 = iVar9;
          lVar5 = lVar5 + 4;
        } while ((longlong)iVar7 * 4 != lVar5);
        *local_60 = iVar4;
        iVar7 = 1;
      }
    }
    *(char *)(param_2 + 1) = (char)iVar7;
    if (local_58 != (int *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147414960 FUN_147414960 body=191 status=ok
// SIG undefined FUN_147414960(void)

void FUN_147414960(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x20;
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      local_3a = *(undefined2 *)(lVar1 + lVar3);
      FUN_147414e80(param_1 + 8,&local_3a);
      lVar3 = lVar3 + 2;
    } while ((longlong)(int)lVar2 * 2 != lVar3);
  }
  lVar2 = param_3[3];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_3[2];
    lVar3 = 0;
    do {
      local_40 = *(undefined4 *)(lVar1 + lVar3);
      FUN_147414f6a(param_1 + 0x18,&local_40);
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147414a20 FUN_147414a20 body=105 status=ok
// SIG undefined FUN_147414a20(void)

ulonglong FUN_147414a20(longlong *param_1,short *param_2)

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
    lVar4 = uVar5 * 2;
    uVar3 = 0;
    do {
      if (*(short *)(lVar2 + uVar3 * 2) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_147414a4b;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -2;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147414ee6(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(short *)(lVar2 + uVar5 * 2) = *param_2;
LAB_147414a4b:
  return uVar5 & 0xffffffff;
}



// FUNCTION 147414a89 FUN_147414a89 body=427 status=ok
// SIG undefined FUN_147414a89(void)

undefined8 FUN_147414a89(undefined8 param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 4) {
    local_30 = L"FeatureLevelSM6";
    local_28 = 0xf;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"WindowsDynamicRHI";
    local_28 = 0x11;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"SM6";
  }
  else if (param_2 == 3) {
    local_30 = L"FeatureLevelSM4";
    local_28 = 0xf;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"WindowsDynamicRHI";
    local_28 = 0x11;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"SM5";
  }
  else if (param_2 == 1) {
    local_30 = L"FeatureLevelES31";
    local_28 = 0x10;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"WindowsDynamicRHI";
    local_28 = 0x11;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"ES3_1";
  }
  else {
    local_30 = L"FeatureLevelUnknown";
    local_28 = 0x13;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"WindowsDynamicRHI";
    local_28 = 0x11;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"<unknown>";
  }
  FUN_140208bae(param_1,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147414c35 FUN_147414c35 body=491 status=ok
// SIG undefined FUN_147414c35(void)

undefined8 FUN_147414c35(undefined8 param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_2) {
  case 0:
    local_38 = L"D3D11";
    local_30 = 5;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"WindowsDynamicRHI";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"DirectX 11";
    break;
  case 1:
    local_38 = L"D3D12";
    local_30 = 5;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"WindowsDynamicRHI";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"DirectX 12";
    break;
  case 2:
    pwVar1 = L"Vulkan";
    goto LAB_147414cff;
  case 3:
    pwVar1 = L"OpenGL";
LAB_147414cff:
    local_30 = 6;
    local_38 = pwVar1;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"WindowsDynamicRHI";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    break;
  case 4:
    if (DAT_14ca8558c == '\0') {
      DAT_14ca8558c = '\x01';
    }
    FUN_140009b9a(param_1,0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  default:
    local_38 = L"UnknownRHI";
    local_30 = 10;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"WindowsDynamicRHI";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"<Unknown>";
  }
  FUN_140208bae(param_1,local_40,local_3c,pwVar1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147414e26 FUN_147414e26 body=89 status=ok
// SIG undefined FUN_147414e26(void)

void FUN_147414e26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147414e80 FUN_147414e80 body=102 status=ok
// SIG undefined FUN_147414e80(void)

void FUN_147414e80(longlong *param_1,short *param_2)

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
      if (*(short *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 1) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 2;
    } while (lVar4 * 2 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147414ee6(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(short *)(lVar2 + lVar4 * 2) = *param_2;
  return;
}



// FUNCTION 147414ee6 FUN_147414ee6 body=130 status=ok
// SIG undefined FUN_147414ee6(void)

void FUN_147414ee6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147414f6a FUN_147414f6a body=103 status=ok
// SIG undefined FUN_147414f6a(void)

void FUN_147414f6a(longlong *param_1,int *param_2)

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
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147312b2a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 147414fd2 FUN_147414fd2 body=44 status=ok
// SIG undefined FUN_147414fd2(void)

void FUN_147414fd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741500a FUN_14741500a body=89 status=ok
// SIG undefined FUN_14741500a(void)

undefined8 FUN_14741500a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_1415a9970();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147415064 FUN_147415064 body=138 status=ok
// SIG undefined FUN_147415064(void)

void * FUN_147415064(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1474150ee FUN_1474150ee body=44 status=ok
// SIG undefined FUN_1474150ee(void)

void FUN_1474150ee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147415126 FUN_147415126 body=89 status=ok
// SIG undefined FUN_147415126(void)

undefined8 FUN_147415126(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_1415a9b9a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147415180 FUN_147415180 body=138 status=ok
// SIG undefined FUN_147415180(void)

void * FUN_147415180(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741520a FUN_14741520a body=44 status=ok
// SIG undefined FUN_14741520a(void)

void FUN_14741520a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147415242 FUN_147415242 body=89 status=ok
// SIG undefined FUN_147415242(void)

undefined8 FUN_147415242(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145f9aba8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 14741529c FUN_14741529c body=138 status=ok
// SIG undefined FUN_14741529c(void)

void * FUN_14741529c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147415326 FUN_147415326 body=39 status=ok
// SIG undefined FUN_147415326(void)

int FUN_147415326(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0x40;
  cVar1 = FUN_14473b0f0();
  if (cVar1 != '\0') {
    iVar2 = FUN_14743120a(1);
    iVar2 = iVar2 + 0x1c;
  }
  return iVar2;
}



// FUNCTION 14741534e FUN_14741534e body=44 status=ok
// SIG undefined FUN_14741534e(void)

void FUN_14741534e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147415388 FUN_147415388 body=39 status=ok
// SIG undefined FUN_147415388(void)

void FUN_147415388(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474153b0 FUN_1474153b0 body=138 status=ok
// SIG undefined FUN_1474153b0(void)

void * FUN_1474153b0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741543a FUN_14741543a body=44 status=ok
// SIG undefined FUN_14741543a(void)

void FUN_14741543a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147415474 FUN_147415474 body=39 status=ok
// SIG undefined FUN_147415474(void)

void FUN_147415474(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741549c FUN_14741549c body=138 status=ok
// SIG undefined FUN_14741549c(void)

void * FUN_14741549c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147415526 FUN_147415526 body=44 status=ok
// SIG undefined FUN_147415526(void)

void FUN_147415526(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741555a FUN_14741555a body=39 status=ok
// SIG undefined FUN_14741555a(void)

void FUN_14741555a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147422a38(uVar1,param_1);
  return;
}



// FUNCTION 147415582 FUN_147415582 body=152 status=ok
// SIG undefined FUN_147415582(void)

void * FUN_147415582(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x100);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  return _Dst;
}



// FUNCTION 14741561a FUN_14741561a body=658 status=ok
// SIG undefined FUN_14741561a(void)

void FUN_14741561a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FClearVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x40;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_14741570c;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14741570c:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x40;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar5 = 0x3f800000bf800000;
  puVar5[1] = 0x3f80000000000000;
  puVar5[2] = &DAT_3f8000003f800000;
  puVar5[3] = 0x3f80000000000000;
  puVar5[4] = 0xbf800000bf800000;
  puVar5[5] = 0x3f80000000000000;
  *(undefined4 *)(puVar5 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0xbf800000;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474158ad FUN_1474158ad body=439 status=ok
// SIG undefined FUN_1474158ad(void)

void FUN_1474158ad(ulonglong *param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 local_58 [2];
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == '\0') {
    local_b0 = local_98;
    local_98[0] = 0;
    local_88 = 0;
    local_a8 = param_9;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    FUN_1431f157f(param_1,param_3,param_4,param_5);
  }
  else {
    local_b0 = local_58;
    local_58[0] = 0;
    local_48 = 0;
    local_a8 = param_9;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    FUN_140d1e0a7(param_1,param_3,param_4);
  }
  uVar1 = DAT_14ca85ce8;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x30);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 4;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x28);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 4;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fc200;
  puVar2[2] = 0x200000000;
  *(undefined4 *)(puVar2 + 3) = 1;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147415a65 FUN_147415a65 body=656 status=ok
// SIG undefined FUN_147415a65(void)

void FUN_147415a65(ulonglong *param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                  longlong *param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  longlong local_d8 [2];
  undefined8 local_c8 [6];
  longlong local_98 [2];
  undefined8 local_88 [7];
  ulonglong local_50;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *param_9;
  if (param_2 == '\0') {
    local_c8[0] = 0;
    local_d8[0] = lVar1;
    if (lVar1 != 0) {
      plVar6 = param_9 + 4;
      if ((longlong *)param_9[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_9[2];
      }
      (**(code **)*plVar6)(plVar6,local_c8);
    }
    local_f0 = local_d8;
    local_f8 = param_8;
    local_100 = param_7;
    local_108 = param_6;
    local_e8 = 0;
    FUN_1431f157f(param_1,param_3,param_4,uVar7 & 0xffffffff);
  }
  else {
    local_88[0] = 0;
    local_98[0] = lVar1;
    if (lVar1 != 0) {
      plVar6 = param_9 + 4;
      if ((longlong *)param_9[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_9[2];
      }
      (**(code **)*plVar6)(plVar6,local_88);
    }
    local_f0 = local_98;
    local_f8 = param_8;
    local_100 = param_7;
    local_108 = param_6;
    local_e8 = 0;
    FUN_140d1e0a7(param_1,param_3,param_4,uVar7 & 0xffffffff);
  }
  pcVar2 = (code *)param_9[8];
  if (pcVar2 != (code *)0x0) {
    plVar6 = param_9 + 0xc;
    if ((longlong *)param_9[10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_9[10];
    }
    uVar3 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar3,param_1);
  }
  uVar3 = DAT_14ca85ce8;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 5;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x30);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 5;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = uVar3;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fc200;
  puVar4[2] = 0x200000000;
  *(undefined4 *)(puVar4 + 3) = 1;
  pcVar2 = (code *)param_9[0x10];
  if (pcVar2 != (code *)0x0) {
    plVar6 = param_9 + 0x14;
    if ((longlong *)param_9[0x12] != (longlong *)0x0) {
      plVar6 = (longlong *)param_9[0x12];
    }
    uVar3 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar3,param_1);
  }
  FUN_14714261e(param_9);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147415cf6 FUN_147415cf6 body=44 status=ok
// SIG undefined FUN_147415cf6(void)

void FUN_147415cf6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147415d2e FUN_147415d2e body=84 status=ok
// SIG undefined FUN_147415d2e(void)

longlong FUN_147415d2e(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0xfc) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined2 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147415d82 FUN_147415d82 body=166 status=ok
// SIG undefined FUN_147415d82(void)

void FUN_147415d82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xfc) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147415e28 FUN_147415e28 body=44 status=ok
// SIG undefined FUN_147415e28(void)

void FUN_147415e28(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147415e60 FUN_147415e60 body=67 status=ok
// SIG undefined FUN_147415e60(void)

longlong FUN_147415e60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425bce(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0xfc) = 0;
  return lVar1;
}



// FUNCTION 147415ea4 FUN_147415ea4 body=166 status=ok
// SIG undefined FUN_147415ea4(void)

void FUN_147415ea4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xfc) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147415f4a FUN_147415f4a body=44 status=ok
// SIG undefined FUN_147415f4a(void)

void FUN_147415f4a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147415f82 FUN_147415f82 body=39 status=ok
// SIG undefined FUN_147415f82(void)

void FUN_147415f82(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425c3c(uVar1,param_1);
  return;
}



// FUNCTION 147415faa FUN_147415faa body=166 status=ok
// SIG undefined FUN_147415faa(void)

void FUN_147415faa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xfc) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416050 FUN_147416050 body=44 status=ok
// SIG undefined FUN_147416050(void)

void FUN_147416050(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147416088 FUN_147416088 body=96 status=ok
// SIG undefined FUN_147416088(void)

longlong FUN_147416088(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined2 *)(lVar1 + 0xf0) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"ClearValue",1);
  return lVar1;
}



// FUNCTION 1474160e8 FUN_1474160e8 body=156 status=ok
// SIG undefined FUN_1474160e8(void)

void FUN_1474160e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416184 FUN_147416184 body=44 status=ok
// SIG undefined FUN_147416184(void)

void FUN_147416184(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1474161bc FUN_1474161bc body=96 status=ok
// SIG undefined FUN_1474161bc(void)

longlong FUN_1474161bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined2 *)(lVar1 + 0xf0) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"ClearValue",1);
  return lVar1;
}


