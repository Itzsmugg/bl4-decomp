// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492c8824 FUN_1492c8824 body=139 status=ok
// SIG undefined FUN_1492c8824(void)

void FUN_1492c8824(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_149284a8a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c88b0 FUN_1492c88b0 body=139 status=ok
// SIG undefined FUN_1492c88b0(void)

void FUN_1492c88b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_149284b86(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c893c FUN_1492c893c body=139 status=ok
// SIG undefined FUN_1492c893c(void)

void FUN_1492c893c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_1492c8298(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c89c8 FUN_1492c89c8 body=124 status=ok
// SIG undefined FUN_1492c89c8(void)

void FUN_1492c89c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x4c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar6;
    FUN_1492c8382(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c8a46 FUN_1492c8a46 body=139 status=ok
// SIG undefined FUN_1492c8a46(void)

void FUN_1492c8a46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_1492c8476(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c8ad2 FUN_1492c8ad2 body=148 status=ok
// SIG undefined FUN_1492c8ad2(void)

void FUN_1492c8ad2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xac) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x50,0);
      iVar5 = (int)(uVar4 / 0x50);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xac) = iVar6;
    FUN_1492c857a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c8b68 FUN_1492c8b68 body=355 status=ok
// SIG undefined FUN_1492c8b68(void)

void FUN_1492c8b68(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 **local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1492124ed(&uStack_70);
  local_80 = &PTR_FUN_14bc054e0;
  local_78 = param_2;
  FUN_1492c93ba(&local_68,param_3);
  local_58 = *(undefined4 *)(param_3 + 0x10);
  uStack_54 = *(undefined4 *)(param_3 + 0x14);
  uStack_50 = *(undefined4 *)(param_3 + 0x18);
  uStack_4c = *(undefined4 *)(param_3 + 0x1c);
  local_48 = *(undefined4 *)(param_3 + 0x20);
  uStack_44 = *(undefined4 *)(param_3 + 0x24);
  uStack_40 = *(undefined4 *)(param_3 + 0x28);
  uStack_3c = *(undefined4 *)(param_3 + 0x2c);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1475913a0(param_1,iVar2);
  }
  lVar1 = *param_1 + (longlong)iVar2 * 0x88;
  puVar3 = (undefined8 *)((longlong)iVar2 * 0x88 + *param_1);
  *(byte *)(puVar3 + 0x10) = *(byte *)(puVar3 + 0x10) | 3;
  *puVar3 = &PTR_LAB_14a4994f0;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_78._4_4_;
  *(undefined4 *)(puVar3 + 2) = uStack_70;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
  *puVar3 = &PTR_FUN_14bc054e0;
  *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfc | 2;
  FUN_1492884ae();
  if ((local_60 & 1) != 0) {
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfd | local_60 & 2;
    *(undefined8 ***)(lVar1 + 0x18) = local_68;
    local_60 = local_60 & 0xfe;
  }
  *(undefined4 *)(lVar1 + 0x38) = local_48;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_44;
  *(undefined4 *)(lVar1 + 0x40) = uStack_40;
  *(undefined4 *)(lVar1 + 0x44) = uStack_3c;
  *(undefined4 *)(lVar1 + 0x28) = local_58;
  *(undefined4 *)(lVar1 + 0x2c) = uStack_54;
  *(undefined4 *)(lVar1 + 0x30) = uStack_50;
  *(undefined4 *)(lVar1 + 0x34) = uStack_4c;
  local_80 = &PTR_FUN_14bc054e0;
  if ((local_60 & 1) != 0) {
    pppuVar4 = &local_68;
    if ((local_60 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_68;
    }
    local_60 = local_60 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_60 & 2) == 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c8ccc FUN_1492c8ccc body=141 status=ok
// SIG undefined FUN_1492c8ccc(void)

longlong FUN_1492c8ccc(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1492c8d5a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_1492c8d09;
  }
  local_30 = param_3;
  FUN_1492c8ddc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_1492c8d09:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c8d5a FUN_1492c8d5a body=129 status=ok
// SIG undefined FUN_1492c8d5a(void)

int FUN_1492c8d5a(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((((*(int *)(lVar3 + 0x10 + lVar5) == param_3[4]) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && ((piVar1[2] == param_3[2] && (piVar1[3] == param_3[3])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1492c8ddc FUN_1492c8ddc body=292 status=ok
// SIG undefined FUN_1492c8ddc(void)

undefined4 * FUN_1492c8ddc(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1492c8f02(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 2);
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  FUN_14024ff87(0,0);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_1492c8ff0(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1492c9100(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c8f02 FUN_1492c8f02 body=238 status=ok
// SIG undefined FUN_1492c8f02(void)

int * FUN_1492c8f02(longlong *param_1,int *param_2)

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



// FUNCTION 1492c8ff0 FUN_1492c8ff0 body=150 status=ok
// SIG undefined FUN_1492c8ff0(void)

undefined8 FUN_1492c8ff0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar11 = FUN_1492c8d5a(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    FUN_14024ff87(*(undefined8 *)(lVar2 + 0x18 + lVar12),*(undefined4 *)(lVar2 + 0x20 + lVar12));
    if (*(longlong *)(lVar2 + 0x18 + lVar12) != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1492c9086(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 1492c9086 FUN_1492c9086 body=122 status=ok
// SIG undefined FUN_1492c9086(void)

void FUN_1492c9086(longlong *param_1,int param_2)

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



// FUNCTION 1492c9100 FUN_1492c9100 body=462 status=ok
// SIG undefined FUN_1492c9100(void)

void FUN_1492c9100(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x30;
        uVar6 = FUN_1447addd0(lVar3 + lVar11,0x10);
        iVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + 0x10 + lVar11),uVar6);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x2c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1492c92d0 FUN_1492c92d0 body=52 status=ok
// SIG undefined FUN_1492c92d0(void)

undefined8 * FUN_1492c92d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc054e0;
  FUN_1492884ae(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c9304 FUN_1492c9304 body=163 status=ok
// SIG undefined FUN_1492c9304(void)

void FUN_1492c9304(longlong param_1,undefined **param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined1 auStack_68 [40];
  undefined *local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    FUN_1492124ed(local_40);
    FUN_14755f6a2(param_2);
    bVar1 = *(byte *)(param_2 + 8) | 3;
    *(byte *)(param_2 + 8) = bVar1;
    ppuVar2 = &PTR_FUN_14bc054f0;
    *param_2 = (undefined *)&PTR_FUN_14bc054f0;
    param_2[1] = local_40[0];
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 4) = 0x80000000;
  }
  else {
    ppuVar2 = (undefined **)*param_2;
  }
  if ((bVar1 & 2) == 0) {
    param_2 = ppuVar2;
  }
  if (param_2[1] != *(undefined **)(param_1 + 0x10)) {
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1492c93ba FUN_1492c93ba body=77 status=ok
// SIG undefined FUN_1492c93ba(void)

undefined8 * FUN_1492c93ba(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc | 2;
  FUN_1492884ae();
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    bVar1 = *(byte *)(param_2 + 1);
    *(byte *)(param_2 + 1) = bVar1 & 0xfe;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfd | bVar1 & 2;
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 1492c947a FUN_1492c947a body=57 status=ok
// SIG undefined FUN_1492c947a(void)

undefined8 * FUN_1492c947a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc054f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c94b4 FUN_1492c94b4 body=907 status=ok
// SIG undefined FUN_1492c94b4(void)

void FUN_1492c94b4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong **param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong **local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined2 local_72;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)FUN_1492169c8(param_3,param_4);
  if (plVar4 != (longlong *)0x0) {
    local_80 = param_7;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_4c = 0;
    local_98 = plVar4;
    local_90 = param_1;
    local_88 = param_2;
    FUN_1492c9a42(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    iVar7 = *(int *)(param_1 + 0x18);
    local_f0 = param_1;
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        plVar6 = plVar2;
        if ((*(byte *)(plVar2 + 1) & 2) == 0) {
          plVar6 = (longlong *)*plVar2;
        }
        local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*(undefined4 *)((longlong)plVar2 + 0x2c))
        ;
        local_100 = &local_98;
        (**(code **)(*plVar6 + 8))
                  (plVar6,local_70,*(undefined4 *)((longlong)plVar2 + 0x24),(char)plVar2[5]);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    FUN_1492c996c(local_70,local_9c,&local_98);
    lVar5 = local_f0;
    local_f8 = param_7;
    local_100 = param_6;
    local_108 = param_5;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_9c,local_f0);
    iVar7 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      local_c8 = (longlong *)0x0;
      FUN_14485c47a(&local_c8,param_2);
      iVar7 = (int)local_c8;
      iVar3 = local_c8._4_4_;
    }
    if ((longlong)(int)plVar4[4] != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(plVar4[3] + lVar8) == iVar7) && (*(int *)(plVar4[3] + 4 + lVar8) == iVar3)) {
          FUN_147553805(&local_b0);
          FUN_1475542ee(&local_a8,plVar4[5],local_b0);
          if (param_2 != 0) {
            plStack_d0 = (longlong *)plVar4[2];
            if (plStack_d0 == (longlong *)0x0) goto LAB_1492c975e;
            iVar7 = (int)plStack_d0[1];
            goto LAB_1492c9813;
          }
          plStack_e0 = (longlong *)plVar4[2];
          if (plStack_e0 == (longlong *)0x0) goto LAB_1492c96d4;
          iVar7 = (int)plStack_e0[1];
          goto LAB_1492c97e4;
        }
        lVar8 = lVar8 + 0xc;
      } while ((longlong)(int)plVar4[4] * 0xc != lVar8);
    }
  }
  goto LAB_1492c94ef;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_e0[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_e0 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492c97e4:
    if (iVar7 == 0) goto LAB_1492c96d4;
  }
  local_e8 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_e0 + 0xc) = *(int *)((longlong)plStack_e0 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492c96e1:
  plVar4 = plStack_e0;
  FUN_147553958(&local_c8,&local_e8);
  local_72 = 0x101;
  local_108 = &local_c8;
  FUN_1492c9eee(lVar5,param_7,&local_72,&local_a8);
  FUN_1475539a0(&local_c8);
  if (bVar9) goto LAB_1492c94ef;
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) goto LAB_1492c94ef;
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto LAB_1492c94ef;
  lVar5 = *plVar4;
  goto LAB_1492c97d9;
LAB_1492c96d4:
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492c96e1;
LAB_1492c975e:
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492c976c;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_d0[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_d0 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492c9813:
    if (iVar7 == 0) goto LAB_1492c975e;
  }
  local_d8 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_d0 + 0xc) = *(int *)((longlong)plStack_d0 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492c976c:
  plVar4 = plStack_d0;
  FUN_14755389e(&local_c8,&local_d8);
  local_72 = 0x101;
  local_108 = &local_a8;
  local_100 = (longlong **)&local_c8;
  FUN_1492c9dd6(lVar5,param_7,&local_72,param_2);
  FUN_1475538e6(&local_c8);
  if (!bVar9) {
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
        lVar5 = *plVar4;
LAB_1492c97d9:
        (**(code **)(lVar5 + 0x10))(plVar4);
      }
    }
  }
LAB_1492c94ef:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c9840 FUN_1492c9840 body=299 status=ok
// SIG undefined FUN_1492c9840(void)

void FUN_1492c9840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong **local_a0;
  undefined1 local_94 [4];
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_1492169c8(param_4,param_5);
  if (plVar4 != (longlong *)0x0) {
    local_78 = 0;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_4c = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    local_90 = plVar4;
    local_88 = param_1;
    local_80 = param_2;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        plVar5 = plVar3;
        if ((*(byte *)(plVar3 + 1) & 2) == 0) {
          plVar5 = (longlong *)*plVar3;
        }
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)plVar3 + 0x2c));
        local_a0 = &local_90;
        (**(code **)(*plVar5 + 8))
                  (plVar5,local_70,*(undefined4 *)((longlong)plVar3 + 0x24),(char)plVar3[5]);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_1492c996c(local_70,local_94,&local_90);
    local_a8 = param_6;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_3,local_94,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c996c FUN_1492c996c body=213 status=ok
// SIG undefined FUN_1492c996c(void)

float * FUN_1492c996c(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((uint)param_1[6] & 1) != 0) {
    local_24 = param_1[5];
    goto LAB_1492c99be;
  }
  if (((uint)param_1[1] & 1) == 0) {
    if (((uint)param_1[4] & 1) == 0) {
      (**(code **)(*(longlong *)*param_3 + 0x28))
                ((longlong *)*param_3,&local_24,param_3[2],param_3[3]);
      goto LAB_1492c99be;
    }
LAB_1492c99f3:
    if (*(char *)(param_1 + 9) == '\x01') {
      local_24 = param_1[7];
    }
    else {
      param_1[8] = 0.0;
      *(undefined1 *)(param_1 + 9) = 1;
      FUN_1492c51fe(param_3,&local_24);
      param_1[7] = local_24;
      param_1[8] = 1.4013e-45;
    }
  }
  else {
    fVar1 = param_1[2];
    if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_1492c99f3;
    local_24 = *param_1 / fVar1;
  }
  if (((uint)param_1[4] & 1) != 0) {
    local_24 = local_24 + param_1[3];
  }
LAB_1492c99be:
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c9a42 FUN_1492c9a42 body=597 status=ok
// SIG undefined FUN_1492c9a42(void)

void FUN_1492c9a42(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar2) >> 3);
      plVar8 = plVar2;
      plVar7 = plVar11;
      if (iVar13 != 0) {
LAB_1492c9b07:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar14 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar14;
          plVar6 = plVar11 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar12 = plVar3 + 1;
            do {
              plVar3 = plVar12;
              plVar15 = plVar1;
              if (plVar11 < plVar3) break;
              plVar1 = plVar15 + 1;
              plVar12 = plVar3 + 1;
            } while (*(int *)(*plVar3 + 0x2c) <= *(int *)(*plVar2 + 0x2c));
            plVar1 = plVar6 + -2;
            do {
              plVar12 = plVar6;
              plVar16 = plVar1;
              plVar6 = plVar12 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar16 + -1;
            } while (*(int *)(*plVar2 + 0x2c) <= *(int *)(*plVar6 + 0x2c));
            if (plVar6 < plVar3) goto LAB_1492c9b96;
            lVar14 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar14;
          } while( true );
        }
        if (plVar2 < plVar11) {
          do {
            plVar8 = plVar2;
            if (plVar2 + 1 <= plVar11) {
              plVar7 = plVar2 + 1;
              lVar14 = *plVar2;
              plVar6 = plVar2;
              do {
                lVar9 = *plVar7;
                plVar8 = plVar7;
                if (*(int *)(*plVar7 + 0x2c) <= *(int *)(lVar14 + 0x2c)) {
                  lVar9 = lVar14;
                  plVar8 = plVar6;
                }
                plVar7 = plVar7 + 1;
                lVar14 = lVar9;
                plVar6 = plVar8;
              } while (plVar7 <= plVar11);
            }
            lVar14 = *plVar8;
            *plVar8 = *plVar11;
            *plVar11 = lVar14;
            plVar11 = plVar11 + -1;
          } while (plVar2 < plVar11);
        }
        goto LAB_1492c9c76;
      }
LAB_1492c9c8b:
      FUN_1492c9c98(plVar2);
LAB_1492c9c76:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492c9b96:
  lVar14 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar14;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar16 - (longlong)plVar8 < (longlong)plVar7 - (longlong)plVar15) {
    if (plVar3 < plVar11) {
      *plVar10 = (longlong)plVar3;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar15 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_1492c9c76;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar16 = plVar11;
    if (plVar11 <= plVar3) goto LAB_1492c9c76;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 3);
  plVar8 = plVar15;
  plVar11 = plVar12;
  plVar7 = plVar16;
  if (iVar13 == 0) goto LAB_1492c9c8b;
  goto LAB_1492c9b07;
}



// FUNCTION 1492c9c98 FUN_1492c9c98 body=318 status=ok
// SIG undefined FUN_1492c9c98(void)

void FUN_1492c9c98(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001492c9cba:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)(param_1[iVar6] + 0x2c) <= *(int *)(param_1[iVar7] + 0x2c))) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if (*(int *)(lVar1 + 0x2c) < *(int *)(param_1[iVar6] + 0x2c)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x0001492c9cba;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(int *)(param_1[iVar6] + 0x2c) <= *(int *)(param_1[iVar3] + 0x2c))) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if (*(int *)(param_1[iVar7] + 0x2c) <= *(int *)(lVar1 + 0x2c)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1492c9dd6 FUN_1492c9dd6 body=278 status=ok
// SIG undefined FUN_1492c9dd6(void)

void FUN_1492c9dd6(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492c9e96:
    FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar3 + *(int *)(param_1 + 0x18);
    bVar4 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar3 + 0x1c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar2) {
          if (bVar4) goto LAB_1492c9ebb;
          goto LAB_1492c9e96;
        }
      }
      bVar4 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar3 + 0x10,1);
      FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
      FUN_1432dab96(local_80);
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
LAB_1492c9ebb:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c9eee FUN_1492c9eee body=251 status=ok
// SIG undefined FUN_1492c9eee(void)

void FUN_1492c9eee(longlong param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492c9f9e:
    FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar4 + *(int *)(param_1 + 0x18);
    bVar3 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar4 + 0x1c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar2) {
          if (bVar3) goto LAB_1492c9fb8;
          goto LAB_1492c9f9e;
        }
      }
      bVar3 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar4 + 0x10,1);
      FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
      FUN_1432dab96(local_80);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
LAB_1492c9fb8:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c9fea FUN_1492c9fea body=48 status=ok
// SIG undefined FUN_1492c9fea(void)

void FUN_1492c9fea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1492ca01a FUN_1492ca01a body=132 status=ok
// SIG undefined FUN_1492ca01a(void)

void FUN_1492ca01a(longlong param_1,int param_2)

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



// FUNCTION 1492ca0a0 FUN_1492ca0a0 body=361 status=ok
// SIG undefined FUN_1492ca0a0(void)

void FUN_1492ca0a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 **local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_149212558(&uStack_78);
  local_88 = &PTR_FUN_14bc05508;
  local_80 = param_2;
  FUN_1492ca2f4(&local_70,param_3);
  local_58 = *(undefined4 *)(param_3 + 0x18);
  uStack_54 = *(undefined4 *)(param_3 + 0x1c);
  uStack_50 = *(undefined4 *)(param_3 + 0x20);
  uStack_4c = *(undefined4 *)(param_3 + 0x24);
  local_48 = *(undefined4 *)(param_3 + 0x28);
  uStack_44 = *(undefined4 *)(param_3 + 0x2c);
  uStack_40 = *(undefined4 *)(param_3 + 0x30);
  uStack_3c = *(undefined4 *)(param_3 + 0x34);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1475913a0(param_1,iVar3);
  }
  lVar1 = *param_1 + (longlong)iVar3 * 0x88;
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x88);
  *(byte *)(puVar2 + 0x10) = *(byte *)(puVar2 + 0x10) | 3;
  *puVar2 = &PTR_LAB_14a4994f0;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_80._4_4_;
  *(undefined4 *)(puVar2 + 2) = uStack_78;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_74;
  *puVar2 = &PTR_FUN_14bc05508;
  *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xfc | 2;
  FUN_149288526(puVar2 + 3);
  if ((local_60 & 1) != 0) {
    *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) | 1;
    *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xfd | local_60 & 2;
    puVar2[3] = local_70;
    puVar2[4] = uStack_68;
    local_60 = local_60 & 0xfe;
  }
  *(undefined4 *)(lVar1 + 0x40) = local_48;
  *(undefined4 *)(lVar1 + 0x44) = uStack_44;
  *(undefined4 *)(lVar1 + 0x48) = uStack_40;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_3c;
  *(undefined4 *)(lVar1 + 0x30) = local_58;
  *(undefined4 *)(lVar1 + 0x34) = uStack_54;
  *(undefined4 *)(lVar1 + 0x38) = uStack_50;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_4c;
  local_88 = &PTR_FUN_14bc05508;
  if ((local_60 & 1) != 0) {
    pppuVar4 = &local_70;
    if ((local_60 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_70;
    }
    local_60 = local_60 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_60 & 2) == 0) {
      FUN_1400020a8(local_70);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ca20a FUN_1492ca20a body=52 status=ok
// SIG undefined FUN_1492ca20a(void)

undefined8 * FUN_1492ca20a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05508;
  FUN_149288526(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ca23e FUN_1492ca23e body=163 status=ok
// SIG undefined FUN_1492ca23e(void)

void FUN_1492ca23e(longlong param_1,undefined **param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined1 auStack_68 [40];
  undefined *local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    FUN_149212558(local_40);
    FUN_14755f6a2(param_2);
    bVar1 = *(byte *)(param_2 + 8) | 3;
    *(byte *)(param_2 + 8) = bVar1;
    ppuVar2 = &PTR_FUN_14bc05520;
    *param_2 = (undefined *)&PTR_FUN_14bc05520;
    param_2[1] = local_40[0];
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 4) = 0x80000000;
  }
  else {
    ppuVar2 = (undefined **)*param_2;
  }
  if ((bVar1 & 2) == 0) {
    param_2 = ppuVar2;
  }
  if (param_2[1] != *(undefined **)(param_1 + 0x10)) {
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1492ca2f4 FUN_1492ca2f4 body=77 status=ok
// SIG undefined FUN_1492ca2f4(void)

undefined8 * FUN_1492ca2f4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc | 2;
  FUN_149288526();
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    bVar1 = *(byte *)(param_2 + 2);
    *(byte *)(param_2 + 2) = bVar1 & 0xfe;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
  }
  return param_1;
}



// FUNCTION 1492ca3b4 FUN_1492ca3b4 body=57 status=ok
// SIG undefined FUN_1492ca3b4(void)

undefined8 * FUN_1492ca3b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05520;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ca3ee FUN_1492ca3ee body=917 status=ok
// SIG undefined FUN_1492ca3ee(void)

void FUN_1492ca3ee(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong **param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong **local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined2 local_86;
  undefined1 local_84 [8];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 local_5c;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)FUN_149216b8c(param_3,param_4);
  if (plVar4 != (longlong *)0x0) {
    local_90 = param_7;
    local_7c = 0;
    local_68 = 0;
    local_5c = 0;
    local_4c = 0;
    local_78 = 0;
    local_a8 = plVar4;
    local_a0 = param_1;
    local_98 = param_2;
    FUN_1492caab3(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    iVar7 = *(int *)(param_1 + 0x18);
    local_110 = param_1;
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        plVar6 = plVar2;
        if ((*(byte *)(plVar2 + 2) & 2) == 0) {
          plVar6 = (longlong *)*plVar2;
        }
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,*(undefined4 *)((longlong)plVar2 + 0x34))
        ;
        local_120 = &local_a8;
        (**(code **)(*plVar6 + 8))
                  (plVar6,local_84,*(undefined4 *)((longlong)plVar2 + 0x2c),(char)plVar2[6]);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    FUN_1492ca8be(local_84,local_b8,&local_a8);
    lVar5 = local_110;
    local_118 = param_7;
    local_120 = param_6;
    local_128 = param_5;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_b8,local_110);
    iVar7 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      local_e0 = (longlong *)0x0;
      FUN_14485c47a(&local_e0,param_2);
      iVar7 = (int)local_e0;
      iVar3 = local_e0._4_4_;
    }
    if ((longlong)(int)plVar4[4] != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(plVar4[3] + lVar8) == iVar7) && (*(int *)(plVar4[3] + 4 + lVar8) == iVar3)) {
          FUN_147553805(&local_c8);
          FUN_1475542ee(&local_c0,plVar4[5],local_c8);
          if (param_2 != 0) {
            plStack_f0 = (longlong *)plVar4[2];
            if (plStack_f0 == (longlong *)0x0) goto LAB_1492ca6a2;
            iVar7 = (int)plStack_f0[1];
            goto LAB_1492ca757;
          }
          plStack_100 = (longlong *)plVar4[2];
          if (plStack_100 == (longlong *)0x0) goto LAB_1492ca618;
          iVar7 = (int)plStack_100[1];
          goto LAB_1492ca728;
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)(int)plVar4[4] * 0x18 != lVar8);
    }
  }
  goto LAB_1492ca429;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_100[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_100 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492ca728:
    if (iVar7 == 0) goto LAB_1492ca618;
  }
  local_108 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_100 + 0xc) = *(int *)((longlong)plStack_100 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492ca625:
  plVar4 = plStack_100;
  FUN_147553958(&local_e0,&local_108);
  local_86 = 0x101;
  local_128 = &local_e0;
  FUN_1492caf60(lVar5,param_7,&local_86,&local_c0);
  FUN_1475539a0(&local_e0);
  if (bVar9) goto LAB_1492ca429;
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) goto LAB_1492ca429;
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto LAB_1492ca429;
  lVar5 = *plVar4;
  goto LAB_1492ca71d;
LAB_1492ca618:
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492ca625;
LAB_1492ca6a2:
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492ca6b0;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_f0[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_f0 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492ca757:
    if (iVar7 == 0) goto LAB_1492ca6a2;
  }
  local_f8 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_f0 + 0xc) = *(int *)((longlong)plStack_f0 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492ca6b0:
  plVar4 = plStack_f0;
  FUN_14755389e(&local_e0,&local_f8);
  local_86 = 0x101;
  local_128 = &local_c0;
  local_120 = (longlong **)&local_e0;
  FUN_1492cae48(lVar5,param_7,&local_86,param_2);
  FUN_1475538e6(&local_e0);
  if (!bVar9) {
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
        lVar5 = *plVar4;
LAB_1492ca71d:
        (**(code **)(lVar5 + 0x10))(plVar4);
      }
    }
  }
LAB_1492ca429:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492ca784 FUN_1492ca784 body=312 status=ok
// SIG undefined FUN_1492ca784(void)

void FUN_1492ca784(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong **local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_84 [8];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 local_5c;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)FUN_149216b8c(param_4,param_5);
  if (plVar4 != (longlong *)0x0) {
    local_90 = 0;
    local_7c = 0;
    local_68 = 0;
    local_5c = 0;
    local_4c = 0;
    local_78 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    local_a8 = plVar4;
    local_a0 = param_1;
    local_98 = param_2;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        plVar5 = plVar3;
        if ((*(byte *)(plVar3 + 2) & 2) == 0) {
          plVar5 = (longlong *)*plVar3;
        }
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)plVar3 + 0x34));
        local_c0 = &local_a8;
        (**(code **)(*plVar5 + 8))
                  (plVar5,local_84,*(undefined4 *)((longlong)plVar3 + 0x2c),(char)plVar3[6]);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_1492ca8be(local_84,local_b8,&local_a8);
    local_c8 = param_6;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_3,local_b8,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ca8be FUN_1492ca8be body=500 status=ok
// SIG undefined FUN_1492ca8be(void)

void FUN_1492ca8be(longlong param_1,double *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  bool bVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined8 *local_80;
  double *local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_80 = param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = 0;
  lVar8 = 0;
  bVar7 = false;
  pfVar3 = &local_88;
  pfVar6 = &local_84;
  bVar2 = true;
  local_78 = param_2;
  do {
    uVar4 = 1 << (sbyte)lVar8;
    if ((*(uint *)(param_1 + 0x28) >> (int)lVar8 & 1) == 0) {
      if ((*(uint *)(param_1 + 8) & uVar4) == 0) {
        if ((*(uint *)(param_1 + 0x1c) & uVar4) != 0) goto LAB_1492ca973;
      }
      else {
        fVar9 = *(float *)(param_1 + 0xc + lVar8 * 4);
        if ((fVar9 != 0.0) || (NAN(fVar9))) {
          fVar9 = *(float *)(param_1 + lVar8 * 4) / fVar9;
        }
        else {
LAB_1492ca973:
          if (*(char *)(param_1 + 0x38) == '\0') {
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x38) = 1;
            FUN_1492c69d0(local_80,&local_70);
            *(float *)(param_1 + 0x2c) = (float)local_70;
            *(float *)(param_1 + 0x30) = (float)local_68;
            *(undefined4 *)(param_1 + 0x34) = 3;
          }
          fVar9 = *(float *)(param_1 + 0x2c + lVar8 * 4);
        }
        *pfVar3 = fVar9;
        uVar5 = uVar5 | uVar4;
        if ((*(uint *)(param_1 + 0x1c) & uVar4) != 0) {
          fVar9 = *(float *)(param_1 + 0x14 + lVar8 * 4) + *pfVar3;
          goto LAB_1492ca92c;
        }
      }
    }
    else {
      fVar9 = *(float *)(param_1 + 0x20 + lVar8 * 4);
LAB_1492ca92c:
      *pfVar3 = fVar9;
      uVar5 = uVar5 | uVar4;
    }
    if ((uVar5 & uVar4) == 0) {
      if (!bVar7) {
        (**(code **)(*(longlong *)*local_80 + 0x28))
                  ((longlong *)*local_80,&local_70,local_80[2],local_80[3]);
        local_84 = (float)local_70;
        local_8c = (float)local_68;
      }
      *pfVar3 = *pfVar6;
      uVar5 = uVar5 | uVar4;
      bVar7 = true;
    }
    lVar8 = 1;
    bVar1 = !bVar2;
    pfVar3 = &local_90;
    pfVar6 = &local_8c;
    bVar2 = false;
    if (bVar1) {
      *local_78 = (double)local_88;
      local_78[1] = (double)local_90;
      if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1492caab3 FUN_1492caab3 body=597 status=ok
// SIG undefined FUN_1492caab3(void)

void FUN_1492caab3(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar2) >> 3);
      plVar8 = plVar2;
      plVar7 = plVar11;
      if (iVar13 != 0) {
LAB_1492cab78:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar14 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar14;
          plVar6 = plVar11 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar12 = plVar3 + 1;
            do {
              plVar3 = plVar12;
              plVar15 = plVar1;
              if (plVar11 < plVar3) break;
              plVar1 = plVar15 + 1;
              plVar12 = plVar3 + 1;
            } while (*(int *)(*plVar3 + 0x34) <= *(int *)(*plVar2 + 0x34));
            plVar1 = plVar6 + -2;
            do {
              plVar12 = plVar6;
              plVar16 = plVar1;
              plVar6 = plVar12 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar16 + -1;
            } while (*(int *)(*plVar2 + 0x34) <= *(int *)(*plVar6 + 0x34));
            if (plVar6 < plVar3) goto LAB_1492cac07;
            lVar14 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar14;
          } while( true );
        }
        if (plVar2 < plVar11) {
          do {
            plVar8 = plVar2;
            if (plVar2 + 1 <= plVar11) {
              plVar7 = plVar2 + 1;
              lVar14 = *plVar2;
              plVar6 = plVar2;
              do {
                lVar9 = *plVar7;
                plVar8 = plVar7;
                if (*(int *)(*plVar7 + 0x34) <= *(int *)(lVar14 + 0x34)) {
                  lVar9 = lVar14;
                  plVar8 = plVar6;
                }
                plVar7 = plVar7 + 1;
                lVar14 = lVar9;
                plVar6 = plVar8;
              } while (plVar7 <= plVar11);
            }
            lVar14 = *plVar8;
            *plVar8 = *plVar11;
            *plVar11 = lVar14;
            plVar11 = plVar11 + -1;
          } while (plVar2 < plVar11);
        }
        goto LAB_1492cace7;
      }
LAB_1492cacfc:
      FUN_1492cad09(plVar2);
LAB_1492cace7:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492cac07:
  lVar14 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar14;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar16 - (longlong)plVar8 < (longlong)plVar7 - (longlong)plVar15) {
    if (plVar3 < plVar11) {
      *plVar10 = (longlong)plVar3;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar15 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_1492cace7;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar16 = plVar11;
    if (plVar11 <= plVar3) goto LAB_1492cace7;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 3);
  plVar8 = plVar15;
  plVar11 = plVar12;
  plVar7 = plVar16;
  if (iVar13 == 0) goto LAB_1492cacfc;
  goto LAB_1492cab78;
}



// FUNCTION 1492cad09 FUN_1492cad09 body=318 status=ok
// SIG undefined FUN_1492cad09(void)

void FUN_1492cad09(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001492cad2b:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)(param_1[iVar6] + 0x34) <= *(int *)(param_1[iVar7] + 0x34))) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if (*(int *)(lVar1 + 0x34) < *(int *)(param_1[iVar6] + 0x34)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x0001492cad2b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(int *)(param_1[iVar6] + 0x34) <= *(int *)(param_1[iVar3] + 0x34))) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if (*(int *)(param_1[iVar7] + 0x34) <= *(int *)(lVar1 + 0x34)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1492cae48 FUN_1492cae48 body=278 status=ok
// SIG undefined FUN_1492cae48(void)

void FUN_1492cae48(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492caf08:
    FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar3 + *(int *)(param_1 + 0x18);
    bVar4 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar3 + 0x24);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar2) {
          if (bVar4) goto LAB_1492caf2d;
          goto LAB_1492caf08;
        }
      }
      bVar4 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar3 + 0x18,1);
      FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
      FUN_1432dab96(local_80);
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
LAB_1492caf2d:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492caf60 FUN_1492caf60 body=251 status=ok
// SIG undefined FUN_1492caf60(void)

void FUN_1492caf60(longlong param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492cb010:
    FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar4 + *(int *)(param_1 + 0x18);
    bVar3 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar4 + 0x24);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar2) {
          if (bVar3) goto LAB_1492cb02a;
          goto LAB_1492cb010;
        }
      }
      bVar3 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar4 + 0x18,1);
      FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
      FUN_1432dab96(local_80);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
LAB_1492cb02a:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cb05c FUN_1492cb05c body=48 status=ok
// SIG undefined FUN_1492cb05c(void)

void FUN_1492cb05c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1492cb08c FUN_1492cb08c body=132 status=ok
// SIG undefined FUN_1492cb08c(void)

void FUN_1492cb08c(longlong param_1,int param_2)

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



// FUNCTION 1492cb112 FUN_1492cb112 body=381 status=ok
// SIG undefined FUN_1492cb112(void)

void FUN_1492cb112(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1492125c3(&uStack_80);
  local_90 = &PTR_FUN_14bc05538;
  local_88 = param_2;
  FUN_1492cb37a(&local_78,param_3);
  local_58 = *(undefined4 *)(param_3 + 0x20);
  uStack_54 = *(undefined4 *)(param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 0x28);
  uStack_4c = *(undefined4 *)(param_3 + 0x2c);
  local_48 = *(undefined4 *)(param_3 + 0x30);
  uStack_44 = *(undefined4 *)(param_3 + 0x34);
  uStack_40 = *(undefined4 *)(param_3 + 0x38);
  uStack_3c = *(undefined4 *)(param_3 + 0x3c);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1475913a0(param_1,iVar3);
  }
  lVar1 = *param_1 + (longlong)iVar3 * 0x88;
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x88);
  *(byte *)(puVar2 + 0x10) = *(byte *)(puVar2 + 0x10) | 3;
  *puVar2 = &PTR_LAB_14a4994f0;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_88._4_4_;
  *(undefined4 *)(puVar2 + 2) = uStack_80;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_7c;
  *puVar2 = &PTR_FUN_14bc05538;
  *(byte *)(puVar2 + 6) = *(byte *)(puVar2 + 6) & 0xfc | 2;
  FUN_1492884ea(puVar2 + 3);
  if ((local_60 & 1) != 0) {
    *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 1;
    *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) & 0xfd | local_60 & 2;
    puVar2[5] = local_68;
    puVar2[3] = local_78;
    puVar2[4] = uStack_70;
    local_60 = local_60 & 0xfe;
  }
  *(undefined4 *)(lVar1 + 0x48) = local_48;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_44;
  *(undefined4 *)(lVar1 + 0x50) = uStack_40;
  *(undefined4 *)(lVar1 + 0x54) = uStack_3c;
  *(undefined4 *)(lVar1 + 0x38) = local_58;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_54;
  *(undefined4 *)(lVar1 + 0x40) = uStack_50;
  *(undefined4 *)(lVar1 + 0x44) = uStack_4c;
  local_90 = &PTR_FUN_14bc05538;
  if ((local_60 & 1) != 0) {
    pppuVar4 = &local_78;
    if ((local_60 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_78;
    }
    local_60 = local_60 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_60 & 2) == 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cb290 FUN_1492cb290 body=52 status=ok
// SIG undefined FUN_1492cb290(void)

undefined8 * FUN_1492cb290(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05538;
  FUN_1492884ea(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cb2c4 FUN_1492cb2c4 body=163 status=ok
// SIG undefined FUN_1492cb2c4(void)

void FUN_1492cb2c4(longlong param_1,undefined **param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined1 auStack_68 [40];
  undefined *local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    FUN_1492125c3(local_40);
    FUN_14755f6a2(param_2);
    bVar1 = *(byte *)(param_2 + 8) | 3;
    *(byte *)(param_2 + 8) = bVar1;
    ppuVar2 = &PTR_FUN_14bc05550;
    *param_2 = (undefined *)&PTR_FUN_14bc05550;
    param_2[1] = local_40[0];
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 4) = 0x80000000;
  }
  else {
    ppuVar2 = (undefined **)*param_2;
  }
  if ((bVar1 & 2) == 0) {
    param_2 = ppuVar2;
  }
  if (param_2[1] != *(undefined **)(param_1 + 0x10)) {
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1492cb37a FUN_1492cb37a body=85 status=ok
// SIG undefined FUN_1492cb37a(void)

undefined8 * FUN_1492cb37a(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc | 2;
  FUN_1492884ea();
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
    bVar1 = *(byte *)(param_2 + 3);
    *(byte *)(param_2 + 3) = bVar1 & 0xfe;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = param_2[2];
  }
  return param_1;
}



// FUNCTION 1492cb442 FUN_1492cb442 body=57 status=ok
// SIG undefined FUN_1492cb442(void)

undefined8 * FUN_1492cb442(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05550;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cb47c FUN_1492cb47c body=905 status=ok
// SIG undefined FUN_1492cb47c(void)

void FUN_1492cb47c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong **param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong **local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined2 local_9a;
  undefined1 local_98 [12];
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_70;
  undefined4 local_60;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = (longlong *)FUN_149216aaa(param_3,param_4);
  if (plVar4 != (longlong *)0x0) {
    local_a8 = param_7;
    local_70 = 0;
    local_60 = 0;
    local_4c = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_c0 = plVar4;
    local_b8 = param_1;
    local_b0 = param_2;
    FUN_1492cbba4(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    iVar7 = *(int *)(param_1 + 0x18);
    local_130 = param_1;
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        plVar6 = plVar2;
        if ((*(byte *)(plVar2 + 3) & 2) == 0) {
          plVar6 = (longlong *)*plVar2;
        }
        local_148 = (undefined8 *)CONCAT44(local_148._4_4_,*(undefined4 *)((longlong)plVar2 + 0x3c))
        ;
        local_140 = &local_c0;
        (**(code **)(*plVar6 + 8))
                  (plVar6,local_98,*(undefined4 *)((longlong)plVar2 + 0x34),(char)plVar2[7]);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    FUN_1492cb942(local_98,local_d8,&local_c0);
    lVar5 = local_130;
    local_138 = param_7;
    local_140 = param_6;
    local_148 = param_5;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_d8,local_130);
    iVar7 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      local_100 = (longlong *)0x0;
      FUN_14485c47a(&local_100,param_2);
      iVar7 = (int)local_100;
      iVar3 = local_100._4_4_;
    }
    if ((longlong)(int)plVar4[4] != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(plVar4[3] + lVar8) == iVar7) && (*(int *)(plVar4[3] + 4 + lVar8) == iVar3)) {
          FUN_147553805(&local_e8);
          FUN_1475542ee(&local_e0,plVar4[5],local_e8);
          if (param_2 != 0) {
            plStack_110 = (longlong *)plVar4[2];
            if (plStack_110 == (longlong *)0x0) goto LAB_1492cb724;
            iVar7 = (int)plStack_110[1];
            goto LAB_1492cb7d9;
          }
          plStack_120 = (longlong *)plVar4[2];
          if (plStack_120 == (longlong *)0x0) goto LAB_1492cb69a;
          iVar7 = (int)plStack_120[1];
          goto LAB_1492cb7aa;
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)(int)plVar4[4] * 0x20 != lVar8);
    }
  }
  goto LAB_1492cb4b7;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_120[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_120 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492cb7aa:
    if (iVar7 == 0) goto LAB_1492cb69a;
  }
  local_128 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_120 + 0xc) = *(int *)((longlong)plStack_120 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492cb6a7:
  plVar4 = plStack_120;
  FUN_147553958(&local_100,&local_128);
  local_9a = 0x101;
  local_148 = &local_100;
  FUN_1492cc050(lVar5,param_7,&local_9a,&local_e0);
  FUN_1475539a0(&local_100);
  if (bVar9) goto LAB_1492cb4b7;
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) goto LAB_1492cb4b7;
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto LAB_1492cb4b7;
  lVar5 = *plVar4;
  goto LAB_1492cb79f;
LAB_1492cb69a:
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492cb6a7;
LAB_1492cb724:
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492cb732;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_110[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_110 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492cb7d9:
    if (iVar7 == 0) goto LAB_1492cb724;
  }
  local_118 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_110 + 0xc) = *(int *)((longlong)plStack_110 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492cb732:
  plVar4 = plStack_110;
  FUN_14755389e(&local_100,&local_118);
  local_9a = 0x101;
  local_148 = &local_e0;
  local_140 = (longlong **)&local_100;
  FUN_1492cbf38(lVar5,param_7,&local_9a,param_2);
  FUN_1475538e6(&local_100);
  if (!bVar9) {
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
        lVar5 = *plVar4;
LAB_1492cb79f:
        (**(code **)(lVar5 + 0x10))(plVar4);
      }
    }
  }
LAB_1492cb4b7:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cb806 FUN_1492cb806 body=315 status=ok
// SIG undefined FUN_1492cb806(void)

void FUN_1492cb806(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong **local_e0;
  undefined1 local_d0 [24];
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [12];
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_70;
  undefined4 local_60;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)FUN_149216aaa(param_4,param_5);
  if (plVar4 != (longlong *)0x0) {
    local_a0 = 0;
    local_70 = 0;
    local_60 = 0;
    local_4c = 0;
    local_8c = 0;
    uStack_84 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    local_b8 = plVar4;
    local_b0 = param_1;
    local_a8 = param_2;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        plVar5 = plVar3;
        if ((*(byte *)(plVar3 + 3) & 2) == 0) {
          plVar5 = (longlong *)*plVar3;
        }
        local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)((longlong)plVar3 + 0x3c));
        local_e0 = &local_b8;
        (**(code **)(*plVar5 + 8))
                  (plVar5,local_98,*(undefined4 *)((longlong)plVar3 + 0x34),(char)plVar3[7]);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_1492cb942(local_98,local_d0,&local_b8);
    local_e8 = param_6;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_3,local_d0,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cb942 FUN_1492cb942 body=609 status=ok
// SIG undefined FUN_1492cb942(void)

double * FUN_1492cb942(longlong param_1,double *param_2,undefined8 *param_3)

{
  uint uVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_f8 [40];
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8 [3];
  uint local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  double local_88 [3];
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_ac = 0;
  uVar1 = 0;
  lVar6 = 0;
  bVar5 = false;
  do {
    uVar4 = 1 << ((byte)lVar6 & 0x1f);
    if ((*(uint *)(param_1 + 0x38) >> ((uint)lVar6 & 0x1f) & 1) == 0) {
      if ((*(uint *)(param_1 + 0xc) & uVar4) == 0) {
        if ((*(uint *)(param_1 + 0x28) & uVar4) != 0) goto LAB_1492cb9f8;
      }
      else {
        fVar7 = *(float *)(param_1 + 0x10 + lVar6 * 4);
        if ((fVar7 != 0.0) || (NAN(fVar7))) {
          fVar7 = *(float *)(param_1 + lVar6 * 4) / fVar7;
        }
        else {
LAB_1492cb9f8:
          if (*(char *)(param_1 + 0x4c) == '\0') {
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 1;
            FUN_1492c5e40(param_3,&local_d0);
            local_88[0] = local_d0;
            local_88[1] = (double)local_c8;
            local_88[2] = (double)uStack_c0;
            uStack_64 = 7;
            lVar3 = 0;
            pfVar2 = (float *)&local_70;
            do {
              *pfVar2 = (float)*(double *)((longlong)local_88 + lVar3);
              pfVar2 = pfVar2 + 1;
              lVar3 = lVar3 + 8;
            } while (lVar3 != 0x18);
            *(undefined8 *)(param_1 + 0x3c) = local_70;
            *(ulonglong *)(param_1 + 0x44) = CONCAT44(uStack_64,uStack_68);
          }
          fVar7 = *(float *)(param_1 + 0x3c + lVar6 * 4);
        }
        local_b8[lVar6] = fVar7;
        uVar1 = local_ac | uVar4;
        local_ac = uVar1;
        if ((*(uint *)(param_1 + 0x28) & uVar4) != 0) {
          fVar7 = *(float *)(param_1 + 0x1c + lVar6 * 4) + local_b8[lVar6];
          goto LAB_1492cb9b6;
        }
      }
    }
    else {
      fVar7 = *(float *)(param_1 + 0x2c + lVar6 * 4);
LAB_1492cb9b6:
      local_b8[lVar6] = fVar7;
      uVar1 = local_ac | uVar4;
      local_ac = uVar1;
    }
    if ((uVar1 & uVar4) == 0) {
      if (!bVar5) {
        local_98 = 1;
        (**(code **)(*(longlong *)*param_3 + 0x28))
                  ((longlong *)*param_3,&local_d0,param_3[2],param_3[3]);
        local_88[0] = local_d0;
        local_88[1] = (double)local_c8;
        local_88[2] = (double)uStack_c0;
        uStack_64 = 7;
        lVar3 = 0;
        pfVar2 = (float *)&local_70;
        do {
          *pfVar2 = (float)*(double *)((longlong)local_88 + lVar3);
          pfVar2 = pfVar2 + 1;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0x18);
        local_a8 = local_70;
        uStack_a0 = CONCAT44(uStack_64,uStack_68);
      }
      local_b8[lVar6] = *(float *)((longlong)&local_a8 + lVar6 * 4);
      uVar1 = uVar4 | local_ac;
      bVar5 = true;
      local_ac = uVar1;
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 3) {
      *param_2 = (double)local_b8[0];
      param_2[1] = (double)local_b8[1];
      param_2[2] = (double)local_b8[2];
      if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 1492cbba4 FUN_1492cbba4 body=597 status=ok
// SIG undefined FUN_1492cbba4(void)

void FUN_1492cbba4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar2) >> 3);
      plVar8 = plVar2;
      plVar7 = plVar11;
      if (iVar13 != 0) {
LAB_1492cbc69:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar14 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar14;
          plVar6 = plVar11 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar12 = plVar3 + 1;
            do {
              plVar3 = plVar12;
              plVar15 = plVar1;
              if (plVar11 < plVar3) break;
              plVar1 = plVar15 + 1;
              plVar12 = plVar3 + 1;
            } while (*(int *)(*plVar3 + 0x3c) <= *(int *)(*plVar2 + 0x3c));
            plVar1 = plVar6 + -2;
            do {
              plVar12 = plVar6;
              plVar16 = plVar1;
              plVar6 = plVar12 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar16 + -1;
            } while (*(int *)(*plVar2 + 0x3c) <= *(int *)(*plVar6 + 0x3c));
            if (plVar6 < plVar3) goto LAB_1492cbcf8;
            lVar14 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar14;
          } while( true );
        }
        if (plVar2 < plVar11) {
          do {
            plVar8 = plVar2;
            if (plVar2 + 1 <= plVar11) {
              plVar7 = plVar2 + 1;
              lVar14 = *plVar2;
              plVar6 = plVar2;
              do {
                lVar9 = *plVar7;
                plVar8 = plVar7;
                if (*(int *)(*plVar7 + 0x3c) <= *(int *)(lVar14 + 0x3c)) {
                  lVar9 = lVar14;
                  plVar8 = plVar6;
                }
                plVar7 = plVar7 + 1;
                lVar14 = lVar9;
                plVar6 = plVar8;
              } while (plVar7 <= plVar11);
            }
            lVar14 = *plVar8;
            *plVar8 = *plVar11;
            *plVar11 = lVar14;
            plVar11 = plVar11 + -1;
          } while (plVar2 < plVar11);
        }
        goto LAB_1492cbdd8;
      }
LAB_1492cbded:
      FUN_1492cbdfa(plVar2);
LAB_1492cbdd8:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492cbcf8:
  lVar14 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar14;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar16 - (longlong)plVar8 < (longlong)plVar7 - (longlong)plVar15) {
    if (plVar3 < plVar11) {
      *plVar10 = (longlong)plVar3;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar15 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_1492cbdd8;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar16 = plVar11;
    if (plVar11 <= plVar3) goto LAB_1492cbdd8;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 3);
  plVar8 = plVar15;
  plVar11 = plVar12;
  plVar7 = plVar16;
  if (iVar13 == 0) goto LAB_1492cbded;
  goto LAB_1492cbc69;
}



// FUNCTION 1492cbdfa FUN_1492cbdfa body=318 status=ok
// SIG undefined FUN_1492cbdfa(void)

void FUN_1492cbdfa(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001492cbe1c:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)(param_1[iVar6] + 0x3c) <= *(int *)(param_1[iVar7] + 0x3c))) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if (*(int *)(lVar1 + 0x3c) < *(int *)(param_1[iVar6] + 0x3c)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x0001492cbe1c;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(int *)(param_1[iVar6] + 0x3c) <= *(int *)(param_1[iVar3] + 0x3c))) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if (*(int *)(param_1[iVar7] + 0x3c) <= *(int *)(lVar1 + 0x3c)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1492cbf38 FUN_1492cbf38 body=278 status=ok
// SIG undefined FUN_1492cbf38(void)

void FUN_1492cbf38(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492cbff8:
    FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar3 + *(int *)(param_1 + 0x18);
    bVar4 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar3 + 0x2c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar2) {
          if (bVar4) goto LAB_1492cc01d;
          goto LAB_1492cbff8;
        }
      }
      bVar4 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar3 + 0x20,1);
      FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
      FUN_1432dab96(local_80);
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
LAB_1492cc01d:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cc050 FUN_1492cc050 body=251 status=ok
// SIG undefined FUN_1492cc050(void)

void FUN_1492cc050(longlong param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492cc100:
    FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar4 + *(int *)(param_1 + 0x18);
    bVar3 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar4 + 0x2c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar2) {
          if (bVar3) goto LAB_1492cc11a;
          goto LAB_1492cc100;
        }
      }
      bVar3 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar4 + 0x20,1);
      FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
      FUN_1432dab96(local_80);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
LAB_1492cc11a:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cc14c FUN_1492cc14c body=48 status=ok
// SIG undefined FUN_1492cc14c(void)

void FUN_1492cc14c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1492cc17c FUN_1492cc17c body=132 status=ok
// SIG undefined FUN_1492cc17c(void)

void FUN_1492cc17c(longlong param_1,int param_2)

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



// FUNCTION 1492cc202 FUN_1492cc202 body=263 status=ok
// SIG undefined FUN_1492cc202(void)

void FUN_1492cc202(longlong *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 **local_a0 [9];
  byte local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14921262e(local_a8);
  local_b8 = &PTR_FUN_14bc05568;
  local_b0 = param_2;
  FUN_1492cc472(local_a0,param_3);
  local_50 = *(undefined4 *)(param_3 + 0x50);
  uStack_4c = *(undefined4 *)(param_3 + 0x54);
  uStack_48 = *(undefined4 *)(param_3 + 0x58);
  uStack_44 = *(undefined4 *)(param_3 + 0x5c);
  local_40 = *(undefined4 *)(param_3 + 0x60);
  uStack_3c = *(undefined4 *)(param_3 + 100);
  uStack_38 = *(undefined4 *)(param_3 + 0x68);
  uStack_34 = *(undefined4 *)(param_3 + 0x6c);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1475913a0(param_1,iVar2);
  }
  lVar3 = *param_1;
  pbVar1 = (byte *)(lVar3 + 0x80 + (longlong)iVar2 * 0x88);
  *pbVar1 = *pbVar1 & 0xfe;
  FUN_1492cc30a(lVar3 + (longlong)iVar2 * 0x88,&local_b8);
  local_b8 = &PTR_FUN_14bc05568;
  if ((local_58 & 1) != 0) {
    pppuVar4 = local_a0;
    if ((local_58 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_a0[0];
    }
    local_58 = local_58 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_58 & 2) == 0) {
      FUN_1400020a8(local_a0[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cc30a FUN_1492cc30a body=125 status=ok
// SIG undefined FUN_1492cc30a(void)

void FUN_1492cc30a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar8 = (undefined8 *)FUN_14001cc68(0x88,8);
  *param_1 = puVar8;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar8;
  }
  *param_1 = &PTR_LAB_14a4994f0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *param_1 = &PTR_FUN_14bc05568;
  FUN_1492cc472(param_1 + 3,param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar7;
  return;
}



// FUNCTION 1492cc388 FUN_1492cc388 body=52 status=ok
// SIG undefined FUN_1492cc388(void)

undefined8 * FUN_1492cc388(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05568;
  FUN_149288562(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cc3bc FUN_1492cc3bc body=163 status=ok
// SIG undefined FUN_1492cc3bc(void)

void FUN_1492cc3bc(longlong param_1,undefined **param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined1 auStack_68 [40];
  undefined *local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    FUN_14921262e(local_40);
    FUN_14755f6a2(param_2);
    bVar1 = *(byte *)(param_2 + 8) | 3;
    *(byte *)(param_2 + 8) = bVar1;
    ppuVar2 = &PTR_FUN_14bc05580;
    *param_2 = (undefined *)&PTR_FUN_14bc05580;
    param_2[1] = local_40[0];
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 4) = 0x80000000;
  }
  else {
    ppuVar2 = (undefined **)*param_2;
  }
  if ((bVar1 & 2) == 0) {
    param_2 = ppuVar2;
  }
  if (param_2[1] != *(undefined **)(param_1 + 0x10)) {
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1492cc472 FUN_1492cc472 body=84 status=ok
// SIG undefined FUN_1492cc472(void)

undefined8 * FUN_1492cc472(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc | 2;
  FUN_149288562();
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
    bVar1 = *(byte *)(param_2 + 9);
    *(byte *)(param_2 + 9) = bVar1 & 0xfe;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfd | bVar1 & 2;
    puVar3 = param_1;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}



// FUNCTION 1492cc538 FUN_1492cc538 body=57 status=ok
// SIG undefined FUN_1492cc538(void)

undefined8 * FUN_1492cc538(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05580;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cc572 FUN_1492cc572 body=926 status=ok
// SIG undefined FUN_1492cc572(void)

void FUN_1492cc572(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong **param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong **local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [72];
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined2 local_112;
  undefined1 local_110 [36];
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 local_a0;
  undefined4 local_78;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar4 = (longlong *)FUN_149216c6e(param_3,param_4);
  if (plVar4 != (longlong *)0x0) {
    local_120 = param_7;
    local_a0 = 0;
    local_78 = 0;
    local_4c = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    local_138 = plVar4;
    local_130 = param_1;
    local_128 = param_2;
    FUN_1492ccc89(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    iVar7 = *(int *)(param_1 + 0x18);
    local_1d0 = param_1;
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        plVar6 = plVar2;
        if ((*(byte *)(plVar2 + 9) & 2) == 0) {
          plVar6 = (longlong *)*plVar2;
        }
        local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,*(undefined4 *)((longlong)plVar2 + 0x6c))
        ;
        local_1e0 = &local_138;
        (**(code **)(*plVar6 + 8))
                  (plVar6,local_110,*(undefined4 *)((longlong)plVar2 + 100),(char)plVar2[0xd]);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    FUN_1492cca6c(local_110,local_180,&local_138);
    lVar5 = local_1d0;
    local_1d8 = param_7;
    local_1e0 = param_6;
    local_1e8 = param_5;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_180,local_1d0);
    iVar7 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      local_1a8 = (longlong *)0x0;
      FUN_14485c47a(&local_1a8,param_2);
      iVar7 = (int)local_1a8;
      iVar3 = local_1a8._4_4_;
    }
    if ((longlong)(int)plVar4[4] != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(plVar4[3] + lVar8) == iVar7) && (*(int *)(plVar4[3] + 4 + lVar8) == iVar3)) {
          FUN_147553805(&local_190);
          FUN_1475542ee(&local_188,plVar4[5],local_190);
          if (param_2 != 0) {
            plStack_1b0 = (longlong *)plVar4[2];
            if (plStack_1b0 == (longlong *)0x0) goto LAB_1492cc82f;
            iVar7 = (int)plStack_1b0[1];
            goto LAB_1492cc8e4;
          }
          plStack_1c0 = (longlong *)plVar4[2];
          if (plStack_1c0 == (longlong *)0x0) goto LAB_1492cc7a5;
          iVar7 = (int)plStack_1c0[1];
          goto LAB_1492cc8b5;
        }
        lVar8 = lVar8 + 0x50;
      } while ((longlong)(int)plVar4[4] * 0x50 != lVar8);
    }
  }
  goto LAB_1492cc5ad;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_1c0[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_1c0 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492cc8b5:
    if (iVar7 == 0) goto LAB_1492cc7a5;
  }
  local_1c8 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_1c0 + 0xc) = *(int *)((longlong)plStack_1c0 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492cc7b2:
  plVar4 = plStack_1c0;
  FUN_147553958(&local_1a8,&local_1c8);
  local_112 = 0x101;
  local_1e8 = &local_1a8;
  FUN_1492cd136(lVar5,param_7,&local_112,&local_188);
  FUN_1475539a0(&local_1a8);
  if (bVar9) goto LAB_1492cc5ad;
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) goto LAB_1492cc5ad;
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto LAB_1492cc5ad;
  lVar5 = *plVar4;
  goto LAB_1492cc8aa;
LAB_1492cc7a5:
  local_1c8 = 0;
  plStack_1c0 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492cc7b2;
LAB_1492cc82f:
  local_1b8 = 0;
  plStack_1b0 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_1492cc83d;
  while( true ) {
    LOCK();
    iVar3 = (int)plStack_1b0[1];
    bVar9 = iVar7 == iVar3;
    if (bVar9) {
      *(int *)(plStack_1b0 + 1) = iVar7 + 1;
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
    UNLOCK();
    if (bVar9) break;
LAB_1492cc8e4:
    if (iVar7 == 0) goto LAB_1492cc82f;
  }
  local_1b8 = plVar4[1];
  LOCK();
  *(int *)((longlong)plStack_1b0 + 0xc) = *(int *)((longlong)plStack_1b0 + 0xc) + 1;
  UNLOCK();
  bVar9 = false;
LAB_1492cc83d:
  plVar4 = plStack_1b0;
  FUN_14755389e(&local_1a8,&local_1b8);
  local_112 = 0x101;
  local_1e8 = &local_188;
  local_1e0 = (longlong **)&local_1a8;
  FUN_1492cd01e(lVar5,param_7,&local_112,param_2);
  FUN_1475538e6(&local_1a8);
  if (!bVar9) {
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
        lVar5 = *plVar4;
LAB_1492cc8aa:
        (**(code **)(lVar5 + 0x10))(plVar4);
      }
    }
  }
LAB_1492cc5ad:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cc912 FUN_1492cc912 body=345 status=ok
// SIG undefined FUN_1492cc912(void)

void FUN_1492cc912(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong **local_180;
  undefined1 local_178 [72];
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [36];
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 local_a0;
  undefined4 local_78;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar4 = (longlong *)FUN_149216c6e(param_4,param_5);
  if (plVar4 != (longlong *)0x0) {
    local_118 = 0;
    local_a0 = 0;
    local_78 = 0;
    local_4c = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    local_130 = plVar4;
    local_128 = param_1;
    local_120 = param_2;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        plVar5 = plVar3;
        if ((*(byte *)(plVar3 + 9) & 2) == 0) {
          plVar5 = (longlong *)*plVar3;
        }
        local_188 = CONCAT44(local_188._4_4_,*(undefined4 *)((longlong)plVar3 + 0x6c));
        local_180 = &local_130;
        (**(code **)(*plVar5 + 8))
                  (plVar5,local_110,*(undefined4 *)((longlong)plVar3 + 100),(char)plVar3[0xd]);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_1492cca6c(local_110,local_178,&local_130);
    local_188 = param_6;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_3,local_178,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cca6c FUN_1492cca6c body=540 status=ok
// SIG undefined FUN_1492cca6c(void)

undefined8 * FUN_1492cca6c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_128 [40];
  undefined1 local_100 [76];
  float local_b4 [9];
  uint local_90;
  float local_8c [9];
  undefined4 local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_64 = '\0';
  local_90 = 0;
  uVar4 = 0;
  lVar6 = 0;
  do {
    uVar5 = 1 << ((byte)lVar6 & 0x1f);
    if ((*(uint *)(param_1 + 0x98) >> ((uint)lVar6 & 0x1f) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x24) & uVar5) == 0) {
        if ((*(uint *)(param_1 + 0x70) & uVar5) != 0) goto LAB_1492ccb33;
      }
      else {
        fVar7 = *(float *)(param_1 + 0x28 + lVar6 * 4);
        if ((fVar7 != 0.0) || (NAN(fVar7))) {
          fVar7 = *(float *)(param_1 + lVar6 * 4) / fVar7;
        }
        else {
LAB_1492ccb33:
          if (*(char *)(param_1 + 0xc4) == '\0') {
            *(undefined4 *)(param_1 + 0xc0) = 0;
            *(undefined1 *)(param_1 + 0xc4) = 1;
            FUN_1492c7e18(param_3,local_100);
            FUN_149212699(local_100,param_1 + 0x9c);
          }
          fVar7 = *(float *)(param_1 + 0x9c + lVar6 * 4);
        }
        local_b4[lVar6] = fVar7;
        uVar4 = local_90 | uVar5;
        local_90 = uVar4;
        if ((*(uint *)(param_1 + 0x70) & uVar5) != 0) {
          fVar7 = *(float *)(param_1 + 0x4c + lVar6 * 4) + local_b4[lVar6];
          goto LAB_1492ccaeb;
        }
      }
    }
    else {
      fVar7 = *(float *)(param_1 + 0x74 + lVar6 * 4);
LAB_1492ccaeb:
      local_b4[lVar6] = fVar7;
      uVar4 = local_90 | uVar5;
      local_90 = uVar4;
    }
    if ((uVar4 & uVar5) == 0) {
      if (local_64 == '\0') {
        local_68 = 0;
        local_64 = '\x01';
        (**(code **)(*(longlong *)*param_3 + 0x28))
                  ((longlong *)*param_3,local_100,param_3[2],param_3[3]);
        FUN_149212699(local_100,local_8c);
      }
      local_b4[lVar6] = local_8c[lVar6];
      uVar4 = uVar5 | local_90;
      local_90 = uVar4;
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 9) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      uVar3 = DAT_14c846518._4_4_;
      uVar2 = (undefined4)DAT_14c846518;
      uVar1 = DAT_14c846510._4_4_;
      *(undefined4 *)(param_2 + 6) = (undefined4)DAT_14c846510;
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar1;
      *(undefined4 *)(param_2 + 7) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar3;
      param_2[8] = DAT_14c846520;
      FUN_14921279a(local_b4,param_2);
      if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 1492ccc89 FUN_1492ccc89 body=597 status=ok
// SIG undefined FUN_1492ccc89(void)

void FUN_1492ccc89(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar2) >> 3);
      plVar8 = plVar2;
      plVar7 = plVar11;
      if (iVar13 != 0) {
LAB_1492ccd4e:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar14 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar14;
          plVar6 = plVar11 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar12 = plVar3 + 1;
            do {
              plVar3 = plVar12;
              plVar15 = plVar1;
              if (plVar11 < plVar3) break;
              plVar1 = plVar15 + 1;
              plVar12 = plVar3 + 1;
            } while (*(int *)(*plVar3 + 0x6c) <= *(int *)(*plVar2 + 0x6c));
            plVar1 = plVar6 + -2;
            do {
              plVar12 = plVar6;
              plVar16 = plVar1;
              plVar6 = plVar12 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar16 + -1;
            } while (*(int *)(*plVar2 + 0x6c) <= *(int *)(*plVar6 + 0x6c));
            if (plVar6 < plVar3) goto LAB_1492ccddd;
            lVar14 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar14;
          } while( true );
        }
        if (plVar2 < plVar11) {
          do {
            plVar8 = plVar2;
            if (plVar2 + 1 <= plVar11) {
              plVar7 = plVar2 + 1;
              lVar14 = *plVar2;
              plVar6 = plVar2;
              do {
                lVar9 = *plVar7;
                plVar8 = plVar7;
                if (*(int *)(*plVar7 + 0x6c) <= *(int *)(lVar14 + 0x6c)) {
                  lVar9 = lVar14;
                  plVar8 = plVar6;
                }
                plVar7 = plVar7 + 1;
                lVar14 = lVar9;
                plVar6 = plVar8;
              } while (plVar7 <= plVar11);
            }
            lVar14 = *plVar8;
            *plVar8 = *plVar11;
            *plVar11 = lVar14;
            plVar11 = plVar11 + -1;
          } while (plVar2 < plVar11);
        }
        goto LAB_1492ccebd;
      }
LAB_1492cced2:
      FUN_1492ccedf(plVar2);
LAB_1492ccebd:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492ccddd:
  lVar14 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar14;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar16 - (longlong)plVar8 < (longlong)plVar7 - (longlong)plVar15) {
    if (plVar3 < plVar11) {
      *plVar10 = (longlong)plVar3;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar15 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_1492ccebd;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar16 = plVar11;
    if (plVar11 <= plVar3) goto LAB_1492ccebd;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 3);
  plVar8 = plVar15;
  plVar11 = plVar12;
  plVar7 = plVar16;
  if (iVar13 == 0) goto LAB_1492cced2;
  goto LAB_1492ccd4e;
}



// FUNCTION 1492ccedf FUN_1492ccedf body=318 status=ok
// SIG undefined FUN_1492ccedf(void)

void FUN_1492ccedf(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001492ccf01:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)(param_1[iVar6] + 0x6c) <= *(int *)(param_1[iVar7] + 0x6c))) {
          iVar6 = iVar7;
        }
        lVar1 = param_1[iVar3];
        if (*(int *)(lVar1 + 0x6c) < *(int *)(param_1[iVar6] + 0x6c)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = lVar1;
          iVar3 = iVar6;
          goto joined_r0x0001492ccf01;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(int *)(param_1[iVar6] + 0x6c) <= *(int *)(param_1[iVar3] + 0x6c))) {
              iVar7 = iVar3;
            }
            lVar1 = param_1[iVar8];
            if (*(int *)(param_1[iVar7] + 0x6c) <= *(int *)(lVar1 + 0x6c)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = lVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1492cd01e FUN_1492cd01e body=278 status=ok
// SIG undefined FUN_1492cd01e(void)

void FUN_1492cd01e(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492cd0de:
    FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar3 + *(int *)(param_1 + 0x18);
    bVar4 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar3 + 0x5c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar2) {
          if (bVar4) goto LAB_1492cd103;
          goto LAB_1492cd0de;
        }
      }
      bVar4 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar3 + 0x50,1);
      FUN_140273752(param_2 + 0x110,param_4,*param_5,param_6);
      FUN_1432dab96(local_80);
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
LAB_1492cd103:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cd136 FUN_1492cd136 body=251 status=ok
// SIG undefined FUN_1492cd136(void)

void FUN_1492cd136(longlong param_1,longlong param_2,char *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1492cd1e6:
    FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar2 = plVar4 + *(int *)(param_1 + 0x18);
    bVar3 = false;
    do {
      while( true ) {
        pcVar1 = (char *)(*plVar4 + 0x5c);
        if (param_3[1] != '\0') {
          pcVar1 = param_3;
        }
        if (*pcVar1 == '\x01') break;
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar2) {
          if (bVar3) goto LAB_1492cd200;
          goto LAB_1492cd1e6;
        }
      }
      bVar3 = true;
      FUN_140388fde(local_80,param_2 + 0x110,*plVar4 + 0x50,1);
      FUN_1475578f4(param_2 + 0x110,*param_4,param_5);
      FUN_1432dab96(local_80);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
LAB_1492cd200:
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492cd232 FUN_1492cd232 body=48 status=ok
// SIG undefined FUN_1492cd232(void)

void FUN_1492cd232(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1492cd262 FUN_1492cd262 body=132 status=ok
// SIG undefined FUN_1492cd262(void)

void FUN_1492cd262(longlong param_1,int param_2)

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



// FUNCTION 1492cd2e8 FUN_1492cd2e8 body=78 status=ok
// SIG undefined FUN_1492cd2e8(void)

void FUN_1492cd2e8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_1492cd336(param_1,param_2);
  return;
}



// FUNCTION 1492cd336 FUN_1492cd336 body=275 status=ok
// SIG undefined FUN_1492cd336(void)

undefined8 * FUN_1492cd336(undefined8 *param_1,longlong param_2)

{
  FUN_1492cd44a();
  *param_1 = &PTR_FUN_14bb90ef0;
  param_1[0x10] = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_2 + 0x88) = 0;
  param_1[0x12] = 0;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x14] = 0;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  param_1[0x16] = 0;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  return param_1;
}



// FUNCTION 1492cd44a FUN_1492cd44a body=272 status=ok
// SIG undefined FUN_1492cd44a(void)

void FUN_1492cd44a(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14a4abd60;
  param_1[4] = 0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[8] = 0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_2 + 0x48) = 0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  return;
}



// FUNCTION 1492cd55a FUN_1492cd55a body=230 status=ok
// SIG undefined FUN_1492cd55a(void)

undefined8 * FUN_1492cd55a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cd642 FUN_1492cd642 body=29 status=ok
// SIG undefined FUN_1492cd642(void)

undefined8 FUN_1492cd642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cd67a FUN_1492cd67a body=29 status=ok
// SIG undefined FUN_1492cd67a(void)

bool FUN_1492cd67a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1492cd698 FUN_1492cd698 body=26 status=ok
// SIG undefined FUN_1492cd698(void)

bool FUN_1492cd698(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1492cd6b2 FUN_1492cd6b2 body=24 status=ok
// SIG undefined FUN_1492cd6b2(void)

bool FUN_1492cd6b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1492cd6d6 FUN_1492cd6d6 body=68 status=ok
// SIG undefined FUN_1492cd6d6(void)

void FUN_1492cd6d6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc05610;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc055a0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492cd71a FUN_1492cd71a body=68 status=ok
// SIG undefined FUN_1492cd71a(void)

void FUN_1492cd71a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc05610;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc055a0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492cd75e FUN_1492cd75e body=108 status=ok
// SIG undefined FUN_1492cd75e(void)

void FUN_1492cd75e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14bc05610;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14bc055a0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492cd7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492cd7ca FUN_1492cd7ca body=62 status=ok
// SIG undefined FUN_1492cd7ca(void)

void FUN_1492cd7ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001492cd805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1492cd808 FUN_1492cd808 body=165 status=ok
// SIG undefined FUN_1492cd808(void)

bool FUN_1492cd808(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cd8b0 FUN_1492cd8b0 body=230 status=ok
// SIG undefined FUN_1492cd8b0(void)

undefined8 * FUN_1492cd8b0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cd998 FUN_1492cd998 body=29 status=ok
// SIG undefined FUN_1492cd998(void)

undefined8 FUN_1492cd998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cd9d0 FUN_1492cd9d0 body=29 status=ok
// SIG undefined FUN_1492cd9d0(void)

bool FUN_1492cd9d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1492cd9ee FUN_1492cd9ee body=26 status=ok
// SIG undefined FUN_1492cd9ee(void)

bool FUN_1492cd9ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1492cda08 FUN_1492cda08 body=24 status=ok
// SIG undefined FUN_1492cda08(void)

bool FUN_1492cda08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1492cda2c FUN_1492cda2c body=68 status=ok
// SIG undefined FUN_1492cda2c(void)

void FUN_1492cda2c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc056f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc05680;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492cda70 FUN_1492cda70 body=68 status=ok
// SIG undefined FUN_1492cda70(void)

void FUN_1492cda70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc056f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc05680;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492cdab4 FUN_1492cdab4 body=108 status=ok
// SIG undefined FUN_1492cdab4(void)

void FUN_1492cdab4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14bc056f0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14bc05680;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492cdb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492cdb20 FUN_1492cdb20 body=52 status=ok
// SIG undefined FUN_1492cdb20(void)

void FUN_1492cdb20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001492cdb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1492cdb54 FUN_1492cdb54 body=155 status=ok
// SIG undefined FUN_1492cdb54(void)

bool FUN_1492cdb54(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1492cdbf2 FUN_1492cdbf2 body=230 status=ok
// SIG undefined FUN_1492cdbf2(void)

undefined8 * FUN_1492cdbf2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cdcda FUN_1492cdcda body=29 status=ok
// SIG undefined FUN_1492cdcda(void)

undefined8 FUN_1492cdcda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cdd12 FUN_1492cdd12 body=29 status=ok
// SIG undefined FUN_1492cdd12(void)

bool FUN_1492cdd12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1492cdd30 FUN_1492cdd30 body=26 status=ok
// SIG undefined FUN_1492cdd30(void)

bool FUN_1492cdd30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1492cdd4a FUN_1492cdd4a body=24 status=ok
// SIG undefined FUN_1492cdd4a(void)

bool FUN_1492cdd4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1492cdd6e FUN_1492cdd6e body=68 status=ok
// SIG undefined FUN_1492cdd6e(void)

void FUN_1492cdd6e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc057d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14bc05760;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1492cddb2 FUN_1492cddb2 body=68 status=ok
// SIG undefined FUN_1492cddb2(void)

void FUN_1492cddb2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bc057d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14bc05760;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1492cddf6 FUN_1492cddf6 body=108 status=ok
// SIG undefined FUN_1492cddf6(void)

void FUN_1492cddf6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection(param_2);
  puVar5 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar5 = &PTR_LAB_14bc057d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14bc05760;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar1;
  *(undefined4 *)(puVar5 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar3;
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492cde53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492cde62 FUN_1492cde62 body=56 status=ok
// SIG undefined FUN_1492cde62(void)

void FUN_1492cde62(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001492cde97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1492cde9a FUN_1492cde9a body=159 status=ok
// SIG undefined FUN_1492cde9a(void)

bool FUN_1492cde9a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 1492cdf3c FUN_1492cdf3c body=29 status=ok
// SIG undefined FUN_1492cdf3c(void)

undefined8 FUN_1492cdf3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492cdf74 FUN_1492cdf74 body=29 status=ok
// SIG undefined FUN_1492cdf74(void)

bool FUN_1492cdf74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1492cdf92 FUN_1492cdf92 body=26 status=ok
// SIG undefined FUN_1492cdf92(void)

bool FUN_1492cdf92(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1492cdfac FUN_1492cdfac body=24 status=ok
// SIG undefined FUN_1492cdfac(void)

bool FUN_1492cdfac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1492cdfc4 FUN_1492cdfc4 body=68 status=ok
// SIG undefined FUN_1492cdfc4(void)

void FUN_1492cdfc4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bb768f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc05840;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492ce008 FUN_1492ce008 body=68 status=ok
// SIG undefined FUN_1492ce008(void)

void FUN_1492ce008(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bb768f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bc05840;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1492ce04c FUN_1492ce04c body=108 status=ok
// SIG undefined FUN_1492ce04c(void)

void FUN_1492ce04c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14bb768f0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14bc05840;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492ce0a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492ce0b8 FUN_1492ce0b8 body=52 status=ok
// SIG undefined FUN_1492ce0b8(void)

void FUN_1492ce0b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001492ce0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1492ce0ec FUN_1492ce0ec body=155 status=ok
// SIG undefined FUN_1492ce0ec(void)

bool FUN_1492ce0ec(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1492ce188 FUN_1492ce188 body=95 status=ok
// SIG undefined FUN_1492ce188(void)

void FUN_1492ce188(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1492ce1e8 FUN_1492ce1e8 body=132 status=ok
// SIG undefined FUN_1492ce1e8(void)

void FUN_1492ce1e8(longlong param_1,int param_2)

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



// FUNCTION 1492ce26e FUN_1492ce26e body=132 status=ok
// SIG undefined FUN_1492ce26e(void)

void FUN_1492ce26e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x14) == param_2) {
          FUN_1492ce2f2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1492ce2f2 FUN_1492ce2f2 body=87 status=ok
// SIG undefined FUN_1492ce2f2(void)

void FUN_1492ce2f2(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_1492ce34a();
  return;
}



// FUNCTION 1492ce34a FUN_1492ce34a body=114 status=ok
// SIG undefined FUN_1492ce34a(void)

void FUN_1492ce34a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1492ce3bc FUN_1492ce3bc body=230 status=ok
// SIG undefined FUN_1492ce3bc(void)

int * FUN_1492ce3bc(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1492ce4a2 FUN_1492ce4a2 body=134 status=ok
// SIG undefined FUN_1492ce4a2(void)

undefined8 FUN_1492ce4a2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_1492ce34a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1492ce528 FUN_1492ce528 body=473 status=ok
// SIG undefined FUN_1492ce528(void)

void FUN_1492ce528(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
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
  uVar4 = local_58;
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1492ce702 FUN_1492ce702 body=180 status=ok
// SIG undefined FUN_1492ce702(void)

longlong * FUN_1492ce702(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1492ce799;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1492ce7b8(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1492ce799:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1492ce7b8 FUN_1492ce7b8 body=276 status=ok
// SIG undefined FUN_1492ce7b8(void)

undefined4 * FUN_1492ce7b8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1492ce3bc(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined2 *)(local_40 + 1) = 3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar1 = FUN_1492ce4a2(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_1492ce528(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ce8ce FUN_1492ce8ce body=185 status=ok
// SIG undefined FUN_1492ce8ce(void)

int FUN_1492ce8ce(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1492ce8f7;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1492ce8f7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1492ce988 FUN_1492ce988 body=325 status=ok
// SIG undefined FUN_1492ce988(void)

undefined4 * FUN_1492ce988(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492ceace(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_40 = uVar5;
  lVar8 = *plVar1;
  local_40[1] = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5;
  cVar3 = FUN_1492cebb4(param_1,uVar9,local_40,&local_4c);
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1492cecac(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ceace FUN_1492ceace body=230 status=ok
// SIG undefined FUN_1492ceace(void)

int * FUN_1492ceace(longlong *param_1,int *param_2)

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



// FUNCTION 1492cebb4 FUN_1492cebb4 body=132 status=ok
// SIG undefined FUN_1492cebb4(void)

undefined8 FUN_1492cebb4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1492ce8ce();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_1492cec3a(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1492cebd8;
    }
  }
  uVar6 = 0;
LAB_1492cebd8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cec3a FUN_1492cec3a body=114 status=ok
// SIG undefined FUN_1492cec3a(void)

void FUN_1492cec3a(longlong *param_1,int param_2)

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



// FUNCTION 1492cecac FUN_1492cecac body=436 status=ok
// SIG undefined FUN_1492cecac(void)

void FUN_1492cecac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
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
  uVar4 = local_58;
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1492cee62 FUN_1492cee62 body=216 status=ok
// SIG undefined FUN_1492cee62(void)

void FUN_1492cee62(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    puVar1 = (undefined4 *)(*plVar2 + (longlong)(int)param_2 * 0x10);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      _Dst = (void *)(*plVar2 + (longlong)(int)param_2 * 0x10);
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_1492cef3c(plVar2,iVar4);
    }
    lVar5 = (longlong)(int)uVar3 * 0x10;
    memmove((void *)(*plVar2 + lVar5 + 0x10),(void *)(*plVar2 + lVar5),
            (ulonglong)(iVar4 - uVar3) << 4);
    puVar1 = (undefined4 *)(*plVar2 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cef3c FUN_1492cef3c body=132 status=ok
// SIG undefined FUN_1492cef3c(void)

void FUN_1492cef3c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492cefc2 FUN_1492cefc2 body=309 status=ok
// SIG undefined FUN_1492cefc2(void)

uint FUN_1492cefc2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = FUN_147525f8a();
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1492cef3c(plVar3,iVar2);
  }
  lVar9 = (longlong)(int)uVar7 * 0x10;
  memmove((void *)(*plVar3 + lVar9 + 0x10),(void *)(*plVar3 + lVar9),(ulonglong)(iVar2 - uVar7) << 4
         );
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(*plVar3 + lVar9);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x10) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar9 + 8) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(lVar9 + 8) + lVar8) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = (ulonglong)uVar7 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(lVar9 + 0x10) * 0x10 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cf0f8 FUN_1492cf0f8 body=345 status=ok
// SIG undefined FUN_1492cf0f8(void)

void FUN_1492cf0f8(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x10),
            (void *)((longlong)(int)param_2 * 0x10 + *plVar3 + 0x10),(longlong)iVar6 << 4);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492cf252 FUN_1492cf252 body=48 status=ok
// SIG undefined FUN_1492cf252(void)

void FUN_1492cf252(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 1492cf282 FUN_1492cf282 body=175 status=ok
// SIG undefined FUN_1492cf282(void)

void FUN_1492cf282(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1492cf30b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1492cf30b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1492cf331 FUN_1492cf331 body=155 status=ok
// SIG undefined FUN_1492cf331(void)

void FUN_1492cf331(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 7;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    memset(param_1 + 2,0,0x8c);
    puVar2 = &DAT_14c846480;
    puVar3 = param_1 + 0x14;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = param_1 + 0x20;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = param_1 + 0x2c;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = param_1 + 0x38;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1 = param_1 + 0x44;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1492cf3cc FUN_1492cf3cc body=146 status=ok
// SIG undefined FUN_1492cf3cc(void)

void FUN_1492cf3cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x220,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x220)) {
      uVar5 = uVar4 / 0x220 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x220,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492cf460 FUN_1492cf460 body=62 status=ok
// SIG undefined FUN_1492cf460(void)

void FUN_1492cf460(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1492cf49e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x220,0x10);
  }
  return;
}



// FUNCTION 1492cf49e FUN_1492cf49e body=110 status=ok
// SIG undefined FUN_1492cf49e(void)

ulonglong FUN_1492cf49e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x220) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1492cf4d7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x220,0x10);
      param_2 = param_2 / 0x220;
    }
  }
LAB_1492cf4d7:
  return param_2 & 0xffffffff;
}



// FUNCTION 1492cf50c FUN_1492cf50c body=115 status=ok
// SIG undefined FUN_1492cf50c(void)

void FUN_1492cf50c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492cf57f FUN_1492cf57f body=102 status=ok
// SIG undefined FUN_1492cf57f(void)

void FUN_1492cf57f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    puVar4 = (undefined8 *)(param_2 + 0x30);
    do {
      *(undefined1 *)(puVar3 + -3) = *(undefined1 *)(puVar4 + -5);
      puVar3[-4] = puVar4[-6];
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 10;
      puVar4 = puVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492cf5e5 FUN_1492cf5e5 body=484 status=ok
// SIG undefined FUN_1492cf5e5(void)

longlong FUN_1492cf5e5(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492cf75d;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492cf6f8;
          }
        }
      }
    }
    else {
LAB_1492cf6f8:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492cf75d;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492cf747:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492cf747;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd07f8();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492cf75d;
      }
    }
  }
  lVar6 = 0;
LAB_1492cf75d:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492cf7ca FUN_1492cf7ca body=484 status=ok
// SIG undefined FUN_1492cf7ca(void)

longlong FUN_1492cf7ca(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492cf942;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492cf8dd;
          }
        }
      }
    }
    else {
LAB_1492cf8dd:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492cf942;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492cf92c:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492cf92c;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd0522();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492cf942;
      }
    }
  }
  lVar6 = 0;
LAB_1492cf942:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492cf9af FUN_1492cf9af body=484 status=ok
// SIG undefined FUN_1492cf9af(void)

longlong FUN_1492cf9af(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492cfb27;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492cfac2;
          }
        }
      }
    }
    else {
LAB_1492cfac2:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492cfb27;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492cfb11:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492cfb11;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd0626();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492cfb27;
      }
    }
  }
  lVar6 = 0;
LAB_1492cfb27:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492cfb94 FUN_1492cfb94 body=484 status=ok
// SIG undefined FUN_1492cfb94(void)

longlong FUN_1492cfb94(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492cfd0c;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492cfca7;
          }
        }
      }
    }
    else {
LAB_1492cfca7:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492cfd0c;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492cfcf6:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492cfcf6;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd0b36();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492cfd0c;
      }
    }
  }
  lVar6 = 0;
LAB_1492cfd0c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492cfd79 FUN_1492cfd79 body=484 status=ok
// SIG undefined FUN_1492cfd79(void)

longlong FUN_1492cfd79(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492cfef1;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492cfe8c;
          }
        }
      }
    }
    else {
LAB_1492cfe8c:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492cfef1;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492cfedb:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492cfedb;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd0c96();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492cfef1;
      }
    }
  }
  lVar6 = 0;
LAB_1492cfef1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492cff5e FUN_1492cff5e body=484 status=ok
// SIG undefined FUN_1492cff5e(void)

longlong FUN_1492cff5e(char param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_3 != 0) && (*(longlong *)(param_2 + 0x140) != 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0xd0), lVar8 != 0)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
      if (lVar8 != 0) {
        lVar3 = FUN_1411e6332();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((0 < *(int *)(lVar8 + 0x6a0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x698), *(longlong *)(lVar8 + 0xd8) != 0)))) {
          lVar3 = FUN_144a74fb4();
          lVar8 = *(longlong *)(lVar8 + 0xd8);
          if (lVar8 != 0) {
            lVar6 = 0;
            if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0))
            goto LAB_1492d00d6;
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_1492d0071;
          }
        }
      }
    }
    else {
LAB_1492d0071:
      lVar3 = FUN_144a81888(lVar8);
      lVar6 = 0;
      iVar2 = 0;
      if (lVar3 == 0) goto LAB_1492d00d6;
      lVar3 = *param_4;
      if (lVar3 == 0) {
LAB_1492d00c0:
        *param_6 = iVar2;
        lVar3 = *param_4;
      }
      else if (*param_5 != lVar3) {
        plVar4 = (longlong *)FUN_144a81888(lVar8);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar2 = FUN_144a750a0(uVar5,param_4);
        goto LAB_1492d00c0;
      }
      *param_5 = lVar3;
      if (*param_6 != -1) {
        local_58 = DAT_14cc08230;
        local_50 = *param_3;
        uVar5 = *(undefined8 *)(param_2 + 0x140);
        local_48 = *param_6;
        uVar7 = FUN_145cd09d6();
        if (param_1 == '\0') {
          lVar6 = FUN_149289622(uVar5,uVar7,&local_58);
        }
        else {
          lVar6 = FUN_14792a902();
        }
        if (lVar6 != 0) goto LAB_1492d00d6;
      }
    }
  }
  lVar6 = 0;
LAB_1492d00d6:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1492d0144 FUN_1492d0144 body=324 status=ok
// SIG undefined FUN_1492d0144(void)

undefined4 * FUN_1492d0144(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492d028a(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1492d0370(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1492d0462(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d028a FUN_1492d028a body=230 status=ok
// SIG undefined FUN_1492d028a(void)

int * FUN_1492d028a(longlong *param_1,int *param_2)

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



// FUNCTION 1492d0370 FUN_1492d0370 body=128 status=ok
// SIG undefined FUN_1492d0370(void)

undefined8 FUN_1492d0370(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1492d03f0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1492d03f0 FUN_1492d03f0 body=114 status=ok
// SIG undefined FUN_1492d03f0(void)

void FUN_1492d03f0(longlong *param_1,int param_2)

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



// FUNCTION 1492d0462 FUN_1492d0462 body=474 status=ok
// SIG undefined FUN_1492d0462(void)

void FUN_1492d0462(longlong *param_1)

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



// FUNCTION 1492d063d FUN_1492d063d body=119 status=ok
// SIG undefined FUN_1492d063d(void)

void FUN_1492d063d(undefined1 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x14] = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_1 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 1492d06b4 FUN_1492d06b4 body=95 status=ok
// SIG undefined FUN_1492d06b4(void)

void FUN_1492d06b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1492d0713 FUN_1492d0713 body=37 status=ok
// SIG undefined FUN_1492d0713(void)

void FUN_1492d0713(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1492d0738 FUN_1492d0738 body=132 status=ok
// SIG undefined FUN_1492d0738(void)

void FUN_1492d0738(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d07be FUN_1492d07be body=62 status=ok
// SIG undefined FUN_1492d07be(void)

void FUN_1492d07be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1492d07fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1492d07fc FUN_1492d07fc body=93 status=ok
// SIG undefined FUN_1492d07fc(void)

ulonglong FUN_1492d07fc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1492d085a FUN_1492d085a body=151 status=ok
// SIG undefined FUN_1492d085a(void)

longlong FUN_1492d085a(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141906362(&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492d08f2 FUN_1492d08f2 body=324 status=ok
// SIG undefined FUN_1492d08f2(void)

undefined8 FUN_1492d08f2(double *param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 in_RAX;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[5] - param_2[5]));
  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[4] - param_2[4]));
  iVar9 = movmskpd((int)in_RAX,auVar5);
  auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[7] - param_2[7]));
  auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[6] - param_2[6]));
  uVar11 = movmskpd(param_3,auVar3);
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[1] - param_2[1]));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_1 - *param_2));
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar11 = movmskpd(iVar9,auVar8);
    lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[3] - param_2[3]));
    auVar7._8_4_ = (int)lVar13;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[2] - param_2[2]));
    auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(0,auVar7);
    uVar12 = iVar9 << 2 | uVar11;
    if (uVar12 != 0) {
      auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[1] + param_2[1]));
      auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_1 + *param_2));
      uVar11 = movmskpd(uVar11,auVar6);
      auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[3] + param_2[3]));
      auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[2] + param_2[2]));
      uVar12 = movmskpd(uVar12,auVar4);
      if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_1492d0958;
    }
    auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[9] - param_2[9]));
    auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[8] - param_2[8]));
    iVar9 = movmskpd(uVar11,auVar2);
    auVar1._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[0xb] - param_2[0xb]));
    auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_1[10] - param_2[10]));
    uVar11 = movmskpd((int)param_1,auVar1);
    uVar10 = CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar9) >> 8),
                      (uVar11 & 0x3fffffff) == 0 && iVar9 == 0);
  }
  else {
LAB_1492d0958:
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 1492d0a36 FUN_1492d0a36 body=100 status=ok
// SIG undefined FUN_1492d0a36(void)

bool FUN_1492d0a36(float *param_1,float *param_2)

{
  bool bVar1;
  
  if (((0.0001 <= ABS(*param_1 - *param_2)) || (0.0001 <= ABS(param_1[1] - param_2[1]))) ||
     (0.0001 <= ABS(param_1[2] - param_2[2]))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(param_1[3] - param_2[3]) < 0.0001;
  }
  return bVar1;
}



// FUNCTION 1492d0a9a FUN_1492d0a9a body=134 status=ok
// SIG undefined FUN_1492d0a9a(void)

undefined8 FUN_1492d0a9a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == *(uint *)(param_2 + 1)) {
    uVar4 = 1;
    if (0 < (int)uVar1) {
      lVar2 = *param_2;
      lVar3 = *param_1;
      lVar5 = 0;
      do {
        if (((9.999999747378752e-05 < ABS(*(double *)(lVar3 + lVar5) - *(double *)(lVar2 + lVar5)))
            || (9.999999747378752e-05 <
                ABS(*(double *)(lVar3 + 8 + lVar5) - *(double *)(lVar2 + 8 + lVar5)))) ||
           (9.999999747378752e-05 <
            ABS(*(double *)(lVar3 + 0x10 + lVar5) - *(double *)(lVar2 + 0x10 + lVar5))))
        goto LAB_1492d0b1c;
        lVar5 = lVar5 + 0x18;
      } while ((ulonglong)uVar1 * 0x18 != lVar5);
    }
  }
  else {
LAB_1492d0b1c:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1492d0b20 FUN_1492d0b20 body=440 status=ok
// SIG undefined FUN_1492d0b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1492d0b20(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong in_R10;
  bool bVar12;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == *(uint *)(param_2 + 1)) {
    if ((int)uVar3 < 1) {
      lVar9 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
    else {
      lVar9 = (ulonglong)uVar3 * 3;
      dVar4 = (double)DAT_1499387d0;
      dVar5 = DAT_1499387d0._8_8_;
      lVar10 = 0;
      do {
        pdVar1 = (double *)(*param_1 + lVar10);
        pdVar2 = (double *)(*param_2 + lVar10);
        dVar13 = *(double *)(*param_1 + 0x10 + lVar10) - *(double *)(*param_2 + 0x10 + lVar10);
        dVar6 = *pdVar1 - *pdVar2;
        dVar7 = pdVar1[1] - pdVar2[1];
        auVar21._8_8_ = dVar7;
        auVar21._0_8_ = dVar6;
        auVar22 = divpd(auVar21,_DAT_1499387d0);
        auVar14._0_8_ = dVar13 / 360.0;
        auVar14._8_8_ = 0;
        auVar23 = roundpd(auVar22,auVar22,3);
        auVar22 = roundpd(auVar14,auVar14,3);
        auVar26._0_8_ = dVar13 - auVar22._0_8_ * dVar4;
        auVar26._8_8_ = 0.0 - auVar22._8_8_ * dVar5;
        dVar6 = dVar6 - auVar23._0_8_ * dVar4;
        dVar7 = dVar7 - auVar23._8_8_ * dVar5;
        auVar25._0_8_ = dVar6 + dVar4;
        auVar25._8_8_ = dVar7 + dVar5;
        auVar24._0_8_ = auVar26._0_8_ + dVar4;
        auVar24._8_8_ = auVar26._8_8_ + dVar5;
        auVar15._8_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar15._0_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar22._8_4_ = SUB84(dVar7,0);
        auVar22._0_8_ = dVar6;
        auVar22._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar14 = blendvpd(auVar25,auVar22,auVar15);
        auVar16._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
        auVar16._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
        auVar22 = blendvpd(auVar24,auVar26,auVar16);
        dVar6 = auVar14._8_8_ + -360.0;
        auVar27._0_8_ = auVar22._0_8_ + -360.0;
        auVar27._8_8_ = auVar22._8_8_ + -360.0;
        auVar17._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
        auVar17._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
        auVar23._8_4_ = SUB84(dVar6,0);
        auVar23._0_8_ = auVar14._0_8_ + -360.0;
        auVar23._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar23 = blendvpd(auVar14,auVar23,auVar17);
        auVar18._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
        auVar18._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
        auVar22 = blendvpd(auVar22,auVar27,auVar18);
        auVar19._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._8_8_));
        auVar19._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._0_8_));
        iVar8 = movmskpd((int)lVar9,auVar19);
        auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._8_8_));
        auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._0_8_));
        uVar11 = movmskpd((int)in_R10,auVar20);
        bVar12 = (uVar11 & 0x3fffffff) == 0;
        lVar9 = CONCAT71((int7)(CONCAT44((int)((ulonglong)lVar9 >> 0x20),iVar8) >> 8),
                         bVar12 && iVar8 == 0);
        if (!bVar12 || iVar8 != 0) {
          return lVar9;
        }
        in_R10 = lVar10 + 0x18;
        bVar12 = (ulonglong)uVar3 * 0x18 + -0x18 != lVar10;
        lVar10 = in_R10;
      } while (bVar12);
    }
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}



// FUNCTION 1492d0cd8 FUN_1492d0cd8 body=255 status=ok
// SIG undefined FUN_1492d0cd8(void)

undefined8 FUN_1492d0cd8(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint in_R10D;
  undefined4 in_R11D;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == *(uint *)(param_2 + 1)) {
    uVar15 = 1;
    if (0 < (int)uVar2) {
      lVar16 = 0;
      do {
        pdVar1 = (double *)(*param_1 + lVar16);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(*param_1 + 0x10 + lVar16);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        pdVar1 = (double *)(*param_2 + lVar16);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(*param_2 + 0x10 + lVar16);
        dVar13 = *pdVar1;
        dVar14 = pdVar1[1];
        lVar19 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar8 - dVar12));
        auVar6._8_4_ = (int)lVar19;
        auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar7 - dVar11));
        auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
        in_R10D = movmskpd(in_R10D,auVar6);
        lVar19 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar10 - dVar14));
        auVar5._8_4_ = (int)lVar19;
        auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar9 - dVar13));
        auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
        iVar17 = movmskpd(in_R11D,auVar5);
        uVar18 = iVar17 << 2 | in_R10D;
        if (uVar18 != 0) {
          auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar8 + dVar12));
          auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar7 + dVar11));
          in_R10D = movmskpd(in_R10D,auVar4);
          auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar10 + dVar14));
          auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar9 + dVar13));
          uVar18 = movmskpd(uVar18,auVar3);
          if ((uVar18 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_1492d0dc1;
        }
        in_R11D = 0;
        lVar16 = lVar16 + 0x20;
      } while ((ulonglong)uVar2 << 5 != lVar16);
    }
  }
  else {
LAB_1492d0dc1:
    uVar15 = 0;
  }
  return uVar15;
}



// FUNCTION 1492d0dd8 FUN_1492d0dd8 body=132 status=ok
// SIG undefined FUN_1492d0dd8(void)

void FUN_1492d0dd8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d0e5e FUN_1492d0e5e body=132 status=ok
// SIG undefined FUN_1492d0e5e(void)

void FUN_1492d0e5e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d0ee4 FUN_1492d0ee4 body=98 status=ok
// SIG undefined FUN_1492d0ee4(void)

void FUN_1492d0ee4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492d0f46 FUN_1492d0f46 body=115 status=ok
// SIG undefined FUN_1492d0f46(void)

void FUN_1492d0f46(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,0x10);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492d0fba FUN_1492d0fba body=48 status=ok
// SIG undefined FUN_1492d0fba(void)

void FUN_1492d0fba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 1492d0fea FUN_1492d0fea body=64 status=ok
// SIG undefined FUN_1492d0fea(void)

void FUN_1492d0fea(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0xffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1492d102a FUN_1492d102a body=132 status=ok
// SIG undefined FUN_1492d102a(void)

void FUN_1492d102a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d10af FUN_1492d10af body=47 status=ok
// SIG undefined FUN_1492d10af(void)

void FUN_1492d10af(longlong param_1,int param_2)

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



// FUNCTION 1492d10de FUN_1492d10de body=125 status=ok
// SIG undefined FUN_1492d10de(void)

void FUN_1492d10de(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 5,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 5)) {
    uVar3 = uVar2 >> 5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  return;
}



// FUNCTION 1492d115c FUN_1492d115c body=132 status=ok
// SIG undefined FUN_1492d115c(void)

void FUN_1492d115c(longlong param_1,int param_2)

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



// FUNCTION 1492d11e2 FUN_1492d11e2 body=132 status=ok
// SIG undefined FUN_1492d11e2(void)

void FUN_1492d11e2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d1268 FUN_1492d1268 body=132 status=ok
// SIG undefined FUN_1492d1268(void)

void FUN_1492d1268(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d12ee FUN_1492d12ee body=132 status=ok
// SIG undefined FUN_1492d12ee(void)

void FUN_1492d12ee(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492d1374 FUN_1492d1374 body=111 status=ok
// SIG undefined FUN_1492d1374(void)

void FUN_1492d1374(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492d13e4 FUN_1492d13e4 body=98 status=ok
// SIG undefined FUN_1492d13e4(void)

void FUN_1492d13e4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492d1446 FUN_1492d1446 body=395 status=ok
// SIG undefined FUN_1492d1446(void)

undefined8 * FUN_1492d1446(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_1490efad0();
  *param_1 = &PTR_FUN_14bb77650;
  param_1[0x22] = 0;
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined8 *)(param_2 + 0x118) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x24] = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_2 + 0x128) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14d) = *(undefined8 *)(param_2 + 0x14d);
  uVar1 = *(undefined4 *)(param_2 + 0x144);
  uVar2 = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar1;
  *(undefined4 *)(param_1 + 0x29) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar3;
  param_1[0x2b] = 0;
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined8 *)(param_2 + 0x160) = 0;
  FUN_14920b38a(param_1 + 0x2d,param_2 + 0x168);
  uVar4 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x37] = uVar4;
  param_1[0x38] = 0;
  param_1[0x38] = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x1d8);
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0x3b] = uVar4;
  return param_1;
}



// FUNCTION 1492d15d2 FUN_1492d15d2 body=184 status=ok
// SIG undefined FUN_1492d15d2(void)

void FUN_1492d15d2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar7 = puVar4[8];
  uVar8 = puVar4[0xc];
  uVar2 = *(undefined1 *)puVar4[0x10];
  uVar1 = *(undefined4 *)puVar4[0x14];
  uVar3 = *(undefined1 *)puVar4[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar4 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_1492d170c(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,uVar7,uVar8,uVar2,uVar1,uVar3,uVar10);
  return;
}



// FUNCTION 1492d1692 FUN_1492d1692 body=121 status=ok
// SIG undefined FUN_1492d1692(void)

void FUN_1492d1692(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492d170c(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200,param_1 + 0x218,
                *(undefined1 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
                *(undefined1 *)(param_1 + 0x238),param_1 + 0x240);
  return;
}



// FUNCTION 1492d170c FUN_1492d170c body=326 status=ok
// SIG undefined FUN_1492d170c(void)

void FUN_1492d170c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  longlong param_9)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined1 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_9 + 8) == 0) {
    local_94 = 1;
    local_90 = *param_3;
    local_a0 = 1;
    local_9c = *param_2;
    local_c8 = 0;
    FUN_1491f31fc(&local_88,*(undefined8 *)(param_1 + 0x1b0));
    local_78 = local_88;
    uStack_70 = local_80;
    local_b0 = param_9;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    FUN_1492d1972(param_1,&local_78,param_4,param_5);
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  else {
    local_b0 = param_9;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    FUN_1492d1972(param_1,&local_78,param_4,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d1854 FUN_1492d1854 body=168 status=ok
// SIG undefined FUN_1492d1854(void)

void FUN_1492d1854(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar7 = puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar1 = *(undefined4 *)puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_1492d1972(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,uVar7,uVar2,uVar1,uVar3,uVar9);
  return;
}



// FUNCTION 1492d1904 FUN_1492d1904 body=109 status=ok
// SIG undefined FUN_1492d1904(void)

void FUN_1492d1904(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492d1972(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x218,
                *(undefined1 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
                *(undefined1 *)(param_1 + 0x238),param_1 + 0x240);
  return;
}



// FUNCTION 1492d1972 FUN_1492d1972 body=3559 status=ok
// SIG undefined FUN_1492d1972(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492d1972(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,longlong *param_8)

{
  double *pdVar1;
  ulonglong *puVar2;
  double *pdVar3;
  double *pdVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar34;
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  double dVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  double dVar51;
  double dVar52;
  undefined1 auVar50 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2c8;
  double *local_2b8;
  undefined8 uStack_2b0;
  double *local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  double *pdStack_290;
  longlong *local_288;
  undefined8 uStack_280;
  double local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double *local_248;
  undefined8 uStack_240;
  longlong *local_238;
  longlong *plStack_230;
  longlong *local_228;
  double *pdStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  double *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_160;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined4 local_148;
  undefined4 uStack_144;
  double dStack_140;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar7 = *(longlong *)(param_1 + 0x1b0);
  if (lVar7 == 0) goto LAB_1492d1a2c;
  plVar19 = param_8 + 4;
  uVar13 = *(uint *)(param_8 + 1);
  if (uVar13 == 0) {
    if ((int)param_2[1] < 1) goto LAB_1492d1a2c;
    plVar11 = param_8 + 2;
    *(undefined4 *)(param_8 + 3) = 0;
    if (*(int *)((longlong)param_8 + 0x1c) < 0) {
      FUN_14482f6fa(plVar11);
    }
    *(undefined4 *)(param_8 + 5) = 0;
    local_2b8 = param_4;
    local_2a8 = param_3;
    local_298 = plVar11;
    if (*(int *)((longlong)param_8 + 0x2c) < 0) {
      FUN_1401a2688(plVar19);
    }
    lVar15 = param_2[1];
    local_288 = plVar19;
    if ((longlong)(int)lVar15 != 0) {
      lVar20 = *param_2;
      lVar21 = 0;
      do {
        uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar20 + 8 + lVar21));
        local_178 = *(undefined8 *)(lVar20 + lVar21);
        local_158 = local_158 & 0xffffff00;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0xffff;
        local_148 = 0xffffffff;
        FUN_144828dba(&local_158,&local_178,lVar7);
        lVar16 = param_8[1];
        uVar13 = (int)lVar16 + 1;
        *(uint *)(param_8 + 1) = uVar13;
        if (*(uint *)((longlong)param_8 + 0xc) < uVar13) {
          FUN_1492d0738(param_8);
        }
        lVar8 = *param_8;
        lVar16 = (longlong)(int)lVar16 * 0x20;
        puVar18 = (undefined8 *)(lVar8 + 0x10 + lVar16);
        *puVar18 = CONCAT44(uStack_144,local_148);
        puVar18[1] = dStack_140;
        puVar18 = (undefined8 *)(lVar8 + lVar16);
        *puVar18 = CONCAT44(uStack_154,local_158);
        puVar18[1] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
        lVar21 = lVar21 + 0xc;
      } while ((longlong)(int)lVar15 * 0xc != lVar21);
    }
    plVar19 = local_288;
    param_3 = local_2a8;
    param_4 = local_2b8;
    uVar13 = *(uint *)(param_8 + 1);
    if ((longlong)(int)uVar13 < 3) goto LAB_1492d1a2c;
    iVar6 = (int)param_8[3];
    *(uint *)(param_8 + 3) = uVar13 + iVar6;
    if ((uint)(*(int *)((longlong)param_8 + 0x1c) - iVar6) < uVar13) {
      FUN_14475e4ac(local_298);
    }
    memset((void *)((longlong)iVar6 * 4 + param_8[2]),0,(longlong)(int)uVar13 << 2);
    uVar13 = *(uint *)(param_8 + 1);
    lVar15 = param_8[5];
    *(uint *)(param_8 + 5) = (int)lVar15 + uVar13;
    if ((uint)(*(int *)((longlong)param_8 + 0x2c) - (int)lVar15) < uVar13) {
      FUN_144a2c682(plVar19);
      uVar13 = *(uint *)(param_8 + 1);
    }
  }
  if (((((2 < (int)uVar13) && ((int)param_8[3] != 0)) && ((int)param_8[5] != 0)) &&
      (((9.999999747378752e-05 < ABS(*param_3) || (9.999999747378752e-05 < ABS(param_3[1]))) ||
       (9.999999747378752e-05 < ABS(param_3[2]))))) &&
     (((9.999999747378752e-05 < ABS(*param_4) || (9.999999747378752e-05 < ABS(param_4[1]))) ||
      (9.999999747378752e-05 < ABS(param_4[2]))))) {
    uVar13 = (uint)*(ushort *)(*param_8 + 0xc);
    if (*(ushort *)(*param_8 + 0xc) == 0xffff) {
      uVar13 = 0xffffffff;
    }
    local_2b8 = param_4;
    local_2a8 = param_3;
    FUN_14486750c(lVar7,&local_158,uVar13,0);
    puVar17 = &local_158;
    puVar18 = (undefined8 *)param_8[4];
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar18 = *(undefined8 *)puVar17;
      puVar17 = puVar17 + 2;
      puVar18 = puVar18 + 1;
    }
    *(undefined4 *)param_8[2] = 0;
    if (1 < (int)param_8[1]) {
      lVar15 = *plVar19;
      uVar53 = (undefined4)*(undefined8 *)(lVar15 + 0x30);
      uVar54 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
      uVar22 = *(undefined4 *)(lVar15 + 0x20);
      uVar55 = *(undefined4 *)(lVar15 + 0x24);
      uVar56 = *(undefined4 *)(lVar15 + 0x28);
      uVar57 = *(undefined4 *)(lVar15 + 0x2c);
      lVar21 = 1;
      lVar20 = 0x2c;
      lVar15 = 0;
      do {
        uVar13 = (uint)*(ushort *)(*param_8 + lVar20);
        if (*(ushort *)(*param_8 + lVar20) == 0xffff) {
          uVar13 = 0xffffffff;
        }
        FUN_14486750c(lVar7,&local_158,uVar13,0);
        puVar17 = &local_158;
        puVar18 = (undefined8 *)(param_8[4] + lVar15 + 0x60);
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *puVar18 = *(undefined8 *)puVar17;
          puVar17 = puVar17 + 2;
          puVar18 = puVar18 + 1;
        }
        auVar38 = *(undefined1 (*) [16])(param_8[4] + 0x80 + lVar15);
        dVar32 = *(double *)(param_8[4] + 0x90 + lVar15);
        dVar26 = (double)CONCAT44(uVar55,uVar22) - auVar38._0_8_;
        dVar49 = (double)CONCAT44(uVar57,uVar56) - auVar38._8_8_;
        dVar35 = (double)CONCAT44(uVar54,uVar53) - dVar32;
        *(float *)(param_8[2] + lVar21 * 4) =
             (float)SQRT(dVar35 * dVar35 + dVar26 * dVar26 + dVar49 * dVar49) +
             *(float *)(param_8[2] + -4 + lVar21 * 4);
        lVar20 = lVar20 + 0x20;
        lVar21 = lVar21 + 1;
        uVar53 = SUB84(dVar32,0);
        uVar54 = (undefined4)((ulonglong)dVar32 >> 0x20);
        uVar22 = auVar38._0_4_;
        uVar55 = auVar38._4_4_;
        uVar56 = auVar38._8_4_;
        uVar57 = auVar38._12_4_;
        lVar15 = lVar15 + 0x60;
      } while (lVar21 < (int)param_8[1]);
    }
    pdVar4 = local_2a8;
    pdVar1 = local_2b8;
    uVar13 = *(uint *)(param_8 + 3);
    uVar14 = (ulonglong)uVar13;
    if (1e-08 < *(float *)(param_8[2] + (longlong)(int)(uVar13 - 1) * 4)) {
      if (1 < (int)uVar13) {
        lVar15 = 1;
        do {
          lVar20 = param_8[2];
          *(float *)(lVar20 + lVar15 * 4) =
               *(float *)(lVar20 + lVar15 * 4) / *(float *)(lVar20 + -4 + (longlong)(int)uVar14 * 4)
          ;
          uVar22 = FUN_14915b162(lVar20,CONCAT71((int7)((ulonglong)puVar17 >> 8),param_5) &
                                        0xffffffff);
          *(undefined4 *)(param_8[2] + lVar15 * 4) = uVar22;
          lVar15 = lVar15 + 1;
          uVar14 = (ulonglong)(int)param_8[3];
        } while (lVar15 < (longlong)uVar14);
      }
      dVar32 = *pdVar4;
      dVar35 = pdVar4[1];
      pdVar3 = (double *)pdVar4[2];
      dVar26 = (double)pdVar3 * (double)pdVar3 + dVar32 * dVar32 + dVar35 * dVar35;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        pdVar9 = DAT_14c8464f0;
        plVar19 = DAT_14c8464e0;
        plVar11 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          pdVar9 = (double *)((double)pdVar3 * dVar26);
          plVar19 = (longlong *)(dVar32 * dVar26);
          plVar11 = (longlong *)(dVar35 * dVar26);
        }
      }
      else {
        pdVar9 = pdVar3;
        plVar19 = (longlong *)*pdVar4;
        plVar11 = (longlong *)pdVar4[1];
      }
      dVar32 = *pdVar1;
      dVar35 = pdVar1[1];
      pdVar4 = (double *)pdVar1[2];
      dVar26 = (double)pdVar4 * (double)pdVar4 + dVar32 * dVar32 + dVar35 * dVar35;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        plVar10 = DAT_14c8464e0;
        plVar12 = DAT_14c8464e8;
        local_2b8 = DAT_14c8464f0;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          plVar10 = (longlong *)(dVar32 * dVar26);
          plVar12 = (longlong *)(dVar35 * dVar26);
          local_2b8 = (double *)((double)pdVar4 * dVar26);
        }
      }
      else {
        plVar10 = (longlong *)*pdVar1;
        plVar12 = (longlong *)pdVar1[1];
        local_2b8 = pdVar4;
      }
      uStack_2b0 = 0;
      FUN_1449437a2((longlong)((int)param_8[5] + -1) * 0x60 + param_8[4],&local_158);
      local_178 = CONCAT44(uStack_154,local_158);
      uStack_170 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
      local_168 = CONCAT44(uStack_144,local_148);
      dStack_160 = dStack_140;
      if (2 < (int)param_8[3]) {
        uStack_2a0 = 0;
        uStack_280 = 0;
        local_208 = local_2b8;
        uStack_200 = 0;
        uStack_210 = 0;
        pdStack_220 = local_2b8;
        if (1.0 <= param_6) {
          param_6 = 1.0;
        }
        if (param_6 <= 0.0) {
          param_6 = 0.0;
        }
        local_270 = (double)param_6;
        lVar21 = 1;
        lVar20 = 0x2c;
        local_268 = 0;
        uStack_260 = 0x3ff0000000000000;
        lVar15 = 0;
        uStack_240 = 0;
        local_258._8_4_ = (int)plVar11;
        local_258._0_8_ = plVar19;
        local_258._12_4_ = (int)((ulonglong)plVar11 >> 0x20);
        local_2a8 = pdVar9;
        local_298 = plVar11;
        pdStack_290 = pdVar9;
        local_288 = plVar19;
        local_248 = pdVar9;
        local_238 = plVar12;
        plStack_230 = plVar12;
        local_228 = plVar12;
        local_218 = plVar10;
        do {
          pdVar4 = local_2b8;
          lVar16 = param_8[4];
          pdVar1 = (double *)(lVar16 + 0x60 + lVar15);
          dVar42 = *pdVar1;
          dVar58 = pdVar1[1];
          dVar27 = *(double *)(lVar16 + 0x70 + lVar15);
          pdVar1 = (double *)(lVar16 + 0x78 + lVar15);
          dVar32 = *pdVar1;
          dVar35 = *pdVar1;
          dVar49 = (double)local_298 * dVar42 - (double)plVar19 * dVar58;
          dVar51 = (double)pdStack_290 * dVar58 - (double)plVar11 * dVar27;
          dVar26 = (double)local_288 * dVar27 - (double)local_2a8 * dVar42;
          dVar51 = dVar51 + dVar51;
          dVar26 = dVar26 + dVar26;
          dVar49 = dVar49 + dVar49;
          dVar36 = dVar49 * dVar32 + (double)pdVar9 + (dVar26 * dVar42 - dVar51 * dVar58);
          dVar28 = (dVar49 * dVar58 - dVar26 * dVar27) + dVar32 * dVar51 + (double)plVar19;
          dVar51 = (dVar27 * dVar51 - dVar42 * dVar49) + dVar35 * dVar26 + (double)plVar11;
          dVar49 = (double)local_228 * dVar42 - (double)plVar10 * dVar58;
          dVar52 = (double)pdStack_220 * dVar58 - (double)plVar12 * dVar27;
          dVar26 = (double)local_218 * dVar27 - dVar42 * (double)local_208;
          dVar52 = dVar52 + dVar52;
          dVar26 = dVar26 + dVar26;
          dVar49 = dVar49 + dVar49;
          local_188 = dVar49 * dVar32 + (double)local_2b8 + (dVar26 * dVar42 - dVar52 * dVar58);
          dVar35 = (dVar27 * dVar52 - dVar42 * dVar49) + dVar35 * dVar26 + (double)plVar12;
          local_198._8_4_ = SUB84(dVar35,0);
          local_198._0_8_ = (dVar49 * dVar58 - dVar26 * dVar27) + dVar32 * dVar52 + (double)plVar10;
          local_198._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          FUN_144a44da6(&local_158,&DAT_14c8463d0,&local_178,
                        (double)*(float *)(param_8[2] + lVar21 * 4));
          dVar32 = (double)CONCAT44(uStack_154,local_158);
          dVar35 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
          dVar26 = (double)CONCAT44(uStack_144,local_148);
          dVar49 = dVar26 * dVar26 + dVar32 * dVar32;
          dVar42 = dStack_140 * dStack_140 + dVar35 * dVar35;
          auVar37._0_8_ = dVar49 + dVar42;
          auVar37._8_8_ = dVar49 + dVar42;
          auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
          auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
          auVar38 = sqrtpd(auVar37,auVar37);
          auVar38 = divpd(_DAT_149934d80,auVar38);
          auVar50._0_8_ = auVar38._0_8_ * dVar26;
          auVar50._8_8_ = auVar38._8_8_ * dStack_140;
          dVar31 = (double)((ulonglong)(dVar32 * auVar38._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
          dVar34 = (double)((ulonglong)(dVar35 * auVar38._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
          auVar38._8_8_ = uStack_260;
          auVar38._0_8_ = local_268;
          auVar44 = blendvpd(auVar38,auVar50,auVar44);
          pdVar1 = (double *)param_8[4];
          dVar35 = pdVar1[3];
          dVar32 = pdVar1[3];
          dVar43 = auVar44._0_8_;
          dVar48 = auVar44._8_8_;
          auVar29._8_4_ = SUB84(dVar31,0);
          auVar29._0_8_ = dVar34;
          auVar29._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          dVar49 = pdVar1[1];
          dVar26 = pdVar1[1];
          dVar42 = pdVar1[2];
          dVar58 = pdVar1[2];
          dVar27 = dVar34 * dVar42 * -1.0 +
                   dVar43 * dVar49 + *pdVar1 * dVar48 * 1.0 + dVar35 * dVar31;
          dVar52 = auVar29._8_8_ * dVar58 * 1.0 +
                   dVar48 * dVar26 + *pdVar1 * dVar43 * -1.0 + dVar32 * dVar34;
          dVar49 = dVar48 * dVar42 * 1.0 +
                   ((*pdVar1 * dVar34 * 1.0 + dVar35 * dVar43) - dVar31 * dVar49);
          dVar26 = dVar43 * dVar58 * -1.0 +
                   ((*pdVar1 * auVar29._8_8_ * -1.0 + dVar32 * dVar48) - dVar34 * dVar26);
          dVar32 = dVar49 * dVar49 + dVar27 * dVar27;
          dVar35 = dVar26 * dVar26 + dVar52 * dVar52;
          auVar33._0_8_ = dVar32 + dVar35;
          auVar33._8_8_ = dVar32 + dVar35;
          auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
          auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
          auVar44 = sqrtpd(auVar33,auVar33);
          auVar44 = divpd(_DAT_149934d80,auVar44);
          auVar45._0_8_ = auVar44._0_8_ * dVar49;
          auVar45._8_8_ = auVar44._8_8_ * dVar26;
          dVar35 = (double)((ulonglong)(dVar27 * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
          dVar26 = (double)((ulonglong)(dVar52 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
          auVar44 = blendvpd(auVar38,auVar45,auVar40);
          dVar42 = dVar35 * (double)local_238 - (double)plVar10 * dVar26;
          dVar58 = auVar44._0_8_;
          dVar27 = auVar44._8_8_;
          dVar49 = dVar58 * (double)plVar10 - (double)pdVar4 * dVar35;
          dVar32 = dVar26 * (double)pdVar4 - (double)local_238 * dVar58;
          dVar42 = dVar42 + dVar42;
          dVar49 = dVar49 + dVar49;
          dVar32 = dVar32 + dVar32;
          local_1a0 = (dVar35 * dVar49 - dVar32 * dVar26) + dVar27 * dVar42 + (double)pdVar4;
          local_1a8 = (dVar58 * dVar32 - dVar42 * dVar35) + dVar27 * dVar49 + (double)local_238;
          local_1b0 = (dVar26 * dVar42 - dVar49 * dVar58) + dVar27 * dVar32 + (double)plVar10;
          dVar32 = dVar36 * local_1a0 + dVar28 * local_1b0 + dVar51 * local_1a8;
          local_1a0 = local_1a0 - dVar36 * dVar32;
          local_1a8 = local_1a8 - dVar51 * dVar32;
          local_1b0 = local_1b0 - dVar32 * dVar28;
          FUN_14022d702(&local_158,local_198,&local_1b0);
          pdVar9 = local_248;
          auVar44 = _DAT_149934d80;
          dVar32 = (double)CONCAT44(uStack_154,local_158);
          dVar35 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
          dVar26 = (double)CONCAT44(uStack_144,local_148);
          dVar49 = dVar26 * dVar26 + dVar32 * dVar32;
          dVar42 = dStack_140 * dStack_140 + dVar35 * dVar35;
          auVar39._0_8_ = dVar49 + dVar42;
          auVar39._8_8_ = dVar49 + dVar42;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          auVar40 = sqrtpd(auVar39,auVar39);
          auVar40 = divpd(_DAT_149934d80,auVar40);
          auVar46._0_8_ = auVar40._0_8_ * dVar26;
          auVar46._8_8_ = auVar40._8_8_ * dStack_140;
          dVar28 = (double)((ulonglong)(dVar32 * auVar40._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
          dVar51 = (double)((ulonglong)(dVar35 * auVar40._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
          auVar40 = blendvpd(auVar38,auVar46,auVar23);
          lVar16 = param_8[4];
          pdVar1 = (double *)(lVar16 + 0x60 + lVar15);
          dVar26 = *pdVar1;
          dVar49 = pdVar1[1];
          pdVar1 = (double *)(lVar16 + 0x70 + lVar15);
          dVar42 = *pdVar1;
          dVar58 = pdVar1[1];
          dVar36 = auVar40._0_8_;
          dVar27 = auVar40._8_8_;
          auVar30._8_4_ = SUB84(dVar51,0);
          auVar30._12_4_ = (undefined4)((ulonglong)dVar51 >> 0x20);
          auVar30._0_8_ = dVar51;
          dVar32 = dVar26 * dVar36 * 1.0 +
                   dVar58 * auVar30._8_8_ + dVar42 * dVar28 * -1.0 + dVar49 * dVar27;
          dVar35 = dVar42 * dVar36 * -1.0 +
                   ((dVar28 * dVar26 * -1.0 + dVar27 * dVar58) - dVar49 * auVar30._8_8_);
          plVar19 = (longlong *)local_258._0_8_;
          plVar11 = (longlong *)local_258._8_8_;
          local_1d8._8_4_ = SUB84(dVar32,0);
          local_1d8._0_8_ =
               dVar49 * dVar36 * -1.0 + dVar42 * dVar51 + dVar58 * dVar28 * 1.0 + dVar26 * dVar27;
          local_1d8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          local_1c8._8_4_ = SUB84(dVar35,0);
          local_1c8._0_8_ =
               dVar58 * dVar36 * 1.0 + ((dVar28 * dVar49 * 1.0 + dVar27 * dVar42) - dVar26 * dVar51)
          ;
          local_1c8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          puVar18 = (undefined8 *)(lVar16 + 0x60 + lVar15);
          local_1f8 = *puVar18;
          uStack_1f0 = puVar18[1];
          puVar18 = (undefined8 *)(lVar16 + 0x70 + lVar15);
          local_1e8 = *puVar18;
          uStack_1e0 = puVar18[1];
          FUN_144a44da6(&local_158,&local_1f8,local_1d8,local_270);
          dVar32 = (double)CONCAT44(uStack_154,local_158);
          dVar35 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
          dVar26 = (double)CONCAT44(uStack_144,local_148);
          auVar24._0_8_ = dVar32 * dVar32;
          auVar24._8_8_ = dVar35 * dVar35;
          dVar49 = dVar26 * dVar26 + auVar24._0_8_;
          dVar42 = dStack_140 * dStack_140 + auVar24._8_8_;
          auVar41._0_8_ = dVar49 + dVar42;
          auVar41._8_8_ = dVar49 + dVar42;
          auVar40 = sqrtpd(auVar24,auVar41);
          auVar44 = divpd(auVar44,auVar40);
          auVar47._0_8_ = auVar44._0_8_ * dVar26;
          auVar47._8_8_ = auVar44._8_8_ * dStack_140;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
          auVar38 = blendvpd(auVar38,auVar47,auVar25);
          lVar16 = param_8[4];
          puVar2 = (ulonglong *)(lVar16 + 0x60 + lVar15);
          *puVar2 = (ulonglong)(dVar32 * auVar44._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
          puVar2[1] = (ulonglong)(dVar35 * auVar44._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
          *(undefined1 (*) [16])(lVar16 + 0x70 + lVar15) = auVar38;
          lVar15 = lVar15 + 0x60;
          uVar5 = *(ushort *)(*param_8 + lVar20);
          puVar18 = (undefined8 *)(param_8[4] + lVar15);
          puVar17 = &local_158;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *(undefined8 *)puVar17 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar17 = puVar17 + 2;
          }
          uVar13 = (uint)uVar5;
          if (uVar5 == 0xffff) {
            uVar13 = 0xffffffff;
          }
          local_2c8 = 0;
          local_2d0 = 0;
          local_2d8 = param_7;
          FUN_144831e8e(lVar7,uVar13,&local_158,0);
          lVar21 = lVar21 + 1;
          lVar20 = lVar20 + 0x20;
        } while (lVar21 < (longlong)(int)param_8[3] + -1);
      }
    }
  }
LAB_1492d1a2c:
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492d275a FUN_1492d275a body=25 status=ok
// SIG undefined FUN_1492d275a(void)

undefined8 FUN_1492d275a(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492d2774 FUN_1492d2774 body=25 status=ok
// SIG undefined FUN_1492d2774(void)

undefined8 FUN_1492d2774(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492d2792 FUN_1492d2792 body=887 status=ok
// SIG undefined FUN_1492d2792(void)

void FUN_1492d2792(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 *local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_11a;
  undefined1 local_119;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 local_bc [4];
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar8 = (undefined8 *)*param_2;
  local_108 = (undefined8 *)*puVar8;
  local_110 = (undefined8 *)puVar8[4];
  local_118 = (undefined8 *)puVar8[8];
  local_e8 = puVar8[0xc];
  local_f0 = puVar8[0x10];
  local_f8 = puVar8[0x14];
  uVar1 = *(undefined4 *)puVar8[0x18];
  local_100 = puVar8[0x1c];
  local_119 = *(undefined1 *)puVar8[0x20];
  puVar9 = (undefined8 *)puVar8[0x24];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_11a = *(undefined1 *)puVar8[0x28];
  uVar2 = *(undefined4 *)puVar8[0x2c];
  uVar3 = *(undefined4 *)puVar8[0x30];
  uVar4 = *(undefined4 *)puVar8[0x34];
  uVar5 = *(undefined4 *)puVar8[0x38];
  uVar6 = *(undefined4 *)puVar8[0x3c];
  uVar7 = *(undefined1 *)puVar8[0x40];
  uVar10 = puVar8[0x44];
  uVar12 = FUN_144828ac0(puVar8 + 0x48,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(*param_2 + 0x260,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar14 = FUN_144828ac0(*param_2 + 0x280,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_128 = FUN_144828ac0(*param_2 + 0x2a0,0,
                            *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                            *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  local_188 = local_bc;
  local_bc[0] = 1;
  local_b8 = *puVar9;
  local_c8 = 1;
  local_c4 = *local_118;
  local_d4 = 1;
  local_d0 = *local_110;
  local_e0 = 1;
  local_dc = *local_108;
  local_198 = local_100;
  local_1a8 = local_f8;
  local_1b0 = local_f0;
  local_1b8 = local_e8;
  local_180 = local_11a;
  local_190 = local_119;
  local_1a0 = uVar1;
  local_178 = uVar2;
  local_170 = uVar3;
  local_168 = uVar4;
  local_160 = uVar5;
  local_158 = uVar6;
  local_150 = uVar7;
  local_148 = uVar10;
  local_140 = uVar12;
  local_138 = uVar13;
  local_130 = uVar14;
  FUN_1492d31c0(*(undefined8 *)(param_1 + 0xc0));
  if ((local_b0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d2b1a FUN_1492d2b1a body=40 status=ok
// SIG undefined FUN_1492d2b1a(void)

void FUN_1492d2b1a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492d2b42(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1492d2b42 FUN_1492d2b42 body=460 status=ok
// SIG undefined FUN_1492d2b42(void)

void FUN_1492d2b42(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_81;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98 = param_1 + 0x3c0;
  local_a0 = param_1 + 0x3a0;
  local_a8 = param_1 + 0x380;
  local_b0 = param_1 + 0x360;
  local_b8 = param_1 + 0x2f0;
  local_c0 = *(undefined1 *)(param_1 + 0x2e4);
  local_c8 = *(undefined4 *)(param_1 + 0x2e0);
  local_d0 = *(undefined4 *)(param_1 + 0x2dc);
  local_d8 = *(undefined4 *)(param_1 + 0x2d8);
  local_e0 = *(undefined4 *)(param_1 + 0x2d4);
  local_e8 = *(undefined4 *)(param_1 + 0x2d0);
  local_f0 = *(undefined1 *)(param_1 + 0x2cc);
  local_100 = *(undefined1 *)(param_1 + 0x2c0);
  local_108 = param_1 + 0x2a8;
  local_110 = *(undefined4 *)(param_1 + 0x2a0);
  local_f8 = local_54;
  local_54[0] = 1;
  local_50 = *(undefined8 *)(param_1 + 0x2c4);
  local_60 = 1;
  local_5c = *(undefined8 *)(param_1 + 0x200);
  local_6c = 1;
  local_68 = *(undefined8 *)(param_1 + 0x1f8);
  local_78[0] = 1;
  local_74 = *(undefined8 *)(param_1 + 0x1f0);
  local_118 = param_1 + 0x288;
  local_120 = param_1 + 0x270;
  local_128 = param_1 + 0x210;
  local_81 = local_c0;
  local_80 = param_2;
  FUN_1492d31c0(param_2,local_78);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d2d10 FUN_1492d2d10 body=774 status=ok
// SIG undefined FUN_1492d2d10(void)

void FUN_1492d2d10(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar10 = (undefined8 *)*param_2;
  uVar11 = *puVar10;
  uVar12 = puVar10[4];
  uVar13 = puVar10[8];
  uVar14 = puVar10[0xc];
  uVar15 = puVar10[0x10];
  uVar16 = puVar10[0x14];
  uVar1 = *(undefined4 *)puVar10[0x18];
  uVar17 = puVar10[0x1c];
  uVar7 = *(undefined1 *)puVar10[0x20];
  uVar18 = puVar10[0x24];
  lVar20 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = *(undefined1 *)puVar10[0x28];
  uVar2 = *(undefined4 *)puVar10[0x2c];
  uVar3 = *(undefined4 *)puVar10[0x30];
  uVar4 = *(undefined4 *)puVar10[0x34];
  uVar5 = *(undefined4 *)puVar10[0x38];
  uVar6 = *(undefined4 *)puVar10[0x3c];
  uVar9 = *(undefined1 *)puVar10[0x40];
  uVar19 = puVar10[0x44];
  uVar21 = FUN_144828ac0(puVar10 + 0x48,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar20 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar20 * 0x14));
  lVar20 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar22 = FUN_144828ac0(*param_2 + 0x260,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar20 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar20 * 0x14));
  lVar20 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar23 = FUN_144828ac0(*param_2 + 0x280,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar20 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar20 * 0x14));
  lVar20 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar24 = FUN_144828ac0(*param_2 + 0x2a0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar20 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar20 * 0x14));
  FUN_1492d31c0(*(undefined8 *)(param_1 + 0xc0),uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar1,
                uVar17,uVar7,uVar18,uVar8,uVar2,uVar3,uVar4,uVar5,uVar6,uVar9,uVar19,uVar21,uVar22,
                uVar23,uVar24);
  return;
}



// FUNCTION 1492d3026 FUN_1492d3026 body=40 status=ok
// SIG undefined FUN_1492d3026(void)

void FUN_1492d3026(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492d304e(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1492d304e FUN_1492d304e body=369 status=ok
// SIG undefined FUN_1492d304e(void)

void FUN_1492d304e(longlong param_1,undefined8 param_2)

{
  FUN_1492d31c0(param_2,param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x208,param_1 + 0x220,
                param_1 + 0x280,param_1 + 0x298,*(undefined4 *)(param_1 + 0x2b0),param_1 + 0x2b8,
                *(undefined1 *)(param_1 + 0x2d0),param_1 + 0x2d4,*(undefined1 *)(param_1 + 0x2e0),
                *(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e8),
                *(undefined4 *)(param_1 + 0x2ec),*(undefined4 *)(param_1 + 0x2f0),
                *(undefined4 *)(param_1 + 0x2f4),*(undefined1 *)(param_1 + 0x2f8),param_1 + 0x300,
                param_1 + 0x370,param_1 + 0x390,param_1 + 0x3b0,param_1 + 0x3d0);
  return;
}



// FUNCTION 1492d31c0 FUN_1492d31c0 body=4391 status=ok
// SIG undefined FUN_1492d31c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492d31c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,ulonglong param_6,ulonglong param_7,uint param_8,double *param_9,
                  char param_10,undefined8 param_11,undefined1 param_12,undefined4 param_13,
                  undefined4 param_14,float param_15,float param_16,float param_17,
                  undefined1 param_18,char *param_19,longlong param_20,longlong param_21,
                  longlong param_22,char *param_23)

{
  char *pcVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar23;
  undefined1 auVar18 [16];
  double dVar17;
  double dVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  double dVar58;
  undefined1 auVar57 [16];
  undefined1 auStack_398 [32];
  double *local_378;
  ulonglong local_370;
  uint local_368;
  float local_360;
  float local_358;
  undefined1 local_350;
  undefined4 local_348;
  undefined4 local_340;
  double local_338;
  undefined1 *puStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  undefined1 *puStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_298;
  undefined1 *puStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8 [2];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  undefined1 *puStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    cVar4 = FUN_144828dba(param_20,param_2,lVar3);
    if (cVar4 != '\0') {
      cVar4 = FUN_144828dba(param_21,param_3,lVar3);
      if (cVar4 != '\0') {
        FUN_144828dba(param_22,param_4,lVar3);
        FUN_144828dba(param_23,param_11,lVar3);
        if (1e-08 < param_15) {
          local_168 = param_9[2];
          local_178 = *param_9;
          dStack_170 = param_9[1];
          if (*(short *)(param_23 + 0xc) != -1) {
            cVar4 = FUN_144a846f6(*(undefined4 *)(param_23 + 4));
            if (((cVar4 != '\0') && (*(longlong *)(param_23 + 4) != 0)) && (*param_23 != '\0')) {
              uVar6 = 0xffffffff;
              if (*(ushort *)(param_23 + 0xc) != 0xffff) {
                uVar6 = (uint)*(ushort *)(param_23 + 0xc);
              }
              FUN_14486750c(lVar3,&local_158,uVar6,0);
              dVar30 = dStack_170 * local_158 - local_178 * (double)puStack_150;
              dVar32 = local_168 * (double)puStack_150 - dStack_170 * local_148;
              dVar44 = local_178 * local_148 - local_158 * local_168;
              dVar32 = dVar32 + dVar32;
              dVar44 = dVar44 + dVar44;
              dVar30 = dVar30 + dVar30;
              dVar25 = dVar44 * local_158 - dVar32 * (double)puStack_150;
              local_178 = (dVar30 * (double)puStack_150 - dVar44 * local_148) +
                          dStack_140 * dVar32 + local_178;
              dStack_170 = (local_148 * dVar32 - dVar30 * local_158) +
                           dStack_140 * dVar44 + dStack_170;
              dVar32 = dStack_140 * dVar30;
              if (param_10 != '\0') {
                local_178 = local_178 + local_138;
                dStack_170 = dStack_170 + dStack_130;
                local_168 = local_168 + dStack_140 * dVar30;
                dVar32 = dVar25;
                dVar25 = local_128;
              }
              local_168 = dVar32 + local_168 + dVar25;
            }
          }
          uVar6 = (uint)*(ushort *)(param_20 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_14486750c(lVar3,local_1d8,uVar6,0);
          pdVar7 = local_1d8;
          pdVar8 = &local_238;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *pdVar8 = *pdVar7;
            pdVar7 = pdVar7 + 1;
            pdVar8 = pdVar8 + 1;
          }
          uVar6 = (uint)*(ushort *)(param_21 + 0xc);
          if (*(ushort *)(param_21 + 0xc) == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_14486750c(lVar3,&local_158,uVar6,0);
          local_218 = local_138;
          dStack_210 = dStack_130;
          local_208 = local_128;
          uStack_200 = 0;
          pdVar7 = &local_298;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *pdVar7 = *param_5;
            param_5 = param_5 + 1;
            pdVar7 = pdVar7 + 1;
          }
          if (param_16 < 1e-08) {
            uVar6 = 0xffffffff;
            if (*(ushort *)(param_20 + 0xc) != 0xffff) {
              uVar6 = (uint)*(ushort *)(param_20 + 0xc);
            }
            FUN_14486750c(lVar3,&local_158,uVar6,1);
            dVar25 = local_128;
            dVar32 = dStack_130;
            dVar30 = local_138;
            auVar35._8_8_ = dStack_110;
            auVar35._0_8_ = local_118;
            if (local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110 <=
                9.99999993922529e-09) {
              uVar42 = (undefined4)DAT_14c846518;
              uVar43 = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
              dVar44 = DAT_14c846520;
              dVar51 = DAT_14c846510;
            }
            else {
              auVar13._8_8_ = dStack_190;
              auVar13._0_8_ = local_198;
              auVar35 = divpd(auVar13,auVar35);
              uVar42 = auVar35._8_4_;
              uVar43 = auVar35._12_4_;
              dVar44 = local_188 / local_108;
              dVar51 = auVar35._0_8_;
            }
            uVar6 = 0xffffffff;
            if (*(ushort *)(param_21 + 0xc) != 0xffff) {
              uVar6 = (uint)*(ushort *)(param_21 + 0xc);
            }
            FUN_14486750c(lVar3,&local_2f8,uVar6,1);
            dVar44 = (dVar25 - local_2c8) * dVar44;
            dVar32 = (dVar32 - dStack_2d0) * (double)CONCAT44(uVar43,uVar42);
            dVar51 = (dVar30 - local_2d8) * dVar51;
            param_16 = (float)SQRT(dVar44 * dVar44 + dVar51 * dVar51 + dVar32 * dVar32);
          }
          if ((param_17 < 1e-08) && (*(short *)(param_22 + 0xc) != -1)) {
            uVar6 = (uint)*(ushort *)(param_21 + 0xc);
            if (*(ushort *)(param_21 + 0xc) == 0xffff) {
              uVar6 = 0xffffffff;
            }
            FUN_14486750c(lVar3,&local_158,uVar6,1);
            dVar25 = local_128;
            dVar32 = dStack_130;
            dVar30 = local_138;
            auVar18._8_8_ = dStack_110;
            auVar18._0_8_ = local_118;
            if (local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110 <=
                9.99999993922529e-09) {
              uVar42 = (undefined4)DAT_14c846518;
              uVar43 = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
              dVar44 = DAT_14c846520;
              dVar51 = DAT_14c846510;
            }
            else {
              auVar54._8_8_ = dStack_1f0;
              auVar54._0_8_ = local_1f8;
              auVar35 = divpd(auVar54,auVar18);
              uVar42 = auVar35._8_4_;
              uVar43 = auVar35._12_4_;
              dVar44 = local_1e8 / local_108;
              dVar51 = auVar35._0_8_;
            }
            uVar6 = 0xffffffff;
            if (*(ushort *)(param_22 + 0xc) != 0xffff) {
              uVar6 = (uint)*(ushort *)(param_22 + 0xc);
            }
            FUN_14486750c(lVar3,&local_2f8,uVar6,1);
            dVar44 = (dVar25 - local_2c8) * dVar44;
            dVar32 = (dVar32 - dStack_2d0) * (double)CONCAT44(uVar43,uVar42);
            dVar51 = (dVar30 - local_2d8) * dVar51;
            param_17 = (float)SQRT(dVar44 * dVar44 + dVar51 * dVar51 + dVar32 * dVar32);
          }
          if ((1e-08 <= param_16) && (1e-08 <= param_17)) {
            local_340 = param_14;
            local_348 = param_13;
            local_350 = param_12;
            local_368 = param_8;
            local_370 = param_7;
            local_378 = (double *)param_6;
            local_360 = param_16;
            local_358 = param_17;
            FUN_1491af9f2(local_1d8,&local_238,&local_298,&local_178);
            if ((*(longlong *)(param_1 + 0x58) != 0) && (*param_19 == '\x01')) {
              local_318 = 1.3411046495548362e-08;
              puStack_310 = &DAT_3f8000003f800000;
              local_338 = 0.0078125;
              puStack_330 = &DAT_3f8000003f800000;
              local_158 = local_218;
              puStack_150 = (undefined1 *)dStack_210;
              local_148 = local_208;
              local_2f8 = local_1b8;
              dStack_2f0 = dStack_1b0;
              local_2e8 = local_1a8;
              pcVar1 = param_19 + 0x10;
              local_370 = local_370 & 0xffffffff00000000;
              local_378 = &local_318;
              FUN_14446764a(*(longlong *)(param_1 + 0x58),pcVar1,&local_2f8,&local_158);
              local_158 = local_278;
              puStack_150 = (undefined1 *)dStack_270;
              local_148 = local_268;
              local_2f8 = local_218;
              dStack_2f0 = dStack_210;
              local_2e8 = local_208;
              local_370 = local_370 & 0xffffffff00000000;
              local_378 = &local_318;
              FUN_14446764a(*(undefined8 *)(param_1 + 0x58),pcVar1,&local_2f8,&local_158);
              local_158 = local_218;
              puStack_150 = (undefined1 *)dStack_210;
              local_148 = local_208;
              local_370 = local_370 & 0xffffffff00000000;
              local_378 = &local_338;
              FUN_14446764a(*(undefined8 *)(param_1 + 0x58),pcVar1,&local_158,&local_178);
              local_118 = (double)*(float *)(param_19 + 4) * 0.10000000149011612;
              local_158 = DAT_14c8463d0;
              puStack_150 = DAT_14c8463d8;
              local_148 = DAT_14c8463e0;
              dStack_140 = DAT_14c8463e8;
              local_138 = local_178;
              dStack_130 = dStack_170;
              local_128 = local_168;
              uStack_120 = 0;
              uStack_100 = 0;
              local_378 = (double *)((ulonglong)local_378 & 0xffffffff00000000);
              dStack_110 = local_118;
              local_108 = local_118;
              FUN_144467984(*(undefined8 *)(param_1 + 0x58),pcVar1,&local_158,&local_338);
            }
            auVar35 = _DAT_149934d80;
            if (param_15 < 1.0) {
              dVar51 = local_278 - local_218;
              dVar15 = dStack_270 - dStack_210;
              dVar33 = local_218 - local_1b8;
              dVar36 = dStack_210 - dStack_1b0;
              dVar44 = local_268 - local_208;
              dVar31 = local_208 - local_1a8;
              dVar38 = -local_1d8[0];
              dVar40 = -local_1d8[1];
              local_318 = local_1d8[0];
              puStack_310 = (undefined1 *)local_1d8[1];
              local_308 = (double)local_1c8._0_8_;
              dStack_300 = (double)local_1c8._8_8_;
              dVar48 = (double)local_1c8._0_8_ * -1.0;
              dVar50 = (double)local_1c8._8_8_ * 1.0;
              dVar52 = dVar33 * dVar48 - dVar38 * dVar31;
              dVar30 = dVar36 * dVar38 - dVar33 * dVar40;
              dVar58 = dVar31 * dVar40 - dVar36 * dVar48;
              dVar58 = dVar58 + dVar58;
              dVar52 = dVar52 + dVar52;
              dVar30 = dVar30 + dVar30;
              auVar57._8_8_ = dStack_190;
              auVar57._0_8_ = local_198;
              dVar32 = dVar30 * local_1d8[0];
              auVar47._8_8_ = 0x3ff0000000000000;
              auVar47._0_8_ = local_188;
              auVar54 = divpd(_DAT_149934d80,auVar57);
              auVar57 = divpd(ZEXT816(0x3ff0000000000000),auVar47);
              dVar39 = ABS(local_198);
              dVar41 = ABS(dStack_190);
              dVar45 = ABS(local_188);
              dVar26 = -local_238;
              dVar29 = -(double)puStack_230;
              dVar16 = (double)local_228._0_8_ * -1.0;
              dVar23 = (double)local_228._8_8_ * 1.0;
              dVar46 = dVar51 * dVar16 - dVar26 * dVar44;
              dVar53 = dVar15 * dVar26 - dVar51 * dVar29;
              dVar55 = dVar44 * dVar29 - dVar15 * dVar16;
              dVar55 = dVar55 + dVar55;
              dVar46 = dVar46 + dVar46;
              dVar53 = dVar53 + dVar53;
              dVar56 = dVar53 * local_238;
              auVar20._8_8_ = dStack_1f0;
              auVar20._0_8_ = local_1f8;
              auVar9._8_8_ = 0x3ff0000000000000;
              auVar9._0_8_ = local_1e8;
              auVar13 = divpd(_DAT_149934d80,auVar20);
              auVar18 = divpd(ZEXT816(0x3ff0000000000000),auVar9);
              dVar34 = ABS(local_1f8);
              dVar37 = ABS(dStack_1f0);
              dVar25 = ABS(local_1e8);
              uVar6 = (uint)*(ushort *)(param_20 + 0xc);
              if (uVar6 == 0xffff) {
                uVar6 = 0xffffffff;
              }
              FUN_14486750c(lVar3,&local_158,uVar6,0);
              local_338 = local_158;
              puStack_330 = puStack_150;
              local_328 = local_148;
              dStack_320 = dStack_140;
              FUN_144a44da6(&local_2f8,&local_338,&local_318);
              dVar17 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
              dVar24 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
              auVar19._0_8_ = dVar17 + dVar24;
              auVar19._8_8_ = dVar17 + dVar24;
              auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
              auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
              auVar20 = sqrtpd(auVar19,auVar19);
              auVar20 = divpd(auVar35,auVar20);
              auVar27._0_8_ = auVar20._0_8_ * local_2e8;
              auVar27._8_8_ = auVar20._8_8_ * dStack_2e0;
              local_1d8[0] = (double)((ulonglong)(local_2f8 * auVar20._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
              local_1d8[1] = (double)((ulonglong)(dStack_2f0 * auVar20._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
              local_1c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar10);
              local_318 = local_238;
              puStack_310 = puStack_230;
              local_308 = (double)local_228._0_8_;
              dStack_300 = (double)local_228._8_8_;
              uVar6 = (uint)*(ushort *)(param_21 + 0xc);
              if (*(ushort *)(param_21 + 0xc) == 0xffff) {
                uVar6 = 0xffffffff;
              }
              FUN_14486750c(lVar3,&local_158,uVar6,0);
              local_338 = local_158;
              puStack_330 = puStack_150;
              local_328 = local_148;
              dStack_320 = dStack_140;
              FUN_144a44da6(&local_2f8,&local_338,&local_318);
              dVar17 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
              dVar24 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
              auVar21._0_8_ = dVar17 + dVar24;
              auVar21._8_8_ = dVar17 + dVar24;
              auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
              auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
              auVar20 = sqrtpd(auVar21,auVar21);
              auVar20 = divpd(auVar35,auVar20);
              auVar28._0_8_ = auVar20._0_8_ * local_2e8;
              auVar28._8_8_ = auVar20._8_8_ * dStack_2e0;
              local_228 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar11);
              local_238 = (double)((ulonglong)(local_2f8 * auVar20._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
              puStack_230 = (undefined1 *)
                            ((ulonglong)(dStack_2f0 * auVar20._8_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
              if (*(short *)(param_22 + 0xc) != -1) {
                local_318 = local_298;
                puStack_310 = puStack_290;
                local_308 = (double)local_288._0_8_;
                dStack_300 = (double)local_288._8_8_;
                FUN_14486750c(lVar3,&local_158,*(short *)(param_22 + 0xc),0);
                local_338 = local_158;
                puStack_330 = puStack_150;
                local_328 = local_148;
                dStack_320 = dStack_140;
                FUN_144a44da6(&local_2f8,&local_338,&local_318);
                auVar14._0_8_ = local_2f8 * local_2f8;
                auVar14._8_8_ = dStack_2f0 * dStack_2f0;
                dVar17 = local_2e8 * local_2e8 + auVar14._0_8_;
                dVar24 = dStack_2e0 * dStack_2e0 + auVar14._8_8_;
                auVar22._0_8_ = dVar17 + dVar24;
                auVar22._8_8_ = dVar17 + dVar24;
                auVar20 = sqrtpd(auVar14,auVar22);
                auVar35 = divpd(auVar35,auVar20);
                auVar49._0_8_ = auVar35._0_8_ * local_2e8;
                auVar49._8_8_ = auVar35._8_8_ * dStack_2e0;
                auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
                auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
                local_288 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar12);
                local_298 = (double)((ulonglong)(local_2f8 * auVar35._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
                puStack_290 = (undefined1 *)
                              ((ulonglong)(dStack_2f0 * auVar35._8_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
              }
              local_198 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar39) & auVar54._0_8_) *
                          ((dVar30 * dVar40 - dVar52 * dVar48) + dVar50 * dVar58 + dVar33) *
                          local_198;
              dStack_190 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar41) & auVar54._8_8_) *
                           (dVar32 + dVar48 * dVar58 + dVar50 * dVar52 + dVar36) * dStack_190;
              local_188 = (dVar50 * dVar30 + dVar31 + (dVar52 * dVar38 - dVar58 * dVar40)) *
                          (double)(-(ulonglong)(9.99999993922529e-09 < dVar45) & auVar57._0_8_) *
                          local_188;
              dVar32 = dStack_190 * local_1d8[0] - local_198 * local_1d8[1];
              dVar31 = local_188 * local_1d8[1] - dStack_190 * (double)local_1c8._0_8_;
              dVar30 = local_198 * (double)local_1c8._0_8_ - local_1d8[0] * local_188;
              dVar31 = dVar31 + dVar31;
              dVar30 = dVar30 + dVar30;
              dVar32 = dVar32 + dVar32;
              local_218 = (dVar32 * local_1d8[1] - dVar30 * (double)local_1c8._0_8_) +
                          (double)local_1c8._8_8_ * dVar31 + local_198 + local_1b8;
              dStack_210 = ((double)local_1c8._0_8_ * dVar31 - dVar32 * local_1d8[0]) +
                           (double)local_1c8._8_8_ * dVar30 + dStack_190 + dStack_1b0;
              local_208 = (double)local_1c8._8_8_ * dVar32 + local_188 +
                          (dVar30 * local_1d8[0] - dVar31 * local_1d8[1]) + local_1a8;
              uStack_200 = 0;
              local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar34) & auVar13._0_8_) *
                          ((dVar53 * dVar29 - dVar46 * dVar16) + dVar23 * dVar55 + dVar51) *
                          local_1f8;
              dStack_1f0 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar37) & auVar13._8_8_) *
                           (dVar56 + dVar16 * dVar55 + dVar23 * dVar46 + dVar15) * dStack_1f0;
              local_1e8 = (dVar23 * dVar53 + dVar44 + (dVar46 * dVar26 - dVar55 * dVar29)) *
                          (double)(-(ulonglong)(9.99999993922529e-09 < dVar25) & auVar18._0_8_) *
                          local_1e8;
              dVar44 = local_228._0_8_;
              dVar51 = local_228._8_8_;
              dVar32 = dStack_1f0 * local_238 - (double)puStack_230 * local_1f8;
              dVar25 = local_1e8 * (double)puStack_230 - dVar44 * dStack_1f0;
              dVar30 = local_1f8 * dVar44 - local_238 * local_1e8;
              dVar25 = dVar25 + dVar25;
              dVar30 = dVar30 + dVar30;
              dVar32 = dVar32 + dVar32;
              local_278 = (dVar32 * (double)puStack_230 - dVar30 * dVar44) +
                          dVar51 * dVar25 + local_1f8 + local_218;
              dStack_270 = (dVar44 * dVar25 - dVar32 * local_238) + dVar51 * dVar30 + dStack_1f0 +
                           dStack_210;
              local_268 = dVar51 * dVar32 + local_1e8 +
                          (dVar30 * local_238 - dVar25 * (double)puStack_230) + local_208;
              uStack_260 = 0;
            }
            uVar6 = (uint)*(ushort *)(param_20 + 0xc);
            if (uVar6 == 0xffff) {
              uVar6 = 0xffffffff;
            }
            pdVar7 = local_1d8;
            pdVar8 = &local_158;
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar8 = pdVar8 + 1;
            }
            local_368 = local_368 & 0xffffff00;
            local_370 = local_370 & 0xffffffffffffff00;
            local_378._0_1_ = param_18;
            FUN_144831e8e(lVar3,uVar6,&local_158,0);
            uVar6 = (uint)*(ushort *)(param_21 + 0xc);
            if (*(ushort *)(param_21 + 0xc) == 0xffff) {
              uVar6 = 0xffffffff;
            }
            pdVar7 = &local_238;
            pdVar8 = &local_158;
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar8 = pdVar8 + 1;
            }
            local_368 = local_368 & 0xffffff00;
            local_370 = local_370 & 0xffffffffffffff00;
            local_378 = (double *)CONCAT71(local_378._1_7_,param_18);
            FUN_144831e8e(lVar3,uVar6,&local_158,0);
            sVar2 = *(short *)(param_22 + 0xc);
            if (sVar2 != -1) {
              pdVar7 = &local_298;
              pdVar8 = &local_158;
              for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar8 = *pdVar7;
                pdVar7 = pdVar7 + 1;
                pdVar8 = pdVar8 + 1;
              }
              local_368 = local_368 & 0xffffff00;
              local_370 = local_370 & 0xffffffffffffff00;
              local_378 = (double *)CONCAT71(local_378._1_7_,param_18);
              FUN_144831e8e(lVar3,sVar2,&local_158,0);
            }
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d42e8 FUN_1492d42e8 body=138 status=ok
// SIG undefined FUN_1492d42e8(void)

void FUN_1492d42e8(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = puVar1[8];
  FUN_1402e3c0d(*puVar1,puVar1[0x20],uVar2,puVar1[4],uVar2,puVar1[0x20],uVar2,
                (double)*(float *)puVar1[0x18],(double)*(float *)puVar1[0x1c],
                *(undefined1 *)puVar1[0xc],(double)*(float *)puVar1[0x10],
                (double)*(float *)puVar1[0x14]);
  return;
}



// FUNCTION 1492d4378 FUN_1492d4378 body=181 status=ok
// SIG undefined FUN_1492d4378(void)

void FUN_1492d4378(longlong param_1)

{
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  longlong local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  double local_208;
  double local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_230 = param_1 + 0x68;
  local_210 = *(undefined1 *)(param_1 + 0x50);
  local_238 = param_1 + 0x38;
  local_200 = (double)*(float *)(param_1 + 0x58);
  local_208 = (double)*(float *)(param_1 + 0x54);
  local_218 = (double)*(float *)(param_1 + 0x60);
  local_220 = (double)*(float *)(param_1 + 0x5c);
  local_228 = local_238;
  FUN_1402e3c0d(param_1 + 8,local_230,local_238,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d442e FUN_1492d442e body=157 status=ok
// SIG undefined FUN_1492d442e(void)

void FUN_1492d442e(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1491af9f2(*puVar1,puVar1[0x2c],puVar1[8],puVar1[4],puVar1[0xc],puVar1[0x10],
                *(undefined4 *)puVar1[0x14],*(undefined4 *)puVar1[0x24],*(undefined4 *)puVar1[0x28],
                *(undefined1 *)puVar1[0x18],*(undefined4 *)puVar1[0x1c],*(undefined4 *)puVar1[0x20])
  ;
  return;
}



// FUNCTION 1492d44d4 FUN_1492d44d4 body=228 status=ok
// SIG undefined FUN_1492d44d4(void)

void FUN_1492d44d4(longlong param_1)

{
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_218 = *(undefined4 *)(param_1 + 0x134);
  local_220 = *(undefined4 *)(param_1 + 0x130);
  local_200 = *(undefined4 *)(param_1 + 300);
  local_208 = *(undefined4 *)(param_1 + 0x128);
  local_210 = *(undefined1 *)(param_1 + 0x124);
  local_228 = *(undefined4 *)(param_1 + 0x120);
  local_230 = param_1 + 0x108;
  local_238 = param_1 + 0xf0;
  FUN_1491af9f2(param_1 + 0x10,param_1 + 0x140,param_1 + 0x90,param_1 + 0x70);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d45ba FUN_1492d45ba body=936 status=ok
// SIG undefined FUN_1492d45ba(void)

undefined8 FUN_1492d45ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_478 [32];
  undefined1 local_458;
  longlong local_448 [2];
  longlong local_438 [2];
  undefined **local_428 [62];
  undefined1 local_238;
  undefined8 local_234;
  undefined1 local_22c;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_21c;
  undefined8 local_208 [12];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined8 local_128 [30];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_1492d4964(local_428);
  local_234 = *(undefined8 *)(param_1 + 0x1f0);
  local_238 = 1;
  local_228 = *(undefined8 *)(param_1 + 0x1f8);
  local_22c = 1;
  local_21c = *(undefined8 *)(param_1 + 0x200);
  local_220 = 1;
  puVar2 = (undefined8 *)(param_1 + 0x210);
  puVar3 = local_208;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_198 = *(undefined8 *)(param_1 + 0x280);
  local_1a8 = *(undefined8 *)(param_1 + 0x270);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x278);
  local_190 = *(undefined8 *)(param_1 + 0x288);
  uStack_188 = *(undefined8 *)(param_1 + 0x290);
  local_180 = *(undefined8 *)(param_1 + 0x298);
  local_178 = *(undefined4 *)(param_1 + 0x2a0);
  local_160 = *(undefined8 *)(param_1 + 0x2b8);
  local_170 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_168 = *(undefined8 *)(param_1 + 0x2b0);
  local_158 = *(undefined1 *)(param_1 + 0x2c0);
  local_150 = *(undefined8 *)(param_1 + 0x2c4);
  local_154 = 1;
  local_148 = *(undefined1 *)(param_1 + 0x2cc);
  local_144 = *(undefined4 *)(param_1 + 0x2d0);
  local_140 = *(undefined4 *)(param_1 + 0x2d4);
  local_13c = *(undefined4 *)(param_1 + 0x2d8);
  local_138 = *(undefined4 *)(param_1 + 0x2dc);
  local_134 = *(undefined4 *)(param_1 + 0x2e0);
  local_130 = *(undefined1 *)(param_1 + 0x2e4);
  puVar2 = (undefined8 *)(param_1 + 0x2f0);
  puVar3 = local_128;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1492d4b4a(param_2,local_428);
  FUN_140056680(local_438,L"ItemA.Name");
  FUN_140056680(local_448,L"BoneA");
  local_458 = 1;
  FUN_1490fb142(param_2,local_448,local_438,1);
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_438,L"ItemB.Name");
  FUN_140056680(local_448,L"BoneB");
  local_458 = 1;
  FUN_1490fb142(param_2,local_448,local_438,1);
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_438,L"EffectorItem.Name");
  FUN_140056680(local_448,L"EffectorBone");
  local_458 = 1;
  FUN_1490fb142(param_2,local_448,local_438,1);
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_438,L"ItemALength");
  FUN_140056680(local_448,L"BoneALength");
  local_458 = 1;
  FUN_1490fb142(param_2,local_448,local_438,1);
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_438,L"ItemBLength");
  FUN_140056680(local_448,L"BoneBLength");
  local_458 = 1;
  FUN_1490fb142(param_2,local_448,local_438,1);
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_438[0] != 0) {
    FUN_1400020a8();
  }
  local_428[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc();
  if ((local_38 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d4964 FUN_1492d4964 body=486 status=ok
// SIG undefined FUN_1492d4964(void)

undefined8 * FUN_1492d4964(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc0c8f0;
  *(undefined1 *)((longlong)param_1 + 0x2d4) = 1;
  param_1[0x5b] = 0;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x2d4);
  param_1[0x41] = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar1;
  param_1[0x3e] = uVar2;
  *(undefined4 *)(param_1 + 0x3f) = uVar1;
  puVar15 = &DAT_14c846480;
  puVar16 = param_1 + 0x44;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x3ff0000000000000;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3fa000003f400000;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  uVar13 = uRam000000014c8464d8;
  uVar12 = DAT_14c8464d0;
  uVar11 = DAT_14c8464c8;
  uVar10 = DAT_14c8464c0;
  uVar9 = DAT_14c8464b8;
  uVar8 = DAT_14c8464b0;
  uVar7 = DAT_14c8464a8;
  uVar6 = DAT_14c8464a0;
  uVar5 = DAT_14c846498;
  uVar4 = DAT_14c846490;
  uVar3 = DAT_14c846488;
  uVar2 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x41200000;
  param_1[0x62] = uVar2;
  param_1[99] = uVar3;
  param_1[100] = uVar4;
  param_1[0x65] = uVar5;
  param_1[0x66] = uVar6;
  param_1[0x67] = uVar7;
  param_1[0x68] = uVar8;
  param_1[0x69] = uVar9;
  param_1[0x6a] = uVar10;
  param_1[0x6b] = uVar11;
  param_1[0x6c] = uVar12;
  param_1[0x6d] = uVar13;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined2 *)((longlong)param_1 + 0x37c) = 0xffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39c) = 0xffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3bc) = 0xffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3dc) = 0xffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1492d4b4a FUN_1492d4b4a body=211 status=ok
// SIG undefined FUN_1492d4b4a(void)

undefined8 * FUN_1492d4b4a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146714e4c();
  param_1[2] = uVar1;
  uVar1 = FUN_1467156b6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492d4c34 FUN_1492d4c34 body=113 status=ok
// SIG undefined FUN_1492d4c34(void)

void FUN_1492d4c34(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492d4ca6(local_1f8,param_1 + 8,param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d4ca6 FUN_1492d4ca6 body=237 status=ok
// SIG undefined FUN_1492d4ca6(void)

void FUN_1492d4ca6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074c8);
  if (cVar5 != '\0') {
    iVar1 = *(int *)(param_1 + 0x180);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
      lVar6 = 0;
      do {
        local_48 = *(undefined4 *)(lVar3 + 8 + lVar6);
        local_50 = *(undefined8 *)(lVar3 + lVar6);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_149192788(param_3,iVar2);
        }
        lVar4 = *param_3;
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = local_48;
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = local_50;
        lVar6 = lVar6 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar6);
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x170);
    *param_2 = *(undefined8 *)(param_1 + 0x168);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d4d94 FUN_1492d4d94 body=86 status=ok
// SIG undefined FUN_1492d4d94(void)

void FUN_1492d4d94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_1492d4e5a(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d4dec FUN_1492d4dec body=109 status=ok
// SIG undefined FUN_1492d4dec(void)

void FUN_1492d4dec(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492d4e5a(param_1 + 0x10,&local_28,param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d4e5a FUN_1492d4e5a body=680 status=ok
// SIG undefined FUN_1492d4e5a(void)

void FUN_1492d4e5a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_298 [40];
  longlong local_270;
  longlong *local_268;
  undefined4 local_260;
  undefined5 local_258;
  undefined3 uStack_253;
  undefined4 local_250;
  undefined1 local_24c;
  longlong *local_248;
  undefined4 local_240;
  undefined1 local_238 [392];
  char *local_b0;
  int local_a8;
  char *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  cVar4 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074c8);
  if (cVar4 != '\0') {
    FUN_14920b596(local_238);
    local_58 = (char *)0x0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      pcVar9 = (char *)*param_2;
      pcVar1 = pcVar9 + (longlong)*(int *)(param_2 + 1) * 0xc;
      do {
        uVar3 = uStack_50;
        if ((longlong)local_a8 != 0) {
          lVar6 = (longlong)local_a8 << 5;
          pcVar8 = local_b0;
          do {
            if ((*(longlong *)(pcVar8 + 4) == *(longlong *)(pcVar9 + 4)) && (*pcVar8 == *pcVar9)) {
              if (pcVar8 != (char *)0x0) goto LAB_1492d4f6d;
              break;
            }
            pcVar8 = pcVar8 + 0x20;
            lVar6 = lVar6 + -0x20;
          } while (lVar6 != 0);
        }
        lVar6 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_149192788(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_58 + lVar6 * 0xc + 8) = *(undefined4 *)(pcVar9 + 8);
        *(undefined8 *)(local_58 + lVar6 * 0xc) = *(undefined8 *)pcVar9;
LAB_1492d4f6d:
        pcVar9 = pcVar9 + 0xc;
      } while (pcVar9 != pcVar1);
    }
    FUN_140f8ccfc(local_238);
    if ((longlong)(int)uStack_50 != 0) {
      pcVar1 = local_58 + (longlong)(int)uStack_50 * 0xc;
      local_270 = param_1 + 0x178;
      pcVar9 = local_58;
      do {
        if ((longlong)*(int *)(param_1 + 0x180) != 0) {
          lVar6 = 0;
          iVar7 = 0;
          do {
            if ((*(longlong *)(pcVar9 + 4) ==
                 *(longlong *)(*(longlong *)(param_1 + 0x178) + 4 + lVar6)) &&
               (*pcVar9 == *(char *)(*(longlong *)(param_1 + 0x178) + lVar6))) {
              if (iVar7 != 1) {
                FUN_1491d3aac(local_270,-iVar7,
                              CONCAT71((int7)((ulonglong)*(longlong *)(pcVar9 + 4) >> 8),1));
              }
              break;
            }
            iVar7 = iVar7 + -1;
            lVar6 = lVar6 + 0x20;
          } while ((longlong)*(int *)(param_1 + 0x180) * 0x20 != lVar6);
        }
        FUN_140009b9a(&local_268,param_3);
        local_250 = *(undefined4 *)(pcVar9 + 8);
        local_258 = (undefined5)*(undefined8 *)pcVar9;
        uStack_253 = (undefined3)((ulonglong)*(undefined8 *)pcVar9 >> 0x28);
        local_24c = 1;
        local_248 = local_268;
        if (local_268 != (longlong *)0x0) {
          (**(code **)(*local_268 + 8))();
        }
        local_240 = local_260;
        iVar7 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
          FUN_14920b304((longlong *)(param_1 + 0x188),iVar7);
        }
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar7 * 0x20);
        *(ulonglong *)((longlong)puVar2 + 5) = CONCAT17(local_24c,CONCAT43(local_250,uStack_253));
        *puVar2 = CONCAT35(uStack_253,local_258);
        FUN_14023423e();
        if (local_248 != (longlong *)0x0) {
          (**(code **)(*local_248 + 0x10))();
        }
        if (local_268 != (longlong *)0x0) {
          (**(code **)(*local_268 + 0x10))();
        }
        pcVar9 = pcVar9 + 0xc;
      } while (pcVar9 != pcVar1);
    }
    if (local_58 != (char *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492d5116 FUN_1492d5116 body=47 status=ok
// SIG undefined FUN_1492d5116(void)

void FUN_1492d5116(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492d5146(param_1 + 0x10,param_1 + 0x1f0);
  return;
}



// FUNCTION 1492d5146 FUN_1492d5146 body=196 status=ok
// SIG undefined FUN_1492d5146(void)

void FUN_1492d5146(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074c8);
  if (cVar1 != '\0') {
    lVar2 = FUN_1491f421e(param_1 + 0x168,param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1491f424e(param_1 + 0x168);
      if (lVar3 != 0) {
        FUN_144a5dc74(local_30);
        FUN_1491d6884(lVar3,local_30);
        if (local_30[0] != (longlong *)0x0) {
          (**(code **)(*local_30[0] + 0x10))();
        }
      }
      FUN_144a5dc74(local_30);
      FUN_1491f41d6(lVar2,local_30);
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d520c FUN_1492d520c body=84 status=ok
// SIG undefined FUN_1492d520c(void)

void FUN_1492d520c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc074c8,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d5262 FUN_1492d5262 body=91 status=ok
// SIG undefined FUN_1492d5262(void)

void FUN_1492d5262(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc074c8,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d52be FUN_1492d52be body=55 status=ok
// SIG undefined FUN_1492d52be(void)

void FUN_1492d52be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b098 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0b098 = FUN_14171c317(FUN_1467170fb,uVar1,L"ERigMetaDataNameSpace");
  }
  return;
}



// FUNCTION 1492d52f6 FUN_1492d52f6 body=57 status=ok
// SIG undefined FUN_1492d52f6(void)

undefined1 FUN_1492d52f6(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074d8);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074e8);
  return uVar2;
}



// FUNCTION 1492d5330 FUN_1492d5330 body=1026 status=ok
// SIG undefined FUN_1492d5330(void)

undefined8 * FUN_1492d5330(longlong param_1,undefined8 *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *_Dst;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  int iVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1491dab48();
  if (cVar2 == '\0') {
    if (param_3 == '\x03') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc0b100) && (FUN_144b3d300(&DAT_14cc0b100), DAT_14cc0b100 == -1))
      {
        FUN_140056680(&DAT_14cc0b0f0,L"Root:");
        atexit((_func_5014 *)&LAB_1444b72af);
        _Init_thread_footer(&DAT_14cc0b100);
      }
      *param_2 = 0;
      pvVar5 = DAT_14cc0b0f0;
      iVar7 = DAT_14cc0b0f8;
    }
    else {
      if (param_3 != '\x02') {
LAB_1492d53ff:
        *param_2 = 0;
        param_2[1] = 0;
        goto LAB_1492d5467;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc0b0e8) && (FUN_144b3d300(&DAT_14cc0b0e8), DAT_14cc0b0e8 == -1))
      {
        FUN_140056680(&DAT_14cc0b0d8,L"Parent:");
        atexit((_func_5014 *)&LAB_1444b729e);
        _Init_thread_footer(&DAT_14cc0b0e8);
      }
      *param_2 = 0;
      pvVar5 = DAT_14cc0b0d8;
      iVar7 = DAT_14cc0b0e0;
    }
    lVar6 = (longlong)iVar7;
    *(int *)(param_2 + 1) = iVar7;
    if (lVar6 == 0) {
LAB_1492d5483:
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_1492d548a;
    }
    FUN_1446dd670(param_2,iVar7,0);
    _Dst = (void *)*param_2;
LAB_1492d5462:
    memcpy(_Dst,pvVar5,lVar6 * 2);
LAB_1492d5467:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  if (param_3 == '\x03') {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_1 + 0x1c8);
    lVar6 = (longlong)local_50;
    pvVar5 = *(void **)(param_1 + 0x1c0);
    if (lVar6 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar5,lVar6 * 2);
    }
    FUN_1491d31c2(&local_58,&local_48,0,0);
    pvVar5 = local_58;
  }
  else {
    if (param_3 != '\x02') {
      if (param_3 != '\x01') goto LAB_1492d53ff;
      *param_2 = 0;
      iVar7 = *(int *)(param_1 + 0x1c8);
      lVar6 = (longlong)iVar7;
      pvVar5 = *(void **)(param_1 + 0x1c0);
      *(int *)(param_2 + 1) = iVar7;
      if (lVar6 == 0) goto LAB_1492d5483;
      FUN_1446dd670(param_2,iVar7,0);
      _Dst = (void *)*param_2;
      goto LAB_1492d5462;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_68 = (void *)0x0;
    uVar3 = *(uint *)(param_1 + 0x1c8);
    pvVar5 = *(void **)(param_1 + 0x1c0);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_60 = (ulonglong)uVar3;
      local_50 = 0;
    }
    else {
      FUN_1446dd670(&local_68,uVar3,0);
      memcpy(local_68,pvVar5,(longlong)(int)uVar3 * 2);
      local_50 = (int)uStack_60;
    }
    iVar7 = local_50 + -1;
    if (local_50 == 0) {
      iVar7 = 0;
    }
    iVar4 = 1;
    if (1 < iVar7) {
      iVar4 = iVar7;
    }
    uVar3 = iVar4 - 1;
    bVar1 = 0 < (int)(iVar7 - uVar3);
    if ((int)uVar3 < iVar7) {
      iVar7 = local_50 - (uVar3 + bVar1);
      if (iVar7 != 0) {
        memmove((void *)((longlong)local_68 + (ulonglong)uVar3 * 2),
                (void *)((longlong)local_68 + (ulonglong)uVar3 * 2 + 2),(longlong)iVar7 * 2);
        local_50 = (int)uStack_60;
      }
      local_50 = local_50 - (uint)bVar1;
    }
    local_58 = local_68;
    local_4c = uStack_60._4_4_;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_1491d31c2(&local_58,&local_48,0,1);
    pvVar5 = local_68;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
      pvVar5 = local_68;
    }
  }
  if (pvVar5 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((int)uStack_40 < 2) {
    *param_2 = 0;
    iVar7 = *(int *)(param_1 + 0x1c8);
    pvVar5 = *(void **)(param_1 + 0x1c0);
    *(int *)(param_2 + 1) = iVar7;
    if ((longlong)iVar7 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar7,0);
      memcpy((void *)*param_2,pvVar5,(longlong)iVar7 * 2);
    }
  }
  else {
    FUN_1449b8608(param_2,&local_48,PTR_DAT_14c764f40);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1492d548a:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d5734 FUN_1492d5734 body=49 status=ok
// SIG undefined FUN_1492d5734(void)

longlong FUN_1492d5734(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    if (param_2 == '\x01') {
      return lVar1;
    }
    if (param_2 == '\x03') {
      lVar1 = FUN_1491b2e06(lVar1);
      return lVar1;
    }
    if (param_2 == '\x02') {
      lVar1 = FUN_1491b2d84(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1492d5766 FUN_1492d5766 body=348 status=ok
// SIG undefined FUN_1492d5766(void)

longlong * FUN_1492d5766(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  byte bVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar5 = (byte)param_3;
  lVar2 = *param_4;
  if (lVar2 == 0 || bVar5 == 0) {
LAB_1492d5799:
    *param_2 = lVar2;
  }
  else {
    FUN_1400021e4(param_4,&local_40);
    if ((longlong)local_38 != 0) {
      uVar3 = 0;
      do {
        if (*(short *)(local_40 + uVar3) == 0x3a) {
          if ((int)(~uVar3 >> 1) != 0) {
            *param_2 = *param_4;
            goto LAB_1492d5857;
          }
          break;
        }
        uVar3 = uVar3 + 2;
      } while ((longlong)local_38 * 2 != uVar3);
    }
    cVar1 = FUN_1491dab48(param_1);
    if (cVar1 == '\0') {
      if ((bVar5 & 0xfe) != 2) goto LAB_1492d5877;
    }
    else if (2 < (byte)(bVar5 - 1)) {
LAB_1492d5877:
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar2 = *param_4;
      goto LAB_1492d5799;
    }
    FUN_1492d5330(param_1,local_60,param_3);
    FUN_1491d2e98(&local_50,local_60,&local_40);
    puVar4 = local_50;
    if (local_48 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar4,1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
LAB_1492d5857:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492d591c FUN_1492d591c body=25 status=ok
// SIG undefined FUN_1492d591c(void)

undefined8 FUN_1492d591c(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492d5936 FUN_1492d5936 body=230 status=ok
// SIG undefined FUN_1492d5936(void)

void FUN_1492d5936(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  param_2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)*param_2;
  uVar2 = *(undefined4 *)param_2[4];
  uVar3 = *(undefined4 *)param_2[8];
  uVar4 = *(undefined4 *)param_2[0xc];
  uVar5 = *(undefined4 *)param_2[0x10];
  uVar6 = param_2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(param_2 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_1492d5b2e(*(undefined8 *)(param_1 + 0xc0),uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  return;
}



// FUNCTION 1492d5a1c FUN_1492d5a1c body=272 status=ok
// SIG undefined FUN_1492d5a1c(void)

void FUN_1492d5a1c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x20;
  local_148 = param_1 + 0x1c;
  local_150 = *(undefined4 *)(param_1 + 0x18);
  local_158 = *(undefined4 *)(param_1 + 0x14);
  FUN_1492d5b2e(&local_138,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d5b2e FUN_1492d5b2e body=384 status=ok
// SIG undefined FUN_1492d5b2e(void)

void FUN_1492d5b2e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = *(double *)(param_1 + 0x20);
  if (0.10000000149011612 <= dVar2) {
    dVar2 = 0.10000000149011612;
  }
  *param_7 = param_2;
  for (fVar3 = (float)dVar2; 0.016666668 <= fVar3; fVar3 = fVar3 + -0.016666668) {
    param_2 = FUN_147b1fbfe(param_2,param_3,param_8,param_4,param_5,0x3c888889,param_6,0x3f800000,0,
                            0xbf800000,0x3f800000,0);
    *param_7 = param_2;
  }
  uVar1 = FUN_147b1fbfe(0x3f800000,param_3,param_8,param_4,param_5,fVar3,param_6,0x3f800000,0,
                        0xbf800000,0x3f800000,0);
  *param_7 = uVar1;
  return;
}



// FUNCTION 1492d5cae FUN_1492d5cae body=188 status=ok
// SIG undefined FUN_1492d5cae(void)

void FUN_1492d5cae(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar1 = *(undefined4 *)puVar4[8];
  uVar2 = *(undefined4 *)puVar4[0xc];
  uVar3 = *(undefined4 *)puVar4[0x10];
  uVar7 = puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_1492d5e7c(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,uVar1,uVar2,uVar3,uVar7,uVar9);
  return;
}



// FUNCTION 1492d5d6a FUN_1492d5d6a body=273 status=ok
// SIG undefined FUN_1492d5d6a(void)

void FUN_1492d5d6a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x60;
  local_148 = param_1 + 0x48;
  local_150 = *(undefined4 *)(param_1 + 0x40);
  local_158 = *(undefined4 *)(param_1 + 0x3c);
  FUN_1492d5e7c(&local_138,param_1 + 8,param_1 + 0x20,*(undefined4 *)(param_1 + 0x38));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d5e7c FUN_1492d5e7c body=743 status=ok
// SIG undefined FUN_1492d5e7c(void)

void FUN_1492d5e7c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  float local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined1 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar1 = *(double *)(param_1 + 0x20);
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (0.10000000149011612 <= dVar1) {
    uVar3 = 0xa0000000;
    uVar4 = 0x3fb99999;
  }
  fVar5 = (float)(double)CONCAT44(uVar4,uVar3);
  param_7[2] = param_2[2];
  uVar2 = param_2[1];
  *param_7 = *param_2;
  param_7[1] = uVar2;
  if (0.016666668 <= fVar5) {
    do {
      local_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      local_d0 = 0x3ff0000000000000;
      local_f8 = 0xbff0000000000000;
      local_f0 = 0xbff0000000000000;
      local_e8 = 0xbff0000000000000;
      local_118 = *param_3;
      uStack_110 = param_3[1];
      local_108 = param_3[2];
      local_138 = *(undefined4 *)param_7;
      uStack_134 = *(undefined4 *)((longlong)param_7 + 4);
      uStack_130 = *(undefined4 *)(param_7 + 1);
      uStack_12c = *(undefined4 *)((longlong)param_7 + 0xc);
      local_128 = param_7[2];
      local_1b8 = 0;
      local_1c0 = &local_e0;
      local_1c8 = &local_f8;
      local_1d0 = 0;
      local_1e0 = param_6;
      local_1f0 = param_5;
      local_1d8 = 0x3f800000;
      local_1e8 = 0.016666668;
      local_1f8 = param_4;
      FUN_147b46922(&local_c8,&local_138,&local_118,param_8);
      param_7[2] = local_b8;
      *param_7 = CONCAT44(uStack_c4,local_c8);
      param_7[1] = CONCAT44(uStack_bc,uStack_c0);
      fVar5 = fVar5 + -0.016666668;
    } while (0.016666668 <= fVar5);
  }
  local_1c0 = &local_150;
  local_150 = 0x3ff0000000000000;
  local_148 = 0x3ff0000000000000;
  local_140 = 0x3ff0000000000000;
  local_1c8 = &local_168;
  local_168 = 0xbff0000000000000;
  local_160 = 0xbff0000000000000;
  local_158 = 0xbff0000000000000;
  local_188 = *param_3;
  uStack_180 = param_3[1];
  local_178 = param_3[2];
  local_1a8 = *(undefined4 *)param_7;
  uStack_1a4 = *(undefined4 *)((longlong)param_7 + 4);
  uStack_1a0 = *(undefined4 *)(param_7 + 1);
  uStack_19c = *(undefined4 *)((longlong)param_7 + 0xc);
  local_198 = param_7[2];
  local_1b8 = 0;
  local_1d0 = 0;
  local_1e0 = param_6;
  local_1f0 = param_5;
  local_1d8 = 0x3f800000;
  local_1f8 = param_4;
  local_1e8 = fVar5;
  FUN_147b46922(&local_c8,&local_1a8,&local_188,param_8);
  param_7[2] = local_b8;
  *(undefined4 *)param_7 = local_c8;
  *(undefined4 *)((longlong)param_7 + 4) = uStack_c4;
  *(undefined4 *)(param_7 + 1) = uStack_c0;
  *(undefined4 *)((longlong)param_7 + 0xc) = uStack_bc;
  if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6164 FUN_1492d6164 body=400 status=ok
// SIG undefined FUN_1492d6164(void)

void FUN_1492d6164(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)*puVar9;
  uVar2 = *(undefined4 *)puVar9[4];
  uVar3 = *(undefined4 *)puVar9[8];
  uVar4 = *(undefined4 *)puVar9[0xc];
  uVar7 = *(undefined1 *)puVar9[0x10];
  uVar5 = *(undefined4 *)puVar9[0x14];
  uVar6 = *(undefined4 *)puVar9[0x18];
  uVar8 = *(undefined1 *)puVar9[0x1c];
  uVar10 = puVar9[0x20];
  uVar11 = puVar9[0x24];
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(puVar9 + 0x28,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar14 = FUN_144828ac0(*param_2 + 0x160,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  FUN_1492d6440(*(undefined8 *)(param_1 + 0xc0),uVar1,uVar2,uVar3,uVar4,uVar7,uVar5,uVar6,uVar8,
                uVar10,uVar11,uVar13,uVar14);
  return;
}



// FUNCTION 1492d6300 FUN_1492d6300 body=319 status=ok
// SIG undefined FUN_1492d6300(void)

void FUN_1492d6300(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x34;
  local_150 = param_1 + 0x30;
  local_158 = param_1 + 0x2c;
  local_160 = param_1 + 0x28;
  local_168 = *(undefined1 *)(param_1 + 0x24);
  local_170 = *(undefined4 *)(param_1 + 0x20);
  local_178 = *(undefined4 *)(param_1 + 0x1c);
  local_180 = *(undefined1 *)(param_1 + 0x18);
  local_188 = *(undefined4 *)(param_1 + 0x14);
  FUN_1492d6440(&local_138,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6440 FUN_1492d6440 body=267 status=ok
// SIG undefined FUN_1492d6440(void)

void FUN_1492d6440(longlong param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                  byte param_6,undefined4 param_7,undefined4 param_8,byte param_9,
                  undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,longlong param_13)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (param_3 + param_3) * 3.1415927;
  fVar2 = fVar2 * fVar2;
  if (ABS(fVar2) <= 1e-08) {
    *(float *)(param_13 + 4) =
         (float)((double)param_5 * *(double *)(param_1 + 0x20) + (double)*(float *)(param_13 + 4));
  }
  else {
    param_2 = param_2 + param_5 / fVar2;
  }
  if (param_6 == 0) {
    param_7 = *param_12;
  }
  uVar1 = FUN_147b1fbfe(param_7,param_2,param_13,fVar2,param_4,(float)*(double *)(param_1 + 0x20),
                        0x3f800000,param_8,0,0,0,param_6 ^ 1 | param_9);
  *param_12 = uVar1;
  *param_10 = uVar1;
  *param_11 = *(undefined4 *)(param_13 + 4);
  return;
}



// FUNCTION 1492d654c FUN_1492d654c body=325 status=ok
// SIG undefined FUN_1492d654c(void)

void FUN_1492d654c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (undefined8 *)*param_2;
  uVar7 = *puVar6;
  uVar1 = *(undefined4 *)puVar6[4];
  uVar2 = *(undefined4 *)puVar6[8];
  uVar8 = puVar6[0xc];
  uVar4 = *(undefined1 *)puVar6[0x10];
  uVar9 = puVar6[0x14];
  uVar3 = *(undefined4 *)puVar6[0x18];
  uVar5 = *(undefined1 *)puVar6[0x1c];
  uVar10 = puVar6[0x20];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(puVar6 + 0x28,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(*param_2 + 0x160,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  FUN_1492d67da(*(undefined8 *)(param_1 + 0xc0),uVar7,uVar1,uVar2,uVar8,uVar4,uVar9,uVar3,uVar5,
                uVar10,uVar12,uVar13);
  return;
}



// FUNCTION 1492d669e FUN_1492d669e body=314 status=ok
// SIG undefined FUN_1492d669e(void)

void FUN_1492d669e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0xb0;
  local_148 = param_1 + 0x98;
  local_150 = param_1 + 0x68;
  local_158 = *(undefined1 *)(param_1 + 100);
  local_160 = *(undefined4 *)(param_1 + 0x60);
  local_168 = param_1 + 0x48;
  local_170 = *(undefined1 *)(param_1 + 0x40);
  local_178 = param_1 + 0x28;
  FUN_1492d67da(&local_138,param_1 + 8,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d67da FUN_1492d67da body=604 status=ok
// SIG undefined FUN_1492d67da(void)

void FUN_1492d67da(longlong param_1,double *param_2,float param_3,undefined4 param_4,double *param_5
                  ,byte param_6,undefined8 *param_7,undefined4 param_8,byte param_9,
                  undefined4 *param_10,undefined8 *param_11,longlong param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_178 [32];
  float local_158;
  undefined4 local_150;
  float local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  byte local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = (param_3 + param_3) * 3.1415927;
  local_158 = local_158 * local_158;
  local_f0 = *param_2;
  local_e8 = param_2[1];
  local_e0 = param_2[2];
  dVar1 = param_5[2];
  dVar2 = param_5[1];
  if (ABS(local_158) <= 1e-08) {
    dVar3 = *(double *)(param_1 + 0x20);
    *(double *)(param_12 + 0x18) = *param_5 * dVar3 + *(double *)(param_12 + 0x18);
    *(double *)(param_12 + 0x20) = dVar2 * dVar3 + *(double *)(param_12 + 0x20);
    *(double *)(param_12 + 0x28) = dVar1 * dVar3 + *(double *)(param_12 + 0x28);
  }
  else {
    dVar3 = 1.0 / (double)local_158;
    local_f0 = local_f0 + dVar3 * *param_5;
    local_e8 = local_e8 + dVar2 * dVar3;
    local_e0 = local_e0 + dVar1 * dVar3;
  }
  local_118 = param_6 ^ 1 | param_9;
  local_120 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_128 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_148 = (float)*(double *)(param_1 + 0x20);
  if (param_6 == 0) {
    param_7 = param_11;
  }
  local_108 = *(undefined4 *)param_7;
  uStack_104 = *(undefined4 *)((longlong)param_7 + 4);
  uStack_100 = *(undefined4 *)(param_7 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_7 + 0xc);
  local_f8 = param_7[2];
  local_138 = param_8;
  local_130 = 0;
  local_140 = 0x3f800000;
  local_150 = param_4;
  FUN_147b46922(&local_98);
  param_11[2] = local_88;
  *param_11 = local_98;
  param_11[1] = uStack_90;
  *(undefined8 *)(param_10 + 4) = param_11[2];
  uVar4 = *(undefined4 *)((longlong)param_11 + 4);
  uVar5 = *(undefined4 *)(param_11 + 1);
  uVar6 = *(undefined4 *)((longlong)param_11 + 0xc);
  *param_10 = *(undefined4 *)param_11;
  param_10[1] = uVar4;
  param_10[2] = uVar5;
  param_10[3] = uVar6;
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6a38 FUN_1492d6a38 body=353 status=ok
// SIG undefined FUN_1492d6a38(void)

void FUN_1492d6a38(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = (undefined8 *)*param_2;
  uVar7 = *puVar6;
  uVar1 = *(undefined4 *)puVar6[4];
  uVar2 = *(undefined4 *)puVar6[8];
  uVar8 = puVar6[0xc];
  uVar4 = *(undefined1 *)puVar6[0x10];
  uVar9 = puVar6[0x14];
  uVar3 = *(undefined4 *)puVar6[0x18];
  uVar5 = *(undefined1 *)puVar6[0x1c];
  uVar10 = puVar6[0x20];
  uVar11 = puVar6[0x24];
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(puVar6 + 0x28,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar14 = FUN_144828ac0(*param_2 + 0x160,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  FUN_1492d6cf8(*(undefined8 *)(param_1 + 0xc0),uVar7,uVar1,uVar2,uVar8,uVar4,uVar9,uVar3,uVar5,
                uVar10,uVar11,uVar13,uVar14);
  return;
}



// FUNCTION 1492d6ba8 FUN_1492d6ba8 body=335 status=ok
// SIG undefined FUN_1492d6ba8(void)

void FUN_1492d6ba8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0xf0;
  local_150 = param_1 + 0xd0;
  local_158 = param_1 + 0xb0;
  local_160 = param_1 + 0x90;
  local_168 = *(undefined1 *)(param_1 + 0x84);
  local_170 = *(undefined4 *)(param_1 + 0x80);
  local_178 = param_1 + 0x60;
  local_180 = *(undefined1 *)(param_1 + 0x50);
  local_188 = param_1 + 0x38;
  FUN_1492d6cf8(&local_138,param_1 + 0x10,*(undefined4 *)(param_1 + 0x30),
                *(undefined4 *)(param_1 + 0x34));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6cf8 FUN_1492d6cf8 body=394 status=ok
// SIG undefined FUN_1492d6cf8(void)

void FUN_1492d6cf8(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4,
                  double *param_5,byte param_6,undefined8 *param_7,undefined4 param_8,byte param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined8 *param_12,longlong param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined4 local_c0;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (param_3 + param_3) * 3.1415927;
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = param_5[2];
  dVar3 = param_5[1];
  local_c8 = local_c8 * local_c8;
  *(double *)(param_13 + 0x20) = dVar1 * *param_5 + *(double *)(param_13 + 0x20);
  *(double *)(param_13 + 0x28) = dVar3 * dVar1 + *(double *)(param_13 + 0x28);
  *(double *)(param_13 + 0x30) = dVar2 * dVar1 + *(double *)(param_13 + 0x30);
  local_b8 = (float)*(double *)(param_1 + 0x20);
  local_a0 = param_6 ^ 1 | param_9;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar9 = param_12;
  if (param_6 != 0) {
    puVar9 = param_7;
  }
  local_98 = *puVar9;
  uStack_90 = puVar9[1];
  local_88 = puVar9[2];
  uStack_80 = puVar9[3];
  local_a8 = param_8;
  local_b0 = 0x3f800000;
  local_c0 = param_4;
  FUN_147b386a8(&local_58,&local_98,&local_78,param_13);
  param_12[2] = local_48;
  param_12[3] = uStack_40;
  *param_12 = local_58;
  param_12[1] = uStack_50;
  uVar7 = *param_12;
  uVar8 = param_12[1];
  uVar4 = *(undefined4 *)((longlong)param_12 + 0x14);
  uVar5 = *(undefined4 *)(param_12 + 3);
  uVar6 = *(undefined4 *)((longlong)param_12 + 0x1c);
  *(undefined4 *)(param_10 + 2) = *(undefined4 *)(param_12 + 2);
  *(undefined4 *)((longlong)param_10 + 0x14) = uVar4;
  *(undefined4 *)(param_10 + 3) = uVar5;
  *(undefined4 *)((longlong)param_10 + 0x1c) = uVar6;
  *param_10 = uVar7;
  param_10[1] = uVar8;
  *(undefined8 *)(param_11 + 4) = *(undefined8 *)(param_13 + 0x30);
  uVar4 = *(undefined4 *)(param_13 + 0x24);
  uVar5 = *(undefined4 *)(param_13 + 0x28);
  uVar6 = *(undefined4 *)(param_13 + 0x2c);
  *param_11 = *(undefined4 *)(param_13 + 0x20);
  param_11[1] = uVar4;
  param_11[2] = uVar5;
  param_11[3] = uVar6;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6e84 FUN_1492d6e84 body=25 status=ok
// SIG undefined FUN_1492d6e84(void)

undefined8 FUN_1492d6e84(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492d6e9e FUN_1492d6e9e body=25 status=ok
// SIG undefined FUN_1492d6e9e(void)

undefined8 FUN_1492d6e9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492d6ece FUN_1492d6ece body=224 status=ok
// SIG undefined FUN_1492d6ece(void)

void FUN_1492d6ece(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_1491c1950(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  local_38 = (undefined8 *)0x0;
  local_30 = *(int *)(param_2 + 400);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_2 + 0x188);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1401b309e(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 << 3);
    if (local_30 == 2) {
      *(undefined8 *)(param_1 + 0x3c) = *local_38;
      *(undefined8 *)(param_1 + 0x44) = local_38[1];
      goto LAB_1492d6f6d;
    }
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
LAB_1492d6f6d:
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d6fbe FUN_1492d6fbe body=2257 status=ok
// SIG undefined FUN_1492d6fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492d6fbe(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 **ppuVar11;
  undefined2 *puVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_298 [32];
  undefined4 local_278;
  longlong local_268;
  longlong local_260;
  undefined1 local_258 [16];
  undefined2 *local_248;
  double dStack_240;
  undefined2 *local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined4 local_210;
  longlong local_208 [2];
  undefined2 *local_1f8;
  int local_1f0;
  undefined2 *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined2 *local_188;
  int local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*param_3 == *(longlong *)(param_1 + 0x3c)) {
    FUN_149185704(*(undefined8 *)(param_2 + 0x2f8),&local_168,0,1);
    FUN_149185768(param_1 + 0x50,&local_168);
    FUN_1401f95f4(&local_168);
  }
  else if (*param_3 == *(longlong *)(param_1 + 0x44)) {
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      local_260 = param_1 + 0x3c;
      local_268 = param_1 + 0x44;
      puVar9 = *(undefined8 **)(param_1 + 0x50);
      lVar13 = (longlong)*(int *)(param_1 + 0x58) * 0x110;
      do {
        cVar5 = FUN_1491ddc02(puVar9,*(undefined8 *)(param_2 + 0x2f8));
        if (cVar5 == '\0') goto LAB_1492d7553;
        local_170 = *(undefined4 *)(puVar9 + 1);
        local_178 = *puVar9;
        uVar6 = (uint)local_178 & 0xff;
        if (uVar6 == 1) {
          cVar5 = *(char *)(param_1 + 0x29);
joined_r0x0001492d7138:
          if (cVar5 != '\0') {
            puVar10 = puVar9 + 4;
            ppuVar11 = &local_168;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *ppuVar11 = (undefined2 *)*puVar10;
              puVar10 = puVar10 + 1;
              ppuVar11 = ppuVar11 + 1;
            }
            uVar6 = (uint)*(ushort *)((longlong)puVar9 + 0xc);
            if (*(ushort *)((longlong)puVar9 + 0xc) == 0xffff) {
              uVar6 = 0xffffffff;
            }
            FUN_14486750c(*(undefined8 *)(param_2 + 0x2f8),&local_1e8,uVar6,0);
            dStack_230 = (double)CONCAT44(uStack_15c,iStack_160);
            local_238 = local_168;
            auVar35._0_8_ = (double)local_168 * (double)local_168;
            auVar35._8_8_ = dStack_230 * dStack_230;
            dVar23 = local_158 * local_158 + auVar35._0_8_;
            dVar27 = dStack_150 * dStack_150 + auVar35._8_8_;
            auVar25._0_8_ = dVar23 + dVar27;
            auVar25._8_8_ = dVar23 + dVar27;
            auVar18 = sqrtpd(auVar35,auVar25);
            local_258 = divpd(_DAT_149934d80,auVar18);
            dVar23 = dStack_150 * local_258._8_8_;
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            auVar18._8_4_ = SUB84(dVar23,0);
            auVar18._0_8_ = local_158 * local_258._0_8_;
            auVar18._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
            local_228 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar31);
            dStack_240 = (double)CONCAT44(uStack_1dc,iStack_1e0);
            local_248 = local_1e8;
            auVar33._0_8_ = (double)local_1e8 * (double)local_1e8;
            auVar33._8_8_ = dStack_240 * dStack_240;
            dVar23 = local_1d8 * local_1d8 + auVar33._0_8_;
            dVar27 = dStack_1d0 * dStack_1d0 + auVar33._8_8_;
            auVar29._0_8_ = dVar23 + dVar27;
            auVar29._8_8_ = dVar23 + dVar27;
            auVar18 = sqrtpd(auVar33,auVar29);
            auVar18 = divpd(_DAT_149934d80,auVar18);
            auVar26._0_8_ = local_1d8 * auVar18._0_8_;
            auVar26._8_8_ = dStack_1d0 * auVar18._8_8_;
            auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
            auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
            auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar19);
            dVar23 = local_148 - local_1c8;
            dVar27 = dStack_140 - dStack_1c0;
            dVar28 = local_138 - local_1b8;
            dVar24 = (double)(*(float *)(param_1 + 0x2c) + 1e-08);
            dVar32 = local_228._8_8_;
            dVar17 = dVar32;
            if (1.0 <= dVar32) {
              dVar17 = 1.0;
            }
            dVar32 = (double)(-(ulonglong)(dVar32 < -1.0) & 0xbff0000000000000 |
                             ~-(ulonglong)(dVar32 < -1.0) & (ulonglong)dVar17);
            dVar15 = acos(dVar32);
            dVar34 = auVar35._0_8_;
            dVar16 = auVar35._8_8_;
            dVar17 = dVar16;
            if (1.0 <= dVar16) {
              dVar17 = 1.0;
            }
            dVar17 = (double)(-(ulonglong)(dVar16 < -1.0) & 0xbff0000000000000 |
                             ~-(ulonglong)(dVar16 < -1.0) & (ulonglong)dVar17);
            dVar16 = acos(dVar17);
            bVar4 = ABS((dVar15 + dVar15) - (dVar16 + dVar16)) <=
                    (double)(*(float *)(param_1 + 0x30) + 1e-08) &&
                    (ABS(dVar28) <= dVar24 && (ABS(dVar27) <= dVar24 && ABS(dVar23) <= dVar24));
            dVar23 = acos(dVar32);
            if ((9.99999993922529e-09 < ABS(dVar23 + dVar23)) ||
               (dVar23 = acos(dVar17), 9.99999993922529e-09 < ABS(dVar23 + dVar23))) {
              dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_) &
                               (ulonglong)((double)local_238 * (double)local_258._0_8_));
              dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_) &
                               (ulonglong)(dStack_230 * (double)local_258._8_8_));
              dVar17 = (double)local_228._0_8_ * (double)local_228._0_8_ + dVar23 * dVar23;
              dVar24 = dVar27 * dVar27 + 0.0;
              auVar20._0_8_ = dVar17 + dVar24;
              auVar20._8_8_ = dVar17 + dVar24;
              dVar17 = (double)(-(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_) &
                               (ulonglong)((double)local_248 * auVar18._0_8_));
              dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_) &
                               (ulonglong)(dStack_240 * auVar18._8_8_));
              auVar18 = sqrtpd(auVar20,auVar20);
              auVar35 = divpd(_DAT_149934d80,auVar18);
              dVar27 = dVar27 * auVar35._8_8_;
              auVar21._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
              auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
              auVar2._8_4_ = SUB84(dVar27,0);
              auVar2._0_8_ = dVar23 * auVar35._0_8_;
              auVar2._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
              auVar18 = blendvpd(ZEXT816(0x3ff0000000000000),auVar2,auVar21);
              dVar23 = dVar34 * dVar34 + dVar17 * dVar17;
              dVar27 = dVar24 * dVar24 + 0.0;
              auVar30._0_8_ = dVar23 + dVar27;
              auVar30._8_8_ = dVar23 + dVar27;
              auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar30._8_8_);
              auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
              auVar31 = sqrtpd(auVar30,auVar30);
              auVar33 = divpd(_DAT_149934d80,auVar31);
              dVar24 = dVar24 * auVar33._8_8_;
              auVar3._8_4_ = SUB84(dVar24,0);
              auVar3._0_8_ = dVar17 * auVar33._0_8_;
              auVar3._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              auVar31 = blendvpd(ZEXT816(0x3ff0000000000000),auVar3,auVar22);
              dVar23 = 0.0;
              if ((-(ulonglong)(1e-08 <= auVar30._0_8_) & 1) == 0) {
                dVar34 = 0.0;
              }
              else {
                dVar34 = dVar34 * auVar33._0_8_;
              }
              if ((-(ulonglong)(1e-08 <= auVar20._0_8_) & 1) != 0) {
                dVar23 = (double)local_228._0_8_ * auVar35._0_8_;
              }
              dVar27 = (double)(*(float *)(param_1 + 0x30) + 1e-08);
              if (ABS(dVar23 - dVar34) <= dVar27) {
                bVar4 = (ABS(auVar18._8_8_ - auVar31._8_8_) <= dVar27 &&
                        ABS(auVar18._0_8_ - auVar31._0_8_) <= dVar27) && bVar4;
              }
              else {
                bVar4 = false;
              }
            }
            dVar23 = (double)(*(float *)(param_1 + 0x2c) + 1e-08);
            if ((((dVar23 < ABS(local_118 - local_198)) || (dVar23 < ABS(dStack_120 - dStack_1a0)))
                || (dVar23 < ABS(local_128 - local_1a8))) || (!bVar4)) {
              FUN_1491af9d8(param_4,&local_188,local_260);
              FUN_1491af9d8(param_4,&local_1f8,local_268);
              puVar8 = &DAT_149dfb77a;
              if (local_1f0 != 0) {
                puVar8 = local_1f8;
              }
              puVar12 = &DAT_149dfb77a;
              if (local_180 != 0) {
                puVar12 = local_188;
              }
              FUN_140002266(local_208,L"Poses don\'t match between %s and %s.",puVar12,puVar8);
              FUN_1491af9ac(param_4,3,&local_178);
              local_210 = local_170;
              local_218 = local_178;
              cVar5 = FUN_149187fee(*(undefined8 *)(param_2 + 0x2f8),&local_218);
              if ((cVar5 != '\0') && (lVar7 = *(longlong *)(param_4 + 0x20), lVar7 != 0)) {
                local_278 = 0;
                FUN_14446882c(lVar7,&DAT_14c846480,&local_168,0x42480000);
                local_278 = 0;
                FUN_14446882c(lVar7,&DAT_14c846480,&local_1e8,0x42480000);
              }
              if (local_208[0] != 0) {
                FUN_1400020a8();
              }
              puVar8 = local_188;
              if (local_1f8 != (undefined2 *)0x0) {
                FUN_1400020a8();
                puVar8 = local_188;
              }
              goto LAB_1492d7663;
            }
          }
        }
        else {
          if (uVar6 == 4) {
            cVar5 = *(char *)(param_1 + 0x28);
            goto joined_r0x0001492d7138;
          }
          if (uVar6 == 8) {
            uVar6 = (uint)*(ushort *)((longlong)puVar9 + 0xc);
            if (*(ushort *)((longlong)puVar9 + 0xc) == 0xffff) {
              uVar6 = 0xffffffff;
            }
            fVar1 = *(float *)((longlong)puVar9 + 0x104);
            fVar14 = (float)FUN_149181f94(*(undefined8 *)(param_2 + 0x2f8),uVar6);
            if (ABS(fVar1 - fVar14) <= *(float *)(param_1 + 0x38) + 1e-08) goto LAB_1492d7553;
            FUN_1491af9d8(param_4,&local_168,local_260);
            FUN_1491af9d8(param_4,&local_1e8,local_268);
            puVar8 = &DAT_149dfb77a;
            if (iStack_1e0 != 0) {
              puVar8 = local_1e8;
            }
            puVar12 = &DAT_149dfb77a;
            if (iStack_160 != 0) {
              puVar12 = local_168;
            }
            FUN_140002266(&local_188,L"Values don\'t match between %s and %s.",puVar12,puVar8);
            FUN_1491af9ac(param_4,3,&local_178);
            if (local_188 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            puVar8 = local_168;
            if (local_1e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
              puVar8 = local_168;
            }
LAB_1492d7663:
            if (puVar8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_1492d7553:
        puVar9 = puVar9 + 0x22;
        lVar13 = lVar13 + -0x110;
      } while (lVar13 != 0);
    }
  }
  else {
    FUN_140056680(&local_168,
                  L"Numerical validation only works when running \'Backwards and Forwards\'");
    FUN_1491af948(param_4,4,&local_168);
    if (local_168 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d78ce FUN_1492d78ce body=80 status=ok
// SIG undefined FUN_1492d78ce(void)

undefined1 FUN_1492d78ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492ad734(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    FUN_144756208(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1492d7946 FUN_1492d7946 body=59 status=ok
// SIG undefined FUN_1492d7946(void)

undefined8 FUN_1492d7946(longlong *param_1)

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



// FUNCTION 1492d798c FUN_1492d798c body=34 status=ok
// SIG undefined FUN_1492d798c(void)

void FUN_1492d798c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1492d79fc(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1492d79fc FUN_1492d79fc body=61 status=ok
// SIG undefined FUN_1492d79fc(void)

void FUN_1492d79fc(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492d7a6e FUN_1492d7a6e body=63 status=ok
// SIG undefined FUN_1492d7a6e(void)

undefined1 FUN_1492d7a6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492d7cb6(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 1492d7ad6 FUN_1492d7ad6 body=59 status=ok
// SIG undefined FUN_1492d7ad6(void)

undefined8 FUN_1492d7ad6(longlong *param_1)

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



// FUNCTION 1492d7b22 FUN_1492d7b22 body=73 status=ok
// SIG undefined FUN_1492d7b22(void)

void FUN_1492d7b22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    *param_2 = &PTR_FUN_14bc0bd50;
    FUN_1492d79fc(param_2 + 0x48);
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4e) = 0;
  }
  return;
}



// FUNCTION 1492d7bba FUN_1492d7bba body=148 status=ok
// SIG undefined FUN_1492d7bba(void)

undefined8 * FUN_1492d7bba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_1 = &PTR_FUN_14bc0bd50;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return param_1;
}



// FUNCTION 1492d7c4e FUN_1492d7c4e body=74 status=ok
// SIG undefined FUN_1492d7c4e(void)

undefined8 * FUN_1492d7c4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc0bd50;
  FUN_1492d79fc(param_1 + 0x48);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d7c98 FUN_1492d7c98 body=29 status=ok
// SIG undefined FUN_1492d7c98(void)

undefined8 FUN_1492d7c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d7cb6 FUN_1492d7cb6 body=128 status=ok
// SIG undefined FUN_1492d7cb6(void)

longlong FUN_1492d7cb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  puVar2 = (undefined8 *)(param_2 + 0x1f0);
  puVar3 = (undefined8 *)(param_1 + 0x1f0);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_2 + 0x238);
  FUN_1492ad734(param_1 + 0x240,param_2 + 0x240);
  FUN_144a67f5c(param_1 + 0x250,param_2 + 0x250);
  FUN_144756208(param_1 + 0x260,param_2 + 0x260);
  return param_1;
}



// FUNCTION 1492d7d6c FUN_1492d7d6c body=63 status=ok
// SIG undefined FUN_1492d7d6c(void)

undefined1 FUN_1492d7d6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492d7f9a(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 1492d7dd4 FUN_1492d7dd4 body=59 status=ok
// SIG undefined FUN_1492d7dd4(void)

undefined8 FUN_1492d7dd4(longlong *param_1)

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



// FUNCTION 1492d7e20 FUN_1492d7e20 body=40 status=ok
// SIG undefined FUN_1492d7e20(void)

void FUN_1492d7e20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1492d7f50(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1492d7e96 FUN_1492d7e96 body=148 status=ok
// SIG undefined FUN_1492d7e96(void)

undefined8 * FUN_1492d7e96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_1 = &PTR_FUN_14bc0bfd0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return param_1;
}


