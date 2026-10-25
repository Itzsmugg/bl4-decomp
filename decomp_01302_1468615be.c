// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468615be FUN_1468615be body=89 status=ok
// SIG undefined FUN_1468615be(void)

void FUN_1468615be(longlong param_1,int param_2)

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



// FUNCTION 146861618 FUN_146861618 body=132 status=ok
// SIG undefined FUN_146861618(void)

void FUN_146861618(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14686169c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14686169c FUN_14686169c body=90 status=ok
// SIG undefined FUN_14686169c(void)

void FUN_14686169c(longlong *param_1,int param_2)

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
  FUN_1468616f6();
  return;
}



// FUNCTION 1468616f6 FUN_1468616f6 body=52 status=ok
// SIG undefined FUN_1468616f6(void)

void FUN_1468616f6(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14686172a(param_1,param_2);
  return;
}



// FUNCTION 14686172a FUN_14686172a body=114 status=ok
// SIG undefined FUN_14686172a(void)

void FUN_14686172a(longlong *param_1,int param_2)

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



// FUNCTION 14686179c FUN_14686179c body=129 status=ok
// SIG undefined FUN_14686179c(void)

void FUN_14686179c(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_20 = param_2;
  local_14 = param_3;
  uVar2 = FUN_14686181e(param_1 + 0x10,uVar1 >> 0x10 ^ uVar1);
  FUN_1447cbafe(uVar2,local_24,&local_14,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686181e FUN_14686181e body=188 status=ok
// SIG undefined FUN_14686181e(void)

longlong FUN_14686181e(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1468618bd;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1468618dc(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1468618bd:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1468618dc FUN_1468618dc body=272 status=ok
// SIG undefined FUN_1468618dc(void)

undefined4 * FUN_1468618dc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1468619ee(param_1,local_48);
  FUN_146861b94(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_146861adc(param_1,param_3,local_40,local_48);
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
      FUN_146861cac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468619ee FUN_1468619ee body=238 status=ok
// SIG undefined FUN_1468619ee(void)

int * FUN_1468619ee(longlong *param_1,int *param_2)

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



// FUNCTION 146861adc FUN_146861adc body=184 status=ok
// SIG undefined FUN_146861adc(void)

undefined8 FUN_146861adc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1447a082e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146861c32(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146861b94 FUN_146861b94 body=156 status=ok
// SIG undefined FUN_146861b94(void)

undefined8 * FUN_146861b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14627166e(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146861c32 FUN_146861c32 body=122 status=ok
// SIG undefined FUN_146861c32(void)

void FUN_146861c32(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146861cac FUN_146861cac body=478 status=ok
// SIG undefined FUN_146861cac(void)

void FUN_146861cac(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
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



// FUNCTION 146861e8c FUN_146861e8c body=199 status=ok
// SIG undefined FUN_146861e8c(void)

void FUN_146861e8c(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x60;
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x60) == param_2) {
          if (lVar1 + 8 == 0 || lVar1 == 0) {
            return;
          }
          FUN_144a7cc9e(lVar1 + 8,param_3);
          if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
            return;
          }
          FUN_146861f54((longlong *)(param_1 + 0x10),param_2);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x58);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 146861f54 FUN_146861f54 body=136 status=ok
// SIG undefined FUN_146861f54(void)

void FUN_146861f54(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x60) == param_2) {
          FUN_146861fdc(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + *param_1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146861fdc FUN_146861fdc body=95 status=ok
// SIG undefined FUN_146861fdc(void)

void FUN_146861fdc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_14686203c();
  return;
}



// FUNCTION 14686203c FUN_14686203c body=82 status=ok
// SIG undefined FUN_14686203c(void)

void FUN_14686203c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(lVar1 + lVar2 + 8);
  FUN_146861c32(param_1,param_2);
  return;
}



// FUNCTION 14686208e FUN_14686208e body=181 status=ok
// SIG undefined FUN_14686208e(void)

longlong FUN_14686208e(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_146862126;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146862144(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146862126:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146862144 FUN_146862144 body=277 status=ok
// SIG undefined FUN_146862144(void)

undefined4 * FUN_146862144(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14686225a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146862340(param_1,param_3,local_40,local_48);
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
      FUN_1468623e2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686225a FUN_14686225a body=229 status=ok
// SIG undefined FUN_14686225a(void)

int * FUN_14686225a(longlong *param_1,int *param_2)

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



// FUNCTION 146862340 FUN_146862340 body=161 status=ok
// SIG undefined FUN_146862340(void)

undefined8 FUN_146862340(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14686172a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468623e2 FUN_1468623e2 body=477 status=ok
// SIG undefined FUN_1468623e2(void)

void FUN_1468623e2(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 1468625c0 FUN_1468625c0 body=132 status=ok
// SIG undefined FUN_1468625c0(void)

void FUN_1468625c0(longlong param_1,int param_2)

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



// FUNCTION 146862646 FUN_146862646 body=332 status=ok
// SIG undefined FUN_146862646(void)

undefined4 *
FUN_146862646(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1457b14ae(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1457b1418(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1457b1594(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146862794 FUN_146862794 body=138 status=ok
// SIG undefined FUN_146862794(void)

void FUN_146862794(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14686281e FUN_14686281e body=154 status=ok
// SIG undefined FUN_14686281e(void)

undefined8 FUN_14686281e(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1468628b8(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468628b8 FUN_1468628b8 body=96 status=ok
// SIG undefined FUN_1468628b8(void)

void FUN_1468628b8(longlong *param_1,int param_2)

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
  FUN_146862794(param_1,param_2,1);
  return;
}



// FUNCTION 146862918 FUN_146862918 body=322 status=ok
// SIG undefined FUN_146862918(void)

void FUN_146862918(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 146862a5c FUN_146862a5c body=285 status=ok
// SIG undefined FUN_146862a5c(void)

void FUN_146862a5c(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146862b7a FUN_146862b7a body=229 status=ok
// SIG undefined FUN_146862b7a(void)

int * FUN_146862b7a(longlong *param_1,int *param_2)

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



// FUNCTION 146862c60 FUN_146862c60 body=476 status=ok
// SIG undefined FUN_146862c60(void)

void FUN_146862c60(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146862e3d FUN_146862e3d body=649 status=ok
// SIG undefined FUN_146862e3d(void)

void FUN_146862e3d(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 auStack_378 [32];
  longlong *local_358;
  int local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_348;
    do {
      puVar11 = (undefined8 *)*plVar7;
      puVar9 = (undefined8 *)plVar7[1];
      local_34c = (int)plVar7[2];
      iVar3 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar11) >> 3);
      puVar12 = puVar9;
      puVar14 = puVar11;
      local_358 = plVar7;
      if (local_34c != 0) {
LAB_146862f06:
        puVar10 = puVar11;
        plVar7 = local_358;
        if (8 < (int)(iVar3 + 1U)) {
          uVar5 = iVar3 + 1U >> 1;
          uVar1 = puVar10[uVar5];
          puVar10[uVar5] = *puVar10;
          *puVar10 = uVar1;
          puVar8 = puVar12 + 1;
          puVar11 = puVar10;
          do {
            puVar2 = puVar11 + 1;
            puVar13 = puVar11 + 1;
            do {
              puVar11 = puVar13;
              puVar4 = puVar2;
              if (puVar12 < puVar11) break;
              iVar3 = FUN_144a78538(puVar10,puVar11);
              puVar2 = puVar4 + 1;
              puVar13 = puVar11 + 1;
            } while (-1 < iVar3);
            puVar2 = puVar8 + -2;
            do {
              puVar13 = puVar8;
              puVar6 = puVar2;
              puVar8 = puVar13 + -1;
              if (puVar8 <= puVar10) break;
              iVar3 = FUN_144a78538(puVar8,puVar10);
              puVar2 = puVar6 + -1;
            } while (-1 < iVar3);
            if (puVar8 < puVar11) goto LAB_146862f93;
            uVar1 = *puVar11;
            *puVar11 = *puVar8;
            *puVar8 = uVar1;
          } while( true );
        }
        for (; local_358 = plVar7, puVar9 = puVar10, puVar11 = puVar10, puVar10 < puVar12;
            puVar12 = puVar12 + -1) {
          while (puVar14 = puVar9, puVar11 = puVar11 + 1, puVar11 <= puVar12) {
            iVar3 = FUN_144a78538(puVar14,puVar11);
            puVar9 = puVar11;
            if (-1 < iVar3) {
              puVar9 = puVar14;
            }
          }
          uVar1 = *puVar14;
          *puVar14 = *puVar12;
          *puVar12 = uVar1;
          plVar7 = local_358;
        }
        goto LAB_14686309d;
      }
LAB_1468630b7:
      FUN_1468630c7(puVar11);
      plVar7 = local_358;
LAB_14686309d:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146862f93:
  uVar1 = *puVar10;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  local_34c = local_34c + -1;
  puVar13 = puVar13 + -2;
  if ((longlong)puVar6 - (longlong)puVar14 < (longlong)puVar9 - (longlong)puVar4) {
    plVar7 = local_358;
    if (puVar11 < puVar12) {
      *local_358 = (longlong)puVar11;
      local_358[1] = (longlong)puVar12;
      *(int *)(local_358 + 2) = local_34c;
      plVar7 = local_358 + 3;
    }
    puVar9 = puVar6;
    puVar11 = puVar10;
    if (puVar8 <= puVar10 + 1) goto LAB_14686309d;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *local_358 = (longlong)puVar10;
      local_358[1] = (longlong)puVar13;
      *(int *)(local_358 + 2) = local_34c;
      local_358 = local_358 + 3;
    }
    plVar7 = local_358;
    puVar10 = puVar4;
    puVar13 = puVar12;
    puVar9 = puVar12;
    if (puVar12 <= puVar11) goto LAB_14686309d;
  }
  local_358 = plVar7;
  iVar3 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar10) >> 3);
  puVar12 = puVar13;
  puVar14 = puVar10;
  if (local_34c == 0) goto LAB_1468630b7;
  goto LAB_146862f06;
}



// FUNCTION 1468630c7 FUN_1468630c7 body=358 status=ok
// SIG undefined FUN_1468630c7(void)

void FUN_1468630c7(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar10 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar10;
joined_r0x0001468630fd:
    do {
      iVar5 = iVar10 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar10 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (iVar4 = FUN_144a78538(param_1 + iVar6,param_1 + iVar5), -1 < iVar4)) {
          iVar5 = iVar6;
        }
        puVar1 = param_1 + iVar10;
        puVar2 = param_1 + iVar5;
        iVar10 = FUN_144a78538(puVar1,puVar2);
        if (iVar10 < 0) {
          uVar3 = *puVar1;
          *puVar1 = *puVar2;
          *puVar2 = uVar3;
          iVar10 = iVar5;
          goto joined_r0x0001468630fd;
        }
      }
      bVar11 = iVar7 != 0;
      iVar10 = iVar7 + -1;
      iVar7 = iVar10;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar8 - 1];
      param_1[uVar8 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar9 = uVar8 - 1;
          iVar10 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar10 = iVar10 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar10 < (longlong)uVar9) &&
               (iVar5 = FUN_144a78538(param_1 + iVar10,param_1 + iVar5), -1 < iVar5)) {
              iVar6 = iVar10;
            }
            puVar1 = param_1 + iVar7;
            puVar2 = param_1 + iVar6;
            iVar10 = FUN_144a78538(puVar1,puVar2);
            if (-1 < iVar10) break;
            uVar3 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar3;
            iVar10 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar9);
          uVar3 = *param_1;
          *param_1 = param_1[uVar8 - 2];
          param_1[uVar8 - 2] = uVar3;
          uVar8 = uVar9;
        } while (2 < uVar9);
      }
    }
  }
  return;
}



// FUNCTION 14686323e FUN_14686323e body=44 status=ok
// SIG undefined FUN_14686323e(void)

void FUN_14686323e(undefined8 param_1,longlong *param_2)

{
  FUN_1401a56c2(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146863280 FUN_146863280 body=54 status=ok
// SIG undefined FUN_146863280(void)

undefined1 FUN_146863280(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1468634b0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1468632c2 FUN_1468632c2 body=276 status=ok
// SIG undefined FUN_1468632c2(void)

undefined4
FUN_1468632c2(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    FUN_1468575d6(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = FUN_1468575d6(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    FUN_1401a56c2(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468633d8 FUN_1468633d8 body=39 status=ok
// SIG undefined FUN_1468633d8(void)

void FUN_1468633d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_146857756(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 146863414 FUN_146863414 body=59 status=ok
// SIG undefined FUN_146863414(void)

undefined8 FUN_146863414(longlong *param_1)

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



// FUNCTION 1468634b0 FUN_1468634b0 body=93 status=ok
// SIG undefined FUN_1468634b0(void)

undefined8 * FUN_1468634b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401a56c2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401b397c(param_1,iVar1);
      FUN_1401b3808(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14686350e FUN_14686350e body=48 status=ok
// SIG undefined FUN_14686350e(void)

void FUN_14686350e(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1401a56c2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14686353e FUN_14686353e body=37 status=ok
// SIG undefined FUN_14686353e(void)

void FUN_14686353e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x150);
  FUN_1468636b2(param_2);
  return;
}



// FUNCTION 14686358a FUN_14686358a body=63 status=ok
// SIG undefined FUN_14686358a(void)

undefined1 FUN_14686358a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14686376e(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 1468635f2 FUN_1468635f2 body=59 status=ok
// SIG undefined FUN_1468635f2(void)

undefined8 FUN_1468635f2(longlong *param_1)

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



// FUNCTION 14686363e FUN_14686363e body=38 status=ok
// SIG undefined FUN_14686363e(void)

void FUN_14686363e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_14019571a(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1468636b2 FUN_1468636b2 body=187 status=ok
// SIG undefined FUN_1468636b2(void)

void FUN_1468636b2(undefined8 *param_1)

{
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x142) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  return;
}



// FUNCTION 14686376e FUN_14686376e body=152 status=ok
// SIG undefined FUN_14686376e(void)

longlong FUN_14686376e(longlong param_1,longlong param_2)

{
  FUN_1406fa324();
  FUN_1406fa324(param_1 + 0x10,param_2 + 0x10);
  FUN_14591fc3c(param_1 + 0x20,param_2 + 0x20);
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  FUN_146863806(param_1 + 0x40,param_2 + 0x40);
  FUN_141283630(param_1 + 0x50,param_2 + 0x50);
  FUN_144881636(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14686385e(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  return param_1;
}



// FUNCTION 146863806 FUN_146863806 body=88 status=ok
// SIG undefined FUN_146863806(void)

undefined8 * FUN_146863806(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1401b3898(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14686385e FUN_14686385e body=122 status=ok
// SIG undefined FUN_14686385e(void)

longlong FUN_14686385e(longlong param_1,longlong param_2)

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
    FUN_1468638d8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1468638d8 FUN_1468638d8 body=119 status=ok
// SIG undefined FUN_1468638d8(void)

undefined8 * FUN_1468638d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14039512e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1468639e6 FUN_1468639e6 body=54 status=ok
// SIG undefined FUN_1468639e6(void)

undefined1 FUN_1468639e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146863b7e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 146863a5a FUN_146863a5a body=170 status=ok
// SIG undefined FUN_146863a5a(void)

void FUN_146863a5a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  FUN_144a78877(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4),
                ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146863b10 FUN_146863b10 body=32 status=ok
// SIG undefined FUN_146863b10(void)

void FUN_146863b10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14128b0c2(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 146863b7e FUN_146863b7e body=146 status=ok
// SIG undefined FUN_146863b7e(void)

undefined4 * FUN_146863b7e(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  uVar14 = param_2[8];
  uVar15 = param_2[9];
  uVar16 = param_2[10];
  uVar17 = param_2[0xb];
  uVar18 = param_2[0xd];
  uVar19 = param_2[0xe];
  uVar20 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar19;
  param_1[0xf] = uVar20;
  param_1[8] = uVar14;
  param_1[9] = uVar15;
  param_1[10] = uVar16;
  param_1[0xb] = uVar17;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  FUN_14685b48a(param_1 + 0x10,param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  lVar4 = *(longlong *)(param_2 + 0x14);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  *(longlong *)(param_1 + 0x14) = lVar4;
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
  FUN_146863c10(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 146863c10 FUN_146863c10 body=104 status=ok
// SIG undefined FUN_146863c10(void)

void * FUN_146863c10(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 2;
    }
    else {
      FUN_140204e64(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 8);
        if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 146863c7a FUN_146863c7a body=90 status=ok
// SIG undefined FUN_146863c7a(void)

void FUN_146863c7a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146863cd4 FUN_146863cd4 body=62 status=ok
// SIG undefined FUN_146863cd4(void)

void FUN_146863cd4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146863d12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146863d12 FUN_146863d12 body=112 status=ok
// SIG undefined FUN_146863d12(void)

ulonglong FUN_146863d12(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146863d4c;
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
LAB_146863d4c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146863d82 FUN_146863d82 body=147 status=ok
// SIG undefined FUN_146863d82(void)

void FUN_146863d82(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146863e16 FUN_146863e16 body=103 status=ok
// SIG undefined FUN_146863e16(void)

undefined8 FUN_146863e16(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x14)) {
    uVar4 = uVar2 / 0x14 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x14,4);
  }
  return uVar3;
}



// FUNCTION 146863e7d FUN_146863e7d body=22 status=ok
// SIG undefined FUN_146863e7d(void)

void FUN_146863e7d(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x14);
    return;
  }
  return;
}



// FUNCTION 146863e94 FUN_146863e94 body=62 status=ok
// SIG undefined FUN_146863e94(void)

void FUN_146863e94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146863ed2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 146863ed2 FUN_146863ed2 body=112 status=ok
// SIG undefined FUN_146863ed2(void)

ulonglong FUN_146863ed2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146863f0c;
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
LAB_146863f0c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146863f42 FUN_146863f42 body=86 status=ok
// SIG undefined FUN_146863f42(void)

void FUN_146863f42(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146863f98 FUN_146863f98 body=132 status=ok
// SIG undefined FUN_146863f98(void)

void FUN_146863f98(longlong param_1,int param_2)

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



// FUNCTION 14686401e FUN_14686401e body=147 status=ok
// SIG undefined FUN_14686401e(void)

void FUN_14686401e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468640b2 FUN_1468640b2 body=43 status=ok
// SIG undefined FUN_1468640b2(void)

void FUN_1468640b2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1468640de FUN_1468640de body=115 status=ok
// SIG undefined FUN_1468640de(void)

void FUN_1468640de(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146864152 FUN_146864152 body=128 status=ok
// SIG undefined FUN_146864152(void)

void FUN_146864152(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140393d0c(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_14682e058(param_1);
  return;
}



// FUNCTION 1468641d4 FUN_1468641d4 body=128 status=ok
// SIG undefined FUN_1468641d4(void)

void FUN_1468641d4(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146864256(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1468642dc(param_1);
  return;
}



// FUNCTION 146864256 FUN_146864256 body=132 status=ok
// SIG undefined FUN_146864256(void)

void FUN_146864256(longlong param_1,int param_2)

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



// FUNCTION 1468642dc FUN_1468642dc body=62 status=ok
// SIG undefined FUN_1468642dc(void)

void FUN_1468642dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14686431a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 14686431a FUN_14686431a body=93 status=ok
// SIG undefined FUN_14686431a(void)

ulonglong FUN_14686431a(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146864378 FUN_146864378 body=132 status=ok
// SIG undefined FUN_146864378(void)

void FUN_146864378(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1468643fe(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x28 + *param_1),0,(ulonglong)uVar2 * 0x28);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146864492(param_1);
  return;
}



// FUNCTION 1468643fe FUN_1468643fe body=147 status=ok
// SIG undefined FUN_1468643fe(void)

void FUN_1468643fe(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146864492 FUN_146864492 body=62 status=ok
// SIG undefined FUN_146864492(void)

void FUN_146864492(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468644d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,4);
  }
  return;
}



// FUNCTION 1468644d0 FUN_1468644d0 body=112 status=ok
// SIG undefined FUN_1468644d0(void)

ulonglong FUN_1468644d0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14686450a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,4);
      param_2 = param_2 / 0x28;
    }
  }
LAB_14686450a:
  return param_2 & 0xffffffff;
}



// FUNCTION 146864540 FUN_146864540 body=140 status=ok
// SIG undefined FUN_146864540(void)

void FUN_146864540(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1468645ce(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_146864654(param_1,param_2,iVar1 - param_2);
  FUN_1468646ae(param_1);
  return;
}



// FUNCTION 1468645ce FUN_1468645ce body=132 status=ok
// SIG undefined FUN_1468645ce(void)

void FUN_1468645ce(longlong param_1,int param_2)

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



// FUNCTION 146864654 FUN_146864654 body=89 status=ok
// SIG undefined FUN_146864654(void)

void FUN_146864654(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1468640b2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1468646ae FUN_1468646ae body=62 status=ok
// SIG undefined FUN_1468646ae(void)

void FUN_1468646ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468646ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1468646ec FUN_1468646ec body=93 status=ok
// SIG undefined FUN_1468646ec(void)

ulonglong FUN_1468646ec(uint param_1,uint param_2)

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



// FUNCTION 14686474a FUN_14686474a body=144 status=ok
// SIG undefined FUN_14686474a(void)

longlong FUN_14686474a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1468647dc();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_146864788;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_146864876(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c << 5;
LAB_146864788:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468647dc FUN_1468647dc body=153 status=ok
// SIG undefined FUN_1468647dc(void)

int FUN_1468647dc(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Str2 = (wchar_t *)*param_3;
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        iVar4 = *(int *)(lVar3 + 8 + lVar6);
        if (iVar4 == iVar2) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar4 = wcscmp(*(wchar_t **)(lVar3 + lVar6),_Str2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        else if (iVar4 + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0x18 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146864876 FUN_146864876 body=304 status=ok
// SIG undefined FUN_146864876(void)

undefined4 * FUN_146864876(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  FUN_14588ec7e(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *local_40 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar3 = FUN_1468649a8(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146864aaa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468649a8 FUN_1468649a8 body=120 status=ok
// SIG undefined FUN_1468649a8(void)

undefined8 FUN_1468649a8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1468647dc(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146864a20(param_1,*param_4,1);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146864a20 FUN_146864a20 body=138 status=ok
// SIG undefined FUN_146864a20(void)

void FUN_146864a20(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146864aaa FUN_146864aaa body=459 status=ok
// SIG undefined FUN_146864aaa(void)

void FUN_146864aaa(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar6 * 0x20;
        iVar7 = *(int *)(lVar3 + 8 + lVar11);
        iVar4 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar4 = 0;
        }
        iVar7 = FUN_1447053be(*(undefined8 *)(lVar3 + lVar11),iVar4 * 2);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146864c76 FUN_146864c76 body=144 status=ok
// SIG undefined FUN_146864c76(void)

longlong FUN_146864c76(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_146864d08();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_146864cb4;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_146864da2(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c << 5;
LAB_146864cb4:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146864d08 FUN_146864d08 body=153 status=ok
// SIG undefined FUN_146864d08(void)

int FUN_146864d08(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Str2 = (wchar_t *)*param_3;
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        iVar4 = *(int *)(lVar3 + 8 + lVar6);
        if (iVar4 == iVar2) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar4 = wcscmp(*(wchar_t **)(lVar3 + lVar6),_Str2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        else if (iVar4 + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0x18 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146864da2 FUN_146864da2 body=304 status=ok
// SIG undefined FUN_146864da2(void)

undefined4 * FUN_146864da2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  FUN_146864ed4(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *local_40 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar3 = FUN_146864fba(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14686509e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146864ed4 FUN_146864ed4 body=229 status=ok
// SIG undefined FUN_146864ed4(void)

int * FUN_146864ed4(longlong *param_1,int *param_2)

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



// FUNCTION 146864fba FUN_146864fba body=114 status=ok
// SIG undefined FUN_146864fba(void)

undefined8 FUN_146864fba(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146864d08(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14686502c(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14686502c FUN_14686502c body=114 status=ok
// SIG undefined FUN_14686502c(void)

void FUN_14686502c(longlong *param_1,int param_2)

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



// FUNCTION 14686509e FUN_14686509e body=459 status=ok
// SIG undefined FUN_14686509e(void)

void FUN_14686509e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar6 * 0x20;
        iVar7 = *(int *)(lVar3 + 8 + lVar11);
        iVar4 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar4 = 0;
        }
        iVar7 = FUN_1447053be(*(undefined8 *)(lVar3 + lVar11),iVar4 * 2);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14686526a FUN_14686526a body=188 status=ok
// SIG undefined FUN_14686526a(void)

longlong FUN_14686526a(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  int *local_30;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_146865309;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_146865328(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_146865309:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 146865328 FUN_146865328 body=286 status=ok
// SIG undefined FUN_146865328(void)

undefined4 * FUN_146865328(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146865448(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_14686552e(param_1,param_3,local_40,local_48);
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
      local_40[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_146865648(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146865448 FUN_146865448 body=229 status=ok
// SIG undefined FUN_146865448(void)

int * FUN_146865448(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 14686552e FUN_14686552e body=144 status=ok
// SIG undefined FUN_14686552e(void)

void FUN_14686552e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1468655be(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146865596;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146865596:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1468655be FUN_1468655be body=138 status=ok
// SIG undefined FUN_1468655be(void)

void FUN_1468655be(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146865648 FUN_146865648 body=467 status=ok
// SIG undefined FUN_146865648(void)

void FUN_146865648(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar2 = *(uint *)(lVar3 + lVar7);
        uVar10 = (longlong)
                 (int)((uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
                      ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 14686581c FUN_14686581c body=187 status=ok
// SIG undefined FUN_14686581c(void)

longlong * FUN_14686581c(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1468658ba;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_1468658d8(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1468658ba:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1468658d8 FUN_1468658d8 body=279 status=ok
// SIG undefined FUN_1468658d8(void)

undefined4 * FUN_1468658d8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
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
  FUN_140283634(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar2 = FUN_1468659f0(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_146865b04(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468659f0 FUN_1468659f0 body=137 status=ok
// SIG undefined FUN_1468659f0(void)

undefined8 FUN_1468659f0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_146865a7a(param_1,*param_4,1);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146865a7a FUN_146865a7a body=138 status=ok
// SIG undefined FUN_146865a7a(void)

void FUN_146865a7a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146865b04 FUN_146865b04 body=500 status=ok
// SIG undefined FUN_146865b04(void)

void FUN_146865b04(longlong *param_1)

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
        uVar3 = *(undefined8 *)(lVar2 + lVar5 * 0x14);
        uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar8 = ((uint)uVar3 << 0x10 | uVar7) + (uVar7 >> 4) + (uVar8 << 0x13 | uVar8 & 0xffff);
        uVar10 = (longlong)
                 (int)((uVar8 >> 2) + uVar8 * 0x40 + (int)((ulonglong)uVar3 >> 0x20) + 0x9e3779b9 ^
                      uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x10 + lVar5 * 0x14) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc + lVar5 * 0x14) =
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



// FUNCTION 146865cfa FUN_146865cfa body=167 status=ok
// SIG undefined FUN_146865cfa(void)

longlong FUN_146865cfa(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_146865da2();
  if (iVar1 != -1) {
    if (*param_1 + (longlong)iVar1 * 0x1c != 0) {
      lVar2 = (longlong)iVar1 * 0x1c + *param_1;
      goto LAB_146865d47;
    }
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_146865e1e(param_1,&local_2c,param_2);
  lVar2 = *param_1 + (longlong)local_2c * 0x1c;
LAB_146865d47:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146865da2 FUN_146865da2 body=123 status=ok
// SIG undefined FUN_146865da2(void)

int FUN_146865da2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146865e1e FUN_146865e1e body=279 status=ok
// SIG undefined FUN_146865e1e(void)

undefined4 * FUN_146865e1e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146865f36(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  cVar6 = FUN_146866032(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[6] = param_3;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                               4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146866114(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146865f36 FUN_146865f36 body=251 status=ok
// SIG undefined FUN_146865f36(void)

int * FUN_146865f36(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 146866032 FUN_146866032 body=98 status=ok
// SIG undefined FUN_146866032(void)

undefined8 FUN_146866032(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146865da2(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146866094(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146866094 FUN_146866094 body=128 status=ok
// SIG undefined FUN_146866094(void)

void FUN_146866094(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 146866114 FUN_146866114 body=448 status=ok
// SIG undefined FUN_146866114(void)

void FUN_146866114(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_1468662d6(lVar3 + lVar4);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468662d6 FUN_1468662d6 body=225 status=ok
// SIG undefined FUN_1468662d6(void)

uint FUN_1468662d6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar4 = *param_1;
  uVar3 = param_1[1];
  uVar4 = (uVar4 << 0x10 | uVar4 & 0xffff) + ((uVar4 & 0xffff) >> 4) +
          ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10);
  uVar4 = (uVar4 >> 2) + 0x9e3779b9 +
          (uVar3 << 0x10 | uVar3 & 0xffff) + ((uVar3 & 0xffff) >> 4) +
          ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + uVar4 * 0x40 ^ uVar4;
  uVar4 = (uVar4 >> 2) + 0x9e3779b9 +
          (uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
          ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10) + uVar4 * 0x40 ^ uVar4;
  return (uVar4 >> 2) + 0x9e3779b9 +
         (uVar1 << 0x10 | uVar1 & 0xffff) + ((uVar1 & 0xffff) >> 4) +
         ((uVar1 >> 0x10) << 0x13 | uVar1 >> 0x10) + uVar4 * 0x40 ^ uVar4;
}



// FUNCTION 1468663b8 FUN_1468663b8 body=144 status=ok
// SIG undefined FUN_1468663b8(void)

longlong FUN_1468663b8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_14686644a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x34;
    if (lVar3 + lVar2 != 0) goto LAB_1468663f6;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_1468664be(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c * 0x34;
LAB_1468663f6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686644a FUN_14686644a body=115 status=ok
// SIG undefined FUN_14686644a(void)

int FUN_14686644a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x34;
        if ((((*(longlong *)(lVar2 + lVar4) == *param_3) &&
             (*(longlong *)(lVar2 + 8 + lVar4) == param_3[1])) &&
            (*(longlong *)(lVar2 + 0x18 + lVar4) == param_3[3])) &&
           (*(longlong *)(lVar2 + 0x20 + lVar4) == param_3[4])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x2c);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468664be FUN_1468664be body=295 status=ok
// SIG undefined FUN_1468664be(void)

undefined4 * FUN_1468664be(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  FUN_1468665e6(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *(undefined8 *)(local_40 + 8) = *(undefined8 *)(puVar1 + 8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar7;
  local_40[6] = uVar8;
  local_40[7] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  local_40[10] = *puVar2;
  local_40[0xb] = 0xffffffff;
  cVar10 = FUN_1468666c8(param_1,param_3,local_40,local_48);
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
      local_40[0xc] = param_3;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xb] =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
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
      FUN_1468667ac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468665e6 FUN_1468665e6 body=226 status=ok
// SIG undefined FUN_1468665e6(void)

int * FUN_1468665e6(longlong *param_1,int *param_2)

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
      FUN_1401562b6(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x34);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x34) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x34 + *param_1;
  return param_2;
}



// FUNCTION 1468666c8 FUN_1468666c8 body=111 status=ok
// SIG undefined FUN_1468666c8(void)

undefined8 FUN_1468666c8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_14686644a(), iVar12 != -1)) {
    lVar2 = *param_1;
    lVar13 = (longlong)iVar12 * 0x34;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    uVar3 = *(undefined8 *)(param_3 + 8);
    *(undefined4 *)(lVar2 + 0x28 + lVar13) = param_3[10];
    *(undefined8 *)(lVar2 + 0x20 + lVar13) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar13);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1 = (undefined4 *)(lVar2 + lVar13);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_146866738(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 146866738 FUN_146866738 body=116 status=ok
// SIG undefined FUN_146866738(void)

void FUN_146866738(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x34) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x34) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x34 + 4) = uVar5;
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



// FUNCTION 1468667ac FUN_1468667ac body=441 status=ok
// SIG undefined FUN_1468667ac(void)

void FUN_1468667ac(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x34;
        iVar6 = FUN_146866966(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x30 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x2c + lVar10) =
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



// FUNCTION 146866966 FUN_146866966 body=374 status=ok
// SIG undefined FUN_146866966(void)

uint FUN_146866966(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[4];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  uVar5 = ((uint)uVar1 << 0x10 | uVar6) + (uVar6 >> 4) + (uVar8 << 0x13 | uVar8 & 0xffff);
  uVar2 = param_1[3];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar7 = ((uint)uVar2 << 0x10 | uVar6) + (uVar6 >> 4) + (uVar8 << 0x13 | uVar8 & 0xffff);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar8 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar6 = (uint)uVar4 & 0xffff;
  uVar9 = ((uint)uVar4 << 0x10 | uVar6) + (uVar6 >> 4) + (uVar8 << 0x13 | uVar8 & 0xffff);
  uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar6 = (uint)uVar3 & 0xffff;
  uVar8 = ((uint)uVar3 << 0x10 | uVar6) + (uVar6 >> 4) + (uVar8 << 0x13 | uVar8 & 0xffff);
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + (int)((ulonglong)uVar3 >> 0x20) ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 +
          uVar8 * 0x40 +
          ((uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + (int)((ulonglong)uVar4 >> 0x20) ^ uVar9) ^
          uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 +
          uVar8 * 0x40 +
          ((uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) ^ uVar7) ^
          uVar8;
  return (uVar8 >> 2) + 0x9e3779b9 +
         uVar8 * 0x40 +
         ((uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) ^ uVar5) ^
         uVar8;
}



// FUNCTION 146866adc FUN_146866adc body=113 status=ok
// SIG undefined FUN_146866adc(void)

void FUN_146866adc(longlong *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar1 = (ulonglong *)param_1[1];
  local_c = param_2;
  if (puVar1[1] < *puVar1 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146866b4e FUN_146866b4e body=148 status=ok
// SIG undefined FUN_146866b4e(void)

void FUN_146866b4e(longlong param_1,undefined8 *param_2)

{
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x68));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x78));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x88));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x98));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0xa8));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x28));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x48));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x38));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x58));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_146866e78(*param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 146866be2 FUN_146866be2 body=197 status=ok
// SIG undefined FUN_146866be2(void)

void FUN_146866be2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [168];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146866eea(local_e0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] << 4;
    do {
      FUN_14021219d(local_e0,lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_146866e78(param_1,local_30);
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,local_38,(longlong)local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(local_e0);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146866ca8 FUN_146866ca8 body=462 status=ok
// SIG undefined FUN_146866ca8(void)

void FUN_146866ca8(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)*param_2;
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    do {
      local_58 = (ulonglong)*(uint *)(lVar3 + lVar6);
      (**(code **)(*(longlong *)*puVar4 + 0x160))((longlong *)*puVar4,&local_58);
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
    puVar4 = (undefined8 *)*param_2;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar6 = 0;
    do {
      local_58 = *(ulonglong *)(lVar3 + lVar6);
      (**(code **)(*(longlong *)*puVar4 + 0x160))((longlong *)*puVar4,&local_58);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    puVar4 = (undefined8 *)*param_2;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    lVar6 = 0;
    do {
      puVar1 = (ulonglong *)(lVar3 + lVar6);
      local_58 = *puVar1;
      uStack_50 = (undefined4)puVar1[1];
      uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
      FUN_1468671b2(puVar4,&local_58);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
    puVar4 = (undefined8 *)*param_2;
  }
  local_58 = *(ulonglong *)(param_1 + 0x90);
  uStack_50 = *(undefined4 *)(param_1 + 0x98);
  FUN_14686725a(puVar4);
  uVar5 = *param_2;
  iVar2 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      FUN_146866adc(uVar5,*(undefined4 *)(lVar3 + lVar6));
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
    uVar5 = *param_2;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      FUN_146866adc(uVar5,*(undefined4 *)(lVar3 + lVar6));
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
  }
  FUN_14686700e(param_2,param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    uVar5 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    do {
      FUN_14686733a(uVar5,*(undefined2 *)(lVar3 + lVar6));
      lVar6 = lVar6 + 2;
    } while ((longlong)iVar2 * 2 != lVar6);
  }
  FUN_14686709c(param_2,param_1 + 0x10);
  FUN_14686712a(param_2,param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146866e78 FUN_146866e78 body=113 status=ok
// SIG undefined FUN_146866e78(void)

void FUN_146866e78(longlong *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar1 = (ulonglong *)param_1[1];
  local_c = param_2;
  if (puVar1[1] < *puVar1 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146866eea FUN_146866eea body=126 status=ok
// SIG undefined FUN_146866eea(void)

longlong * FUN_146866eea(longlong *param_1)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = (longlong)(param_1 + 0x15);
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = (longlong)&PTR_FUN_149e5da80;
  return param_1;
}



// FUNCTION 146866f68 FUN_146866f68 body=58 status=ok
// SIG undefined FUN_146866f68(void)

longlong FUN_146866f68(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146866fa2 FUN_146866fa2 body=107 status=ok
// SIG undefined FUN_146866fa2(void)

undefined8 FUN_146866fa2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0xa0,local_28);
  FUN_140ba7826(param_2,L"FBufferArchive ",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686700e FUN_14686700e body=141 status=ok
// SIG undefined FUN_14686700e(void)

void FUN_14686700e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      local_31 = *(undefined1 *)(lVar2 + lVar6);
      plVar3 = (longlong *)*plVar1;
      puVar4 = (ulonglong *)plVar3[1];
      if (puVar4[1] < *puVar4 + 1) {
        (**(code **)(*plVar3 + 0x170))(plVar3,&local_31,1);
      }
      else {
        *puVar4 = *puVar4 + 1;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar5 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686709c FUN_14686709c body=140 status=ok
// SIG undefined FUN_14686709c(void)

void FUN_14686709c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (undefined8 *)*param_1;
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      uVar2 = *(ulonglong *)(lVar1 + lVar5);
      local_40 = uVar2 & 0xffffffff;
      plVar3 = (longlong *)*param_1;
      (**(code **)(*plVar3 + 0x160))(plVar3,&local_40);
      FUN_146866adc(param_1,uVar2 >> 0x20);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686712a FUN_14686712a body=134 status=ok
// SIG undefined FUN_14686712a(void)

void FUN_14686712a(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_2[1] != 0) {
    param_1 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)*param_2;
    puVar1 = (undefined8 *)((longlong)puVar4 + (longlong)(int)param_2[1] * 0xc);
    do {
      local_38 = *puVar4;
      uVar2 = *(undefined4 *)(puVar4 + 1);
      plVar3 = (longlong *)*param_1;
      (**(code **)(*plVar3 + 0x160))(plVar3,&local_38);
      FUN_146866adc(param_1,uVar2);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    } while (puVar4 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468671b2 FUN_1468671b2 body=167 status=ok
// SIG undefined FUN_1468671b2(void)

void FUN_1468671b2(undefined8 *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[1] = 0;
  local_48 = (ulonglong)*param_2;
  local_40[0] = (ulonglong)param_2[1];
  local_28 = (ulonglong)param_2[3];
  local_40[2] = (ulonglong)param_2[2];
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_48);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,local_40);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,&local_28);
  (**(code **)(*plVar1 + 0x160))(plVar1,local_40 + 2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686725a FUN_14686725a body=222 status=ok
// SIG undefined FUN_14686725a(void)

void FUN_14686725a(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      local_58[0] = *(undefined8 *)(lVar2 + 0x20 + lVar5);
      puVar1 = (undefined4 *)(lVar2 + lVar5);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar5);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_78);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x160))(plVar4,&uStack_70);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x160))(plVar4,local_58);
      (**(code **)(*plVar4 + 0x160))(plVar4,&uStack_60);
      lVar5 = lVar5 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686733a FUN_14686733a body=120 status=ok
// SIG undefined FUN_14686733a(void)

void FUN_14686733a(longlong *param_1,undefined2 param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [46];
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar1 = (ulonglong *)param_1[1];
  local_a = param_2;
  if (puVar1[1] < *puVar1 + 2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_a,2);
    }
    else {
      FUN_146821860(param_1,&local_a,2);
    }
  }
  else {
    *puVar1 = *puVar1 + 2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468673b4 FUN_1468673b4 body=120 status=ok
// SIG undefined FUN_1468673b4(void)

undefined4 FUN_1468673b4(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    local_c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686742d FUN_14686742d body=580 status=ok
// SIG undefined FUN_14686742d(void)

void FUN_14686742d(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1[0x14];
  uStack_60 = *(undefined4 *)(param_1 + 0x15);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_146867caa(*param_2);
  plVar8 = (longlong *)*param_2;
  bVar5 = *(byte *)(*plVar8 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xd), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xc];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    bVar5 = *(byte *)(*plVar8 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xf), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xe];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined8 *)(lVar4 + lVar9) = local_68;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x10];
  uStack_60 = *(undefined4 *)(param_1 + 0x11);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_146867d5e(plVar8);
  plVar8 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar8;
  bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0x13), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0x12];
    lVar9 = 0;
    do {
      FUN_146867df0(plVar8,&local_68);
      *(undefined8 *)(lVar4 + 0x20 + lVar9) = local_48;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 5), (longlong)iVar3 != 0)) {
    lVar4 = param_1[4];
    lVar9 = 0;
    do {
      uVar6 = FUN_1468673b4(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar4 = param_1[8];
    lVar9 = 0;
    do {
      uVar6 = FUN_1468673b4(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar7 = *(longlong **)*param_2;
  }
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[6],(longlong)*(int *)(param_1 + 7));
  (**(code **)(**(longlong **)*param_2 + 0x170))
            (*(longlong **)*param_2,param_1[10],(longlong)*(int *)(param_1 + 0xb) * 2);
  local_68 = param_1[2];
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_146867e9e(*param_2,&local_68);
  local_68 = *param_1;
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_146867f3c(*param_2,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867672 FUN_146867672 body=582 status=ok
// SIG undefined FUN_146867672(void)

void FUN_146867672(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)*param_2;
  bVar5 = *(byte *)(*plVar8 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xd), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xc];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    bVar5 = *(byte *)(*plVar8 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xf), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xe];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined8 *)(lVar4 + lVar9) = local_68;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x10];
  uStack_60 = *(undefined4 *)(param_1 + 0x11);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_146867d5e(plVar8);
  plVar8 = (longlong *)*param_2;
  if (((*(byte *)(*plVar8 + 0x29) & 2) == 0) &&
     (iVar3 = *(int *)(param_1 + 0x13), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0x12];
    lVar9 = 0;
    do {
      FUN_146867df0(plVar8,&local_68);
      *(undefined8 *)(lVar4 + 0x20 + lVar9) = local_48;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x14];
  uStack_60 = *(undefined4 *)(param_1 + 0x15);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_146867caa(plVar8);
  plVar8 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar8;
  bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 5), (longlong)iVar3 != 0)) {
    lVar4 = param_1[4];
    lVar9 = 0;
    do {
      uVar6 = FUN_1468673b4(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar4 = param_1[8];
    lVar9 = 0;
    do {
      uVar6 = FUN_1468673b4(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar7 = *(longlong **)*param_2;
  }
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[6],(longlong)*(int *)(param_1 + 7));
  (**(code **)(**(longlong **)*param_2 + 0x170))
            (*(longlong **)*param_2,param_1[10],(longlong)*(int *)(param_1 + 0xb) * 2);
  local_68 = param_1[2];
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_146867e9e(*param_2,&local_68);
  local_68 = *param_1;
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_146867f3c(*param_2,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468678b9 FUN_1468678b9 body=149 status=ok
// SIG undefined FUN_1468678b9(void)

void FUN_1468678b9(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_146867c30(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14686794e FUN_14686794e body=283 status=ok
// SIG undefined FUN_14686794e(void)

void FUN_14686794e(longlong param_1,undefined8 *param_2)

{
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x68) * 4;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x78) * 8;
  *(longlong *)*param_2 =
       (longlong)*(int *)(param_1 + 0x88) * 0x10 + (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc)
  ;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x98) * 0x28
  ;
  *(longlong *)*param_2 =
       (longlong)*(int *)(param_1 + 0xa8) * 0x10 + (*(longlong *)*param_2 + 7U & 0xfffffffffffffff8)
  ;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x28) * 4;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x48) * 4;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x38);
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 1U & 0xfffffffffffffffe) + (longlong)*(int *)(param_1 + 0x58) * 2;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x18) * 8;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 8) * 0xc;
  return;
}



// FUNCTION 146867a69 FUN_146867a69 body=454 status=ok
// SIG undefined FUN_146867a69(void)

void FUN_146867a69(undefined8 *param_1,undefined8 *param_2)

{
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0xc] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xd) * 4;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0xe] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xf) * 8;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0x10] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x11) * 0x10;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0x12] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x13) * 0x28;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 7 & 0xfffffffffffffff8;
  param_1[0x14] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x15) * 0x10;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[4] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 5) * 4;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[8] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 9) * 4;
  param_1[6] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 7);
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 1 & 0xfffffffffffffffe;
  param_1[10] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xb) * 2;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[2] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 3) * 8;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  *param_1 = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 1) * 0xc;
  return;
}



// FUNCTION 146867c30 FUN_146867c30 body=120 status=ok
// SIG undefined FUN_146867c30(void)

undefined4 FUN_146867c30(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    local_c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867caa FUN_146867caa body=178 status=ok
// SIG undefined FUN_146867caa(void)

void FUN_146867caa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
    plVar5 = (longlong *)*param_2;
    plVar4 = plVar5 + (longlong)(int)param_2[1] * 2;
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_14021219d(*param_1,&local_68);
      lVar1 = local_68;
      uVar2 = (undefined4)uStack_60;
      uVar3 = uStack_60._4_4_;
      if (*plVar5 != 0) {
        FUN_1400020a8();
      }
      *plVar5 = lVar1;
      *(undefined4 *)(plVar5 + 1) = uVar2;
      *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867d5e FUN_146867d5e body=144 status=ok
// SIG undefined FUN_146867d5e(void)

void FUN_146867d5e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
    puVar2 = (undefined4 *)*param_2;
    puVar1 = puVar2 + (longlong)(int)param_2[1] * 4;
    do {
      FUN_146867df0(param_1,local_50);
      *puVar2 = local_50[0];
      puVar2[1] = local_48;
      puVar2[2] = local_38;
      puVar2[3] = local_30;
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867df0 FUN_146867df0 body=172 status=ok
// SIG undefined FUN_146867df0(void)

longlong FUN_146867df0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_48);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,&local_38);
  (**(code **)(*plVar1 + 0x160))(plVar1,&uStack_40);
  FUN_1427b15c2(param_2,local_48);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x20) = local_38;
  *(undefined8 *)(param_2 + 0x18) = uStack_40;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867e9e FUN_146867e9e body=157 status=ok
// SIG undefined FUN_146867e9e(void)

void FUN_146867e9e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      local_40 = 0;
      (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_40);
      uVar4 = local_40 & 0xffffffff;
      lVar3 = FUN_1468673b4(param_1);
      *(ulonglong *)(lVar1 + lVar5) = lVar3 << 0x20 | uVar4;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867f3c FUN_146867f3c body=159 status=ok
// SIG undefined FUN_146867f3c(void)

void FUN_146867f3c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      local_3c = 0;
      (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_3c);
      local_34 = FUN_1468673b4(param_1);
      *(undefined8 *)(lVar1 + lVar3) = local_3c;
      *(undefined4 *)(lVar1 + 8 + lVar3) = local_34;
      lVar3 = lVar3 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146867fdc FUN_146867fdc body=582 status=ok
// SIG undefined FUN_146867fdc(void)

void FUN_146867fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)*param_2;
  bVar5 = *(byte *)(*plVar8 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xd), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xc];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    bVar5 = *(byte *)(*plVar8 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xf), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xe];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined8 *)(lVar4 + lVar9) = local_68;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x10];
  uStack_60 = *(undefined4 *)(param_1 + 0x11);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_141585b56(plVar8);
  plVar8 = (longlong *)*param_2;
  if (((*(byte *)(*plVar8 + 0x29) & 2) == 0) &&
     (iVar3 = *(int *)(param_1 + 0x13), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0x12];
    lVar9 = 0;
    do {
      FUN_145ed145e(plVar8,&local_68);
      *(undefined8 *)(lVar4 + 0x20 + lVar9) = local_48;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x14];
  uStack_60 = *(undefined4 *)(param_1 + 0x15);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_145ed13a8(plVar8);
  plVar8 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar8;
  bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 5), (longlong)iVar3 != 0)) {
    lVar4 = param_1[4];
    lVar9 = 0;
    do {
      uVar6 = FUN_14170f73a(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar4 = param_1[8];
    lVar9 = 0;
    do {
      uVar6 = FUN_14170f73a(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar7 = *(longlong **)*param_2;
  }
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[6],(longlong)*(int *)(param_1 + 7));
  (**(code **)(**(longlong **)*param_2 + 0x170))
            (*(longlong **)*param_2,param_1[10],(longlong)*(int *)(param_1 + 0xb) * 2);
  local_68 = param_1[2];
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_144a9061a(*param_2,&local_68);
  local_68 = *param_1;
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_145ed1306(*param_2,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146868223 FUN_146868223 body=283 status=ok
// SIG undefined FUN_146868223(void)

void FUN_146868223(longlong param_1,undefined8 *param_2)

{
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x68) * 4;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x78) * 8;
  *(longlong *)*param_2 =
       (longlong)*(int *)(param_1 + 0x88) * 0x10 + (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc)
  ;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x98) * 0x28
  ;
  *(longlong *)*param_2 =
       (longlong)*(int *)(param_1 + 0xa8) * 0x10 + (*(longlong *)*param_2 + 7U & 0xfffffffffffffff8)
  ;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x28) * 4;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x48) * 4;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x38);
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 1U & 0xfffffffffffffffe) + (longlong)*(int *)(param_1 + 0x58) * 2;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 0x18) * 8;
  *(longlong *)*param_2 =
       (*(longlong *)*param_2 + 3U & 0xfffffffffffffffc) + (longlong)*(int *)(param_1 + 8) * 0xc;
  return;
}



// FUNCTION 14686833e FUN_14686833e body=454 status=ok
// SIG undefined FUN_14686833e(void)

void FUN_14686833e(undefined8 *param_1,undefined8 *param_2)

{
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0xc] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xd) * 4;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0xe] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xf) * 8;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0x10] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x11) * 0x10;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[0x12] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x13) * 0x28;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 7 & 0xfffffffffffffff8;
  param_1[0x14] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0x15) * 0x10;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[4] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 5) * 4;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[8] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 9) * 4;
  param_1[6] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 7);
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 1 & 0xfffffffffffffffe;
  param_1[10] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 0xb) * 2;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  param_1[2] = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 3) * 8;
  *(ulonglong *)*param_2 = *(ulonglong *)*param_2 + 3 & 0xfffffffffffffffc;
  *param_1 = *(undefined8 *)*param_2;
  *(longlong *)*param_2 = *(longlong *)*param_2 + (longlong)*(int *)(param_1 + 1) * 0xc;
  return;
}



// FUNCTION 146868504 FUN_146868504 body=582 status=ok
// SIG undefined FUN_146868504(void)

void FUN_146868504(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)*param_2;
  bVar5 = *(byte *)(*plVar8 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xd), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xc];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    bVar5 = *(byte *)(*plVar8 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xf), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xe];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined8 *)(lVar4 + lVar9) = local_68;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x10];
  uStack_60 = *(undefined4 *)(param_1 + 0x11);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_141585b56(plVar8);
  plVar8 = (longlong *)*param_2;
  if (((*(byte *)(*plVar8 + 0x29) & 2) == 0) &&
     (iVar3 = *(int *)(param_1 + 0x13), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0x12];
    lVar9 = 0;
    do {
      FUN_145ed145e(plVar8,&local_68);
      *(undefined8 *)(lVar4 + 0x20 + lVar9) = local_48;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x14];
  uStack_60 = *(undefined4 *)(param_1 + 0x15);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_145ed13a8(plVar8);
  plVar8 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar8;
  bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 5), (longlong)iVar3 != 0)) {
    lVar4 = param_1[4];
    lVar9 = 0;
    do {
      uVar6 = FUN_14170f73a(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar5 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar5 & 2) == 0) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar4 = param_1[8];
    lVar9 = 0;
    do {
      uVar6 = FUN_14170f73a(plVar8);
      *(undefined4 *)(lVar4 + lVar9) = uVar6;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar7 = *(longlong **)*param_2;
  }
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[6],(longlong)*(int *)(param_1 + 7));
  (**(code **)(**(longlong **)*param_2 + 0x170))
            (*(longlong **)*param_2,param_1[10],(longlong)*(int *)(param_1 + 0xb) * 2);
  local_68 = param_1[2];
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_144a9061a(*param_2,&local_68);
  local_68 = *param_1;
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_145ed1306(*param_2,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686874b FUN_14686874b body=48 status=ok
// SIG undefined FUN_14686874b(void)

void FUN_14686874b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146868782 FUN_146868782 body=152 status=ok
// SIG undefined FUN_146868782(void)

undefined8 * FUN_146868782(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_149e5dd20;
  _Dst[6] = 0;
  *(undefined4 *)(_Dst + 7) = 0;
  _Dst[2] = 0;
  _Dst[3] = 0;
  *(undefined8 *)((longlong)_Dst + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x44) = 0;
  _Dst[10] = 0;
  *(undefined4 *)(_Dst + 0xb) = 0;
  _Dst[0x10] = 0;
  *(undefined4 *)(_Dst + 0x11) = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  *(undefined8 *)((longlong)_Dst + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x94) = 0;
  _Dst[0x14] = 0;
  *(undefined4 *)(_Dst + 0x15) = 0;
  return _Dst;
}



// FUNCTION 14686881a FUN_14686881a body=38 status=ok
// SIG undefined FUN_14686881a(void)

undefined8 FUN_14686881a(undefined8 param_1,int param_2)

{
  FUN_14686888a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146868840 FUN_146868840 body=74 status=ok
// SIG undefined FUN_146868840(void)

undefined8 * FUN_146868840(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5dd28;
  puVar1 = TlsGetValue(DAT_14c75ebf0);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ebf0,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686888a FUN_14686888a body=146 status=ok
// SIG undefined FUN_14686888a(void)

void FUN_14686888a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5dd20;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14686891c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146868a8a(param_1 + 2);
  *param_1 = &PTR_FUN_149e5dd28;
  puVar1 = TlsGetValue(DAT_14c75ebf0);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146868915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c75ebf0,(LPVOID)0x0);
  return;
}



// FUNCTION 14686891c FUN_14686891c body=52 status=ok
// SIG undefined FUN_14686891c(void)

void FUN_14686891c(longlong *param_1)

{
  FUN_146868950();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146868950 FUN_146868950 body=313 status=ok
// SIG undefined FUN_146868950(void)

void FUN_146868950(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 146868a8a FUN_146868a8a body=52 status=ok
// SIG undefined FUN_146868a8a(void)

void FUN_146868a8a(longlong *param_1)

{
  FUN_146868abe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146868abe FUN_146868abe body=349 status=ok
// SIG undefined FUN_146868abe(void)

void FUN_146868abe(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146868c1c FUN_146868c1c body=196 status=ok
// SIG undefined FUN_146868c1c(void)

undefined8 FUN_146868c1c(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0x41;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146868ce1 FUN_146868ce1 body=196 status=ok
// SIG undefined FUN_146868ce1(void)

undefined8 FUN_146868ce1(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0x41;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146868da6 FUN_146868da6 body=62 status=ok
// SIG undefined FUN_146868da6(void)

void FUN_146868da6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146868de4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146868de4 FUN_146868de4 body=93 status=ok
// SIG undefined FUN_146868de4(void)

ulonglong FUN_146868de4(uint param_1,uint param_2)

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



// FUNCTION 146868e42 FUN_146868e42 body=473 status=ok
// SIG undefined FUN_146868e42(void)

void FUN_146868e42(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 14686901c FUN_14686901c body=132 status=ok
// SIG undefined FUN_14686901c(void)

void FUN_14686901c(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1468690a0(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1468690a0 FUN_1468690a0 body=87 status=ok
// SIG undefined FUN_1468690a0(void)

void FUN_1468690a0(longlong *param_1,int param_2)

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
  FUN_1468690f8();
  return;
}



// FUNCTION 1468690f8 FUN_1468690f8 body=114 status=ok
// SIG undefined FUN_1468690f8(void)

void FUN_1468690f8(longlong *param_1,int param_2)

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



// FUNCTION 14686916a FUN_14686916a body=132 status=ok
// SIG undefined FUN_14686916a(void)

void FUN_14686916a(longlong param_1,int param_2)

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



// FUNCTION 1468691f0 FUN_1468691f0 body=96 status=ok
// SIG undefined FUN_1468691f0(void)

void FUN_1468691f0(longlong param_1,int param_2)

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



// FUNCTION 146869250 FUN_146869250 body=110 status=ok
// SIG undefined FUN_146869250(void)

void FUN_146869250(longlong param_1,uint param_2)

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
    FUN_146869402(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_146868e42(param_1);
    return;
  }
  FUN_1468692be(param_1);
  FUN_146869402(param_1,param_2);
  return;
}



// FUNCTION 1468692be FUN_1468692be body=322 status=ok
// SIG undefined FUN_1468692be(void)

void FUN_1468692be(longlong *param_1)

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



// FUNCTION 146869402 FUN_146869402 body=128 status=ok
// SIG undefined FUN_146869402(void)

void FUN_146869402(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 146869484 FUN_146869484 body=335 status=ok
// SIG undefined FUN_146869484(void)

undefined4 * FUN_146869484(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
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
  FUN_1468695d4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1468696ba(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      FUN_146868e42(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468695d4 FUN_1468695d4 body=230 status=ok
// SIG undefined FUN_1468695d4(void)

int * FUN_1468695d4(longlong *param_1,int *param_2)

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



// FUNCTION 1468696ba FUN_1468696ba body=128 status=ok
// SIG undefined FUN_1468696ba(void)

undefined8 FUN_1468696ba(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1468690f8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14686973a FUN_14686973a body=104 status=ok
// SIG undefined FUN_14686973a(void)

void FUN_14686973a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1468697a4(param_1,*param_2,*param_3);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_14686aa36(param_1,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468697a4 FUN_1468697a4 body=178 status=ok
// SIG undefined FUN_1468697a4(void)

longlong FUN_1468697a4(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar3 = *(int *)((longlong)plVar4 +
                  (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while (*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2);
  if (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) == param_3) {
    return lVar1 + lVar5 * 0x18 + 8;
  }
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while ((*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2) ||
          (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) != param_3));
  return lVar1 + lVar5 * 0x18 + 8;
}



// FUNCTION 146869856 FUN_146869856 body=340 status=ok
// SIG undefined FUN_146869856(void)

undefined4 * FUN_146869856(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468699ac(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  FUN_1427b3a18(local_40 + 2,uVar1);
  *(undefined4 *)(local_40 + 0x46) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146869a9c(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x234) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x46) =
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
      FUN_14686a006(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468699ac FUN_1468699ac body=240 status=ok
// SIG undefined FUN_1468699ac(void)

int * FUN_1468699ac(longlong *param_1,int *param_2)

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
      FUN_146271746(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x240);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x240) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x240 + *param_1;
  return param_2;
}



// FUNCTION 146869a9c FUN_146869a9c body=165 status=ok
// SIG undefined FUN_146869a9c(void)

undefined8 FUN_146869a9c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x240);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x240) == *param_3) {
          FUN_140010906((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x230);
          FUN_146869f8c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x230);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146869b42 FUN_146869b42 body=118 status=ok
// SIG undefined FUN_146869b42(void)

void * FUN_146869b42(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x88);
  pvVar2 = *(void **)((longlong)param_2 + 0x80);
  *(int *)((longlong)param_1 + 0x88) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_146869dee(param_1,iVar1);
    pvVar2 = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 146869bb8 FUN_146869bb8 body=95 status=ok
// SIG undefined FUN_146869bb8(void)

void FUN_146869bb8(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x108) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 8;
    return;
  }
  FUN_146869c18(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_146869c80(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146869c18 FUN_146869c18 body=104 status=ok
// SIG undefined FUN_146869c18(void)

void FUN_146869c18(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146869cc8(param_1,0,iVar3,0x20);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = param_3;
  return;
}



// FUNCTION 146869c80 FUN_146869c80 body=72 status=ok
// SIG undefined FUN_146869c80(void)

void FUN_146869c80(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 9) = 0;
    *(undefined8 *)((longlong)param_1 + 0x11) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_146869d56(param_1,param_2);
    param_1 = param_1 + 4;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 146869cc8 FUN_146869cc8 body=142 status=ok
// SIG undefined FUN_146869cc8(void)

void FUN_146869cc8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 146869d56 FUN_146869d56 body=151 status=ok
// SIG undefined FUN_146869d56(void)

undefined8 * FUN_146869d56(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14001cc68(0x110,0x10);
    *(undefined8 *)(lVar2 + 0x100) = 0;
    lVar3 = *(longlong *)(lVar1 + 0x100);
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      lVar3 = lVar1;
    }
    FUN_146869bb8(lVar2,lVar3,*(undefined4 *)(lVar1 + 0x108),0);
  }
  lVar1 = param_1[2];
  param_1[2] = lVar2;
  if (lVar1 != 0) {
    FUN_1447240f2(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 146869dee FUN_146869dee body=99 status=ok
// SIG undefined FUN_146869dee(void)

void FUN_146869dee(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 9) {
    iVar3 = 8;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    iVar3 = (int)(uVar1 >> 4);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_146869e1f;
  }
  iVar2 = iVar3;
  FUN_146869e52(param_1,0,iVar2,0x10);
LAB_146869e1f:
  *(int *)(param_1 + 0x8c) = iVar2;
  return;
}



// FUNCTION 146869e52 FUN_146869e52 body=142 status=ok
// SIG undefined FUN_146869e52(void)

void FUN_146869e52(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 146869ee0 FUN_146869ee0 body=88 status=ok
// SIG undefined FUN_146869ee0(void)

void FUN_146869ee0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146869f38 FUN_146869f38 body=83 status=ok
// SIG undefined FUN_146869f38(void)

void FUN_146869f38(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  puVar4 = (undefined8 *)(param_2 + 0x20);
  do {
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
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146869f8c FUN_146869f8c body=122 status=ok
// SIG undefined FUN_146869f8c(void)

void FUN_146869f8c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x240) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x240) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x240 + 4) = uVar4;
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



// FUNCTION 14686a006 FUN_14686a006 body=484 status=ok
// SIG undefined FUN_14686a006(void)

void FUN_14686a006(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x240;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x234 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x230 + lVar6) =
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



// FUNCTION 14686a1ec FUN_14686a1ec body=164 status=ok
// SIG undefined FUN_14686a1ec(void)

void FUN_14686a1ec(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar3 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar5 = (int *)((longlong)plVar3 + uVar4 * 4);
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14686a290(param_1);
        }
        else {
          piVar5 = (int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
        }
        iVar1 = *piVar5;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14686a290 FUN_14686a290 body=201 status=ok
// SIG undefined FUN_14686a290(void)

void FUN_14686a290(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14686a35a FUN_14686a35a body=107 status=ok
// SIG undefined FUN_14686a35a(void)

void FUN_14686a35a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14686a3c6(param_1,*param_2,*param_3);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_14686a478(param_1,local_24,&local_38,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686a3c6 FUN_14686a3c6 body=178 status=ok
// SIG undefined FUN_14686a3c6(void)

longlong FUN_14686a3c6(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar3 = *(int *)((longlong)plVar4 +
                  (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while (*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2);
  if (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) == param_3) {
    return lVar1 + lVar5 * 0x18 + 8;
  }
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while ((*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2) ||
          (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) != param_3));
  return lVar1 + lVar5 * 0x18 + 8;
}



// FUNCTION 14686a478 FUN_14686a478 body=317 status=ok
// SIG undefined FUN_14686a478(void)

undefined4 *
FUN_14686a478(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140503402(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
    *(uint *)((longlong)local_38 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_14686a5b6(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686a5b6 FUN_14686a5b6 body=474 status=ok
// SIG undefined FUN_14686a5b6(void)

void FUN_14686a5b6(longlong *param_1)

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



// FUNCTION 14686a792 FUN_14686a792 body=139 status=ok
// SIG undefined FUN_14686a792(void)

void FUN_14686a792(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x240) == param_2) {
          FUN_14686a81e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x240 + *param_1 + 0x230);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14686a81e FUN_14686a81e body=140 status=ok
// SIG undefined FUN_14686a81e(void)

void FUN_14686a81e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x240;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x234 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x230 + lVar6 * 0x240);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x240 + 0x230);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x230);
  FUN_140010906(*param_1 + lVar2 + 0x10);
  FUN_146869f8c(param_1,param_2);
  return;
}



// FUNCTION 14686a8aa FUN_14686a8aa body=164 status=ok
// SIG undefined FUN_14686a8aa(void)

void FUN_14686a8aa(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar3 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar5 = (int *)((longlong)plVar3 + uVar4 * 4);
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14686a94e(param_1);
        }
        else {
          piVar5 = (int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
        }
        iVar1 = *piVar5;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14686a94e FUN_14686a94e body=93 status=ok
// SIG undefined FUN_14686a94e(void)

void FUN_14686a94e(longlong *param_1,int param_2)

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
  FUN_14686a9ac(param_1,param_2,1);
  return;
}



// FUNCTION 14686a9ac FUN_14686a9ac body=138 status=ok
// SIG undefined FUN_14686a9ac(void)

void FUN_14686a9ac(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14686aa36 FUN_14686aa36 body=302 status=ok
// SIG undefined FUN_14686aa36(void)

undefined4 * FUN_14686aa36(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14686ab66(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_14686ac4c(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686ab66 FUN_14686ab66 body=230 status=ok
// SIG undefined FUN_14686ab66(void)

int * FUN_14686ab66(longlong *param_1,int *param_2)

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



// FUNCTION 14686ac4c FUN_14686ac4c body=474 status=ok
// SIG undefined FUN_14686ac4c(void)

void FUN_14686ac4c(longlong *param_1)

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



// FUNCTION 14686ae28 FUN_14686ae28 body=38 status=ok
// SIG undefined FUN_14686ae28(void)

undefined8 FUN_14686ae28(undefined8 param_1,int param_2)

{
  FUN_145cffe62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686ae4e FUN_14686ae4e body=38 status=ok
// SIG undefined FUN_14686ae4e(void)

undefined8 FUN_14686ae4e(undefined8 param_1,int param_2)

{
  FUN_145cffeae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686ae74 FUN_14686ae74 body=74 status=ok
// SIG undefined FUN_14686ae74(void)

undefined8 * FUN_14686ae74(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5ddc8;
  puVar1 = TlsGetValue(DAT_14c75ebf4);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ebf4,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686aebe FUN_14686aebe body=122 status=ok
// SIG undefined FUN_14686aebe(void)

undefined8 * FUN_14686aebe(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
  FUN_1460308d6(_Dst);
  puVar2 = _Dst + 0x21;
  _Dst[0x21] = &PTR_FUN_149e5ddf0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 0x22) = DVar1;
  *_Dst = &PTR_FUN_149e5ddd0;
  _Dst[0x21] = &PTR_FUN_149e5dde8;
  if (_Dst == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 14686af38 FUN_14686af38 body=38 status=ok
// SIG undefined FUN_14686af38(void)

undefined8 FUN_14686af38(undefined8 param_1,int param_2)

{
  FUN_14686afd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686af5e FUN_14686af5e body=48 status=ok
// SIG undefined FUN_14686af5e(void)

longlong FUN_14686af5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_14686afd8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686af8e FUN_14686af8e body=74 status=ok
// SIG undefined FUN_14686af8e(void)

undefined8 * FUN_14686af8e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5ddf0;
  puVar1 = TlsGetValue(DAT_14c75ebf8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ebf8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686afd8 FUN_14686afd8 body=75 status=ok
// SIG undefined FUN_14686afd8(void)

void FUN_14686afd8(longlong param_1)

{
  LPVOID pvVar1;
  
  *(undefined ***)(param_1 + 0x108) = &PTR_FUN_149e5ddf0;
  pvVar1 = TlsGetValue(DAT_14c75ebf8);
  if (pvVar1 == (LPVOID)(param_1 + 0x108)) {
    TlsSetValue(DAT_14c75ebf8,(LPVOID)0x0);
  }
  FUN_145cffeae(param_1);
  return;
}



// FUNCTION 14686b024 thunk_FUN_14041e92e body=5 status=ok
// SIG undefined thunk_FUN_14041e92e(void)

undefined8 thunk_FUN_14041e92e(void)

{
  undefined1 auStack_38 [32];
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9493a8) {
    FUN_144b3d300(&DAT_14c9493a8);
    if (DAT_14c9493a8 == -1) {
      FUN_1446f470e(&uStack_18,L"GameDataHandle",1);
      DAT_14c9493a0 = FUN_141473ad5(uStack_18);
      _Init_thread_footer(&DAT_14c9493a8);
    }
  }
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9493a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686b02a FUN_14686b02a body=827 status=ok
// SIG undefined FUN_14686b02a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14686b02a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947dd0) && (FUN_144b3d300(&DAT_14c947dd0), DAT_14c947dd0 == -1)) {
    _DAT_14c947da0 = 0;
    _DAT_14c947da8 = 0;
    DAT_14c947d80 = 0;
    _DAT_14c947d88 = 0;
    _DAT_14c947dac = 0xffffffff00000080;
    DAT_14c947db4 = 0;
    DAT_14c947dc0 = (undefined *)0x0;
    DAT_14c947dc8 = 0;
    atexit(FUN_1427b4363);
    _Init_thread_footer(&DAT_14c947dd0);
  }
  if (DAT_14c872ce0 == 0 || (DAT_14c947d7c & 1) != 0) goto LAB_14686b091;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_a8 = &DAT_14c872ce8;
  iVar2 = FUN_14105aa76(DAT_14c872ce0,L"GbxCoreRedirects",L"GameDataCategoryNameRedirects");
  if (iVar2 == 0) {
LAB_14686b27c:
    plVar4 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    if ((longlong)(int)uStack_70 == 0) goto LAB_14686b27c;
    lVar10 = (longlong)(int)uStack_70 << 4;
    lVar9 = local_78;
    local_a0 = param_2;
    do {
      iVar2 = FUN_1403de9f2(lVar9,&local_88,&DAT_149e06196,1);
      if ((iVar2 != 0) && ((int)uStack_80 == 2)) {
        FUN_14033cb48(local_88);
        FUN_140db34f4(local_88 + 2,0x29,0);
        puVar6 = &DAT_149dfb77a;
        if ((int)local_88[3] != 0) {
          puVar6 = (undefined2 *)local_88[2];
        }
        FUN_1446f470e(local_90,puVar6,1);
        puVar6 = &DAT_149dfb77a;
        if ((int)local_88[1] != 0) {
          puVar6 = (undefined2 *)*local_88;
        }
        FUN_1446f470e(local_98,puVar6 + 1,1);
        local_60 = local_98;
        local_58 = local_90;
        FUN_146873bc6(&DAT_14c947d80,local_4c,&local_60,0);
      }
      lVar9 = lVar9 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    uVar8 = uStack_80 & 0xffffffff;
    plVar4 = local_88;
    param_2 = local_a0;
  }
  DAT_14c947d7c = 1;
  FUN_1447a1747(plVar4,uVar8);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14686b091:
  if (DAT_14c947d88 != DAT_14c947db4) {
    lVar9 = *param_1;
    uVar1 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar5 = (uint)lVar9 & 0xffff;
    puVar7 = &DAT_14c947db8;
    if (DAT_14c947dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c947dc0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c947dc8 - 1U &
                              (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar5) +
                              (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar4 = (longlong *)(DAT_14c947d80 + (longlong)iVar2 * 0x18);
      if (*plVar4 == lVar9) {
        if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
          lVar9 = plVar4[1];
          *param_2 = lVar9;
          uVar3 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
          goto LAB_14686b0a5;
        }
        break;
      }
      iVar2 = (int)plVar4[2];
    }
  }
  uVar3 = 0;
LAB_14686b0a5:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686b366 FUN_14686b366 body=460 status=ok
// SIG undefined FUN_14686b366(void)

undefined8 * FUN_14686b366(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_8b8 [32];
  undefined8 *local_898;
  undefined1 *local_890;
  undefined1 *local_888;
  int local_880;
  undefined *local_878;
  undefined4 local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = &local_48;
  local_860 = local_868;
  FUN_14005eb5c(param_2,&local_868);
  puVar1 = local_868;
  local_878 = &DAT_149e5e8d6;
  local_870 = 2;
  iVar5 = (int)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
  local_880 = 0;
  if (0 < iVar5) {
    local_880 = iVar5;
  }
  local_888 = local_868 + ((longlong)iVar5 * 2 - (ulonglong)(uint)(local_880 * 2));
  iVar2 = FUN_144a08910(&local_888,&local_878,0);
  local_898 = param_1;
  if (iVar2 == -1) {
    *param_1 = *param_2;
  }
  else {
    FUN_1446f82e2(param_1,iVar2,puVar1,1);
    local_890 = param_3;
    if (param_3 != (undefined1 *)0x0) {
      while( true ) {
        iVar6 = iVar2 + 2;
        local_878 = &DAT_149e5e8d6;
        local_870 = 2;
        local_880 = iVar5 - iVar6;
        if (iVar5 <= iVar5 - iVar6) {
          local_880 = iVar5;
        }
        if (local_880 < 1) {
          local_880 = 0;
        }
        local_888 = puVar1 + ((longlong)iVar5 * 2 - (ulonglong)(uint)(local_880 * 2));
        iVar3 = FUN_144a08910(&local_888,&local_878,0);
        iVar2 = iVar3 + 2 + iVar2;
        if (iVar3 == -1) {
          iVar2 = -1;
        }
        if (iVar2 == -1) break;
        iVar3 = iVar2 - iVar6;
        if (iVar3 == 0) {
LAB_14686b4ab:
          iVar6 = iVar3 + -0xe;
        }
        else {
          iVar4 = iVar3;
          if (0xd < iVar3) {
            iVar4 = 0xe;
          }
          iVar6 = wcsncmp((wchar_t *)(puVar1 + (longlong)iVar6 * 2),L"SkipNexusAccum",
                          (longlong)iVar4);
          if (iVar6 == 0) goto LAB_14686b4ab;
        }
        if (iVar6 == 0) {
          *local_890 = 1;
        }
      }
    }
  }
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_48 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_898;
}



// FUNCTION 14686b534 FUN_14686b534 body=88 status=ok
// SIG undefined FUN_14686b534(void)

longlong FUN_14686b534(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14170fc78();
  lVar2 = 0;
  if (cVar1 != '\0') {
    lVar2 = param_1;
  }
  cVar1 = FUN_14170fc78(param_2);
  if (((param_2 == 0 || cVar1 != '\x01') || (lVar2 == 0)) ||
     ((*(int *)(param_2 + 0x38) <= *(int *)(lVar2 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
       param_2 + 0x30)))) {
    param_2 = lVar2;
  }
  return param_2;
}



// FUNCTION 14686b58c thunk_FUN_144aff86e body=5 status=ok
// SIG undefined thunk_FUN_144aff86e(void)

undefined8 thunk_FUN_144aff86e(void)

{
  undefined1 auStack_38 [32];
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949388) {
    FUN_144b3d300(&DAT_14c949388);
    if (DAT_14c949388 == -1) {
      FUN_1446f470e(&uStack_18,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(uStack_18);
      _Init_thread_footer(&DAT_14c949388);
    }
  }
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686b592 FUN_14686b592 body=111 status=ok
// SIG undefined FUN_14686b592(void)

undefined8 FUN_14686b592(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_140056680(param_2,&DAT_149e01fe8);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14686b602 FUN_14686b602 body=792 status=ok
// SIG undefined FUN_14686b602(void)

void FUN_14686b602(longlong *param_1,undefined8 param_2,longlong *param_3,uint param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400020e8(param_2,&DAT_149e06140,1);
  plVar1 = param_1 + 2;
  lVar6 = FUN_14479d2ce(plVar1);
  if (lVar6 == 0) {
    FUN_1400021e4(&DAT_14c947dd8,&local_68);
    puVar9 = local_68;
    if (local_60 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_88,L"%s=%s,",puVar9,&DAT_149e01fe8);
    iVar4 = (int)plStack_80 + -1;
    if ((int)plStack_80 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_88,iVar4);
    puVar9 = local_68;
    if (local_88 != 0) {
      FUN_1400020a8();
      puVar9 = local_68;
    }
  }
  else {
    lVar6 = FUN_14479d2ce(plVar1);
    local_88 = *(longlong *)(lVar6 + 0x18);
    FUN_1400021e4(&local_88,&local_58);
    puVar9 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    FUN_1400021e4(&DAT_14c947dd8,&local_68);
    puVar10 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    FUN_140002266(&local_88,L"%s=%s,",puVar10,puVar9);
    iVar4 = (int)plStack_80 + -1;
    if ((int)plStack_80 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_88,iVar4);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    puVar9 = local_58;
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar9 = local_58;
    }
  }
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 == (longlong *)0x0) goto LAB_14686b87b;
  uVar7 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = 0;
  if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
LAB_14686b75d:
    if ((param_4 >> 0x13 & 1) == 0) {
      uVar8 = FUN_14479d2ce(plVar1);
      param_3 = &local_88;
      FUN_140005f6c(param_3,uVar8,0,0);
      goto LAB_14686b785;
    }
    lVar6 = 0;
  }
  else {
    uVar8 = FUN_14479d2ce(param_3 + 2);
    cVar5 = FUN_1400063ec(plVar1,uVar8);
    if (cVar5 == '\0') goto LAB_14686b75d;
LAB_14686b785:
    lVar6 = *param_3;
  }
  FUN_1400021e4(&DAT_14c947de0,&local_68);
  puVar9 = local_68;
  if (local_60 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,&DAT_149e2b6ae,puVar9);
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = param_5;
  local_90 = 1;
  local_a8 = 0;
  local_a0 = param_4;
  FUN_1446df618(uVar7,param_2,*param_1,lVar6);
  plVar1 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_14686b87b:
  FUN_1400020e8(param_2,&DAT_149e06144,1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14686b91c FUN_14686b91c body=1120 status=ok
// SIG undefined FUN_14686b91c(void)

ulonglong FUN_14686b91c(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  ushort uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  wint_t wVar8;
  undefined2 *puVar9;
  wint_t *pwVar10;
  ulonglong unaff_RBP;
  wint_t *pwVar11;
  wint_t *pwVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 **local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  uint local_9c;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  uint local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = param_4;
  for (pwVar12 = (wint_t *)*param_2; pwVar12 != (wint_t *)0x0; pwVar12 = pwVar12 + 1) {
    iVar5 = iswspace(*pwVar12);
    if (iVar5 == 0) goto LAB_14686b96f;
  }
  pwVar12 = (wint_t *)0x0;
LAB_14686b96f:
  if (*pwVar12 == 0x28) {
    pwVar12 = pwVar12 + 1;
    local_70 = 0;
    local_90 = 0;
    local_9c = 0;
    local_98 = 0;
    local_a8 = param_2;
    local_7c = param_3;
    local_78 = param_1;
LAB_14686b9b5:
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*pwVar12 == 0x29);
    pwVar10 = pwVar12;
    if (*pwVar12 == 0x29) {
      if ((int)local_70 - 2U < 0x7fffffff) {
        uVar7 = FUN_1446f4bba();
        local_c8 = 0;
        uVar7 = FUN_140277cc4(uVar7,local_90,0,0);
      }
      else {
        uVar7 = 0;
      }
      plVar3 = local_78;
      FUN_140005f6c(local_78,uVar7,0,0);
      if (((longlong *)*plVar3 != (longlong *)0x0) && (local_9c - 2 < 0x7fffffff)) {
        lVar6 = (**(code **)(*(longlong *)*plVar3 + 8))();
        local_68 = *(longlong *)(lVar6 + 0x18);
        FUN_1400021e4(&local_68,&local_58);
        local_c0 = local_88;
        local_c8 = CONCAT44(local_c8._4_4_,local_7c);
        local_b0 = 1;
        local_b8 = &local_58;
        FUN_14115911a(lVar6,local_98,*local_78,0);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      *param_2 = pwVar12 + 1;
    }
    else {
      for (; pwVar10 != (wint_t *)0x0; pwVar10 = pwVar10 + 1) {
        iVar5 = iswspace(*pwVar10);
        if (iVar5 == 0) goto LAB_14686b9d9;
      }
      pwVar10 = (wint_t *)0x0;
LAB_14686b9d9:
      iVar5 = -1;
      pwVar12 = pwVar10;
      do {
        iVar5 = iVar5 + 1;
        pwVar10 = pwVar10 + 1;
        wVar8 = *pwVar12;
        pwVar12 = pwVar12 + 1;
      } while (wVar8 != 0x3d);
      if (0 < iVar5) {
        FUN_1400089be(&local_58);
        FUN_140ded26a(&local_58);
        iVar5 = 0;
        do {
          uVar1 = *pwVar12;
          if (uVar1 < 0x28) {
            if (uVar1 == 0x22) {
              do {
                while( true ) {
                  pwVar11 = pwVar12;
                  pwVar12 = pwVar11 + 1;
                  wVar8 = pwVar11[1];
                  if (wVar8 != 0x5c) break;
                  if (pwVar11[2] == 0x22) {
                    pwVar12 = pwVar11 + 2;
                  }
                }
                if (wVar8 == 0) {
                  FUN_140047918(local_88);
                  bVar2 = false;
                  goto LAB_14686bab6;
                }
              } while (wVar8 != 0x22);
            }
            else {
              if (uVar1 == 0) {
LAB_14686baea:
                bVar2 = false;
                goto LAB_14686bab6;
              }
LAB_14686ba84:
              if (uVar1 == 0x2c && iVar5 == 0) {
                lVar6 = 2;
                wVar8 = 0x2c;
                goto LAB_14686bb09;
              }
            }
          }
          else if (uVar1 == 0x28) {
            iVar5 = iVar5 + 1;
          }
          else {
            if (uVar1 != 0x29) goto LAB_14686ba84;
            if (iVar5 < 1) {
              FUN_140047918(local_88);
              goto LAB_14686baea;
            }
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_14686bafd;
          }
          pwVar12 = pwVar12 + 1;
        } while( true );
      }
    }
    goto LAB_14686bd37;
  }
  FUN_140047918(local_88,L"GbxInlineStruct ImportTextItem: Missing opening parenthesis: %s",pwVar12)
  ;
  unaff_RBP = 0;
LAB_14686bc32:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
LAB_14686bafd:
  wVar8 = pwVar12[1];
  pwVar12 = pwVar12 + 1;
  lVar6 = 0;
LAB_14686bb09:
  bVar2 = false;
  param_2 = local_a8;
  if ((wVar8 != 0) && (0 < (int)((ulonglong)((longlong)pwVar12 - (longlong)pwVar10) >> 1))) {
    for (pwVar12 = (wint_t *)((longlong)pwVar12 + lVar6); pwVar12 != (wint_t *)0x0;
        pwVar12 = pwVar12 + 1) {
      iVar5 = iswspace(*pwVar12);
      if (iVar5 == 0) goto LAB_14686bb43;
    }
    pwVar12 = (wint_t *)0x0;
LAB_14686bb43:
    puVar9 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    cVar4 = FUN_1402ca022(DAT_14c947dd8,puVar9);
    if (cVar4 == '\0') {
      cVar4 = FUN_1402ca022(DAT_14c947de0);
      bVar2 = true;
      param_2 = local_a8;
      if (cVar4 != '\0') {
        FUN_1400089be(&local_68);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_98 = local_68;
        local_9c = local_60;
        param_2 = local_a8;
      }
    }
    else {
      FUN_1400089be(&local_68);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      local_90 = local_68;
      local_70 = (ulonglong)local_60;
      bVar2 = true;
      param_2 = local_a8;
    }
  }
LAB_14686bab6:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar2) goto LAB_14686bd37;
  goto LAB_14686b9b5;
LAB_14686bd37:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  goto LAB_14686bc32;
}



// FUNCTION 14686bd7e FUN_14686bd7e body=70 status=ok
// SIG undefined FUN_14686bd7e(void)

void FUN_14686bd7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 14686bdc4 FUN_14686bdc4 body=62 status=ok
// SIG undefined FUN_14686bdc4(void)

void FUN_14686bdc4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14689aaf4();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14686be02 FUN_14686be02 body=370 status=ok
// SIG undefined FUN_14686be02(void)

undefined8 FUN_14686be02(longlong param_1,undefined8 param_2,undefined2 **param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x70) + 1U < 2) {
    FUN_14020fad6(param_3,L"GAMEDATAHANDLE_TYPE_ARG(FGameDataHandle)");
  }
  else {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      FUN_140002266(&local_40,L"GAMEDATAHANDLE_TYPE_ARG(TGameDataHandle<%u>)");
      local_50 = local_40;
      if (&local_40 != param_3) {
        if (*param_3 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *param_3 = local_40;
        local_40 = (undefined2 *)0x0;
        *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
        goto LAB_14686be3e;
      }
    }
    else {
      local_40 = *(undefined2 **)(*(longlong *)(param_1 + 0x78) + 0x18);
      FUN_1400021e4(&local_40,&local_50);
      puVar1 = local_50;
      if (local_48 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_40,L"GAMEDATAHANDLE_TYPE_ARG(TGameDataHandle<%u, F%s>)",
                    *(undefined4 *)(param_1 + 0x70),puVar1);
      if (&local_40 == param_3) {
        if (local_40 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *param_3 = local_40;
        local_40 = (undefined2 *)0x0;
        *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
        local_38 = 0;
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14686be3e:
  FUN_140056680(param_2,L"GAMEDATAHANDLE");
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14686bf76 FUN_14686bf76 body=548 status=ok
// SIG undefined FUN_14686bf76(void)

short * FUN_14686bf76(longlong param_1,short *param_2,longlong *param_3,int param_4)

{
  short *psVar1;
  ulonglong uVar2;
  short sVar3;
  wchar_t *pwVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  wchar_t *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 1) {
    param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)(param_1 + 0x44));
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  if (*param_2 == 0x28) {
    lVar9 = 0;
    psVar1 = (short *)FUN_1401e9420(param_2 + 1,&local_48,0);
    pwVar4 = local_48;
    if ((int)uStack_40 == 0) {
      pwVar4 = L"";
    }
    while( true ) {
      uVar5 = *(ushort *)((longlong)pwVar4 + lVar9);
      uVar2 = (ulonglong)uVar5;
      uVar6 = *(ushort *)((longlong)L"AttributeIdent" + lVar9);
      if (uVar5 != uVar6) break;
      if (uVar5 == 0) goto LAB_14686c037;
LAB_14686c00b:
      lVar9 = lVar9 + 2;
    }
    if ((uVar6 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar7]) goto LAB_14686c00b;
    }
    if (uVar5 != uVar6) goto LAB_14686c082;
LAB_14686c037:
    sVar3 = *psVar1;
    if (sVar3 == 0x3d) {
      bVar10 = (longlong)uStack_40 < 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (bVar10) {
        FUN_1446f8c06(&local_48,0);
      }
      if (local_48 != (wchar_t *)0x0) {
        *local_48 = L'\0';
      }
      psVar1 = (short *)FUN_1401e9420(psVar1 + 1,&local_48,0);
LAB_14686c082:
      sVar3 = *psVar1;
    }
    iVar8 = 0;
    if (sVar3 == 0x2c) {
      pwVar4 = local_48;
      if ((int)uStack_40 == 0) {
        pwVar4 = L"";
      }
      uVar2 = _wcstoui64(pwVar4,(wchar_t **)0x0,0);
      bVar10 = (longlong)uStack_40 < 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (bVar10) {
        FUN_1446f8c06(&local_48,0);
      }
      if (local_48 != (wchar_t *)0x0) {
        *local_48 = L'\0';
      }
      psVar1 = (short *)FUN_1401e9420(psVar1 + 1,&local_48,0);
      sVar3 = *psVar1;
      iVar8 = (int)uVar2;
    }
    if (sVar3 == 0x29) {
      if (1 < *(int *)(param_1 + 0x70) + 1U) {
        iVar8 = *(int *)(param_1 + 0x70);
      }
      if ((int)param_3[1] != iVar8) {
        param_3[2] = 0;
      }
      *(int *)(param_3 + 1) = iVar8;
      pwVar4 = L"";
      if ((int)uStack_40 != 0) {
        pwVar4 = local_48;
      }
      FUN_1446f470e(&local_50,pwVar4,1);
      if (*param_3 != local_50) {
        param_3[2] = 0;
      }
      psVar1 = psVar1 + 1;
      *param_3 = local_50;
    }
    else {
      psVar1 = (short *)0x0;
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    psVar1 = (short *)0x0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar1;
}



// FUNCTION 14686c19c FUN_14686c19c body=155 status=ok
// SIG undefined FUN_14686c19c(void)

undefined8 * FUN_14686c19c(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[0xe] + 1U < 2) {
    (**(code **)(*param_1 + 0x70))(param_1,&local_28,0,0);
    puVar1 = local_28;
    if (local_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"struct %s;",puVar1);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c265 FUN_14686c265 body=203 status=ok
// SIG undefined FUN_14686c265(void)

ulonglong FUN_14686c265(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  ulonglong local_c8 [3];
  undefined2 *local_b0;
  undefined2 *local_a8;
  ulonglong *local_a0;
  char local_98;
  undefined2 local_90 [64];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = local_90;
  local_98 = '\0';
  local_a0 = &local_10;
  local_c8[2] = param_1;
  local_a8 = local_b0;
  FUN_14005eb5c(local_c8 + 2,&local_b0);
  *local_a8 = 0;
  FUN_140056680(local_d8,local_b0);
  cVar2 = FUN_140b10a34(local_d8,local_c8);
  if (cVar2 == '\0') {
    local_c8[0] = 0;
    local_c8[1] = 0;
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = local_c8[0];
  if (local_98 == '\x01') {
    FUN_1400020a8(local_b0);
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c332 FUN_14686c332 body=374 status=ok
// SIG undefined FUN_14686c332(void)

undefined8 FUN_14686c332(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong local_250;
  undefined4 local_244;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_244 = param_2;
  cVar2 = FUN_1468c83be();
  if (cVar2 == '\0') {
LAB_14686c447:
    uVar4 = 0;
  }
  else {
    FUN_14122db64(&local_244,&local_240,0);
    FUN_14122db38(&local_240,&local_250);
    if (local_250 != 0) {
      local_240 = local_220;
      local_228 = '\0';
      local_230 = &local_20;
      local_238 = local_240;
      FUN_14005eb5c(&local_250,&local_240);
      *local_238 = 0;
      puVar1 = local_240;
      uVar4 = FUN_1446f4bba();
      local_258 = 0;
      lVar5 = FUN_140277cc4(uVar4,puVar1,4,0);
      if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x78) = lVar5;
        if (local_228 == '\x01') {
          FUN_1400020a8(local_240);
        }
        if (lVar5 == 0) goto LAB_14686c447;
      }
      else {
        FUN_1456cec3c(lVar5);
        *(longlong *)(param_1 + 0x78) = lVar5;
        if (local_228 == '\x01') {
          FUN_1400020a8(local_240);
        }
      }
    }
    FUN_14122db64(&local_244,&local_250,1);
    FUN_14122db38(&local_250,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      uVar3 = FUN_14686c265();
      *(undefined4 *)(param_1 + 0x70) = uVar3;
    }
    uVar4 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c4aa FUN_14686c4aa body=188 status=ok
// SIG undefined FUN_14686c4aa(void)

bool FUN_14686c4aa(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar2 = FUN_140aa53c6();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x78);
    FUN_14122db64(&local_28,local_24,0);
    FUN_14122db38(local_24,&local_30);
    if (lVar1 == 0) {
      if (local_30 == 0) goto LAB_14686c52f;
    }
    else if (local_30 == *(longlong *)(lVar1 + 0x18)) {
LAB_14686c52f:
      FUN_14122db64(&local_28,local_24,1);
      FUN_14122db38(local_24,&local_38);
      iVar3 = FUN_14686c265(local_38);
      bVar4 = iVar3 == *(int *)(param_1 + 0x70);
      goto LAB_14686c508;
    }
  }
  bVar4 = false;
LAB_14686c508:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c568 FUN_14686c568 body=154 status=ok
// SIG undefined FUN_14686c568(void)

undefined8 * FUN_14686c568(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x378))(plVar1,&local_28,0);
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"struct %s;",puVar2);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c604 FUN_14686c604 body=162 status=ok
// SIG undefined FUN_14686c604(void)

undefined8 FUN_14686c604(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x70))(param_1,&local_30,0,0);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  FUN_140056680(param_2,L"GBXDEFPTR");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c6a8 FUN_14686c6a8 body=297 status=ok
// SIG undefined FUN_14686c6a8(void)

ulonglong FUN_14686c6a8(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte unaff_BPL;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  longlong local_258;
  undefined4 local_24c;
  undefined2 *local_248;
  undefined2 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined2 local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_24c = param_2;
  cVar2 = FUN_1468c83be();
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    FUN_14122db64(&local_24c,&local_248,0);
    lVar3 = FUN_14122db38(&local_248,&local_258);
    if (local_258 != 0) {
      local_248 = local_228;
      local_230 = '\0';
      local_238 = &local_28;
      local_240 = local_248;
      FUN_14005eb5c(&local_258,&local_248);
      *local_240 = 0;
      puVar1 = local_248;
      uVar4 = FUN_1446f4bba();
      local_268 = 0;
      lVar5 = FUN_140277cc4(uVar4,puVar1,4,0);
      unaff_BPL = lVar5 != 0;
      lVar3 = lVar5;
      if (((bool)unaff_BPL) && (DAT_14c950c29 != '\0')) {
        lVar3 = FUN_1456cec3c(lVar5);
      }
      *(longlong *)(param_1 + 0x70) = lVar5;
      if (local_230 == '\x01') {
        lVar3 = FUN_1400020a8(local_248);
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)lVar3 >> 8),local_258 == 0 | unaff_BPL);
  }
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar6 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c7d2 FUN_14686c7d2 body=62 status=ok
// SIG undefined FUN_14686c7d2(void)

void FUN_14686c7d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14689aaf4();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14686c810 FUN_14686c810 body=83 status=ok
// SIG undefined FUN_14686c810(void)

void FUN_14686c810(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  cVar2 = FUN_14170fc78(lVar1);
  lVar3 = 0;
  if (cVar2 != '\0') {
    lVar3 = lVar1;
  }
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x70) = lVar3;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 14686c864 FUN_14686c864 body=72 status=ok
// SIG undefined FUN_14686c864(void)

undefined8 FUN_14686c864(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x70);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x70) == lVar1);
  }
  return uVar2;
}



// FUNCTION 14686c8ac FUN_14686c8ac body=133 status=ok
// SIG undefined FUN_14686c8ac(void)

undefined8 FUN_14686c8ac(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1417109e8(0x80);
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14686c932(uVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c932 FUN_14686c932 body=136 status=ok
// SIG undefined FUN_14686c932(void)

undefined8 *
FUN_14686c932(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a697c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e62830;
  param_1[0xf] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686c9bc FUN_14686c9bc body=221 status=ok
// SIG undefined FUN_14686c9bc(void)

void FUN_14686c9bc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1403a6ad4();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947fd8) {
    FUN_144b3d300(&DAT_14c947fd8);
    if (DAT_14c947fd8 == -1) {
      DAT_14c947fd0 = FUN_144aff86e();
      _Init_thread_footer(&DAT_14c947fd8);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar1 = DAT_14c947fd0;
    if (((lVar2 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x78) == 0)) {
      if ((DAT_14c947fd0 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(DAT_14c947fd0);
      }
      *(longlong *)(param_1 + 0x78) = lVar1;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1427b498b(param_1);
    return;
  }
  return;
}



// FUNCTION 14686ca9a FUN_14686ca9a body=62 status=ok
// SIG undefined FUN_14686ca9a(void)

void FUN_14686ca9a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1468e779a();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14686cad8 FUN_14686cad8 body=64 status=ok
// SIG undefined FUN_14686cad8(void)

void FUN_14686cad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar1;
  FUN_1468e7644(param_1,param_2);
  return;
}



// FUNCTION 14686cb18 FUN_14686cb18 body=163 status=ok
// SIG undefined FUN_14686cb18(void)

undefined8 FUN_14686cb18(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x378))(plVar1,&local_28,0);
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"TGbxInlineStruct<%s>",puVar2);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140002266(param_2,L"TGbxInlineStruct<FGbxHasStructType>");
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686cbbc FUN_14686cbbc body=287 status=ok
// SIG undefined FUN_14686cbbc(void)

undefined8 FUN_14686cbbc(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong local_250;
  undefined4 local_244;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_244 = param_2;
  cVar2 = FUN_1468c83be();
  if (cVar2 != '\0') {
    FUN_14122db64(&local_244,&local_240,0);
    FUN_14122db38(&local_240,&local_250);
    if (local_250 != 0) {
      local_240 = local_220;
      local_228 = '\0';
      local_230 = &local_20;
      local_238 = local_240;
      FUN_14005eb5c(&local_250,&local_240);
      *local_238 = 0;
      puVar1 = local_240;
      uVar3 = FUN_1446f4bba();
      local_258 = 0;
      lVar4 = FUN_140277cc4(uVar3,puVar1,4,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(param_1 + 0x78) = lVar4;
      lVar4 = *(longlong *)(param_1 + 0x70);
      if (local_228 == '\x01') {
        FUN_1400020a8(local_240);
      }
      uVar3 = 1;
      if (lVar4 != 0) goto LAB_14686cca1;
    }
  }
  uVar3 = 0;
LAB_14686cca1:
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686ccdc FUN_14686ccdc body=149 status=ok
// SIG undefined FUN_14686ccdc(void)

void FUN_14686ccdc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  FUN_140a6c1c4(param_2,param_1[0xf]);
  lVar1 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar1 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686cd72 FUN_14686cd72 body=246 status=ok
// SIG undefined FUN_14686cd72(void)

undefined8 * FUN_14686cd72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  byte local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    plVar1 = *(longlong **)(lVar2 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&local_30);
      if ((local_23 & 8) != 0) {
        *param_2 = 0;
        param_2[1] = 0;
        goto LAB_14686ce2f;
      }
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    local_38 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_38,&local_30);
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    pwVar3 = L"struct F%s;";
  }
  else {
    (**(code **)(*plVar1 + 0x378))(plVar1,&local_30,0);
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    pwVar3 = L"struct %s;";
  }
  FUN_140002266(param_2,pwVar3,puVar4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14686ce2f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14686ce6a FUN_14686ce6a body=614 status=ok
// SIG undefined FUN_14686ce6a(void)

undefined8
FUN_14686ce6a(longlong param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  char local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = param_1;
  local_48 = param_2;
  FUN_144a7c09e(local_58);
  lVar7 = FUN_144b00dc8(*(undefined8 *)(param_1 + 0x70));
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(lVar7 + 0x2d0);
  }
  if (param_4 == 1) {
    param_3 = param_3 + *(int *)(param_1 + 0x44);
  }
  if (param_3 != 0) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    cVar6 = FUN_14686b91c(&local_78,&local_48,param_6,param_7);
    if (cVar6 != '\0') {
      lVar8 = FUN_14479d2ce(&local_68);
      if ((lVar8 == 0) ||
         (((lVar3 = *(longlong *)(param_1 + 0x78), lVar3 != 0 &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        FUN_14029d0b6(param_3,&local_78);
      }
      else {
        local_98 = *(undefined2 **)(lVar3 + 0x18);
        FUN_1400021e4(&local_98,&local_88);
        puVar11 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar11 = local_88;
        }
        local_a8 = *(undefined2 **)(lVar8 + 0x18);
        FUN_1400021e4(&local_a8,&local_98);
        puVar12 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar12 = local_98;
        }
        if (param_1 == 0) {
          FUN_140056680(&local_a8,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(param_1 + 0x20,&local_a8);
        }
        puVar10 = local_a8;
        if (local_a0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        local_b8 = puVar11;
        FUN_140047918(param_7,
                      L"ImportText (%s): Imported struct type (%s) in not compatible with the base inline struct type required by this property (%s)"
                      ,puVar10,puVar12);
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  uVar5 = local_48;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x2d0) = uVar9;
  }
  if (local_58[0] == '\x01') {
    FUN_141717572(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14686d0d2 FUN_14686d0d2 body=183 status=ok
// SIG undefined FUN_14686d0d2(void)

undefined8 * FUN_14686d0d2(undefined8 *param_1,void *param_2)

{
  undefined1 *_Dst;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined1 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = *(int *)((longlong)param_2 + 0x38);
  lVar1 = (longlong)local_30;
  if (lVar1 == 0) {
    local_2c = 4;
  }
  else {
    if (*(void **)((longlong)param_2 + 0x30) != (void *)0x0) {
      param_2 = *(void **)((longlong)param_2 + 0x30);
    }
    FUN_14687429a(local_68,local_30,0);
    _Dst = local_38;
    if (local_38 == (undefined1 *)0x0) {
      _Dst = local_68;
    }
    memcpy(_Dst,param_2,lVar1 * 0xc);
  }
  FUN_14686d18a(param_1,local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14686d18a FUN_14686d18a body=392 status=ok
// SIG undefined FUN_14686d18a(void)

void FUN_14686d18a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar2 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0x38);
  local_118 = local_110;
  if (DAT_14c947fe0 == 0) {
    lVar4 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar4);
    DAT_14c947fe0 = lVar4;
  }
  if (iVar1 != 0) {
    lVar4 = (longlong)iVar1 * 0xc;
    do {
      FUN_146874240(&local_118,lVar2);
      lVar2 = lVar2 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  FUN_1447a993c(param_1,local_48 & 0xffffffff);
  if (0 < (int)local_48) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      puVar5 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar5 = local_110;
      }
      uVar3 = uVar3 + 1;
      FUN_1447a993c(param_1,uVar3 & 0xffffffff);
      if ((0 < *(int *)(param_1 + 0x24)) || (lVar4 = param_1 + 8, 1 < *(int *)(param_1 + 4))) {
        lVar4 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar4 + 8 + lVar2) = *(undefined4 *)((longlong)(puVar5 + lVar2) + 8);
      *(undefined8 *)(lVar4 + lVar2) = *(undefined8 *)(puVar5 + lVar2);
      lVar2 = lVar2 + 0xc;
    } while ((longlong)uVar3 < (longlong)(int)local_48);
  }
  FUN_14009404e(param_1);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14686d314 FUN_14686d314 body=31 status=ok
// SIG undefined FUN_14686d314(void)

undefined8 * FUN_14686d314(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b2348(0,param_2,0);
  return param_2;
}


