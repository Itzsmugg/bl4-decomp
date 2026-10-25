// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14796d8e8 FUN_14796d8e8 body=272 status=ok
// SIG undefined FUN_14796d8e8(void)

undefined4 * FUN_14796d8e8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14796d9fa(param_1,local_48);
  FUN_14796dba0(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14796dae8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_14796b036(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796d9fa FUN_14796d9fa body=238 status=ok
// SIG undefined FUN_14796d9fa(void)

int * FUN_14796d9fa(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14796dae8 FUN_14796dae8 body=184 status=ok
// SIG undefined FUN_14796dae8(void)

undefined8 FUN_14796dae8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_147965686((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_14796cc72(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796dba0 FUN_14796dba0 body=149 status=ok
// SIG undefined FUN_14796dba0(void)

undefined8 * FUN_14796dba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14796dc36(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147965686(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796dc36 FUN_14796dc36 body=123 status=ok
// SIG undefined FUN_14796dc36(void)

undefined8 * FUN_14796dc36(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14796dcb2();
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



// FUNCTION 14796dcb2 FUN_14796dcb2 body=146 status=ok
// SIG undefined FUN_14796dcb2(void)

longlong * FUN_14796dcb2(longlong *param_1,longlong *param_2)

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



// FUNCTION 14796dd44 FUN_14796dd44 body=400 status=ok
// SIG undefined FUN_14796dd44(void)

undefined4 * FUN_14796dd44(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
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
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14796ded6(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar20 = *(ulonglong *)*param_3;
  *local_38 = uVar20;
  uVar2 = *puVar1;
  local_38[1] = uVar2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar20 = *local_38;
  }
  *(int *)(local_38 + 4) = (int)puVar1[3];
  uVar2 = puVar1[2];
  local_38[2] = puVar1[1];
  local_38[3] = uVar2;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar2 = puVar1[5];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  uVar13 = puVar1[6];
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uVar14 = puVar1[7];
  uVar6 = *(undefined4 *)((longlong)puVar1 + 0x3c);
  uVar15 = puVar1[8];
  uVar7 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uVar16 = puVar1[9];
  uVar8 = *(undefined4 *)((longlong)puVar1 + 0x4c);
  uVar9 = *(undefined4 *)((longlong)puVar1 + 0x4d);
  uVar10 = *(undefined4 *)((longlong)puVar1 + 0x51);
  uVar11 = *(undefined4 *)((longlong)puVar1 + 0x55);
  uVar12 = *(undefined4 *)((longlong)puVar1 + 0x59);
  *(int *)(local_38 + 5) = (int)puVar1[4];
  *(undefined4 *)((longlong)local_38 + 0x2c) = uVar3;
  *(int *)(local_38 + 6) = (int)uVar2;
  *(undefined4 *)((longlong)local_38 + 0x34) = uVar4;
  *(int *)(local_38 + 7) = (int)uVar13;
  *(undefined4 *)((longlong)local_38 + 0x3c) = uVar5;
  *(int *)(local_38 + 8) = (int)uVar14;
  *(undefined4 *)((longlong)local_38 + 0x44) = uVar6;
  *(int *)(local_38 + 9) = (int)uVar15;
  *(undefined4 *)((longlong)local_38 + 0x4c) = uVar7;
  *(int *)(local_38 + 10) = (int)uVar16;
  *(undefined4 *)((longlong)local_38 + 0x54) = uVar8;
  *(undefined4 *)((longlong)local_38 + 0x55) = uVar9;
  *(undefined4 *)((longlong)local_38 + 0x59) = uVar10;
  *(undefined4 *)((longlong)local_38 + 0x5d) = uVar11;
  *(undefined4 *)((longlong)local_38 + 0x61) = uVar12;
  *(undefined4 *)(local_38 + 0xd) = 0xffffffff;
  local_44 = local_40[0];
  uVar18 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  uVar18 = uVar18 >> 0x10 ^ uVar18;
  cVar17 = FUN_14796dfb8(param_1,uVar18,local_38,&local_44);
  uVar3 = local_44;
  if (cVar17 == '\0') {
    uVar19 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar21 = 1;
    if (3 < uVar19) {
      uVar20 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar21 <= *(int *)(param_1 + 0x48))) {
      uVar18 = *(int *)(param_1 + 0x48) - 1U & uVar18;
      *(uint *)((longlong)local_38 + 0x6c) = uVar18;
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0xd) =
           *(undefined4 *)
            (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4);
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar21;
      FUN_14796e04a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796ded6 FUN_14796ded6 body=226 status=ok
// SIG undefined FUN_14796ded6(void)

int * FUN_14796ded6(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 14796dfb8 FUN_14796dfb8 body=145 status=ok
// SIG undefined FUN_14796dfb8(void)

undefined8 FUN_14796dfb8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x70);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x70) == *param_3) {
          memmove(_Dst,param_3,0x68);
          FUN_14796cac4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x68);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796e04a FUN_14796e04a body=474 status=ok
// SIG undefined FUN_14796e04a(void)

void FUN_14796e04a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x70;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x6c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x68 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14796e226 FUN_14796e226 body=180 status=ok
// SIG undefined FUN_14796e226(void)

longlong FUN_14796e226(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_14796e2bd;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14796e2dc(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_14796e2bd:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14796e2dc FUN_14796e2dc body=341 status=ok
// SIG undefined FUN_14796e2dc(void)

undefined4 * FUN_14796e2dc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14796e432(param_1,local_78);
  local_68[0] = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x400000003f000000;
  local_48 = 0;
  *local_70 = *(undefined8 *)*param_4;
  FUN_14796d024(local_70 + 1,local_68);
  *(undefined4 *)(local_70 + 5) = local_48;
  *(undefined4 *)(local_70 + 6) = 0xffffffff;
  cVar1 = FUN_14796e514(param_1,param_3,local_70,local_78);
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
      *(uint *)((longlong)local_70 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 6) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_78[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14796bdd4(param_1);
    }
  }
  *param_2 = local_78[0];
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796e432 FUN_14796e432 body=226 status=ok
// SIG undefined FUN_14796e432(void)

int * FUN_14796e432(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14796e514 FUN_14796e514 body=149 status=ok
// SIG undefined FUN_14796e514(void)

undefined8 FUN_14796e514(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_14796e5aa((int)lVar8,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796e5aa FUN_14796e5aa body=116 status=ok
// SIG undefined FUN_14796e5aa(void)

void FUN_14796e5aa(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
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



// FUNCTION 14796e61e FUN_14796e61e body=154 status=ok
// SIG undefined FUN_14796e61e(void)

undefined8 FUN_14796e61e(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_14796e6b8(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796e6b8 FUN_14796e6b8 body=87 status=ok
// SIG undefined FUN_14796e6b8(void)

void FUN_14796e6b8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_14796e5aa();
  return;
}



// FUNCTION 14796e710 FUN_14796e710 body=89 status=ok
// SIG undefined FUN_14796e710(void)

void FUN_14796e710(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
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



// FUNCTION 14796e76a FUN_14796e76a body=62 status=ok
// SIG undefined FUN_14796e76a(void)

void FUN_14796e76a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14796e7a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14796e7a8 FUN_14796e7a8 body=93 status=ok
// SIG undefined FUN_14796e7a8(void)

ulonglong FUN_14796e7a8(uint param_1,uint param_2)

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



// FUNCTION 14796e806 FUN_14796e806 body=107 status=ok
// SIG undefined FUN_14796e806(void)

void FUN_14796e806(longlong *param_1,longlong *param_2)

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
    FUN_147971e2e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14796e872 FUN_14796e872 body=326 status=ok
// SIG undefined FUN_14796e872(void)

undefined4 * FUN_14796e872(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  FUN_14796e9ba(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14796eaa0(param_1,uVar4,local_40,&local_4c);
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
      FUN_14796eb20(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796e9ba FUN_14796e9ba body=230 status=ok
// SIG undefined FUN_14796e9ba(void)

int * FUN_14796e9ba(longlong *param_1,int *param_2)

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



// FUNCTION 14796eaa0 FUN_14796eaa0 body=128 status=ok
// SIG undefined FUN_14796eaa0(void)

undefined8 FUN_14796eaa0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147969edc((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796eb20 FUN_14796eb20 body=474 status=ok
// SIG undefined FUN_14796eb20(void)

void FUN_14796eb20(longlong *param_1)

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



// FUNCTION 14796ecfc FUN_14796ecfc body=190 status=ok
// SIG undefined FUN_14796ecfc(void)

void FUN_14796ecfc(longlong *param_1,longlong *param_2)

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
    FUN_14796edba(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14796edba FUN_14796edba body=132 status=ok
// SIG undefined FUN_14796edba(void)

void FUN_14796edba(longlong param_1,int param_2)

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



// FUNCTION 14796ee40 FUN_14796ee40 body=48 status=ok
// SIG undefined FUN_14796ee40(void)

void FUN_14796ee40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14796ee70 FUN_14796ee70 body=1 status=ok
// SIG undefined FUN_14796ee70(void)

void FUN_14796ee70(void)

{
  return;
}



// FUNCTION 14796ee72 FUN_14796ee72 body=48 status=ok
// SIG undefined FUN_14796ee72(void)

void FUN_14796ee72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14796eea2 FUN_14796eea2 body=66 status=ok
// SIG undefined FUN_14796eea2(void)

void FUN_14796eea2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796eee6 FUN_14796eee6 body=164 status=ok
// SIG undefined FUN_14796eee6(void)

void FUN_14796eee6(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14796ef66;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14796ef66:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14796ef8a FUN_14796ef8a body=291 status=ok
// SIG undefined FUN_14796ef8a(void)

undefined4 * FUN_14796ef8a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14028411c(param_1,local_48);
  uVar3 = *(uint *)*param_3;
  *local_40 = uVar3;
  local_40[1] = 0;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar1 = FUN_140284086(param_1,uVar3,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[3] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402843ec(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796f0ae FUN_14796f0ae body=181 status=ok
// SIG undefined FUN_14796f0ae(void)

longlong FUN_14796f0ae(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14796f146;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14796f164(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14796f146:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14796f164 FUN_14796f164 body=277 status=ok
// SIG undefined FUN_14796f164(void)

undefined4 * FUN_14796f164(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14796f27a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14796f360(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14796f474(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796f27a FUN_14796f27a body=229 status=ok
// SIG undefined FUN_14796f27a(void)

int * FUN_14796f27a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14796f360 FUN_14796f360 body=161 status=ok
// SIG undefined FUN_14796f360(void)

undefined8 FUN_14796f360(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14796f402(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796f402 FUN_14796f402 body=114 status=ok
// SIG undefined FUN_14796f402(void)

void FUN_14796f402(longlong *param_1,int param_2)

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



// FUNCTION 14796f474 FUN_14796f474 body=450 status=ok
// SIG undefined FUN_14796f474(void)

void FUN_14796f474(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14796f638 FUN_14796f638 body=105 status=ok
// SIG undefined FUN_14796f638(void)

ulonglong FUN_14796f638(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_14796f67f;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14796ccec(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_14796f67f:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14796f6a2 FUN_14796f6a2 body=63 status=ok
// SIG undefined FUN_14796f6a2(void)

void FUN_14796f6a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14796f6e2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14796f6e2 FUN_14796f6e2 body=97 status=ok
// SIG undefined FUN_14796f6e2(void)

ulonglong FUN_14796f6e2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14796f744 FUN_14796f744 body=107 status=ok
// SIG undefined FUN_14796f744(void)

void FUN_14796f744(longlong *param_1,longlong *param_2)

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
    FUN_14796ccec(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14796f7b0 FUN_14796f7b0 body=302 status=ok
// SIG undefined FUN_14796f7b0(void)

undefined4 * FUN_14796f7b0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14796f27a(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  cVar3 = FUN_14796f360(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14796f474(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796f8e0 FUN_14796f8e0 body=334 status=ok
// SIG undefined FUN_14796f8e0(void)

undefined4 * FUN_14796f8e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14796fa30(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  local_40[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_14796fb16(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x24) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14796fc12(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796fa30 FUN_14796fa30 body=230 status=ok
// SIG undefined FUN_14796fa30(void)

int * FUN_14796fa30(longlong *param_1,int *param_2)

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



// FUNCTION 14796fb16 FUN_14796fb16 body=138 status=ok
// SIG undefined FUN_14796fb16(void)

undefined8 FUN_14796fb16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14796fba0((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14796fba0 FUN_14796fba0 body=114 status=ok
// SIG undefined FUN_14796fba0(void)

void FUN_14796fba0(longlong *param_1,int param_2)

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



// FUNCTION 14796fc12 FUN_14796fc12 body=474 status=ok
// SIG undefined FUN_14796fc12(void)

void FUN_14796fc12(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 14796fdee FUN_14796fdee body=132 status=ok
// SIG undefined FUN_14796fdee(void)

void FUN_14796fdee(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x28) == param_2) {
          FUN_14796fe72(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14796fe72 FUN_14796fe72 body=87 status=ok
// SIG undefined FUN_14796fe72(void)

void FUN_14796fe72(longlong *param_1,int param_2)

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
  FUN_14796fba0();
  return;
}



// FUNCTION 14796feca FUN_14796feca body=122 status=ok
// SIG undefined FUN_14796feca(void)

longlong FUN_14796feca(longlong param_1,longlong param_2)

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
    FUN_14796ff44(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14796ff44 FUN_14796ff44 body=117 status=ok
// SIG undefined FUN_14796ff44(void)

undefined8 * FUN_14796ff44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14796a818(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14796ffba FUN_14796ffba body=90 status=ok
// SIG undefined FUN_14796ffba(void)

void FUN_14796ffba(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147970014();
  return;
}



// FUNCTION 147970014 FUN_147970014 body=114 status=ok
// SIG undefined FUN_147970014(void)

void FUN_147970014(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147970086 FUN_147970086 body=326 status=ok
// SIG undefined FUN_147970086(void)

undefined4 *
FUN_147970086(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1479701ce(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1479702b4(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14797033e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479701ce FUN_1479701ce body=229 status=ok
// SIG undefined FUN_1479701ce(void)

int * FUN_1479701ce(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1479702b4 FUN_1479702b4 body=138 status=ok
// SIG undefined FUN_1479702b4(void)

void FUN_1479702b4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_147970014(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14797031f;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14797031f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14797033e FUN_14797033e body=477 status=ok
// SIG undefined FUN_14797033e(void)

void FUN_14797033e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14797051c FUN_14797051c body=187 status=ok
// SIG undefined FUN_14797051c(void)

longlong * FUN_14797051c(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1479705ba;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_1479705d8(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1479705ba:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1479705d8 FUN_1479705d8 body=279 status=ok
// SIG undefined FUN_1479705d8(void)

undefined4 * FUN_1479705d8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
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
  FUN_1479706f0(param_1,local_48);
  puVar1 = (undefined1 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1479707d6(param_1,param_3,local_40,local_48);
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
      FUN_1479708c8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479706f0 FUN_1479706f0 body=230 status=ok
// SIG undefined FUN_1479706f0(void)

int * FUN_1479706f0(longlong *param_1,int *param_2)

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



// FUNCTION 1479707d6 FUN_1479707d6 body=128 status=ok
// SIG undefined FUN_1479707d6(void)

undefined8 FUN_1479707d6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147970856((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147970856 FUN_147970856 body=114 status=ok
// SIG undefined FUN_147970856(void)

void FUN_147970856(longlong *param_1,int param_2)

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



// FUNCTION 1479708c8 FUN_1479708c8 body=447 status=ok
// SIG undefined FUN_1479708c8(void)

void FUN_1479708c8(longlong *param_1)

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
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
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



// FUNCTION 147970a88 FUN_147970a88 body=124 status=ok
// SIG undefined FUN_147970a88(void)

undefined8 FUN_147970a88(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147970b04(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147970b04 FUN_147970b04 body=90 status=ok
// SIG undefined FUN_147970b04(void)

void FUN_147970b04(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147970b5e();
  return;
}



// FUNCTION 147970b5e FUN_147970b5e body=52 status=ok
// SIG undefined FUN_147970b5e(void)

void FUN_147970b5e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14796f402(param_1,param_2);
  return;
}



// FUNCTION 147970b92 FUN_147970b92 body=125 status=ok
// SIG undefined FUN_147970b92(void)

undefined8 FUN_147970b92(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147970c10(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147970c10 FUN_147970c10 body=87 status=ok
// SIG undefined FUN_147970c10(void)

void FUN_147970c10(longlong *param_1,int param_2)

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
  FUN_147970856();
  return;
}



// FUNCTION 147970c68 FUN_147970c68 body=322 status=ok
// SIG undefined FUN_147970c68(void)

void FUN_147970c68(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147970dac FUN_147970dac body=68 status=ok
// SIG undefined FUN_147970dac(void)

void FUN_147970dac(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147970f7a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147970df0 FUN_147970df0 body=391 status=ok
// SIG undefined FUN_147970df0(void)

void FUN_147970df0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1479710be(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14797125c(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      local_50 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14797145c(param_1,local_7c,&local_50);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147970f7a FUN_147970f7a body=322 status=ok
// SIG undefined FUN_147970f7a(void)

void FUN_147970f7a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1479710be FUN_1479710be body=413 status=ok
// SIG undefined FUN_1479710be(void)

void FUN_1479710be(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 14797125c FUN_14797125c body=510 status=ok
// SIG undefined FUN_14797125c(void)

void FUN_14797125c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x10;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0xc) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 8) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797145c FUN_14797145c body=380 status=ok
// SIG undefined FUN_14797145c(void)

undefined4 * FUN_14797145c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479715da(param_1,local_40);
  uVar4 = *param_3;
  *local_38 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1479716c0(param_1,uVar3,local_38,&local_44);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_38 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14797125c(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479715da FUN_1479715da body=229 status=ok
// SIG undefined FUN_1479715da(void)

int * FUN_1479715da(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1479716c0 FUN_1479716c0 body=191 status=ok
// SIG undefined FUN_1479716c0(void)

void FUN_1479716c0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_147971780(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_147971850(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1479716ee;
    }
  }
  uVar1 = 0;
LAB_1479716ee:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147971780 FUN_147971780 body=207 status=ok
// SIG undefined FUN_147971780(void)

int FUN_147971780(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
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



// FUNCTION 147971850 FUN_147971850 body=138 status=ok
// SIG undefined FUN_147971850(void)

void FUN_147971850(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479718da FUN_1479718da body=383 status=ok
// SIG undefined FUN_1479718da(void)

undefined4 *
FUN_1479718da(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479715da(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_40;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = param_4;
  cVar2 = FUN_1479716c0(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14797125c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147971a5a FUN_147971a5a body=48 status=ok
// SIG undefined FUN_147971a5a(void)

void FUN_147971a5a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 147971a8a FUN_147971a8a body=48 status=ok
// SIG undefined FUN_147971a8a(void)

void FUN_147971a8a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x110,0x10);
  }
  return;
}



// FUNCTION 147971aba FUN_147971aba body=68 status=ok
// SIG undefined FUN_147971aba(void)

void FUN_147971aba(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147971afe();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144748838(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147971afe FUN_147971afe body=322 status=ok
// SIG undefined FUN_147971afe(void)

void FUN_147971afe(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 147971c42 FUN_147971c42 body=68 status=ok
// SIG undefined FUN_147971c42(void)

void FUN_147971c42(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147971c86();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147971c86 FUN_147971c86 body=322 status=ok
// SIG undefined FUN_147971c86(void)

void FUN_147971c86(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 147971dca FUN_147971dca body=48 status=ok
// SIG undefined FUN_147971dca(void)

void FUN_147971dca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147971dfa FUN_147971dfa body=38 status=ok
// SIG undefined FUN_147971dfa(void)

undefined8 FUN_147971dfa(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147971e20 FUN_147971e20 body=9 status=ok
// SIG undefined FUN_147971e20(void)

void FUN_147971e20(longlong param_1)

{
  FUN_1433fdd2e(param_1 + 0x48);
  return;
}



// FUNCTION 147971e2e FUN_147971e2e body=132 status=ok
// SIG undefined FUN_147971e2e(void)

void FUN_147971e2e(longlong param_1,int param_2)

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



// FUNCTION 147971eb4 FUN_147971eb4 body=354 status=ok
// SIG undefined FUN_147971eb4(void)

undefined4 *
FUN_147971eb4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14796b5fc(param_1,local_50);
  uVar1 = param_3[1];
  *local_48 = *(ulonglong *)*param_3;
  FUN_147972018(local_48 + 1,uVar1);
  *(undefined4 *)(local_48 + 0x34) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_14796b6ea(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0x1a4) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x34) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14796b2ba(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147972018 FUN_147972018 body=108 status=ok
// SIG undefined FUN_147972018(void)

undefined4 * FUN_147972018(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_147972084(param_1 + 10,param_2 + 10);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 0x62);
  lVar1 = *(longlong *)(param_2 + 100);
  *(longlong *)(param_1 + 100) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147972084 FUN_147972084 body=135 status=ok
// SIG undefined FUN_147972084(void)

undefined4 * FUN_147972084(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1477ce544(param_1 + 2,param_2 + 2);
  param_1[0x16] = param_2[0x16];
  FUN_1477ce544(param_1 + 0x18,param_2 + 0x18);
  param_1[0x2c] = param_2[0x2c];
  FUN_1477ce544(param_1 + 0x2e,param_2 + 0x2e);
  param_1[0x42] = param_2[0x42];
  FUN_1477ce544(param_1 + 0x44,param_2 + 0x44);
  return param_1;
}



// FUNCTION 14797210c FUN_14797210c body=160 status=ok
// SIG undefined FUN_14797210c(void)

undefined8 FUN_14797210c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x1a8) == param_2) {
          FUN_1479721ac(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x1a8 + *param_1 + 0x1a0);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479721ac FUN_1479721ac body=138 status=ok
// SIG undefined FUN_1479721ac(void)

void FUN_1479721ac(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x1a8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1a4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x1a0 + lVar6 * 0x1a8);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x1a8 + 0x1a0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x1a0);
  FUN_145821914(*param_1 + lVar2 + 0x30);
  FUN_14796b80e(param_1,param_2);
  return;
}



// FUNCTION 1479722d4 FUN_1479722d4 body=95 status=ok
// SIG undefined FUN_1479722d4(void)

void FUN_1479722d4(longlong *param_1,int param_2)

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
  FUN_14796bb7a();
  return;
}



// FUNCTION 147972334 FUN_147972334 body=132 status=ok
// SIG undefined FUN_147972334(void)

void FUN_147972334(longlong param_1,int param_2)

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



// FUNCTION 1479723ba FUN_1479723ba body=147 status=ok
// SIG undefined FUN_1479723ba(void)

void FUN_1479723ba(longlong param_1,int param_2)

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



// FUNCTION 14797244e FUN_14797244e body=281 status=ok
// SIG undefined FUN_14797244e(void)

undefined8
FUN_14797244e(undefined8 param_1,undefined4 param_2,char param_3,char param_4,undefined4 *param_5)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  longlong local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  pwVar2 = L"Default";
  if (param_3 == '\x02') {
    pwVar2 = L"Unique";
  }
  pwVar3 = L"Shared";
  if (param_3 != '\x01') {
    pwVar3 = pwVar2;
  }
  FUN_14020fad6(&local_48,pwVar3);
  local_68 = L"True";
  if (param_4 != '\0') {
    local_68 = L"False";
  }
  puVar4 = local_48;
  if ((int)uStack_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,L"                Id: %d, Scope: %s, Realtime: %s",param_2,puVar4);
  if (param_5 != (undefined4 *)0x0) {
    FUN_140002266(&local_58,L", Num Handles: %d",*param_5);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147972568 FUN_147972568 body=119 status=ok
// SIG undefined FUN_147972568(void)

longlong FUN_147972568(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) &&
     (iVar1 = FUN_14490d72a(lVar2), iVar1 != 1)) {
    if (*(longlong *)(lVar2 + 0x1d8) != 0) {
      return *(longlong *)(lVar2 + 0x1d8);
    }
    if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
       (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0)) {
      return *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x98);
    }
  }
  return 0;
}



// FUNCTION 1479725e0 FUN_1479725e0 body=449 status=ok
// SIG undefined FUN_1479725e0(void)

undefined8 FUN_1479725e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if ((*(char *)(param_3 + 1) != '\x02') ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x48))(), uVar3 = local_78,
     cVar4 == '\0')) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar2 = param_1 + 0xb8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_98 = param_2;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0xd0);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar6) || (param_2 = local_98, uStack_60 != lVar2)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar3;
      do {
        if (((*(char *)(*local_90 + 0x28 + (longlong)iVar5 * 0x40) == '\x01') &&
            (puVar7 = (undefined4 *)(*local_90 + (longlong)iVar5 * 0x40),
            param_3[2] == *(longlong *)(puVar7 + 0xc))) &&
           (*(char *)((longlong)param_3 + 9) == *(char *)((longlong)puVar7 + 0x29))) {
          uVar8 = FUN_14340d04c(param_1,*param_3,*puVar7);
          param_2 = local_98;
          local_a8 = param_3;
          FUN_1479727a2(uVar8,local_98,puVar7 + 2,*puVar7);
          goto LAB_147972735;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        param_2 = local_98;
        iVar5 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar6));
    }
  }
  local_78 = uVar3;
  FUN_14340ccdc(param_1,param_2,param_3);
LAB_147972735:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479727a2 FUN_1479727a2 body=96 status=ok
// SIG undefined FUN_1479727a2(void)

undefined8 *
FUN_1479727a2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    lVar3 = DAT_14cace0c0;
  }
  FUN_147972ce0(lVar3,param_4);
  uVar1 = *param_5;
  uVar2 = *param_3;
  *param_2 = 0;
  FUN_14485c47a(param_2,uVar1);
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = param_4;
  return param_2;
}



// FUNCTION 147972802 FUN_147972802 body=245 status=ok
// SIG undefined FUN_147972802(void)

undefined8 FUN_147972802(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 400);
  if (uVar1 == 0) {
    FUN_1461b5960(param_1);
    uVar1 = *(uint *)(param_1 + 400);
  }
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == 1) {
    cVar2 = FUN_1479728f8(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulonglong)*(uint *)(param_1 + 400);
    }
    else {
      plVar3 = (longlong *)FUN_145b54fcc();
      lVar6 = plVar3[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        lVar6 = plVar3[0x22];
      }
      FUN_14340d2c2(lVar6);
      FUN_14340d676(lVar6);
      uVar4 = FUN_144a52528();
      FUN_1446f470e(&local_28,L"AudioMixer",1);
      FUN_14493e38c(uVar4,local_28);
      FUN_147972a04(local_30,param_1);
      *(undefined4 *)(param_1 + 400) = 2;
      uVar5 = 2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479728f8 FUN_1479728f8 body=266 status=ok
// SIG undefined FUN_1479728f8(void)

bool FUN_1479728f8(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"DeterministicAudio");
  local_48 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Audio",L"AudioMixerModuleName",param_1 + 0x80);
  if (cVar2 == '\0') {
    if (0x7ffffffe < *(int *)(param_1 + 0x88) - 2U) {
      lVar4 = *(longlong *)(param_1 + 0x78);
      goto LAB_14797299d;
    }
    pwVar5 = *(wchar_t **)(param_1 + 0x80);
    puVar6 = &local_38;
  }
  else {
    pwVar5 = L"NonRealtimeAudioRenderer";
    puVar6 = &local_30;
  }
  FUN_1446f470e(puVar6,pwVar5,1);
  uVar1 = *puVar6;
  uVar3 = FUN_144a52528();
  lVar4 = FUN_1402c9134(uVar3,uVar1,local_24,0);
  *(longlong *)(param_1 + 0x78) = lVar4;
LAB_14797299d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147972a04 FUN_147972a04 body=223 status=ok
// SIG undefined FUN_147972a04(void)

undefined8 FUN_147972a04(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a7fe860;
  local_30[3] = param_2;
  local_30[4] = FUN_14340d72a;
  FUN_1448b6402(&DAT_14c872b90,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147972ae4 FUN_147972ae4 body=369 status=ok
// SIG undefined FUN_147972ae4(void)

void FUN_147972ae4(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cace560 == '\x01') {
    uVar3 = FUN_140c61bfa();
    FUN_14123f5ce(uVar3,&local_28,FUN_1479777a8);
    DAT_14cace5c0 = local_28;
    uVar3 = FUN_140b631de();
    FUN_14123f5ce(uVar3,&local_28,FUN_143412aea);
    DAT_14cace5c8 = local_28;
    FUN_14123f5ce(&DAT_14c964740,&local_28,FUN_1479777a8);
    DAT_14cace5d0 = local_28;
    FUN_14123f5ce(&DAT_14c964758,&local_28,FUN_143412aea);
    DAT_14cace5d8 = local_28;
    plVar4 = (longlong *)FUN_14001cc68(8,0x10);
    puVar5 = (undefined8 *)FUN_1448fe162(0xa8);
    FUN_144a23e74(puVar5,1,1);
    *puVar5 = &PTR_FUN_149e1e2e0;
    local_38 = 0;
    FUN_144a24082(puVar5,L".\\Runtime/Engine/Private/AudioThread.cpp(650)",1,2);
    *plVar4 = (longlong)puVar5;
    plVar2 = DAT_14cace598;
    if (DAT_14cace598 != (longlong *)0x0) {
      puVar5 = (undefined8 *)*DAT_14cace598;
      DAT_14cace598 = plVar4;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      FUN_1400020a8(plVar2);
      plVar4 = DAT_14cace598;
    }
    DAT_14cace598 = plVar4;
    FUN_14797772c();
    DAT_14c844290 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147972c56 FUN_147972c56 body=137 status=ok
// SIG undefined FUN_147972c56(void)

ulonglong FUN_147972c56(ulonglong param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      plVar1 = (longlong *)(param_1 + 0xa8);
      do {
        bVar4 = *(uint *)(*plVar1 + (longlong)iVar3 * 0x40) == param_2;
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
        if (bVar4) break;
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + *plVar1 + 0x38);
      } while (iVar3 != -1);
      goto LAB_147972c82;
    }
  }
  param_1 = 0;
LAB_147972c82:
  LeaveCriticalSection(lpCriticalSection);
  return param_1 & 0xffffffff;
}



// FUNCTION 147972ce0 FUN_147972ce0 body=136 status=ok
// SIG undefined FUN_147972ce0(void)

void FUN_147972ce0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 0x40;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 0x40) == param_2)
        goto LAB_147972d0c;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_147972d0c:
  *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147972d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return;
}



// FUNCTION 147972d68 FUN_147972d68 body=380 status=ok
// SIG undefined FUN_147972d68(void)

void FUN_147972d68(longlong param_1,uint param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      iVar4 = iVar3;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x40) == param_2) goto LAB_147972e0b;
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + lVar2 + 0x38);
      } while (iVar4 != -1);
    }
  }
  goto LAB_147972d9d;
  while (iVar3 = *(int *)(lVar5 + 0x38), iVar3 != -1) {
LAB_147972e0b:
    lVar5 = lVar2 + (longlong)iVar3 * 0x40;
    if (*(uint *)(lVar2 + (longlong)iVar3 * 0x40) == param_2) goto LAB_147972e20;
  }
  lVar5 = 0;
LAB_147972e20:
  iVar3 = *(int *)(lVar5 + 0x10);
  if (iVar3 == 1) {
    FUN_1479863d0(&DAT_14cacedd0,param_2);
    FUN_14795f2de(*(undefined8 *)(lVar5 + 8));
    if (*(uint *)(param_1 + 300) == param_2) {
      FUN_147972ee4(param_1,*(undefined4 *)(param_1 + 0xa0));
    }
    FUN_14340d14e(param_1,param_3,param_2);
    iVar3 = *(int *)(lVar5 + 0x10);
  }
  *(int *)(lVar5 + 0x10) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    plVar1 = *(longlong **)(lVar5 + 8);
    *(undefined8 *)(lVar5 + 8) = 0;
    FUN_147986fbe((longlong *)(param_1 + 0xa8),param_2);
    LeaveCriticalSection(lpCriticalSection);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x40))(plVar1);
    FUN_1433ff2cc(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147972e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar1)(plVar1,1);
    return;
  }
LAB_147972d9d:
                    /* WARNING: Could not recover jumptable at 0x000147972dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 147972ee4 FUN_147972ee4 body=336 status=ok
// SIG undefined FUN_147972ee4(void)

void FUN_147972ee4(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x128) == -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar2 = param_1 + 0xb8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(param_1 + 0xd0);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (local_70 = uVar4, uStack_58 != lVar2)) {
      do {
        local_70 = uVar4;
        lVar3 = *local_88;
        uVar4 = *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x40);
        iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0x40);
        if (iVar5 == param_2) {
          *(int *)(param_1 + 300) = param_2;
        }
        FUN_143408026(uVar4,CONCAT71((int7)((ulonglong)lVar3 >> 8),iVar5 != param_2));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar6));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147973036 FUN_147973036 body=265 status=ok
// SIG undefined FUN_147973036(void)

undefined8 * FUN_147973036(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = (longlong)iVar2 * 0x40;
        lVar1 = *(longlong *)(param_1 + 0xa8) + lVar3;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + lVar3) == param_3) {
          lVar4 = lVar1 + 8;
          if (lVar4 != 0 && lVar1 != 0) {
            local_58 = &local_48;
            local_48 = 0;
            uStack_40 = 0;
            local_38 = 0;
            local_30 = 0xffffffffffffffff;
            FUN_1479727a2(CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 == 0 || lVar1 == 0),param_2,
                          lVar4,param_3);
            goto LAB_147973084;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
LAB_147973084:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147973140 FUN_147973140 body=158 status=ok
// SIG undefined FUN_147973140(void)

undefined8 FUN_147973140(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  cVar1 = FUN_147972c56(param_1,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar3 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xe8);
      }
      iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
      if (iVar2 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x40;
          if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x40) == param_2)
          goto LAB_14797317a;
          iVar2 = *(int *)(lVar3 + 0x38);
        } while (iVar2 != -1);
      }
    }
    lVar3 = 0;
LAB_14797317a:
    uVar4 = *(undefined8 *)(lVar3 + 8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return uVar4;
}



// FUNCTION 1479731de FUN_1479731de body=398 status=ok
// SIG undefined FUN_1479731de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479731de(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = (longlong)iVar2 * 0x40;
        lVar1 = *(longlong *)(param_1 + 0xa8) + lVar3;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + lVar3) == param_3) {
          lVar4 = lVar1 + 8;
          if (lVar4 != 0 && lVar1 != 0) {
            local_68 = &local_48;
            local_40 = 0;
            uStack_38 = 0;
            local_30 = 0xffffffffffffffff;
            local_48 = param_2;
            FUN_1479727a2(CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 == 0 || lVar1 == 0),local_60,
                          lVar4,param_3);
            FUN_140becc00(param_2,local_60);
            FUN_14051bf10(local_60);
            goto LAB_147973253;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cace0e0) && (FUN_144b3d300(&DAT_14cace0e0), DAT_14cace0e0 == -1)) {
    _DAT_14cace0c8 = 0;
    uRam000000014cace0d0 = 0;
    _DAT_14cace0d8 = 0xffffffff;
    atexit((_func_5014 *)&LAB_14340d9cb);
    _Init_thread_footer(&DAT_14cace0e0);
  }
  FUN_140becc00(param_2,&DAT_14cace0c8);
LAB_147973253:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14797336e FUN_14797336e body=94 status=ok
// SIG undefined FUN_14797336e(void)

undefined8 * FUN_14797336e(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 300) != -1) {
    FUN_147973036(param_1,param_2);
    if (param_2[1] != 0) {
      return param_2;
    }
    FUN_14051bf10(param_2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  FUN_147973aee(param_2,param_1 + 0x90);
  return param_2;
}



// FUNCTION 1479733cc FUN_1479733cc body=18 status=ok
// SIG undefined FUN_1479733cc(void)

void FUN_1479733cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  FUN_147973aee();
  return;
}



// FUNCTION 1479733de FUN_1479733de body=159 status=ok
// SIG undefined FUN_1479733de(void)

void FUN_1479733de(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_59 = param_2;
  if (DAT_14c761328 != 0) {
    FUN_14340da64(param_1 + 0x188,0);
  }
  local_48 = 0;
  local_38 = &PTR_LAB_14a7fe8d0;
  local_30 = &local_59;
  local_58 = &LAB_143419824;
  FUN_14797347e(param_1);
  if (DAT_14c761328 != 0) {
    FUN_14340dba2(param_1 + 0x188);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797347e FUN_14797347e body=293 status=ok
// SIG undefined FUN_14797347e(void)

void FUN_14797347e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  FUN_1463ad99c(param_1 + 0xa8,&local_68);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  lVar3 = local_68;
  lVar7 = (longlong)(int)uStack_60;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar3 + lVar6);
      FUN_147973036(param_1,local_80,uVar1);
      if (local_78 != 0) {
        local_50 = local_78;
        pcVar2 = (code *)*param_2;
        plVar5 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar5 = param_2 + 4;
        }
        local_54 = uVar1;
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar2)(uVar4,&local_54,&local_50);
      }
      FUN_14051bf10(local_80);
      lVar6 = lVar6 + 4;
    } while (lVar7 * 4 != lVar6);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479735a4 FUN_1479735a4 body=5 status=ok
// SIG undefined FUN_1479735a4(void)

undefined8 FUN_1479735a4(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1479735aa FUN_1479735aa body=92 status=ok
// SIG undefined FUN_1479735aa(void)

void FUN_1479735aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14a7fe8f0;
  local_48[0] = &LAB_143419868;
  local_20 = param_2;
  FUN_14797347e(param_1,local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147973608 FUN_147973608 body=109 status=ok
// SIG undefined FUN_147973608(void)

void FUN_147973608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = &local_50;
  local_20 = &local_58;
  local_38 = 0;
  local_28 = &PTR_LAB_14a7fe910;
  local_48 = &LAB_1434198aa;
  local_58 = param_2;
  local_50 = param_3;
  FUN_14797347e();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147973676 FUN_147973676 body=97 status=ok
// SIG undefined FUN_147973676(void)

void FUN_147973676(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_50;
  local_38 = 0;
  local_28 = &PTR_LAB_14a7fe930;
  local_48 = &LAB_1434198f6;
  local_50 = param_2;
  FUN_14797347e();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479736d8 FUN_1479736d8 body=97 status=ok
// SIG undefined FUN_1479736d8(void)

void FUN_1479736d8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_50;
  local_38 = 0;
  local_28 = &PTR_LAB_14a7fe950;
  local_48 = &LAB_14341993c;
  local_50 = param_2;
  FUN_14797347e();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797373a FUN_14797373a body=97 status=ok
// SIG undefined FUN_14797373a(void)

void FUN_14797373a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_50;
  local_38 = 0;
  local_28 = &PTR_LAB_14a7fe990;
  local_48 = &LAB_1434199d0;
  local_50 = param_2;
  FUN_14797347e();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797379c FUN_14797379c body=57 status=ok
// SIG undefined FUN_14797379c(void)

int FUN_14797379c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_1 + 0xdc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return iVar1 - iVar2;
}



// FUNCTION 1479737d6 FUN_1479737d6 body=180 status=ok
// SIG undefined FUN_1479737d6(void)

ulonglong FUN_1479737d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    uVar1 = *(uint *)(param_1 + 0xa0);
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      iVar6 = iVar3;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x40) == uVar1) goto LAB_14797386c;
        iVar6 = *(int *)((longlong)iVar6 * 0x40 + lVar2 + 0x38);
      } while (iVar6 != -1);
    }
  }
  uVar5 = 0;
  goto LAB_1479737ff;
  while (iVar3 = *(int *)(lVar4 + 0x38), iVar3 != -1) {
LAB_14797386c:
    lVar4 = lVar2 + (longlong)iVar3 * 0x40;
    if (*(uint *)(lVar2 + (longlong)iVar3 * 0x40) == uVar1) goto LAB_147973881;
  }
  lVar4 = 0;
LAB_147973881:
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(lVar4 + 0x20));
LAB_1479737ff:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14797388a FUN_14797388a body=360 status=ok
// SIG undefined FUN_14797388a(void)

longlong * FUN_14797388a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
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
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_90 + 8 + (longlong)iStack_74 * 0x40);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14798708c(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar5));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479739f4 FUN_1479739f4 body=11 status=ok
// SIG undefined FUN_1479739f4(void)

bool FUN_1479739f4(void)

{
  return DAT_14cace0a8 != 0;
}



// FUNCTION 147973a00 FUN_147973a00 body=237 status=ok
// SIG undefined FUN_147973a00(void)

float FUN_147973a00(longlong param_1,byte param_2,longlong *param_3)

{
  byte *pbVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    lVar3 = *param_3;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x170);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x178) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)lVar3 >> 0x20) + uVar7 +
                              ((uint)(param_2 >> 2) | (uint)param_2 << 6 | (uint)lVar3 << 0x10) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + 0x9e3779b9 ^ (uint)param_2)) * 4);
    if (iVar5 != -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 0x18);
        if ((*pbVar1 == param_2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x130) + 4 + (longlong)iVar5 * 0x18) == lVar3)) {
          if ((float *)(pbVar1 + 0xc) == (float *)0x0 || pbVar1 == (byte *)0x0) {
            return 1.0;
          }
          fVar2 = *(float *)(pbVar1 + 0xc);
          if (fVar2 < 0.0) {
            return 0.0;
          }
          return fVar2;
        }
        iVar5 = *(int *)(pbVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  return 1.0;
}



// FUNCTION 147973aee FUN_147973aee body=125 status=ok
// SIG undefined FUN_147973aee(void)

undefined8 * FUN_147973aee(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar5 = FUN_14479d2ce();
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *param_1 = *param_2;
  lVar4 = DAT_14cace0c0;
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    if (lVar3 != 0) {
      FUN_147972ce0(DAT_14cace0c0);
    }
    if (lVar2 != 0) {
      FUN_147972d68(lVar4,uVar1,uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147973b6c FUN_147973b6c body=143 status=ok
// SIG undefined FUN_147973b6c(void)

undefined8 * FUN_147973b6c(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  if (param_1 != param_2) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x21) = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return param_1;
}



// FUNCTION 147973bfc FUN_147973bfc body=25 status=ok
// SIG undefined FUN_147973bfc(void)

undefined4 * FUN_147973bfc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = param_2;
  return param_1;
}



// FUNCTION 147973c16 FUN_147973c16 body=88 status=ok
// SIG undefined FUN_147973c16(void)

void FUN_147973c16(float *param_1,float param_2,float param_3)

{
  if ((((param_1[6] != param_2) || (NAN(param_1[6]) || NAN(param_2))) || (param_1[4] != param_3)) ||
     (NAN(param_1[4]) || NAN(param_3))) {
    param_1[6] = param_2;
    if (0.0 < param_3) {
      param_1[2] = param_2 - *param_1;
      param_1[1] = *param_1;
      param_1[4] = param_3;
      param_1[3] = 0.0;
      return;
    }
    param_1[1] = param_2;
    param_1[2] = 0.0;
    param_1[4] = 0.0;
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 147973c6e FUN_147973c6e body=81 status=ok
// SIG undefined FUN_147973c6e(void)

void FUN_147973c6e(float *param_1,float param_2)

{
  float fVar1;
  
  if (0.0 < param_1[4]) {
    fVar1 = param_1[3] / param_1[4];
    if (1.0 <= fVar1) {
      fVar1 = param_1[1] + param_1[2];
      param_1[4] = 0.0;
    }
    else {
      fVar1 = fVar1 * param_1[2] + param_1[1];
    }
    *param_1 = fVar1;
    param_1[3] = param_1[3] + param_2;
  }
  return;
}



// FUNCTION 147973cc0 FUN_147973cc0 body=131 status=ok
// SIG undefined FUN_147973cc0(void)

void FUN_147973cc0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x38);
  }
  return;
}



// FUNCTION 147973d46 FUN_147973d46 body=801 status=ok
// SIG undefined FUN_147973d46(void)

undefined8 FUN_147973d46(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  dVar1 = *(double *)(param_2 + 8);
  if ((dVar1 < *(double *)(param_3 + 8)) &&
     (fVar10 = (float)((DAT_14c866ff8 - dVar1) / (*(double *)(param_3 + 8) - dVar1)), fVar10 < 1.0))
  {
    fVar11 = 0.0;
    if (fVar10 <= 0.0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      uVar8 = *(undefined8 *)(param_2 + 0x3e);
      *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
      *(undefined8 *)(param_1 + 0x3e) = uVar8;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
    else {
      fVar12 = 1.0 - fVar10;
      *(double *)(param_1 + 8) = DAT_14c866ff8;
      *(float *)(param_1 + 0x10) =
           *(float *)(param_2 + 0x10) * fVar12 + *(float *)(param_3 + 0x10) * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x44) == '\0') {
        fVar13 = *(float *)(param_2 + 0x20);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x44) == '\0') {
        fVar14 = *(float *)(param_3 + 0x20);
      }
      *(float *)(param_1 + 0x20) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x44) == '\0') {
        fVar13 = *(float *)(param_2 + 0x2c);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x44) == '\0') {
        fVar14 = *(float *)(param_3 + 0x2c);
      }
      *(float *)(param_1 + 0x2c) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x44) == '\0') {
        fVar13 = *(float *)(param_2 + 0x30);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x44) == '\0') {
        fVar14 = *(float *)(param_3 + 0x30);
      }
      *(float *)(param_1 + 0x30) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x14);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x14);
      }
      *(float *)(param_1 + 0x14) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x18);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x18);
      }
      *(float *)(param_1 + 0x18) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x1c);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x1c);
      }
      *(float *)(param_1 + 0x1c) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x24);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x24);
      }
      *(float *)(param_1 + 0x24) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x28);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x28);
      }
      *(float *)(param_1 + 0x28) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x34);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x34);
      }
      *(float *)(param_1 + 0x34) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x38);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x38);
      }
      *(float *)(param_1 + 0x38) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x3c);
      }
      fVar14 = 0.0;
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar14 = *(float *)(param_3 + 0x3c);
      }
      *(float *)(param_1 + 0x3c) = fVar13 * fVar12 + fVar14 * fVar10;
      fVar13 = 0.0;
      if (*(char *)(param_2 + 0x45) == '\0') {
        fVar13 = *(float *)(param_2 + 0x40);
      }
      if (*(char *)(param_3 + 0x45) == '\0') {
        fVar11 = *(float *)(param_3 + 0x40);
      }
      *(float *)(param_1 + 0x40) = fVar13 * fVar12 + fVar11 * fVar10;
      if (*(char *)(param_2 + 0x44) == '\x01') {
        uVar9 = *(undefined1 *)(param_3 + 0x44);
      }
      else {
        uVar9 = 0;
      }
      *(undefined1 *)(param_1 + 0x44) = uVar9;
      if (*(char *)(param_2 + 0x45) == '\x01') {
        uVar9 = *(undefined1 *)(param_3 + 0x45);
      }
      else {
        uVar9 = 0;
      }
      *(undefined1 *)(param_1 + 0x45) = uVar9;
    }
    return 0;
  }
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  uVar8 = *(undefined8 *)(param_3 + 0x3e);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_3 + 0x36);
  *(undefined8 *)(param_1 + 0x3e) = uVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return 1;
}



// FUNCTION 147974068 FUN_147974068 body=260 status=ok
// SIG undefined FUN_147974068(void)

void FUN_147974068(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  if (20000.0 <= fVar1) {
    fVar1 = 20000.0;
  }
  if (fVar1 <= 20.0) {
    fVar1 = 20.0;
  }
  *(float *)(param_1 + 0x10) = fVar1;
  fVar1 = *(float *)(param_1 + 0x1c);
  if (20000.0 <= fVar1) {
    fVar1 = 20000.0;
  }
  if (fVar1 <= 20.0) {
    fVar1 = 20.0;
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = *(float *)(param_1 + 0x28);
  if (20000.0 <= fVar1) {
    fVar1 = 20000.0;
  }
  if (fVar1 <= 20.0) {
    fVar1 = 20.0;
  }
  *(float *)(param_1 + 0x28) = fVar1;
  fVar1 = *(float *)(param_1 + 0x34);
  if (20000.0 <= fVar1) {
    fVar1 = 20000.0;
  }
  if (fVar1 <= 20.0) {
    fVar1 = 20.0;
  }
  *(float *)(param_1 + 0x34) = fVar1;
  if (7.94 <= fVar2) {
    fVar2 = 7.94;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x14) = fVar2;
  fVar1 = *(float *)(param_1 + 0x20);
  if (7.94 <= fVar1) {
    fVar1 = 7.94;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = *(float *)(param_1 + 0x2c);
  if (7.94 <= fVar1) {
    fVar1 = 7.94;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x2c) = fVar1;
  fVar1 = *(float *)(param_1 + 0x38);
  if (7.94 <= fVar1) {
    fVar1 = 7.94;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x38) = fVar1;
  fVar1 = *(float *)(param_1 + 0x18);
  if (2.0 <= fVar1) {
    fVar1 = 2.0;
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = *(float *)(param_1 + 0x24);
  if (2.0 <= fVar1) {
    fVar1 = 2.0;
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = *(float *)(param_1 + 0x30);
  if (2.0 <= fVar1) {
    fVar1 = 2.0;
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  *(float *)(param_1 + 0x30) = fVar1;
  fVar1 = *(float *)(param_1 + 0x3c);
  if (2.0 <= fVar1) {
    fVar1 = 2.0;
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  *(float *)(param_1 + 0x3c) = fVar1;
  return;
}



// FUNCTION 14797416e FUN_14797416e body=504 status=ok
// SIG undefined FUN_14797416e(void)

undefined8 FUN_14797416e(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  dVar1 = *(double *)(param_2 + 8);
  if ((dVar1 < *(double *)(param_3 + 8)) &&
     (fVar8 = (float)((DAT_14c866ff8 - dVar1) / (*(double *)(param_3 + 8) - dVar1)), fVar8 < 1.0)) {
    if (fVar8 <= 0.0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
    else {
      *(double *)(param_1 + 8) = DAT_14c866ff8;
      *(float *)(param_1 + 0x10) =
           (*(float *)(param_3 + 0x10) - *(float *)(param_2 + 0x10)) * fVar8 +
           *(float *)(param_2 + 0x10);
      *(float *)(param_1 + 0x1c) =
           (*(float *)(param_3 + 0x1c) - *(float *)(param_2 + 0x1c)) * fVar8 +
           *(float *)(param_2 + 0x1c);
      *(float *)(param_1 + 0x28) =
           (*(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28)) * fVar8 +
           *(float *)(param_2 + 0x28);
      *(float *)(param_1 + 0x34) =
           (*(float *)(param_3 + 0x34) - *(float *)(param_2 + 0x34)) * fVar8 +
           *(float *)(param_2 + 0x34);
      *(float *)(param_1 + 0x14) =
           (*(float *)(param_3 + 0x14) - *(float *)(param_2 + 0x14)) * fVar8 +
           *(float *)(param_2 + 0x14);
      *(float *)(param_1 + 0x20) =
           (*(float *)(param_3 + 0x20) - *(float *)(param_2 + 0x20)) * fVar8 +
           *(float *)(param_2 + 0x20);
      *(float *)(param_1 + 0x2c) =
           (*(float *)(param_3 + 0x2c) - *(float *)(param_2 + 0x2c)) * fVar8 +
           *(float *)(param_2 + 0x2c);
      *(float *)(param_1 + 0x38) =
           (*(float *)(param_3 + 0x38) - *(float *)(param_2 + 0x38)) * fVar8 +
           *(float *)(param_2 + 0x38);
      *(float *)(param_1 + 0x18) =
           (*(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18)) * fVar8 +
           *(float *)(param_2 + 0x18);
      *(float *)(param_1 + 0x24) =
           (*(float *)(param_3 + 0x24) - *(float *)(param_2 + 0x24)) * fVar8 +
           *(float *)(param_2 + 0x24);
      *(float *)(param_1 + 0x30) =
           (*(float *)(param_3 + 0x30) - *(float *)(param_2 + 0x30)) * fVar8 +
           *(float *)(param_2 + 0x30);
      *(float *)(param_1 + 0x3c) =
           (*(float *)(param_3 + 0x3c) - *(float *)(param_2 + 0x3c)) * fVar8 +
           *(float *)(param_2 + 0x3c);
    }
    return 0;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 147974366 FUN_147974366 body=465 status=ok
// SIG undefined FUN_147974366(void)

undefined8 * FUN_147974366(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14a7ed7b0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = &PTR_FUN_14a7ed790;
  param_1[5] = 0;
  param_1[6] = 0x3f80000000000000;
  param_1[7] = 0x3ea3d70a3f800000;
  param_1[8] = 0x3fbeb8523f63d70a;
  param_1[9] = 0x3d4ccccd3f547ae1;
  param_1[10] = 0x3fa147ae3be56042;
  param_1[0xb] = 0x3f7e76c93c343958;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 1;
  param_1[0xd] = &PTR_FUN_14a7ed790;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x10] = 0x3ea3d70a3f800000;
  param_1[0x11] = 0x3fbeb8523f63d70a;
  param_1[0x12] = 0x3d4ccccd3f547ae1;
  param_1[0x13] = 0x3fa147ae3be56042;
  param_1[0x14] = 0x3f7e76c93c343958;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 1;
  param_1[0x16] = &PTR_FUN_14a7ed790;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f80000000000000;
  param_1[0x19] = 0x3ea3d70a3f800000;
  param_1[0x1a] = 0x3fbeb8523f63d70a;
  param_1[0x1b] = 0x3d4ccccd3f547ae1;
  param_1[0x1c] = 0x3fa147ae3be56042;
  *(undefined4 *)(param_1 + 0x1d) = 0x3c343958;
  param_1[0x1f] = &PTR_FUN_14a7ed790;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  param_1[0x22] = 0x3ea3d70a3f800000;
  param_1[0x23] = 0x3fbeb8523f63d70a;
  param_1[0x24] = 0x3d4ccccd3f547ae1;
  param_1[0x25] = 0x3fa147ae3be56042;
  param_1[0x26] = 0x3f7e76c93c343958;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x400000003f000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = &PTR_FUN_14a7fed40;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  param_1[0x35] = &PTR_FUN_14a7fed40;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  param_1[0x3d] = &PTR_FUN_14a7fed40;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x42) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  FUN_14340de62(param_1);
  return param_1;
}



// FUNCTION 147974538 FUN_147974538 body=29 status=ok
// SIG undefined FUN_147974538(void)

void FUN_147974538(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147974552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  return;
}



// FUNCTION 147974556 FUN_147974556 body=230 status=ok
// SIG undefined FUN_147974556(void)

void FUN_147974556(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_147973d46(param_1 + 0xd,param_1 + 4,param_1 + 0x1f);
  if (((bVar1 == 0) || ((char)param_1[0x45] != '\0')) ||
     (*(char *)((longlong)param_1 + 0x22a) == '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0x22a) = 0;
    param_1[0x17] = param_1[0xe];
    param_1[0x18] = param_1[0xf];
    param_1[0x19] = param_1[0x10];
    param_1[0x1a] = param_1[0x11];
    param_1[0x1b] = param_1[0x12];
    param_1[0x1c] = param_1[0x13];
    *(undefined4 *)((longlong)param_1 + 0xe6) = *(undefined4 *)((longlong)param_1 + 0x9e);
    *(undefined4 *)((longlong)param_1 + 0xea) = *(undefined4 *)((longlong)param_1 + 0xa2);
    *(undefined4 *)((longlong)param_1 + 0xee) = *(undefined4 *)((longlong)param_1 + 0xa6);
    *(undefined4 *)((longlong)param_1 + 0xf2) = *(undefined4 *)((longlong)param_1 + 0xaa);
    *(byte *)(param_1 + 0x45) = bVar1 ^ 1;
    (**(code **)(*param_1 + 8))(param_1,param_1 + 0xd);
  }
  bVar1 = FUN_14797416e(param_1 + 0x35,param_1 + 0x2d,param_1 + 0x3d);
  if (((bVar1 != 0) && (*(char *)((longlong)param_1 + 0x229) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x22b) != '\x01')) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x22b) = 0;
  *(byte *)((longlong)param_1 + 0x229) = bVar1 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x000147974631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_1 + 0x35);
  return;
}



// FUNCTION 14797463c FUN_14797463c body=149 status=ok
// SIG undefined FUN_14797463c(void)

undefined8 FUN_14797463c(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                L"SpatializationPlugin",&local_28);
  iVar1 = (int)uStack_20 + -1;
  if ((int)uStack_20 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_28,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479746d2 FUN_1479746d2 body=121 status=ok
// SIG undefined FUN_1479746d2(void)

undefined8 FUN_1479746d2(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar2 = FUN_1448c2e86();
  FUN_1479747d6(&local_28);
  FUN_14797474c(uVar2,param_1,local_28);
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797474c FUN_14797474c body=137 status=ok
// SIG undefined FUN_14797474c(void)

longlong * FUN_14797474c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147987112(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1479747d6 FUN_1479747d6 body=120 status=ok
// SIG undefined FUN_1479747d6(void)

undefined8 * FUN_1479747d6(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caceb20) {
    FUN_144b3d300(&DAT_14caceb20);
    if (DAT_14caceb20 == -1) {
      FUN_1446f470e(&DAT_14caceb18,L"AudioSpatializationPlugin",1);
      _Init_thread_footer(&DAT_14caceb20);
    }
  }
  *param_1 = DAT_14caceb18;
  return param_1;
}



// FUNCTION 14797484e FUN_14797484e body=365 status=ok
// SIG undefined FUN_14797484e(void)

undefined8 * FUN_14797484e(void)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  wchar_t *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_88 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                L"SpatializationPlugin");
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar5 = FUN_1448c2e86();
  FUN_1479747d6(&local_70);
  FUN_14797474c(uVar5,&local_68,local_70);
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = local_68;
  if ((longlong)local_60 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar7);
      (**(code **)*puVar6)(puVar6,&local_80);
      pwVar1 = local_80;
      if (local_78 == (int)uStack_50) {
        bVar8 = true;
        if (1 < local_78) {
          iVar3 = wcscmp(local_80,local_58);
          bVar8 = iVar3 == 0;
        }
      }
      else {
        bVar8 = (int)uStack_50 + local_78 == 1;
      }
      if (pwVar1 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar1);
      }
      if (bVar8) goto LAB_147974971;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_60 * 8 != lVar7);
    puVar6 = (undefined8 *)0x0;
  }
LAB_147974971:
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 1479749bc FUN_1479749bc body=365 status=ok
// SIG undefined FUN_1479749bc(void)

undefined8 * FUN_1479749bc(void)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  wchar_t *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_88 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                L"SourceDataOverridePlugin");
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar5 = FUN_1448c2e86();
  FUN_147974bb4(&local_70);
  FUN_147974b2a(uVar5,&local_68,local_70);
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = local_68;
  if ((longlong)local_60 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar7);
      (**(code **)*puVar6)(puVar6,&local_80);
      pwVar1 = local_80;
      if (local_78 == (int)uStack_50) {
        bVar8 = true;
        if (1 < local_78) {
          iVar3 = wcscmp(local_80,local_58);
          bVar8 = iVar3 == 0;
        }
      }
      else {
        bVar8 = (int)uStack_50 + local_78 == 1;
      }
      if (pwVar1 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar1);
      }
      if (bVar8) goto LAB_147974adf;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_60 * 8 != lVar7);
    puVar6 = (undefined8 *)0x0;
  }
LAB_147974adf:
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 147974b2a FUN_147974b2a body=137 status=ok
// SIG undefined FUN_147974b2a(void)

longlong * FUN_147974b2a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147987198(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147974bb4 FUN_147974bb4 body=120 status=ok
// SIG undefined FUN_147974bb4(void)

undefined8 * FUN_147974bb4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caceb30) {
    FUN_144b3d300(&DAT_14caceb30);
    if (DAT_14caceb30 == -1) {
      FUN_1446f470e(&DAT_14caceb28,L"AudioSourceDataOverridePlugin",1);
      _Init_thread_footer(&DAT_14caceb30);
    }
  }
  *param_1 = DAT_14caceb28;
  return param_1;
}



// FUNCTION 147974c2c FUN_147974c2c body=365 status=ok
// SIG undefined FUN_147974c2c(void)

undefined8 * FUN_147974c2c(void)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  wchar_t *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_88 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",L"ReverbPlugin"
               );
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar5 = FUN_1448c2e86();
  FUN_147974e24(&local_70);
  FUN_147974d9a(uVar5,&local_68,local_70);
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = local_68;
  if ((longlong)local_60 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar7);
      (**(code **)*puVar6)(puVar6,&local_80);
      pwVar1 = local_80;
      if (local_78 == (int)uStack_50) {
        bVar8 = true;
        if (1 < local_78) {
          iVar3 = wcscmp(local_80,local_58);
          bVar8 = iVar3 == 0;
        }
      }
      else {
        bVar8 = (int)uStack_50 + local_78 == 1;
      }
      if (pwVar1 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar1);
      }
      if (bVar8) goto LAB_147974d4f;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_60 * 8 != lVar7);
    puVar6 = (undefined8 *)0x0;
  }
LAB_147974d4f:
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 147974d9a FUN_147974d9a body=137 status=ok
// SIG undefined FUN_147974d9a(void)

longlong * FUN_147974d9a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14798721e(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147974e24 FUN_147974e24 body=120 status=ok
// SIG undefined FUN_147974e24(void)

undefined8 * FUN_147974e24(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caceb40) {
    FUN_144b3d300(&DAT_14caceb40);
    if (DAT_14caceb40 == -1) {
      FUN_1446f470e(&DAT_14caceb38,L"AudioReverbPlugin",1);
      _Init_thread_footer(&DAT_14caceb40);
    }
  }
  *param_1 = DAT_14caceb38;
  return param_1;
}



// FUNCTION 147974e9c FUN_147974e9c body=365 status=ok
// SIG undefined FUN_147974e9c(void)

undefined8 * FUN_147974e9c(void)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  wchar_t *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_88 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                L"OcclusionPlugin");
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar5 = FUN_1448c2e86();
  FUN_147975094(&local_70);
  FUN_14797500a(uVar5,&local_68,local_70);
  plVar4 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = local_68;
  if ((longlong)local_60 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar7);
      (**(code **)*puVar6)(puVar6,&local_80);
      pwVar1 = local_80;
      if (local_78 == (int)uStack_50) {
        bVar8 = true;
        if (1 < local_78) {
          iVar3 = wcscmp(local_80,local_58);
          bVar8 = iVar3 == 0;
        }
      }
      else {
        bVar8 = (int)uStack_50 + local_78 == 1;
      }
      if (pwVar1 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar1);
      }
      if (bVar8) goto LAB_147974fbf;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_60 * 8 != lVar7);
    puVar6 = (undefined8 *)0x0;
  }
LAB_147974fbf:
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 14797500a FUN_14797500a body=137 status=ok
// SIG undefined FUN_14797500a(void)

longlong * FUN_14797500a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1479872a4(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147975094 FUN_147975094 body=120 status=ok
// SIG undefined FUN_147975094(void)

undefined8 * FUN_147975094(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caceb50) {
    FUN_144b3d300(&DAT_14caceb50);
    if (DAT_14caceb50 == -1) {
      FUN_1446f470e(&DAT_14caceb48,L"AudioOcclusionPlugin",1);
      _Init_thread_footer(&DAT_14caceb50);
    }
  }
  *param_1 = DAT_14caceb48;
  return param_1;
}



// FUNCTION 14797510c FUN_14797510c body=327 status=ok
// SIG undefined FUN_14797510c(void)

longlong * FUN_14797510c(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_58 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                L"ModulationPlugin",&local_48);
  puVar4 = local_48;
  if ((int)uStack_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  plVar5 = &local_38;
  FUN_1446f470e(plVar5,puVar4,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 == 0) {
    FUN_147975254();
    plVar5 = &DAT_14cace120;
  }
  FUN_14797531a(&local_50);
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar2 = FUN_1448c2e86();
  FUN_147975392(uVar2,&local_48,local_50);
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar4 = local_48;
  lVar6 = (longlong)(int)uStack_40;
  if (lVar6 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)((longlong)puVar4 + lVar7);
      plVar3 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1);
      if (*plVar3 == *plVar5) goto LAB_14797521d;
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
    plVar1 = (longlong *)0x0;
  }
LAB_14797521d:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 147975254 FUN_147975254 body=196 status=ok
// SIG undefined FUN_147975254(void)

undefined8 * FUN_147975254(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace128) {
    FUN_144b3d300(&DAT_14cace128);
    if (DAT_14cace128 == -1) {
      FUN_1446f470e(&DAT_14cace120,L"DefaultModulationPlugin",1);
      _Init_thread_footer(&DAT_14cace128);
    }
  }
  if (1 < DAT_14cace108) {
    FUN_1446f470e(&local_18,DAT_14cace100,1);
    DAT_14cace120 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14cace120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797531a FUN_14797531a body=120 status=ok
// SIG undefined FUN_14797531a(void)

undefined8 * FUN_14797531a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caceb60) {
    FUN_144b3d300(&DAT_14caceb60);
    if (DAT_14caceb60 == -1) {
      FUN_1446f470e(&DAT_14caceb58,L"AudioModulationPlugin",1);
      _Init_thread_footer(&DAT_14caceb60);
    }
  }
  *param_1 = DAT_14caceb58;
  return param_1;
}



// FUNCTION 147975392 FUN_147975392 body=137 status=ok
// SIG undefined FUN_147975392(void)

longlong * FUN_147975392(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14798732a(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147975438 FUN_147975438 body=36 status=ok
// SIG undefined FUN_147975438(void)

longlong FUN_147975438(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x180) - 1;
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2 * 0x18 + *(longlong *)(param_1 + 0x178);
}



// FUNCTION 14797545c FUN_14797545c body=8 status=ok
// SIG undefined FUN_14797545c(void)

undefined8 FUN_14797545c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



// FUNCTION 147975464 FUN_147975464 body=8 status=ok
// SIG undefined FUN_147975464(void)

undefined8 FUN_147975464(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



// FUNCTION 14797546c FUN_14797546c body=8 status=ok
// SIG undefined FUN_14797546c(void)

undefined8 FUN_14797546c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



// FUNCTION 147975474 FUN_147975474 body=64 status=ok
// SIG undefined FUN_147975474(void)

undefined4 FUN_147975474(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = 0;
    if (((((int)param_1[1] == (int)param_2[1]) &&
         (*(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
        ((int)param_1[2] == (int)param_2[2])) &&
       (uVar1 = 0, *(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) {
      uVar1 = CONCAT31((int3)((uint)(int)param_1[3] >> 8),(int)param_1[3] == (int)param_2[3]);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1479754b4 FUN_1479754b4 body=96 status=ok
// SIG undefined FUN_1479754b4(void)

undefined4 FUN_1479754b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  uVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
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
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_14795d958(*(longlong *)(param_1 + 0x48) + 0x10);
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
  return uVar6;
}



// FUNCTION 147975514 FUN_147975514 body=120 status=ok
// SIG undefined FUN_147975514(void)

undefined8 FUN_147975514(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    uVar8 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((lVar4 == 0) || (uVar7 = FUN_14795d958(lVar4 + 0x10), uVar7 <= param_2)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_147d3feba(lVar4,param_2);
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
  return uVar8;
}



// FUNCTION 14797558c FUN_14797558c body=87 status=ok
// SIG undefined FUN_14797558c(void)

void FUN_14797558c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1436fdec8();
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
                    /* WARNING: Could not recover jumptable at 0x0001479755d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479755e4 FUN_1479755e4 body=105 status=ok
// SIG undefined FUN_1479755e4(void)

ulonglong FUN_1479755e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
LAB_14797563c:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14797563c;
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
    bVar7 = *(longlong *)(param_1 + 0x48) != 0;
    if (bVar7) {
      uVar6 = FUN_147a359e0(*(longlong *)(param_1 + 0x48) + 0x28);
      unaff_RBX = (ulonglong)uVar6;
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 14797564e FUN_14797564e body=104 status=ok
// SIG undefined FUN_14797564e(void)

void FUN_14797564e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  for (lVar2 = *(longlong *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x38)) {
    LOCK();
    plVar1 = *(longlong **)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 1;
    UNLOCK();
    if (&DAT_00000001 < plVar1) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      (**(code **)*plVar1)(plVar1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147975678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1479756ce FUN_1479756ce body=458 status=ok
// SIG undefined FUN_1479756ce(void)

void FUN_1479756ce(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  
  FUN_147d4187e(*param_2);
  cVar5 = FUN_147d4187e(*param_2);
  if (cVar5 == '\x04') {
    puVar7 = (undefined8 *)FUN_147d41844(*param_2);
    uVar3 = *puVar7;
    uVar13 = *param_2;
    uVar8 = FUN_147d4032e();
    lVar9 = FUN_147d41886(uVar13,uVar3,uVar8);
    if (lVar9 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulonglong)*(uint5 *)(lVar9 + 8);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x120);
    EnterCriticalSection(lpCriticalSection);
    uVar12 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar10 = (int *)((longlong)plVar4 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar6 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    piVar10 = (int *)FUN_147987a9c(param_1 + 0xd0,uVar6 >> 0x10 ^ uVar6,param_2);
    iVar2 = *piVar10;
    *piVar10 = iVar2 + 1;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479757d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *(ulonglong *)(piVar10 + 2) = uVar13;
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + uVar13;
    UNLOCK();
    if (DAT_14c761334 != 0) {
      uVar11 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30) +
               *(longlong *)(param_1 + 0x48);
      uVar13 = *(ulonglong *)(param_1 + 0x38);
      uVar12 = uVar11 - uVar13;
      if (uVar13 <= uVar11 && uVar12 != 0) {
        if (0.0 < DAT_14c761340) {
          fVar14 = DAT_14c761340;
          if (1.0 <= DAT_14c761340) {
            fVar14 = 1.0;
          }
          uVar12 = (ulonglong)(fVar14 * (float)uVar13);
          uVar12 = (longlong)(fVar14 * (float)uVar13 - 9.223372e+18) & (longlong)uVar12 >> 0x3f |
                   uVar12;
        }
        FUN_14340f4aa(param_1,uVar12,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479758a8 FUN_1479758a8 body=556 status=ok
// SIG undefined FUN_1479758a8(void)

void FUN_1479758a8(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d4187e(*param_2);
  cVar6 = FUN_147d4187e(*param_2);
  if (cVar6 == '\x04') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    plVar2 = (longlong *)(param_1 + 0xd0);
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    local_50 = uVar4;
    if (plVar5 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_48 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar9 = (int *)((longlong)plVar5 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    iVar8 = FUN_147987f34(plVar2,uVar7 >> 0x10 ^ uVar7,&local_50);
    plVar1 = local_48;
    if (iVar8 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar8 * 0x28 + *plVar2;
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar9 = (int *)((longlong)plVar1 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar9 = (int *)((longlong)plVar5 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    piVar9 = (int *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      piVar9 = (int *)0x0;
    }
    lVar10 = *(longlong *)(piVar9 + 2);
    *piVar9 = *piVar9 + -1;
    if (*piVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    local_50 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      FUN_14798829a(plVar2);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_48 = plVar5;
      FUN_14798829a(plVar2);
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar9 = (int *)((longlong)plVar5 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    LOCK();
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) - lVar10;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147975b14 FUN_147975b14 body=113 status=ok
// SIG undefined FUN_147975b14(void)

undefined8 FUN_147975b14(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  uVar1 = FUN_147988632(param_2);
  iVar2 = FUN_147988cec((longlong *)(param_1 + 0x80),uVar1,param_2);
  uVar5 = 0xffffffffffffffff;
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x80),
     puVar4 = (undefined8 *)(lVar3 + 0x20), puVar4 != (undefined8 *)0x0 && lVar3 != 0)) {
    uVar5 = *puVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return uVar5;
}



// FUNCTION 147975b86 FUN_147975b86 body=120 status=ok
// SIG undefined FUN_147975b86(void)

void FUN_147975b86(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  uVar1 = FUN_147988632(param_2);
  FUN_147988d5c(param_1 + 0x80,uVar1,param_2,&local_30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147975c00 FUN_147975c00 body=792 status=ok
// SIG undefined FUN_147975c00(void)

undefined8
FUN_147975c00(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,char param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char local_90;
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((1e-08 < ABS(DAT_14cace320)) && (0.0 < DAT_14cace320)) {
    uVar7 = (ulonglong)(DAT_14cace320 * 1024.0);
    *(ulonglong *)(param_1 + 0x38) =
         ((longlong)(DAT_14cace320 * 1024.0 - 9.223372e+18) & (longlong)uVar7 >> 0x3f | uVar7) << 10
    ;
  }
  if (((*param_3 == 0) || (uVar1 = *(uint *)(param_2 + 3), uVar1 == 0xffffffff)) ||
     (uVar5 = FUN_14795d958(*param_3 + 0x10), uVar5 <= uVar1)) {
    FUN_147975f9a(3,param_4,&param_5);
    uVar14 = 0xffffffffffffffff;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    lVar8 = FUN_14340f26e(param_1,param_2);
    if (lVar8 == 0) {
      lVar8 = FUN_14340f350(param_1,param_2,param_3);
      if (lVar8 == 0) {
        FUN_147975f9a(4,param_4,&param_5);
        uVar14 = 0xffffffffffffffff;
      }
      else {
        lVar9 = FUN_147975514(lVar8,*(undefined4 *)(param_2 + 3));
        if (lVar9 != 0) {
          if (DAT_14c761334 != 0) {
            uVar12 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x40) +
                     *(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar9 + 4);
            uVar7 = *(ulonglong *)(param_1 + 0x38);
            uVar13 = uVar12 - uVar7;
            if (uVar7 <= uVar12 && uVar13 != 0) {
              if (0.0 < DAT_14c761340) {
                fVar15 = DAT_14c761340;
                if (1.0 <= DAT_14c761340) {
                  fVar15 = 1.0;
                }
                uVar13 = (ulonglong)(fVar15 * (float)uVar7);
                uVar13 = (longlong)(fVar15 * (float)uVar7 - 9.223372e+18) & (longlong)uVar13 >> 0x3f
                         | uVar13;
              }
              FUN_14340f4aa(param_1,uVar13,
                            CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1));
            }
          }
        }
        cVar4 = param_6;
        uVar2 = param_5;
        local_88[0] = *param_4;
        local_78[0] = 0;
        if (local_88[0] != 0) {
          plVar11 = param_4 + 4;
          if ((longlong *)param_4[2] != (longlong *)0x0) {
            plVar11 = (longlong *)param_4[2];
          }
          (**(code **)*plVar11)(plVar11,local_78);
        }
        local_90 = cVar4;
        local_98 = uVar2;
        FUN_14340f65c(param_1,lVar8,param_2,local_88);
        if ((cVar4 != '\0') && ((*(char *)(param_1 + 0x160) != '\0' || (DAT_14cace290 != 0)))) {
          uVar6 = FUN_1479754b4(lVar8);
          uVar14 = *param_2;
          uVar2 = *(undefined4 *)(param_2 + 3);
          puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          *puVar10 = 0;
          puVar10[1] = uVar14;
          *(undefined4 *)(puVar10 + 2) = uVar2;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar6;
          *(undefined1 *)(puVar10 + 3) = 0;
          if (puVar10 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0x150);
            *(undefined8 **)(param_1 + 0x150) = puVar10;
            *puVar3 = puVar10;
          }
        }
        uVar14 = *(undefined8 *)(lVar8 + 0x40);
      }
    }
    else {
      FUN_1479760fe(param_1,lVar8);
      if (*(int *)(lVar8 + 0x58) != 0) {
        FUN_147975f9a(1,param_4,&param_5);
      }
      uVar14 = *(undefined8 *)(lVar8 + 0x40);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  if (*param_4 != 0) {
    plVar11 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147975f1a FUN_147975f1a body=63 status=ok
// SIG undefined FUN_147975f1a(void)

void FUN_147975f1a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar1 = FUN_14340f26e(param_1,param_2);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000147975f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 147975f5a FUN_147975f5a body=63 status=ok
// SIG undefined FUN_147975f5a(void)

void FUN_147975f5a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar1 = FUN_14340f26e(param_1,param_2);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + -1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000147975f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 147975f9a FUN_147975f9a body=355 status=ok
// SIG undefined FUN_147975f9a(void)

void FUN_147975f9a(undefined1 param_1,longlong *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  longlong local_98 [4];
  undefined1 local_78;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == 0xff) {
    local_b8[0] = CONCAT71(local_b8[0]._1_7_,param_1);
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar2,local_b8);
  }
  else {
    local_b8[0] = *param_2;
    local_a8[0] = (longlong *)0x0;
    if (local_b8[0] != 0) {
      plVar4 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_2[2];
      }
      (**(code **)*plVar4)(plVar4,local_a8);
    }
    local_68[0] = (code *)0x0;
    local_78 = param_1;
    puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    local_58 = puVar3;
    *puVar3 = &PTR_LAB_14a7fea40;
    puVar3[2] = local_b8[0];
    puVar3[4] = 0;
    if (local_b8[0] != 0) {
      plVar4 = local_a8[0];
      if (local_a8[0] == (longlong *)0x0) {
        plVar4 = local_98;
      }
      (**(code **)*plVar4)(plVar4,puVar3 + 4);
    }
    *(undefined1 *)(puVar3 + 10) = local_78;
    if (puVar3 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_68[0] = FUN_14341a1f2;
    }
    FUN_1407461b0(*param_3,local_68);
    if (local_b8[0] != 0) {
      plVar4 = local_a8[0];
      if (local_a8[0] == (longlong *)0x0) {
        plVar4 = local_98;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479760fe FUN_1479760fe body=118 status=ok
// SIG undefined FUN_1479760fe(void)

void FUN_1479760fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != param_2) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    if (*(longlong *)(param_1 + 0x20) == param_2) {
      *(longlong *)(param_1 + 0x20) = lVar2;
    }
    lVar3 = *(longlong *)(param_2 + 0x38);
    *(longlong *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(longlong *)(param_2 + 0x38) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x30) = param_2;
    }
    if (lVar3 != lVar2) {
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 0x30) = lVar2;
      }
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x38) = lVar3;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014797616d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 147976174 FUN_147976174 body=2664 status=ok
// SIG undefined FUN_147976174(void)

undefined8 FUN_147976174(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 *local_430;
  undefined8 local_428;
  longlong local_420;
  longlong *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  longlong local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  int local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  longlong local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  uint local_378;
  int iStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  longlong *local_368;
  undefined8 local_360;
  undefined1 *local_358;
  uint local_350;
  int iStack_34c;
  undefined4 local_348;
  undefined4 local_344;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_428 = param_2;
  FUN_1400020e8(&local_3e8,L"All Cache Misses:\nSoundWave:\t, ChunkIndex\n",0x2a);
  local_3b8 = 0;
  local_3b0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3ac = 0xffffffff00000080;
  local_3a4 = 0;
  local_398 = 0;
  local_390 = 0;
  local_438 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_438 = 0;
  local_438[1] = 0;
  local_408 = (longlong *)0x0;
  lVar29 = **(longlong **)(param_1 + 0x158);
  local_430 = local_438;
  if (lVar29 != 0) {
    do {
      local_3f8 = *(undefined4 *)(lVar29 + 0x18);
      local_408 = *(longlong **)(lVar29 + 8);
      iStack_400 = *(int *)(lVar29 + 0x10);
      uStack_3fc = *(undefined4 *)(lVar29 + 0x14);
      lVar4 = *(longlong *)(param_1 + 0x158);
      *(longlong *)(param_1 + 0x158) = lVar29;
      *(undefined8 *)(lVar29 + 8) = 0;
      *(undefined8 *)(lVar29 + 0x10) = 0;
      *(undefined4 *)(lVar29 + 0x18) = 0;
      if (lVar4 != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&local_408,&local_368);
      iVar23 = (int)local_360 + -1;
      if ((int)local_360 == 0) {
        iVar23 = 0;
      }
      FUN_1400020e8(&local_3e8,local_368,iVar23);
      if (local_368 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(&local_3e8,&DAT_14a7f110e,3);
      iVar23 = iStack_400;
      FUN_144a83b10(&local_3e8,iStack_400);
      FUN_1400020e8(&local_3e8,&DAT_149e01f72,1);
      local_368 = local_408;
      local_360 = (longlong *)CONCAT44(local_360._4_4_,iVar23);
      uVar10 = (uint)((ulonglong)local_408 >> 0x10);
      uVar20 = (uint)local_408 & 0xffff;
      uVar10 = ((uint)local_408 << 0x10 | uVar20) + (int)((ulonglong)local_408 >> 0x20) +
               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar20 >> 4);
      piVar11 = (int *)FUN_1479886b4(&local_3d8,
                                     (uVar10 >> 2) + uVar10 * 0x40 + iVar23 + 0x9e3779b9 ^ uVar10,
                                     &local_368);
      *piVar11 = *piVar11 + 1;
      if (DAT_14c761330 != 0) {
        puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = (undefined4)local_408;
        *(undefined4 *)((longlong)puVar12 + 0xc) = local_408._4_4_;
        *(int *)(puVar12 + 2) = iStack_400;
        *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_3fc;
        *(undefined4 *)(puVar12 + 3) = local_3f8;
        if (puVar12 != (undefined8 *)0x0) {
          *local_438 = puVar12;
          local_438 = puVar12;
        }
      }
      lVar29 = **(longlong **)(param_1 + 0x158);
    } while (lVar29 != 0);
  }
  local_418 = (longlong *)0x0;
  uStack_410 = 0;
  local_388 = (longlong *)&DAT_100000000;
  uStack_380 = local_3c8;
  local_378 = 0xffffffff;
  iStack_374 = 0;
  local_370 = 0;
  iVar23 = 0;
  local_420 = param_1;
  if (local_3b0 != 0) {
    FUN_1449c0562(&local_388);
    iVar23 = local_3b0;
  }
  local_350 = local_378;
  iStack_34c = iStack_374;
  local_348 = local_370;
  local_344 = local_36c;
  local_360 = local_388;
  local_358 = uStack_380;
  local_368 = &local_3d8;
  if ((iStack_374 != iVar23) || (uStack_380 != local_3c8)) {
    do {
      uVar21 = uStack_410;
      lVar29 = *local_368;
      lVar13 = (longlong)iStack_34c;
      lVar4 = *(longlong *)(lVar29 + lVar13 * 0x18);
      uVar2 = *(undefined4 *)(lVar29 + 8 + lVar13 * 0x18);
      uVar3 = *(undefined4 *)(lVar29 + 0xc + lVar13 * 0x18);
      lVar29 = (longlong)(int)uStack_410;
      uVar10 = (int)uStack_410 + 1;
      uStack_410 = CONCAT44(uStack_410._4_4_,uVar10);
      if (uStack_410._4_4_ < uVar10) {
        FUN_143419afa(&local_418,uVar21 & 0xffffffff);
      }
      local_418[lVar29 * 2] = lVar4;
      *(undefined4 *)(local_418 + lVar29 * 2 + 1) = uVar2;
      *(undefined4 *)((longlong)local_418 + lVar29 * 0x10 + 0xc) = uVar3;
      local_350 = local_350 & ~local_360._4_4_;
      FUN_1449c0562(&local_360);
    } while (local_368 != &local_3d8 || (local_358 != local_3c8 || iStack_34c != iVar23));
  }
  plVar19 = local_418;
  iVar23 = (int)uStack_410;
  lVar29 = (longlong)(int)uStack_410;
  if (1 < lVar29) {
    memset(&local_358,0,0x2f0);
    local_368 = plVar19;
    local_360 = plVar19 + lVar29 * 2 + -2;
    fVar32 = logf((float)iVar23);
    local_358 = (undefined1 *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar32 + fVar32));
    pplVar14 = &local_368;
    do {
      plVar16 = *pplVar14;
      plVar18 = pplVar14[1];
      iVar23 = *(int *)(pplVar14 + 2);
      iVar26 = (int)((ulonglong)((longlong)plVar18 - (longlong)plVar16) >> 4);
      uVar10 = iVar26 + 1;
      plVar19 = plVar18;
      plVar28 = plVar16;
      if (iVar23 != 0) {
LAB_1479765cd:
        if (8 < (int)uVar10) {
          lVar29 = plVar16[(ulonglong)(uVar10 >> 1) * 2];
          lVar4 = (plVar16 + (ulonglong)(uVar10 >> 1) * 2)[1];
          lVar13 = plVar16[1];
          plVar16[(ulonglong)(uVar10 >> 1) * 2] = *plVar16;
          (plVar16 + (ulonglong)(uVar10 >> 1) * 2)[1] = lVar13;
          *plVar16 = lVar29;
          plVar16[1] = lVar4;
          plVar27 = plVar19 + 2;
          plVar15 = plVar16;
          do {
            plVar9 = plVar15 + 2;
            plVar22 = plVar15 + 2;
            do {
              plVar30 = plVar22;
              plVar15 = plVar9;
              if (plVar19 < plVar15) break;
              plVar9 = plVar15 + 2;
              plVar22 = plVar30 + 2;
            } while (*(int *)((longlong)plVar16 + 0xc) <= *(int *)((longlong)plVar15 + 0xc));
            plVar9 = plVar27 + -4;
            do {
              plVar22 = plVar27;
              plVar17 = plVar9;
              plVar27 = plVar22 + -2;
              if (plVar27 <= plVar16) break;
              plVar9 = plVar17 + -2;
            } while (*(int *)((longlong)plVar22 + -4) <= *(int *)((longlong)plVar16 + 0xc));
            if (plVar27 < plVar15) goto LAB_14797667b;
            lVar29 = *plVar15;
            lVar4 = plVar15[1];
            lVar13 = plVar22[-1];
            *plVar15 = *plVar27;
            plVar15[1] = lVar13;
            *plVar27 = lVar29;
            plVar22[-1] = lVar4;
          } while( true );
        }
        for (; plVar18 = plVar16, plVar28 = plVar16, plVar16 < plVar19; plVar19 = plVar19 + -2) {
          while (plVar27 = plVar18, plVar18 = plVar28 + 2, plVar18 <= plVar19) {
            piVar11 = (int *)((longlong)plVar28 + 0x1c);
            plVar28 = plVar18;
            if (*(int *)((longlong)plVar27 + 0xc) <= *piVar11) {
              plVar18 = plVar27;
            }
          }
          local_388 = (longlong *)*plVar27;
          uStack_380 = (undefined1 *)plVar27[1];
          plVar18 = local_388;
          puVar8 = uStack_380;
          lVar29 = plVar19[1];
          *plVar27 = *plVar19;
          plVar27[1] = lVar29;
          local_388._4_4_ = (undefined4)((ulonglong)local_388 >> 0x20);
          uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
          *(undefined4 *)plVar19 = (undefined4)local_388;
          *(undefined4 *)((longlong)plVar19 + 4) = local_388._4_4_;
          *(int *)(plVar19 + 1) = (int)uStack_380;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_380._4_4_;
          local_388 = plVar18;
          uStack_380 = puVar8;
        }
        goto LAB_147976940;
      }
LAB_147976725:
      if (uVar10 != 0) {
        iVar23 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar23;
joined_r0x00014797674c:
        do {
          iVar25 = iVar23 * 2 + 1;
          if (iVar25 < (int)uVar10) {
            iVar24 = iVar23 * 2 + 2;
            if ((iVar24 < (int)uVar10) &&
               (*(int *)((longlong)plVar16 + (longlong)iVar24 * 0x10 + 0xc) <=
                *(int *)((longlong)plVar16 + (longlong)iVar25 * 0x10 + 0xc))) {
              iVar25 = iVar24;
            }
            if (*(int *)((longlong)plVar16 + (longlong)iVar25 * 0x10 + 0xc) <
                *(int *)((longlong)plVar16 + (longlong)iVar23 * 0x10 + 0xc)) {
              plVar18 = plVar16 + (longlong)iVar23 * 2;
              plVar28 = plVar16 + (longlong)iVar25 * 2;
              local_388 = (longlong *)*plVar18;
              uStack_380 = (undefined1 *)plVar18[1];
              plVar19 = local_388;
              puVar8 = uStack_380;
              lVar29 = plVar28[1];
              *plVar18 = *plVar28;
              plVar18[1] = lVar29;
              local_388._4_4_ = (undefined4)((ulonglong)local_388 >> 0x20);
              uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
              *(undefined4 *)plVar28 = (undefined4)local_388;
              *(undefined4 *)((longlong)plVar28 + 4) = local_388._4_4_;
              *(int *)(plVar28 + 1) = (int)uStack_380;
              *(undefined4 *)((longlong)plVar28 + 0xc) = uStack_380._4_4_;
              iVar23 = iVar25;
              local_388 = plVar19;
              uStack_380 = puVar8;
              goto joined_r0x00014797674c;
            }
          }
          bVar31 = iVar26 != 0;
          iVar23 = iVar26 + -1;
          iVar26 = iVar23;
        } while (bVar31);
        if (1 < (int)uVar10) {
          uVar21 = (ulonglong)uVar10 - 1;
          local_388 = (longlong *)*plVar16;
          uStack_380 = (undefined1 *)plVar16[1];
          plVar18 = local_388;
          puVar8 = uStack_380;
          lVar29 = (plVar16 + uVar21 * 2)[1];
          *plVar16 = plVar16[uVar21 * 2];
          plVar16[1] = lVar29;
          local_388._4_4_ = (undefined4)((ulonglong)local_388 >> 0x20);
          uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
          plVar19 = plVar16 + uVar21 * 2;
          *(undefined4 *)plVar19 = (undefined4)local_388;
          *(undefined4 *)((longlong)plVar19 + 4) = local_388._4_4_;
          *(int *)(plVar19 + 1) = (int)uStack_380;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_380._4_4_;
          local_388 = plVar18;
          uStack_380 = puVar8;
          if (uVar10 != 2) {
            do {
              iVar23 = 0;
              iVar25 = 1;
              iVar26 = 0;
              do {
                iVar23 = iVar23 + 2;
                iVar24 = iVar25;
                if (((longlong)iVar23 < (longlong)uVar21) &&
                   (*(int *)((longlong)plVar16 + (longlong)iVar23 * 0x10 + 0xc) <=
                    *(int *)((longlong)plVar16 + (longlong)iVar25 * 0x10 + 0xc))) {
                  iVar24 = iVar23;
                }
                if (*(int *)((longlong)plVar16 + (longlong)iVar26 * 0x10 + 0xc) <=
                    *(int *)((longlong)plVar16 + (longlong)iVar24 * 0x10 + 0xc)) break;
                plVar19 = plVar16 + (longlong)iVar26 * 2;
                plVar18 = plVar16 + (longlong)iVar24 * 2;
                lVar29 = *plVar19;
                lVar4 = plVar19[1];
                lVar13 = plVar18[1];
                *plVar19 = *plVar18;
                plVar19[1] = lVar13;
                *plVar18 = lVar29;
                plVar18[1] = lVar4;
                iVar23 = iVar24 * 2;
                iVar25 = iVar24 * 2 + 1;
                iVar26 = iVar24;
              } while ((longlong)iVar25 < (longlong)uVar21);
              uVar1 = uVar21 - 1;
              local_388 = (longlong *)*plVar16;
              uStack_380 = (undefined1 *)plVar16[1];
              plVar18 = local_388;
              puVar8 = uStack_380;
              lVar29 = (plVar16 + uVar1 * 2)[1];
              *plVar16 = plVar16[uVar1 * 2];
              plVar16[1] = lVar29;
              local_388._4_4_ = (undefined4)((ulonglong)local_388 >> 0x20);
              uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
              plVar19 = plVar16 + uVar1 * 2;
              *(undefined4 *)plVar19 = (undefined4)local_388;
              *(undefined4 *)((longlong)plVar19 + 4) = local_388._4_4_;
              *(int *)(plVar19 + 1) = (int)uStack_380;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_380._4_4_;
              bVar31 = 2 < uVar21;
              uVar21 = uVar1;
              local_388 = plVar18;
              uStack_380 = puVar8;
            } while (bVar31);
          }
        }
      }
LAB_147976940:
      pplVar14 = pplVar14 + -3;
    } while (&local_368 <= pplVar14);
  }
  FUN_140056680(&local_368,L"Most Missed Chunks:\n");
  FUN_1400020e8(&local_368,L"Name:\t, Index:\t, Miss Count:\n",0x1d);
  if ((longlong)(int)uStack_410 != 0) {
    plVar16 = local_418 + (longlong)(int)uStack_410 * 2;
    plVar19 = local_418;
    do {
      FUN_1400021e4(plVar19,&local_388);
      iVar23 = (int)uStack_380 + -1;
      if ((int)uStack_380 == 0) {
        iVar23 = 0;
      }
      FUN_1400020e8(&local_368,local_388,iVar23);
      if (local_388 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(&local_368,&DAT_14a7f110e,3);
      FUN_144a83b10(&local_368,(int)plVar19[1]);
      FUN_1400020e8(&local_368,&DAT_14a7f110e,3);
      FUN_144a83b10(&local_368,*(undefined4 *)((longlong)plVar19 + 0xc));
      FUN_1400020e8(&local_368,&DAT_149e01f72,1);
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar16);
  }
  lVar29 = local_420;
  uVar7 = local_428;
  puVar12 = local_430;
  if (DAT_14c761330 != 0) {
    puVar5 = (undefined8 *)*local_430;
    while (puVar6 = puVar5, puVar6 != (undefined8 *)0x0) {
      local_3f8 = *(undefined4 *)(puVar6 + 3);
      local_408 = (longlong *)puVar6[1];
      iStack_400 = *(int *)(puVar6 + 2);
      uStack_3fc = *(undefined4 *)((longlong)puVar6 + 0x14);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      if (puVar12 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar12 = 0;
      *(undefined4 *)(puVar12 + 1) = (undefined4)local_408;
      *(undefined4 *)((longlong)puVar12 + 0xc) = local_408._4_4_;
      *(int *)(puVar12 + 2) = iStack_400;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_3fc;
      *(undefined4 *)(puVar12 + 3) = local_3f8;
      if (puVar12 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)(lVar29 + 0x150);
        *(undefined8 **)(lVar29 + 0x150) = puVar12;
        *puVar5 = puVar12;
      }
      puVar12 = puVar6;
      puVar5 = (undefined8 *)*puVar6;
    }
  }
  FUN_1449b8608(&local_388,&local_368,&DAT_149e01f72);
  FUN_144a7dea0(uVar7,&local_388,&local_3e8);
  if (local_388 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_368 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_418 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  while (puVar12 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar12;
    FUN_1400020a8(puVar12);
    puVar12 = puVar5;
  }
  local_390 = 0;
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  FUN_1479839ce(&local_3d8);
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14797667b:
  local_388 = (longlong *)*plVar16;
  uStack_380 = (undefined1 *)plVar16[1];
  plVar9 = local_388;
  puVar8 = uStack_380;
  lVar29 = plVar22[-1];
  *plVar16 = *plVar27;
  plVar16[1] = lVar29;
  local_388._4_4_ = (undefined4)((ulonglong)local_388 >> 0x20);
  uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
  *(undefined4 *)plVar27 = (undefined4)local_388;
  *(undefined4 *)((longlong)plVar22 + -0xc) = local_388._4_4_;
  *(int *)(plVar22 + -1) = (int)uStack_380;
  *(undefined4 *)((longlong)plVar22 + -4) = uStack_380._4_4_;
  iVar23 = iVar23 + -1;
  plVar22 = plVar22 + -4;
  local_388 = plVar9;
  uStack_380 = puVar8;
  if ((longlong)plVar17 - (longlong)plVar28 < (longlong)plVar18 - (longlong)plVar30) {
    if (plVar15 < plVar19) {
      *pplVar14 = plVar15;
      pplVar14[1] = plVar19;
      *(int *)(pplVar14 + 2) = iVar23;
      pplVar14 = pplVar14 + 3;
    }
    plVar18 = plVar17;
    plVar30 = plVar16;
    if (plVar27 <= plVar16 + 2) goto LAB_147976940;
  }
  else {
    if (plVar16 + 2 < plVar27) {
      *pplVar14 = plVar16;
      pplVar14[1] = plVar22;
      *(int *)(pplVar14 + 2) = iVar23;
      pplVar14 = pplVar14 + 3;
    }
    plVar16 = plVar15;
    plVar22 = plVar19;
    plVar18 = plVar19;
    if (plVar19 <= plVar15) goto LAB_147976940;
  }
  iVar26 = (int)((ulonglong)((longlong)plVar18 - (longlong)plVar30) >> 4);
  uVar10 = iVar26 + 1;
  plVar19 = plVar22;
  plVar28 = plVar30;
  if (iVar23 == 0) goto LAB_147976725;
  goto LAB_1479765cd;
}



// FUNCTION 147976bde FUN_147976bde body=471 status=ok
// SIG undefined FUN_147976bde(void)

int FUN_147976bde(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  wchar_t *local_88;
  undefined4 local_80;
  int local_78;
  int iStack_74;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_58 = L"Stream Caches:";
  local_50 = 0xe;
  local_98 = &DAT_149e1e308;
  local_a0 = &DAT_149e1e2f8;
  FUN_147d8e230(param_4,(double)param_5,(double)param_6);
  param_6 = param_6 + 0xc;
  iVar7 = param_6;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x170;
    do {
      FUN_140002266(&local_78,L"Cache %d",0);
      puVar4 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar4 = (undefined2 *)CONCAT44(iStack_74,local_78);
      }
      FUN_140056680(&local_68,puVar4);
      if (CONCAT44(iStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
      uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
      local_88 = L"";
      if (local_60 != 0) {
        local_88 = local_68;
      }
      uVar2 = 0;
      if (local_88 != (wchar_t *)0x0) {
        sVar3 = wcslen(local_88);
        uVar2 = (int)sVar3;
      }
      local_98 = &DAT_149e1e308;
      local_a0 = &DAT_149e1e2f8;
      local_a8 = uVar1;
      local_80 = uVar2;
      FUN_147d8e230(param_4,(double)param_5,(double)param_6,&local_88);
      param_6 = param_6 + 0xc;
      local_a8 = CONCAT44(local_a8._4_4_,param_6);
      FUN_14340feee(lVar6,&local_78,param_4,param_5);
      param_5 = param_5 + local_78;
      if (iVar7 < iStack_74) {
        iVar7 = iStack_74;
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x170;
      lVar5 = lVar5 + -0x170;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7 + param_6;
}



// FUNCTION 147976db6 FUN_147976db6 body=165 status=ok
// SIG undefined FUN_147976db6(void)

undefined8 * FUN_147976db6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x170;
    do {
      FUN_143411caa(lVar2,&local_40);
      iVar1 = local_38 + -1;
      if (local_38 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_40,iVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x170;
      lVar3 = lVar3 + -0x170;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147976e5c FUN_147976e5c body=2155 status=ok
// SIG undefined FUN_147976e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147976e5c(longlong param_1,char param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  undefined1 in_XMM1 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  longlong lVar47;
  undefined1 auVar48 [16];
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar66 [16];
  
  auVar31 = _DAT_149931e80;
  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 == '\0') {
    if (iVar1 != 0) {
      uVar32 = (longlong)iVar1 * 0x170 - 0x170U >> 4;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar32;
      auVar36._8_4_ = SUB164(auVar35 * ZEXT816(0x1642c8590b21642d),8);
      auVar36._0_8_ = SUB168(auVar35 * ZEXT816(0x1642c8590b21642d),8);
      auVar36._12_4_ = (int)(uVar32 / 0xb80000000);
      auVar37._0_8_ = uVar32 / 0x17;
      auVar37._8_8_ = auVar36._8_8_ >> 1;
      puVar34 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x16f0);
      uVar33 = 0;
      auVar35 = pmovsxbq(in_XMM1,0xf0e);
      auVar36 = pmovsxbq(in_XMM2,0xd0c);
      auVar38 = pmovsxbq(in_XMM3,0xb0a);
      auVar39 = pmovsxbq(in_XMM4,0x908);
      auVar40 = pmovsxbq(in_XMM5,0x706);
      auVar41 = pmovsxbq(unaff_XMM6,0x504);
      auVar42 = pmovsxbq(unaff_XMM7,0x302);
      auVar43 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar50._8_4_ = (int)uVar33;
        auVar50._0_8_ = uVar33;
        auVar50._12_4_ = (int)(uVar33 >> 0x20);
        auVar52 = auVar37 | auVar31;
        auVar48 = (auVar50 | auVar43) ^ auVar31;
        lVar47 = auVar52._0_8_;
        auVar59._0_8_ = -(ulonglong)(lVar47 < auVar48._0_8_);
        lVar49 = auVar52._8_8_;
        auVar59._8_8_ = -(ulonglong)(lVar49 < auVar48._8_8_);
        auVar66 = pshuflw(unaff_XMM14,auVar59,0xe8);
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar66 ^ auVar48,auVar66 ^ auVar48);
        if ((auVar48._0_4_ & 1) != 0) {
          puVar34[-0x1590] = 0;
        }
        auVar59 = packssdw(auVar59,auVar59);
        auVar66._8_4_ = 0xffffffff;
        auVar66._0_8_ = 0xffffffffffffffff;
        auVar66._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar66,auVar59 ^ auVar66);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[1] & 1) != 0) {
          puVar34[-0x1420] = 0;
        }
        auVar59 = (auVar50 | auVar42) ^ auVar31;
        auVar60._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar60._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = packssdw(auVar48,auVar60);
        auVar18._8_4_ = 0xffffffff;
        auVar18._0_8_ = 0xffffffffffffffff;
        auVar18._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar18,auVar48 ^ auVar18);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[2] & 1) != 0) {
          puVar34[-0x12b0] = 0;
        }
        auVar59 = pshufhw(auVar60,auVar60,0x84);
        auVar19._8_4_ = 0xffffffff;
        auVar19._0_8_ = 0xffffffffffffffff;
        auVar19._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar19,auVar59 ^ auVar19);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[3] & 1) != 0) {
          puVar34[-0x1140] = 0;
        }
        auVar59 = (auVar50 | auVar41) ^ auVar31;
        auVar61._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar61._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = pshuflw(auVar48,auVar61,0xe8);
        auVar20._8_4_ = 0xffffffff;
        auVar20._0_8_ = 0xffffffffffffffff;
        auVar20._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar20,auVar48 ^ auVar20);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[4] & 1) != 0) {
          puVar34[-0xfd0] = 0;
        }
        auVar59 = packssdw(auVar61,auVar61);
        auVar21._8_4_ = 0xffffffff;
        auVar21._0_8_ = 0xffffffffffffffff;
        auVar21._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar21,auVar59 ^ auVar21);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[5] & 1) != 0) {
          puVar34[-0xe60] = 0;
        }
        auVar59 = (auVar50 | auVar40) ^ auVar31;
        auVar62._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar62._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = packssdw(auVar48,auVar62);
        auVar22._8_4_ = 0xffffffff;
        auVar22._0_8_ = 0xffffffffffffffff;
        auVar22._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar22,auVar48 ^ auVar22);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[6] & 1) != 0) {
          puVar34[-0xcf0] = 0;
        }
        auVar59 = pshufhw(auVar62,auVar62,0x84);
        auVar23._8_4_ = 0xffffffff;
        auVar23._0_8_ = 0xffffffffffffffff;
        auVar23._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar23,auVar59 ^ auVar23);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[7] & 1) != 0) {
          puVar34[-0xb80] = 0;
        }
        auVar59 = (auVar50 | auVar39) ^ auVar31;
        auVar63._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar63._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = pshuflw(auVar48,auVar63,0xe8);
        auVar24._8_4_ = 0xffffffff;
        auVar24._0_8_ = 0xffffffffffffffff;
        auVar24._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar24,auVar48 ^ auVar24);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[8] & 1) != 0) {
          puVar34[-0xa10] = 0;
        }
        auVar59 = packssdw(auVar63,auVar63);
        auVar25._8_4_ = 0xffffffff;
        auVar25._0_8_ = 0xffffffffffffffff;
        auVar25._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar25,auVar59 ^ auVar25);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[9] & 1) != 0) {
          puVar34[-0x8a0] = 0;
        }
        auVar59 = (auVar50 | auVar38) ^ auVar31;
        auVar64._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar64._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = packssdw(auVar48,auVar64);
        auVar26._8_4_ = 0xffffffff;
        auVar26._0_8_ = 0xffffffffffffffff;
        auVar26._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar26,auVar48 ^ auVar26);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[10] & 1) != 0) {
          puVar34[-0x730] = 0;
        }
        auVar59 = pshufhw(auVar64,auVar64,0x84);
        auVar27._8_4_ = 0xffffffff;
        auVar27._0_8_ = 0xffffffffffffffff;
        auVar27._12_4_ = 0xffffffff;
        auVar59 = packssdw(auVar59 ^ auVar27,auVar59 ^ auVar27);
        auVar59 = packsswb(auVar59,auVar59);
        if ((auVar59[0xb] & 1) != 0) {
          puVar34[-0x5c0] = 0;
        }
        auVar59 = (auVar50 | auVar36) ^ auVar31;
        auVar65._0_8_ = -(ulonglong)(lVar47 < auVar59._0_8_);
        auVar65._8_8_ = -(ulonglong)(lVar49 < auVar59._8_8_);
        auVar48 = pshuflw(auVar48,auVar65,0xe8);
        auVar28._8_4_ = 0xffffffff;
        auVar28._0_8_ = 0xffffffffffffffff;
        auVar28._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar28,auVar48 ^ auVar28);
        unaff_XMM14 = packsswb(auVar48,auVar48);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar34[-0x450] = 0;
        }
        auVar48 = packssdw(auVar65,auVar65);
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
        auVar29._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar29,auVar48 ^ auVar29);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xd] & 1) != 0) {
          puVar34[-0x2e0] = 0;
        }
        auVar48 = (auVar50 | auVar35) ^ auVar31;
        auVar46._0_8_ = -(ulonglong)(lVar47 < auVar48._0_8_);
        auVar46._8_8_ = -(ulonglong)(lVar49 < auVar48._8_8_);
        auVar48 = packssdw(auVar52,auVar46);
        auVar52._8_4_ = 0xffffffff;
        auVar52._0_8_ = 0xffffffffffffffff;
        auVar52._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar52,auVar48 ^ auVar52);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xe] & 1) != 0) {
          puVar34[-0x170] = 0;
        }
        auVar48 = pshufhw(auVar46,auVar46,0x84);
        auVar30._8_4_ = 0xffffffff;
        auVar30._0_8_ = 0xffffffffffffffff;
        auVar30._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar30,auVar48 ^ auVar30);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xf] & 1) != 0) {
          *puVar34 = 0;
        }
        uVar33 = uVar33 + 0x10;
        puVar34 = puVar34 + 0x1700;
      } while ((uVar32 / 0x17 + 0x10 & 0xfffffffffffffff0) != uVar33);
    }
  }
  else if (iVar1 != 0) {
    uVar32 = (longlong)iVar1 * 0x170 - 0x170U >> 4;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar32;
    auVar39._8_4_ = SUB164(auVar38 * ZEXT816(0x1642c8590b21642d),8);
    auVar39._0_8_ = SUB168(auVar38 * ZEXT816(0x1642c8590b21642d),8);
    auVar39._12_4_ = (int)(uVar32 / 0xb80000000);
    auVar40._0_8_ = uVar32 / 0x17;
    auVar40._8_8_ = auVar39._8_8_ >> 1;
    puVar34 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x16f0);
    uVar33 = 0;
    auVar35 = pmovsxbq(in_XMM1,0xf0e);
    auVar36 = pmovsxbq(in_XMM2,0xd0c);
    auVar37 = pmovsxbq(in_XMM3,0xb0a);
    auVar38 = pmovsxbq(in_XMM4,0x908);
    auVar39 = pmovsxbq(in_XMM5,0x706);
    auVar41 = pmovsxbq(unaff_XMM6,0x504);
    auVar42 = pmovsxbq(unaff_XMM7,0x302);
    auVar43 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar44._8_4_ = (int)uVar33;
      auVar44._0_8_ = uVar33;
      auVar44._12_4_ = (int)(uVar33 >> 0x20);
      auVar48 = auVar40 | auVar31;
      auVar50 = (auVar44 | auVar43) ^ auVar31;
      lVar47 = auVar48._0_8_;
      auVar51._0_8_ = -(ulonglong)(lVar47 < auVar50._0_8_);
      lVar49 = auVar48._8_8_;
      auVar51._8_8_ = -(ulonglong)(lVar49 < auVar50._8_8_);
      auVar50 = pshuflw(unaff_XMM14,auVar51,0xe8);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar2,auVar50 ^ auVar2);
      if ((auVar50._0_4_ & 1) != 0) {
        puVar34[-0x1590] = 1;
      }
      auVar52 = packssdw(auVar51,auVar51);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar3,auVar52 ^ auVar3);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[1] & 1) != 0) {
        puVar34[-0x1420] = 1;
      }
      auVar52 = (auVar44 | auVar42) ^ auVar31;
      auVar53._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar53._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = packssdw(auVar50,auVar53);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar4,auVar50 ^ auVar4);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[2] & 1) != 0) {
        puVar34[-0x12b0] = 1;
      }
      auVar52 = pshufhw(auVar53,auVar53,0x84);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar5,auVar52 ^ auVar5);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[3] & 1) != 0) {
        puVar34[-0x1140] = 1;
      }
      auVar52 = (auVar44 | auVar41) ^ auVar31;
      auVar54._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar54._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = pshuflw(auVar50,auVar54,0xe8);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar6,auVar50 ^ auVar6);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[4] & 1) != 0) {
        puVar34[-0xfd0] = 1;
      }
      auVar52 = packssdw(auVar54,auVar54);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar7,auVar52 ^ auVar7);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[5] & 1) != 0) {
        puVar34[-0xe60] = 1;
      }
      auVar52 = (auVar44 | auVar39) ^ auVar31;
      auVar55._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar55._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = packssdw(auVar50,auVar55);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar8,auVar50 ^ auVar8);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[6] & 1) != 0) {
        puVar34[-0xcf0] = 1;
      }
      auVar52 = pshufhw(auVar55,auVar55,0x84);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar9,auVar52 ^ auVar9);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[7] & 1) != 0) {
        puVar34[-0xb80] = 1;
      }
      auVar52 = (auVar44 | auVar38) ^ auVar31;
      auVar56._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar56._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = pshuflw(auVar50,auVar56,0xe8);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar10,auVar50 ^ auVar10);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[8] & 1) != 0) {
        puVar34[-0xa10] = 1;
      }
      auVar52 = packssdw(auVar56,auVar56);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar11,auVar52 ^ auVar11);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[9] & 1) != 0) {
        puVar34[-0x8a0] = 1;
      }
      auVar52 = (auVar44 | auVar37) ^ auVar31;
      auVar57._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar57._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = packssdw(auVar50,auVar57);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar12,auVar50 ^ auVar12);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[10] & 1) != 0) {
        puVar34[-0x730] = 1;
      }
      auVar52 = pshufhw(auVar57,auVar57,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar52 = packssdw(auVar52 ^ auVar13,auVar52 ^ auVar13);
      auVar52 = packsswb(auVar52,auVar52);
      if ((auVar52[0xb] & 1) != 0) {
        puVar34[-0x5c0] = 1;
      }
      auVar52 = (auVar44 | auVar36) ^ auVar31;
      auVar58._0_8_ = -(ulonglong)(lVar47 < auVar52._0_8_);
      auVar58._8_8_ = -(ulonglong)(lVar49 < auVar52._8_8_);
      auVar50 = pshuflw(auVar50,auVar58,0xe8);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar14,auVar50 ^ auVar14);
      unaff_XMM14 = packsswb(auVar50,auVar50);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar34[-0x450] = 1;
      }
      auVar50 = packssdw(auVar58,auVar58);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar50 = packssdw(auVar50 ^ auVar15,auVar50 ^ auVar15);
      auVar50 = packsswb(auVar50,auVar50);
      if ((auVar50[0xd] & 1) != 0) {
        puVar34[-0x2e0] = 1;
      }
      auVar50 = (auVar44 | auVar35) ^ auVar31;
      auVar45._0_8_ = -(ulonglong)(lVar47 < auVar50._0_8_);
      auVar45._8_8_ = -(ulonglong)(lVar49 < auVar50._8_8_);
      auVar48 = packssdw(auVar48,auVar45);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar16,auVar48 ^ auVar16);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[0xe] & 1) != 0) {
        puVar34[-0x170] = 1;
      }
      auVar48 = pshufhw(auVar45,auVar45,0x84);
      auVar17._8_4_ = 0xffffffff;
      auVar17._0_8_ = 0xffffffffffffffff;
      auVar17._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar17,auVar48 ^ auVar17);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[0xf] & 1) != 0) {
        *puVar34 = 1;
      }
      uVar33 = uVar33 + 0x10;
      puVar34 = puVar34 + 0x1700;
    } while ((uVar32 / 0x17 + 0x10 & 0xfffffffffffffff0) != uVar33);
  }
  return;
}



// FUNCTION 1479776c7 FUN_1479776c7 body=100 status=ok
// SIG undefined FUN_1479776c7(void)

void FUN_1479776c7(longlong *param_1)

{
  char cVar1;
  
  if ((DAT_14c844290 & 1) == 0) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 == '\0') {
    if (DAT_14cace510 == '\x01') {
      FUN_140457ffc(&DAT_14cb10950,&DAT_14cace4c8);
      FUN_1405f3418(&DAT_14cace4c8);
      DAT_14cace510 = '\0';
    }
    FUN_143412764();
    return;
  }
  FUN_14797772c();
  return;
}



// FUNCTION 14797772c FUN_14797772c body=123 status=ok
// SIG undefined FUN_14797772c(void)

void FUN_14797772c(void)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((DAT_14cace510 == '\0') && (DAT_14c761358 == '\x01')) {
    if (DAT_14cb0d2b0 != 0) {
      lVar1 = FUN_141225936(DAT_14cb0d2b0,0);
      if (lVar1 != 0) {
        FUN_1402eb876(&DAT_14cace4c8,*(undefined8 *)(lVar1 + 0x30));
      }
    }
    FUN_147983bc8(local_10);
    DAT_14cace510 = '\x01';
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479777a8 FUN_1479777a8 body=207 status=ok
// SIG undefined FUN_1479777a8(void)

void FUN_1479777a8(void)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong **local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((DAT_14c844290 & 1) != 0) &&
     (iVar1 = DAT_14cace5a0 + 1, bVar2 = DAT_14cace5a0 == 0, DAT_14cace5a0 = iVar1, bVar2)) {
    FUN_144a85b52(&local_60,0);
    local_48 = 0;
    local_38 = &PTR_LAB_14a7fea60;
    local_58 = FUN_14341a2c0;
    local_30 = &local_60;
    FUN_1415826cc();
    if (((DAT_14c844290 & 1) != 0) && ((DAT_14c844291 & 1) == 0)) {
      FUN_143412e42(&DAT_14cace5a8);
    }
    (**(code **)(*local_60 + 0x20))(local_60,0xffffffff,0);
    FUN_144a75412(&local_60);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147977878 FUN_147977878 body=195 status=ok
// SIG undefined FUN_147977878(void)

ulonglong FUN_147977878(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(byte *)(param_1 + 0x198) & 2) != 0) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(param_1 + 0x58);
    }
    cVar1 = FUN_1478b3d3e(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(param_1 + 0x198) & 4) == 0) {
        fVar4 = 1.0;
      }
      else {
        if ((*(byte *)(param_1 + 0x388) & 1) == 0) goto LAB_147977899;
        fVar4 = *(float *)(param_1 + 0x29c);
      }
      if (fVar4 <= 0.0001) {
        fVar4 = 0.0001;
      }
      local_38 = *(undefined8 *)(param_1 + 0x250);
      uStack_30 = *(undefined8 *)(param_1 + 600);
      local_28 = *(undefined8 *)(param_1 + 0x260);
      uVar2 = FUN_1479627d2(param_2,&local_38,*(float *)(param_1 + 0x22c) / fVar4);
      uVar3 = (ulonglong)uVar2;
    }
  }
LAB_147977899:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797793c FUN_14797793c body=172 status=ok
// SIG undefined FUN_14797793c(void)

void FUN_14797793c(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(lVar1 + 0x250);
  uStack_20 = *(undefined8 *)(lVar1 + 600);
  local_18 = *(undefined8 *)(lVar1 + 0x260);
  fVar2 = (float)FUN_14795bea2(*(undefined8 *)(lVar1 + 0x58));
  fVar3 = DAT_14c761360;
  if (DAT_14c761360 <= 1.0) {
    fVar3 = 1.0;
  }
  fVar3 = (fVar2 - *(float *)(*(longlong *)(param_1 + 0x10) + 0x22c)) / fVar3;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 8) = (DAT_14c76136c - DAT_14c761368) * fVar3 + DAT_14c761368;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479779ea FUN_1479779ea body=184 status=ok
// SIG undefined FUN_1479779ea(void)

void FUN_1479779ea(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined1 local_138 [264];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (((*(byte *)(lVar1 + 0x198) & 4) != 0) && ((*(byte *)(lVar1 + 0x388) & 1) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    uVar3 = FUN_147962b80(uVar2,lVar1 + 0x230);
    local_148 = *(longlong *)(param_1 + 0x10) + 0x2c8;
    FUN_14795db18(local_138,uVar2,uVar3,*(longlong *)(param_1 + 0x10) + 0x230);
    FUN_1478b692c(*(undefined8 *)(param_1 + 0x10),param_2,local_138,0);
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147977aa4 FUN_147977aa4 body=59 status=ok
// SIG undefined FUN_147977aa4(void)

bool FUN_147977aa4(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_2 + 0x30) - *(double *)(param_1 + 0x30);
  return DAT_14c761364 * DAT_14c761364 < (float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
}



// FUNCTION 147977b02 FUN_147977b02 body=209 status=ok
// SIG undefined FUN_147977b02(void)

void FUN_147977b02(longlong param_1,longlong param_2)

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
  if ((local_1c != 0) != (bool)((byte)*(uint *)(param_1 + 0x3cc) & 1)) {
    *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x3cc) & 0xfffffffe | (uint)(local_1c != 0);
    if (local_1c == 0) {
      FUN_1434139f2(param_1);
    }
    else {
      FUN_143413890();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147977bd4 FUN_147977bd4 body=235 status=ok
// SIG undefined FUN_147977bd4(void)

void FUN_147977bd4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44[0] = 0;
  local_40 = 0x3f0000003f800000;
  uStack_38 = 0x3f000000469c4000;
  local_30 = 0x3f0000003f800000;
  uStack_28 = 0x3f000000469c4000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  puVar9 = (undefined4 *)local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar8 = FUN_1479784ac(puVar9,(undefined4 *)(param_1 + 0x3f0));
  if (cVar8 == '\0') {
    *(undefined4 *)(param_1 + 0x410) = puVar9[8];
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    uVar5 = puVar9[5];
    uVar6 = puVar9[6];
    uVar7 = puVar9[7];
    *(undefined4 *)(param_1 + 0x400) = puVar9[4];
    *(undefined4 *)(param_1 + 0x404) = uVar5;
    *(undefined4 *)(param_1 + 0x408) = uVar6;
    *(undefined4 *)(param_1 + 0x40c) = uVar7;
    *(undefined4 *)(param_1 + 0x3f0) = uVar1;
    *(undefined4 *)(param_1 + 0x3f4) = uVar2;
    *(undefined4 *)(param_1 + 0x3f8) = uVar3;
    *(undefined4 *)(param_1 + 0x3fc) = uVar4;
    if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
      FUN_143413b04(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147977cc0 FUN_147977cc0 body=156 status=ok
// SIG undefined FUN_147977cc0(void)

void FUN_147977cc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147977d5e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147977d5e FUN_147977d5e body=1057 status=ok
// SIG undefined FUN_147977d5e(void)

void FUN_147977d5e(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((*(float *)(param_1 + 0x3c8) != param_2) || (NAN(*(float *)(param_1 + 0x3c8)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x3c8) = param_2;
    lVar4 = FUN_1447210f0();
    if (lVar4 != 0) {
      iVar13 = *(int *)(lVar4 + 0x6c0);
      if (1 < (longlong)iVar13) {
        lVar4 = *(longlong *)(lVar4 + 0x6b8);
        memset(local_338,0,0x2f0);
        local_340 = lVar4 + (longlong)iVar13 * 8 + -8;
        local_348 = lVar4;
        fVar24 = logf((float)iVar13);
        local_338[0] = (int)(longlong)(fVar24 + fVar24);
        plVar5 = &local_348;
        do {
          plVar6 = (longlong *)*plVar5;
          plVar7 = (longlong *)plVar5[1];
          iVar13 = (int)plVar5[2];
          iVar9 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar6) >> 3);
          uVar18 = (ulonglong)(iVar9 + 1);
          plVar11 = plVar7;
          plVar21 = plVar6;
          if (iVar13 != 0) {
LAB_147977e35:
            plVar8 = plVar6;
            if (8 < (int)(uint)uVar18) {
              uVar17 = (uint)uVar18 >> 1;
              lVar4 = plVar8[uVar17];
              plVar8[uVar17] = *plVar8;
              *plVar8 = lVar4;
              plVar19 = plVar11 + 1;
              plVar6 = plVar8;
              do {
                plVar2 = plVar6 + 1;
                plVar12 = plVar6 + 1;
                do {
                  plVar22 = plVar12;
                  plVar6 = plVar2;
                  if (plVar11 < plVar6) break;
                  plVar2 = plVar6 + 1;
                  plVar12 = plVar22 + 1;
                } while (*(float *)(*plVar8 + 0x3c8) < *(float *)(*plVar6 + 0x3c8) ||
                         *(float *)(*plVar8 + 0x3c8) == *(float *)(*plVar6 + 0x3c8));
                plVar2 = plVar19 + -2;
                do {
                  plVar12 = plVar19;
                  plVar20 = plVar2;
                  plVar19 = plVar12 + -1;
                  if (plVar19 <= plVar8) break;
                  plVar2 = plVar20 + -1;
                } while (*(float *)(*plVar19 + 0x3c8) < *(float *)(*plVar8 + 0x3c8) ||
                         *(float *)(*plVar19 + 0x3c8) == *(float *)(*plVar8 + 0x3c8));
                if (plVar19 < plVar6) goto LAB_147977ed7;
                lVar4 = *plVar6;
                *plVar6 = *plVar19;
                *plVar19 = lVar4;
              } while( true );
            }
            if (plVar8 < plVar11) {
              do {
                plVar6 = plVar8;
                if (plVar8 + 1 <= plVar11) {
                  lVar4 = *plVar8;
                  plVar7 = plVar8 + 1;
                  do {
                    pfVar1 = (float *)(*plVar7 + 0x3c8);
                    plVar21 = plVar7;
                    lVar3 = *plVar7;
                    if (*(float *)(lVar4 + 0x3c8) < *pfVar1 || *(float *)(lVar4 + 0x3c8) == *pfVar1)
                    {
                      plVar21 = plVar6;
                      lVar3 = lVar4;
                    }
                    lVar4 = lVar3;
                    plVar6 = plVar21;
                    plVar7 = plVar7 + 1;
                  } while (plVar7 <= plVar11);
                }
                lVar4 = *plVar6;
                *plVar6 = *plVar11;
                *plVar11 = lVar4;
                plVar11 = plVar11 + -1;
              } while (plVar8 < plVar11);
            }
            goto LAB_147978134;
          }
LAB_147977f6b:
          iVar13 = (int)uVar18;
          if (iVar13 != 0) {
            iVar9 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
            iVar16 = iVar9;
joined_r0x000147977f92:
            do {
              iVar15 = iVar9 * 2 + 1;
              if (iVar15 < iVar13) {
                iVar14 = iVar9 * 2 + 2;
                if ((iVar14 < iVar13) &&
                   (*(float *)(plVar6[iVar14] + 0x3c8) < *(float *)(plVar6[iVar15] + 0x3c8) ||
                    *(float *)(plVar6[iVar14] + 0x3c8) == *(float *)(plVar6[iVar15] + 0x3c8))) {
                  iVar15 = iVar14;
                }
                lVar4 = plVar6[iVar9];
                fVar24 = *(float *)(lVar4 + 0x3c8);
                pfVar1 = (float *)(plVar6[iVar15] + 0x3c8);
                if (*pfVar1 <= fVar24 && fVar24 != *pfVar1) {
                  plVar6[iVar9] = plVar6[iVar15];
                  plVar6[iVar15] = lVar4;
                  iVar9 = iVar15;
                  goto joined_r0x000147977f92;
                }
              }
              bVar23 = iVar16 != 0;
              iVar9 = iVar16 + -1;
              iVar16 = iVar9;
            } while (bVar23);
            if (1 < iVar13) {
              lVar4 = *plVar6;
              *plVar6 = plVar6[uVar18 - 1];
              plVar6[uVar18 - 1] = lVar4;
              if (iVar13 != 2) {
                do {
                  uVar10 = uVar18 - 1;
                  iVar13 = 0;
                  iVar16 = 1;
                  iVar9 = 0;
                  do {
                    iVar13 = iVar13 + 2;
                    iVar15 = iVar16;
                    if (((longlong)iVar13 < (longlong)uVar10) &&
                       (*(float *)(plVar6[iVar13] + 0x3c8) < *(float *)(plVar6[iVar16] + 0x3c8) ||
                        *(float *)(plVar6[iVar13] + 0x3c8) == *(float *)(plVar6[iVar16] + 0x3c8))) {
                      iVar15 = iVar13;
                    }
                    lVar4 = plVar6[iVar9];
                    fVar24 = *(float *)(lVar4 + 0x3c8);
                    pfVar1 = (float *)(plVar6[iVar15] + 0x3c8);
                    if (fVar24 < *pfVar1 || fVar24 == *pfVar1) break;
                    plVar6[iVar9] = plVar6[iVar15];
                    plVar6[iVar15] = lVar4;
                    iVar13 = iVar15 * 2;
                    iVar16 = iVar15 * 2 + 1;
                    iVar9 = iVar15;
                  } while ((longlong)iVar16 < (longlong)uVar10);
                  lVar4 = *plVar6;
                  *plVar6 = plVar6[uVar18 - 2];
                  plVar6[uVar18 - 2] = lVar4;
                  uVar18 = uVar10;
                } while (2 < uVar10);
              }
            }
          }
LAB_147978134:
          plVar5 = plVar5 + -3;
        } while (&local_348 <= plVar5);
      }
      if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
        FUN_143413b04(param_1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147977ed7:
  lVar4 = *plVar8;
  *plVar8 = *plVar19;
  *plVar19 = lVar4;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar20 - (longlong)plVar21 < (longlong)plVar7 - (longlong)plVar22) {
    if (plVar6 < plVar11) {
      *plVar5 = (longlong)plVar6;
      plVar5[1] = (longlong)plVar11;
      *(int *)(plVar5 + 2) = iVar13;
      plVar5 = plVar5 + 3;
    }
    plVar6 = plVar8;
    plVar7 = plVar20;
    if (plVar19 <= plVar8 + 1) goto LAB_147978134;
  }
  else {
    if (plVar8 + 1 < plVar19) {
      *plVar5 = (longlong)plVar8;
      plVar5[1] = (longlong)plVar12;
      *(int *)(plVar5 + 2) = iVar13;
      plVar5 = plVar5 + 3;
    }
    plVar8 = plVar22;
    plVar12 = plVar11;
    plVar7 = plVar11;
    if (plVar11 <= plVar6) goto LAB_147978134;
  }
  iVar9 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar8) >> 3);
  uVar18 = (ulonglong)(iVar9 + 1);
  plVar11 = plVar12;
  plVar21 = plVar8;
  if (iVar13 == 0) goto LAB_147977f6b;
  goto LAB_147977e35;
}



// FUNCTION 147978180 FUN_147978180 body=185 status=ok
// SIG undefined FUN_147978180(void)

void FUN_147978180(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 1;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0x400000003f000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14797823a(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797823a FUN_14797823a body=78 status=ok
// SIG undefined FUN_14797823a(void)

void FUN_14797823a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_147cec35a(param_2,param_1 + 0x3d0);
  if (cVar1 == '\0') {
    FUN_143402760(param_1 + 0x3d0,param_2);
    if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
      FUN_143413b04(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147978288 FUN_147978288 body=215 status=ok
// SIG undefined FUN_147978288(void)

void FUN_147978288(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479614b4(param_1 + 0x428,plVar1);
  if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
    FUN_143413b04(param_1);
  }
  FUN_145bf9179(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147978360 FUN_147978360 body=215 status=ok
// SIG undefined FUN_147978360(void)

void FUN_147978360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478b6290(param_1 + 0x418,plVar1);
  if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
    FUN_143413b04(param_1);
  }
  FUN_145bf91aa(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147978444 FUN_147978444 body=104 status=ok
// SIG undefined FUN_147978444(void)

void FUN_147978444(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace6e8) {
    FUN_144b3d300(&DAT_14cace6e8);
    if (DAT_14cace6e8 == -1) {
      FUN_1446f470e(&DAT_14cace6e0,L"bEnabled",1);
      _Init_thread_footer(&DAT_14cace6e8);
      return;
    }
  }
  return;
}



// FUNCTION 1479784ac FUN_1479784ac body=120 status=ok
// SIG undefined FUN_1479784ac(void)

byte FUN_1479784ac(char *param_1,char *param_2)

{
  byte bVar1;
  
  if (((((*param_2 != *param_1) || (*(float *)(param_2 + 4) != *(float *)(param_1 + 4))) ||
       (NAN(*(float *)(param_2 + 4)) || NAN(*(float *)(param_1 + 4)))) ||
      (((*(float *)(param_2 + 8) != *(float *)(param_1 + 8) ||
        (NAN(*(float *)(param_2 + 8)) || NAN(*(float *)(param_1 + 8)))) ||
       ((*(float *)(param_2 + 0xc) != *(float *)(param_1 + 0xc) ||
        ((NAN(*(float *)(param_2 + 0xc)) || NAN(*(float *)(param_1 + 0xc)) ||
         (*(float *)(param_2 + 0x10) != *(float *)(param_1 + 0x10))))))))) ||
     ((NAN(*(float *)(param_2 + 0x10)) || NAN(*(float *)(param_1 + 0x10)) ||
      (((((*(float *)(param_2 + 0x14) != *(float *)(param_1 + 0x14) ||
          (NAN(*(float *)(param_2 + 0x14)) || NAN(*(float *)(param_1 + 0x14)))) ||
         (*(float *)(param_2 + 0x18) != *(float *)(param_1 + 0x18))) ||
        ((NAN(*(float *)(param_2 + 0x18)) || NAN(*(float *)(param_1 + 0x18)) ||
         (*(float *)(param_2 + 0x1c) != *(float *)(param_1 + 0x1c))))) ||
       (NAN(*(float *)(param_2 + 0x1c)) || NAN(*(float *)(param_1 + 0x1c)))))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20)) & 1;
  }
  return bVar1;
}



// FUNCTION 147978524 FUN_147978524 body=16 status=ok
// SIG undefined FUN_147978524(void)

byte FUN_147978524(void)

{
  byte bVar1;
  
  bVar1 = FUN_1479784ac();
  return bVar1 ^ 1;
}



// FUNCTION 147978534 FUN_147978534 body=140 status=ok
// SIG undefined FUN_147978534(void)

void FUN_147978534(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bEnabled",1);
  uVar1 = FUN_145a7019a();
  FUN_145a7019a();
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



// FUNCTION 1479785c2 FUN_1479785c2 body=285 status=ok
// SIG undefined FUN_1479785c2(void)

undefined4 * FUN_1479785c2(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  lVar9 = FUN_1447210f0(param_2);
  param_1[1] = *(undefined4 *)(lVar9 + 0xc);
  param_1[2] = *(undefined4 *)(param_2 + 0x3c8);
  FUN_1479610d0(param_1 + 4,param_2 + 0x3d0);
  uVar2 = *(undefined4 *)(param_2 + 0x3f4);
  uVar3 = *(undefined4 *)(param_2 + 0x3f8);
  uVar4 = *(undefined4 *)(param_2 + 0x3fc);
  uVar5 = *(undefined4 *)(param_2 + 0x400);
  uVar6 = *(undefined4 *)(param_2 + 0x404);
  uVar7 = *(undefined4 *)(param_2 + 0x408);
  uVar8 = *(undefined4 *)(param_2 + 0x40c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x3f0);
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  param_1[0x13] = uVar8;
  param_1[0x14] = *(undefined4 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = *(int *)(param_2 + 0x420);
  uVar10 = *(undefined8 *)(param_2 + 0x418);
  param_1[0x18] = iVar1;
  if (iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1478c3a1c(param_1 + 0x16,iVar1,0);
    FUN_1478c3a8f(*(undefined8 *)(param_1 + 0x16),uVar10,iVar1);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = *(int *)(param_2 + 0x430);
  uVar10 = *(undefined8 *)(param_2 + 0x428);
  param_1[0x1c] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_147965a2c(param_1 + 0x1a,iVar1,0);
    FUN_147965a8e(*(undefined8 *)(param_1 + 0x1a),uVar10,iVar1);
  }
  uVar10 = (**(code **)(**(longlong **)(param_2 + 0x3a8) + 0x7b8))
                     (*(longlong **)(param_2 + 0x3a8),0,1,0xffffffff);
  *(undefined8 *)(param_1 + 0x1e) = uVar10;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1479786e0 FUN_1479786e0 body=223 status=ok
// SIG undefined FUN_1479786e0(void)

undefined8 * FUN_1479786e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1479610d0(param_1 + 2,param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar8 = *(undefined4 *)(param_2 + 9);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 9) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1478c3a1c(param_1 + 0xb,iVar1,0);
    FUN_1478c3a8f(param_1[0xb],uVar2,iVar1);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  uVar2 = param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_147965a2c(param_1 + 0xd,iVar1,0);
    FUN_147965a8e(param_1[0xd],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = param_2[0xf];
  return param_1;
}



// FUNCTION 1479787c0 FUN_1479787c0 body=1639 status=ok
// SIG undefined FUN_1479787c0(void)

void FUN_1479787c0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  void *_Src;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  longlong lVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *_Src_00;
  float fVar23;
  undefined1 auStack_438 [32];
  longlong *local_418;
  ulonglong local_410;
  longlong *local_408;
  longlong local_400;
  void *local_3f8;
  void *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined4 local_3d8 [190];
  undefined1 local_e0 [152];
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  plVar14 = (longlong *)(param_1 + 0x7a8);
  local_3e8 = param_2;
  local_3e0 = param_2;
  FUN_1479893de(plVar14);
  if (*(int *)(param_1 + 0x7dc) < *(int *)(param_1 + 0x7b0)) {
    FUN_1479898c6(plVar14);
    uVar15 = *(int *)(param_1 + 0x7b0) - *(int *)(param_1 + 0x7dc);
    if (1 < (int)uVar15) {
      lVar19 = *plVar14;
      local_408 = plVar14;
      local_400 = param_1;
      memset(local_3d8,0,0x2f0);
      local_3e0 = (ulonglong)uVar15 * 0x98 + lVar19 + -0x98;
      local_3e8 = lVar19;
      fVar23 = logf((float)(int)uVar15);
      local_3d8[0] = (int)(longlong)(fVar23 + fVar23);
      plVar12 = &local_3e8;
      do {
        _Src = (void *)*plVar12;
        pvVar20 = (void *)plVar12[1];
        iVar16 = (int)plVar12[2];
        iVar6 = (int)((ulonglong)((longlong)pvVar20 - (longlong)_Src) >> 3) * 0x286bca1b;
        uVar15 = iVar6 + 1;
        pvVar17 = _Src;
        pvVar18 = pvVar20;
        local_418 = plVar12;
        if (iVar16 != 0) {
LAB_1479788cf:
          if (8 < (int)uVar15) {
            local_410 = CONCAT44(local_410._4_4_,iVar16);
            pvVar22 = (void *)((ulonglong)(uVar15 >> 1) * 0x98 + (longlong)_Src);
            local_3f8 = pvVar17;
            local_3f0 = pvVar20;
            memcpy(local_e0,pvVar22,0x98);
            memcpy(pvVar22,_Src,0x98);
            memcpy(_Src,local_e0,0x98);
            pvVar22 = (void *)((longlong)pvVar18 + 0x98);
            _Src_00 = _Src;
            do {
              pvVar20 = (void *)((longlong)_Src_00 + 0x98);
              pvVar5 = (void *)((longlong)_Src_00 + 0x98);
              do {
                _Src_00 = pvVar5;
                pvVar17 = pvVar20;
                if (pvVar18 < _Src_00) break;
                pvVar20 = (void *)((longlong)pvVar17 + 0x98);
                pvVar5 = (void *)((longlong)_Src_00 + 0x98);
              } while (*(float *)((longlong)_Src + 0x10) < *(float *)((longlong)_Src_00 + 0x10) ||
                       *(float *)((longlong)_Src + 0x10) == *(float *)((longlong)_Src_00 + 0x10));
              pvVar5 = (void *)((longlong)pvVar22 + -0x130);
              do {
                pvVar21 = pvVar22;
                pvVar20 = pvVar5;
                pvVar22 = (void *)((longlong)pvVar21 + -0x98);
                if (pvVar22 <= _Src) break;
                pvVar5 = (void *)((longlong)pvVar20 + -0x98);
              } while (*(float *)((longlong)pvVar21 + -0x88) < *(float *)((longlong)_Src + 0x10) ||
                       *(float *)((longlong)pvVar21 + -0x88) == *(float *)((longlong)_Src + 0x10));
              if (pvVar22 < _Src_00) goto LAB_1479789d8;
              memcpy(local_e0,_Src_00,0x98);
              memcpy(_Src_00,pvVar22,0x98);
              memcpy(pvVar22,local_e0,0x98);
            } while( true );
          }
          for (; plVar12 = local_418, pvVar20 = _Src, pvVar17 = _Src, _Src < pvVar18;
              pvVar18 = (void *)((longlong)pvVar18 + -0x98)) {
            while (pvVar22 = pvVar20, pvVar20 = (void *)((longlong)pvVar17 + 0x98),
                  pvVar20 <= pvVar18) {
              pfVar2 = (float *)((longlong)pvVar17 + 0xa8);
              pvVar17 = pvVar20;
              if (*(float *)((longlong)pvVar22 + 0x10) < *pfVar2 ||
                  *(float *)((longlong)pvVar22 + 0x10) == *pfVar2) {
                pvVar20 = pvVar22;
              }
            }
            memcpy(local_e0,pvVar22,0x98);
            memcpy(pvVar22,pvVar18,0x98);
            memcpy(pvVar18,local_e0,0x98);
          }
          goto LAB_147978da8;
        }
LAB_147978ac8:
        plVar12 = local_418;
        if (uVar15 != 0) {
          uVar7 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar8 = (ulonglong)uVar7;
            local_410 = uVar8;
            while (uVar4 = uVar7 * 2 + 1, (int)uVar4 < (int)uVar15) {
              uVar9 = uVar7 * 2 + 2;
              uVar7 = uVar4;
              if (((int)uVar9 < (int)uVar15) &&
                 (fVar23 = *(float *)((longlong)_Src + (longlong)(int)uVar9 * 0x98 + 0x10),
                 pfVar2 = (float *)((longlong)_Src + (longlong)(int)uVar4 * 0x98 + 0x10),
                 fVar23 < *pfVar2 || fVar23 == *pfVar2)) {
                uVar7 = uVar9;
              }
              lVar19 = (longlong)(int)uVar8 * 0x98;
              fVar23 = *(float *)((longlong)_Src + lVar19 + 0x10);
              pfVar2 = (float *)((longlong)_Src + (longlong)(int)uVar7 * 0x98 + 0x10);
              if (fVar23 < *pfVar2 || fVar23 == *pfVar2) break;
              pvVar20 = (void *)(lVar19 + (longlong)_Src);
              pvVar18 = (void *)((longlong)(int)uVar7 * 0x98 + (longlong)_Src);
              memcpy(local_e0,pvVar20,0x98);
              memcpy(pvVar20,pvVar18,0x98);
              memcpy(pvVar18,local_e0,0x98);
              uVar8 = (ulonglong)uVar7;
            }
            uVar7 = (int)local_410 - 1;
          } while ((int)local_410 != 0);
          plVar12 = local_418;
          if (1 < (int)uVar15) {
            pvVar18 = (void *)(((ulonglong)uVar15 - 1) * 0x98 + (longlong)_Src);
            memcpy(local_e0,_Src,0x98);
            memcpy(_Src,pvVar18,0x98);
            memcpy(pvVar18,local_e0,0x98);
            plVar12 = local_418;
            uVar8 = (ulonglong)uVar15 - 1;
            if (uVar15 != 2) {
              do {
                iVar16 = 0;
                iVar11 = 1;
                iVar6 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar10 = iVar11;
                  if (((longlong)iVar16 < (longlong)uVar8) &&
                     (fVar23 = *(float *)((longlong)_Src + (longlong)iVar16 * 0x98 + 0x10),
                     pfVar2 = (float *)((longlong)_Src + (longlong)iVar11 * 0x98 + 0x10),
                     fVar23 < *pfVar2 || fVar23 == *pfVar2)) {
                    iVar10 = iVar16;
                  }
                  fVar23 = *(float *)((longlong)_Src + (longlong)iVar6 * 0x98 + 0x10);
                  pfVar2 = (float *)((longlong)_Src + (longlong)iVar10 * 0x98 + 0x10);
                  if (fVar23 < *pfVar2 || fVar23 == *pfVar2) break;
                  pvVar20 = (void *)((longlong)iVar6 * 0x98 + (longlong)_Src);
                  pvVar18 = (void *)((longlong)iVar10 * 0x98 + (longlong)_Src);
                  memcpy(local_e0,pvVar20,0x98);
                  memcpy(pvVar20,pvVar18,0x98);
                  memcpy(pvVar18,local_e0,0x98);
                  iVar16 = iVar10 * 2;
                  iVar11 = iVar10 * 2 + 1;
                  iVar6 = iVar10;
                } while ((longlong)iVar11 < (longlong)uVar8);
                pvVar18 = (void *)((uVar8 - 1) * 0x98 + (longlong)_Src);
                memcpy(local_e0,_Src,0x98);
                memcpy(_Src,pvVar18,0x98);
                memcpy(pvVar18,local_e0,0x98);
                bVar3 = 2 < uVar8;
                plVar12 = local_418;
                uVar8 = uVar8 - 1;
              } while (bVar3);
            }
          }
        }
LAB_147978da8:
        plVar12 = plVar12 + -3;
        plVar14 = local_408;
        param_1 = local_400;
      } while (&local_3e8 <= plVar12);
    }
  }
  FUN_147989714(plVar14);
  iVar16 = *(int *)(param_1 + 0x5c0);
  if ((longlong)iVar16 != 0) {
    lVar19 = *(longlong *)(param_1 + 0x5b8);
    lVar13 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)(lVar19 + lVar13) + 0x19a);
      *pbVar1 = *pbVar1 & 0xef;
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar16 * 8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1479789d8:
  memcpy(local_e0,_Src,0x98);
  memcpy(_Src,pvVar22,0x98);
  memcpy(pvVar22,local_e0,0x98);
  iVar16 = (int)local_410 + -1;
  pvVar21 = (void *)((longlong)pvVar21 + -0x130);
  if ((longlong)pvVar20 - (longlong)local_3f8 < (longlong)local_3f0 - (longlong)pvVar17) {
    plVar12 = local_418;
    if (_Src_00 < pvVar18) {
      *local_418 = (longlong)_Src_00;
      local_418[1] = (longlong)pvVar18;
      *(int *)(local_418 + 2) = iVar16;
      plVar12 = local_418 + 3;
    }
    pvVar17 = _Src;
    if (pvVar22 <= (void *)((longlong)_Src + 0x98U)) goto LAB_147978da8;
  }
  else {
    if ((void *)((longlong)_Src + 0x98U) < pvVar22) {
      *local_418 = (longlong)_Src;
      local_418[1] = (longlong)pvVar21;
      *(int *)(local_418 + 2) = iVar16;
      local_418 = local_418 + 3;
    }
    plVar12 = local_418;
    _Src = _Src_00;
    pvVar20 = pvVar18;
    pvVar21 = pvVar18;
    if (pvVar18 <= _Src_00) goto LAB_147978da8;
  }
  local_418 = plVar12;
  iVar6 = (int)((ulonglong)((longlong)pvVar20 - (longlong)pvVar17) >> 3) * 0x286bca1b;
  uVar15 = iVar6 + 1;
  pvVar18 = pvVar21;
  if (iVar16 == 0) goto LAB_147978ac8;
  goto LAB_1479788cf;
}



// FUNCTION 147978e28 FUN_147978e28 body=1812 status=ok
// SIG undefined FUN_147978e28(void)

void FUN_147978e28(longlong param_1,uint *param_2)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  void *pvVar15;
  void *_Src;
  void *_Src_00;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  void *pvVar19;
  longlong *plVar20;
  void *pvVar21;
  longlong lVar22;
  void *pvVar23;
  float fVar24;
  undefined1 auStack_448 [40];
  longlong *local_420;
  ulonglong local_418;
  longlong *local_410;
  void *local_408;
  void *local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined4 local_3e8 [188];
  undefined1 local_f8 [152];
  ulonglong local_60;
  ulonglong uVar10;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (*(int *)(param_1 + 0x7b0) != *(int *)(param_1 + 0x7dc)) {
    lVar22 = param_1 + 0x7e0;
    if (*(longlong *)(param_1 + 0x7e8) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x7e8);
    }
    iVar18 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_1 + 0x7f0) - 1U & *param_2) * 4);
    if (iVar18 != -1) {
      plVar20 = (longlong *)(param_1 + 0x7a8);
      do {
        lVar22 = *plVar20 + (longlong)iVar18 * 0x98;
        if (*(uint *)(*plVar20 + (longlong)iVar18 * 0x98) == *param_2) {
          if ((undefined8 *)(lVar22 + 8) != (undefined8 *)0x0 && lVar22 != 0) {
            fVar24 = *(float *)(lVar22 + 0x10);
            *(uint *)(lVar22 + 0x10) = param_2[2];
            *(undefined8 *)(lVar22 + 8) = *(undefined8 *)param_2;
            FUN_143402760(lVar22 + 0x18,param_2 + 4);
            uVar16 = param_2[0xd];
            uVar9 = param_2[0xe];
            uVar6 = param_2[0xf];
            uVar11 = param_2[0x10];
            uVar3 = param_2[0x11];
            uVar4 = param_2[0x12];
            uVar5 = param_2[0x13];
            *(uint *)(lVar22 + 0x38) = param_2[0xc];
            *(uint *)(lVar22 + 0x3c) = uVar16;
            *(uint *)(lVar22 + 0x40) = uVar9;
            *(uint *)(lVar22 + 0x44) = uVar6;
            *(uint *)(lVar22 + 0x48) = uVar11;
            *(uint *)(lVar22 + 0x4c) = uVar3;
            *(uint *)(lVar22 + 0x50) = uVar4;
            *(uint *)(lVar22 + 0x54) = uVar5;
            *(uint *)(lVar22 + 0x58) = param_2[0x14];
            FUN_1478b6290(lVar22 + 0x60,param_2 + 0x16);
            FUN_1479614b4(lVar22 + 0x70);
            *(undefined8 *)(lVar22 + 0x80) = *(undefined8 *)(param_2 + 0x1e);
            *(undefined1 *)(lVar22 + 0x88) = 1;
            if ((fVar24 != (float)param_2[2]) || (NAN(fVar24) || NAN((float)param_2[2]))) {
              if (*(int *)(param_1 + 0x7dc) < *(int *)(param_1 + 0x7b0)) {
                FUN_1479898c6(plVar20);
                uVar16 = *(int *)(param_1 + 0x7b0) - *(int *)(param_1 + 0x7dc);
                if (1 < (int)uVar16) {
                  lVar22 = *plVar20;
                  local_410 = plVar20;
                  memset(local_3e8,0,0x2f0);
                  local_3f0 = (ulonglong)uVar16 * 0x98 + lVar22 + -0x98;
                  local_3f8 = lVar22;
                  fVar24 = logf((float)(int)uVar16);
                  local_3e8[0] = (int)(longlong)(fVar24 + fVar24);
                  plVar14 = &local_3f8;
                  do {
                    _Src_00 = (void *)*plVar14;
                    pvVar19 = (void *)plVar14[1];
                    iVar18 = (int)plVar14[2];
                    iVar8 = (int)((ulonglong)((longlong)pvVar19 - (longlong)_Src_00) >> 3) *
                            0x286bca1b;
                    uVar16 = iVar8 + 1;
                    pvVar23 = _Src_00;
                    pvVar21 = pvVar19;
                    local_420 = plVar14;
                    if (iVar18 != 0) {
LAB_14797903b:
                      if (8 < (int)uVar16) {
                        local_418 = CONCAT44(local_418._4_4_,iVar18);
                        pvVar15 = (void *)((ulonglong)(uVar16 >> 1) * 0x98 + (longlong)_Src_00);
                        local_408 = pvVar23;
                        local_400 = pvVar21;
                        memcpy(local_f8,pvVar15,0x98);
                        memcpy(pvVar15,_Src_00,0x98);
                        memcpy(_Src_00,local_f8,0x98);
                        pvVar15 = (void *)((longlong)pvVar19 + 0x98);
                        _Src = _Src_00;
                        do {
                          pvVar21 = (void *)((longlong)_Src + 0x98);
                          pvVar7 = (void *)((longlong)_Src + 0x98);
                          do {
                            _Src = pvVar7;
                            pvVar23 = pvVar21;
                            if (pvVar19 < _Src) break;
                            pvVar21 = (void *)((longlong)pvVar23 + 0x98);
                            pvVar7 = (void *)((longlong)_Src + 0x98);
                          } while (*(float *)((longlong)_Src_00 + 0x10) <
                                   *(float *)((longlong)_Src + 0x10) ||
                                   *(float *)((longlong)_Src_00 + 0x10) ==
                                   *(float *)((longlong)_Src + 0x10));
                          pvVar7 = (void *)((longlong)pvVar15 + -0x130);
                          do {
                            pvVar17 = pvVar15;
                            pvVar21 = pvVar7;
                            pvVar15 = (void *)((longlong)pvVar17 + -0x98);
                            if (pvVar15 <= _Src_00) break;
                            pvVar7 = (void *)((longlong)pvVar21 + -0x98);
                          } while (*(float *)((longlong)pvVar17 + -0x88) <
                                   *(float *)((longlong)_Src_00 + 0x10) ||
                                   *(float *)((longlong)pvVar17 + -0x88) ==
                                   *(float *)((longlong)_Src_00 + 0x10));
                          if (pvVar15 < _Src) goto LAB_147979148;
                          memcpy(local_f8,_Src,0x98);
                          memcpy(_Src,pvVar15,0x98);
                          memcpy(pvVar15,local_f8,0x98);
                        } while( true );
                      }
                      for (; plVar14 = local_420, pvVar23 = _Src_00, pvVar21 = _Src_00,
                          _Src_00 < pvVar19; pvVar19 = (void *)((longlong)pvVar19 + -0x98)) {
                        while (pvVar15 = pvVar23, pvVar23 = (void *)((longlong)pvVar21 + 0x98),
                              pvVar23 <= pvVar19) {
                          pfVar1 = (float *)((longlong)pvVar21 + 0xa8);
                          pvVar21 = pvVar23;
                          if (*(float *)((longlong)pvVar15 + 0x10) < *pfVar1 ||
                              *(float *)((longlong)pvVar15 + 0x10) == *pfVar1) {
                            pvVar23 = pvVar15;
                          }
                        }
                        memcpy(local_f8,pvVar15,0x98);
                        memcpy(pvVar15,pvVar19,0x98);
                        memcpy(pvVar19,local_f8,0x98);
                      }
                      goto LAB_147979519;
                    }
LAB_14797923a:
                    plVar14 = local_420;
                    if (uVar16 != 0) {
                      uVar9 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
                      do {
                        uVar10 = (ulonglong)uVar9;
                        local_418 = uVar10;
                        while (uVar6 = uVar9 * 2 + 1, (int)uVar6 < (int)uVar16) {
                          uVar11 = uVar9 * 2 + 2;
                          uVar9 = uVar6;
                          if (((int)uVar11 < (int)uVar16) &&
                             (fVar24 = *(float *)((longlong)_Src_00 +
                                                 (longlong)(int)uVar11 * 0x98 + 0x10),
                             pfVar1 = (float *)((longlong)_Src_00 +
                                               (longlong)(int)uVar6 * 0x98 + 0x10),
                             fVar24 < *pfVar1 || fVar24 == *pfVar1)) {
                            uVar9 = uVar11;
                          }
                          lVar22 = (longlong)(int)uVar10 * 0x98;
                          fVar24 = *(float *)((longlong)_Src_00 + lVar22 + 0x10);
                          pfVar1 = (float *)((longlong)_Src_00 + (longlong)(int)uVar9 * 0x98 + 0x10)
                          ;
                          if (fVar24 < *pfVar1 || fVar24 == *pfVar1) break;
                          pvVar23 = (void *)(lVar22 + (longlong)_Src_00);
                          pvVar19 = (void *)((longlong)(int)uVar9 * 0x98 + (longlong)_Src_00);
                          memcpy(local_f8,pvVar23,0x98);
                          memcpy(pvVar23,pvVar19,0x98);
                          memcpy(pvVar19,local_f8,0x98);
                          uVar10 = (ulonglong)uVar9;
                        }
                        uVar9 = (int)local_418 - 1;
                      } while ((int)local_418 != 0);
                      plVar14 = local_420;
                      if (1 < (int)uVar16) {
                        pvVar19 = (void *)(((ulonglong)uVar16 - 1) * 0x98 + (longlong)_Src_00);
                        memcpy(local_f8,_Src_00,0x98);
                        memcpy(_Src_00,pvVar19,0x98);
                        memcpy(pvVar19,local_f8,0x98);
                        plVar14 = local_420;
                        uVar10 = (ulonglong)uVar16 - 1;
                        if (uVar16 != 2) {
                          do {
                            iVar18 = 0;
                            iVar13 = 1;
                            iVar8 = 0;
                            do {
                              iVar18 = iVar18 + 2;
                              iVar12 = iVar13;
                              if (((longlong)iVar18 < (longlong)uVar10) &&
                                 (fVar24 = *(float *)((longlong)_Src_00 +
                                                     (longlong)iVar18 * 0x98 + 0x10),
                                 pfVar1 = (float *)((longlong)_Src_00 +
                                                   (longlong)iVar13 * 0x98 + 0x10),
                                 fVar24 < *pfVar1 || fVar24 == *pfVar1)) {
                                iVar12 = iVar18;
                              }
                              fVar24 = *(float *)((longlong)_Src_00 + (longlong)iVar8 * 0x98 + 0x10)
                              ;
                              pfVar1 = (float *)((longlong)_Src_00 + (longlong)iVar12 * 0x98 + 0x10)
                              ;
                              if (fVar24 < *pfVar1 || fVar24 == *pfVar1) break;
                              pvVar23 = (void *)((longlong)iVar8 * 0x98 + (longlong)_Src_00);
                              pvVar19 = (void *)((longlong)iVar12 * 0x98 + (longlong)_Src_00);
                              memcpy(local_f8,pvVar23,0x98);
                              memcpy(pvVar23,pvVar19,0x98);
                              memcpy(pvVar19,local_f8,0x98);
                              iVar18 = iVar12 * 2;
                              iVar13 = iVar12 * 2 + 1;
                              iVar8 = iVar12;
                            } while ((longlong)iVar13 < (longlong)uVar10);
                            pvVar19 = (void *)((uVar10 - 1) * 0x98 + (longlong)_Src_00);
                            memcpy(local_f8,_Src_00,0x98);
                            memcpy(_Src_00,pvVar19,0x98);
                            memcpy(pvVar19,local_f8,0x98);
                            bVar2 = 2 < uVar10;
                            plVar14 = local_420;
                            uVar10 = uVar10 - 1;
                          } while (bVar2);
                        }
                      }
                    }
LAB_147979519:
                    plVar14 = plVar14 + -3;
                    plVar20 = local_410;
                  } while (&local_3f8 <= plVar14);
                }
              }
              FUN_147989714(plVar20);
            }
          }
          break;
        }
        iVar18 = *(int *)(lVar22 + 0x90);
      } while (iVar18 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147979148:
  memcpy(local_f8,_Src_00,0x98);
  memcpy(_Src_00,pvVar15,0x98);
  memcpy(pvVar15,local_f8,0x98);
  iVar18 = (int)local_418 + -1;
  pvVar17 = (void *)((longlong)pvVar17 + -0x130);
  if ((longlong)pvVar21 - (longlong)local_408 < (longlong)local_400 - (longlong)pvVar23) {
    plVar14 = local_420;
    if (_Src < pvVar19) {
      *local_420 = (longlong)_Src;
      local_420[1] = (longlong)pvVar19;
      *(int *)(local_420 + 2) = iVar18;
      plVar14 = local_420 + 3;
    }
    pvVar23 = _Src_00;
    if (pvVar15 <= (void *)((longlong)_Src_00 + 0x98U)) goto LAB_147979519;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0x98U) < pvVar15) {
      *local_420 = (longlong)_Src_00;
      local_420[1] = (longlong)pvVar17;
      *(int *)(local_420 + 2) = iVar18;
      local_420 = local_420 + 3;
    }
    plVar14 = local_420;
    _Src_00 = _Src;
    pvVar17 = pvVar19;
    pvVar21 = pvVar19;
    if (pvVar19 <= _Src) goto LAB_147979519;
  }
  local_420 = plVar14;
  iVar8 = (int)((ulonglong)((longlong)pvVar21 - (longlong)pvVar23) >> 3) * 0x286bca1b;
  uVar16 = iVar8 + 1;
  pvVar19 = pvVar17;
  if (iVar18 == 0) goto LAB_14797923a;
  goto LAB_14797903b;
}



// FUNCTION 14797953e FUN_14797953e body=136 status=ok
// SIG undefined FUN_14797953e(void)

void FUN_14797953e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401bf1e0();
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x1c8) + 0x200,param_1);
  }
  FUN_1434139f2(param_1);
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    local_18 = &local_20;
    local_20 = param_1;
    FUN_147989b18(lVar1 + 0x6b8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479795c8 FUN_1479795c8 body=1110 status=ok
// SIG undefined FUN_1479795c8(void)

void FUN_1479795c8(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_140206818();
  FUN_147979a20(*(longlong *)(param_1 + 0x1c8) + 0x200,&local_348,param_1);
  if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
    FUN_143413890(param_1);
  }
  lVar4 = FUN_1447210f0(param_1);
  iVar15 = *(int *)(lVar4 + 0x6c0);
  uVar3 = iVar15 + 1;
  *(uint *)(lVar4 + 0x6c0) = uVar3;
  if (*(uint *)(lVar4 + 0x6c4) < uVar3) {
    FUN_147989e82((longlong *)(lVar4 + 0x6b8));
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x6b8) + (longlong)iVar15 * 8) = param_1;
  iVar15 = *(int *)(lVar4 + 0x6c0);
  if (1 < (longlong)iVar15) {
    lVar4 = *(longlong *)(lVar4 + 0x6b8);
    memset(local_338,0,0x2f0);
    local_340 = lVar4 + (longlong)iVar15 * 8 + -8;
    local_348 = lVar4;
    fVar24 = logf((float)iVar15);
    local_338[0] = (int)(longlong)(fVar24 + fVar24);
    plVar5 = &local_348;
    do {
      plVar7 = (longlong *)*plVar5;
      plVar12 = (longlong *)plVar5[1];
      iVar15 = (int)plVar5[2];
      iVar8 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar7) >> 3);
      uVar19 = (ulonglong)(iVar8 + 1);
      plVar10 = plVar7;
      plVar13 = plVar12;
      if (iVar15 != 0) {
LAB_1479796d7:
        if (8 < (int)(uint)uVar19) {
          uVar3 = (uint)uVar19 >> 1;
          lVar4 = plVar7[uVar3];
          plVar7[uVar3] = *plVar7;
          *plVar7 = lVar4;
          plVar20 = plVar13 + 1;
          plVar6 = plVar7;
          do {
            plVar2 = plVar6 + 1;
            plVar14 = plVar6 + 1;
            do {
              plVar6 = plVar14;
              plVar21 = plVar2;
              if (plVar13 < plVar6) break;
              plVar2 = plVar21 + 1;
              plVar14 = plVar6 + 1;
            } while (*(float *)(*plVar7 + 0x3c8) < *(float *)(*plVar6 + 0x3c8) ||
                     *(float *)(*plVar7 + 0x3c8) == *(float *)(*plVar6 + 0x3c8));
            plVar2 = plVar20 + -2;
            do {
              plVar14 = plVar20;
              plVar22 = plVar2;
              plVar20 = plVar14 + -1;
              if (plVar20 <= plVar7) break;
              plVar2 = plVar22 + -1;
            } while (*(float *)(*plVar20 + 0x3c8) < *(float *)(*plVar7 + 0x3c8) ||
                     *(float *)(*plVar20 + 0x3c8) == *(float *)(*plVar7 + 0x3c8));
            if (plVar20 < plVar6) goto LAB_14797977d;
            lVar4 = *plVar6;
            *plVar6 = *plVar20;
            *plVar20 = lVar4;
          } while( true );
        }
        if (plVar7 < plVar13) {
          do {
            plVar12 = plVar7;
            if (plVar7 + 1 <= plVar13) {
              plVar10 = plVar7 + 1;
              lVar4 = *plVar7;
              do {
                pfVar1 = (float *)(*plVar10 + 0x3c8);
                lVar11 = *plVar10;
                plVar20 = plVar10;
                if (*(float *)(lVar4 + 0x3c8) < *pfVar1 || *(float *)(lVar4 + 0x3c8) == *pfVar1) {
                  lVar11 = lVar4;
                  plVar20 = plVar12;
                }
                plVar12 = plVar20;
                plVar10 = plVar10 + 1;
                lVar4 = lVar11;
              } while (plVar10 <= plVar13);
            }
            lVar4 = *plVar12;
            *plVar12 = *plVar13;
            *plVar13 = lVar4;
            plVar13 = plVar13 + -1;
          } while (plVar7 < plVar13);
        }
        goto LAB_1479799d5;
      }
LAB_147979810:
      iVar15 = (int)uVar19;
      if (iVar15 != 0) {
        iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar18 = iVar8;
joined_r0x000147979833:
        do {
          iVar17 = iVar8 * 2 + 1;
          if (iVar17 < iVar15) {
            iVar16 = iVar8 * 2 + 2;
            if ((iVar16 < iVar15) &&
               (*(float *)(plVar7[iVar16] + 0x3c8) < *(float *)(plVar7[iVar17] + 0x3c8) ||
                *(float *)(plVar7[iVar16] + 0x3c8) == *(float *)(plVar7[iVar17] + 0x3c8))) {
              iVar17 = iVar16;
            }
            lVar4 = plVar7[iVar8];
            fVar24 = *(float *)(lVar4 + 0x3c8);
            pfVar1 = (float *)(plVar7[iVar17] + 0x3c8);
            if (*pfVar1 <= fVar24 && fVar24 != *pfVar1) {
              plVar7[iVar8] = plVar7[iVar17];
              plVar7[iVar17] = lVar4;
              iVar8 = iVar17;
              goto joined_r0x000147979833;
            }
          }
          bVar23 = iVar18 != 0;
          iVar8 = iVar18 + -1;
          iVar18 = iVar8;
        } while (bVar23);
        if (1 < iVar15) {
          lVar4 = *plVar7;
          *plVar7 = plVar7[uVar19 - 1];
          plVar7[uVar19 - 1] = lVar4;
          if (iVar15 != 2) {
            do {
              uVar9 = uVar19 - 1;
              iVar15 = 0;
              iVar18 = 1;
              iVar8 = 0;
              do {
                iVar15 = iVar15 + 2;
                iVar17 = iVar18;
                if (((longlong)iVar15 < (longlong)uVar9) &&
                   (*(float *)(plVar7[iVar15] + 0x3c8) < *(float *)(plVar7[iVar18] + 0x3c8) ||
                    *(float *)(plVar7[iVar15] + 0x3c8) == *(float *)(plVar7[iVar18] + 0x3c8))) {
                  iVar17 = iVar15;
                }
                lVar4 = plVar7[iVar8];
                fVar24 = *(float *)(lVar4 + 0x3c8);
                pfVar1 = (float *)(plVar7[iVar17] + 0x3c8);
                if (fVar24 < *pfVar1 || fVar24 == *pfVar1) break;
                plVar7[iVar8] = plVar7[iVar17];
                plVar7[iVar17] = lVar4;
                iVar15 = iVar17 * 2;
                iVar18 = iVar17 * 2 + 1;
                iVar8 = iVar17;
              } while ((longlong)iVar18 < (longlong)uVar9);
              lVar4 = *plVar7;
              *plVar7 = plVar7[uVar19 - 2];
              plVar7[uVar19 - 2] = lVar4;
              uVar19 = uVar9;
            } while (2 < uVar9);
          }
        }
      }
LAB_1479799d5:
      plVar5 = plVar5 + -3;
    } while (&local_348 <= plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14797977d:
  lVar4 = *plVar7;
  *plVar7 = *plVar20;
  *plVar20 = lVar4;
  iVar15 = iVar15 + -1;
  plVar14 = plVar14 + -2;
  if ((longlong)plVar22 - (longlong)plVar10 < (longlong)plVar12 - (longlong)plVar21) {
    if (plVar6 < plVar13) {
      *plVar5 = (longlong)plVar6;
      plVar5[1] = (longlong)plVar13;
      *(int *)(plVar5 + 2) = iVar15;
      plVar5 = plVar5 + 3;
    }
    plVar21 = plVar7;
    plVar12 = plVar22;
    if (plVar20 <= plVar7 + 1) goto LAB_1479799d5;
  }
  else {
    if (plVar7 + 1 < plVar20) {
      *plVar5 = (longlong)plVar7;
      plVar5[1] = (longlong)plVar14;
      *(int *)(plVar5 + 2) = iVar15;
      plVar5 = plVar5 + 3;
    }
    plVar7 = plVar6;
    plVar14 = plVar13;
    plVar12 = plVar13;
    if (plVar13 <= plVar6) goto LAB_1479799d5;
  }
  iVar8 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar21) >> 3);
  uVar19 = (ulonglong)(iVar8 + 1);
  plVar10 = plVar21;
  plVar13 = plVar14;
  if (iVar15 == 0) goto LAB_147979810;
  goto LAB_1479796d7;
}



// FUNCTION 147979a20 FUN_147979a20 body=244 status=ok
// SIG undefined FUN_147979a20(void)

undefined8 FUN_147979a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a7feda0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a7feb80;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_147979b16;
  FUN_1408278de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147979b2e FUN_147979b2e body=202 status=ok
// SIG undefined FUN_147979b2e(void)

void FUN_147979b2e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  lVar1 = FUN_14171b860(0,DAT_14cace6f0);
  if (lVar1 == 0) {
    uVar2 = FUN_145a70286();
    plVar3 = (longlong *)FUN_1468ff240(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    }
    uVar4 = 0;
    lVar1 = 0;
  }
  else {
    FUN_1477c2298(&local_38,param_2);
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,&local_38);
    FUN_1477c2298(param_2,&local_38);
    uVar4 = uStack_30 & 0xffffffff;
    lVar1 = local_38;
  }
  FUN_145aa5488(lVar1,uVar4);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147979bfa FUN_147979bfa body=192 status=ok
// SIG undefined FUN_147979bfa(void)

void FUN_147979bfa(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,plVar1);
  FUN_145aa5488(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147979cbe FUN_147979cbe body=528 status=ok
// SIG undefined FUN_147979cbe(void)

void FUN_147979cbe(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (DAT_14cace718 == '\x01') {
    FUN_147979ed0(param_1,&local_58,&local_68);
  }
  else if ((param_1 != 0) && (lVar8 = *(longlong *)(param_1 + 0x10), lVar8 != 0)) {
    uVar4 = FUN_145a70286();
    cVar3 = FUN_144a7ff9e(lVar8,uVar4);
    if (cVar3 != '\0') {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      FUN_1417b9ece(&local_58,0);
      *local_58 = param_1;
    }
  }
  plVar2 = local_58;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lVar8 = (longlong)(int)uStack_50;
  if (lVar8 != 0) {
    lVar5 = 0;
    do {
      FUN_147979b2e(*(undefined8 *)((longlong)plVar2 + lVar5),&local_78);
      lVar6 = (longlong)(int)(uint)uStack_70;
      if (lVar6 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_70;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_70) {
          FUN_147046b0e(param_2,iVar1);
        }
        memmove((void *)((longlong)iVar1 * 0xa0 + *param_2),local_78,lVar6 * 0xa0);
        uStack_70 = uStack_70 & 0xffffffff00000000;
      }
      lVar5 = lVar5 + 8;
    } while (lVar8 * 8 != lVar5);
  }
  lVar8 = local_68;
  lVar5 = (longlong)(int)uStack_60;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      FUN_147979b2e(*(undefined8 *)(lVar8 + lVar6),&local_78);
      lVar7 = (longlong)(int)(uint)uStack_70;
      if (lVar7 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_70;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_70) {
          FUN_147046b0e(param_2,iVar1);
        }
        memmove((void *)((longlong)iVar1 * 0xa0 + *param_2),local_78,lVar7 * 0xa0);
        uStack_70 = uStack_70 & 0xffffffff00000000;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  FUN_145aa5488(local_78,0);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147979ed0 FUN_147979ed0 body=202 status=ok
// SIG undefined FUN_147979ed0(void)

void FUN_147979ed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_38 = param_2;
    local_30 = param_3;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      param_1 = FUN_14348b10e();
    }
    FUN_143413c7c(&local_38,param_1);
    local_48 = 0;
    uStack_40 = 0;
    FUN_14490f2e4(param_1,&local_48,0,1);
    lVar1 = local_48;
    lVar2 = (longlong)(int)uStack_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_143413c7c(&local_38,*(undefined8 *)(lVar1 + lVar3));
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147979fa4 FUN_147979fa4 body=469 status=ok
// SIG undefined FUN_147979fa4(void)

void FUN_147979fa4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_118 [32];
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6();
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (void *)0x0;
  _Size = (size_t)(int)uStack_40;
  uStack_f0._0_4_ = (int)uStack_40;
  if (_Size == 0) {
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 0;
  }
  else {
    FUN_1447cd5fa(&local_f8,uStack_40 & 0xffffffff,0);
    memcpy(local_f8,_Src,_Size);
    local_a8 = local_f8;
    local_a0 = (int)uStack_f0;
    local_9c = uStack_f0._4_4_;
  }
  local_e8 = local_38;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 7;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14797a17a(param_3,&local_e8);
  FUN_147046490(&local_e8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797a17a FUN_14797a17a body=354 status=ok
// SIG undefined FUN_14797a17a(void)

undefined4 * FUN_14797a17a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar4 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar4;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    *(undefined8 *)(param_2 + 10) = 0;
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined8 *)(param_2 + 0xe) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    *(undefined8 *)(param_2 + 0x12) = 0;
    if (*(longlong *)(param_1 + 0x14) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x14) = 0;
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    *(undefined8 *)(param_2 + 0x16) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    *(undefined8 *)(param_2 + 0x1a) = 0;
  }
  FUN_1410e5bda(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  FUN_14798474e(param_1 + 0x24,param_2 + 0x24);
  return param_1;
}



// FUNCTION 14797a2e2 FUN_14797a2e2 body=349 status=ok
// SIG undefined FUN_14797a2e2(void)

void FUN_14797a2e2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_144a63fc8();
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
  local_bc = local_24 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_20;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 1;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14797a17a(param_3,&local_c8);
  FUN_147046490(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797a440 FUN_14797a440 body=473 status=ok
// SIG undefined FUN_14797a440(void)

void FUN_14797a440(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_118 [32];
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6();
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  uStack_f0._0_4_ = (int)uStack_40;
  if (lVar1 == 0) {
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_ac = 0;
  }
  else {
    FUN_1447c510a(&local_f8,uStack_40 & 0xffffffff,0);
    memcpy(local_f8,_Src,lVar1 << 2);
    local_b8 = local_f8;
    local_b0 = (int)uStack_f0;
    local_ac = uStack_f0._4_4_;
  }
  local_e8 = local_38;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 9;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14797a17a(param_3,&local_e8);
  FUN_147046490(&local_e8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797a61a FUN_14797a61a body=357 status=ok
// SIG undefined FUN_14797a61a(void)

void FUN_14797a61a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_20;
  local_c0 = local_24;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 3;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14797a17a(param_3,&local_c8);
  FUN_147046490(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797a780 FUN_14797a780 body=473 status=ok
// SIG undefined FUN_14797a780(void)

void FUN_14797a780(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_118 [32];
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6();
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  uStack_f0._0_4_ = (int)uStack_40;
  if (lVar1 == 0) {
    local_98 = (void *)0x0;
    local_90 = 0;
    local_8c = 0;
  }
  else {
    FUN_144a06ca8(&local_f8,uStack_40 & 0xffffffff,0);
    memcpy(local_f8,_Src,lVar1 << 2);
    local_98 = local_f8;
    local_90 = (int)uStack_f0;
    local_8c = uStack_f0._4_4_;
  }
  local_e8 = local_38;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 8;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14797a17a(param_3,&local_e8);
  FUN_147046490(&local_e8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797a95a FUN_14797a95a body=353 status=ok
// SIG undefined FUN_14797a95a(void)

void FUN_14797a95a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_c8 = local_20;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = local_24;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 2;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14797a17a(param_3,&local_c8);
  FUN_147046490(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797aabc FUN_14797aabc body=410 status=ok
// SIG undefined FUN_14797aabc(void)

void FUN_14797aabc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [160];
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_f0 = (int)uStack_40;
  if (lVar1 == 0) {
    local_ec = 0;
  }
  else {
    FUN_14010590e(&local_f8,uStack_40 & 0xffffffff,0);
    memcpy(local_f8,_Src,lVar1 << 3);
  }
  FUN_14797bb4c(local_e8,local_30,&local_f8);
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14797a17a(param_3,local_e8);
  FUN_147046490(local_e8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797ac58 FUN_14797ac58 body=380 status=ok
// SIG undefined FUN_14797ac58(void)

void FUN_14797ac58(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_20;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_48 = 5;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14797a17a(param_3,&local_c8);
  FUN_147046490(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797add6 FUN_14797add6 body=406 status=ok
// SIG undefined FUN_14797add6(void)

void FUN_14797add6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [160];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar2 = uStack_40;
  lVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = 0;
  local_f0 = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    local_ec = 0;
  }
  else {
    FUN_140b856de(&local_f8,uStack_40 & 0xffffffff,0);
    FUN_140b8566a(local_f8,lVar1,uVar2 & 0xffffffff);
  }
  FUN_14797af6e(local_e8,local_30,&local_f8);
  FUN_14797a17a(param_3,local_e8);
  FUN_147046490(local_e8);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797af6e FUN_14797af6e body=51 status=ok
// SIG undefined FUN_14797af6e(void)

undefined8 FUN_14797af6e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_14797bd28();
  FUN_1447a1747(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14797afa2 FUN_14797afa2 body=409 status=ok
// SIG undefined FUN_14797afa2(void)

void FUN_14797afa2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [160];
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_f0 = (int)uStack_40;
  if (lVar1 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,uStack_40 & 0xffffffff,0);
    memcpy(local_f8,_Src,lVar1 * 2);
  }
  FUN_14766f10c(local_e8,local_30,&local_f8);
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14797a17a(param_3,local_e8);
  FUN_147046490(local_e8);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b140 FUN_14797b140 body=91 status=ok
// SIG undefined FUN_14797b140(void)

undefined8 * FUN_14797b140(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 5) * -0x33333333;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477cf956(param_1,iVar2,0);
    FUN_1477cf9c9(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 14797b19c FUN_14797b19c body=219 status=ok
// SIG undefined FUN_14797b19c(void)

void FUN_14797b19c(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &local_b8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 1;
  local_34 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &local_18;
  local_b8 = param_2;
  local_ac = param_3;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(&local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b278 FUN_14797b278 body=160 status=ok
// SIG undefined FUN_14797b278(void)

void FUN_14797b278(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14797b31a(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b31a FUN_14797b31a body=144 status=ok
// SIG undefined FUN_14797b31a(void)

undefined8 * FUN_14797b31a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x10) = 7;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14797b3aa FUN_14797b3aa body=224 status=ok
// SIG undefined FUN_14797b3aa(void)

void FUN_14797b3aa(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &local_b8;
  local_b0 = 0;
  local_ac = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 2;
  local_34 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &local_18;
  local_b8 = param_2;
  local_a8 = param_3;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(&local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b48c FUN_14797b48c body=160 status=ok
// SIG undefined FUN_14797b48c(void)

void FUN_14797b48c(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14797b52e(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b52e FUN_14797b52e body=148 status=ok
// SIG undefined FUN_14797b52e(void)

undefined8 * FUN_14797b52e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x10) = 8;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14797b5c2 FUN_14797b5c2 body=225 status=ok
// SIG undefined FUN_14797b5c2(void)

void FUN_14797b5c2(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &local_b8;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 3;
  local_34 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &local_18;
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(&local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b6a4 FUN_14797b6a4 body=160 status=ok
// SIG undefined FUN_14797b6a4(void)

void FUN_14797b6a4(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14797b746(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b746 FUN_14797b746 body=148 status=ok
// SIG undefined FUN_14797b746(void)

undefined8 * FUN_14797b746(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x10) = 9;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14797b7da FUN_14797b7da body=160 status=ok
// SIG undefined FUN_14797b7da(void)

void FUN_14797b7da(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14766f10c(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b87c FUN_14797b87c body=160 status=ok
// SIG undefined FUN_14797b87c(void)

void FUN_14797b87c(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14797b91e(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797b91e FUN_14797b91e body=143 status=ok
// SIG undefined FUN_14797b91e(void)

undefined8 * FUN_14797b91e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xe,iVar1,0);
    FUN_140b8566a(param_1[0xe],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = 10;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14797b9ae FUN_14797b9ae body=251 status=ok
// SIG undefined FUN_14797b9ae(void)

void FUN_14797b9ae(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  longlong local_a0;
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
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_b8 = param_2;
  local_a0 = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  local_d8 = &local_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_38 = 5;
  local_34 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &local_18;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(&local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797baaa FUN_14797baaa body=160 status=ok
// SIG undefined FUN_14797baaa(void)

void FUN_14797baaa(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14797bb4c(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797bb4c FUN_14797bb4c body=143 status=ok
// SIG undefined FUN_14797bb4c(void)

undefined8 * FUN_14797bb4c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 0xc,iVar1,0);
    FUN_14009c72e(param_1[0xc],uVar2,iVar1);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xb;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14797bbdc FUN_14797bbdc body=160 status=ok
// SIG undefined FUN_14797bbdc(void)

void FUN_14797bbdc(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1470469b8(local_b8);
  local_d0 = &local_18;
  local_d8 = local_b8;
  FUN_14797b140(&local_c8);
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
  FUN_145aa5488(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_147046490(local_b8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797bc7e FUN_14797bc7e body=168 status=ok
// SIG undefined FUN_14797bc7e(void)

void FUN_14797bc7e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1477cf956(&local_38,iVar1,0);
    FUN_1477cf9c9(local_38,uVar2,iVar1);
  }
  (**(code **)(*param_1 + 0x80))(param_1,&local_38);
  FUN_145aa5488(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797bd28 FUN_14797bd28 body=95 status=ok
// SIG undefined FUN_14797bd28(void)

void FUN_14797bd28(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 0x10) = 10;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 14797bd88 FUN_14797bd88 body=29 status=ok
// SIG undefined FUN_14797bd88(void)

undefined8 * FUN_14797bd88(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_14797bda6();
  return param_1;
}



// FUNCTION 14797bda6 FUN_14797bda6 body=967 status=ok
// SIG undefined FUN_14797bda6(void)

void FUN_14797bda6(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double *pdVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((9.999999747378752e-05 < ABS(*param_3)) || (9.999999747378752e-05 < ABS(param_3[1]))) ||
     (9.999999747378752e-05 < ABS(param_3[2]))) {
    if ((param_2 == (undefined8 *)0x0) || (dVar15 = (double)param_2[0x39], dVar15 == 0.0)) {
      *param_1 = 0;
LAB_14797c09f:
      param_1[3] = param_3[2];
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar20 = *(undefined4 *)(param_3 + 1);
      uVar21 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
      *(undefined4 *)(param_1 + 2) = uVar20;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar21;
      if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    puVar10 = (undefined8 *)0x0;
    if (*(char *)((longlong)dVar15 + 0x1fb) != '\0') {
      puVar10 = param_2;
    }
    if ((puVar10 == (undefined8 *)0x0) || (DAT_14c950c29 == '\0')) {
      *param_1 = puVar10;
      puVar9 = param_1;
      if (puVar10 == (undefined8 *)0x0) goto LAB_14797c09f;
    }
    else {
      puVar9 = puVar10;
      dVar15 = (double)FUN_1456cec3c();
      *param_1 = puVar10;
    }
    uVar7 = SUB84(puVar9,0);
    lVar1 = param_2[0x39];
    if (lVar1 == 0) {
      uVar20 = (undefined4)DAT_14c8464f0;
      uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar17 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_b8 = DAT_14c846508;
      local_c8 = (undefined4)DAT_14c8464f8;
      uStack_c4 = DAT_14c8464f8._4_4_;
      uStack_c0 = (undefined4)DAT_14c846500;
      uStack_bc = DAT_14c846500._4_4_;
    }
    else {
      uVar20 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      dVar17 = *(double *)(lVar1 + 0x260);
      dVar14 = *(double *)(lVar1 + 0x268);
      dVar11 = *(double *)(lVar1 + 0x240);
      dVar12 = *(double *)(lVar1 + 0x248);
      dVar13 = *(double *)(lVar1 + 0x250);
      dVar16 = *(double *)(lVar1 + 600);
      pdVar6 = *(double **)(lVar1 + 0x228);
      local_98 = dVar11;
      uStack_90 = dVar12;
      local_88 = dVar13;
      dStack_80 = dVar16;
      if (pdVar6 == (double *)0x0) {
        uVar7 = 0x40;
        pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
        dVar15 = DAT_14c8463d8;
        *pdVar6 = DAT_14c8463d0;
        pdVar6[1] = dVar15;
        dVar15 = DAT_14c8463e8;
        pdVar6[2] = DAT_14c8463e0;
        pdVar6[3] = dVar15;
        dVar15 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar6[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar6[5] = dVar15;
        dVar15 = DAT_14c846508;
        pdVar6[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar6;
      }
      auVar23._8_8_ = -(ulonglong)(dVar16 != pdVar6[3]);
      auVar23._0_8_ = -(ulonglong)(dVar13 != pdVar6[2]);
      auVar2._8_4_ = (int)-(ulonglong)(dVar12 != pdVar6[1]);
      auVar2._0_8_ = -(ulonglong)(dVar11 != *pdVar6);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar12 != pdVar6[1]) >> 0x20);
      iVar5 = movmskpd(SUB84(dVar15,0),auVar2);
      uVar8 = movmskpd(uVar7,auVar23);
      if ((uVar8 & 0x3fffffff) != 0 || iVar5 != 0) {
        pdVar6[2] = local_88;
        pdVar6[3] = dStack_80;
        *(undefined4 *)pdVar6 = (undefined4)local_98;
        *(undefined4 *)((longlong)pdVar6 + 4) = local_98._4_4_;
        *(undefined4 *)(pdVar6 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)pdVar6 + 0xc) = uStack_90._4_4_;
        FUN_1448052ee(&local_98,&local_b0);
        pdVar6[6] = local_a0;
        pdVar6[4] = local_b0;
        pdVar6[5] = dStack_a8;
      }
      local_b8 = pdVar6[6];
      local_c8 = *(undefined4 *)(pdVar6 + 4);
      uStack_c4 = *(undefined4 *)((longlong)pdVar6 + 0x24);
      uStack_c0 = *(undefined4 *)(pdVar6 + 5);
      uStack_bc = *(undefined4 *)((longlong)pdVar6 + 0x2c);
    }
    param_1[4] = dVar17;
    param_1[5] = dVar14;
    param_1[6] = CONCAT44(uVar21,uVar20);
    param_1[7] = CONCAT44(uStack_c4,local_c8);
    param_1[8] = CONCAT44(uStack_bc,uStack_c0);
    param_1[9] = local_b8;
    uVar7 = *(undefined4 *)((longlong)param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
    *(undefined4 *)(param_1 + 0xb) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
    param_1[0xc] = param_3[2];
    FUN_144a7484c(&local_c8,&local_98);
    dVar11 = param_3[2] - (double)CONCAT44(uVar21,uVar20);
    dVar17 = *param_3 - dVar17;
    dVar14 = param_3[1] - dVar14;
    dVar18 = -local_98;
    dVar19 = -uStack_90;
    dVar12 = local_88 * -1.0;
    dVar13 = dStack_80 * 1.0;
    dVar22 = dVar17 * dVar12 - dVar18 * dVar11;
    dVar15 = dVar14 * dVar18 - dVar19 * dVar17;
    dVar16 = dVar11 * dVar19 - dVar12 * dVar14;
    dVar16 = dVar16 + dVar16;
    dVar22 = dVar22 + dVar22;
    dVar15 = dVar15 + dVar15;
    param_1[1] = (dVar15 * dVar19 - dVar22 * dVar12) + dVar13 * dVar16 + dVar17;
    param_1[2] = local_98 * dVar15 + dVar12 * dVar16 + dVar13 * dVar22 + dVar14;
    param_1[3] = dVar13 * dVar15 + dVar11 + (dVar22 * dVar18 - dVar16 * dVar19);
  }
  else {
    *param_1 = 0;
    uVar21 = DAT_14c8464e8._4_4_;
    uVar20 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    *(undefined4 *)(param_1 + 2) = uVar20;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar21;
    param_1[3] = DAT_14c8464f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14797c16e FUN_14797c16e body=1142 status=ok
// SIG undefined FUN_14797c16e(void)

undefined4 * FUN_14797c16e(double *param_1,undefined4 *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  double dVar15;
  double *pdVar16;
  uint uVar17;
  double *pdVar18;
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
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar15 = *param_1;
  if (dVar15 == 0.0) {
    *(double *)(param_2 + 4) = param_1[3];
    uVar25 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar26 = *(undefined4 *)(param_1 + 2);
    uVar27 = *(undefined4 *)((longlong)param_1 + 0x14);
    *param_2 = *(undefined4 *)(param_1 + 1);
    param_2[1] = uVar25;
    param_2[2] = uVar26;
    param_2[3] = uVar27;
    if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar1 = *(longlong *)((longlong)dVar15 + 0x1c8);
  if (lVar1 == 0) {
    uVar29 = SUB84(DAT_14c8464f0,0);
    uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    uVar23 = SUB84(DAT_14c8464f8,0);
    uVar24 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
    uVar19 = SUB84(DAT_14c846500,0);
    uVar20 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
    uVar21 = SUB84(DAT_14c846508,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
    uVar25 = (undefined4)DAT_14c8464e0;
    uVar26 = DAT_14c8464e0._4_4_;
    uVar27 = (undefined4)DAT_14c8464e8;
    uVar28 = DAT_14c8464e8._4_4_;
  }
  else {
    uVar29 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar30 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    uVar25 = *(undefined4 *)(lVar1 + 0x260);
    uVar26 = *(undefined4 *)(lVar1 + 0x264);
    uVar27 = *(undefined4 *)(lVar1 + 0x268);
    uVar28 = *(undefined4 *)(lVar1 + 0x26c);
    dVar11 = *(double *)(lVar1 + 0x240);
    dVar12 = *(double *)(lVar1 + 0x248);
    dVar2 = *(double *)(lVar1 + 0x250);
    dVar3 = *(double *)(lVar1 + 600);
    pdVar16 = *(double **)(lVar1 + 0x228);
    pdVar18 = param_1;
    local_f8 = dVar11;
    uStack_f0 = dVar12;
    local_e8 = dVar2;
    uStack_e0 = dVar3;
    if (pdVar16 == (double *)0x0) {
      pdVar18 = (double *)&DAT_00000040;
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar15 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar15;
      dVar15 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar15;
      dVar15 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar15;
      dVar15 = DAT_14c846508;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar16;
    }
    auVar8._8_4_ = (int)-(ulonglong)(dVar12 != pdVar16[1]);
    auVar8._0_8_ = -(ulonglong)(dVar11 != *pdVar16);
    auVar8._12_4_ = (int)(-(ulonglong)(dVar12 != pdVar16[1]) >> 0x20);
    iVar14 = movmskpd(SUB84(dVar15,0),auVar8);
    auVar9._8_4_ = (int)-(ulonglong)(dVar3 != pdVar16[3]);
    auVar9._0_8_ = -(ulonglong)(dVar2 != pdVar16[2]);
    auVar9._12_4_ = (int)(-(ulonglong)(dVar3 != pdVar16[3]) >> 0x20);
    uVar17 = movmskpd((int)pdVar18,auVar9);
    if ((uVar17 & 0x3fffffff) != 0 || iVar14 != 0) {
      *(undefined4 *)(pdVar16 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)pdVar16 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_e0._4_4_;
      *(undefined4 *)pdVar16 = (undefined4)local_f8;
      *(undefined4 *)((longlong)pdVar16 + 4) = local_f8._4_4_;
      *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_f0._4_4_;
      FUN_1448052ee(&local_f8,&local_d8);
      pdVar16[6] = local_c8;
      pdVar16[4] = local_d8;
      pdVar16[5] = dStack_d0;
    }
    uVar23 = SUB84(pdVar16[4],0);
    uVar24 = (undefined4)((ulonglong)pdVar16[4] >> 0x20);
    uVar19 = SUB84(pdVar16[5],0);
    uVar20 = (undefined4)((ulonglong)pdVar16[5] >> 0x20);
    uVar21 = SUB84(pdVar16[6],0);
    uVar22 = (undefined4)((ulonglong)pdVar16[6] >> 0x20);
  }
  if ((param_1[4] == (double)CONCAT44(uVar26,uVar25)) &&
     (!NAN(param_1[4]) && !NAN((double)CONCAT44(uVar26,uVar25)))) {
    if ((param_1[5] == (double)CONCAT44(uVar28,uVar27)) &&
       (!NAN(param_1[5]) && !NAN((double)CONCAT44(uVar28,uVar27)))) {
      if ((param_1[6] == (double)CONCAT44(uVar30,uVar29)) &&
         (!NAN(param_1[6]) && !NAN((double)CONCAT44(uVar30,uVar29)))) {
        if ((param_1[7] == (double)CONCAT44(uVar24,uVar23)) &&
           (!NAN(param_1[7]) && !NAN((double)CONCAT44(uVar24,uVar23)))) {
          if ((param_1[8] == (double)CONCAT44(uVar20,uVar19)) &&
             (!NAN(param_1[8]) && !NAN((double)CONCAT44(uVar20,uVar19)))) {
            if ((param_1[9] == (double)CONCAT44(uVar22,uVar21)) &&
               (!NAN(param_1[9]) && !NAN((double)CONCAT44(uVar22,uVar21)))) goto LAB_14797c456;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar25;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar26;
  *(undefined4 *)(param_1 + 5) = uVar27;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar28;
  param_1[6] = (double)CONCAT44(uVar30,uVar29);
  param_1[7] = (double)CONCAT44(uVar24,uVar23);
  param_1[8] = (double)CONCAT44(uVar20,uVar19);
  param_1[9] = (double)CONCAT44(uVar22,uVar21);
  dVar11 = (double)CONCAT44(uVar24,uVar23) * 0.01745329238474369;
  dVar12 = (double)CONCAT44(uVar20,uVar19) * 0.01745329238474369;
  dVar15 = (double)CONCAT44(uVar22,uVar21) * 0.01745329238474369;
  dVar2 = sin(dVar11);
  dVar3 = sin(dVar12);
  dVar4 = sin(dVar15);
  dVar5 = cos(dVar11);
  dVar6 = cos(dVar12);
  dVar7 = cos(dVar15);
  dVar13 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  dVar15 = param_1[3];
  dVar11 = param_1[1];
  dVar12 = param_1[2];
  dVar10 = (dVar2 * dVar11 - dVar5 * dVar4 * dVar12) + dVar5 * dVar7 * dVar15 + DAT_14c8464f0;
  param_1[10] = (double)CONCAT44(uVar26,uVar25) +
                dVar15 * -(dVar2 * dVar7 * dVar6 + dVar3 * dVar4) +
                dVar12 * (dVar2 * dVar4 * dVar6 - dVar3 * dVar7) + dVar11 * dVar5 * dVar6 +
                (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xb] = dVar15 * (dVar6 * dVar4 - dVar3 * dVar2 * dVar7) +
                 dVar12 * (dVar2 * dVar4 * dVar3 + dVar6 * dVar7) + dVar11 * dVar3 * dVar5 + dVar13
                 + (double)CONCAT44(uVar28,uVar27);
  param_1[0xc] = dVar10 + (double)CONCAT44(uVar30,uVar29);
LAB_14797c456:
  *(double *)(param_2 + 4) = param_1[0xc];
  uVar25 = *(undefined4 *)((longlong)param_1 + 0x54);
  uVar26 = *(undefined4 *)(param_1 + 0xb);
  uVar27 = *(undefined4 *)((longlong)param_1 + 0x5c);
  *param_2 = *(undefined4 *)(param_1 + 10);
  param_2[1] = uVar25;
  param_2[2] = uVar26;
  param_2[3] = uVar27;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_118);
}



// FUNCTION 14797c614 FUN_14797c614 body=54 status=ok
// SIG undefined FUN_14797c614(void)

longlong FUN_14797c614(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14798a656(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x50 + *param_1;
}



// FUNCTION 14797c64a FUN_14797c64a body=759 status=ok
// SIG undefined FUN_14797c64a(void)

void FUN_14797c64a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5,float param_6,float param_7,byte param_8)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_6 != 0.0) || (NAN(param_6))) {
    puVar8 = (undefined8 *)FUN_14797c614(param_1 + 10);
    puVar8[2] = param_2[2];
    uVar7 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar7;
    puVar8[5] = param_3[2];
    uVar7 = param_3[1];
    puVar8[3] = *param_3;
    puVar8[4] = uVar7;
    *(float *)(puVar8 + 6) = param_6;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    *(undefined4 *)((longlong)puVar8 + 0x34) = *param_4;
    *(undefined4 *)(puVar8 + 7) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar5;
    *(undefined4 *)(puVar8 + 8) = uVar6;
    *(undefined4 *)((longlong)puVar8 + 0x44) = param_5;
    *(float *)(puVar8 + 9) = param_7;
    *(uint *)((longlong)puVar8 + 0x4c) = (uint)param_8;
  }
  else {
    if ((param_7 != 0.0) || (NAN(param_7))) {
      iVar2 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
        FUN_14798a54a(param_1 + 4,iVar2);
      }
      *(float *)(param_1[4] + (longlong)iVar2 * 4) = param_7;
      puVar1 = (ulonglong *)(param_1 + 7);
      iVar2 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      local_80 = param_3;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
        FUN_14798a5d0(puVar1,iVar2);
      }
      uVar3 = param_1[7];
      uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      if ((uVar3 & 1) == 0) {
        uVar9 = uVar3;
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar2 * 0x40 + uVar9,param_2,param_4);
      iVar2 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
        FUN_14798a5d0(puVar1,iVar2);
      }
      param_3 = local_80;
      uVar3 = param_1[7];
      uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      if ((uVar3 & 1) == 0) {
        uVar9 = uVar3;
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar2 * 0x40 + uVar9,local_80,param_4);
      iVar2 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
        FUN_14798a5d0(puVar1,iVar2);
      }
      uVar3 = *puVar1;
      uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      if ((uVar3 & 1) == 0) {
        uVar9 = uVar3;
      }
      lVar10 = (longlong)iVar2 * 0x40 + uVar9;
    }
    else {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_140958944(param_1,iVar2);
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar2 * 0x40 + *param_1,param_2,param_4);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_140958944(param_1,iVar2);
      }
      lVar10 = (longlong)iVar2 * 0x40 + *param_1;
    }
    local_74 = param_5;
    FUN_140958884(lVar10,param_3,param_4);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14797c942 FUN_14797c942 body=157 status=ok
// SIG undefined FUN_14797c942(void)

void FUN_14797c942(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)(param_4 + 1);
  local_50 = *param_4;
  local_44 = 0x3f800000;
  puVar4 = (undefined4 *)FUN_14797c9e0(param_1 + 0x10);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
  puVar4[6] = param_3;
  FUN_1411ab38a(&local_50,&local_54);
  puVar4[7] = local_54;
  puVar4[8] = param_5;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


