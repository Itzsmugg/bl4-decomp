// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468e95a6 FUN_1468e95a6 body=57 status=ok
// SIG undefined FUN_1468e95a6(void)

void FUN_1468e95a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar1 = 0;
    do {
      FUN_1468e9d84(*(int *)(param_1 + 0x34) * lVar1 + param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1468e962a FUN_1468e962a body=270 status=ok
// SIG undefined FUN_1468e962a(void)

void FUN_1468e962a(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  
  puVar1 = (ulonglong *)param_1[2];
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    uVar4 = *puVar1;
  }
  else {
    uVar3 = *puVar1;
    uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar3;
    }
  }
  _Dst = (void *)((longlong)param_2 * (longlong)*(int *)((longlong)param_1 + 0x2c) + uVar4);
  uVar5 = (uint)*(undefined8 *)(param_1[1] + 0x38);
  uVar6 = (uint)*(undefined8 *)(*param_1 + 0x38);
  if (((uVar5 | uVar6) >> 9 & 1) != 0) {
    memset(_Dst,0,(longlong)*(int *)((longlong)param_1 + 0x24));
  }
  if ((uVar6 >> 9 & 1) == 0) {
    plVar2 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
      (**(code **)(*plVar2 + 0x160))();
    }
    else {
      memset((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)_Dst),0,
             (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
    }
  }
  if ((uVar5 >> 9 & 1) == 0) {
    plVar2 = (longlong *)param_1[1];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 2) != 0) {
      memset((void *)((longlong)_Dst + (longlong)*(int *)((longlong)plVar2 + 0x44)),0,
             (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001468e96bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x160))
              (plVar2,(longlong)_Dst + (longlong)*(int *)((longlong)plVar2 + 0x44));
    return;
  }
  return;
}



// FUNCTION 1468e9738 FUN_1468e9738 body=201 status=ok
// SIG undefined FUN_1468e9738(void)

bool FUN_1468e9738(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong *local_40;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_50 = param_1[2];
  local_28 = &local_38;
  local_58 = &local_30;
  local_30 = &LAB_1468e98ae;
  local_40 = &local_50;
  local_48 = &LAB_1468e98c8;
  local_38 = local_50;
  lVar3 = FUN_1468e9802(param_2,param_1[1],lVar1 + 0x18);
  if (lVar3 != 0) {
    uVar2 = *param_2;
    uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_2;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2;
    }
    FUN_14000ce30(lVar1,(longlong)(lVar3 - uVar4) / (longlong)*(int *)(lVar1 + 0x24) & 0xffffffff,1)
    ;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e9802 FUN_1468e9802 body=170 status=ok
// SIG undefined FUN_1468e9802(void)

longlong FUN_1468e9802(ulonglong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_5;
  local_48 = &local_28;
  local_20 = param_5[1];
  local_38 = *param_4;
  local_30 = param_4[1];
  iVar2 = FUN_1468c92b8(param_1,param_2,param_3,&local_38);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar1;
    }
    lVar3 = (longlong)*param_3 + (longlong)iVar2 * (longlong)param_3[5] + uVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e98d4 FUN_1468e98d4 body=190 status=ok
// SIG undefined FUN_1468e98d4(void)

void FUN_1468e98d4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 **local_70;
  longlong local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1[2];
  local_10 = &local_30;
  local_28 = param_1[3];
  local_20 = param_1[1];
  local_70 = &local_18;
  local_18 = &LAB_1468e9baa;
  local_38 = &local_48;
  local_78 = &local_40;
  local_40 = &LAB_1468e9c6a;
  local_50 = &local_60;
  local_58 = &LAB_1468e9c84;
  local_48 = local_60;
  local_30 = local_60;
  FUN_1468e9994(param_2,local_20,*param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e9994 FUN_1468e9994 body=224 status=ok
// SIG undefined FUN_1468e9994(void)

longlong FUN_1468e9994(ulonglong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  code **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *param_3;
  lVar4 = (longlong)local_38;
  local_48 = *param_6;
  local_28 = &local_48;
  local_40 = param_6[1];
  local_70 = &local_30;
  local_30 = FUN_1468e9b58;
  local_58 = *param_5;
  local_78 = &local_58;
  local_50 = param_5[1];
  local_68 = *param_4;
  local_60 = param_4[1];
  iVar2 = FUN_1468e9a76(param_1,param_2,param_3 + 1,&local_68);
  uVar1 = *param_1;
  uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (longlong)iVar2 * (longlong)param_3[5] + lVar4 + uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e9a76 FUN_1468e9a76 body=224 status=ok
// SIG undefined FUN_1468e9a76(void)

void FUN_1468e9a76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_2;
  uVar1 = (*(code *)*param_4)(param_4[1],&local_48);
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x24)) {
    local_48 = *param_5;
    local_40 = param_5[1];
    local_78 = &local_48;
    iVar2 = FUN_1468c9366(param_1,param_2,param_3,uVar1);
    if (iVar2 != -1) goto LAB_1468e9afa;
  }
  local_58 = *param_6;
  local_78 = &local_58;
  local_50 = param_6[1];
  local_68 = *param_4;
  local_60 = param_4[1];
  FUN_1468c9aee(param_1,param_3,&local_68,uVar1);
LAB_1468e9afa:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e9b58 FUN_1468e9b58 body=81 status=ok
// SIG undefined FUN_1468e9b58(void)

void FUN_1468e9b58(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_1 + 2) + local_18;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e9bb6 FUN_1468e9bb6 body=180 status=ok
// SIG undefined FUN_1468e9bb6(void)

void FUN_1468e9bb6(longlong *param_1,void *param_2,void *param_3)

{
  longlong *plVar1;
  void *_Src;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))();
  }
  else {
    memset(param_2,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
  _Src = (void *)param_1[2];
  if (_Src != param_2) {
    plVar1 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
      (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
    }
    else {
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
    }
  }
  plVar1 = (longlong *)param_1[1];
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e9c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x160))(plVar1,param_3);
    return;
  }
  memset(param_3,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  return;
}



// FUNCTION 1468e9caa FUN_1468e9caa body=218 status=ok
// SIG undefined FUN_1468e9caa(void)

ulonglong FUN_1468e9caa(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar1 = (uint)param_2[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*param_1;
    uVar6 = *(uint *)param_1[2];
    if ((int)uVar1 <= (int)uVar6) {
      *(uint *)param_1[2] = 0;
      uVar6 = *(uint *)param_1[2];
    }
    plVar3 = (longlong *)*puVar2;
    uVar9 = (ulonglong)uVar6;
    do {
      uVar8 = (uint)uVar9;
      if ((-1 < (int)uVar8) && ((int)uVar8 < (int)param_2[3])) {
        uVar4 = param_2[2];
        uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)(param_2 + 2);
        if ((uVar4 & 1) == 0) {
          uVar7 = uVar4;
        }
        if ((*(uint *)(uVar7 + (uVar9 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
          uVar4 = *param_2;
          uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)param_2;
          if ((uVar4 & 1) == 0) {
            uVar7 = uVar4;
          }
          cVar5 = (**(code **)(*plVar3 + 200))
                            (plVar3,param_1[1],
                             (longlong)(int)uVar8 * (longlong)*(int *)((longlong)puVar2 + 0x2c) +
                             uVar7,0);
          if (cVar5 != '\0') {
            return uVar9;
          }
          uVar6 = *(uint *)param_1[2];
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      if (uVar8 + 1 == uVar1) {
        uVar9 = 0;
      }
    } while ((uint)uVar9 != uVar6);
  }
  return 0xffffffff;
}



// FUNCTION 1468e9d84 FUN_1468e9d84 body=62 status=ok
// SIG undefined FUN_1468e9d84(void)

void FUN_1468e9d84(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1468e9dc2 FUN_1468e9dc2 body=167 status=ok
// SIG undefined FUN_1468e9dc2(void)

void FUN_1468e9dc2(ulonglong *param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = *param_1;
  uVar4 = param_1[5];
  uVar1 = ((longlong)uVar6 >> 0x18) + (longlong)param_1;
  if ((uVar6 & 1) == 0) {
    uVar1 = uVar6;
  }
  lVar8 = (longlong)(param_3[4] * param_2) + uVar1;
  uVar6 = (longlong)param_1 + ((longlong)uVar4 >> 0x18) + 0x28;
  if ((uVar4 & 1) == 0) {
    uVar6 = uVar4;
  }
  uVar4 = (longlong)(int)param_1[6] - 1U & (longlong)*(int *)(param_3[1] + lVar8);
  iVar5 = *(int *)(uVar6 + uVar4 * 4);
  if (iVar5 != -1) {
    if (iVar5 == param_2) {
      puVar3 = (undefined4 *)(uVar6 + uVar4 * 4);
    }
    else {
      lVar2 = uVar1 + (longlong)*param_3;
      do {
        lVar7 = (longlong)(iVar5 * param_3[4]);
        iVar5 = *(int *)(lVar2 + lVar7);
        if (iVar5 == -1) goto LAB_1468e9e23;
      } while (iVar5 != param_2);
      puVar3 = (undefined4 *)(lVar2 + lVar7);
    }
    *puVar3 = *(undefined4 *)(lVar8 + *param_3);
  }
LAB_1468e9e23:
  FUN_1468e9e6a(param_1,param_3 + 3,param_2,1);
  return;
}



// FUNCTION 1468e9e6a FUN_1468e9e6a body=197 status=ok
// SIG undefined FUN_1468e9e6a(void)

void FUN_1468e9e6a(ulonglong *param_1,longlong param_2,int param_3,int param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (*(int *)((longlong)param_1 + 0x24) != 0) {
      uVar2 = *param_1;
      uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2;
      }
      *(int *)(uVar4 + (longlong)*(int *)(param_2 + 4) * (longlong)(int)param_1[4]) = param_3;
    }
    uVar2 = *param_1;
    uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2;
    }
    lVar7 = (longlong)param_3 * (longlong)*(int *)(param_2 + 4);
    *(undefined4 *)(uVar4 + lVar7) = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0x24) < 1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (undefined4)param_1[4];
    }
    *(undefined4 *)(uVar4 + 4 + lVar7) = uVar5;
    *(int *)(param_1 + 4) = param_3;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar2 = param_1[2];
    uVar4 = (longlong)param_1 + ((longlong)uVar2 >> 0x18) + 0x10;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2;
    }
    iVar6 = param_3 + 0x1f;
    if (-1 < param_3) {
      iVar6 = param_3;
    }
    bVar3 = (byte)param_3 & 0x1f;
    puVar1 = (uint *)(uVar4 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 1468e9f30 FUN_1468e9f30 body=29 status=ok
// SIG undefined FUN_1468e9f30(void)

undefined8 FUN_1468e9f30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9f4e FUN_1468e9f4e body=29 status=ok
// SIG undefined FUN_1468e9f4e(void)

undefined8 FUN_1468e9f4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9f6c FUN_1468e9f6c body=32 status=ok
// SIG undefined FUN_1468e9f6c(void)

undefined8 FUN_1468e9f6c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e9f8c FUN_1468e9f8c body=29 status=ok
// SIG undefined FUN_1468e9f8c(void)

undefined8 FUN_1468e9f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9faa FUN_1468e9faa body=29 status=ok
// SIG undefined FUN_1468e9faa(void)

undefined8 FUN_1468e9faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9fc8 FUN_1468e9fc8 body=32 status=ok
// SIG undefined FUN_1468e9fc8(void)

undefined8 FUN_1468e9fc8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e9fe8 FUN_1468e9fe8 body=134 status=ok
// SIG undefined FUN_1468e9fe8(void)

undefined8 *
FUN_1468e9fe8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468ea070(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9c870;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea070 FUN_1468ea070 body=133 status=ok
// SIG undefined FUN_1468ea070(void)

undefined8 *
FUN_1468ea070(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1458660b0(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9ca80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea0f6 FUN_1468ea0f6 body=29 status=ok
// SIG undefined FUN_1468ea0f6(void)

undefined8 FUN_1468ea0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea114 FUN_1468ea114 body=29 status=ok
// SIG undefined FUN_1468ea114(void)

undefined8 FUN_1468ea114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea132 FUN_1468ea132 body=29 status=ok
// SIG undefined FUN_1468ea132(void)

undefined8 FUN_1468ea132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea150 FUN_1468ea150 body=29 status=ok
// SIG undefined FUN_1468ea150(void)

undefined8 FUN_1468ea150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea16e FUN_1468ea16e body=29 status=ok
// SIG undefined FUN_1468ea16e(void)

undefined8 FUN_1468ea16e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea18c FUN_1468ea18c body=29 status=ok
// SIG undefined FUN_1468ea18c(void)

undefined8 FUN_1468ea18c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea1aa FUN_1468ea1aa body=29 status=ok
// SIG undefined FUN_1468ea1aa(void)

undefined8 FUN_1468ea1aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea1c8 FUN_1468ea1c8 body=29 status=ok
// SIG undefined FUN_1468ea1c8(void)

undefined8 FUN_1468ea1c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea1e6 FUN_1468ea1e6 body=29 status=ok
// SIG undefined FUN_1468ea1e6(void)

undefined8 FUN_1468ea1e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea204 FUN_1468ea204 body=29 status=ok
// SIG undefined FUN_1468ea204(void)

undefined8 FUN_1468ea204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea222 FUN_1468ea222 body=29 status=ok
// SIG undefined FUN_1468ea222(void)

undefined8 FUN_1468ea222(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea240 FUN_1468ea240 body=29 status=ok
// SIG undefined FUN_1468ea240(void)

undefined8 FUN_1468ea240(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea25e FUN_1468ea25e body=29 status=ok
// SIG undefined FUN_1468ea25e(void)

undefined8 FUN_1468ea25e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea27c FUN_1468ea27c body=29 status=ok
// SIG undefined FUN_1468ea27c(void)

undefined8 FUN_1468ea27c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea328 FUN_1468ea328 body=26 status=ok
// SIG undefined FUN_1468ea328(void)

void FUN_1468ea328(undefined8 param_1,undefined2 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (short)iVar1;
  return;
}



// FUNCTION 1468ea342 FUN_1468ea342 body=182 status=ok
// SIG undefined FUN_1468ea342(void)

void FUN_1468ea342(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *_Dst;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = _wtoi(param_3);
  local_1a = (short)iVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (undefined2 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_1a,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_1a,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea3fe FUN_1468ea3fe body=177 status=ok
// SIG undefined FUN_1468ea3fe(void)

undefined2 FUN_1468ea3fe(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *_Src;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined2 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1a,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1a,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea4b4 FUN_1468ea4b4 body=177 status=ok
// SIG undefined FUN_1468ea4b4(void)

undefined2 FUN_1468ea4b4(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *_Src;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined2 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1a,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1a,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea56e FUN_1468ea56e body=36 status=ok
// SIG undefined FUN_1468ea56e(void)

undefined8 FUN_1468ea56e(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  FUN_140002266(param_2,&DAT_149e061aa,*param_3);
  return param_2;
}



// FUNCTION 1468ea592 FUN_1468ea592 body=204 status=ok
// SIG undefined FUN_1468ea592(void)

undefined8 FUN_1468ea592(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined2 *_Src;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_22 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined2 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_22) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_22,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_22,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_22);
  }
  FUN_140002266(param_2,&DAT_149e061aa,local_22);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea692 FUN_1468ea692 body=29 status=ok
// SIG undefined FUN_1468ea692(void)

undefined8 FUN_1468ea692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea6d4 FUN_1468ea6d4 body=29 status=ok
// SIG undefined FUN_1468ea6d4(void)

undefined8 FUN_1468ea6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea6f2 FUN_1468ea6f2 body=29 status=ok
// SIG undefined FUN_1468ea6f2(void)

undefined8 FUN_1468ea6f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea710 FUN_1468ea710 body=29 status=ok
// SIG undefined FUN_1468ea710(void)

undefined8 FUN_1468ea710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea766 FUN_1468ea766 body=29 status=ok
// SIG undefined FUN_1468ea766(void)

undefined8 FUN_1468ea766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea784 FUN_1468ea784 body=29 status=ok
// SIG undefined FUN_1468ea784(void)

undefined8 FUN_1468ea784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea7a2 FUN_1468ea7a2 body=29 status=ok
// SIG undefined FUN_1468ea7a2(void)

undefined8 FUN_1468ea7a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea7c4 FUN_1468ea7c4 body=32 status=ok
// SIG undefined FUN_1468ea7c4(void)

undefined8 FUN_1468ea7c4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468ea7e6 FUN_1468ea7e6 body=85 status=ok
// SIG undefined FUN_1468ea7e6(void)

void FUN_1468ea7e6(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0xffffffff;
  FUN_1468e59a6();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ea83c FUN_1468ea83c body=57 status=ok
// SIG undefined FUN_1468ea83c(void)

void FUN_1468ea83c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar1 = 0;
    do {
      FUN_1468e59a6(*(int *)(param_1 + 0x34) * lVar1 + param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1468ea87a FUN_1468ea87a body=29 status=ok
// SIG undefined FUN_1468ea87a(void)

undefined8 FUN_1468ea87a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea898 FUN_1468ea898 body=29 status=ok
// SIG undefined FUN_1468ea898(void)

undefined8 FUN_1468ea898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ea8b6 FUN_1468ea8b6 body=32 status=ok
// SIG undefined FUN_1468ea8b6(void)

undefined8 FUN_1468ea8b6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468ea8d6 FUN_1468ea8d6 body=308 status=ok
// SIG undefined FUN_1468ea8d6(void)

undefined8 * FUN_1468ea8d6(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < 0) {
      FUN_1446f8c06(param_1 + 3,0);
    }
    puVar3 = (undefined2 *)param_1[3];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_40,lVar2);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
    if (param_1 + 1 == (undefined8 *)&local_40) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_30;
      local_30 = 0;
      *(undefined4 *)(param_1 + 4) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_24;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_1468ea9e9;
      }
    }
    FUN_14485c47a(param_1,lVar2);
  }
LAB_1468ea9e9:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eaa0c FUN_1468eaa0c body=116 status=ok
// SIG undefined FUN_1468eaa0c(void)

void FUN_1468eaa0c(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = (int)param_1[1] + 1;
  *(int *)(param_1 + 1) = iVar3;
  iVar1 = *(int *)(*(longlong *)(*param_1 + 0x10) + 8);
  if (iVar3 < iVar1) {
    do {
      local_24 = iVar3;
      cVar2 = FUN_1446ec082(*param_1,&local_24);
      if (cVar2 != '\0') break;
      iVar3 = (int)param_1[1] + 1;
      *(int *)(param_1 + 1) = iVar3;
    } while (iVar3 < iVar1);
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eaa82 FUN_1468eaa82 body=152 status=ok
// SIG undefined FUN_1468eaa82(void)

undefined8 FUN_1468eaa82(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == uVar2) {
          FUN_1468eab1a();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468eab1a FUN_1468eab1a body=90 status=ok
// SIG undefined FUN_1468eab1a(void)

void FUN_1468eab1a(longlong *param_1,int param_2)

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
  FUN_1468eab74();
  return;
}



// FUNCTION 1468eab74 FUN_1468eab74 body=114 status=ok
// SIG undefined FUN_1468eab74(void)

void FUN_1468eab74(longlong *param_1,int param_2)

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



// FUNCTION 1468eabe6 FUN_1468eabe6 body=376 status=ok
// SIG undefined FUN_1468eabe6(void)

undefined4 *
FUN_1468eabe6(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468ead60(param_1,local_48);
  uVar6 = *param_3;
  *local_40 = uVar6;
  uVar5 = uVar6;
  if ((((uVar6 & 1) != 0) && (uVar5 = 0, (uVar6 & 0xfffffffffffffffe) != 0)) &&
     (uVar5 = uVar6, DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = param_4;
  cVar2 = FUN_1468eae46(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1468c1e16(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468ead60 FUN_1468ead60 body=229 status=ok
// SIG undefined FUN_1468ead60(void)

int * FUN_1468ead60(longlong *param_1,int *param_2)

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



// FUNCTION 1468eae46 FUN_1468eae46 body=135 status=ok
// SIG undefined FUN_1468eae46(void)

void FUN_1468eae46(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1468eab74(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1468eaeae;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1468eaeae:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1468eaece FUN_1468eaece body=126 status=ok
// SIG undefined FUN_1468eaece(void)

undefined8 *
FUN_1468eaece(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468eaf4e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9da10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eaf4e FUN_1468eaf4e body=135 status=ok
// SIG undefined FUN_1468eaf4e(void)

undefined8 *
FUN_1468eaf4e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9dc80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eafd6 FUN_1468eafd6 body=126 status=ok
// SIG undefined FUN_1468eafd6(void)

undefined8 *
FUN_1468eafd6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468eb056(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9d2c0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eb056 FUN_1468eb056 body=135 status=ok
// SIG undefined FUN_1468eb056(void)

undefined8 *
FUN_1468eb056(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9d530;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eb0de FUN_1468eb0de body=135 status=ok
// SIG undefined FUN_1468eb0de(void)

undefined8 *
FUN_1468eb0de(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1403a6280(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9c020;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x18;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eb166 FUN_1468eb166 body=116 status=ok
// SIG undefined FUN_1468eb166(void)

void FUN_1468eb166(longlong param_1,int param_2)

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
    FUN_1400bbc78(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468eb1dc FUN_1468eb1dc body=100 status=ok
// SIG undefined FUN_1468eb1dc(void)

void FUN_1468eb1dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 4)) {
        uVar2 = uVar1 >> 4 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_1400bbc78(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 1468eb240 FUN_1468eb240 body=181 status=ok
// SIG undefined FUN_1468eb240(void)

void FUN_1468eb240(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_1468eb254:
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
      uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xd8);
      if (((uVar1 & 4) != 0) &&
         (((-1 < (short)uVar1 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
          ((*(byte *)(lVar5 + 0x3b) & 0x20) == 0)))) goto LAB_1468eb2bb;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar5 = (longlong)(int)param_1[2] + 1;
      iVar4 = (int)lVar5;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 < (int)plVar3[0x3c]) {
        lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
        lVar5 = 0;
        if (lVar2 != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x48);
        }
        goto LAB_1468eb254;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))();
      if (plVar3 != (longlong *)0x0) {
        lVar5 = plVar3[9];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_1468eb254;
      }
      plVar3 = (longlong *)0x0;
    }
    lVar5 = 0;
  }
LAB_1468eb2bb:
  *param_1 = (longlong)plVar3;
  param_1[1] = lVar5;
  return;
}



// FUNCTION 1468eb2f6 FUN_1468eb2f6 body=104 status=ok
// SIG undefined FUN_1468eb2f6(void)

undefined8 * FUN_1468eb2f6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_141235584();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e996b0;
  puVar3[9] = 0;
  return puVar3;
}



// FUNCTION 1468eb35e FUN_1468eb35e body=118 status=ok
// SIG undefined FUN_1468eb35e(void)

undefined8 * FUN_1468eb35e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd2f8e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149e99980;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  return puVar3;
}



// FUNCTION 1468eb3d4 FUN_1468eb3d4 body=108 status=ok
// SIG undefined FUN_1468eb3d4(void)

undefined8 * FUN_1468eb3d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2af0c();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea02d0;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468eb440 FUN_1468eb440 body=108 status=ok
// SIG undefined FUN_1468eb440(void)

undefined8 * FUN_1468eb440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145956e12();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea0580;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468eb4ac FUN_1468eb4ac body=104 status=ok
// SIG undefined FUN_1468eb4ac(void)

undefined8 * FUN_1468eb4ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2aff6();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149e99ca0;
  return puVar3;
}



// FUNCTION 1468eb514 FUN_1468eb514 body=108 status=ok
// SIG undefined FUN_1468eb514(void)

undefined8 * FUN_1468eb514(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b0e0();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea0830;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468eb580 FUN_1468eb580 body=118 status=ok
// SIG undefined FUN_1468eb580(void)

undefined8 * FUN_1468eb580(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b1ca();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *puVar3 = &PTR_FUN_149ea0d90;
  return puVar3;
}



// FUNCTION 1468eb5f6 FUN_1468eb5f6 body=104 status=ok
// SIG undefined FUN_1468eb5f6(void)

undefined8 * FUN_1468eb5f6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b2b4();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea12f0;
  return puVar3;
}



// FUNCTION 1468eb65e FUN_1468eb65e body=104 status=ok
// SIG undefined FUN_1468eb65e(void)

undefined8 * FUN_1468eb65e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd307e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea15a0;
  return puVar3;
}



// FUNCTION 1468eb6c6 FUN_1468eb6c6 body=104 status=ok
// SIG undefined FUN_1468eb6c6(void)

undefined8 * FUN_1468eb6c6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b39e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea1850;
  return puVar3;
}



// FUNCTION 1468eb72e FUN_1468eb72e body=104 status=ok
// SIG undefined FUN_1468eb72e(void)

undefined8 * FUN_1468eb72e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b488();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea1b00;
  return puVar3;
}



// FUNCTION 1468eb796 FUN_1468eb796 body=104 status=ok
// SIG undefined FUN_1468eb796(void)

undefined8 * FUN_1468eb796(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b572();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea1db0;
  return puVar3;
}



// FUNCTION 1468eb7fe FUN_1468eb7fe body=104 status=ok
// SIG undefined FUN_1468eb7fe(void)

undefined8 * FUN_1468eb7fe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bb4e0e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea2060;
  return puVar3;
}



// FUNCTION 1468eb866 FUN_1468eb866 body=104 status=ok
// SIG undefined FUN_1468eb866(void)

undefined8 * FUN_1468eb866(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b65c();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea2310;
  return puVar3;
}



// FUNCTION 1468eb8ce FUN_1468eb8ce body=108 status=ok
// SIG undefined FUN_1468eb8ce(void)

undefined8 * FUN_1468eb8ce(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b746();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea25c0;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468eb93a FUN_1468eb93a body=108 status=ok
// SIG undefined FUN_1468eb93a(void)

undefined8 * FUN_1468eb93a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b830();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR_FUN_149ea2870;
  return puVar3;
}



// FUNCTION 1468eb9a6 FUN_1468eb9a6 body=118 status=ok
// SIG undefined FUN_1468eb9a6(void)

undefined8 * FUN_1468eb9a6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd316e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149e9a090;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  return puVar3;
}



// FUNCTION 1468eba1c FUN_1468eba1c body=104 status=ok
// SIG undefined FUN_1468eba1c(void)

undefined8 * FUN_1468eba1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_1459e265c();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea2b20;
  return puVar3;
}



// FUNCTION 1468eba84 FUN_1468eba84 body=104 status=ok
// SIG undefined FUN_1468eba84(void)

undefined8 * FUN_1468eba84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd325e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea2dd0;
  return puVar3;
}



// FUNCTION 1468ebaec FUN_1468ebaec body=104 status=ok
// SIG undefined FUN_1468ebaec(void)

undefined8 * FUN_1468ebaec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd334e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea3080;
  return puVar3;
}



// FUNCTION 1468ebb54 FUN_1468ebb54 body=104 status=ok
// SIG undefined FUN_1468ebb54(void)

undefined8 * FUN_1468ebb54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2b91a();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea3330;
  return puVar3;
}



// FUNCTION 1468ebbbc FUN_1468ebbbc body=104 status=ok
// SIG undefined FUN_1468ebbbc(void)

undefined8 * FUN_1468ebbbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_14588a04e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea0ae0;
  return puVar3;
}



// FUNCTION 1468ebc24 FUN_1468ebc24 body=108 status=ok
// SIG undefined FUN_1468ebc24(void)

undefined8 * FUN_1468ebc24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145a625a2();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR_FUN_149ea1040;
  return puVar3;
}



// FUNCTION 1468ebc90 FUN_1468ebc90 body=108 status=ok
// SIG undefined FUN_1468ebc90(void)

undefined8 * FUN_1468ebc90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd343e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149e9a480;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468ebcfc FUN_1468ebcfc body=118 status=ok
// SIG undefined FUN_1468ebcfc(void)

undefined8 * FUN_1468ebcfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145bd352e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *puVar3 = &PTR_FUN_149ea35e0;
  return puVar3;
}



// FUNCTION 1468ebd72 FUN_1468ebd72 body=108 status=ok
// SIG undefined FUN_1468ebd72(void)

undefined8 * FUN_1468ebd72(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145a6268e();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR_FUN_149ea3890;
  return puVar3;
}



// FUNCTION 1468ebdde FUN_1468ebdde body=104 status=ok
// SIG undefined FUN_1468ebdde(void)

undefined8 * FUN_1468ebdde(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2ba04();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea3b40;
  return puVar3;
}



// FUNCTION 1468ebe46 FUN_1468ebe46 body=108 status=ok
// SIG undefined FUN_1468ebe46(void)

undefined8 * FUN_1468ebe46(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2baee();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149e9a7c0;
  puVar3[0xe] = 0;
  return puVar3;
}



// FUNCTION 1468ebeb2 FUN_1468ebeb2 body=104 status=ok
// SIG undefined FUN_1468ebeb2(void)

undefined8 * FUN_1468ebeb2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2bbd8();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea3df0;
  return puVar3;
}



// FUNCTION 1468ebf1a FUN_1468ebf1a body=104 status=ok
// SIG undefined FUN_1468ebf1a(void)

undefined8 * FUN_1468ebf1a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2bcc2();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea40a0;
  return puVar3;
}



// FUNCTION 1468ebf82 FUN_1468ebf82 body=104 status=ok
// SIG undefined FUN_1468ebf82(void)

undefined8 * FUN_1468ebf82(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2bdac();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea4350;
  return puVar3;
}



// FUNCTION 1468ebfea FUN_1468ebfea body=108 status=ok
// SIG undefined FUN_1468ebfea(void)

undefined8 * FUN_1468ebfea(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2be96();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR_FUN_149ea4600;
  return puVar3;
}



// FUNCTION 1468ec056 FUN_1468ec056 body=104 status=ok
// SIG undefined FUN_1468ec056(void)

undefined8 * FUN_1468ec056(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2bf80();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea48b0;
  return puVar3;
}



// FUNCTION 1468ec0be FUN_1468ec0be body=96 status=ok
// SIG undefined FUN_1468ec0be(void)

undefined8 * FUN_1468ec0be(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145a50c3c();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149ea4b60;
  return puVar3;
}



// FUNCTION 1468ec11e FUN_1468ec11e body=96 status=ok
// SIG undefined FUN_1468ec11e(void)

undefined8 * FUN_1468ec11e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145a6277a();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149ea4e00;
  return puVar3;
}



// FUNCTION 1468ec17e FUN_1468ec17e body=96 status=ok
// SIG undefined FUN_1468ec17e(void)

undefined8 * FUN_1468ec17e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2c06a();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149ea50a0;
  return puVar3;
}



// FUNCTION 1468ec1de FUN_1468ec1de body=108 status=ok
// SIG undefined FUN_1468ec1de(void)

undefined8 * FUN_1468ec1de(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b2c154();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_149ea5340;
  puVar3[0xf] = 0;
  return puVar3;
}



// FUNCTION 1468ec24a FUN_1468ec24a body=98 status=ok
// SIG undefined FUN_1468ec24a(void)

void FUN_1468ec24a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1468ec2ac FUN_1468ec2ac body=113 status=ok
// SIG undefined FUN_1468ec2ac(void)

bool FUN_1468ec2ac(uint *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(*param_1 & 0x1fff);
  if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_1 >> 0xd) * 8) + 8 +
                  uVar2 * 0xc)) {
    puVar1 = (ulonglong *)
             (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_1 >> 0xd) * 8) + uVar2 * 0xc);
    uVar2 = *puVar1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar2 == DAT_14c892b68) {
      return *(longlong *)((longlong)puVar1 + 0xc) == param_2;
    }
  }
  return false;
}



// FUNCTION 1468ec31e FUN_1468ec31e body=124 status=ok
// SIG undefined FUN_1468ec31e(void)

undefined8 FUN_1468ec31e(uint *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(*param_1 & 0x1fff);
  if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_1 >> 0xd) * 8) + 8 +
                  uVar3 * 0xc)) {
    puVar1 = (ulonglong *)
             (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_1 >> 0xd) * 8) + uVar3 * 0xc);
    uVar3 = *puVar1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = (ulonglong)DAT_14c892bc8;
    if ((uVar3 == uVar2) || (uVar2 = (ulonglong)DAT_14c892b44, *puVar1 == uVar2)) {
      return CONCAT71((int7)(uVar2 >> 8),*(longlong *)((longlong)puVar1 + 0xc) == param_2);
    }
  }
  return 0;
}



// FUNCTION 1468ec39a FUN_1468ec39a body=59 status=ok
// SIG undefined FUN_1468ec39a(void)

undefined8 FUN_1468ec39a(undefined8 param_1,uint *param_2)

{
  FUN_1468ec3d5(param_1,(ulonglong)((*param_2 & 0x1fff) * 0xc) +
                        *(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_2 >> 0xd) * 8));
  return param_1;
}



// FUNCTION 1468ec3d5 FUN_1468ec3d5 body=213 status=ok
// SIG undefined FUN_1468ec3d5(void)

longlong FUN_1468ec3d5(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  FUN_14005eb5c(param_2,param_1);
  iVar3 = *(int *)(param_2 + 8);
  param_2 = param_2 + 0xc;
  if (iVar3 != 0) {
    puVar2 = *(undefined2 **)(param_1 + 8);
    if (*(undefined2 **)(param_1 + 0x10) <= puVar2 + 1) {
      FUN_140213274(param_1,1);
      puVar2 = *(undefined2 **)(param_1 + 8);
    }
    *(undefined2 **)(param_1 + 8) = puVar2 + 1;
    *puVar2 = 0x28;
    if (0 < iVar3) {
      iVar3 = iVar3 + 1;
      do {
        param_2 = FUN_1468ec3d5(param_1,param_2);
        puVar2 = *(undefined2 **)(param_1 + 8);
        if (*(undefined2 **)(param_1 + 0x10) <= puVar2 + 1) {
          FUN_140213274(param_1,1);
          puVar2 = *(undefined2 **)(param_1 + 8);
        }
        *(undefined2 **)(param_1 + 8) = puVar2 + 1;
        *puVar2 = 0x2c;
        iVar3 = iVar3 + -1;
      } while (1 < iVar3);
    }
    uVar1 = *(ulonglong *)(param_1 + 8);
    puVar2 = (undefined2 *)(uVar1 - 2);
    *(undefined2 **)(param_1 + 8) = puVar2;
    if (*(ulonglong *)(param_1 + 0x10) <= uVar1) {
      FUN_140213274(param_1,1);
      puVar2 = *(undefined2 **)(param_1 + 8);
    }
    *(undefined2 **)(param_1 + 8) = puVar2 + 1;
    *puVar2 = 0x29;
  }
  return param_2;
}



// FUNCTION 1468ec4aa FUN_1468ec4aa body=126 status=ok
// SIG undefined FUN_1468ec4aa(void)

undefined8 *
FUN_1468ec4aa(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468ec52a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea5e80;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec52a FUN_1468ec52a body=126 status=ok
// SIG undefined FUN_1468ec52a(void)

undefined8 *
FUN_1468ec52a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f3224(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea8b00;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec5aa FUN_1468ec5aa body=126 status=ok
// SIG undefined FUN_1468ec5aa(void)

undefined8 *
FUN_1468ec5aa(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468ec62a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6f6a0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec62a FUN_1468ec62a body=126 status=ok
// SIG undefined FUN_1468ec62a(void)

undefined8 *
FUN_1468ec62a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f3386(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea9250;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec6aa FUN_1468ec6aa body=126 status=ok
// SIG undefined FUN_1468ec6aa(void)

undefined8 *
FUN_1468ec6aa(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468ec72a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6f910;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec72a FUN_1468ec72a body=126 status=ok
// SIG undefined FUN_1468ec72a(void)

undefined8 *
FUN_1468ec72a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f34e8(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea99a0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec7aa FUN_1468ec7aa body=174 status=ok
// SIG undefined FUN_1468ec7aa(void)

undefined8 * FUN_1468ec7aa(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_14010a2ea();
  FUN_14145874c(puVar1,0,&DAT_14c962ad8);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149eaa2d0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468ec85a(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec85a FUN_1468ec85a body=126 status=ok
// SIG undefined FUN_1468ec85a(void)

undefined8 *
FUN_1468ec85a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468ec8da(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149eaa2d0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec8da FUN_1468ec8da body=134 status=ok
// SIG undefined FUN_1468ec8da(void)

undefined8 *
FUN_1468ec8da(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f364a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea7fb0;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ec962 FUN_1468ec962 body=159 status=ok
// SIG undefined FUN_1468ec962(void)

undefined8 FUN_1468ec962(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468eca02 FUN_1468eca02 body=466 status=ok
// SIG undefined FUN_1468eca02(void)

undefined8 FUN_1468eca02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
    FUN_140002266(&local_40,L"TWeakObjectPtr<%s%s>",uVar1,puVar3);
    if (&local_40 == param_3) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pwVar2 = L"WEAKOBJECT";
  }
  else {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
    FUN_140002266(&local_40,L"TAutoWeakObjectPtr<%s%s>",uVar1,puVar3);
    if (&local_40 == param_3) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pwVar2 = L"AUTOWEAKOBJECT";
  }
  FUN_140056680(param_2,pwVar2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468ecbec FUN_1468ecbec body=85 status=ok
// SIG undefined FUN_1468ecbec(void)

undefined8 FUN_1468ecbec(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_28 = 1;
  FUN_1468ecc42(param_1,&local_18,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ecc42 FUN_1468ecc42 body=534 status=ok
// SIG undefined FUN_1468ecc42(void)

void FUN_1468ecc42(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  void *_Dst;
  undefined8 *_Src;
  void *_Src_00;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    if (param_5 == 0) goto LAB_1468eccc8;
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (longlong)param_4 * (longlong)iVar1 + param_3 + *(int *)((longlong)param_1 + 0x44);
    if (param_5 != 1) {
      uVar5 = 0;
      do {
        uVar3 = (**(code **)(*param_1 + 0x210))(param_1,lVar4);
        param_2[uVar5] = uVar3;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + iVar1;
      } while (param_5 != uVar5);
      goto LAB_1468eccc8;
    }
    uVar3 = (**(code **)(*param_1 + 0x210))(param_1,lVar4);
  }
  else {
    if (param_5 != 1) {
      _Dst = (void *)FUN_1468c8356(param_1);
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        _Src_00 = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Src_00 != _Dst) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst,_Src_00,(int)param_1[6]);
          }
          else {
            memcpy(_Dst,_Src_00,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,_Dst);
      }
      if (param_5 != 0) {
        lVar4 = 0;
        do {
          uVar3 = FUN_14479d2ce((longlong)_Dst + lVar4 + (longlong)param_4 * 8);
          *(undefined8 *)((longlong)param_2 + lVar4) = uVar3;
          lVar4 = lVar4 + 8;
        } while ((ulonglong)param_5 << 3 != lVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
    local_48 = 0;
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_48) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_48,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_48,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_48);
    }
    uVar3 = FUN_14479d2ce(&local_48);
  }
  *param_2 = uVar3;
LAB_1468eccc8:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ece72 FUN_1468ece72 body=29 status=ok
// SIG undefined FUN_1468ece72(void)

undefined8 * FUN_1468ece72(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1468ece90();
  return param_2;
}



// FUNCTION 1468ece90 FUN_1468ece90 body=281 status=ok
// SIG undefined FUN_1468ece90(void)

void FUN_1468ece90(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *_Src;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*param_1 + 0x210))
                      (param_1,(longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                               param_3 + *(int *)((longlong)param_1 + 0x44));
  }
  else {
    local_30 = 0;
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_30) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_30,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_30,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_30);
    }
    lVar2 = FUN_14479d2ce(&local_30);
  }
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *param_2 = lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ecfaa FUN_1468ecfaa body=78 status=ok
// SIG undefined FUN_1468ecfaa(void)

void FUN_1468ecfaa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_28 = param_4;
  local_10 = param_3;
  FUN_1468ecffa(param_1,param_2,1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ecffa FUN_1468ecffa body=655 status=ok
// SIG undefined FUN_1468ecffa(void)

void FUN_1468ecffa(longlong *param_1,longlong param_2,char param_3,undefined8 *param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  char cVar2;
  void *_Dst;
  undefined8 *_Dst_00;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar2 != '\0') {
      if (param_6 != 1) {
        _Dst = (void *)FUN_1468c8356(param_1);
        cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
        if (cVar2 == '\0') {
          pvVar3 = (void *)(*(int *)((longlong)param_1 + 0x44) + param_2);
          if (pvVar3 != _Dst) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,pvVar3,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,pvVar3,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0xa0))(param_1,param_2,_Dst);
        }
        if (param_6 != 0) {
          lVar5 = 0;
          do {
            FUN_14485c47a((longlong)_Dst + lVar5 + (longlong)param_5 * 8,
                          *(undefined8 *)((longlong)param_4 + lVar5));
            lVar5 = lVar5 + 8;
          } while ((ulonglong)param_6 << 3 != lVar5);
        }
        cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar2 == '\0') {
          pvVar3 = (void *)(param_2 + *(int *)((longlong)param_1 + 0x44));
          if (pvVar3 != _Dst) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,pvVar3,_Dst,(int)param_1[6]);
            }
            else {
              memcpy(pvVar3,_Dst,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_2,_Dst);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,*param_4);
      cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar2 == '\0') {
        _Dst_00 = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
        if (_Dst_00 != &local_50) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst_00,&local_50,(int)param_1[6]);
          }
          else {
            memcpy(_Dst_00,&local_50,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_50);
      }
      goto LAB_1468ed101;
    }
    param_2 = param_2 + *(int *)((longlong)param_1 + 0x44) +
              (longlong)param_5 * (longlong)*(int *)((longlong)param_1 + 0x34);
  }
  if (param_6 != 0) {
    if (param_6 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    uVar4 = 0;
    do {
      FUN_14281147a(param_1,param_2,param_4[uVar4]);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + iVar1;
    } while (param_6 != uVar4);
  }
LAB_1468ed101:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ed2ca FUN_1468ed2ca body=260 status=ok
// SIG undefined FUN_1468ed2ca(void)

void FUN_1468ed2ca(longlong *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  undefined8 *_Dst;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 != '\0') {
    local_38 = 0;
    FUN_14485c47a(&local_38,*param_3);
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar1 == '\0') {
      _Dst = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
      if (_Dst != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_38,(int)param_1[6]);
        }
        else {
          memcpy(_Dst,&local_38,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_38);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14281147a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58,
                (longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                param_2 + *(int *)((longlong)param_1 + 0x44),*param_3);
}



// FUNCTION 1468ed3e2 FUN_1468ed3e2 body=25 status=ok
// SIG undefined FUN_1468ed3e2(void)

void FUN_1468ed3e2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1468ed408 FUN_1468ed408 body=108 status=ok
// SIG undefined FUN_1468ed408(void)

void FUN_1468ed408(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 6);
  if ((ulonglong)uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
      *param_2 = uVar3;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x34);
      uVar4 = 0;
      do {
        uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
        param_2[uVar4] = uVar3;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + iVar2;
      } while (uVar1 != uVar4);
    }
  }
  return;
}



// FUNCTION 1468ed474 FUN_1468ed474 body=36 status=ok
// SIG undefined FUN_1468ed474(void)

void FUN_1468ed474(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468ecffa(param_1,param_2,0,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1468ed498 FUN_1468ed498 body=25 status=ok
// SIG undefined FUN_1468ed498(void)

void FUN_1468ed498(void)

{
  FUN_1468ecc42();
  return;
}



// FUNCTION 1468ed4b2 FUN_1468ed4b2 body=36 status=ok
// SIG undefined FUN_1468ed4b2(void)

void FUN_1468ed4b2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468ecffa(param_1,param_2,1,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1468ed4d6 FUN_1468ed4d6 body=527 status=ok
// SIG undefined FUN_1468ed4d6(void)

void FUN_1468ed4d6(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_160;
  longlong *plStack_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 *local_138;
  longlong local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_138;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = DAT_14c9647b8;
  }
  if ((DAT_14c948580 != (undefined8 *)0x0 & param_2) == 1) {
    iVar6 = *(int *)((longlong)DAT_14c948580 + 0xc);
    if (iVar6 < 0 || DAT_14c9647dc <= iVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                    L"Invalid object index in reference chain search %d",iVar6);
    }
  }
  else {
    iVar6 = -1;
  }
  iVar4 = -1;
  if (iVar6 < iVar2) {
    iVar4 = iVar6;
  }
  iVar5 = DAT_14c9647dc - iVar2;
  iVar1 = FUN_14689c8c0();
  iVar3 = iVar5 / iVar1 + 1;
  iVar6 = iVar5;
  FUN_1468f36d2(param_1,iVar1,iVar3,iVar2,iVar5,iVar4);
  plStack_158 = &local_140;
  local_138 = (undefined1 *)CONCAT71(local_138._1_7_,param_2);
  local_150 = 0;
  local_148 = (ulonglong)local_148._4_4_ << 0x20;
  local_160 = &LAB_1468f3c14;
  local_140 = param_1;
  local_130 = param_1;
  local_128 = iVar2;
  local_124 = iVar5;
  local_120 = iVar1;
  local_11c = iVar3;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1,&local_160,iVar6,0,&local_150);
  if (iVar4 != -1) {
    local_150 = CONCAT44(local_150._4_4_,*(int *)(param_1 + 0x10) + -1);
    local_160 = (undefined1 *)0x0;
    plStack_158 = (longlong *)0x0;
    local_148 = param_1;
    FUN_14002fb26(&local_140);
    local_58 = DAT_14c948580;
    FUN_1468f3816(&local_160);
    FUN_14079e744(&local_160);
    local_138 = local_160;
    local_130 = CONCAT44(local_130._4_4_,plStack_158._0_4_);
    local_58 = &local_150;
    FUN_1428223d0(&local_58,&local_140);
    FUN_140ea1d7a(&local_140);
    if (local_160 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)&local_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ed6e6 FUN_1468ed6e6 body=71 status=ok
// SIG undefined FUN_1468ed6e6(void)

void FUN_1468ed6e6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467b118c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1467b12a0();
      return;
    }
  }
  return;
}



// FUNCTION 1468ed72e FUN_1468ed72e body=689 status=ok
// SIG undefined FUN_1468ed72e(void)

void FUN_1468ed72e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined1 local_e4 [4];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_2;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar10 = (longlong)*(int *)(param_1 + 0x10) * 0x88;
    do {
      FUN_1468f0514(lVar5);
      lVar5 = lVar5 + 0x88;
      lVar10 = lVar10 + -0x88;
    } while (lVar10 != 0);
  }
  local_78 = 0;
  iVar9 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar7 = (longlong *)(param_1 + 0x18);
  lVar5 = param_1 + 0x28;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = lVar5;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(param_1 + 0x40);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = plVar7;
  if ((iStack_a4 != iVar9) || (local_b0 != lVar5)) {
    do {
      iVar3 = *(int *)(*(longlong *)(*local_e0 + (longlong)iStack_c4 * 0x10) + 0xc);
      if ((iVar3 < 0) || (DAT_14c9647dc <= iVar3)) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                      L"Invalid object index in reference chain search %d",iVar3);
      }
      local_b8 = CONCAT44(local_b8._4_4_,iVar3);
      FUN_144984904(&local_98,local_e4,&local_b8,0);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != plVar7 || (local_d0 != lVar5 || iStack_c4 != iVar9));
  }
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar10 = (longlong)*(int *)(param_1 + 0x10) * 0x88 + lVar5;
    do {
      if (0 < *(int *)(lVar5 + 0x78)) {
        lVar1 = *(longlong *)(lVar5 + 0x58);
        lVar8 = 8;
        lVar6 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + -8 + lVar8) + lVar1);
          iVar9 = *(int *)(*(longlong *)(lVar5 + 0x70) + lVar8);
          local_d8 = CONCAT44(local_d8._4_4_,iVar9);
          local_e0 = plVar7;
          iVar3 = FUN_1468f0643(&local_e0,&local_98);
          if (iVar3 == 0) {
            iVar3 = iVar9;
          }
          lVar2 = *local_f0;
          lVar4 = (*(int *)(lVar5 + 0x80) + lVar6) * 0x10;
          *(longlong **)(lVar2 + lVar4) = plVar7;
          *(int *)(lVar2 + 8 + lVar4) = iVar3;
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar6 < *(int *)(lVar5 + 0x78));
      }
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar10);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ed9e0 FUN_1468ed9e0 body=120 status=ok
// SIG undefined FUN_1468ed9e0(void)

longlong * FUN_1468ed9e0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return param_1;
}



// FUNCTION 1468eda58 FUN_1468eda58 body=121 status=ok
// SIG undefined FUN_1468eda58(void)

void FUN_1468eda58(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14688b3fa(param_1 + 0x18);
  FUN_1468f0736(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468edad2 FUN_1468edad2 body=527 status=ok
// SIG undefined FUN_1468edad2(void)

void FUN_1468edad2(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_160;
  longlong *plStack_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 *local_138;
  longlong local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_138;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = DAT_14c9647b8;
  }
  if ((DAT_14c948580 != (undefined8 *)0x0 & param_2) == 1) {
    iVar6 = *(int *)((longlong)DAT_14c948580 + 0xc);
    if (iVar6 < 0 || DAT_14c9647dc <= iVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                    L"Invalid object index in reference chain search %d",iVar6);
    }
  }
  else {
    iVar6 = -1;
  }
  iVar4 = -1;
  if (iVar6 < iVar2) {
    iVar4 = iVar6;
  }
  iVar5 = DAT_14c9647dc - iVar2;
  iVar1 = FUN_14689c8c0();
  iVar3 = iVar5 / iVar1 + 1;
  iVar6 = iVar5;
  FUN_1468f421e(param_1,iVar1,iVar3,iVar2,iVar5,iVar4);
  plStack_158 = &local_140;
  local_138 = (undefined1 *)CONCAT71(local_138._1_7_,param_2);
  local_150 = 0;
  local_148 = (ulonglong)local_148._4_4_ << 0x20;
  local_160 = &LAB_1468f4504;
  local_140 = param_1;
  local_130 = param_1;
  local_128 = iVar2;
  local_124 = iVar5;
  local_120 = iVar1;
  local_11c = iVar3;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1,&local_160,iVar6,0,&local_150);
  if (iVar4 != -1) {
    local_150 = CONCAT44(local_150._4_4_,*(int *)(param_1 + 0x10) + -1);
    local_160 = (undefined1 *)0x0;
    plStack_158 = (longlong *)0x0;
    local_148 = param_1;
    FUN_14002fb26(&local_140);
    local_58 = DAT_14c948580;
    FUN_1468f3816(&local_160);
    FUN_14079e744(&local_160);
    local_138 = local_160;
    local_130 = CONCAT44(local_130._4_4_,plStack_158._0_4_);
    local_58 = &local_150;
    FUN_1428232ec(&local_58,&local_140);
    FUN_140ea1d7a(&local_140);
    if (local_160 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)&local_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468edce2 FUN_1468edce2 body=140 status=ok
// SIG undefined FUN_1468edce2(void)

void FUN_1468edce2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x88 + lVar7;
    do {
      FUN_1468f07aa(lVar7);
      if (0 < *(int *)(lVar7 + 0x78)) {
        lVar2 = *(longlong *)(lVar7 + 0x58);
        lVar4 = 8;
        lVar5 = 0;
        do {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar7 + 0x70) + lVar4);
          lVar3 = *param_2;
          lVar8 = (*(int *)(lVar7 + 0x80) + lVar5) * 0x10;
          *(longlong *)(lVar3 + lVar8) =
               *(longlong *)(*(longlong *)(lVar7 + 0x70) + -8 + lVar4) + lVar2;
          *(undefined4 *)(lVar3 + 8 + lVar8) = uVar1;
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x10;
        } while (lVar5 < *(int *)(lVar7 + 0x78));
      }
      lVar7 = lVar7 + 0x88;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 1468edd6e FUN_1468edd6e body=219 status=ok
// SIG undefined FUN_1468edd6e(void)

void FUN_1468edd6e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(*param_1 + 8 + lVar8 * 0x18);
      uVar7 = (longlong)*(int *)(*param_1 + 0x10 + lVar8 * 0x18) << 2;
      do {
        if (uVar7 == 0) {
          iVar5 = -1;
          goto LAB_1468eddc0;
        }
        uVar6 = uVar7 - 4;
        piVar2 = (int *)(lVar3 + -4 + uVar7);
        uVar7 = uVar6;
      } while (*piVar2 == param_2);
      iVar5 = (int)(uVar6 >> 2);
LAB_1468eddc0:
      uVar7 = (ulonglong)(iVar4 + -1);
      if (lVar8 < (longlong)uVar7) {
        iVar4 = *(int *)(lVar3 + (longlong)iVar5 * 4);
        do {
          lVar3 = *(longlong *)(*param_1 + 8 + uVar7 * 0x18);
          uVar6 = (longlong)*(int *)(*param_1 + 0x10 + uVar7 * 0x18) << 2;
          do {
            if (uVar6 == 0) {
              iVar5 = -1;
              goto LAB_1468ede06;
            }
            uVar1 = uVar6 - 4;
            piVar2 = (int *)(lVar3 + -4 + uVar6);
            uVar6 = uVar1;
          } while (*piVar2 == param_2);
          iVar5 = (int)(uVar1 >> 2);
LAB_1468ede06:
          if (*(int *)(lVar3 + (longlong)iVar5 * 4) == iVar4) {
            FUN_1468f47e8(param_1,uVar7 & 0xffffffff);
            FUN_1468f4842(param_1);
          }
          uVar7 = uVar7 - 1;
        } while (lVar8 < (longlong)uVar7);
        iVar4 = (int)param_1[1];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  return;
}



// FUNCTION 1468ede49 FUN_1468ede49 body=887 status=ok
// SIG undefined FUN_1468ede49(void)

void FUN_1468ede49(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_bc [4];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  bVar10 = true;
  if (0 < (int)param_1[1]) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar5 = *param_1;
      lVar1 = *(longlong *)(lVar5 + 8 + lVar7);
      iVar4 = *(int *)(lVar5 + 0x10 + lVar7);
      iVar3 = *(int *)(lVar1 + (longlong)(iVar4 + -1) * 4);
      if (iVar3 == param_2 && 2 < (longlong)iVar4) {
        iVar3 = *(int *)(lVar1 + -8 + (longlong)iVar4 * 4);
      }
      puVar6 = (uint *)(lVar5 + lVar7);
      uVar8 = *puVar6;
      local_e0 = CONCAT44(*(int *)(lVar1 + 4),uVar8);
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar3);
      uVar8 = (uVar8 >> 2) + uVar8 * 0x40 + -0x61c88647 + *(int *)(lVar1 + 4) ^ uVar8;
      iVar4 = FUN_1468f48f0(local_b8,(uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + iVar3 ^ uVar8,
                            &local_e0);
      lVar5 = (longlong)iVar4 * 0x20 + local_b8[0];
      if ((lVar5 == 0 || iVar4 == -1) || (*(longlong *)(lVar5 + 0x10) == 0)) {
        local_118 = &local_f8;
        local_120 = &local_e0;
        local_f8 = puVar6;
        FUN_1468f4958(local_b8,local_bc,&local_120);
      }
      else if ((int)puVar6[4] < *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10)) {
        *(uint **)(lVar5 + 0x10) = puVar6;
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 < (int)param_1[1]);
    bVar10 = local_90 == 0;
  }
  local_f8 = (uint *)0x0;
  uStack_f0 = 0;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  iVar4 = 0;
  local_d8 = local_a8;
  if (!bVar10) {
    FUN_1449c0562(&local_e0);
    iVar4 = local_90;
  }
  local_108 = local_d0;
  iStack_104 = iStack_cc;
  local_100 = local_c8;
  local_fc = local_c4;
  local_118 = (uint **)local_e0;
  local_110 = local_d8;
  local_120 = local_b8;
  if ((iStack_cc != iVar4) || (local_d8 != local_a8)) {
    do {
      uVar2 = uStack_f0;
      puVar6 = *(uint **)(*local_120 + 0x10 + (longlong)iStack_104 * 0x20);
      lVar7 = (longlong)(int)uStack_f0;
      uVar8 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
      if (uStack_f0._4_4_ < uVar8) {
        FUN_1468f4e80(&local_f8,uVar2 & 0xffffffff);
      }
      local_f8[lVar7 * 6] = *puVar6;
      (local_f8 + lVar7 * 6 + 2)[0] = 0;
      (local_f8 + lVar7 * 6 + 2)[1] = 0;
      *(undefined8 *)(local_f8 + lVar7 * 6 + 2) = *(undefined8 *)(puVar6 + 2);
      puVar6[2] = 0;
      puVar6[3] = 0;
      local_f8[lVar7 * 6 + 4] = puVar6[4];
      local_f8[lVar7 * 6 + 5] = puVar6[5];
      puVar6[4] = 0;
      puVar6[5] = 0;
      local_108 = local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (local_120 != local_b8 || (local_110 != local_a8 || iStack_104 != iVar4));
  }
  FUN_1468ee1c2(param_1,&local_f8);
  FUN_1468f4e51(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f094c(local_b8);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ee1c2 FUN_1468ee1c2 body=80 status=ok
// SIG undefined FUN_1468ee1c2(void)

longlong * FUN_1468ee1c2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1468f4e51(*param_1,(int)param_1[1]);
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



// FUNCTION 1468ee212 FUN_1468ee212 body=426 status=ok
// SIG undefined FUN_1468ee212(void)

void FUN_1468ee212(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = *param_1;
  local_70 = 0;
  uStack_68 = 0;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar5 = 0;
  local_78 = param_1;
  local_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = (int)param_2[5];
  }
  local_88 = local_40;
  iStack_84 = iStack_3c;
  local_80 = local_38;
  local_7c = local_34;
  local_98 = local_50;
  local_90 = local_48;
  local_a0 = param_2;
  if ((iStack_3c == iVar5) && (local_48 == plVar1)) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    do {
      uVar2 = *(uint *)(*local_a0 + (longlong)iStack_84 * 0x60);
      if ((int)uVar2 < DAT_14c9647dc) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      }
      else {
        puVar6 = (undefined8 *)0x0;
      }
      local_58 = *local_a0 + (longlong)iStack_84 * 0x60 + 8;
      FUN_1468ee3be(&local_78,*puVar6);
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_2 || (local_90 != plVar1 || iStack_84 != iVar5));
    lVar3 = local_70;
    uVar4 = (undefined4)uStack_68;
  }
  FUN_1468f09d9(lVar3,uVar4);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ee3be FUN_1468ee3be body=234 status=ok
// SIG undefined FUN_1468ee3be(void)

void FUN_1468ee3be(undefined8 param_1,undefined4 *param_2)

{
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_f8;
  local_110[0] = 0;
  local_108 = param_1;
  FUN_14002fb26(local_100);
  local_120 = 0;
  uStack_118 = 0;
  local_40 = param_2;
  FUN_1468f3816(&local_120);
  FUN_14079e744(&local_120);
  local_f8 = local_120;
  local_f0 = (undefined4)uStack_118;
  local_40 = local_110;
  FUN_142824208(&local_40,local_100);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1d7a(local_100);
  if ((local_38 ^ (ulonglong)&local_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ee4aa FUN_1468ee4aa body=606 status=ok
// SIG undefined FUN_1468ee4aa(void)

undefined8 * FUN_1468ee4aa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)(param_2 + 0x24) == '\0') {
    if ((*(uint *)(param_2 + 0x1c) & 0x10000007) != 0) goto LAB_1468ee4f6;
    pwVar3 = L"(Error: No reachability flag) ";
    uVar4 = 0x1e;
  }
  else {
    if ((DAT_14c75ec98 & *(uint *)(param_2 + 0x1c)) == 0) goto LAB_1468ee4f6;
    pwVar3 = L"(Error: Reachable but NeverGCed) ";
    uVar4 = 0x21;
  }
  FUN_1400020e8(param_1,pwVar3,uVar4);
LAB_1468ee4f6:
  uVar2 = *(uint *)(param_2 + 0x1c);
  if ((uVar2 & DAT_14c75ec9c) != 0) {
    FUN_140002266(&local_30,L"(MaybeUnreachable<%d>) ");
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x1c & 1) != 0) {
    FUN_1400020e8(param_1,L"(Unreachable) ",0xe);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x1d & 1) != 0) {
    FUN_140002266(&local_30,L"(refcounted<%d>) ",*(undefined4 *)(param_2 + 0x28));
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x1e & 1) != 0) {
    FUN_1400020e8(param_1,L"(root) ",7);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    FUN_1400020e8(param_1,L"(native) ",9);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    FUN_1400020e8(param_1,L"(Garbage) ",10);
  }
  if ((*(byte *)(param_2 + 0x18) & 2) != 0) {
    FUN_1400020e8(param_1,L"(standalone) ",0xd);
  }
  uVar2 = *(uint *)(param_2 + 0x1c);
  if ((uVar2 >> 0x1a & 1) != 0) {
    FUN_1400020e8(param_1,L"(async) ",8);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 & 0x8400000) != 0) {
    FUN_1400020e8(param_1,L"(asyncloading) ",0xf);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  if ((uVar2 >> 0x14 & 1) != 0) {
    FUN_1400020e8(param_1,L"(loaderimport) ",0xf);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    FUN_1400020e8(param_1,L"(NeverGCed) ",0xc);
  }
  if ((*(byte *)(param_2 + 0x1f) & 1) != 0) {
    FUN_1400020e8(param_1,L"(ClusterRoot) ",0xe);
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    FUN_1400020e8(param_1,L"(Clustered) ",0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ee70a FUN_1468ee70a body=3706 status=ok
// SIG undefined FUN_1468ee70a(void)

void FUN_1468ee70a(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  undefined7 uVar19;
  undefined1 auStack_558 [32];
  wchar_t *local_538;
  wchar_t *local_530;
  wchar_t *local_528;
  wchar_t *local_518;
  longlong *local_510;
  undefined8 *local_508;
  int local_4fc;
  undefined8 local_4f8;
  longlong local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  undefined2 *local_4d8;
  int local_4d0;
  wchar_t *local_4c8;
  int local_4c0;
  wchar_t *local_4b8;
  undefined8 uStack_4b0;
  wchar_t *local_4a0;
  wchar_t *local_498;
  longlong local_490;
  int local_488;
  undefined8 local_480;
  wchar_t *local_478;
  undefined8 uStack_470;
  wchar_t *local_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  int local_450;
  undefined8 local_448;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_558;
  iVar11 = *(int *)(param_1 + 0x10);
  lVar16 = (longlong)iVar11;
  if (lVar16 != 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + lVar16 * 8);
    pwVar14 = *(wchar_t **)(*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar16 * 8) + 8);
    uStack_460 = 0;
    uStack_458 = 0;
    local_450 = 1;
    local_508 = param_2;
    local_4e8 = param_3;
    local_468 = pwVar14;
    local_448 = param_4;
    FUN_1468b4e46(pwVar14,&local_4a0);
    local_530 = L"";
    if ((int)local_498 != 0) {
      local_530 = local_4a0;
    }
    FUN_1468ee4aa(&local_478,pwVar14);
    local_538 = L"";
    if ((int)uStack_470 != 0) {
      local_538 = local_478;
    }
    pwVar18 = (wchar_t *)CONCAT71((int7)((ulonglong)&local_478 >> 8),param_5);
    FUN_146816218(param_4,(ulonglong)pwVar18 & 0xffffffff,L"%s%s %s",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)local_450));
    if (local_478 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    puVar7 = local_508;
    if (local_4a0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    cVar3 = (*(code *)*puVar7)(puVar7[1],&local_468);
    if ((1 < iVar11) && (cVar3 != '\0')) {
      uVar17 = (ulonglong)(iVar11 - 2);
      do {
        local_518 = *(wchar_t **)(*(longlong *)(*(longlong *)(param_1 + 8) + uVar17 * 8) + 8);
        local_488 = ~(uint)uVar17 + *(int *)(param_1 + 0x10);
        if (0xfe < local_488) {
          local_488 = 0xff;
        }
        local_4a0 = local_518;
        local_498 = pwVar14;
        local_490 = lVar13;
        local_480 = param_4;
        if (lVar13 == 0) {
LAB_1468ee8f4:
          FUN_1468b4e46(local_518,&local_468);
          pwVar14 = L"";
          if ((int)uStack_460 != 0) {
            pwVar14 = local_468;
          }
          FUN_1468ee4aa(&local_478,local_518);
          local_530 = L"";
          if ((int)uStack_470 != 0) {
            local_530 = local_478;
          }
          local_538 = L"UNKNOWN";
          local_528 = pwVar14;
LAB_1468ee977:
          FUN_146816218(param_4,(ulonglong)pwVar18 & 0xffffffff,L"%s-> %s = %s %s");
          if (local_478 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          pwVar14 = local_468;
          if (local_468 != (wchar_t *)0x0) {
LAB_1468ee9ad:
            FUN_1400020a8(pwVar14);
          }
        }
        else {
          iVar11 = *(int *)(lVar13 + 0x18);
          if (iVar11 == 3) {
            FUN_1468b4e46(local_518,&local_468);
            pwVar14 = L"";
            if ((int)uStack_460 != 0) {
              pwVar14 = local_468;
            }
            FUN_1468ee4aa(&local_478,local_518);
            local_530 = L"";
            if ((int)uStack_470 != 0) {
              local_530 = local_478;
            }
            local_538 = L"Outer Chain";
            local_528 = pwVar14;
            goto LAB_1468ee977;
          }
          if (iVar11 != 2) {
            if (iVar11 != 1) goto LAB_1468ee8f4;
            plVar8 = (longlong *)FUN_1468b4bea(*(undefined8 *)(pwVar14 + 4));
            if (plVar8 == (longlong *)0x0) {
LAB_1468eed62:
              local_468 = (wchar_t *)0x0;
              uStack_460 = 0;
              uVar19 = (undefined7)((ulonglong)pwVar18 >> 8);
              bVar1 = true;
              plVar8 = (longlong *)0x0;
LAB_1468eed6f:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c962b38) &&
                 (FUN_144b3d300(&DAT_14c962b38), DAT_14c962b38 == -1)) {
                FUN_1446f470e(&DAT_14c962b30,L"Class",1);
                _Init_thread_footer(&DAT_14c962b38);
              }
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c962b48) &&
                 (FUN_144b3d300(&DAT_14c962b48), DAT_14c962b48 == -1)) {
                FUN_1446f470e(&DAT_14c962b40,L"Outer",1);
                _Init_thread_footer(&DAT_14c962b48);
              }
              local_478 = (wchar_t *)0x0;
              uStack_470 = 0;
              if ((*(longlong *)(lVar13 + 0x1c) == DAT_14c962b30) ||
                 (*(longlong *)(lVar13 + 0x1c) == DAT_14c962b40)) {
                FUN_14020fad6(&local_478,L"UObject");
                pwVar18 = (wchar_t *)CONCAT71(uVar19,param_5);
              }
              else if (bVar1) {
                FUN_1400021e4(*(undefined8 *)(pwVar14 + 4),&local_4b8);
                pwVar18 = (wchar_t *)CONCAT71(uVar19,param_5);
                if (local_478 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                local_478 = local_4b8;
                uStack_470 = uStack_4b0;
              }
              else {
                uVar9 = (**(code **)(*plVar8 + 0x308))(plVar8);
                FUN_14020fad6(&local_478,uVar9);
                local_4c8 = (wchar_t *)plVar8[3];
                FUN_1400021e4(&local_4c8,&local_4b8);
                iVar11 = (int)uStack_4b0 + -1;
                if ((int)uStack_4b0 == 0) {
                  iVar11 = 0;
                }
                FUN_1400020e8(&local_478,local_4b8,iVar11);
                pwVar18 = (wchar_t *)CONCAT71((int7)((ulonglong)plVar8 >> 8),param_5);
                if (local_4b8 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
              FUN_1400021e4(lVar13 + 0x1c,&local_4c8);
              pwVar14 = L"";
              if (local_4c0 != 0) {
                pwVar14 = local_4c8;
              }
              pwVar10 = L"";
              if ((int)uStack_470 != 0) {
                pwVar10 = local_478;
              }
              FUN_140002266(&local_4b8,L"UObject* %s::%s",pwVar10,pwVar14);
              pwVar14 = local_4b8;
              iVar11 = (int)uStack_4b0;
              local_4b8 = (wchar_t *)0x0;
              uStack_4b0 = 0;
              pwVar10 = local_478;
              if (local_4c8 != (wchar_t *)0x0) {
                FUN_1400020a8();
                pwVar10 = local_478;
              }
            }
            else {
              lVar16 = FUN_144a797b2();
              if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                  lVar16 + 0x30)) goto LAB_1468eed62;
              local_468 = (wchar_t *)0x0;
              uStack_460 = 0;
              cVar3 = FUN_1468b473e(plVar8,*(undefined8 *)(lVar13 + 0x1c),&local_468);
              if (cVar3 == '\0') {
                bVar1 = false;
                uVar19 = 0;
                goto LAB_1468eed6f;
              }
              local_510 = *(longlong **)(local_468 + (longlong)((int)uStack_460 + -1) * 4);
              uVar9 = *(undefined8 *)local_468;
              FUN_1400021e4(lVar13 + 0x1c,&local_4b8);
              pwVar14 = L"";
              if ((int)uStack_4b0 != 0) {
                pwVar14 = local_4b8;
              }
              lVar16 = FUN_14496b3f0(uVar9);
              local_478 = *(wchar_t **)(lVar16 + 0x18);
              FUN_1400021e4(&local_478,&local_4c8);
              pwVar10 = L"";
              if (local_4c0 != 0) {
                pwVar10 = local_4c8;
              }
              plVar8 = (longlong *)FUN_14496b3f0(uVar9);
              uVar9 = (**(code **)(*plVar8 + 0x308))(plVar8);
              (**(code **)(*local_510 + 0x70))(local_510,&local_4d8,0,0);
              puVar15 = &DAT_149dfb77a;
              if (local_4d0 != 0) {
                puVar15 = local_4d8;
              }
              local_538 = pwVar10;
              local_530 = pwVar14;
              FUN_140002266(&local_478,L"%s %s%s::%s",puVar15,uVar9);
              pwVar14 = local_478;
              iVar11 = (int)uStack_470;
              local_478 = (wchar_t *)0x0;
              uStack_470 = 0;
              if (local_4d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar7 = local_508;
              pwVar10 = local_4b8;
              if (local_4c8 != (wchar_t *)0x0) {
                FUN_1400020a8();
                pwVar10 = local_4b8;
              }
            }
            if (pwVar10 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            FUN_1468b4e46(local_518,&local_478);
            pwVar10 = L"";
            if ((int)uStack_470 != 0) {
              pwVar10 = local_478;
            }
            FUN_1468ee4aa(&local_4b8,local_518);
            local_530 = L"";
            if ((int)uStack_4b0 != 0) {
              local_530 = local_4b8;
            }
            local_538 = pwVar14;
            if (iVar11 == 0) {
              local_538 = L"";
            }
            local_528 = pwVar10;
            FUN_146816218(param_4,(ulonglong)pwVar18 & 0xffffffff,L"%s-> %s = %s %s");
            if (local_4b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_478 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_468 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (pwVar14 == (wchar_t *)0x0) goto LAB_1468ee9b2;
            goto LAB_1468ee9ad;
          }
          local_4b8 = (wchar_t *)0x0;
          uStack_4b0 = 0;
          if (*(longlong *)(lVar13 + 0x1c) == 0) {
            plVar8 = (longlong *)FUN_1468b4bea(*(undefined8 *)(pwVar14 + 4));
            if (plVar8 == (longlong *)0x0) {
LAB_1468ef262:
              FUN_1400021e4(*(undefined8 *)(pwVar14 + 4),&local_468);
              iVar11 = (int)uStack_460 + -1;
              if ((int)uStack_460 == 0) {
                iVar11 = 0;
              }
            }
            else {
              lVar16 = FUN_144a797b2();
              if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                  lVar16 + 0x30)) goto LAB_1468ef262;
              uVar9 = (**(code **)(*plVar8 + 0x308))(plVar8);
              FUN_14020fad6(&local_4b8,uVar9);
              local_478 = (wchar_t *)plVar8[3];
              FUN_1400021e4(&local_478,&local_468);
              iVar11 = (int)uStack_460 + -1;
              if ((int)uStack_460 == 0) {
                iVar11 = 0;
              }
            }
            FUN_1400020e8(&local_4b8,local_468,iVar11);
            if (local_468 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            FUN_1400021e4(lVar13 + 0x1c,&local_468);
            if (local_4b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_4b8 = local_468;
            uStack_4b0 = uStack_460;
          }
          FUN_1468b4e46(local_518,&local_468);
          pwVar14 = L"";
          if ((int)uStack_460 != 0) {
            pwVar14 = local_468;
          }
          FUN_1468ee4aa(&local_478,local_518);
          local_530 = L"";
          if ((int)uStack_470 != 0) {
            local_530 = local_478;
          }
          local_538 = L"";
          if ((int)uStack_4b0 != 0) {
            local_538 = local_4b8;
          }
          local_528 = pwVar14;
          FUN_146816218(param_4,(ulonglong)pwVar18 & 0xffffffff,
                        L"%s-> %s::AddReferencedObjects(%s %s)",
                        L"                                                                                                                                                                                                                                                               "
                        + (0xff - (longlong)local_488));
          if (local_478 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_4f8 = param_4;
          if (local_468 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_510 = (longlong *)(ulonglong)*(uint *)(lVar13 + 0x10);
          if ((local_510 != (longlong *)0x0) && (0 < (int)*(uint *)(lVar13 + 0x10))) {
            local_4fc = local_488;
            local_4f0 = *(longlong *)(lVar13 + 8);
            local_4e0 = local_4e8 + 7;
            plVar8 = (longlong *)0x0;
            do {
              plVar2 = local_4e8;
              if ((int)local_4e8[1] != *(int *)((longlong)local_4e8 + 0x34)) {
                lVar16 = *(longlong *)(local_4f0 + (longlong)plVar8 * 8);
                plVar12 = (longlong *)local_4e8[8];
                if ((longlong *)local_4e8[8] == (longlong *)0x0) {
                  plVar12 = local_4e0;
                }
                iVar11 = *(int *)((longlong)plVar12 +
                                 (ulonglong)
                                 ((int)local_4e8[9] - 1U &
                                 (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
                if (iVar11 != -1) {
                  do {
                    lVar13 = *local_4e8 + (longlong)iVar11 * 0x20;
                    if (*(longlong *)(*local_4e8 + (longlong)iVar11 * 0x20) == lVar16) {
                      if ((lVar13 != 0) && ((undefined8 *)(lVar13 + 8) != (undefined8 *)0x0)) {
                        iVar11 = 0;
                        if (*(int *)(lVar13 + 0x10) == 0) {
                          pwVar14 = L"";
                        }
                        else {
                          pwVar14 = *(wchar_t **)(lVar13 + 8);
                          iVar11 = *(int *)(lVar13 + 0x10) + -1;
                        }
                        goto LAB_1468eeb16;
                      }
                      break;
                    }
                    iVar11 = *(int *)(lVar13 + 0x18);
                  } while (iVar11 != -1);
                }
              }
              puVar7 = (undefined8 *)(local_4f0 + (longlong)plVar8 * 8);
              local_468 = (wchar_t *)((ulonglong)local_468 & 0xffffffffffffff00);
              local_538 = (wchar_t *)0x0;
              FUN_1467b7e84((ulonglong)plVar8 & 0xffffffff,*puVar7,&local_468,0x400);
              FUN_1400b22c2(&local_478,&local_468);
              puVar7 = (undefined8 *)
                       FUN_1468f0a4c(plVar2,(int)((ulonglong)*puVar7 >> 0x20) * 0x17 + (int)*puVar7,
                                     puVar7,&local_478);
              pwVar14 = (wchar_t *)*puVar7;
              iVar11 = *(int *)(puVar7 + 1) + -1;
              if (*(int *)(puVar7 + 1) == 0) {
                iVar11 = 0;
              }
              if (local_478 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
LAB_1468eeb16:
              local_468 = L"TFastReferenceCollector";
              iVar6 = 0;
              if (0 < iVar11) {
                iVar6 = iVar11;
              }
              uStack_460 = CONCAT44(uStack_460._4_4_,0x17);
              pwVar18 = (wchar_t *)
                        ((longlong)pwVar14 + ((longlong)iVar11 * 2 - (ulonglong)(uint)(iVar6 * 2)));
              uStack_470 = CONCAT44(uStack_470._4_4_,iVar6);
              local_478 = pwVar18;
              iVar4 = FUN_144a08910(&local_478,&local_468,0);
              if (iVar4 != -1) break;
              local_468 = L"FWindowsPlatformStackWalk";
              uStack_460 = CONCAT44(uStack_460._4_4_,0x19);
              uStack_470 = CONCAT44(uStack_470._4_4_,iVar6);
              local_478 = pwVar18;
              iVar4 = FUN_144a08910(&local_478,&local_468,0);
              if (iVar4 == -1) {
                local_468 = L"FDirectReferenceProcessor";
                uStack_460 = CONCAT44(uStack_460._4_4_,0x19);
                uStack_470 = CONCAT44(uStack_470._4_4_,iVar6);
                local_478 = pwVar18;
                iVar4 = FUN_144a08910(&local_478,&local_468,0);
                if (iVar4 == -1) {
                  local_468 = L"FReferenceInfoProcessor";
                  uStack_460 = CONCAT44(uStack_460._4_4_,0x17);
                  uStack_470 = CONCAT44(uStack_470._4_4_,iVar6);
                  local_478 = pwVar18;
                  iVar4 = FUN_144a08910(&local_478,&local_468,0);
                  if (iVar4 == -1) {
                    local_468 = L"!";
                    uStack_460 = CONCAT44(uStack_460._4_4_,1);
                    uStack_470 = CONCAT44(uStack_470._4_4_,iVar6);
                    local_478 = pwVar18;
                    uVar5 = FUN_144a08910(&local_478,&local_468,0);
                    if (uVar5 != 0xffffffff) {
                      iVar6 = ~uVar5 + iVar11;
                      if (iVar11 <= (int)(~uVar5 + iVar11)) {
                        iVar6 = iVar11;
                      }
                      if (iVar6 < 1) {
                        iVar6 = 0;
                      }
                      pwVar14 = (wchar_t *)
                                ((longlong)pwVar14 +
                                ((longlong)iVar11 * 2 - (ulonglong)(uint)(iVar6 * 2)));
                      iVar11 = iVar6;
                    }
                    local_530 = (wchar_t *)CONCAT44(local_530._4_4_,iVar11);
                    local_538 = L"";
                    local_528 = pwVar14;
                    FUN_146816218(local_4f8,param_5,L"%*s   ^ %.*s",local_4fc);
                  }
                }
              }
              plVar8 = (longlong *)((longlong)plVar8 + 1);
            } while (plVar8 != local_510);
          }
          if (local_4b8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          pwVar18 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar18 >> 8),param_5);
          puVar7 = local_508;
          param_4 = local_4f8;
        }
LAB_1468ee9b2:
        cVar3 = (*(code *)*puVar7)(puVar7[1],&local_4a0);
        if ((longlong)uVar17 < 1) break;
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar17 * 8);
        uVar17 = uVar17 - 1;
        pwVar14 = local_518;
      } while (cVar3 != '\0');
    }
    FUN_146816218(param_4,(ulonglong)pwVar18 & 0xffffffff,&DAT_149e16f6c);
  }
  if ((local_60 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ef586 FUN_1468ef586 body=169 status=ok
// SIG undefined FUN_1468ef586(void)

void FUN_1468ef586(undefined1 *param_1)

{
  undefined8 uVar1;
  
  FUN_1468ef630();
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1468f102e(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1468f10bc(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1402cfa70();
  FUN_1456f62ec(uVar1);
  if ((param_1[1] == '\x01') && (DAT_14c8426d8 != 0)) {
    FUN_14275ad76(DAT_14c8426d8,*param_1);
    return;
  }
  return;
}



// FUNCTION 1468ef630 FUN_1468ef630 body=645 status=ok
// SIG undefined FUN_1468ef630(void)

void FUN_1468ef630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1468f91fe(param_1 + 8);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar2);
        iVar3 = *(int *)(param_1 + 0x28);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1468f922e((longlong *)(param_1 + 0x20));
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar4 = param_1 + 0x40;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar3 = 0;
  local_58 = lVar4;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (local_58 != lVar4)) {
    do {
      lVar2 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar2 != 0) {
        FUN_1468efa30(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar4 || iStack_6c != iVar3));
  }
  FUN_1468f925e(plVar1);
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar4 = param_1 + 0x90;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar3 = 0;
  local_58 = lVar4;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0xa8);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (local_58 != lVar4)) {
    do {
      if (*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar4 || iStack_6c != iVar3));
  }
  FUN_1468f93e2(plVar1);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ef8b6 FUN_1468ef8b6 body=371 status=ok
// SIG undefined FUN_1468ef8b6(void)

longlong * FUN_1468ef8b6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined1 local_af;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(param_1 + 0x28) != 0) && (lVar1 = **(longlong **)(param_1 + 0x20), lVar1 != 0)) {
    FUN_140056680(&local_a8,&DAT_149dfb77a);
    FUN_144a81de8(&local_b8);
    local_b8 = &PTR_FUN_149e98010;
    local_af = 1;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_d8 = *(undefined1 *)(param_1 + 0xd0);
    local_c8 = *param_3;
    local_c0 = param_3[1];
    FUN_1468ee70a(lVar1,&local_c8,&local_98,&local_b8);
    *param_2 = local_a8;
    local_a8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_a0;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_a0._4_4_;
    local_a0 = 0;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1468f114a(&local_98);
    FUN_144a8720c(&local_b8);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
  }
  FUN_140056680(param_2,L"No target objects are currently reachable.");
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468efa30 FUN_1468efa30 body=87 status=ok
// SIG undefined FUN_1468efa30(void)

void FUN_1468efa30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1468f12e6(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1468f1374(param_1 + 0x10);
  return;
}



// FUNCTION 1468efa88 FUN_1468efa88 body=203 status=ok
// SIG undefined FUN_1468efa88(void)

undefined8
FUN_1468efa88(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_90 = *(undefined4 *)(param_2 + 1);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14688038e(&local_88);
  FUN_1468efb54(param_1,&local_88,param_3,param_4);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468efb54 FUN_1468efb54 body=844 status=ok
// SIG undefined FUN_1468efb54(void)

longlong * FUN_1468efb54(longlong *param_1,void *param_2,ulonglong param_3,byte param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  ulonglong uVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  uint local_d0;
  _RTL_CRITICAL_SECTION *local_c8;
  void *local_c0;
  ulonglong local_b8;
  LPCRITICAL_SECTION local_b0;
  undefined8 local_a8;
  int local_a0;
  uint local_9c;
  int local_98;
  byte local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [12];
  uint uStack_74;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)((longlong)param_2 + 8) == *(int *)((longlong)param_2 + 0x34)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  local_c0 = param_2;
  local_b8 = param_3;
  if (((param_4 & 2) == 0) && (DAT_14c75ecb8 == '\x01')) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    iVar2 = DAT_14c9647dc;
    local_90._8_4_ = FUN_14689c8c0();
    uVar8 = (ulonglong)(int)local_90._8_4_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    uVar5 = 0xffffffffffffffff;
    if (SUB168(auVar3 * ZEXT816(0x50),8) == 0) {
      uVar5 = SUB168(auVar3 * ZEXT816(0x50),0) | 8;
    }
    puVar4 = (ulonglong *)FUN_144a7d36f(uVar5);
    *puVar4 = uVar8;
    lVar7 = 0;
    do {
      *(undefined8 *)((longlong)puVar4 + lVar7 + 0x28) = 0;
      *(undefined4 *)((longlong)puVar4 + lVar7 + 0x30) = 0;
      puVar1 = (undefined8 *)((longlong)puVar4 + lVar7 + 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar4 + lVar7 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar4 + lVar7 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar4 + lVar7 + 0x48) = 0;
      *(undefined4 *)((longlong)puVar4 + lVar7 + 0x50) = 0;
      lVar7 = lVar7 + 0x50;
    } while (uVar8 * 0x50 != lVar7);
    local_b0 = (LPCRITICAL_SECTION)local_90;
    local_d0 = (byte)(~DAT_14c962b60 | DAT_14c75ecb4 == 0) & 1;
    unique0x00009d00 = &local_c0;
    local_a8 = (longlong *)CONCAT44(local_90._8_4_,iVar2 / (int)local_90._8_4_ + 1);
    local_a0 = iVar2;
    local_9c = CONCAT31(local_9c._1_3_,param_4) & 0xffffff01;
    local_c8 = &local_70;
    local_70.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_70.LockCount = 0;
    local_80._0_8_ = FUN_14281e4bc;
    local_90._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)(puVar4 + 1);
    FUN_1401f8d10(L"ParallelFor Task",local_90._8_4_,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    *param_1 = 0;
    param_1[1] = 0;
    if ((longlong)(int)local_90._8_4_ != 0) {
      lVar7 = (longlong)(int)local_90._8_4_ * 0x50;
      p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)local_90._0_8_;
      do {
        FUN_1468f14e6(p_Var6,&local_c0);
        lVar9 = (longlong)(int)(uint)local_b8;
        if (lVar9 != 0) {
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + (uint)local_b8;
          if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < (uint)local_b8) {
            FUN_1447f76d2(param_1,iVar2);
          }
          memmove((void *)((longlong)iVar2 * 8 + *param_1),local_c0,lVar9 << 3);
          local_b8 = local_b8 & 0xffffffff00000000;
        }
        if (local_c0 != (void *)0x0) {
          FUN_1400020a8();
        }
        p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var6[1].EntryCount;
        lVar7 = lVar7 + -0x50;
      } while (lVar7 != 0);
    }
    FUN_1468f1b60((PRTL_CRITICAL_SECTION_DEBUG)(puVar4 + 1));
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    InitializeCriticalSection(&local_70);
    SetCriticalSectionSpinCount(&local_70,4000);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    iVar2 = DAT_14c9647dc;
    local_9c = FUN_14689c8c0();
    local_a0 = iVar2 / (int)local_9c + 1;
    local_d0 = (byte)(~DAT_14c962b60 | DAT_14c75ecb4 == 0) & 1;
    local_90._8_8_ = &local_c0;
    local_98 = iVar2;
    local_c8 = (_RTL_CRITICAL_SECTION *)local_80;
    local_80._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    stack0xffffffffffffff88 = (void **)((ulonglong)uStack_74 << 0x20);
    local_90._0_8_ = FUN_142821f4a;
    local_b0 = &local_70;
    local_a8 = param_1;
    local_94 = param_4;
    FUN_1401f8d10(L"ParallelFor Task",local_9c,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    DeleteCriticalSection(&local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468efea2 FUN_1468efea2 body=158 status=ok
// SIG undefined FUN_1468efea2(void)

ulonglong FUN_1468efea2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_4;
  FUN_14281d16a(local_78,param_1,param_2,param_3);
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_1468c50aa();
  FUN_1468c50aa(local_78);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_78[0] == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468eff42 FUN_1468eff42 body=320 status=ok
// SIG undefined FUN_1468eff42(void)

void FUN_1468eff42(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_1468f0082(param_1 + 0x5e0);
  *(uint *)(param_1 + 0x5d8) = (uint)(*(longlong *)(param_1 + 0x488) == 0) * 2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c962ba4) {
    FUN_144b3d300(&DAT_14c962ba4);
    if (DAT_14c962ba4 == -1) {
      FUN_14281de80();
      DAT_14c962ba0 = '\x01';
      _Init_thread_footer(&DAT_14c962ba4);
    }
  }
  if ((DAT_14c962ba0 == '\x01') && (lVar5 = *(longlong *)(param_1 + 0x460), lVar5 != 0)) {
    lVar3 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x460) + 0x10);
    }
    if ((longlong)DAT_14c962b98 == 0) {
      bVar6 = false;
    }
    else {
      lVar3 = (longlong)DAT_14c962b98 << 3;
      plVar4 = DAT_14c962b90;
      do {
        lVar1 = *plVar4;
        if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
            lVar1 + 0x30)) goto LAB_1468f001c;
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
      plVar4 = (longlong *)0x0;
LAB_1468f001c:
      bVar6 = plVar4 != (longlong *)0x0;
    }
    if (*(longlong *)(param_1 + 0x488) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = bVar6 & *(byte *)(param_1 + 0x495) >> 7;
    }
    *(byte *)(param_1 + 0x5a8) = bVar2;
  }
  return;
}



// FUNCTION 1468f0082 FUN_1468f0082 body=60 status=ok
// SIG undefined FUN_1468f0082(void)

void FUN_1468f0082(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 3) {
    FUN_1468f97a6(param_1,iVar1);
  }
  FUN_1468f977c((longlong)iVar1 * 0x400 + *param_1);
  return;
}



// FUNCTION 1468f00be FUN_1468f00be body=75 status=ok
// SIG undefined FUN_1468f00be(void)

void FUN_1468f00be(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2e18(param_1 + 8);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f010a FUN_1468f010a body=175 status=ok
// SIG undefined FUN_1468f010a(void)

void FUN_1468f010a(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146875196(param_4,&local_40);
  if (&local_40 == param_1) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_40;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  }
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f01ba FUN_1468f01ba body=150 status=ok
// SIG undefined FUN_1468f01ba(void)

undefined1 FUN_1468f01ba(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  code *local_38;
  undefined8 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_140ebe022();
    if (cVar1 == '\0') {
      FUN_1468c51e8(param_1);
    }
    local_40 = &local_21;
    local_21 = 1;
    local_30 = &local_48;
    local_38 = FUN_14282513c;
    local_58 = 0x200000;
    local_48 = param_2;
    FUN_144a56f9f(param_1,&local_38,0,0x50);
    uVar2 = local_21;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f02c2 FUN_1468f02c2 body=136 status=ok
// SIG undefined FUN_1468f02c2(void)

void FUN_1468f02c2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x84)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_1468f034c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468f034c FUN_1468f034c body=140 status=ok
// SIG undefined FUN_1468f034c(void)

void FUN_1468f034c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,0xc);
  return;
}



// FUNCTION 1468f03d8 FUN_1468f03d8 body=29 status=ok
// SIG undefined FUN_1468f03d8(void)

undefined8 FUN_1468f03d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f03f6 FUN_1468f03f6 body=223 status=ok
// SIG undefined FUN_1468f03f6(void)

undefined8 FUN_1468f03f6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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



// FUNCTION 1468f04d6 FUN_1468f04d6 body=29 status=ok
// SIG undefined FUN_1468f04d6(void)

undefined8 FUN_1468f04d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f04f4 FUN_1468f04f4 body=32 status=ok
// SIG undefined FUN_1468f04f4(void)

undefined8 FUN_1468f04f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468f0514 FUN_1468f0514 body=302 status=ok
// SIG undefined FUN_1468f0514(void)

void FUN_1468f0514(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0x3c) < (int)param_1[2])) {
    iVar1 = *(int *)(*param_1 + 0xc);
    if (((longlong)iVar1 < 0) || (DAT_14c9647dc <= iVar1)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                    L"Invalid object index in reference chain search %d",iVar1);
    }
    FUN_140619b9c(param_1 + 1,&local_48);
    lVar2 = param_1[0xc];
    uVar5 = (ulonglong)local_40;
    if (uVar5 == 0) {
      local_40 = 0;
    }
    else {
      param_1[0xc] = lVar2 + uVar5;
      if ((ulonglong)(param_1[0xd] - lVar2) < uVar5) {
        FUN_1467b1212(param_1 + 0xb,lVar2);
      }
      memcpy((void *)(lVar2 * 4 + param_1[0xb]),local_48,uVar5 << 2);
    }
    lVar3 = param_1[0xe];
    lVar4 = ((longlong)iVar1 - (longlong)(int)param_1[0x10]) * 0x10;
    *(longlong *)(lVar3 + lVar4) = lVar2 << 2;
    *(int *)(lVar3 + 8 + lVar4) = local_40;
    FUN_1402226aa(param_1 + 1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f0643 FUN_1468f0643 body=243 status=ok
// SIG undefined FUN_1468f0643(void)

ulonglong FUN_1468f0643(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  
  puVar2 = (uint *)*param_1;
  puVar5 = puVar2;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar3 = puVar2 + *(int *)(param_1 + 1);
    puVar8 = puVar2;
LAB_1468f0669:
    puVar4 = puVar3;
    puVar5 = puVar8;
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      plVar7 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar7 = param_2 + 7;
      }
      while( true ) {
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_2[9] - 1U & *puVar8) * 4);
        puVar5 = puVar8;
        if (iVar6 == -1) break;
        while (*(uint *)(*param_2 + (longlong)iVar6 * 0xc) != *puVar8) {
          iVar6 = *(int *)(*param_2 + (longlong)iVar6 * 0xc + 4);
          if (iVar6 == -1) goto LAB_1468f0676;
        }
        puVar8 = puVar8 + 1;
        puVar5 = puVar3;
        if (puVar8 == puVar3) goto LAB_1468f0726;
      }
    }
LAB_1468f0676:
    do {
      puVar3 = puVar4 + -1;
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        uVar1 = puVar4[-1];
        plVar7 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar7 = param_2 + 7;
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_2[9] - 1U & uVar1) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*param_2 + (longlong)iVar6 * 0xc) == uVar1) {
              *puVar5 = uVar1;
              puVar8 = puVar5 + 1;
              puVar5 = puVar3;
              if (puVar8 == puVar3) goto LAB_1468f0726;
              goto LAB_1468f0669;
            }
            iVar6 = *(int *)(*param_2 + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
        }
      }
      puVar4 = puVar3;
    } while (puVar5 != puVar3);
  }
LAB_1468f0726:
  return (ulonglong)((longlong)puVar5 - (longlong)puVar2) >> 2;
}



// FUNCTION 1468f0736 FUN_1468f0736 body=41 status=ok
// SIG undefined FUN_1468f0736(void)

void FUN_1468f0736(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468f0760(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1468f0760 FUN_1468f0760 body=74 status=ok
// SIG undefined FUN_1468f0760(void)

void FUN_1468f0760(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 8);
  return;
}



// FUNCTION 1468f07aa FUN_1468f07aa body=302 status=ok
// SIG undefined FUN_1468f07aa(void)

void FUN_1468f07aa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0x3c) < (int)param_1[2])) {
    iVar1 = *(int *)(*param_1 + 0xc);
    if (((longlong)iVar1 < 0) || (DAT_14c9647dc <= iVar1)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                    L"Invalid object index in reference chain search %d",iVar1);
    }
    FUN_140619b9c(param_1 + 1,&local_48);
    lVar2 = param_1[0xc];
    uVar5 = (ulonglong)local_40;
    if (uVar5 == 0) {
      local_40 = 0;
    }
    else {
      param_1[0xc] = lVar2 + uVar5;
      if ((ulonglong)(param_1[0xd] - lVar2) < uVar5) {
        FUN_1467b1212(param_1 + 0xb,lVar2);
      }
      memcpy((void *)(lVar2 * 4 + param_1[0xb]),local_48,uVar5 << 2);
    }
    lVar3 = param_1[0xe];
    lVar4 = ((longlong)iVar1 - (longlong)(int)param_1[0x10]) * 0x10;
    *(longlong *)(lVar3 + lVar4) = lVar2 << 2;
    *(int *)(lVar3 + 8 + lVar4) = local_40;
    FUN_1402226aa(param_1 + 1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f08d9 FUN_1468f08d9 body=41 status=ok
// SIG undefined FUN_1468f08d9(void)

void FUN_1468f08d9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468f0902(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1468f0902 FUN_1468f0902 body=74 status=ok
// SIG undefined FUN_1468f0902(void)

void FUN_1468f0902(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 8);
  return;
}



// FUNCTION 1468f094c FUN_1468f094c body=52 status=ok
// SIG undefined FUN_1468f094c(void)

void FUN_1468f094c(longlong *param_1)

{
  FUN_1468f0980();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f0980 FUN_1468f0980 body=89 status=ok
// SIG undefined FUN_1468f0980(void)

void FUN_1468f0980(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1468f09d9 FUN_1468f09d9 body=41 status=ok
// SIG undefined FUN_1468f09d9(void)

void FUN_1468f09d9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468f0a02(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1468f0a02 FUN_1468f0a02 body=74 status=ok
// SIG undefined FUN_1468f0a02(void)

void FUN_1468f0a02(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 8);
  return;
}



// FUNCTION 1468f0a4c FUN_1468f0a4c body=188 status=ok
// SIG undefined FUN_1468f0a4c(void)

longlong FUN_1468f0a4c(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1468f0aeb;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_1468f0b0a(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1468f0aeb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1468f0b0a FUN_1468f0b0a body=307 status=ok
// SIG undefined FUN_1468f0b0a(void)

undefined4 * FUN_1468f0b0a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468f0c3e(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1468f0d24(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1468f0e6a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f0c3e FUN_1468f0c3e body=229 status=ok
// SIG undefined FUN_1468f0c3e(void)

int * FUN_1468f0c3e(longlong *param_1,int *param_2)

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



// FUNCTION 1468f0d24 FUN_1468f0d24 body=187 status=ok
// SIG undefined FUN_1468f0d24(void)

void FUN_1468f0d24(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
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
          FUN_1468f0de0(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1468f0d97;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1468f0d97:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1468f0de0 FUN_1468f0de0 body=138 status=ok
// SIG undefined FUN_1468f0de0(void)

void FUN_1468f0de0(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1468f0e6a FUN_1468f0e6a body=450 status=ok
// SIG undefined FUN_1468f0e6a(void)

void FUN_1468f0e6a(longlong *param_1)

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



// FUNCTION 1468f102e FUN_1468f102e body=52 status=ok
// SIG undefined FUN_1468f102e(void)

void FUN_1468f102e(longlong *param_1)

{
  FUN_1468f1062();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f1062 FUN_1468f1062 body=89 status=ok
// SIG undefined FUN_1468f1062(void)

void FUN_1468f1062(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1468f10bc FUN_1468f10bc body=52 status=ok
// SIG undefined FUN_1468f10bc(void)

void FUN_1468f10bc(longlong *param_1)

{
  FUN_1468f10f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f10f0 FUN_1468f10f0 body=89 status=ok
// SIG undefined FUN_1468f10f0(void)

void FUN_1468f10f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1468f114a FUN_1468f114a body=54 status=ok
// SIG undefined FUN_1468f114a(void)

void FUN_1468f114a(longlong *param_1)

{
  FUN_1468f1180(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f1180 FUN_1468f1180 body=356 status=ok
// SIG undefined FUN_1468f1180(void)

void FUN_1468f1180(longlong *param_1,int param_2)

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



// FUNCTION 1468f12e6 FUN_1468f12e6 body=52 status=ok
// SIG undefined FUN_1468f12e6(void)

void FUN_1468f12e6(longlong *param_1)

{
  FUN_1468f131a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f131a FUN_1468f131a body=89 status=ok
// SIG undefined FUN_1468f131a(void)

void FUN_1468f131a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1468f1374 FUN_1468f1374 body=52 status=ok
// SIG undefined FUN_1468f1374(void)

void FUN_1468f1374(longlong *param_1)

{
  FUN_1468f13a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f13a8 FUN_1468f13a8 body=317 status=ok
// SIG undefined FUN_1468f13a8(void)

void FUN_1468f13a8(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f14e6 FUN_1468f14e6 body=310 status=ok
// SIG undefined FUN_1468f14e6(void)

longlong * FUN_1468f14e6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_14079e7a6(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447f76d2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f161e FUN_1468f161e body=158 status=ok
// SIG undefined FUN_1468f161e(void)

longlong * FUN_1468f161e(longlong *param_1,longlong param_2,undefined1 param_3)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = (longlong)&PTR_FUN_149ea86a0;
  param_1[0x12] = (longlong)&PTR_LAB_149ea8900;
  param_1[0x15] = param_2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb1) = param_3;
  FUN_144a69558(param_1,1);
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0x10;
  (**(code **)(*param_1 + 0xd8))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(param_1,1);
  FUN_14682180a(param_1,1);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 0x16;
  return param_1;
}



// FUNCTION 1468f16bc FUN_1468f16bc body=79 status=ok
// SIG undefined FUN_1468f16bc(void)

longlong FUN_1468f16bc(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x90) = &PTR_LAB_149eb0140;
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f170c FUN_1468f170c body=195 status=ok
// SIG undefined FUN_1468f170c(void)

longlong FUN_1468f170c(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xa8), (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)))
  {
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar5 * 0x10) == uVar1) {
          if ((*(char *)(param_1 + 0xb1) == '\x01') &&
             (cVar3 = FUN_144b00bde(*(undefined8 *)(param_1 + 0xa0)), cVar3 != '\0')) {
            return param_1;
          }
          *(undefined1 *)(param_1 + 0xb0) = 1;
          return param_1;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar2 + 8);
      } while (iVar5 != -1);
    }
  }
  return param_1;
}



// FUNCTION 1468f17e4 FUN_1468f17e4 body=180 status=ok
// SIG undefined FUN_1468f17e4(void)

void FUN_1468f17e4(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x18), (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)))
  {
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar5 * 0x10) == uVar1) {
          if ((*(char *)(param_1 + 0x21) == '\x01') &&
             (cVar3 = FUN_144b00bde(*(undefined8 *)(param_1 + 0x10)), cVar3 != '\0')) {
            return;
          }
          *(undefined1 *)(param_1 + 0x20) = 1;
          return;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar2 + 8);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1468f1898 FUN_1468f1898 body=64 status=ok
// SIG undefined FUN_1468f1898(void)

undefined8 * FUN_1468f1898(undefined8 *param_1,int param_2)

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



// FUNCTION 1468f18e0 FUN_1468f18e0 body=285 status=ok
// SIG undefined FUN_1468f18e0(void)

void FUN_1468f18e0(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    plVar7 = *(longlong **)(param_1 + 0x10);
    param_3 = **(ulonglong **)(param_1 + 0x18);
    local_18 = param_3;
    if (param_3 == 0) goto LAB_1468f19b7;
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x10);
  }
  uVar1 = *param_2;
  local_18 = param_3;
  if ((uVar1 != param_3 && uVar1 != 0) &&
     (plVar2 = (longlong *)*plVar7, (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar5 * 0x10) == uVar1) {
          if (((*(byte *)(plVar7 + 2) & 1) == 0) || (cVar3 = FUN_144b00bde(param_3), cVar3 == '\0'))
          {
            FUN_1457b12ce(plVar7[1],local_1c,&local_18,0);
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar2 + 8);
      } while (iVar5 != -1);
    }
  }
LAB_1468f19b7:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f19fe FUN_1468f19fe body=353 status=ok
// SIG undefined FUN_1468f19fe(void)

void FUN_1468f19fe(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_4 = **(ulonglong **)(param_1 + 0x18);
  }
  if (0 < (int)param_3) {
    uVar8 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x10);
      local_50 = param_4;
      if (param_4 == 0) {
        local_50 = **(ulonglong **)(param_1 + 0x18);
      }
      uVar2 = *(ulonglong *)(param_2 + uVar8 * 8);
      if ((((uVar2 != 0) && (local_50 != 0)) && (uVar2 != local_50)) &&
         (plVar3 = (longlong *)*plVar1, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        plVar7 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[8];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar3[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(ulonglong *)(*plVar3 + (longlong)iVar6 * 0x10) == uVar2) {
              if (((*(byte *)(plVar1 + 2) & 1) == 0) || (cVar4 = FUN_144b00bde(), cVar4 == '\0')) {
                FUN_1457b12ce(plVar1[1],local_54,&local_50,0);
              }
              break;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar3 + 8);
          } while (iVar6 != -1);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f1b60 FUN_1468f1b60 body=136 status=ok
// SIG undefined FUN_1468f1b60(void)

void FUN_1468f1b60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
    if (lVar1 != 0) {
      lVar3 = lVar1 * -0x50;
      lVar2 = lVar1 * 0x50 + param_1;
      do {
        *(undefined4 *)(lVar2 + -8) = 0;
        if (*(longlong *)(lVar2 + -0x10) != 0) {
          FUN_1400020a8();
        }
        FUN_140603fbe(lVar2 + -0x50);
        lVar3 = lVar3 + 0x50;
        lVar2 = lVar2 + -0x50;
      } while (lVar3 != 0);
    }
    thunk_FUN_1400020a8(param_1 + -8,lVar1 * 0x50 + 8);
    return;
  }
  return;
}



// FUNCTION 1468f1be8 FUN_1468f1be8 body=93 status=ok
// SIG undefined FUN_1468f1be8(void)

longlong FUN_1468f1be8(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1468f1c46(param_1);
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



// FUNCTION 1468f1c46 FUN_1468f1c46 body=412 status=ok
// SIG undefined FUN_1468f1c46(void)

longlong * FUN_1468f1c46(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar8) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar7 = (longlong)iVar6;
        FUN_1468f1de3(*(undefined8 *)(lVar2 + 8 + lVar7 * 0x28),
                      *(undefined4 *)(lVar2 + 0x10 + lVar7 * 0x28));
        if (*(longlong *)(lVar2 + 8 + lVar7 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar8));
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
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f1de3 FUN_1468f1de3 body=47 status=ok
// SIG undefined FUN_1468f1de3(void)

void FUN_1468f1de3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468f1e12 FUN_1468f1e12 body=52 status=ok
// SIG undefined FUN_1468f1e12(void)

void FUN_1468f1e12(longlong *param_1)

{
  FUN_1468f1e46();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f1e46 FUN_1468f1e46 body=349 status=ok
// SIG undefined FUN_1468f1e46(void)

void FUN_1468f1e46(longlong *param_1)

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
      FUN_145de63f0(lVar2 + lVar3 + 8);
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



// FUNCTION 1468f1fa4 FUN_1468f1fa4 body=238 status=ok
// SIG undefined FUN_1468f1fa4(void)

int * FUN_1468f1fa4(longlong *param_1,int *param_2)

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



// FUNCTION 1468f2092 FUN_1468f2092 body=154 status=ok
// SIG undefined FUN_1468f2092(void)

void FUN_1468f2092(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = FUN_1468c2192();
    if (iVar11 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar11 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1468f212c(param_1,*param_4,1);
      *param_4 = iVar11;
      uVar10 = 1;
      goto LAB_1468f20b3;
    }
  }
  uVar10 = 0;
LAB_1468f20b3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1468f212c FUN_1468f212c body=150 status=ok
// SIG undefined FUN_1468f212c(void)

void FUN_1468f212c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1468f21c2 FUN_1468f21c2 body=633 status=ok
// SIG undefined FUN_1468f21c2(void)

void FUN_1468f21c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
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
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar14 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4)
             = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar6 = local_78._4_4_ < (int)local_60[3];
    iVar17 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar6) {
      do {
        lVar3 = *local_90;
        lVar18 = (longlong)iVar17 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar18);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar18);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar16 = (uint)uVar5 & 0xffff;
        uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar15 = (uint)uVar4 & 0xffff;
        uVar14 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
        uVar8 = FUN_144a78877(0,(uVar14 >> 2) +
                                ((uint)uVar5 << 0x10 | uVar16) + (int)((ulonglong)uVar5 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar16 >> 4) + uVar14 * 0x40 +
                                0x9e3779b9 ^ uVar14);
        iVar10 = *(int *)(lVar3 + 0x18 + lVar18);
        puVar13 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar13 = *(undefined2 **)(lVar3 + 0x10 + lVar18);
        }
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar7,puVar13);
        iVar10 = FUN_144a78877(uVar8,uVar9);
        uVar11 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x2c + lVar18) = iVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar18) =
             *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar6 = local_78._4_4_ < (int)local_80[3];
        iVar17 = local_78._4_4_;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f243c FUN_1468f243c body=313 status=ok
// SIG undefined FUN_1468f243c(void)

void FUN_1468f243c(longlong *param_1)

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



// FUNCTION 1468f2576 FUN_1468f2576 body=203 status=ok
// SIG undefined FUN_1468f2576(void)

int FUN_1468f2576(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1468f25c0:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1468f2636;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1468f2636;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1468f2627;
    }
  }
  return -1;
LAB_1468f2636:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1468f2627:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1468f25c0;
}



// FUNCTION 1468f2641 FUN_1468f2641 body=41 status=ok
// SIG undefined FUN_1468f2641(void)

void FUN_1468f2641(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146825c36(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 1468f266a FUN_1468f266a body=122 status=ok
// SIG undefined FUN_1468f266a(void)

void FUN_1468f266a(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    FUN_1468be15e();
  }
  if (param_1[3] != 0) {
    param_1[3] = 0;
    FUN_1400020a8();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[2] = 0;
    FUN_146825ac6(lVar1);
    FUN_1400020a8(lVar1);
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001468f26d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 1468f26e4 FUN_1468f26e4 body=62 status=ok
// SIG undefined FUN_1468f26e4(void)

void FUN_1468f26e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_1468f2da5(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2722 FUN_1468f2722 body=62 status=ok
// SIG undefined FUN_1468f2722(void)

void FUN_1468f2722(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar1 = param_1;
  }
  FUN_1468f2641(lVar1,*(undefined4 *)(param_1 + 0x308));
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2760 FUN_1468f2760 body=52 status=ok
// SIG undefined FUN_1468f2760(void)

void FUN_1468f2760(longlong *param_1)

{
  FUN_1468f2794();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2794 FUN_1468f2794 body=89 status=ok
// SIG undefined FUN_1468f2794(void)

void FUN_1468f2794(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1468f27ed FUN_1468f27ed body=47 status=ok
// SIG undefined FUN_1468f27ed(void)

void FUN_1468f27ed(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468f281c FUN_1468f281c body=41 status=ok
// SIG undefined FUN_1468f281c(void)

void FUN_1468f281c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468f2846(param_1);
    param_1 = param_1 + 0x400;
  }
  return;
}



// FUNCTION 1468f2846 FUN_1468f2846 body=779 status=ok
// SIG undefined FUN_1468f2846(void)

void FUN_1468f2846(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  FUN_1468f266a();
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    plVar3 = (longlong *)FUN_14054d1d4();
    if ((int)param_1[5] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[4];
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,puVar4,0,0,0);
  }
  if (*(int *)((longlong)param_1 + 0x3c) != -1) {
    plVar3 = (longlong *)FUN_14054d1d4();
    if ((int)param_1[7] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,puVar4,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2b52(param_1 + 0x76);
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2b52(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2ce4(param_1 + 0x62);
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1468bb9c4(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1468bb9c4(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2d18(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 8);
  if (*(int *)((longlong)param_1 + 0x3c) != -1) {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = 0;
    param_1[7] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = 0;
    param_1[5] = -0x100000000;
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_146825ac6(lVar1);
    FUN_1400020a8(lVar1);
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468f2b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 1468f2b52 FUN_1468f2b52 body=52 status=ok
// SIG undefined FUN_1468f2b52(void)

void FUN_1468f2b52(longlong *param_1)

{
  FUN_1468f2b86();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2b86 FUN_1468f2b86 body=349 status=ok
// SIG undefined FUN_1468f2b86(void)

void FUN_1468f2b86(longlong *param_1)

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
      FUN_1400dbf0e(lVar2 + lVar3 + 8);
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



// FUNCTION 1468f2ce4 FUN_1468f2ce4 body=52 status=ok
// SIG undefined FUN_1468f2ce4(void)

void FUN_1468f2ce4(longlong *param_1)

{
  FUN_1468f243c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2d18 FUN_1468f2d18 body=52 status=ok
// SIG undefined FUN_1468f2d18(void)

void FUN_1468f2d18(longlong *param_1)

{
  FUN_1468f2d4c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2d4c FUN_1468f2d4c body=89 status=ok
// SIG undefined FUN_1468f2d4c(void)

void FUN_1468f2d4c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1468f2da5 FUN_1468f2da5 body=38 status=ok
// SIG undefined FUN_1468f2da5(void)

void FUN_1468f2da5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468f2dcc(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1468f2dcc FUN_1468f2dcc body=75 status=ok
// SIG undefined FUN_1468f2dcc(void)

void FUN_1468f2dcc(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1468f2e18 FUN_1468f2e18 body=52 status=ok
// SIG undefined FUN_1468f2e18(void)

void FUN_1468f2e18(longlong *param_1)

{
  FUN_1468f2e4c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f2e4c FUN_1468f2e4c body=336 status=ok
// SIG undefined FUN_1468f2e4c(void)

void FUN_1468f2e4c(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_1468f1de3(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1468f2f9e FUN_1468f2f9e body=114 status=ok
// SIG undefined FUN_1468f2f9e(void)

void FUN_1468f2f9e(longlong *param_1,int param_2)

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



// FUNCTION 1468f3010 FUN_1468f3010 body=136 status=ok
// SIG undefined FUN_1468f3010(void)

void FUN_1468f3010(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1468f309a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468f309a FUN_1468f309a body=149 status=ok
// SIG undefined FUN_1468f309a(void)

void FUN_1468f309a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0xc);
  return;
}



// FUNCTION 1468f3130 FUN_1468f3130 body=110 status=ok
// SIG undefined FUN_1468f3130(void)

void FUN_1468f3130(longlong param_1,int param_2)

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
    FUN_1468f31a0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468f31a0 FUN_1468f31a0 body=132 status=ok
// SIG undefined FUN_1468f31a0(void)

void FUN_1468f31a0(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1468f3224 FUN_1468f3224 body=126 status=ok
// SIG undefined FUN_1468f3224(void)

undefined8 *
FUN_1468f3224(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f32c2(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea8d70;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f32a4 FUN_1468f32a4 body=29 status=ok
// SIG undefined FUN_1468f32a4(void)

undefined8 FUN_1468f32a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f32c2 FUN_1468f32c2 body=135 status=ok
// SIG undefined FUN_1468f32c2(void)

undefined8 *
FUN_1468f32c2(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea8fe0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f334a FUN_1468f334a body=29 status=ok
// SIG undefined FUN_1468f334a(void)

undefined8 FUN_1468f334a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f3368 FUN_1468f3368 body=29 status=ok
// SIG undefined FUN_1468f3368(void)

undefined8 FUN_1468f3368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f3386 FUN_1468f3386 body=126 status=ok
// SIG undefined FUN_1468f3386(void)

undefined8 *
FUN_1468f3386(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f3424(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea94c0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f3406 FUN_1468f3406 body=29 status=ok
// SIG undefined FUN_1468f3406(void)

undefined8 FUN_1468f3406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f3424 FUN_1468f3424 body=135 status=ok
// SIG undefined FUN_1468f3424(void)

undefined8 *
FUN_1468f3424(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea9730;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f34ac FUN_1468f34ac body=29 status=ok
// SIG undefined FUN_1468f34ac(void)

undefined8 FUN_1468f34ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f34ca FUN_1468f34ca body=29 status=ok
// SIG undefined FUN_1468f34ca(void)

undefined8 FUN_1468f34ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f34e8 FUN_1468f34e8 body=126 status=ok
// SIG undefined FUN_1468f34e8(void)

undefined8 *
FUN_1468f34e8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1468f3586(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea9c10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f3568 FUN_1468f3568 body=29 status=ok
// SIG undefined FUN_1468f3568(void)

undefined8 FUN_1468f3568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f3586 FUN_1468f3586 body=135 status=ok
// SIG undefined FUN_1468f3586(void)

undefined8 *
FUN_1468f3586(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea9e80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


