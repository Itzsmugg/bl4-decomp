// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468f360e FUN_1468f360e body=29 status=ok
// SIG undefined FUN_1468f360e(void)

undefined8 FUN_1468f360e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f362c FUN_1468f362c body=29 status=ok
// SIG undefined FUN_1468f362c(void)

undefined8 FUN_1468f362c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468f364a FUN_1468f364a body=135 status=ok
// SIG undefined FUN_1468f364a(void)

undefined8 *
FUN_1468f364a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  *param_1 = &PTR_LAB_149ea8200;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f36d2 FUN_1468f36d2 body=323 status=ok
// SIG undefined FUN_1468f36d2(void)

void FUN_1468f36d2(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x14);
  FUN_1468f0736(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_1468f397e(plVar1);
  }
  FUN_1468f3884(plVar1,param_2);
  if (0 < (int)param_2) {
    lVar5 = 0x70;
    uVar4 = 0;
    do {
      lVar2 = *plVar1;
      *(int *)(lVar2 + 0x10 + lVar5) = param_4;
      iVar3 = param_5 - (param_2 - 1) * param_3;
      if (uVar4 < param_2 - 1) {
        iVar3 = param_3;
      }
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (*(int *)(lVar2 + 0xc + lVar5) < iVar3) {
        FUN_1468f3a92(lVar2 + lVar5,iVar3);
      }
      FUN_1468f38ca(lVar2 + lVar5,iVar3);
      uVar4 = uVar4 + 1;
      param_4 = param_4 + param_3;
      lVar5 = lVar5 + 0x88;
    } while (param_2 != uVar4);
  }
  if (param_6 == -1) {
    return;
  }
  lVar5 = FUN_1468f3936(plVar1);
  *(int *)(lVar5 + 0x80) = param_6;
  if (*(int *)(lVar5 + 0x7c) < 1) {
    FUN_1468f3a92(lVar5 + 0x70,1);
  }
  FUN_1468f38ca(lVar5 + 0x70,1);
  return;
}



// FUNCTION 1468f3816 FUN_1468f3816 body=109 status=ok
// SIG undefined FUN_1468f3816(void)

undefined8 * FUN_1468f3816(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 3;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14010590e(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
    }
  }
  return param_1;
}



// FUNCTION 1468f3884 FUN_1468f3884 body=69 status=ok
// SIG undefined FUN_1468f3884(void)

void FUN_1468f3884(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1468f39fa(param_1,iVar1);
  }
  FUN_1468f39ae((longlong)iVar1 * 0x88 + *param_1,param_2);
  return;
}



// FUNCTION 1468f38ca FUN_1468f38ca body=107 status=ok
// SIG undefined FUN_1468f38ca(void)

void FUN_1468f38ca(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1468f3af2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1468f3b78(param_1);
  return;
}



// FUNCTION 1468f3936 FUN_1468f3936 body=71 status=ok
// SIG undefined FUN_1468f3936(void)

longlong FUN_1468f3936(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468f39fa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_1468f39ae(lVar2,1);
  return lVar2;
}



// FUNCTION 1468f397e FUN_1468f397e body=48 status=ok
// SIG undefined FUN_1468f397e(void)

void FUN_1468f397e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 1468f39ae FUN_1468f39ae body=75 status=ok
// SIG undefined FUN_1468f39ae(void)

void FUN_1468f39ae(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      puVar1[-6] = 0;
      *(undefined4 *)(puVar1 + -5) = 0;
      puVar1[-0xb] = 0;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      *(undefined8 *)((longlong)puVar1 + -0x24) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468f39fa FUN_1468f39fa body=150 status=ok
// SIG undefined FUN_1468f39fa(void)

void FUN_1468f39fa(longlong param_1,int param_2)

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



// FUNCTION 1468f3a92 FUN_1468f3a92 body=95 status=ok
// SIG undefined FUN_1468f3a92(void)

void FUN_1468f3a92(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1468f3af2 FUN_1468f3af2 body=132 status=ok
// SIG undefined FUN_1468f3af2(void)

void FUN_1468f3af2(longlong param_1,int param_2)

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



// FUNCTION 1468f3b78 FUN_1468f3b78 body=62 status=ok
// SIG undefined FUN_1468f3b78(void)

void FUN_1468f3b78(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468f3bb6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1468f3bb6 FUN_1468f3bb6 body=93 status=ok
// SIG undefined FUN_1468f3bb6(void)

ulonglong FUN_1468f3bb6(uint param_1,uint param_2)

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



// FUNCTION 1468f3c1c FUN_1468f3c1c body=415 status=ok
// SIG undefined FUN_1468f3c1c(void)

void FUN_1468f3c1c(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong local_170;
  undefined8 uStack_168;
  int local_158 [2];
  undefined8 local_150;
  int *local_148;
  undefined1 local_140 [8];
  longlong local_138;
  undefined4 local_130;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_138;
  local_150 = *(undefined8 *)(param_1 + 0x10);
  local_170 = 0;
  uStack_168 = 0;
  iVar6 = *(int *)(param_1 + 0x24);
  local_158[0] = param_2;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_14079e7a6(&local_170);
    iVar6 = *(int *)(param_1 + 0x24);
  }
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  iVar8 = iVar6;
  if (iVar4 <= param_2) {
    iVar8 = *(int *)(param_1 + 0x1c) - iVar4 * iVar6;
  }
  if (0 < iVar8) {
    uVar7 = iVar6 * param_2 + *(int *)(param_1 + 0x18);
    do {
      lVar9 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      lVar1 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 0x18);
      if (((lVar1 != 0) &&
          ((*(uint *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 0x18 + 8) >> 0x1c & 1) == 0)) &&
         (cVar3 = FUN_1468f3dbe(*(undefined8 *)(param_1 + 0x10),param_2,lVar1), uVar2 = uStack_168,
         cVar3 == '\0')) {
        lVar9 = (longlong)(int)uStack_168;
        uVar5 = (int)uStack_168 + 1;
        uStack_168 = CONCAT44(uStack_168._4_4_,uVar5);
        if (uStack_168._4_4_ < uVar5) {
          FUN_1447f76d2(&local_170,uVar2 & 0xffffffff);
        }
        *(longlong *)(local_170 + lVar9 * 8) = lVar1;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_14002fb26(local_140);
  FUN_14079e744(&local_170);
  local_138 = local_170;
  local_130 = (int)uStack_168;
  local_148 = local_158;
  FUN_1428223d0(&local_148,local_140);
  FUN_140ea1d7a(local_140);
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f3dbe FUN_1468f3dbe body=314 status=ok
// SIG undefined FUN_1468f3dbe(void)

undefined8 FUN_1468f3dbe(longlong param_1,int param_2,ulonglong param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = param_3;
  do {
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      lVar6 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar6 = param_1 + 0x50;
      }
      iVar2 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar5 >> 0x10 ^ uVar5))
                               * 4);
      if (iVar2 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10) == uVar4) {
            if (*(longlong *)(param_3 + 0x20) != 0) {
              lVar6 = *(longlong *)(param_1 + 8);
              FUN_1468f0514(lVar6 + (longlong)param_2 * 0x88);
              puVar3 = (ulonglong *)(lVar6 + (longlong)param_2 * 0x88);
              *puVar3 = param_3;
              local_24 = *(int *)(*(longlong *)(param_3 + 0x20) + 0xc);
              if ((local_24 < 0) || (DAT_14c9647dc <= local_24)) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e
                              ,L"Invalid object index in reference chain search %d",local_24);
              }
              FUN_144984904(puVar3 + 1,local_28,&local_24,0);
              uVar1 = 1;
              goto LAB_1468f3eda;
            }
            break;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x18) + 8);
        } while (iVar2 != -1);
      }
    }
    uVar4 = *(ulonglong *)(uVar4 + 0x20);
    if (uVar4 == 0) {
      uVar1 = 0;
LAB_1468f3eda:
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar1;
    }
  } while( true );
}



// FUNCTION 1468f3efa FUN_1468f3efa body=64 status=ok
// SIG undefined FUN_1468f3efa(void)

undefined8 * FUN_1468f3efa(undefined8 *param_1,int param_2)

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



// FUNCTION 1468f3f4a FUN_1468f3f4a body=48 status=ok
// SIG undefined FUN_1468f3f4a(void)

void FUN_1468f3f4a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    lVar1 = **(longlong **)(param_1 + 0x18);
    if (**(longlong **)(param_1 + 0x18) == 0) {
      lVar1 = DAT_14c948580;
    }
    if (*param_2 != lVar1) {
      FUN_1468f3fb0(*(undefined8 *)(*(undefined4 **)(param_1 + 0x10) + 2),
                    **(undefined4 **)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 1468f3f7a FUN_1468f3f7a body=54 status=ok
// SIG undefined FUN_1468f3f7a(void)

void FUN_1468f3f7a(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_3 << 3;
    do {
      FUN_1468f3f4a(param_1,param_2);
      param_2 = param_2 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1468f3fb0 FUN_1468f3fb0 body=620 status=ok
// SIG undefined FUN_1468f3fb0(void)

void FUN_1468f3fb0(longlong param_1,int param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  int local_34;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)((longlong)param_2 * 0x88 + *(longlong *)(param_1 + 8));
  local_30 = param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x10) == param_3)
        goto LAB_1468f410f;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x18) + 8);
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(ulonglong *)(param_3 + 0x20);
  if (uVar2 != 0) {
    do {
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        lVar1 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar1 = param_1 + 0x50;
        }
        iVar5 = *(int *)(lVar1 + (ulonglong)
                                 (*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar5 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x10) == uVar2)
            goto LAB_1468f410f;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x18) + 8);
          } while (iVar5 != -1);
        }
      }
      uVar2 = *(ulonglong *)(uVar2 + 0x20);
    } while (uVar2 != 0);
  }
  goto LAB_1468f41d4;
LAB_1468f410f:
  if (*plVar3 != param_4) {
    FUN_1468f0514(plVar3);
  }
  *plVar3 = param_4;
  iVar5 = *(int *)(param_3 + 0xc);
  if ((iVar5 < 0) || (DAT_14c9647dc <= iVar5)) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                  L"Invalid object index in reference chain search %d",iVar5);
  }
  local_34 = iVar5;
  FUN_144984904(plVar3 + 1,local_38,&local_34,0);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(local_30 >> 0x14) & 0xffff ^ (uint)(local_30 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x10) == local_30) {
          FUN_1457b12ce(param_1 + 0x68,&local_34,&local_30,0);
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x18) + 8);
      } while (iVar5 != -1);
    }
  }
LAB_1468f41d4:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f421e FUN_1468f421e body=323 status=ok
// SIG undefined FUN_1468f421e(void)

void FUN_1468f421e(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x14);
  FUN_1468f08d9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_1468f43f0(plVar1);
  }
  FUN_1468f4362(plVar1,param_2);
  if (0 < (int)param_2) {
    lVar5 = 0x70;
    uVar4 = 0;
    do {
      lVar2 = *plVar1;
      *(int *)(lVar2 + 0x10 + lVar5) = param_4;
      iVar3 = param_5 - (param_2 - 1) * param_3;
      if (uVar4 < param_2 - 1) {
        iVar3 = param_3;
      }
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (*(int *)(lVar2 + 0xc + lVar5) < iVar3) {
        FUN_1468f3a92(lVar2 + lVar5,iVar3);
      }
      FUN_1468f38ca(lVar2 + lVar5,iVar3);
      uVar4 = uVar4 + 1;
      param_4 = param_4 + param_3;
      lVar5 = lVar5 + 0x88;
    } while (param_2 != uVar4);
  }
  if (param_6 == -1) {
    return;
  }
  lVar5 = FUN_1468f43a8(plVar1);
  *(int *)(lVar5 + 0x80) = param_6;
  if (*(int *)(lVar5 + 0x7c) < 1) {
    FUN_1468f3a92(lVar5 + 0x70,1);
  }
  FUN_1468f38ca(lVar5 + 0x70,1);
  return;
}



// FUNCTION 1468f4362 FUN_1468f4362 body=69 status=ok
// SIG undefined FUN_1468f4362(void)

void FUN_1468f4362(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1468f446c(param_1,iVar1);
  }
  FUN_1468f4420((longlong)iVar1 * 0x88 + *param_1,param_2);
  return;
}



// FUNCTION 1468f43a8 FUN_1468f43a8 body=71 status=ok
// SIG undefined FUN_1468f43a8(void)

longlong FUN_1468f43a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468f446c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_1468f4420(lVar2,1);
  return lVar2;
}



// FUNCTION 1468f43f0 FUN_1468f43f0 body=48 status=ok
// SIG undefined FUN_1468f43f0(void)

void FUN_1468f43f0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 1468f4420 FUN_1468f4420 body=75 status=ok
// SIG undefined FUN_1468f4420(void)

void FUN_1468f4420(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      puVar1[-6] = 0;
      *(undefined4 *)(puVar1 + -5) = 0;
      puVar1[-0xb] = 0;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      *(undefined8 *)((longlong)puVar1 + -0x24) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468f446c FUN_1468f446c body=150 status=ok
// SIG undefined FUN_1468f446c(void)

void FUN_1468f446c(longlong param_1,int param_2)

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



// FUNCTION 1468f450c FUN_1468f450c body=378 status=ok
// SIG undefined FUN_1468f450c(void)

void FUN_1468f450c(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong local_130;
  undefined8 uStack_128;
  int local_118 [2];
  undefined8 local_110;
  int *local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  undefined4 local_f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&local_f8;
  local_110 = *(undefined8 *)(param_1 + 0x10);
  local_130 = 0;
  uStack_128 = 0;
  iVar6 = *(int *)(param_1 + 0x24);
  local_118[0] = param_2;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_14079e7a6(&local_130);
    iVar6 = *(int *)(param_1 + 0x24);
  }
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  iVar9 = iVar6;
  if (iVar4 <= param_2) {
    iVar9 = *(int *)(param_1 + 0x1c) - iVar4 * iVar6;
  }
  if (0 < iVar9) {
    uVar7 = iVar6 * param_2 + *(int *)(param_1 + 0x18);
    lVar8 = DAT_14c9647c8;
    do {
      uVar3 = uStack_128;
      lVar1 = *(longlong *)(lVar8 + (ulonglong)(uVar7 >> 0x10) * 8);
      lVar2 = *(longlong *)(lVar1 + (ulonglong)(uVar7 & 0xffff) * 0x18);
      if ((lVar2 != 0) &&
         ((*(uint *)(lVar1 + (ulonglong)(uVar7 & 0xffff) * 0x18 + 8) >> 0x1c & 1) == 0)) {
        lVar8 = (longlong)(int)uStack_128;
        uVar5 = (int)uStack_128 + 1;
        uStack_128 = CONCAT44(uStack_128._4_4_,uVar5);
        if (uStack_128._4_4_ < uVar5) {
          FUN_1447f76d2(&local_130,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_130 + lVar8 * 8) = lVar2;
        lVar8 = DAT_14c9647c8;
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_14002fb26(local_100);
  FUN_14079e744(&local_130);
  local_f8 = local_130;
  local_f0 = (int)uStack_128;
  local_108 = local_118;
  FUN_1428232ec(&local_108,local_100);
  FUN_140ea1d7a(local_100);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)&local_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f4688 FUN_1468f4688 body=64 status=ok
// SIG undefined FUN_1468f4688(void)

undefined8 * FUN_1468f4688(undefined8 *param_1,int param_2)

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



// FUNCTION 1468f46d8 FUN_1468f46d8 body=48 status=ok
// SIG undefined FUN_1468f46d8(void)

void FUN_1468f46d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    lVar1 = **(longlong **)(param_1 + 0x18);
    if (**(longlong **)(param_1 + 0x18) == 0) {
      lVar1 = DAT_14c948580;
    }
    if (*param_2 != lVar1) {
      FUN_1468f473e(*(undefined8 *)(*(undefined4 **)(param_1 + 0x10) + 2),
                    **(undefined4 **)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 1468f4708 FUN_1468f4708 body=54 status=ok
// SIG undefined FUN_1468f4708(void)

void FUN_1468f4708(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_3 << 3;
    do {
      FUN_1468f46d8(param_1,param_2);
      param_2 = param_2 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1468f473e FUN_1468f473e body=169 status=ok
// SIG undefined FUN_1468f473e(void)

void FUN_1468f473e(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x88);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x88) != param_4) {
    FUN_1468f07aa(plVar1);
  }
  *plVar1 = param_4;
  iVar2 = *(int *)(param_3 + 0xc);
  if ((iVar2 < 0) || (DAT_14c9647dc <= iVar2)) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                  L"Invalid object index in reference chain search %d",iVar2);
  }
  local_24 = iVar2;
  FUN_144984904(plVar1 + 1,local_28,&local_24,0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f47e8 FUN_1468f47e8 body=90 status=ok
// SIG undefined FUN_1468f47e8(void)

void FUN_1468f47e8(longlong *param_1,uint param_2)

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



// FUNCTION 1468f4842 FUN_1468f4842 body=62 status=ok
// SIG undefined FUN_1468f4842(void)

void FUN_1468f4842(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468f4880(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1468f4880 FUN_1468f4880 body=112 status=ok
// SIG undefined FUN_1468f4880(void)

ulonglong FUN_1468f4880(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1468f48ba;
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
LAB_1468f48ba:
  return param_2 & 0xffffffff;
}



// FUNCTION 1468f48f0 FUN_1468f48f0 body=103 status=ok
// SIG undefined FUN_1468f48f0(void)

int FUN_1468f48f0(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468f4958 FUN_1468f4958 body=343 status=ok
// SIG undefined FUN_1468f4958(void)

undefined4 * FUN_1468f4958(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468f4ab0(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[1] ^ uVar7;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[2] ^ uVar7;
  cVar4 = FUN_1468f4b96(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1468f4c66(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f4ab0 FUN_1468f4ab0 body=229 status=ok
// SIG undefined FUN_1468f4ab0(void)

int * FUN_1468f4ab0(longlong *param_1,int *param_2)

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



// FUNCTION 1468f4b96 FUN_1468f4b96 body=93 status=ok
// SIG undefined FUN_1468f4b96(void)

undefined8 FUN_1468f4b96(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1468f48f0(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1468f4bf4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1468f4bf4 FUN_1468f4bf4 body=114 status=ok
// SIG undefined FUN_1468f4bf4(void)

void FUN_1468f4bf4(longlong *param_1,int param_2)

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



// FUNCTION 1468f4c66 FUN_1468f4c66 body=490 status=ok
// SIG undefined FUN_1468f4c66(void)

void FUN_1468f4c66(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
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
  uVar10 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
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
        uVar10 = *(uint *)(lVar2 + lVar6);
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar2 + 4 + lVar6) ^ uVar10;
        uVar9 = (longlong)
                (int)((uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar2 + 8 + lVar6) ^
                     uVar10) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1468f4e51 FUN_1468f4e51 body=47 status=ok
// SIG undefined FUN_1468f4e51(void)

void FUN_1468f4e51(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468f4e80 FUN_1468f4e80 body=147 status=ok
// SIG undefined FUN_1468f4e80(void)

void FUN_1468f4e80(longlong param_1,int param_2)

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



// FUNCTION 1468f4f14 FUN_1468f4f14 body=64 status=ok
// SIG undefined FUN_1468f4f14(void)

undefined8 * FUN_1468f4f14(undefined8 *param_1,int param_2)

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



// FUNCTION 1468f4f64 FUN_1468f4f64 body=52 status=ok
// SIG undefined FUN_1468f4f64(void)

void FUN_1468f4f64(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = **(longlong **)(param_1 + 0x18);
    if (**(longlong **)(param_1 + 0x18) == 0) {
      lVar2 = DAT_14c948580;
    }
    if (lVar1 != lVar2) {
      FUN_1468f4fce(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),lVar1,lVar2,0x20000000);
      return;
    }
  }
  return;
}



// FUNCTION 1468f4f98 FUN_1468f4f98 body=54 status=ok
// SIG undefined FUN_1468f4f98(void)

void FUN_1468f4f98(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_3 << 3;
    do {
      FUN_1468f4f64(param_1,param_2);
      param_2 = param_2 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1468f4fce FUN_1468f4fce body=856 status=ok
// SIG undefined FUN_1468f4fce(void)

void FUN_1468f4fce(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != param_3) {
    if (param_3 == 0) {
      param_3 = DAT_14c948580;
    }
    plVar4 = *(longlong **)(param_1 + 0x20);
    uVar9 = *(uint *)(param_2 + 0xc);
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ReferenceChainSearch.cpp",0x3e,
                    L"Invalid object index in reference chain search %d",uVar9);
    }
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar7 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar4[8];
      }
      iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[9] - 1U & uVar9) * 4);
      if (iVar11 != -1) {
        do {
          lVar2 = *plVar4 + (longlong)iVar11 * 0x38;
          if (*(uint *)(*plVar4 + (longlong)iVar11 * 0x38) == uVar9) {
            if (((longlong *)(lVar2 + 8) != (longlong *)0x0 && lVar2 != 0) &&
               (*(longlong *)(lVar2 + 8) == 0)) {
              plVar4 = *(longlong **)(param_1 + 0x18);
              if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) goto LAB_1468f50c9;
              uVar9 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              plVar7 = plVar4 + 7;
              if ((longlong *)plVar4[8] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar4[8];
              }
              iVar11 = *(int *)((longlong)plVar7 +
                               (ulonglong)((int)plVar4[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
              if (iVar11 == -1) goto LAB_1468f50c9;
              uVar8 = 0;
              goto LAB_1468f5202;
            }
            break;
          }
          iVar11 = *(int *)(lVar2 + 0x30);
        } while (iVar11 != -1);
      }
    }
  }
  goto LAB_1468f503e;
  while (iVar11 = (int)puVar3[2], iVar11 != -1) {
LAB_1468f5202:
    puVar3 = (ulonglong *)(*plVar4 + (longlong)iVar11 * 0x18);
    if (*puVar3 == param_2) {
      if (puVar3 == (ulonglong *)0x0) {
LAB_1468f50c9:
        uVar8 = 0;
      }
      else {
        uVar8 = puVar3[1];
      }
      break;
    }
  }
  *(ulonglong *)(lVar2 + 8) = uVar8;
  puVar1 = (undefined8 *)(lVar2 + 0x10);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (param_4 != 0x20000000) {
    FUN_1427f1f40(&local_48,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x1e8),param_4);
    *(ulonglong *)(lVar2 + 0x24) = CONCAT44(iStack_40,uStack_44);
    *(undefined4 *)(lVar2 + 0x20) = 1;
    goto LAB_1468f503e;
  }
  *(undefined4 *)(lVar2 + 0x20) = 2;
  *(undefined4 *)(lVar2 + 0x18) = 0x1e;
  FUN_14479d316(puVar1,0);
  uVar6 = FUN_146830e68(*(undefined8 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x18),0);
  FUN_14171b6d4(puVar1,uVar6,1);
  if (DAT_14c948580 == 0) {
    if (param_3 == 0) goto LAB_1468f503e;
LAB_1468f5258:
    FUN_144750a86(param_3,&local_48,0,0);
    if (iStack_40 == 0) {
LAB_1468f52bc:
      puVar10 = &DAT_149dfb77a;
    }
    else {
LAB_1468f5274:
      puVar10 = (undefined2 *)CONCAT44(uStack_44,local_48);
    }
    FUN_1446f470e(&local_60,puVar10,1);
    *(undefined2 **)(lVar2 + 0x24) = local_60;
  }
  else {
    if (param_3 != 0 && param_3 != DAT_14c948580) goto LAB_1468f5258;
    local_48 = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    uStack_3c = 0;
    cVar5 = FUN_1468704a8(DAT_14c948580,param_2,&local_48,1);
    if (cVar5 != '\0') {
      iVar11 = iStack_40 + -1;
      if (iStack_40 == 0) {
        iVar11 = 0;
      }
      if (0x3ff < iVar11) {
        FUN_14496493a(&local_48,0x3ff,iVar11 + -0x3ff,1);
        goto LAB_1468f52dd;
      }
      if (iStack_40 != 0) goto LAB_1468f5274;
      goto LAB_1468f52bc;
    }
    plVar4 = *(longlong **)(DAT_14c948580 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
      puVar10 = local_60;
      if (local_58 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_50,puVar10,1);
      *(undefined8 *)(lVar2 + 0x24) = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1468f52dd:
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
LAB_1468f503e:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468f5328 FUN_1468f5328 body=132 status=ok
// SIG undefined FUN_1468f5328(void)

void FUN_1468f5328(longlong param_1,int param_2)

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



// FUNCTION 1468f53ad FUN_1468f53ad body=715 status=ok
// SIG undefined FUN_1468f53ad(void)

int FUN_1468f53ad(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4,int param_5,
                 int param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  uint local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_4c = param_3;
  if (param_3 == param_7) {
    lVar6 = FUN_1468f5cd0(param_4);
    if (param_5 < 0) {
LAB_1468f5672:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_5);
    }
    plVar7 = (longlong *)(lVar6 + 8);
    uVar4 = *(uint *)(lVar6 + 0x14);
    if ((int)uVar4 < param_5) {
      FUN_14481578e(plVar7,param_5);
      uVar4 = *(uint *)(lVar6 + 0x14);
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x10) = iVar3 + 1U;
    if (uVar4 < iVar3 + 1U) {
      FUN_1446f48e2(plVar7,iVar3);
    }
    *(uint *)(*plVar7 + (longlong)iVar3 * 4) = param_3;
LAB_1468f5617:
    local_70 = 1;
  }
  else {
    piVar5 = (int *)FUN_144a2bae0(param_2,param_3,&local_4c);
    if (*piVar5 != param_6) {
      *piVar5 = param_6;
      if ((int)local_4c < DAT_14c9647dc) {
        plVar7 = (longlong *)
                 ((ulonglong)((local_4c & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_4c >> 0x10) * 8));
      }
      else {
        plVar7 = (longlong *)0x0;
      }
      uVar4 = *(uint *)(*plVar7 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x6e500000) != 0) {
        lVar6 = FUN_1468f5cd0(param_4);
        if (param_5 < 0) goto LAB_1468f5672;
        plVar7 = (longlong *)(lVar6 + 8);
        uVar4 = *(uint *)(lVar6 + 0x14);
        if ((int)uVar4 < param_5) {
          FUN_14481578e(plVar7,param_5);
          uVar4 = *(uint *)(lVar6 + 0x14);
        }
        iVar3 = *(int *)(lVar6 + 0x10);
        *(uint *)(lVar6 + 0x10) = iVar3 + 1U;
        if (uVar4 < iVar3 + 1U) {
          FUN_1446f48e2(plVar7,iVar3);
        }
        *(uint *)(*plVar7 + (longlong)iVar3 * 4) = local_4c;
        goto LAB_1468f5617;
      }
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)(int)local_4c * 0x10)
      ;
      if (lVar6 != 0) {
        puVar8 = *(uint **)(*(longlong *)(param_1 + 0x18) + (longlong)(int)local_4c * 0x10);
        puVar11 = puVar8 + lVar6;
        param_5 = param_5 + 1;
        local_70 = 0;
        local_6c = param_5;
        local_60 = param_1;
        local_58 = param_2;
        do {
          local_50 = *puVar8;
          uVar4 = param_7;
          if ((local_50 == param_7) ||
             (piVar5 = (int *)FUN_144a2bae0(param_2,local_50,&local_50), uVar4 = local_50,
             *piVar5 != param_6)) {
            lVar6 = param_4[1];
            lVar10 = (longlong)(int)lVar6;
            local_88 = param_5;
            local_80 = param_6;
            local_78 = param_7;
            local_68 = FUN_1468f53ad(param_1,param_2,uVar4,param_4);
            iVar3 = (int)local_68;
            if (0 < iVar3) {
              lVar9 = lVar10 * 0x18 + 8;
              do {
                lVar2 = *param_4;
                iVar1 = *(int *)(lVar2 + 8 + lVar9);
                *(uint *)(lVar2 + 8 + lVar9) = iVar1 + 1U;
                if (*(uint *)(lVar2 + 0xc + lVar9) < iVar1 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar2 + lVar9),iVar1);
                }
                *(uint *)(*(longlong *)(lVar2 + lVar9) + (longlong)iVar1 * 4) = local_4c;
                lVar10 = lVar10 + 1;
                lVar9 = lVar9 + 0x18;
              } while (lVar10 < iVar3 + (int)lVar6);
            }
            local_70 = local_70 + (int)local_68;
            param_2 = local_58;
            param_1 = local_60;
            param_5 = local_6c;
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar11);
        goto LAB_1468f5419;
      }
    }
    local_70 = 0;
  }
LAB_1468f5419:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_70;
}



// FUNCTION 1468f567a FUN_1468f567a body=95 status=ok
// SIG undefined FUN_1468f567a(void)

void FUN_1468f567a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1468f4e80(param_1,iVar2);
  }
  FUN_1468f5d17((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1468f56d9 FUN_1468f56d9 body=1412 status=ok
// SIG undefined FUN_1468f56d9(void)

void FUN_1468f56d9(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined1 *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_118 = param_1;
  if ((longlong)(int)param_1[1] != 0) {
    plVar11 = (longlong *)*param_1;
    plVar1 = plVar11 + (longlong)(int)param_1[1] * 3;
LAB_1468f58ca:
    uVar5 = uStack_d0;
    iVar8 = (int)plVar11[2];
    lVar10 = (longlong)iVar8;
    lVar18 = plVar11[1];
    lVar17 = lVar10 << 0x20;
    uVar12 = lVar10 * 4;
    uVar15 = uVar12;
    do {
      if (uVar15 == 0) goto LAB_1468f5932;
      uVar6 = *(uint *)(lVar18 + -4 + uVar15);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      lVar17 = lVar17 + -0x100000000;
      uVar15 = uVar15 - 4;
    } while ((*(uint *)(lVar9 + 8) >> 0x15 & 1) == 0);
    if ((~uVar15 & 0x3fffffffc) == 0) {
LAB_1468f5932:
      lVar18 = (longlong)(int)uStack_d0;
      uVar6 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
      if (uStack_d0._4_4_ < uVar6) {
        FUN_1468f62fe(&local_d8,uVar5 & 0xffffffff);
      }
      *(longlong **)(local_d8 + lVar18 * 8) = plVar11;
    }
    else {
      iVar13 = *(int *)(lVar18 + (longlong)(iVar8 + -1) * 4);
      if ((2 < iVar8) && (iVar13 == param_2)) {
        iVar13 = *(int *)(lVar18 + -8 + lVar10 * 4);
      }
      uVar6 = *(uint *)(lVar18 + (lVar17 >> 0x20) * 4);
      local_c0 = CONCAT44(iVar13,uVar6);
      if ((int)uStack_90 != local_64) {
        uVar7 = iVar13 + (uVar6 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6;
        puVar16 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar16 = local_60;
        }
        uVar3 = *(uint *)(puVar16 + (ulonglong)(local_50 - 1U & uVar7) * 4);
        while (uVar3 != 0xffffffff) {
          puVar2 = (uint *)(local_98 + (longlong)(int)uVar3 * 0x18);
          if ((*puVar2 == uVar6) && (*(int *)(local_98 + 4 + (longlong)(int)uVar3 * 0x18) == iVar13)
             ) {
            if ((puVar2 != (uint *)0x0) && (lVar10 = *(longlong *)(puVar2 + 2), lVar10 != 0)) {
              iVar13 = *(int *)(lVar10 + 0x10);
              iVar14 = -1;
              lVar17 = 0xffffffff;
              if ((longlong)iVar13 == 0) goto LAB_1468f5a8f;
              lVar9 = (longlong)iVar13 * 4;
              lVar17 = 0;
              goto LAB_1468f5a7a;
            }
            break;
          }
          uVar3 = puVar2[4];
        }
      }
      local_110 = &local_c0;
      local_108 = &local_e8;
      local_e8 = plVar11;
      FUN_1468f690e(&local_98,local_9c,&local_110);
    }
    goto LAB_1468f5951;
  }
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
LAB_1468f5760:
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  iVar8 = 0;
  local_b8 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_c0);
    iVar8 = local_70;
  }
  local_f8 = local_b0;
  iStack_f4 = iStack_ac;
  local_f0 = local_a8;
  local_ec = local_a4;
  local_108 = (longlong **)local_c0;
  local_100 = local_b8;
  local_110 = &local_98;
  if ((iStack_ac != iVar8) || (local_b8 != local_88)) {
    do {
      uVar12 = uStack_e0;
      puVar4 = *(undefined4 **)(*local_110 + 8 + (longlong)iStack_f4 * 0x18);
      lVar18 = (longlong)(int)uStack_e0;
      uVar6 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
      if (uStack_e0._4_4_ < uVar6) {
        FUN_1468f4e80(&local_e8,uVar12 & 0xffffffff);
      }
      *(undefined4 *)(local_e8 + lVar18 * 3) = *puVar4;
      local_e8[lVar18 * 3 + 1] = 0;
      local_e8[lVar18 * 3 + 1] = *(longlong *)(puVar4 + 2);
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined4 *)(local_e8 + lVar18 * 3 + 2) = puVar4[4];
      *(undefined4 *)((longlong)local_e8 + lVar18 * 0x18 + 0x14) = puVar4[5];
      *(undefined8 *)(puVar4 + 4) = 0;
      local_f8 = local_f8 & ~local_108._4_4_;
      FUN_1449c0562(&local_108);
    } while (local_110 != &local_98 || (local_100 != local_88 || iStack_f4 != iVar8));
  }
  lVar18 = local_d8;
  lVar10 = (longlong)(int)uStack_d0;
  if (lVar10 != 0) {
    lVar17 = 0;
    do {
      uVar12 = uStack_e0;
      puVar4 = *(undefined4 **)(lVar18 + lVar17);
      lVar9 = (longlong)(int)uStack_e0;
      uVar6 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
      if (uStack_e0._4_4_ < uVar6) {
        FUN_1468f4e80(&local_e8,uVar12 & 0xffffffff);
      }
      *(undefined4 *)(local_e8 + lVar9 * 3) = *puVar4;
      local_e8[lVar9 * 3 + 1] = 0;
      local_e8[lVar9 * 3 + 1] = *(longlong *)(puVar4 + 2);
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined4 *)(local_e8 + lVar9 * 3 + 2) = puVar4[4];
      *(undefined4 *)((longlong)local_e8 + lVar9 * 0x18 + 0x14) = puVar4[5];
      *(undefined8 *)(puVar4 + 4) = 0;
      lVar17 = lVar17 + 8;
    } while (lVar10 * 8 != lVar17);
  }
  FUN_1468ee1c2(local_118,&local_e8);
  FUN_1468f4e51(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1468f6a4e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    lVar17 = lVar17 + 1;
    lVar9 = lVar9 + -4;
    if (lVar9 == 0) break;
LAB_1468f5a7a:
    if (*(uint *)(*(longlong *)(lVar10 + 8) + lVar17 * 4) == uVar6) goto LAB_1468f5a8f;
  }
  lVar17 = 0xffffffff;
LAB_1468f5a8f:
  if (iVar8 != 0) {
    lVar10 = 0;
    do {
      if (*(uint *)(lVar18 + lVar10 * 4) == uVar6) {
        iVar14 = (int)lVar10;
        break;
      }
      lVar10 = lVar10 + 1;
      uVar12 = uVar12 - 4;
    } while (uVar12 != 0);
  }
  if (iVar8 - iVar14 < iVar13 - (int)lVar17) {
    local_110 = plVar11;
    FUN_1468f6384(&local_98,uVar7,&local_c0,&local_110);
  }
LAB_1468f5951:
  plVar11 = plVar11 + 3;
  if (plVar11 == plVar1) goto LAB_1468f5aeb;
  goto LAB_1468f58ca;
LAB_1468f5aeb:
  iVar8 = ((int)uStack_90 - local_64) + (int)uStack_d0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_1468f5c60(&local_e8);
  }
  goto LAB_1468f5760;
}



// FUNCTION 1468f5c60 FUN_1468f5c60 body=112 status=ok
// SIG undefined FUN_1468f5c60(void)

void FUN_1468f5c60(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1468f5cd0 FUN_1468f5cd0 body=63 status=ok
// SIG undefined FUN_1468f5cd0(void)

longlong FUN_1468f5cd0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468f4e80(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1468f5d0f(lVar2);
  return lVar2;
}



// FUNCTION 1468f5d0f FUN_1468f5d0f body=8 status=ok
// SIG undefined FUN_1468f5d0f(void)

void FUN_1468f5d0f(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1468f5d17 FUN_1468f5d17 body=140 status=ok
// SIG undefined FUN_1468f5d17(void)

void FUN_1468f5d17(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 0x10 + lVar2);
    _Src = *(void **)(param_2 + 8 + lVar2);
    *(int *)(param_1 + 0x10 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
    }
    else {
      FUN_144a06ca8(param_1 + 8 + lVar2,iVar1,0);
      memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1468f5da3 FUN_1468f5da3 body=794 status=ok
// SIG undefined FUN_1468f5da3(void)

void FUN_1468f5da3(longlong param_1,uint param_2)

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
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar20 + fVar20);
    plVar13 = &local_358;
    do {
      puVar6 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar6) >> 3);
      puVar17 = puVar14;
      puVar18 = puVar6;
      if (iVar16 != 0) {
LAB_1468f5e6e:
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
            } while (*(int *)(puVar8 + 2) <= *(int *)(puVar6 + 2));
            puVar5 = puVar11 + -6;
            do {
              puVar15 = puVar11;
              puVar19 = puVar5;
              puVar11 = puVar15 + -3;
              if (puVar11 <= puVar6) break;
              puVar5 = puVar19 + -3;
            } while (*(int *)(puVar6 + 2) <= *(int *)(puVar15 + -1));
            if (puVar11 < puVar8) goto LAB_1468f5f55;
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
            if (*(int *)(puVar17 + 2) <= *(int *)(puVar11 + 2)) {
              puVar18 = puVar11;
            }
          }
          local_48 = puVar11[2];
          local_58 = *puVar11;
          uStack_50 = puVar11[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          puVar11[2] = puVar14[2];
          uVar1 = puVar14[1];
          *puVar11 = *puVar14;
          puVar11[1] = uVar1;
          puVar14[2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_1468f609c;
      }
LAB_1468f60b1:
      FUN_1468f60be(puVar6);
LAB_1468f609c:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1468f5f55:
  local_48 = puVar6[2];
  local_58 = *puVar6;
  uStack_50 = puVar6[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  puVar6[2] = puVar15[-1];
  uVar1 = puVar15[-2];
  *puVar6 = *puVar11;
  puVar6[1] = uVar1;
  puVar15[-1] = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar19 - (longlong)puVar18 < (longlong)puVar17 - (longlong)puVar12) {
    if (puVar8 < puVar14) {
      *plVar13 = (longlong)puVar8;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar12 = puVar6;
    if (puVar11 <= puVar6 + 3) goto LAB_1468f609c;
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
    if (puVar14 <= puVar8) goto LAB_1468f609c;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar12) >> 3);
  puVar14 = puVar15;
  puVar17 = puVar19;
  puVar18 = puVar12;
  if (iVar16 == 0) goto LAB_1468f60b1;
  goto LAB_1468f5e6e;
}



// FUNCTION 1468f60be FUN_1468f60be body=574 status=ok
// SIG undefined FUN_1468f60be(void)

void FUN_1468f60be(undefined8 *param_1,uint param_2)

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
joined_r0x0001468f60f2:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar10 * 3 + 2) <=
            *(int *)(param_1 + (longlong)iVar11 * 3 + 2))) {
          iVar10 = iVar11;
        }
        if (*(int *)(param_1 + (longlong)iVar8 * 3 + 2) <
            *(int *)(param_1 + (longlong)iVar10 * 3 + 2)) {
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
          goto joined_r0x0001468f60f2;
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
               (*(int *)(param_1 + (longlong)iVar10 * 3 + 2) <=
                *(int *)(param_1 + (longlong)iVar8 * 3 + 2))) {
              iVar11 = iVar8;
            }
            if (*(int *)(param_1 + (longlong)iVar11 * 3 + 2) <=
                *(int *)(param_1 + (longlong)iVar12 * 3 + 2)) break;
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



// FUNCTION 1468f62fe FUN_1468f62fe body=132 status=ok
// SIG undefined FUN_1468f62fe(void)

void FUN_1468f62fe(longlong param_1,int param_2)

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



// FUNCTION 1468f6384 FUN_1468f6384 body=107 status=ok
// SIG undefined FUN_1468f6384(void)

void FUN_1468f6384(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1468f63f0();
  if (lVar1 == 0) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_1468f6448(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f63f0 FUN_1468f63f0 body=87 status=ok
// SIG undefined FUN_1468f63f0(void)

int * FUN_1468f63f0(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x18) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 1468f6448 FUN_1468f6448 body=281 status=ok
// SIG undefined FUN_1468f6448(void)

undefined4 * FUN_1468f6448(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1468f6562(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1468f6648(param_1,param_3,local_40,local_48);
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
      FUN_1468f6742(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f6562 FUN_1468f6562 body=230 status=ok
// SIG undefined FUN_1468f6562(void)

int * FUN_1468f6562(longlong *param_1,int *param_2)

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



// FUNCTION 1468f6648 FUN_1468f6648 body=136 status=ok
// SIG undefined FUN_1468f6648(void)

undefined8 FUN_1468f6648(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18) == param_3[1])
           ) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1468f66d0(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f66d0 FUN_1468f66d0 body=114 status=ok
// SIG undefined FUN_1468f66d0(void)

void FUN_1468f66d0(longlong *param_1,int param_2)

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



// FUNCTION 1468f6742 FUN_1468f6742 body=458 status=ok
// SIG undefined FUN_1468f6742(void)

void FUN_1468f6742(longlong *param_1)

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
        uVar2 = *(uint *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar6 * 0x18) + (uVar2 >> 2) + 0x9e3779b9
                      ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1468f690e FUN_1468f690e body=319 status=ok
// SIG undefined FUN_1468f690e(void)

undefined4 * FUN_1468f690e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1468f6562(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)uVar2;
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_1468f6648(param_1,uVar9,local_40,&local_4c);
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
      FUN_1468f6742(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f6a4e FUN_1468f6a4e body=52 status=ok
// SIG undefined FUN_1468f6a4e(void)

void FUN_1468f6a4e(longlong *param_1)

{
  FUN_1468f6a82();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f6a82 FUN_1468f6a82 body=89 status=ok
// SIG undefined FUN_1468f6a82(void)

void FUN_1468f6a82(longlong param_1)

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



// FUNCTION 1468f6adc FUN_1468f6adc body=515 status=ok
// SIG undefined FUN_1468f6adc(void)

void FUN_1468f6adc(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  ulonglong *local_30;
  undefined8 **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < DAT_14c9647dc) {
    puVar3 = (ulonglong *)
             ((ulonglong)((param_2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(param_2 >> 0x10) * 8));
  }
  else {
    puVar3 = (ulonglong *)0x0;
  }
  uVar4 = *puVar3;
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      do {
        puVar3 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18);
        if (*puVar3 == uVar4) {
          if (puVar3 != (ulonglong *)0x0) {
            uVar4 = puVar3[1];
            local_38 = uVar4;
            if (uVar4 != 0) goto LAB_1468f6bbb;
          }
          break;
        }
        iVar6 = (int)puVar3[2];
      } while (iVar6 != -1);
    }
  }
  uVar4 = FUN_1468b4efa();
LAB_1468f6bbb:
  plVar1 = (longlong *)param_1[1];
  local_38 = uVar4;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18) == uVar4) goto LAB_1468f6cc2;
        iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_40 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  local_40[6] = 0;
  *(undefined4 *)(local_40 + 7) = 0;
  *local_40 = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined8 *)((longlong)local_40 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_40 + 0x44) = 0;
  local_40[10] = 0;
  *(undefined4 *)(local_40 + 0xb) = 0;
  local_40[0x10] = 0;
  *(undefined4 *)(local_40 + 0x11) = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  *(undefined8 *)((longlong)local_40 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_40 + 0x94) = 0;
  local_40[0x14] = 0;
  *(undefined4 *)(local_40 + 0x15) = 0;
  *(undefined4 *)(local_40 + 0x16) = 0;
  local_28 = &local_40;
  local_40[1] = uVar4;
  local_30 = &local_38;
  FUN_1468f705c(plVar1,local_1c);
LAB_1468f6cc2:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f6ce0 FUN_1468f6ce0 body=333 status=ok
// SIG undefined FUN_1468f6ce0(void)

ulonglong FUN_1468f6ce0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  
  if ((int)param_2 < DAT_14c9647dc) {
    puVar3 = (ulonglong *)
             ((ulonglong)((param_2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(param_2 >> 0x10) * 8));
  }
  else {
    puVar3 = (ulonglong *)0x0;
  }
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = *puVar3;
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar6 != -1) {
      do {
        puVar3 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18);
        if (*puVar3 == uVar2) goto LAB_1468f6d13;
        iVar6 = (int)puVar3[2];
      } while (iVar6 != -1);
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_1468f6d13:
  plVar1 = (longlong *)param_1[1];
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = puVar3[1];
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar6 != -1) {
      do {
        puVar3 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18);
        if (*puVar3 == uVar2) goto LAB_1468f6d25;
        iVar6 = (int)puVar3[2];
      } while (iVar6 != -1);
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_1468f6d25:
  return puVar3[1];
}



// FUNCTION 1468f6e2e FUN_1468f6e2e body=366 status=ok
// SIG undefined FUN_1468f6e2e(void)

undefined4 * FUN_1468f6e2e(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468f893c(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = 0;
  local_40[1] = param_3[1];
  param_3[1] = 0;
  *(int *)(local_40 + 2) = (int)param_3[2];
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_3[2] = 0;
  *(int *)(local_40 + 4) = (int)param_3[4];
  local_40[3] = param_3[3];
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1468f8a2a(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x2c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_1468f8b50(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f6f9e FUN_1468f6f9e body=71 status=ok
// SIG undefined FUN_1468f6f9e(void)

void FUN_1468f6f9e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1468f8ec4();
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
      FUN_1468f8f4a();
      return;
    }
  }
  return;
}



// FUNCTION 1468f6fe6 FUN_1468f6fe6 body=117 status=ok
// SIG undefined FUN_1468f6fe6(void)

undefined8 *
FUN_1468f6fe6(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 2) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[3] = 0;
  param_1[3] = *param_4;
  *param_4 = 0;
  *(int *)(param_1 + 4) = (int)param_4[1];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1468f705c FUN_1468f705c body=326 status=ok
// SIG undefined FUN_1468f705c(void)

undefined4 * FUN_1468f705c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1468f71a4(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1468f728a(param_1,uVar4,local_40,&local_4c);
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
      FUN_1468f737c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f71a4 FUN_1468f71a4 body=230 status=ok
// SIG undefined FUN_1468f71a4(void)

int * FUN_1468f71a4(longlong *param_1,int *param_2)

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



// FUNCTION 1468f728a FUN_1468f728a body=128 status=ok
// SIG undefined FUN_1468f728a(void)

undefined8 FUN_1468f728a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1468f730a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f730a FUN_1468f730a body=114 status=ok
// SIG undefined FUN_1468f730a(void)

void FUN_1468f730a(longlong *param_1,int param_2)

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



// FUNCTION 1468f737c FUN_1468f737c body=474 status=ok
// SIG undefined FUN_1468f737c(void)

void FUN_1468f737c(longlong *param_1)

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



// FUNCTION 1468f7558 FUN_1468f7558 body=188 status=ok
// SIG undefined FUN_1468f7558(void)

longlong FUN_1468f7558(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1468f75f7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1468f7616(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1468f75f7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1468f7616 FUN_1468f7616 body=272 status=ok
// SIG undefined FUN_1468f7616(void)

undefined4 * FUN_1468f7616(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1468f7728(param_1,local_48);
  FUN_1468f78cc(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1468f7816(param_1,param_3,local_40,local_48);
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
      FUN_1468f7d4a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f7728 FUN_1468f7728 body=238 status=ok
// SIG undefined FUN_1468f7728(void)

int * FUN_1468f7728(longlong *param_1,int *param_2)

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



// FUNCTION 1468f7816 FUN_1468f7816 body=182 status=ok
// SIG undefined FUN_1468f7816(void)

undefined8 FUN_1468f7816(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1468f7b62((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1468f7cd0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f78cc FUN_1468f78cc body=147 status=ok
// SIG undefined FUN_1468f78cc(void)

undefined4 * FUN_1468f78cc(undefined8 *param_1,undefined4 *param_2)

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
  *param_2 = *(undefined4 *)*param_1;
  FUN_1468f7960(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f7b62(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f7960 FUN_1468f7960 body=123 status=ok
// SIG undefined FUN_1468f7960(void)

undefined8 * FUN_1468f7960(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1468f79dc();
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



// FUNCTION 1468f79dc FUN_1468f79dc body=389 status=ok
// SIG undefined FUN_1468f79dc(void)

longlong * FUN_1468f79dc(longlong *param_1,longlong *param_2)

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
        if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar6 * 0x38) != 0) {
          FUN_1400020a8();
        }
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



// FUNCTION 1468f7b62 FUN_1468f7b62 body=52 status=ok
// SIG undefined FUN_1468f7b62(void)

void FUN_1468f7b62(longlong *param_1)

{
  FUN_1468f7b96();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f7b96 FUN_1468f7b96 body=313 status=ok
// SIG undefined FUN_1468f7b96(void)

void FUN_1468f7b96(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1468f7cd0 FUN_1468f7cd0 body=122 status=ok
// SIG undefined FUN_1468f7cd0(void)

void FUN_1468f7cd0(longlong *param_1,int param_2)

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



// FUNCTION 1468f7d4a FUN_1468f7d4a body=423 status=ok
// SIG undefined FUN_1468f7d4a(void)

void FUN_1468f7d4a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1468f7ef2 FUN_1468f7ef2 body=152 status=ok
// SIG undefined FUN_1468f7ef2(void)

void FUN_1468f7ef2(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  int *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x38) == *param_3) {
          if (lVar1 != 0) goto LAB_1468f7f6f;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x30);
      } while (iVar3 != -1);
    }
  }
  local_18 = param_3;
  FUN_1468f7f8c(param_1,local_c,param_2);
LAB_1468f7f6f:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f7f8c FUN_1468f7f8c body=286 status=ok
// SIG undefined FUN_1468f7f8c(void)

undefined4 * FUN_1468f7f8c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1468f80ac(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  local_40[10] = 0;
  local_40[0xc] = 0xffffffff;
  cVar1 = FUN_1468f818e(param_1,param_3,local_40,local_48);
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
      local_40[0xd] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0xc] =
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
      FUN_1468f82ac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f80ac FUN_1468f80ac body=226 status=ok
// SIG undefined FUN_1468f80ac(void)

int * FUN_1468f80ac(longlong *param_1,int *param_2)

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



// FUNCTION 1468f818e FUN_1468f818e body=169 status=ok
// SIG undefined FUN_1468f818e(void)

undefined8 FUN_1468f818e(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1468f8238(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f8238 FUN_1468f8238 body=116 status=ok
// SIG undefined FUN_1468f8238(void)

void FUN_1468f8238(longlong *param_1,int param_2)

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



// FUNCTION 1468f82ac FUN_1468f82ac body=419 status=ok
// SIG undefined FUN_1468f82ac(void)

void FUN_1468f82ac(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1468f8450 FUN_1468f8450 body=312 status=ok
// SIG undefined FUN_1468f8450(void)

undefined4 * FUN_1468f8450(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468f858a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1468f8670(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
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
      FUN_1468f875e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f858a FUN_1468f858a body=229 status=ok
// SIG undefined FUN_1468f858a(void)

int * FUN_1468f858a(longlong *param_1,int *param_2)

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



// FUNCTION 1468f8670 FUN_1468f8670 body=124 status=ok
// SIG undefined FUN_1468f8670(void)

undefined8 FUN_1468f8670(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1468f86ec(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f86ec FUN_1468f86ec body=114 status=ok
// SIG undefined FUN_1468f86ec(void)

void FUN_1468f86ec(longlong *param_1,int param_2)

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



// FUNCTION 1468f875e FUN_1468f875e body=477 status=ok
// SIG undefined FUN_1468f875e(void)

void FUN_1468f875e(longlong *param_1)

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



// FUNCTION 1468f893c FUN_1468f893c body=238 status=ok
// SIG undefined FUN_1468f893c(void)

int * FUN_1468f893c(longlong *param_1,int *param_2)

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



// FUNCTION 1468f8a2a FUN_1468f8a2a body=171 status=ok
// SIG undefined FUN_1468f8a2a(void)

undefined8 FUN_1468f8a2a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_1468f8ad6(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468f8ad6 FUN_1468f8ad6 body=122 status=ok
// SIG undefined FUN_1468f8ad6(void)

void FUN_1468f8ad6(longlong *param_1,int param_2)

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



// FUNCTION 1468f8b50 FUN_1468f8b50 body=478 status=ok
// SIG undefined FUN_1468f8b50(void)

void FUN_1468f8b50(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
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



// FUNCTION 1468f8d30 FUN_1468f8d30 body=98 status=ok
// SIG undefined FUN_1468f8d30(void)

void FUN_1468f8d30(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1468f8d92 FUN_1468f8d92 body=86 status=ok
// SIG undefined FUN_1468f8d92(void)

void FUN_1468f8d92(longlong param_1,uint param_2)

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



// FUNCTION 1468f8de8 FUN_1468f8de8 body=86 status=ok
// SIG undefined FUN_1468f8de8(void)

void FUN_1468f8de8(longlong param_1,uint param_2)

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



// FUNCTION 1468f8e3e FUN_1468f8e3e body=132 status=ok
// SIG undefined FUN_1468f8e3e(void)

void FUN_1468f8e3e(longlong param_1,int param_2)

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



// FUNCTION 1468f8ec4 FUN_1468f8ec4 body=132 status=ok
// SIG undefined FUN_1468f8ec4(void)

void FUN_1468f8ec4(longlong param_1,int param_2)

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



// FUNCTION 1468f8f4a FUN_1468f8f4a body=62 status=ok
// SIG undefined FUN_1468f8f4a(void)

void FUN_1468f8f4a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468f8f88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1468f8f88 FUN_1468f8f88 body=93 status=ok
// SIG undefined FUN_1468f8f88(void)

ulonglong FUN_1468f8f88(uint param_1,uint param_2)

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



// FUNCTION 1468f8fe6 FUN_1468f8fe6 body=132 status=ok
// SIG undefined FUN_1468f8fe6(void)

void FUN_1468f8fe6(longlong param_1,int param_2)

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



// FUNCTION 1468f906c FUN_1468f906c body=52 status=ok
// SIG undefined FUN_1468f906c(void)

void FUN_1468f906c(longlong *param_1)

{
  FUN_1468f90a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468f90a0 FUN_1468f90a0 body=349 status=ok
// SIG undefined FUN_1468f90a0(void)

void FUN_1468f90a0(longlong *param_1)

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
      FUN_1468f7b62(lVar2 + lVar3 + 8);
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



// FUNCTION 1468f91fe FUN_1468f91fe body=48 status=ok
// SIG undefined FUN_1468f91fe(void)

void FUN_1468f91fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1468f922e FUN_1468f922e body=48 status=ok
// SIG undefined FUN_1468f922e(void)

void FUN_1468f922e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1468f925e FUN_1468f925e body=63 status=ok
// SIG undefined FUN_1468f925e(void)

void FUN_1468f925e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1468f10f0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1468f737c(param_1);
    return;
  }
  FUN_1468f929e(param_1);
  FUN_1468f10f0(param_1);
  return;
}



// FUNCTION 1468f929e FUN_1468f929e body=322 status=ok
// SIG undefined FUN_1468f929e(void)

void FUN_1468f929e(longlong *param_1)

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



// FUNCTION 1468f93e2 FUN_1468f93e2 body=63 status=ok
// SIG undefined FUN_1468f93e2(void)

void FUN_1468f93e2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1468f1062(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1468b9a48(param_1);
    return;
  }
  FUN_1468f9422(param_1);
  FUN_1468f1062(param_1);
  return;
}



// FUNCTION 1468f9422 FUN_1468f9422 body=322 status=ok
// SIG undefined FUN_1468f9422(void)

void FUN_1468f9422(longlong *param_1)

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



// FUNCTION 1468f9566 FUN_1468f9566 body=394 status=ok
// SIG undefined FUN_1468f9566(void)

undefined4 *
FUN_1468f9566(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_14075b938(param_1,local_48);
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
  cVar2 = FUN_14075b718(param_1,uVar3,local_40,&local_4c);
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
      FUN_14075bc1a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468f96f2 FUN_1468f96f2 body=138 status=ok
// SIG undefined FUN_1468f96f2(void)

void FUN_1468f96f2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1468f977c FUN_1468f977c body=42 status=ok
// SIG undefined FUN_1468f977c(void)

void FUN_1468f977c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_1468f982c(param_1 + lVar1);
    lVar1 = lVar1 + 0x400;
  } while ((int)lVar1 != 0xc00);
  return;
}



// FUNCTION 1468f97a6 FUN_1468f97a6 body=132 status=ok
// SIG undefined FUN_1468f97a6(void)

void FUN_1468f97a6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 10,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 10)) {
      uVar5 = uVar3 >> 10 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x400,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468f982c FUN_1468f982c body=592 status=ok
// SIG undefined FUN_1468f982c(void)

void FUN_1468f982c(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0xffffffff00000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  return;
}



// FUNCTION 1468f9a7c FUN_1468f9a7c body=108 status=ok
// SIG undefined FUN_1468f9a7c(void)

void FUN_1468f9a7c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_1468f9aea(param_1,param_2,iVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468f9aea FUN_1468f9aea body=129 status=ok
// SIG undefined FUN_1468f9aea(void)

void FUN_1468f9aea(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1468f9b6c FUN_1468f9b6c body=510 status=ok
// SIG undefined FUN_1468f9b6c(void)

void FUN_1468f9b6c(longlong *param_1)

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
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
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



// FUNCTION 1468f9d6c FUN_1468f9d6c body=229 status=ok
// SIG undefined FUN_1468f9d6c(void)

int * FUN_1468f9d6c(longlong *param_1,int *param_2)

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



// FUNCTION 1468f9e52 FUN_1468f9e52 body=113 status=ok
// SIG undefined FUN_1468f9e52(void)

void FUN_1468f9e52(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1468f9ec4 FUN_1468f9ec4 body=147 status=ok
// SIG undefined FUN_1468f9ec4(void)

void FUN_1468f9ec4(longlong param_1,int param_2)

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



// FUNCTION 1468f9f58 FUN_1468f9f58 body=22 status=ok
// SIG undefined FUN_1468f9f58(void)

void FUN_1468f9f58(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 1468f9f6e FUN_1468f9f6e body=123 status=ok
// SIG undefined FUN_1468f9f6e(void)

undefined8 * FUN_1468f9f6e(undefined8 *param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar5 = (ulonglong)param_2;
    do {
      iVar3 = (int)uVar5;
      iVar2 = (int)(uVar5 * 0x4104105 >> 0x20);
      uVar4 = ((uint)(iVar3 - iVar2) >> 1) + iVar2 >> 5;
      uVar5 = (ulonglong)uVar4;
      uVar1 = iVar3 + uVar4 * -0x3f;
      if (uVar1 < 0x1a) {
        iVar2 = 0x7a;
LAB_1468f9fb1:
        iVar2 = iVar2 - uVar1;
      }
      else {
        if (uVar1 < 0x34) {
          iVar2 = 0x74;
          goto LAB_1468f9fb1;
        }
        iVar2 = 0x5f;
        if (uVar1 < 0x3e) {
          iVar2 = 0x6d;
          goto LAB_1468f9fb1;
        }
      }
      FUN_140002184(param_1,iVar2);
    } while (0x3e < uVar4 * 0x3f);
  }
  return param_1;
}



// FUNCTION 1468f9fe9 FUN_1468f9fe9 body=792 status=ok
// SIG undefined FUN_1468f9fe9(void)

undefined8 * FUN_1468f9fe9(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  uint uVar1;
  void *_Src;
  wint_t *pwVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [47];
  char local_99;
  longlong local_98 [2];
  wint_t *local_88;
  ulonglong uStack_80;
  longlong local_78;
  uint local_70;
  longlong local_68 [2];
  wint_t *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (wint_t *)0x0;
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
  local_99 = param_3;
  if ((longlong)(int)uVar1 == 0) {
    uStack_50 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_58,uVar1,0);
    memcpy(local_58,_Src,(longlong)(int)uVar1 * 2);
  }
  FUN_140056680(local_68,L"__pf");
  pwVar2 = local_58;
  lVar4 = (longlong)(int)(uint)uStack_50;
  if (local_58 + lVar4 + -1 != local_58 && (uint)uStack_50 != 0) {
    lVar6 = 0;
    do {
      uVar7 = *(ushort *)((longlong)pwVar2 + lVar6);
      if (((9 < (ushort)(uVar7 - 0x30)) && (uVar7 != 0x5f)) &&
         (0x19 < (ushort)((uVar7 & 0xffdf) - 0x41))) {
        FUN_1468f9f6e(&local_78);
        iVar3 = local_70 - 1;
        if (local_70 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(local_68,local_78,iVar3);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        *(undefined2 *)((longlong)pwVar2 + lVar6) = 0x78;
      }
      lVar6 = lVar6 + 2;
    } while (lVar4 * 2 + -2 != lVar6);
  }
  FUN_140056680(&local_78,param_4);
  if (((local_70 < 2) && (1 < (uint)uStack_50)) && (iVar3 = iswdigit(*local_58), iVar3 != 0)) {
    FUN_1467aca2a(&local_58,0,0x5f);
  }
  FUN_140474144(local_98,&local_78,&local_58);
  FUN_144a7dea0(&local_88,local_98,local_68);
  if (local_58 != (wint_t *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_88 = (wint_t *)0x0;
  uStack_80 = 0;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  lVar4 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar5 + lVar4);
    uVar8 = (ulonglong)uVar7;
    uVar9 = *(ushort *)((longlong)L"Replicate to server" + lVar4);
    if (uVar7 != uVar9) break;
    if (uVar7 == 0) goto LAB_1468fa223;
LAB_1468fa1f7:
    lVar4 = lVar4 + 2;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1468fa1f7;
  }
  if (uVar7 != uVar9) goto LAB_1468fa234;
LAB_1468fa223:
  FUN_14020fad6(&local_58,L"MagicNameWorkaround");
LAB_1468fa234:
  pwVar2 = local_58;
  if (local_99 == '\0') {
    *param_1 = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    *(uint *)(param_1 + 1) = (uint)uStack_50;
    if (lVar4 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,uStack_50 & 0xffffffff,0);
      memcpy((void *)*param_1,pwVar2,lVar4 * 2);
    }
  }
  else {
    FUN_1449b8608(param_1,&local_58,L"_DEPRECATED");
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (wint_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468fa302 FUN_1468fa302 body=197 status=ok
// SIG undefined FUN_1468fa302(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1468fa302(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_2068 [32];
  undefined4 local_2048;
  undefined4 uStack_2044;
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  undefined1 *local_2038;
  undefined1 *local_2030;
  ulonglong *local_2028;
  char local_2020;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2068;
  local_2038 = local_2018;
  local_2020 = '\0';
  local_2028 = &local_18;
  local_2030 = local_2038;
  FUN_1468fa3c8(param_1,&local_2038);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_2048,local_2038,(ulonglong)((longlong)local_2030 - (longlong)local_2038) >> 1
               );
  if ((undefined8 *)&local_2048 == param_2) {
    if (CONCAT44(uStack_2044,local_2048) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_2048;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2044;
    *(undefined4 *)(param_2 + 1) = uStack_2040;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_203c;
  }
  if (local_2020 == '\x01') {
    FUN_1400020a8(local_2038);
  }
  if ((local_18 ^ (ulonglong)auStack_2068) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fa3c8 FUN_1468fa3c8 body=515 status=ok
// SIG undefined FUN_1468fa3c8(void)

void FUN_1468fa3c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (param_1 != 0) {
    do {
      uVar2 = uStack_30;
      lVar7 = (longlong)(int)uStack_30;
      uVar3 = (int)uStack_30 + 1;
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
      if (uStack_30._4_4_ < uVar3) {
        FUN_1468ff732(&local_38,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_38 + lVar7 * 8) = param_1;
      param_1 = *(longlong *)(param_1 + 0x78);
    } while (param_1 != 0);
    if (0 < (int)uStack_30) {
      pwVar4 = *(wchar_t **)(param_2 + 8) + 0x13;
      if (pwVar4 < *(wchar_t **)(param_2 + 0x10)) {
        builtin_wcsncpy(*(wchar_t **)(param_2 + 8),L"Script call stack:\n",0x13);
        *(wchar_t **)(param_2 + 8) = pwVar4;
      }
      else {
        FUN_140213274(param_2,0x13);
        builtin_wcsncpy(*(wchar_t **)(param_2 + 8),L"Script call stack:\n",0x13);
        pwVar4 = *(wchar_t **)(param_2 + 8) + 0x13;
        *(wchar_t **)(param_2 + 8) = pwVar4;
        if ((int)uStack_30 == 0) goto LAB_1468fa50a;
      }
      lVar7 = local_38;
      lVar6 = (longlong)(int)uStack_30 << 3;
      do {
        lVar1 = *(longlong *)(lVar7 + -8 + lVar6);
        if (*(wchar_t **)(param_2 + 0x10) <= pwVar4 + 1) {
          FUN_140213274(param_2,1);
          pwVar4 = *(wchar_t **)(param_2 + 8);
        }
        *pwVar4 = L'\t';
        *(wchar_t **)(param_2 + 8) = pwVar4 + 1;
        FUN_1468fa5cc(*(undefined8 *)(lVar1 + 0x10),param_2);
        puVar5 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar5 + 1) {
          FUN_140213274(param_2,1);
          puVar5 = *(undefined2 **)(param_2 + 8);
        }
        *puVar5 = 10;
        pwVar4 = puVar5 + 1;
        *(wchar_t **)(param_2 + 8) = pwVar4;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      goto LAB_1468fa50a;
    }
  }
  _Dst = *(void **)(param_2 + 8);
  if (*(ulonglong *)(param_2 + 0x10) <= (longlong)_Dst + 0x98U) {
    FUN_140213274(param_2,0x4c);
    _Dst = *(void **)(param_2 + 8);
  }
  memcpy(_Dst,L"Script call stack: [Empty] (FFrame::GetStackTrace() called from native code)",0x98);
  *(longlong *)(param_2 + 8) = (longlong)_Dst + 0x98;
LAB_1468fa50a:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468fa5cc FUN_1468fa5cc body=198 status=ok
// SIG undefined FUN_1468fa5cc(void)

void FUN_1468fa5cc(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FUN_14005eb5c(&local_20,param_2);
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    *puVar1 = 0x20;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (*(undefined8 **)(param_2 + 0x10) <= puVar2 + 1) {
    FUN_140213274(param_2,4);
    puVar2 = *(undefined8 **)(param_2 + 8);
  }
  *puVar2 = 0x65006e006f004e;
  *(undefined8 **)(param_2 + 8) = puVar2 + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fa6a6 FUN_1468fa6a6 body=738 status=ok
// SIG undefined FUN_1468fa6a6(void)

void FUN_1468fa6a6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [2];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = ~*(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x60) + *(longlong *)(param_2 + 0x20);
  }
  FUN_140e6da52(local_d8,lVar5,0,&local_e8);
  FUN_140002266(local_108,L"0x%02X",*(undefined1 *)(*(longlong *)(param_2 + 0x20) + -1));
  FUN_140233b1a(local_f8,local_108);
  local_88 = L"UndefinedOpcode";
  local_80[0] = 0xf;
  FUN_1446e940c(local_12c,&local_88);
  local_88 = L"ScriptCore";
  local_80[0] = 10;
  FUN_1446e940c(local_130,&local_88);
  FUN_140208bae(local_128,local_130,local_12c,
                L"Encountered an undefined opcode ({0}) at byte offset {1}. The compiler may have generated an instruction sequence that was unexpected or incomplete."
               );
  FUN_14023409e(&local_118,local_128,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_f8);
  local_68 = 4;
  FUN_14023423e(local_58,local_d8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_118;
  local_b0 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    plVar3 = *(longlong **)((longlong)local_80 + lVar5 + -8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_110 + 0x10))(local_110);
      }
    }
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar4 = FUN_1447a1f4a(local_c8);
  FUN_14681614e(param_2,2,uVar4);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fa98a FUN_1468fa98a body=248 status=ok
// SIG undefined FUN_1468fa98a(void)

void FUN_1468fa98a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_14005eb28(&local_58,0x80);
  FUN_1468fef7a(uVar1,0,&local_58,0);
  local_78 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    local_78 = local_58;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_14005eb28(&local_68,0x80);
  FUN_1468fef7a(uVar1,0,&local_68,0);
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar2 = local_68;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ScriptCore.cpp",0x98a,
                L"Execution beyond end of script in %s on %s",puVar2);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468faa94 FUN_1468faa94 body=662 status=ok
// SIG undefined FUN_1468faa94(void)

void FUN_1468faa94(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char *_Dst;
  byte bVar13;
  undefined1 auStack_78 [47];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  pbVar2 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar2 + 1;
  pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
  if (pcVar3 == FUN_14002ddda) {
    FUN_14002ddda(uVar1,param_2,0);
  }
  else if (pcVar3 == FUN_14002dfbe) {
    FUN_14002dfbe(uVar1,param_2,0);
  }
  else {
    (*pcVar3)(uVar1,param_2,0);
  }
  plVar12 = *(longlong **)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x40);
  if (plVar12 != (longlong *)0x0) {
    lVar6 = plVar12[1];
    lVar10 = FUN_144a5ab96();
    if (lVar6 == lVar10) goto LAB_1468fab25;
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (((lVar6 != 0) &&
        (lVar10 = *(longlong *)(lVar6 + 8), lVar11 = FUN_1446e6bbc(), lVar10 == lVar11)) &&
       (plVar8 = *(longlong **)(lVar6 + 0x78), plVar8 != (longlong *)0x0)) {
      lVar6 = plVar8[1];
      lVar10 = FUN_144a5ab96();
      plVar12 = (longlong *)0x0;
      if (lVar6 == lVar10) {
        plVar12 = plVar8;
      }
      goto LAB_1468fab25;
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1468fab25:
  local_49 = '\0';
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  pbVar2 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar2 + 1;
  pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
  if (pcVar3 == (code *)&LAB_14282590c) {
    lVar6 = *(longlong *)(pbVar2 + 1);
    *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    (**(code **)(lVar6 + 0xd8))(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0x110),param_2);
  }
  else if (pcVar3 == FUN_14002ddda) {
    FUN_14002ddda(uVar1,param_2);
  }
  else if (pcVar3 == (code *)&LAB_1447715d8) {
    uVar7 = *(undefined8 *)(pbVar2 + 1);
    *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    FUN_140074afa(uVar1,param_2,&local_49,uVar7);
  }
  else {
    (*pcVar3)(uVar1,param_2);
  }
  if (lVar4 != 0) {
    if ((*(code **)(*plVar12 + 0x80) == (code *)&LAB_144a4405c) ||
       (cVar9 = (**(code **)(*plVar12 + 0x80))(plVar12), cVar9 == '\0')) {
      if (local_49 == '\x01') {
        bVar13 = *(byte *)((longlong)plVar12 + 0x72);
      }
      else {
        bVar13 = 0;
      }
      *(byte *)(lVar4 + (ulonglong)*(byte *)((longlong)plVar12 + 0x71)) =
           *(byte *)(lVar4 + (ulonglong)*(byte *)((longlong)plVar12 + 0x71)) &
           ~*(byte *)((longlong)plVar12 + 0x73) | bVar13;
    }
    else {
      cVar9 = (**(code **)(*plVar12 + 0x80))(plVar12);
      if (cVar9 == '\0') {
        _Dst = (char *)(lVar5 + *(int *)((longlong)plVar12 + 0x44));
        if (_Dst != &local_49) {
          if ((*(byte *)((longlong)plVar12 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x100))(plVar12,_Dst,&local_49,(int)plVar12[6]);
          }
          else {
            memcpy(_Dst,&local_49,
                   (longlong)(int)plVar12[6] * (longlong)*(int *)((longlong)plVar12 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*plVar12 + 0x98))(plVar12,lVar5,&local_49);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468fad2c FUN_1468fad2c body=187 status=ok
// SIG undefined FUN_1468fad2c(void)

void FUN_1468fad2c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar2 = *(longlong *)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  uVar3 = uStack_40;
  if (lVar2 != 0) {
    uVar4 = FUN_14479d2ce();
    FUN_14485c47a(lVar2,uVar4);
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fade8 FUN_1468fade8 body=234 status=ok
// SIG undefined FUN_1468fade8(void)

void FUN_1468fade8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar2 = *(longlong **)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  if (lVar3 != 0 && plVar2 != (longlong *)0x0) {
    local_68 = (undefined4)local_58;
    uStack_64 = local_58._4_4_;
    uStack_60 = (undefined4)uStack_50;
    uStack_5c = uStack_50._4_4_;
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(*plVar2 + 0x1e8))(plVar2,lVar3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468faee4 FUN_1468faee4 body=611 status=ok
// SIG undefined FUN_1468faee4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468faee4(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 *_Dst;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_48 [8];
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  plVar12 = *(longlong **)(param_1 + 0x20);
  lVar4 = *plVar12;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(longlong *)(param_1 + 0x20) = (longlong)plVar12 + 9;
  lVar8 = 0;
  (*(code *)(&DAT_14c962c70)[*(byte *)(plVar12 + 1)])(*(undefined8 *)(param_1 + 0x18),param_1,0);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x1e0))();
  }
  plVar11 = &local_68;
  uVar1 = *(ushort *)(lVar4 + 0xb6);
  if ((ulonglong)uVar1 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    lVar10 = (longlong)*(int *)(lVar4 + 0x5c);
    if (lVar10 < 0x11) {
      uStack_70 = 0x1468faf9d;
      lVar10 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      plVar11 = (longlong *)((longlong)&local_68 + lVar10);
      _Dst = (undefined1 *)((longlong)&local_68 + lVar10);
    }
    else {
      uStack_70 = 0x1468fb135;
      lVar7 = -((ulonglong)(((uint)uVar1 + *(int *)(lVar4 + 0x5c)) - 1) + 0xf & 0xfffffffffffffff0);
      plVar11 = (longlong *)((longlong)&local_68 + lVar7);
      _Dst = (undefined1 *)(-lVar10 & (longlong)&uStack_70 + lVar10 + lVar7 + 7);
    }
  }
  local_68 = lVar8;
  *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fafb9;
  memset(_Dst,0,(ulonglong)uVar1);
  pbVar9 = *(byte **)(param_1 + 0x20);
  if (*pbVar9 != 0x16) {
    plVar12 = (longlong *)(lVar4 + 0x50);
    do {
      plVar12 = (longlong *)*plVar12;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (((uint)plVar12[7] >> 8 & 1) == 0) {
        iVar2 = *(int *)((longlong)plVar12 + 0x44);
        if (((uint)plVar12[7] >> 9 & 1) == 0) {
          pcVar5 = *(code **)(*plVar12 + 0x160);
          *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb004;
          (*pcVar5)(plVar12,_Dst + iVar2);
        }
        else {
          iVar3 = *(int *)((longlong)plVar12 + 0x34);
          lVar8 = plVar12[6];
          *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb062;
          memset(_Dst + iVar2,0,(longlong)(int)lVar8 * (longlong)iVar3);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        pbVar9 = *(byte **)(param_1 + 0x20);
        *(byte **)(param_1 + 0x20) = pbVar9 + 1;
        pcVar5 = (code *)(&DAT_14c962c70)[*pbVar9];
        *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb086;
        (*pcVar5)(uVar6);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        *(byte **)(param_1 + 0x20) = pbVar9 + 1;
        pcVar5 = (code *)(&DAT_14c962c70)[*pbVar9];
        *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb022;
        (*pcVar5)(uVar6,param_1,0);
        if (*(longlong *)(param_1 + 0x38) != 0) {
          pcVar5 = *(code **)(*plVar12 + 0x118);
          *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb046;
          (*pcVar5)(plVar12);
        }
      }
      plVar12 = plVar12 + 3;
      pbVar9 = *(byte **)(param_1 + 0x20);
    } while (*pbVar9 != 0x16);
  }
  lVar8 = local_68;
  *(byte **)(param_1 + 0x20) = pbVar9 + 1;
  if (local_68 != 0) {
    *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb0b7;
    FUN_1447cd2ec(lVar8,_Dst);
  }
  for (plVar12 = *(longlong **)(lVar4 + 0x80); plVar12 != (longlong *)0x0;
      plVar12 = (longlong *)plVar12[0xb]) {
    if ((*(byte *)((longlong)plVar12 + 0x3c) & 0x10) == 0) {
      iVar2 = *(int *)((longlong)plVar12 + 0x44);
      pcVar5 = *(code **)(*plVar12 + 0x148);
      *(undefined8 *)((longlong)plVar11 + -0x28) = 0x1468fb0e5;
      (*pcVar5)(plVar12,(longlong)iVar2 + (longlong)_Dst);
    }
  }
  if ((local_60 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar11 + -0x28) = &UNK_1468fb11d;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468fb174 FUN_1468fb174 body=189 status=ok
// SIG undefined FUN_1468fb174(void)

void FUN_1468fb174(undefined8 param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  short *psVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142746600(&local_30,*(undefined8 *)(param_2 + 0x20));
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
  FUN_142746d75(param_3);
  psVar2 = *(short **)(param_2 + 0x20);
  sVar1 = *psVar2;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    *(short **)(param_2 + 0x20) = psVar2;
    sVar1 = *psVar2;
  }
  *(short **)(param_2 + 0x20) = psVar2 + 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fb24a FUN_1468fb24a body=270 status=ok
// SIG undefined FUN_1468fb24a(void)

void FUN_1468fb24a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  void *_Src;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_48);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  puVar3 = local_48;
  if ((int)uStack_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140380e92(&local_68,puVar3);
  _Src = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_60;
  if (&local_68 != param_3) {
    iVar2 = (int)uStack_50;
    lVar4 = (longlong)(int)uStack_50;
    *(int *)(param_3 + 3) = (int)uStack_50;
    if ((int)uStack_50 == 0 && *(int *)((longlong)param_3 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
    }
    else {
      FUN_1401b309e(param_3 + 2,uStack_50 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy((void *)param_3[2],_Src,lVar4 << 3);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468fb35a FUN_1468fb35a body=59 status=ok
// SIG undefined FUN_1468fb35a(void)

void FUN_1468fb35a(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *(undefined4 **)(param_2 + 0x20) = puVar3 + 3;
  uVar4 = 0;
  if (CONCAT44(uVar2,uVar1) != 0) {
    uVar4 = param_1;
  }
  FUN_14485c47a(param_3,uVar4);
  *(longlong *)(param_3 + 8) = CONCAT44(uVar2,uVar1);
  return;
}



// FUNCTION 1468fb3d8 FUN_1468fb3d8 body=308 status=ok
// SIG undefined FUN_1468fb3d8(void)

void FUN_1468fb3d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar5 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar4 = *(longlong *)(param_2 + 0x30);
  iVar3 = **(int **)(param_2 + 0x20);
  *(int **)(param_2 + 0x20) = *(int **)(param_2 + 0x20) + 1;
  local_48 = *(undefined8 *)(param_2 + 0x38);
  local_50 = *(undefined8 *)(lVar4 + 0x70);
  local_40 = *(undefined4 *)(lVar4 + 0x78);
  uStack_3c = *(undefined4 *)(lVar4 + 0x7c);
  uStack_38 = *(undefined4 *)(lVar4 + 0x80);
  uStack_34 = *(undefined4 *)(lVar4 + 0x84);
  local_30 = *(undefined4 *)(lVar4 + 0x88);
  FUN_1402608fa(&local_50,iVar3);
  if (0 < iVar3) {
    FUN_140bb81f0(&local_60,*(undefined8 *)(lVar4 + 0x70));
    pbVar5 = *(byte **)(param_2 + 0x20);
    if (*pbVar5 != 0x3a) {
      do {
        *(byte **)(param_2 + 0x20) = pbVar5 + 1;
        (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,local_60);
        FUN_146896fd6(&local_50,local_60);
        pbVar5 = *(byte **)(param_2 + 0x20);
      } while (*pbVar5 != 0x3a);
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fb50e FUN_1468fb50e body=327 status=ok
// SIG undefined FUN_1468fb50e(void)

void FUN_1468fb50e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_2 + 0x20);
  local_50 = (longlong *)*plVar1;
  *(longlong **)(param_2 + 0x20) = plVar1 + 1;
  *(longlong **)(param_2 + 0x30) = local_50;
  lVar7 = plVar1[1];
  *(longlong *)(param_2 + 0x20) = (longlong)plVar1 + 0xc;
  iVar5 = *(int *)((longlong)local_50 + 0x34);
  lVar3 = local_50[6];
  local_48 = param_3;
  uVar4 = (**(code **)(*local_50 + 0x178))();
  local_40 = iVar5 * (int)lVar3 + 3U & 0xfffffffc;
  local_34 = 4;
  if (4 < (int)uVar4) {
    local_34 = (ulonglong)uVar4;
  }
  local_3c = local_40 + 4;
  local_38 = -(int)local_34 & (int)local_34 + local_3c + 3U;
  uVar6 = 8;
  if (8 < (int)local_38) {
    uVar6 = (ulonglong)local_38;
  }
  local_34 = local_34 | uVar6 << 0x20;
  FUN_1402608fa(&local_50,(int)lVar7);
  if (**(char **)(param_2 + 0x20) != '>') {
    do {
      iVar5 = FUN_14026089e(&local_50);
      if ((int)local_48[1] == *(int *)((longlong)local_48 + 0x34)) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar5 * (longlong)local_34._4_4_ + *local_48;
      }
      pbVar2 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar2 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,lVar7);
    } while (**(char **)(param_2 + 0x20) != '>');
  }
  FUN_14171a698(&local_50);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fb656 FUN_1468fb656 body=311 status=ok
// SIG undefined FUN_1468fb656(void)

void FUN_1468fb656(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar5 = *puVar1;
  *(undefined8 **)(param_2 + 0x20) = puVar1 + 1;
  *(undefined8 *)(param_2 + 0x30) = uVar5;
  uVar2 = puVar1[1];
  *(undefined8 **)(param_2 + 0x20) = puVar1 + 2;
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  uVar4 = *(undefined4 *)(puVar1 + 2);
  *(longlong *)(param_2 + 0x20) = (longlong)puVar1 + 0x14;
  FUN_1468fb78e(local_78,uVar5,uVar2,param_3);
  FUN_140458a4e(local_78,uVar4);
  if (**(char **)(param_2 + 0x20) != '@') {
    do {
      local_40 = local_78;
      uVar4 = FUN_140007ec8(local_78,&local_40);
      local_40 = local_78;
      local_38 = uVar4;
      uVar5 = FUN_144aff4d2(local_78,&local_40);
      pbVar3 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar3 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,uVar5);
      local_40 = local_78;
      local_38 = uVar4;
      uVar5 = FUN_1446ec24c(local_78,&local_40);
      pbVar3 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar3 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,uVar5);
    } while (**(char **)(param_2 + 0x20) != '@');
  }
  FUN_140458c30(local_78);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fb78e FUN_1468fb78e body=227 status=ok
// SIG undefined FUN_1468fb78e(void)

undefined8 *
FUN_1468fb78e(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = (**(code **)(*param_3 + 0x178))(param_3);
  iVar6 = *(int *)((longlong)param_3 + 0x34);
  lVar1 = param_3[6];
  uVar3 = (**(code **)(*param_2 + 0x178))(param_2);
  uVar4 = -uVar2 & (uVar2 + *(int *)((longlong)param_2 + 0x34) * (int)param_2[6]) - 1;
  if ((int)uVar2 < (int)uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 0;
  if (0 < (int)uVar2) {
    uVar3 = uVar2;
  }
  uVar3 = (-uVar3 & (uVar4 + iVar6 * (int)lVar1 + uVar3) - 1) + 3 & 0xfffffffc;
  uVar5 = 4;
  if (4 < (int)uVar2) {
    uVar5 = (ulonglong)uVar2;
  }
  iVar6 = uVar3 + 4;
  uVar2 = -(int)uVar5 & (int)uVar5 + iVar6 + 3U;
  uVar7 = 8;
  if (8 < (int)uVar2) {
    uVar7 = (ulonglong)uVar2;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(uint *)(param_1 + 3) = uVar4;
  *(uint *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = iVar6;
  *(uint *)((longlong)param_1 + 0x24) = uVar2;
  param_1[5] = uVar5 | uVar7 << 0x20;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 1468fb8da FUN_1468fb8da body=190 status=ok
// SIG undefined FUN_1468fb8da(void)

void FUN_1468fb8da(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_2 + 0x20);
  lVar2 = *plVar1;
  local_28 = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)plVar1 + 9;
  (*(code *)(&DAT_14c962c70)[*(byte *)(plVar1 + 1)])
            (*(undefined8 *)(param_2 + 0x18),param_2,&local_28);
  lVar3 = local_28;
  if (local_28 != 0) {
    lVar4 = FUN_144a797b2();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (lVar2 != 0 &&
          *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (lVar4 = local_28,
       *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_1468fb977;
  }
  lVar4 = 0;
LAB_1468fb977:
  *param_3 = lVar4;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468fb99a FUN_1468fb99a body=240 status=ok
// SIG undefined FUN_1468fb99a(void)

void FUN_1468fb99a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar4 == 0) {
LAB_1468fb9f1:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1468fb9f1;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_58);
  lVar3 = local_58[0];
  if (local_58[0] != 0) {
    cVar2 = FUN_144a7ff9e(*(undefined8 *)(local_58[0] + 0x10),lVar4);
    if (cVar2 != '\0') {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      *param_3 = lVar3;
      lVar4 = FUN_144718840(lVar3,lVar4);
      param_3[1] = lVar4;
      goto LAB_1468fba5b;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
LAB_1468fba5b:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fba8c FUN_1468fba8c body=204 status=ok
// SIG undefined FUN_1468fba8c(void)

void FUN_1468fba8c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar3 == 0) {
LAB_1468fbade:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1468fbade;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_38);
  if (local_38[0] != 0) {
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(local_38[0] + 0x10) + 0x38)) &&
       (lVar2 = local_38[0],
       *(longlong *)
        (*(longlong *)(*(longlong *)(local_38[0] + 0x10) + 0x30) +
        (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_1468fbb35;
  }
  lVar2 = 0;
LAB_1468fbb35:
  *param_3 = lVar2;
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fbb5a FUN_1468fbb5a body=126 status=ok
// SIG undefined FUN_1468fbb5a(void)

void FUN_1468fbb5a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = **(int **)(param_2 + 0x20);
  pbVar5 = (byte *)(*(int **)(param_2 + 0x20) + 2);
  *(byte **)(param_2 + 0x20) = pbVar5;
  do {
    while (*pbVar5 != 0x71) {
      *(byte **)(param_2 + 0x20) = pbVar5 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,param_3);
      pbVar5 = *(byte **)(param_2 + 0x20);
    }
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pbVar1 = pbVar5 + 6;
    iVar2 = *(int *)(pbVar5 + 1);
    *(byte **)(param_2 + 0x20) = pbVar5 + 5;
    bVar3 = pbVar5[5];
    *(byte **)(param_2 + 0x20) = pbVar1;
    pbVar5 = pbVar1;
  } while ((iVar4 != iVar2) || (bVar3 != 0));
  return;
}



// FUNCTION 1468fbbde FUN_1468fbbde body=85 status=ok
// SIG undefined FUN_1468fbbde(void)

void FUN_1468fbbde(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fbc34 FUN_1468fbc34 body=520 status=ok
// SIG undefined FUN_1468fbc34(void)

void FUN_1468fbc34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_31 = '\0';
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_31);
  if (local_31 == '\x01') {
    local_40 = 0;
    pbVar1 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_40);
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    pbVar1 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
    DAT_14c963cf8 = 0;
    if ((((local_40 != 0) && (lStack_50 != 0)) &&
        (*(int *)(local_40 + 0x38) <= *(int *)(lStack_50 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lStack_50 + 0x30) + (longlong)*(int *)(local_40 + 0x38) * 8) ==
        local_40 + 0x30)) {
      lVar2 = local_48;
      if (local_48 == 0) {
        if (local_58 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_14494cb38(lStack_50,&local_58);
          local_48 = lVar2;
        }
      }
      local_80 = &PTR_FUN_149eacb10;
      local_78 = 0;
      FUN_14485c47a(&local_78,lStack_50);
      local_68 = 0;
      local_60 = 0;
      local_a8 = &PTR_FUN_149eacb10;
      local_a0 = 0;
      local_70 = lVar2;
      FUN_14485c47a(&local_a0,local_40);
      local_90 = 0;
      local_88 = 0;
      local_98 = param_3;
      if (param_3 != (undefined1 *)0x0 && lVar2 != 0) {
        FUN_1449b16b6(local_40,param_3,lVar2,1);
        DAT_14c963cf8 = 1;
      }
      local_a8 = &PTR_FUN_149eacb10;
      FUN_144aa17a4();
      local_80 = &PTR_FUN_149eacb10;
      FUN_144aa17a4();
    }
  }
  else {
    *param_3 = DAT_14c963cf8;
    DAT_14c963cf8 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fbe3e FUN_1468fbe3e body=61 status=ok
// SIG undefined FUN_1468fbe3e(void)

undefined8 * FUN_1468fbe3e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_149eacb10;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  param_1[2] = param_3;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1468fbe7c FUN_1468fbe7c body=368 status=ok
// SIG undefined FUN_1468fbe7c(void)

void FUN_1468fbe7c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  local_48 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_58);
  if (local_48 == (longlong *)0x0) {
    if ((local_58 != 0) && (lStack_50 != 0)) {
      local_48 = (longlong *)FUN_14494cb38(lStack_50,&local_58);
      if (local_48 != (longlong *)0x0) goto LAB_1468fbefd;
    }
  }
  else {
LAB_1468fbefd:
    lVar2 = (**(code **)(*local_48 + 8))();
    lVar4 = local_58;
    if (local_38 != 0) {
      lVar5 = 0;
      lVar6 = 0;
      plVar7 = (longlong *)0x0;
      if (*(int *)(local_38 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        lVar6 = 0;
        plVar7 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(local_38 + 0x38) * 8) ==
            local_38 + 0x30) {
          uVar3 = FUN_14477b664(lStack_50);
          lVar5 = FUN_14477b664(uVar3);
          lVar6 = lVar4;
          plVar7 = local_48;
        }
      }
      goto LAB_1468fbf97;
    }
  }
  plVar7 = (longlong *)0x0;
  lVar5 = 0;
  lVar6 = 0;
LAB_1468fbf97:
  if (*param_3 != lVar6) {
    param_3[2] = 0;
  }
  *param_3 = lVar6;
  if (param_3[1] != lVar5) {
    param_3[2] = 0;
  }
  uVar3 = FUN_14477b664();
  lVar4 = FUN_14477b664(uVar3);
  param_3[1] = lVar4;
  param_3[2] = (longlong)plVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fbfee FUN_1468fbfee body=156 status=ok
// SIG undefined FUN_1468fbfee(void)

void FUN_1468fbfee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_38);
  bVar3 = true;
  if (local_28 == 0) {
    if ((local_38 == 0) || (lStack_30 == 0)) {
      bVar3 = false;
    }
    else {
      lVar2 = FUN_14494cb38(lStack_30,&local_38);
      bVar3 = lVar2 != 0;
    }
  }
  *param_3 = bVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fc08c FUN_1468fc08c body=71 status=ok
// SIG undefined FUN_1468fc08c(void)

undefined8 FUN_1468fc08c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1403f0b60();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fc0d4 FUN_1468fc0d4 body=80 status=ok
// SIG undefined FUN_1468fc0d4(void)

void FUN_1468fc0d4(longlong *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_140180cec();
    if (param_1[1] != 0) {
      FUN_1400020e8(param_2,&DAT_149e0635c,1);
      FUN_140180cec(param_1 + 1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1468fc124 FUN_1468fc124 body=93 status=ok
// SIG undefined FUN_1468fc124(void)

longlong FUN_1468fc124(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar5 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar5);
  }
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        *(short *)(lVar3 + lVar4 * 2) = (short)*(char *)(lVar2 + lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
    *(longlong *)(param_1 + 8) = lVar3 + lVar5 * 2;
  }
  return param_1;
}



// FUNCTION 1468fc182 FUN_1468fc182 body=120 status=ok
// SIG undefined FUN_1468fc182(void)

void FUN_1468fc182(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  local_28 = local_40;
  local_20 = local_38 + -1;
  if (local_38 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fc1fc FUN_1468fc1fc body=445 status=ok
// SIG undefined FUN_1468fc1fc(void)

undefined8
FUN_1468fc1fc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    FUN_1400020e8(param_2,&DAT_149e01fe8,4);
  }
  else {
    local_48 = (undefined4)*param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = (undefined4)param_1[1];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_38 = (void *)0x0;
    local_30 = (int)param_1[3];
    lVar2 = (longlong)local_30;
    _Src = (void *)param_1[2];
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    if (DAT_14c75ecc4 == '\x01') {
      FUN_14475c82a(&local_48);
    }
    if ((param_5 >> 0xd & 1) == 0) {
      FUN_14475cc44(&local_48,&local_58);
    }
    else {
      local_68 = CONCAT44(uStack_3c,uStack_40);
      if (local_68 == 0) {
        local_58 = (undefined2 *)0x0;
        uStack_50 = 0;
      }
      else {
        FUN_1400021e4(&local_68,&local_58);
      }
    }
    if ((param_5 & 1) == 0) {
      puVar1 = local_58;
      iVar3 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar3 = 0;
      }
    }
    else {
      FUN_1400020e8(param_2,&DAT_149e01f5a,1);
      FUN_1468d9ec2(&local_58,&local_68);
      iVar3 = local_60 + -1;
      if (local_60 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_68,iVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar1 = &DAT_149e01f5a;
      iVar3 = 1;
    }
    FUN_1400020e8(param_2,puVar1,iVar3);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1468fc3ba FUN_1468fc3ba body=594 status=ok
// SIG undefined FUN_1468fc3ba(void)

ulonglong FUN_1468fc3ba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined1 *puStack_890;
  longlong *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *puStack_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  local_880 = param_3;
  FUN_14475cc44(param_1,&local_898);
  FUN_1401a700c(&local_868,5);
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (uVar1 == ((ulonglong)local_868 & 0xffffffff)) {
    ppuVar4 = &local_870;
    local_870 = (undefined1 *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x150))(*(longlong **)(*param_3 + 8),ppuVar4);
    if (local_870 == (undefined1 *)0x0) {
      if (local_898 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_898 = (undefined1 *)0x0;
      puStack_890 = (undefined1 *)0x0;
    }
    else {
      local_868 = (undefined1 *)0x0;
      puStack_860 = (undefined1 *)0x0;
      FUN_1401031ac(local_870,0);
      if (local_898 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_898 = local_868;
      puStack_890 = puStack_860;
    }
  }
  else {
    FUN_1401a700c(&local_868,6);
    if (uVar1 == ((ulonglong)local_868 & 0xffffffff)) {
      local_878 = (undefined1 *)0x0;
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_878);
      local_870 = local_878;
      local_868 = local_848;
      local_850 = '\0';
      local_858 = local_32;
      ppuVar4 = &local_868;
      puStack_860 = local_868;
      FUN_14005eb5c(&local_870,ppuVar4);
      FUN_1402980a2(&local_898,local_868,
                    (ulonglong)((longlong)puStack_860 - (longlong)local_868) >> 1);
      if (local_850 == '\x01') {
LAB_1468fc5e7:
        FUN_1400020a8(local_868);
      }
    }
    else {
      uVar1 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_868,0xd);
      ppuVar4 = (undefined1 **)0x0;
      if (uVar1 != ((ulonglong)local_868 & 0xffffffff)) goto LAB_1468fc46e;
      local_868 = (undefined1 *)0x0;
      puStack_860 = (undefined1 *)0x0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_868);
      ppuVar5 = (undefined1 **)(ulonglong)((int)puStack_860 - 1);
      if ((int)puStack_860 == 0) {
        ppuVar5 = ppuVar4;
      }
      FUN_1402980a2(&local_898,local_868,ppuVar5);
      if (local_868 != (undefined1 *)0x0) goto LAB_1468fc5e7;
    }
  }
  ppuVar4 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar4 >> 8),1);
LAB_1468fc46e:
  lVar3 = FUN_144aff0e0();
  if ((*(byte *)(lVar3 + 0x28) & 1) != 0) {
    local_868 = local_898;
    iVar2 = (int)puStack_890 + -1;
    if ((int)puStack_890 == 0) {
      iVar2 = 0;
    }
    puStack_860 = (undefined1 *)CONCAT44(puStack_860._4_4_,iVar2);
    FUN_14475bf92(param_1);
    FUN_144aff0e0(&local_880);
  }
  if (local_898 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar4 & 0xffffffff;
}



// FUNCTION 1468fc60e FUN_1468fc60e body=74 status=ok
// SIG undefined FUN_1468fc60e(void)

void FUN_1468fc60e(undefined8 param_1)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_144a13f80(&DAT_14c963d10,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fc65a FUN_1468fc65a body=594 status=ok
// SIG undefined FUN_1468fc65a(void)

ulonglong FUN_1468fc65a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined1 *puStack_890;
  longlong *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *puStack_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  local_880 = param_3;
  FUN_14475cc44(param_1,&local_898);
  FUN_1401a700c(&local_868,5);
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (uVar1 == ((ulonglong)local_868 & 0xffffffff)) {
    ppuVar4 = &local_870;
    local_870 = (undefined1 *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x150))(*(longlong **)(*param_3 + 8),ppuVar4);
    if (local_870 == (undefined1 *)0x0) {
      if (local_898 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_898 = (undefined1 *)0x0;
      puStack_890 = (undefined1 *)0x0;
    }
    else {
      local_868 = (undefined1 *)0x0;
      puStack_860 = (undefined1 *)0x0;
      FUN_1401031ac(local_870,0);
      if (local_898 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_898 = local_868;
      puStack_890 = puStack_860;
    }
  }
  else {
    FUN_1401a700c(&local_868,6);
    if (uVar1 == ((ulonglong)local_868 & 0xffffffff)) {
      local_878 = (undefined1 *)0x0;
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_878);
      local_870 = local_878;
      local_868 = local_848;
      local_850 = '\0';
      local_858 = local_32;
      ppuVar4 = &local_868;
      puStack_860 = local_868;
      FUN_14005eb5c(&local_870,ppuVar4);
      FUN_1402980a2(&local_898,local_868,
                    (ulonglong)((longlong)puStack_860 - (longlong)local_868) >> 1);
      if (local_850 == '\x01') {
LAB_1468fc887:
        FUN_1400020a8(local_868);
      }
    }
    else {
      uVar1 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_868,0xd);
      ppuVar4 = (undefined1 **)0x0;
      if (uVar1 != ((ulonglong)local_868 & 0xffffffff)) goto LAB_1468fc70e;
      local_868 = (undefined1 *)0x0;
      puStack_860 = (undefined1 *)0x0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_868);
      ppuVar5 = (undefined1 **)(ulonglong)((int)puStack_860 - 1);
      if ((int)puStack_860 == 0) {
        ppuVar5 = ppuVar4;
      }
      FUN_1402980a2(&local_898,local_868,ppuVar5);
      if (local_868 != (undefined1 *)0x0) goto LAB_1468fc887;
    }
  }
  ppuVar4 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar4 >> 8),1);
LAB_1468fc70e:
  lVar3 = FUN_144aff0e0();
  if ((*(byte *)(lVar3 + 0x28) & 1) != 0) {
    local_868 = local_898;
    iVar2 = (int)puStack_890 + -1;
    if ((int)puStack_890 == 0) {
      iVar2 = 0;
    }
    puStack_860 = (undefined1 *)CONCAT44(puStack_860._4_4_,iVar2);
    FUN_14475bf92(param_1);
    FUN_144aff0e0(&local_880);
  }
  if (local_898 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar4 & 0xffffffff;
}



// FUNCTION 1468fc8ad FUN_1468fc8ad body=303 status=ok
// SIG undefined FUN_1468fc8ad(void)

ulonglong FUN_1468fc8ad(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  longlong *local_40;
  ulonglong local_38;
  undefined7 uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1407c67d0();
  lVar3 = FUN_140005490(param_1,2);
  if (lVar3 != 0 && lVar2 != 0) {
    lVar4 = FUN_1427dc82a(param_1);
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if ((lVar2 != lVar4) || (lVar4 = FUN_146891a9c(param_1), lVar4 == 0)) goto LAB_1468fc8f5;
    local_50 = *(longlong **)(lVar2 + 0x50);
    local_48 = 0xffffffff;
    local_44 = 0x101;
    local_42 = 0;
    local_58 = lVar2;
    FUN_144a2daf0(&local_58);
    if (local_50 != (longlong *)0x0) {
      do {
        local_40 = local_50;
        cVar1 = (*(code *)*param_2)(param_2[1],&local_40);
        if ((cVar1 != '\0') &&
           (cVar1 = (**(code **)(*local_50 + 200))
                              (local_50,*(int *)((longlong)local_50 + 0x44) + lVar4,
                               lVar3 + *(int *)((longlong)local_50 + 0x44),0), cVar1 == '\0')) {
          uVar5 = CONCAT71(uVar6,1);
          goto LAB_1468fc8f5;
        }
        local_50 = (longlong *)local_50[3];
        FUN_144a2daf0(&local_58);
      } while (local_50 != (longlong *)0x0);
    }
  }
  uVar5 = 0;
LAB_1468fc8f5:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1468fc9de FUN_1468fc9de body=122 status=ok
// SIG undefined FUN_1468fc9de(void)

void FUN_1468fc9de(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149eac750;
  if (DAT_14c872bd8 == '\0') {
    local_20 = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_20,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fca5a FUN_1468fca5a body=140 status=ok
// SIG undefined FUN_1468fca5a(void)

void FUN_1468fca5a(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  FUN_1468ff7b8();
  local_30 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  FUN_140f933a4(&DAT_14c964830,&local_30,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fcae8 FUN_1468fcae8 body=102 status=ok
// SIG undefined FUN_1468fcae8(void)

bool FUN_1468fcae8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = FUN_14479d2ce(param_2);
  if ((longlong)(int)param_1[1] == 0) {
    bVar6 = false;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
    lVar4 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 4;
    do {
      if ((lVar2 != 0) && (*(longlong *)(lVar4 + 8) == lVar1)) {
        lVar3 = FUN_1409ca440(lVar4);
        if (lVar3 == lVar2) goto LAB_1468fcb3a;
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
    lVar4 = 0;
LAB_1468fcb3a:
    bVar6 = lVar4 != 0;
  }
  return bVar6;
}



// FUNCTION 1468fcb4e FUN_1468fcb4e body=3093 status=ok
// SIG undefined FUN_1468fcb4e(void)

/* WARNING: Removing unreachable block (ram,0x0001468fd189) */
/* WARNING: Removing unreachable block (ram,0x0001468fd3a8) */

void FUN_1468fcb4e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
  longlong local_118;
  undefined2 *local_110;
  int local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_128 = param_3;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar14 = (undefined8 *)*param_1;
    puVar22 = puVar14 + (longlong)*(int *)(param_1 + 1) * 2;
    bVar1 = true;
    local_130 = 0;
    uVar15 = 0;
LAB_1468fcbd6:
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(puVar14 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar14;
    }
    lVar12 = 0;
    do {
      uVar9 = *(ushort *)((longlong)puVar7 + lVar12);
      uVar10 = (ulonglong)uVar9;
      uVar18 = *(ushort *)((longlong)L"-details" + lVar12);
      if (uVar9 != uVar18) {
        if ((uVar18 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar19 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar19]) goto LAB_1468fcbfb;
        }
        if (uVar9 != uVar18) {
          cVar3 = FUN_144a791f8(puVar14,L"name=",5,1);
          if (cVar3 == '\0') {
            cVar3 = FUN_144a791f8(puVar14,L"delegate=",9,1);
            if (cVar3 == '\0') {
              cVar3 = FUN_144a791f8(puVar14,L"class=",6,1);
              if (cVar3 == '\0') goto LAB_1468fcce4;
              local_d8 = (longlong *)0x0;
              uStack_d0 = (longlong *)0x0;
              local_138 = uVar15;
              FUN_140056680(&local_100,&DAT_149e06162);
              local_140 = 0;
              local_148 = 0;
              FUN_1407cdbc6(puVar14,&local_100,0,&local_d8);
              if (local_100 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              uVar8 = FUN_144a797b2();
              local_130 = FUN_1427dcdfa(uVar8,&local_d8,0);
              uVar15 = local_138;
              if (local_130 == 0) {
                pwVar20 = L"No class of specified name found.";
                goto LAB_1468fcda8;
              }
            }
            else {
              local_d8 = (longlong *)0x0;
              uStack_d0 = (longlong *)0x0;
              local_138 = uVar15;
              FUN_140056680(&local_100,&DAT_149e06162);
              local_140 = 0;
              local_148 = 0;
              FUN_1407cdbc6(puVar14,&local_100,0,&local_d8);
              if (local_100 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              plVar13 = (longlong *)&DAT_149dfb77a;
              if ((int)uStack_d0 != 0) {
                plVar13 = local_d8;
              }
              FUN_1446f470e(&local_100,plVar13,0);
              local_98 = local_100;
              uVar15 = local_138;
              if (local_100 == (longlong *)0x0) {
                pwVar20 = L"Invalid delegate name";
LAB_1468fcda8:
                uVar15 = local_138;
                FUN_146816218(local_128,3,pwVar20);
                uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
              }
            }
          }
          else {
            local_d8 = (longlong *)0x0;
            uStack_d0 = (longlong *)0x0;
            local_138 = uVar15;
            FUN_140056680(&local_100,&DAT_149e06162);
            local_140 = 0;
            local_148 = 0;
            FUN_1407cdbc6(puVar14,&local_100,0,&local_d8);
            if (local_100 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar13 = (longlong *)&DAT_149dfb77a;
            if ((int)uStack_d0 != 0) {
              plVar13 = local_d8;
            }
            FUN_1446f470e(&local_100,plVar13,0);
            local_90 = local_100;
            uVar15 = local_138;
            if (local_100 == (longlong *)0x0) {
              pwVar20 = L"Invalid object name";
              goto LAB_1468fcda8;
            }
          }
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1468fcce4;
        }
        goto LAB_1468fcce1;
      }
      if (uVar9 == 0) goto LAB_1468fcce1;
LAB_1468fcbfb:
      lVar12 = lVar12 + 2;
    } while( true );
  }
  bVar1 = true;
  lVar12 = 0;
LAB_1468fce97:
  uVar15 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  local_100 = (longlong *)&DAT_100000000;
  local_f8 = &DAT_14c963d98;
  local_f0 = 0xffffffff;
  local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
  if (DAT_14c963db0 != 0) {
    FUN_1449c0562(&local_100);
    uVar15 = (ulonglong)DAT_14c963db0;
  }
  local_c0 = local_f0;
  lVar17 = local_c0;
  local_b8 = (uint)local_e8;
  local_b4 = local_e8._4_4_;
  uStack_d0 = local_100;
  local_c8 = local_f8;
  local_d8 = &DAT_14c963d88;
  local_c0._4_4_ = (int)((ulonglong)local_f0 >> 0x20);
  if (local_c0._4_4_ == (int)uVar15) {
    iVar16 = 0;
    local_138 = local_138 & 0xffffffff00000000;
    if (local_f8 != &DAT_14c963d98) goto LAB_1468fcfc7;
  }
  else {
LAB_1468fcfc7:
    local_118 = lVar12 + 0x30;
    local_138 = local_138 & 0xffffffff00000000;
    iVar16 = 0;
    iVar4 = local_c0._4_4_;
    local_130 = lVar12;
    local_120 = uVar15;
    local_c0 = lVar17;
    do {
      lVar17 = *local_d8;
      lVar21 = *(longlong *)(lVar17 + (longlong)iVar4 * 0x60);
      if ((local_90 == (longlong *)0x0) || (*(longlong **)(lVar21 + 0x18) == local_90)) {
        if (lVar12 != 0) {
          if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar12 + 0x38) * 8) != local_118)) goto LAB_1468fd040;
        }
        plVar13 = local_100;
        puVar2 = local_f8;
        if (!bVar1) {
          local_88 = (undefined2 *)0x0;
          uStack_80 = 0;
          FUN_1401031ac(lVar21,0,&local_88);
          puVar7 = &DAT_149dfb77a;
          if ((int)uStack_80 != 0) {
            puVar7 = local_88;
          }
          FUN_140002266(&local_100,&DAT_149e0625e,puVar7);
          uVar10 = uStack_a0;
          lVar21 = (longlong)(int)uStack_a0;
          uVar5 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
          if (uStack_a0._4_4_ < uVar5) {
            FUN_1447a1bd6(&local_a8,uVar10 & 0xffffffff);
          }
          lVar12 = local_130;
          lVar21 = lVar21 * 0x10;
          *(undefined8 *)(local_a8 + lVar21) = 0;
          *(longlong **)(local_a8 + lVar21) = local_100;
          local_100 = (longlong *)0x0;
          plVar13 = local_100;
          *(int *)(local_a8 + 8 + lVar21) = (int)local_f8;
          *(uint *)(local_a8 + 0xc + lVar21) = local_f8._4_4_;
          local_f8 = (undefined *)0x0;
          puVar2 = local_f8;
          local_f8 = (undefined *)0x0;
          local_100 = (longlong *)0x0;
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
            plVar13 = local_100;
            puVar2 = local_f8;
          }
        }
        local_f8 = puVar2;
        local_100 = plVar13;
        lVar17 = lVar17 + (longlong)iVar4 * 0x60;
        local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
        plVar13 = (longlong *)(lVar17 + 8);
        if (local_98 == (longlong *)0x0) {
          iVar16 = (*(int *)(lVar17 + 0x10) - *(int *)(lVar17 + 0x3c)) + iVar16;
          if (!bVar1) {
            lVar12 = lVar17 + 0x18;
            local_88 = (undefined2 *)0x100000000;
            local_78 = 0xffffffff;
            local_70 = 0;
            uStack_80 = lVar12;
            if (*(int *)(lVar17 + 0x30) != 0) {
              FUN_1449c0562(&local_88);
            }
            local_e8 = local_78;
            local_e0 = local_70;
            local_dc = local_6c;
            local_f8 = (undefined *)local_88;
            local_f0 = uStack_80;
            uVar5 = *(uint *)(lVar17 + 0x30);
            local_88 = (undefined2 *)CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
            local_78 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
            local_70 = uVar5 & 0xffffffe0;
            local_100 = plVar13;
            uStack_80 = lVar12;
            if (*(uint *)(lVar17 + 0x30) != uVar5) {
              FUN_1449c0562(&local_88);
              uVar5 = local_78._4_4_;
            }
            lVar17 = uStack_80;
            uVar15 = local_120;
            lVar12 = local_130;
            if ((local_100 != plVar13 || local_f0 != uStack_80) || local_e8._4_4_ != uVar5) {
              do {
                FUN_1400021e4((longlong)(int)local_e8._4_4_ * 0x20 + *local_100,&local_110);
                puVar7 = &DAT_149dfb77a;
                if (local_108 != 0) {
                  puVar7 = local_110;
                }
                FUN_140002266(&local_88,L"   %s",puVar7);
                uVar15 = uStack_a0;
                lVar12 = (longlong)(int)uStack_a0;
                uVar6 = (int)uStack_a0 + 1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
                if (uStack_a0._4_4_ < uVar6) {
                  FUN_1447a1bd6(&local_a8,uVar15 & 0xffffffff);
                }
                lVar12 = lVar12 * 0x10;
                *(undefined8 *)(local_a8 + lVar12) = 0;
                *(undefined2 **)(local_a8 + lVar12) = local_88;
                *(int *)(local_a8 + 8 + lVar12) = (int)uStack_80;
                *(undefined4 *)(local_a8 + 0xc + lVar12) = uStack_80._4_4_;
                uStack_80 = 0;
                local_88 = (undefined2 *)0x0;
                if (local_110 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
                FUN_1449c0562(&local_f8);
                uVar15 = local_120;
                lVar12 = local_130;
              } while (local_100 != plVar13 || (local_f0 != lVar17 || local_e8._4_4_ != uVar5));
            }
          }
        }
        else {
          iVar4 = 0;
          if (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 0x3c)) {
            uVar5 = (uint)((ulonglong)local_98 >> 0x10);
            uVar6 = (uint)local_98 & 0xffff;
            lVar21 = lVar17 + 0x40;
            if (*(longlong *)(lVar17 + 0x48) != 0) {
              lVar21 = *(longlong *)(lVar17 + 0x48);
            }
            iVar11 = *(int *)(lVar21 + (ulonglong)
                                       (*(int *)(lVar17 + 0x50) - 1U &
                                       (int)((ulonglong)local_98 >> 0x20) +
                                       ((uint)local_98 << 0x10 | uVar6) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                if (*(longlong **)(*plVar13 + (longlong)iVar11 * 0x20) == local_98) {
                  iVar4 = 1;
                  break;
                }
                iVar11 = *(int *)((longlong)iVar11 * 0x20 + *plVar13 + 0x18);
              } while (iVar11 != -1);
            }
          }
          iVar16 = iVar4 + iVar16;
        }
      }
LAB_1468fd040:
      local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_d0._4_4_);
      FUN_1449c0562(&uStack_d0);
      iVar4 = local_c0._4_4_;
      lVar17 = local_c0;
    } while (local_d8 != &DAT_14c963d88 ||
             (local_c8 != &DAT_14c963d98 || local_c0._4_4_ != (int)uVar15));
  }
  local_c0 = lVar17;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  FUN_140056680(&local_d8,L"Bound Sparse Delegates");
  if (lVar12 != 0) {
    local_100 = *(longlong **)(lVar12 + 0x18);
    FUN_1400021e4(&local_100,&local_88);
    puVar7 = local_88;
    if ((int)uStack_80 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_100,L" - Class=%s",puVar7);
    iVar4 = (int)local_f8 + -1;
    if ((int)local_f8 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(&local_d8,local_100,iVar4);
    if (local_100 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar8 = local_128;
  if (local_90 != (longlong *)0x0) {
    FUN_1400021e4(&local_90,&local_88);
    puVar7 = local_88;
    if ((int)uStack_80 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_100,L" - Name=%s",puVar7);
    iVar4 = (int)local_f8 + -1;
    if ((int)local_f8 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(&local_d8,local_100,iVar4);
    if (local_100 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400021e4(&local_98,&local_88);
    puVar7 = local_88;
    if ((int)uStack_80 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_100,L" - Delegate=%s",puVar7);
    iVar4 = (int)local_f8 + -1;
    if ((int)local_f8 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(&local_d8,local_100,iVar4);
    if (local_100 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar13 = local_d8;
  if ((int)uStack_d0 == 0) {
    plVar13 = (longlong *)&DAT_149dfb77a;
  }
  FUN_146816218(uVar8,5,&DAT_149e0625e,plVar13);
  FUN_146816218(uVar8,5,L"Objects: %d",local_138 & 0xffffffff);
  FUN_146816218(uVar8,5,L"Delegates: %d",iVar16);
  FUN_146816218(uVar8,5,L"------------------------------------------------------------------------")
  ;
  lVar12 = local_a8;
  lVar17 = (longlong)(int)uStack_a0;
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar12 + 8 + lVar21) != 0) {
        puVar7 = *(undefined2 **)(lVar12 + lVar21);
      }
      FUN_146816218(uVar8,5,&DAT_149e0625e,puVar7);
      lVar21 = lVar21 + 0x10;
    } while (lVar17 * 0x10 != lVar21);
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_1468fd6f1:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1468fcce1:
  bVar1 = false;
LAB_1468fcce4:
  puVar14 = puVar14 + 2;
  if (puVar14 == puVar22) goto LAB_1468fce7c;
  goto LAB_1468fcbd6;
LAB_1468fce7c:
  lVar12 = local_130;
  if ((uVar15 & 1) != 0) goto LAB_1468fd6f1;
  goto LAB_1468fce97;
}



// FUNCTION 1468fd764 FUN_1468fd764 body=1024 status=ok
// SIG undefined FUN_1468fd764(void)

undefined8 FUN_1468fd764(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_48,0xe);
  if (uVar2 == ((ulonglong)local_48 & 0xffffffff)) {
    FUN_144a5dc74(&local_48);
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_48);
    lVar5 = FUN_1467cf004(&local_48);
    if (lVar5 == 0) {
      FUN_140056680(&local_58,&DAT_149dfb77a);
    }
    else {
      puVar6 = (undefined8 *)FUN_1467cf004(&local_48);
      local_58 = (longlong *)0x0;
      uVar1 = *(uint *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_50 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_58,uVar1,0);
        memcpy(local_58,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    plVar4 = local_58;
    pplVar9 = (longlong **)
              ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
              param_4 + *(int *)(param_1 + 0x44));
    if (pplVar9 != &local_58) {
      iVar3 = (int)uStack_50;
      lVar5 = (longlong)(int)uStack_50;
      *(int *)(pplVar9 + 1) = (int)uStack_50;
      if ((int)uStack_50 == 0 && *(int *)((longlong)pplVar9 + 0xc) == 0) {
        *(undefined4 *)((longlong)pplVar9 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(pplVar9,uStack_50 & 0xffffffff);
        if (iVar3 != 0) {
          memcpy(*pplVar9,plVar4,lVar5 * 2);
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  else {
    uVar2 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_48,0xd);
    if (uVar2 == ((ulonglong)local_48 & 0xffffffff)) {
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_48);
      plVar4 = local_48;
      local_58 = (longlong *)0x0;
      lVar5 = (longlong)(int)uStack_40;
      uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_40);
      if (lVar5 == 0) {
        uStack_50 = uStack_40 & 0xffffffff;
      }
      else {
        FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
        memcpy(local_58,plVar4,lVar5 * 2);
      }
      plVar4 = local_58;
      pplVar9 = (longlong **)
                ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                param_4 + *(int *)(param_1 + 0x44));
      if (pplVar9 != &local_58) {
        iVar3 = (int)uStack_50;
        lVar5 = (longlong)(int)uStack_50;
        *(int *)(pplVar9 + 1) = (int)uStack_50;
        if ((int)uStack_50 == 0 && *(int *)((longlong)pplVar9 + 0xc) == 0) {
          *(undefined4 *)((longlong)pplVar9 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(pplVar9,uStack_50 & 0xffffffff);
          if (iVar3 != 0) {
            memcpy(*pplVar9,plVar4,lVar5 * 2);
          }
        }
      }
      plVar8 = local_48;
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
        plVar8 = local_48;
      }
    }
    else {
      uVar2 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_48,0x24);
      if (uVar2 == ((ulonglong)local_48 & 0xffffffff)) {
        local_58 = (longlong *)0x0;
        uStack_50 = 0;
        local_48 = param_3;
        uVar7 = FUN_144aff0e0();
        FUN_1427479f3(uVar7,&local_58);
        iVar3 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar3 = 0;
        }
        FUN_14274678c(&local_48,local_58,iVar3);
      }
      else {
        uVar2 = *(ulonglong *)(param_2 + 0xc);
        FUN_1401a700c(&local_48,0x25);
        uVar7 = 0;
        if (uVar2 != ((ulonglong)local_48 & 0xffffffff)) goto LAB_1468fd8ab;
        local_58 = (longlong *)0x0;
        uStack_50 = 0;
        local_48 = param_3;
        uVar7 = FUN_144aff0e0();
        FUN_140117ade(uVar7,&local_58);
        iVar3 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar3 = 0;
        }
        FUN_142746720(&local_48,local_58,iVar3);
      }
      plVar4 = local_48;
      iVar3 = (int)uStack_40;
      lVar10 = (longlong)(int)uStack_40;
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      puVar6 = (undefined8 *)(param_4 + lVar5);
      *(int *)(lVar5 + 8 + param_4) = (int)uStack_40;
      if (*(int *)(lVar5 + 0xc + param_4) == 0 && (int)uStack_40 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar6,uStack_40 & 0xffffffff);
        if (iVar3 != 0) {
          memcpy((void *)*puVar6,plVar4,lVar10 * 2);
        }
      }
      plVar8 = local_58;
      if (plVar4 != (longlong *)0x0) {
        FUN_1400020a8(plVar4);
        plVar8 = local_58;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar7 = 3;
LAB_1468fd8ab:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1468fdb70 FUN_1468fdb70 body=72 status=ok
// SIG undefined FUN_1468fdb70(void)

undefined8 * FUN_1468fdb70(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149eacb10;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(char *)(param_1 + 4) = (char)param_2[4];
  *(undefined1 *)(param_2 + 4) = 0;
  (**(code **)(*param_2 + 0x48))(param_2);
  return param_1;
}



// FUNCTION 1468fdbc2 FUN_1468fdbc2 body=123 status=ok
// SIG undefined FUN_1468fdbc2(void)

void FUN_1468fdbc2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_48[0] = 0;
  local_38 = param_2;
  FUN_14485c47a(local_48,param_3);
  local_28 = &local_58;
  local_30 = &local_38;
  FUN_1468ffa1a(param_1 + 0x10,local_1c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fdc3e FUN_1468fdc3e body=273 status=ok
// SIG undefined FUN_1468fdc3e(void)

int FUN_1468fdc3e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_2 + 0x240);
  cVar2 = FUN_1468fdd50(plVar1);
  iVar6 = 0;
  if (cVar2 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1468fdd88(param_1 + 0x10,param_2,&local_48);
    FUN_1468ffea8(param_1 + 0x10,param_2);
    uVar4 = (**(code **)(*(longlong *)(param_2 + 0x240) + 0x28))(plVar1);
    if ((longlong)(int)uStack_40 == 0) {
      iVar6 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_40 * 0x18;
      iVar6 = 0;
      lVar8 = local_48;
      do {
        lVar5 = FUN_14479d2ce(lVar8 + 0x10);
        bVar3 = 0;
        if (lVar5 != 0) {
          bVar3 = FUN_1403a718a(lVar8,lVar5,plVar1,1);
        }
        iVar6 = iVar6 + (uint)(lVar5 != 0 & bVar3);
        lVar8 = lVar8 + 0x18;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    (**(code **)(*plVar1 + 0x1a0))(plVar1,uVar4);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fdd50 FUN_1468fdd50 body=56 status=ok
// SIG undefined FUN_1468fdd50(void)

undefined8 FUN_1468fdd50(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((((*(byte *)(param_1 + 5) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x29) & 1) != 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x20))(), lVar1 != 0)) && (*(int *)(lVar1 + 0x98) == 1)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x2d2)) &
            0xffffffffffffff10;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4);
  }
  return 0;
}



// FUNCTION 1468fdd88 FUN_1468fdd88 body=244 status=ok
// SIG undefined FUN_1468fdd88(void)

void FUN_1468fdd88(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if ((int)param_1[9] != 0) {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar8 +
                     (longlong)(int)((int)param_1[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    while (iVar9 = iVar10, iVar9 != -1) {
      lVar11 = *param_1;
      iVar10 = *(int *)(lVar11 + 0x20 + (longlong)iVar9 * 0x28);
      if (*(ulonglong *)(lVar11 + (longlong)iVar9 * 0x28) == param_2) {
        do {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1468ffe14(param_3,iVar2);
          }
          lVar11 = lVar11 + (longlong)iVar9 * 0x28;
          lVar3 = *param_3;
          *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(lVar11 + 0x18);
          uVar4 = *(undefined4 *)(lVar11 + 0xc);
          uVar5 = *(undefined4 *)(lVar11 + 0x10);
          uVar6 = *(undefined4 *)(lVar11 + 0x14);
          puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
          *puVar1 = *(undefined4 *)(lVar11 + 8);
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          do {
            iVar9 = iVar10;
            if (iVar9 == -1) {
              return;
            }
            lVar11 = *param_1;
            iVar10 = *(int *)(lVar11 + 0x20 + (longlong)iVar9 * 0x28);
          } while (*(ulonglong *)(lVar11 + (longlong)iVar9 * 0x28) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1468fde7c FUN_1468fde7c body=98 status=ok
// SIG undefined FUN_1468fde7c(void)

void FUN_1468fde7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = FUN_146900016;
  uVar1 = FUN_144a773aa(&local_20,&DAT_14c75ecd8);
  FUN_1468fdc3e(uVar1,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fdee0 FUN_1468fdee0 body=338 status=ok
// SIG undefined FUN_1468fdee0(void)

ulonglong FUN_1468fdee0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
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
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    uVar8 = 0;
    uVar2 = local_60;
  }
  else {
    local_48 = param_2 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_78 = param_2;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar4 = local_60._4_4_;
      local_60 = uVar2;
      do {
        lVar1 = *local_78;
        lVar5 = (longlong)iVar4;
        iVar4 = *(int *)(lVar1 + 8 + lVar5 * 0x18);
        puVar7 = &DAT_149dfb77a;
        if (iVar4 != 0) {
          puVar7 = *(undefined2 **)(lVar1 + lVar5 * 0x18);
        }
        lVar1 = lVar1 + lVar5 * 0x18;
        iVar6 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar6 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar6,puVar7);
        iVar4 = FUN_1456cf568(param_1,uVar3,lVar1);
        uVar8 = CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar4 != -1);
        uVar2 = local_60;
        if (iVar4 == -1) break;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1468fe034 FUN_1468fe034 body=455 status=ok
// SIG undefined FUN_1468fe034(void)

undefined8 FUN_1468fe034(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  uint local_50;
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_48,0xd);
  if (uVar1 == ((ulonglong)local_48 & 0xffffffff)) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_48);
    FUN_140233b1a(&local_58,&local_48);
    local_50 = local_50 | 4;
    param_4 = param_4 + *(int *)(param_1 + 0x44);
    lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
    plVar2 = *(longlong **)(lVar5 + param_4);
    if (plVar2 != local_58) {
      *(longlong **)(param_4 + lVar5) = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(uint *)(param_4 + 8 + lVar5) = local_50;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_48,6);
    uVar4 = 0;
    if (uVar1 != ((ulonglong)local_48 & 0xffffffff)) goto LAB_1468fe11c;
    local_58 = (longlong *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_58);
    FUN_145715fae(&local_48,&local_58);
    uVar3 = (uint)uStack_40 | 4;
    uStack_40 = uStack_40 | 4;
    param_4 = param_4 + *(int *)(param_1 + 0x44);
    lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
    plVar2 = *(longlong **)(lVar5 + param_4);
    if (plVar2 != local_48) {
      *(longlong **)(param_4 + lVar5) = local_48;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      uVar3 = (uint)uStack_40;
    }
    *(uint *)(param_4 + 8 + lVar5) = uVar3;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  uVar4 = 3;
LAB_1468fe11c:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1468fe1fc thunk_FUN_141160768 body=5 status=ok
// SIG undefined thunk_FUN_141160768(void)

ulonglong thunk_FUN_141160768(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_78 [36];
  int iStack_54;
  longlong lStack_50;
  int iStack_44;
  longlong lStack_40;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(uint *)(param_2 + 1) ^ *(uint *)(param_1 + 1)) & 2) == 0) &&
     (((*(uint *)(param_2 + 1) ^ *(uint *)(param_1 + 1)) & 1) == 0)) {
    plVar6 = (longlong *)*param_1;
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = (longlong *)*param_1;
    pcVar1 = *(code **)(*plVar6 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar9 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar9 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar9 = plVar6 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar1)(plVar6);
    }
    lVar2 = plVar9[1];
    plVar6 = (longlong *)*param_2;
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = (longlong *)*param_2;
    pcVar1 = *(code **)(*plVar6 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar9 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar9 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar9 = plVar6 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar1)(plVar6);
    }
    if ((int)plVar9[1] < 2 == (int)lVar2 < 2) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
      cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
      cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6);
      if ((cVar4 == '\v') == (cVar3 == '\v')) {
        plVar6 = (longlong *)*param_1;
        if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
        }
        FUN_1447a1fc0(plVar6);
        plVar6 = (longlong *)*param_1;
        pcVar1 = *(code **)(*plVar6 + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar9 = plVar6 + 3;
          if (plVar6[5] != 0) {
            plVar9 = (longlong *)(plVar6[5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar9 = plVar6 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar1)(plVar6);
        }
        uVar10 = 0x144828401;
        if ((int)plVar9[1] < 2) goto LAB_1411608bf;
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
        cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
        if (cVar3 == '\v') {
          lStack_40 = 0;
          iStack_44 = -1;
          FUN_1467cf050(param_1,&lStack_40,&iStack_44);
          lStack_50 = 0;
          iStack_54 = -1;
          FUN_1467cf050(param_2,&lStack_50,&iStack_54);
          uVar10 = CONCAT71((int7)((ulonglong)&lStack_40 >> 8),
                            iStack_44 == iStack_54 && lStack_40 == lStack_50);
          goto LAB_1411608bf;
        }
        cVar3 = FUN_14010cee6(param_1,param_2,0);
        if (cVar3 != '\0') goto LAB_1411608bf;
        if ((*(byte *)(param_1 + 1) & 3) != 0) {
          puVar7 = (undefined8 *)FUN_1467cf00e(param_1);
          puVar8 = (undefined8 *)FUN_1467cf00e(param_2);
          iVar5 = *(int *)(puVar7 + 1);
          if (iVar5 == *(int *)(puVar8 + 1)) {
            if (iVar5 < 2) goto LAB_1411608bf;
            iVar5 = wcscmp((wchar_t *)*puVar7,(wchar_t *)*puVar8);
            bVar11 = iVar5 == 0;
          }
          else {
            bVar11 = *(int *)(puVar8 + 1) + iVar5 == 1;
          }
          uVar10 = CONCAT71(0x1448284,bVar11);
          goto LAB_1411608bf;
        }
      }
    }
  }
  uVar10 = 0;
LAB_1411608bf:
  if ((uStack_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe202 FUN_1468fe202 body=405 status=ok
// SIG undefined FUN_1468fe202(void)

void FUN_1468fe202(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong **_Src;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong **local_58;
  uint local_50;
  longlong *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(&local_48);
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_1468fe283;
    }
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      _Src = (longlong **)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
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
  }
  else {
LAB_1468fe283:
    plVar1 = local_48;
    plVar3 = (longlong *)*param_3;
    if (local_48 != plVar3) {
      local_48 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_40 = *(uint *)(param_3 + 1);
  }
  local_50 = param_7;
  local_60 = param_2;
  local_58 = &local_48;
  if ((param_7 >> 0xe & 1) == 0) {
    if ((param_7 >> 0x13 & 1) != 0) {
LAB_1468fe2d0:
      FUN_142829854(&local_60);
      goto LAB_1468fe312;
    }
  }
  else if ((local_40 & 2) == 0) {
    plVar3 = (longlong *)(**(code **)(*local_48 + 0x48))();
    cVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
    if (cVar2 != '\v') goto LAB_1468fe2d0;
  }
  FUN_1467d1a5a(param_2,&local_48,param_7 & 0xffffff01,0);
LAB_1468fe312:
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe3a2 FUN_1468fe3a2 body=65 status=ok
// SIG undefined FUN_1468fe3a2(void)

void FUN_1468fe3a2(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  FUN_1468fc0d4(param_1,param_2);
  return;
}



// FUNCTION 1468fe3e4 FUN_1468fe3e4 body=458 status=ok
// SIG undefined FUN_1468fe3e4(void)

undefined8 FUN_1468fe3e4(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  size_t _MaxCount;
  wchar_t *_Str1;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _MaxCount = (size_t)*(int *)(param_2 + 1);
  if (_MaxCount != 0) {
    _Str1 = (wchar_t *)*param_2;
    iVar2 = wcsncmp(_Str1,L"None",_MaxCount);
    if ((iVar2 != 0) || ((&DAT_149e01fe8)[_MaxCount] != 0)) {
      if ((*_Str1 != L'/') || (_Str1[_MaxCount - 1] == L'\'')) {
        local_58 = *(undefined4 *)param_2;
        uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_50 = *(undefined4 *)(param_2 + 1);
        uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_140069fb6(&local_48);
        *(undefined4 *)param_2 = local_48;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_44;
        *(undefined4 *)(param_2 + 1) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
        _MaxCount = (size_t)*(int *)(param_2 + 1);
        if ((_MaxCount == 0) || (_Str1 = (wchar_t *)*param_2, *_Str1 != L'/')) goto LAB_1468fe51e;
      }
      uVar4 = 0;
      do {
        uVar7 = uVar4;
        if (*(short *)((longlong)_Str1 + uVar4) == 0x2e) break;
        uVar4 = uVar4 + 2;
        uVar7 = _MaxCount * 2;
      } while (_MaxCount * 2 != uVar4);
      uVar7 = uVar7 >> 1;
      if ((int)uVar7 != 0) {
        uVar3 = (int)uVar7 + 1;
        uVar6 = (int)uVar3 >> 0x1f & uVar3;
        iVar2 = uVar3 - uVar6;
        uVar6 = uVar6 + 0x7fffffff;
        iVar8 = (int)_MaxCount;
        if (iVar8 <= iVar2) {
          iVar2 = iVar8;
        }
        uVar3 = iVar8 - iVar2;
        if ((int)uVar6 < iVar8 - iVar2) {
          uVar3 = uVar6;
        }
        if ((int)uVar3 < 1) {
          FUN_1446f82e2(&local_48,uVar7,_Str1,1);
          uVar5 = CONCAT44(uStack_44,local_48);
          *param_1 = uVar5;
          param_1[1] = 0;
        }
        else {
          lVar9 = 0;
          uVar4 = 0;
          do {
            uVar1 = *(ushort *)((longlong)(_Str1 + iVar2) + lVar9);
            uVar10 = 1L << ((byte)uVar1 & 0x3f) & 0x400400000000000;
            if (0x3f < uVar1) {
              uVar10 = 0;
            }
            uVar4 = uVar4 | uVar10;
            lVar9 = lVar9 + 2;
          } while ((ulonglong)uVar3 * 2 != lVar9);
          if (uVar4 != 0) goto LAB_1468fe51e;
          FUN_1446f82e2(&local_48,uVar7,_Str1,1);
          *param_1 = CONCAT44(uStack_44,local_48);
          FUN_1446f82e2(&local_48,(ulonglong)uVar3,_Str1 + iVar2,1);
          uVar5 = CONCAT44(uStack_44,local_48);
          param_1[1] = uVar5;
        }
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        goto LAB_1468fe526;
      }
    }
  }
LAB_1468fe51e:
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
LAB_1468fe526:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe5b0 FUN_1468fe5b0 body=163 status=ok
// SIG undefined FUN_1468fe5b0(void)

undefined4 FUN_1468fe5b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined4 local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  char local_840;
  undefined1 local_838 [2070];
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_858 = local_838;
  local_840 = '\0';
  local_848 = local_22;
  local_850 = local_858;
  FUN_1468fc124(&local_858);
  local_868 = local_858;
  local_860 = (undefined4)((ulonglong)((longlong)local_850 - (longlong)local_858) >> 1);
  uVar1 = FUN_1468fe3e4(param_1);
  if (local_840 == '\x01') {
    FUN_1400020a8(local_858);
  }
  if ((local_20 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe654 FUN_1468fe654 body=280 status=ok
// SIG undefined FUN_1468fe654(void)

void FUN_1468fe654(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((param_3 & 1) == 0) {
    FUN_140ba791a(param_1,&local_30);
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1400020e8(param_2,&DAT_149e01f5a,1);
    FUN_140ba791a(param_1,local_40);
    FUN_1467ad05c(local_40,&local_30);
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe785 FUN_1468fe785 body=269 status=ok
// SIG undefined FUN_1468fe785(void)

wchar_t * FUN_1468fe785(wchar_t *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((param_3 & 1) == 0) {
    FUN_1446f470e(&local_240,param_1,1);
    puVar1 = local_240;
    sVar2 = wcslen(param_1);
    param_1 = param_1 + (int)sVar2;
    local_248 = puVar1;
  }
  else {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_238 = local_240;
    param_1 = (wchar_t *)FUN_1409a0110(param_1,&local_240,1);
    if (param_1 == (wchar_t *)0x0) {
      if (local_228 == '\x01') {
        FUN_1400020a8(local_240);
      }
      param_1 = (wchar_t *)0x0;
      goto LAB_1468fe7d8;
    }
    FUN_1446f82e2(&local_248,(ulonglong)((longlong)local_238 - (longlong)local_240) >> 1,local_240,1
                 );
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  *param_2 = local_248;
LAB_1468fe7d8:
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468fe894 FUN_1468fe894 body=924 status=ok
// SIG undefined FUN_1468fe894(void)

ulonglong FUN_1468fe894(undefined8 *param_1,longlong *param_2,uint param_3,undefined8 param_4,
                       longlong param_5)

{
  wint_t *pwVar1;
  ushort *puVar2;
  ushort uVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  short *psVar9;
  undefined8 uVar10;
  longlong lVar11;
  short *psVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  ushort *puVar16;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  undefined1 *local_298;
  undefined4 local_290;
  undefined2 *local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  psVar4 = (short *)*param_2;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  puVar8 = (ushort *)FUN_1409a0110(psVar4,&local_268,1);
  if (puVar8 == (ushort *)0x0) goto LAB_1468fe9a5;
  *param_2 = (longlong)puVar8;
  local_288 = &DAT_149e01fe8;
  local_280 = 4;
  cVar5 = FUN_14171bf3f(&local_268);
  if (cVar5 == '\0') {
    if (*puVar8 == 0x27) {
      *param_2 = (longlong)(puVar8 + 1);
      local_260 = local_268;
      psVar9 = (short *)FUN_1409a0110(puVar8 + 1,&local_268,1);
      psVar12 = psVar9;
      if (psVar9 == (short *)0x0) {
        psVar12 = psVar4;
      }
      *param_2 = (longlong)psVar12;
      if (psVar9 != (short *)0x0) {
        *param_2 = (longlong)(psVar9 + 1);
        if (*psVar9 != 0x27) goto LAB_1468fe9a2;
        goto LAB_1468febca;
      }
    }
    else {
      if (*puVar8 != 0x28) {
LAB_1468febca:
        local_298 = local_268;
        local_290 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
        FUN_1468fe3e4(param_1);
        goto LAB_1468fe92e;
      }
      puVar16 = puVar8 + 1;
      *param_2 = (longlong)puVar16;
      if (puVar8[1] == 0x29) {
        *param_2 = (longlong)(puVar8 + 2);
        goto LAB_1468fe928;
      }
      *param_2 = (longlong)puVar8;
      local_270 = 0xffffffff;
      local_278 = 0xffffffff;
      if (*puVar8 == 0x28) {
        if (*puVar16 != 0x29) {
          do {
            local_2a8 = param_5;
            lVar11 = FUN_1428299a0(puVar16,&local_270,&local_278,param_3 | 1);
            puVar16 = (ushort *)(lVar11 + -2);
            do {
              pwVar1 = puVar16 + 1;
              puVar16 = puVar16 + 1;
              iVar6 = iswspace(*pwVar1);
            } while (iVar6 != 0);
            iVar6 = 0;
            while( true ) {
              uVar3 = *puVar16;
              if ((uVar3 < 0xe) && ((0x2401U >> (uVar3 & 0x1f) & 1) != 0)) break;
              if ((iVar6 < 1) && (uVar3 == 0x29 || uVar3 == 0x2c)) goto LAB_1468feb59;
              puVar16 = puVar16 + -1;
              do {
                puVar2 = puVar16 + 1;
                puVar16 = puVar16 + 1;
                iVar7 = iswspace(*puVar2);
              } while (iVar7 != 0);
              uVar3 = *puVar16;
              if (uVar3 == 0x22) {
LAB_1468feb1e:
                while( true ) {
                  uVar3 = puVar16[1];
                  puVar16 = puVar16 + 1;
                  if (0xc < uVar3) break;
                  if ((uVar3 == 0) || (uVar3 == 10)) goto LAB_1468febac;
                }
                if (uVar3 != 0x22) goto code_r0x0001468feb3d;
                goto LAB_1468feb47;
              }
              if (uVar3 == 0x28) {
                iVar6 = iVar6 + 1;
              }
              else if (uVar3 == 0x29) {
                if (iVar6 < 1) {
                  pwVar14 = L"%sImportText (TopLevelAssetPath): Too many closing parenthesis in: %s"
                  ;
                  goto LAB_1468fea75;
                }
                iVar6 = iVar6 + -1;
              }
LAB_1468feb47:
              puVar16 = puVar16 + 1;
            }
            if (0 < iVar6) {
              pwVar14 = L"%sImportText(TopLevelAssetPath): Not enough closing parenthesis in: %s";
              goto LAB_1468fea75;
            }
LAB_1468feb59:
            if (uVar3 == 0x2c) {
              puVar16 = puVar16 + 1;
            }
            else if (uVar3 != 0x29) {
              pwVar14 = L"%sImportText (TopLevelAssetPath): Missing closing parenthesis: %s";
              goto LAB_1468fea75;
            }
            puVar16 = puVar16 + -1;
            do {
              puVar2 = puVar16 + 1;
              puVar16 = puVar16 + 1;
              iVar6 = iswspace(*puVar2);
            } while (iVar6 != 0);
          } while (*puVar16 != 0x29);
        }
        puVar16 = puVar16 + 1;
        if (puVar16 != (ushort *)0x0) {
          local_2a8 = *param_2;
          FUN_146816218(param_5,3,
                        L"Struct format for FTopLevelAssetPath is deprecated. Imported struct: %.*s"
                        ,(longlong)puVar16 - local_2a8 >> 1);
          *param_2 = (longlong)puVar16;
          uVar13 = 0;
          if ((int)local_278 != -1) {
            uVar13 = local_278;
          }
          uVar10 = 0;
          if ((int)local_270 != -1) {
            uVar10 = local_270;
          }
          *param_1 = uVar10;
          param_1[1] = uVar13;
          goto LAB_1468fe92e;
        }
      }
      else {
        pwVar14 = L"%sImportText (TopLevelAssetPath): Missing opening parenthesis: %s";
LAB_1468fea75:
        FUN_140047918(param_5,pwVar14,&DAT_149dfb77a,puVar8);
      }
LAB_1468fe9a2:
      *param_2 = (longlong)psVar4;
    }
LAB_1468fe9a5:
    uVar15 = 0;
  }
  else {
LAB_1468fe928:
    *param_1 = 0;
    param_1[1] = 0;
LAB_1468fe92e:
    uVar15 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
code_r0x0001468feb3d:
  if (uVar3 == 0xd) {
LAB_1468febac:
    pwVar14 = L"%sImportText (TopLevelAssetPath): Bad quoted string at: %s";
    puVar8 = puVar16;
    goto LAB_1468fea75;
  }
  goto LAB_1468feb1e;
}



// FUNCTION 1468fec32 FUN_1468fec32 body=358 status=ok
// SIG undefined FUN_1468fec32(void)

ulonglong FUN_1468fec32(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined8 uStack_890;
  undefined1 *local_880;
  undefined4 local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_868,6);
  if (uVar1 == ((ulonglong)local_868 & 0xffffffff)) {
    ppuVar4 = &local_870;
    local_870 = (undefined1 *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),ppuVar4);
    local_898 = local_870;
    local_868 = local_848;
    local_850 = '\0';
    local_858 = local_32;
    local_860 = local_868;
    FUN_14005eb5c(&local_898,&local_868);
    local_880 = local_868;
    local_878 = (undefined4)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
    FUN_1468fe3e4(param_1);
    puVar3 = local_868;
    if (local_850 == '\x01') {
LAB_1468fed8b:
      FUN_1400020a8(puVar3);
    }
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_868,0xd);
    ppuVar4 = (undefined1 **)0x0;
    if (uVar1 != ((ulonglong)local_868 & 0xffffffff)) goto LAB_1468fec9c;
    local_898 = (undefined1 *)0x0;
    uStack_890 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_898);
    local_868 = local_898;
    iVar2 = (int)uStack_890 + -1;
    if ((int)uStack_890 == 0) {
      iVar2 = 0;
    }
    local_860 = (undefined1 *)CONCAT44(local_860._4_4_,iVar2);
    FUN_1468fe3e4(param_1);
    puVar3 = local_898;
    if (local_898 != (undefined1 *)0x0) goto LAB_1468fed8b;
  }
  ppuVar4 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar4 >> 8),1);
LAB_1468fec9c:
  if ((local_30 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar4 & 0xffffffff;
}



// FUNCTION 1468fed9a FUN_1468fed9a body=204 status=ok
// SIG undefined FUN_1468fed9a(void)

void FUN_1468fed9a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  uVar7 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)((longlong)param_2 + 0xc) < (int)uVar1) {
      FUN_14690032e(param_2);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x708);
    }
    if (0 < (int)uVar7) {
      uVar8 = uVar7 + 1;
      lVar9 = uVar7 * 0xe0 + -0xd8;
      do {
        lVar5 = *(longlong *)(param_1 + 0x700);
        if (*(longlong *)(param_1 + 0x700) == 0) {
          lVar5 = param_1;
        }
        lVar3 = *(longlong *)(lVar5 + 0xc0 + lVar9);
        lVar6 = lVar5 + lVar9;
        if (lVar3 != 0) {
          lVar6 = lVar3;
        }
        uVar4 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar5 + 0xd0 + lVar9) * 0x18);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14000e500(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -0xe0;
      } while (1 < uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar7);
}



// FUNCTION 1468fee68 FUN_1468fee68 body=176 status=ok
// SIG undefined FUN_1468fee68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1468fee68(undefined8 *param_1)

{
  *param_1 = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  *(undefined4 *)(param_1 + 0x16) = 1000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  _DAT_14c872c28 = &DAT_14c9647c8;
  return param_1;
}



// FUNCTION 1468fef18 FUN_1468fef18 body=97 status=ok
// SIG undefined FUN_1468fef18(void)

void FUN_1468fef18(int *param_1)

{
  if ((DAT_14c872a72 == '\0') && ((0 < *param_1 || ((0 < param_1[2] && (0 < param_1[9])))))) {
    FUN_14689c233();
  }
  param_1[2] = 0;
  DAT_14c963f04 = 1;
  param_1[0] = 0;
  param_1[1] = -1;
  if ((char)param_1[3] == '\x01') {
    FUN_142829d0a(param_1);
    return;
  }
  return;
}



// FUNCTION 1468fef7a FUN_1468fef7a body=316 status=ok
// SIG undefined FUN_1468fef7a(void)

void FUN_1468fef7a(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined1 auStack_278 [40];
  undefined8 local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined8 local_228;
  undefined2 local_220 [252];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_248 = &local_228;
  local_230 = '\0';
  local_238 = &local_28;
  if (param_1 == 0) {
    local_240 = (undefined8 *)local_220;
    local_228 = 0x65006e006f004e;
  }
  else {
    local_240 = local_248;
    if ((param_4 & 1) == 0) {
      local_250 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
      FUN_14005eb5c(&local_250,&local_248);
    }
    else {
      FUN_144750bde(*(undefined8 *)(param_1 + 0x10),0,&local_248);
    }
    if (local_238 <= (ulonglong *)((longlong)local_240 + 2)) {
      FUN_140213274(&local_248,1);
    }
    *(undefined2 *)local_240 = 0x20;
    local_240 = (undefined8 *)((longlong)local_240 + 2);
    FUN_144750bde(param_1,param_2,&local_248);
  }
  FUN_1400020e8(param_3,local_248,(ulonglong)((longlong)local_240 - (longlong)local_248) >> 1);
  if (local_230 == '\x01') {
    FUN_1400020a8(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ff0b8 FUN_1468ff0b8 body=116 status=ok
// SIG undefined FUN_1468ff0b8(void)

undefined8 * FUN_1468ff0b8(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1;
  if (param_3 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar3 == 0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
    return param_2;
  }
LAB_1468ff0e8:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001468ff0f7;
  goto LAB_1468ff108;
code_r0x0001468ff0f7:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1468ff108:
    if (lVar1 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_1401031ac(lVar3,lVar1,param_2);
      return param_2;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1468ff0e8;
}



// FUNCTION 1468ff12c caseD_e body=97 status=ok
// SIG undefined caseD_e(void)

undefined8 switchD_143c3d4dc::caseD_e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400bbfc4(local_38,param_1);
  FUN_1427b7b10(param_2,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ff18e FUN_1468ff18e body=74 status=ok
// SIG undefined FUN_1468ff18e(void)

bool FUN_1468ff18e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == param_1) {
    return false;
  }
LAB_1468ff19c:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001468ff1ab;
  goto LAB_1468ff1bc;
code_r0x0001468ff1ab:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1468ff1bc:
    if (lVar1 != 0) {
      return lVar1 == param_2;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1468ff19c;
}



// FUNCTION 1468ff1d8 FUN_1468ff1d8 body=29 status=ok
// SIG undefined FUN_1468ff1d8(void)

bool FUN_1468ff1d8(longlong param_1,longlong param_2)

{
  do {
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == param_2) break;
  } while (param_1 != 0);
  return param_2 == 0 || param_1 != 0;
}



// FUNCTION 1468ff1f6 FUN_1468ff1f6 body=74 status=ok
// SIG undefined FUN_1468ff1f6(void)

bool FUN_1468ff1f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == param_1) {
    return false;
  }
LAB_1468ff204:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001468ff213;
  goto LAB_1468ff224;
code_r0x0001468ff213:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1468ff224:
    if (lVar1 != 0) {
      return lVar1 == param_2;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1468ff204;
}



// FUNCTION 1468ff240 FUN_1468ff240 body=122 status=ok
// SIG undefined FUN_1468ff240(void)

longlong FUN_1468ff240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x1e0)) {
        lVar1 = *(longlong *)(lVar2 + 0x1d8);
        lVar4 = 0;
        do {
          if ((*(char *)(lVar1 + 0xc + lVar4) == '\0') && (param_2 != 0)) {
            if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + lVar4) + 0x38)) &&
               ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + lVar4) + 0x30) +
                  (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30 &&
                (lVar3 = (longlong)*(int *)(lVar1 + 8 + lVar4), lVar3 != 0)))) {
              return param_1 + lVar3;
            }
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)*(int *)(lVar2 + 0x1e0) * 0x10 != lVar4);
      }
      lVar2 = *(longlong *)(lVar2 + 0x40);
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1468ff2ba FUN_1468ff2ba body=41 status=ok
// SIG undefined FUN_1468ff2ba(void)

void FUN_1468ff2ba(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14065579a();
  if (lVar1 != 0) {
    FUN_140d63096(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 1468ff2e4 FUN_1468ff2e4 body=403 status=ok
// SIG undefined FUN_1468ff2e4(void)

void FUN_1468ff2e4(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  lVar8 = *param_1;
  lVar11 = ~(longlong)iVar2 * 0x50;
  puVar9 = *(uint **)(lVar8 + 8 + lVar11);
  puVar6 = *(uint **)(lVar8 + 0x38 + lVar11);
  *(undefined8 *)(lVar8 + 0x38 + lVar11) = 0;
  iVar3 = *(int *)(lVar8 + 0x40 + lVar11);
  *(undefined4 *)(lVar8 + 0x40 + lVar11) = 0;
  *(undefined4 *)(lVar8 + 0x44 + lVar11) = 0;
  lVar8 = (longlong)*(int *)(lVar8 + 0x10 + lVar11);
  if (lVar8 != 0) {
    puVar1 = puVar9 + lVar8;
    do {
      lVar8 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*puVar9 >> 0x10) * 8) +
              (ulonglong)(*puVar9 & 0xffff) * 0x18;
      *(undefined4 *)(lVar8 + 0xc) = 0;
      uVar5 = DAT_14c75ec98;
      uVar12 = ~DAT_14c75ec98;
      do {
        uVar4 = *(uint *)(lVar8 + 8);
        uVar7 = DAT_14c75ec9c;
        if ((uVar4 & uVar5) == 0) break;
        LOCK();
        bVar13 = uVar4 == *(uint *)(lVar8 + 8);
        if (bVar13) {
          *(uint *)(lVar8 + 8) = uVar4 & uVar12;
        }
        UNLOCK();
        uVar7 = DAT_14c75ec9c;
      } while (!bVar13);
      do {
        uVar5 = *(uint *)(lVar8 + 8);
        if ((uVar7 & ~uVar5) == 0) break;
        LOCK();
        bVar13 = uVar5 == *(uint *)(lVar8 + 8);
        if (bVar13) {
          *(uint *)(lVar8 + 8) = uVar5 | uVar7;
        }
        UNLOCK();
      } while (!bVar13);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  (**(code **)(*(longlong *)*param_2 + 0x38))();
  FUN_140d631ae(param_1,~(longlong)iVar2 & 0xffffffff);
  if (iVar3 != 0) {
    lVar8 = DAT_14c9647c8;
    puVar9 = puVar6;
    do {
      uVar5 = DAT_14c75ec98;
      uVar10 = (ulonglong)(*puVar9 & 0xffff);
      lVar11 = *(longlong *)(lVar8 + (ulonglong)(*puVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + uVar10 * 0x18) >> 0x18 & 1) != 0) {
        lVar11 = lVar11 + uVar10 * 0x18;
        uVar12 = ~DAT_14c75ec98;
        do {
          uVar4 = *(uint *)(lVar11 + 8);
          uVar7 = DAT_14c75ec9c;
          if ((uVar4 & uVar5) == 0) break;
          LOCK();
          bVar13 = uVar4 == *(uint *)(lVar11 + 8);
          if (bVar13) {
            *(uint *)(lVar11 + 8) = uVar4 & uVar12;
          }
          UNLOCK();
          uVar7 = DAT_14c75ec9c;
        } while (!bVar13);
        do {
          uVar5 = *(uint *)(lVar11 + 8);
          if ((uVar7 & ~uVar5) == 0) break;
          LOCK();
          bVar13 = uVar5 == *(uint *)(lVar11 + 8);
          if (bVar13) {
            *(uint *)(lVar11 + 8) = uVar5 | uVar7;
          }
          UNLOCK();
        } while (!bVar13);
        FUN_1468ff2e4(param_1);
        lVar8 = DAT_14c9647c8;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar6 + iVar3);
  }
  if (puVar6 == (uint *)0x0) {
    return;
  }
  FUN_1400020a8(puVar6);
  return;
}



// FUNCTION 1468ff477 FUN_1468ff477 body=148 status=ok
// SIG undefined FUN_1468ff477(void)

void FUN_1468ff477(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  if ((((DAT_14c75b114 == '\0') && (DAT_14c75ece4 != 0)) && (DAT_14c75ece0 != 0)) &&
     (((DAT_14c9647c4 & 1) == 0 && (iVar1 = *(int *)(param_1 + 0x20), (longlong)iVar1 != 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + 0x40 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x20))();
        if (cVar5 != '\0') {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447f76d2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 0x40 + lVar6);
        }
      }
      lVar6 = lVar6 + 0x68;
    } while ((longlong)iVar1 * 0x68 - lVar6 != 0);
  }
  return;
}



// FUNCTION 1468ff50c FUN_1468ff50c body=38 status=ok
// SIG undefined FUN_1468ff50c(void)

undefined8 FUN_1468ff50c(undefined8 param_1,int param_2)

{
  FUN_1468fc9de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff536 FUN_1468ff536 body=48 status=ok
// SIG undefined FUN_1468ff536(void)

undefined8 * FUN_1468ff536(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eacb10;
  FUN_144aa17a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff566 FUN_1468ff566 body=38 status=ok
// SIG undefined FUN_1468ff566(void)

undefined8 FUN_1468ff566(undefined8 param_1,int param_2)

{
  FUN_1469009da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff58c FUN_1468ff58c body=38 status=ok
// SIG undefined FUN_1468ff58c(void)

undefined8 FUN_1468ff58c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff5b2 FUN_1468ff5b2 body=38 status=ok
// SIG undefined FUN_1468ff5b2(void)

undefined8 FUN_1468ff5b2(undefined8 param_1,int param_2)

{
  FUN_144b00a26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff5d8 FUN_1468ff5d8 body=38 status=ok
// SIG undefined FUN_1468ff5d8(void)

undefined8 FUN_1468ff5d8(undefined8 param_1,int param_2)

{
  FUN_14041e0ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff5fe FUN_1468ff5fe body=29 status=ok
// SIG undefined FUN_1468ff5fe(void)

undefined8 FUN_1468ff5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff61c FUN_1468ff61c body=29 status=ok
// SIG undefined FUN_1468ff61c(void)

undefined8 FUN_1468ff61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff63a FUN_1468ff63a body=29 status=ok
// SIG undefined FUN_1468ff63a(void)

undefined8 FUN_1468ff63a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ff658 FUN_1468ff658 body=147 status=ok
// SIG undefined FUN_1468ff658(void)

void FUN_1468ff658(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x700);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xe0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x700,0,param_3,0xe0);
    memmove(*(void **)((longlong)param_1 + 0x700),param_1,(longlong)param_2 * 0xe0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x700,param_2,param_3,0xe0);
  return;
}



// FUNCTION 1468ff6ec FUN_1468ff6ec body=70 status=ok
// SIG undefined FUN_1468ff6ec(void)

void FUN_1468ff6ec(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_1410e5bda(param_2,param_1 + 0x28);
  FUN_1457de550(param_2,param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001468ff72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1468ff732 FUN_1468ff732 body=132 status=ok
// SIG undefined FUN_1468ff732(void)

void FUN_1468ff732(longlong param_1,int param_2)

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



// FUNCTION 1468ff7b8 FUN_1468ff7b8 body=52 status=ok
// SIG undefined FUN_1468ff7b8(void)

void FUN_1468ff7b8(void)

{
  if (1 < DAT_14c963dd0) {
    FUN_146174fa6();
    DAT_14c963dd0 = 1;
    FUN_140a29b1a();
    return;
  }
  FUN_1468ff7ec();
  FUN_146174fa6();
  return;
}



// FUNCTION 1468ff7ec FUN_1468ff7ec body=368 status=ok
// SIG undefined FUN_1468ff7ec(void)

void FUN_1468ff7ec(void)

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
  puVar5 = &DAT_14c963dc0;
  if (DAT_14c963dc8 != (undefined *)0x0) {
    puVar5 = DAT_14c963dc8;
  }
  iVar4 = DAT_14c963dd0 + 3;
  if (-1 < DAT_14c963dd0) {
    iVar4 = DAT_14c963dd0;
  }
  if (DAT_14c963d90 - DAT_14c963dbc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c963d98;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c963db0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c963db0;
    }
    local_78 = &DAT_14c963d88;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c963d98)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar2 * 0x60) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c963d88 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c963d98 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c963dd0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14c963dd0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ff95e FUN_1468ff95e body=114 status=ok
// SIG undefined FUN_1468ff95e(void)

void FUN_1468ff95e(longlong *param_1,int param_2)

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



// FUNCTION 1468ff9d0 FUN_1468ff9d0 body=74 status=ok
// SIG undefined FUN_1468ff9d0(void)

undefined8 * FUN_1468ff9d0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eae1b8;
  puVar1 = TlsGetValue(DAT_14c75ecd8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ecd8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ffa1a FUN_1468ffa1a body=311 status=ok
// SIG undefined FUN_1468ffa1a(void)

undefined4 * FUN_1468ffa1a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1468ffb52(param_1,local_38);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_30 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar3;
  *(undefined4 *)(local_30 + 2) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar5;
  local_30[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar9 = 1;
  if (3 < uVar8) {
    uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
    uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = *(int *)(param_1 + 0x48) - 1U & (uVar8 >> 0x10 ^ uVar8);
    *(uint *)((longlong)local_30 + 0x24) = uVar8;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar9;
    FUN_1468ffc38(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ffb52 FUN_1468ffb52 body=230 status=ok
// SIG undefined FUN_1468ffb52(void)

int * FUN_1468ffb52(longlong *param_1,int *param_2)

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



// FUNCTION 1468ffc38 FUN_1468ffc38 body=474 status=ok
// SIG undefined FUN_1468ffc38(void)

void FUN_1468ffc38(longlong *param_1)

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



// FUNCTION 1468ffe14 FUN_1468ffe14 body=147 status=ok
// SIG undefined FUN_1468ffe14(void)

void FUN_1468ffe14(longlong param_1,int param_2)

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



// FUNCTION 1468ffea8 FUN_1468ffea8 body=164 status=ok
// SIG undefined FUN_1468ffea8(void)

void FUN_1468ffea8(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1468fff4c(param_1);
        }
        else {
          piVar5 = (int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
        }
        iVar1 = *piVar5;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1468fff4c FUN_1468fff4c body=201 status=ok
// SIG undefined FUN_1468fff4c(void)

void FUN_1468fff4c(longlong *param_1,int param_2)

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
  lVar1 = lVar3 + (longlong)param_2 * 0x28;
  lVar9 = (longlong)*(int *)(lVar1 + 0x24);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x20 + lVar9 * 0x28);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x28 + 0x20);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x20);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146900016 FUN_146900016 body=91 status=ok
// SIG undefined FUN_146900016(void)

undefined8 * FUN_146900016(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_149eacb68;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  return puVar2;
}



// FUNCTION 1469000c2 FUN_1469000c2 body=134 status=ok
// SIG undefined FUN_1469000c2(void)

undefined8
FUN_1469000c2(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_38);
    FUN_1468fe654(param_3,param_2,param_6);
    (**(code **)(*param_1 + 8))(param_1,local_38);
  }
  else {
    FUN_1468fe654(param_3,param_2,param_6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690014a FUN_14690014a body=31 status=ok
// SIG undefined FUN_14690014a(void)

void FUN_14690014a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1468fe894(param_3,param_2,param_4,param_4,param_6);
  return;
}



// FUNCTION 146900182 FUN_146900182 body=192 status=ok
// SIG undefined FUN_146900182(void)

uint FUN_146900182(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar4 * 0x40 + (uVar4 >> 2) +
           0x9e3779b9 ^ uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469002a6 FUN_1469002a6 body=135 status=ok
// SIG undefined FUN_1469002a6(void)

void FUN_1469002a6(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  if (param_2 <= (int)uVar1) {
    iVar6 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x70c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xe0,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 5;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x70c) = iVar6;
    FUN_1468ff658(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14690032e FUN_14690032e body=96 status=ok
// SIG undefined FUN_14690032e(void)

void FUN_14690032e(longlong param_1,int param_2)

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



// FUNCTION 14690038e FUN_14690038e body=62 status=ok
// SIG undefined FUN_14690038e(void)

undefined8 * FUN_14690038e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eae330;
  FUN_145a1c1b6();
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690040c FUN_14690040c body=131 status=ok
// SIG undefined FUN_14690040c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14690040c(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  
  iVar2 = param_1 + 0x1fff;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  if (iVar2 >> 0xd < DAT_14c963f18) {
    lVar3 = (longlong)(iVar2 >> 0xd) * 0x10;
    lVar1 = *(longlong *)(DAT_14c963f10 + 8 + lVar3);
    if ((lVar1 != 0) && (*(int *)(lVar1 + (longlong)(param_1 % 0x2000) * 8) != -1)) {
      piVar4 = (int *)(DAT_14c963f10 + lVar3);
      *(undefined8 *)(lVar1 + (longlong)(param_1 % 0x2000) * 8) = 0xffffffffffffffff;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        if (*(longlong *)(piVar4 + 2) != 0) {
          FUN_1400020a8();
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
        _DAT_14c963f28 = _DAT_14c963f28 + -0x10000;
      }
      DAT_14c963f20 = DAT_14c963f20 + -1;
    }
  }
  return;
}



// FUNCTION 146900490 FUN_146900490 body=31 status=ok
// SIG undefined FUN_146900490(void)

undefined8 FUN_146900490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469004c6 FUN_1469004c6 body=93 status=ok
// SIG undefined FUN_1469004c6(void)

void FUN_1469004c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eae460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146900524 FUN_146900524 body=93 status=ok
// SIG undefined FUN_146900524(void)

void FUN_146900524(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eae460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146900582 FUN_146900582 body=126 status=ok
// SIG undefined FUN_146900582(void)

void FUN_146900582(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149eae4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eae460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469005f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146900610 FUN_146900610 body=175 status=ok
// SIG undefined FUN_146900610(void)

void FUN_146900610(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_146900699;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146900699:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1469006c0 FUN_1469006c0 body=132 status=ok
// SIG undefined FUN_1469006c0(void)

void FUN_1469006c0(longlong param_1,int param_2)

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



// FUNCTION 146900746 FUN_146900746 body=200 status=ok
// SIG undefined FUN_146900746(void)

void FUN_146900746(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

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
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1469007d6;
          goto LAB_1469007e5;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1469007d6:
    FUN_14109be94(param_1,0);
  }
LAB_1469007e5:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469007f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14690080e FUN_14690080e body=31 status=ok
// SIG undefined FUN_14690080e(void)

undefined8 FUN_14690080e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146900840 FUN_146900840 body=93 status=ok
// SIG undefined FUN_146900840(void)

void FUN_146900840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eae540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14690089e FUN_14690089e body=93 status=ok
// SIG undefined FUN_14690089e(void)

void FUN_14690089e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eae540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1469008fc FUN_1469008fc body=126 status=ok
// SIG undefined FUN_1469008fc(void)

void FUN_1469008fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149eae5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eae540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014690096b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146900984 FUN_146900984 body=20 status=ok
// SIG undefined FUN_146900984(void)

undefined8 FUN_146900984(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14690099a FUN_14690099a body=64 status=ok
// SIG undefined FUN_14690099a(void)

undefined8 * FUN_14690099a(undefined8 *param_1,int param_2)

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



// FUNCTION 1469009da FUN_1469009da body=107 status=ok
// SIG undefined FUN_1469009da(void)

void FUN_1469009da(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eacb68;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146900a46(param_1 + 2);
  *param_1 = &PTR_FUN_149eae1b8;
  puVar1 = TlsGetValue(DAT_14c75ecd8);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146900a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c75ecd8,(LPVOID)0x0);
  return;
}



// FUNCTION 146900a46 FUN_146900a46 body=52 status=ok
// SIG undefined FUN_146900a46(void)

void FUN_146900a46(longlong *param_1)

{
  FUN_146900a7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146900a7a FUN_146900a7a body=89 status=ok
// SIG undefined FUN_146900a7a(void)

void FUN_146900a7a(longlong param_1)

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



// FUNCTION 146900ad3 FUN_146900ad3 body=176 status=ok
// SIG undefined FUN_146900ad3(void)

undefined1 FUN_146900ad3(void)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96413c) {
    FUN_144b3d300(&DAT_14c96413c);
    if (DAT_14c96413c == -1) {
      local_28 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bAllowNativeComponentClassOverrides",&local_11);
      DAT_14c964138 = local_11;
      _Init_thread_footer(&DAT_14c96413c);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c964138;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


