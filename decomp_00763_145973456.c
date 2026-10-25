// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145973456 FUN_145973456 body=66 status=ok
// SIG undefined FUN_145973456(void)

void FUN_145973456(longlong param_1)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 0x48);
  if ((*(longlong *)(param_1 + 0x30) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50));
    return;
  }
  return;
}



// FUNCTION 145973498 FUN_145973498 body=312 status=ok
// SIG undefined FUN_145973498(void)

undefined4 * FUN_145973498(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459736a8(param_1,local_48);
  FUN_1459735d2(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145973636(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1413fe350(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459735d2 FUN_1459735d2 body=100 status=ok
// SIG undefined FUN_1459735d2(void)

undefined8 * FUN_1459735d2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 145973636 FUN_145973636 body=114 status=ok
// SIG undefined FUN_145973636(void)

undefined8 FUN_145973636(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1413fe28c(), iVar6 != -1)) {
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
    FUN_145c981cc(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1459736a8 FUN_1459736a8 body=230 status=ok
// SIG undefined FUN_1459736a8(void)

int * FUN_1459736a8(longlong *param_1,int *param_2)

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



// FUNCTION 14597378e FUN_14597378e body=326 status=ok
// SIG undefined FUN_14597378e(void)

undefined8
FUN_14597378e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9adc20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_145973861;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_145973861:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459738d6 FUN_1459738d6 body=182 status=ok
// SIG undefined FUN_1459738d6(void)

undefined8 * FUN_1459738d6(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_144a83f76();
  puVar1[1] = &DAT_14c952218;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e6f430;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14597398e(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597398e FUN_14597398e body=128 status=ok
// SIG undefined FUN_14597398e(void)

undefined8 *
FUN_14597398e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_145973a10(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6f430;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973a10 FUN_145973a10 body=128 status=ok
// SIG undefined FUN_145973a10(void)

undefined8 *
FUN_145973a10(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_145973a92(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9e640;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973a92 FUN_145973a92 body=128 status=ok
// SIG undefined FUN_145973a92(void)

undefined8 *
FUN_145973a92(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_145973b14(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9e8b0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973b14 FUN_145973b14 body=135 status=ok
// SIG undefined FUN_145973b14(void)

undefined8 *
FUN_145973b14(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  *param_1 = &PTR_LAB_149e9eb20;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973b9c FUN_145973b9c body=311 status=ok
// SIG undefined FUN_145973b9c(void)

undefined4 * FUN_145973b9c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_145973d54(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145973cd4(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      FUN_1413ff1ca(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973cd4 FUN_145973cd4 body=127 status=ok
// SIG undefined FUN_145973cd4(void)

undefined8 FUN_145973cd4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147d58bbc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145973d54 FUN_145973d54 body=239 status=ok
// SIG undefined FUN_145973d54(void)

int * FUN_145973d54(longlong *param_1,int *param_2)

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



// FUNCTION 145973e44 FUN_145973e44 body=100 status=ok
// SIG undefined FUN_145973e44(void)

void FUN_145973e44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_145973f1a(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_145775343(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145973ea8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145973ea8 FUN_145973ea8 body=38 status=ok
// SIG undefined FUN_145973ea8(void)

void FUN_145973ea8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145973ece(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145973ece FUN_145973ece body=76 status=ok
// SIG undefined FUN_145973ece(void)

void FUN_145973ece(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145973f1a FUN_145973f1a body=101 status=ok
// SIG undefined FUN_145973f1a(void)

void FUN_145973f1a(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  FUN_145973f80(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145973f80 FUN_145973f80 body=60 status=ok
// SIG undefined FUN_145973f80(void)

void FUN_145973f80(longlong *param_1)

{
  FUN_1413ff3b2();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145973fc8 FUN_145973fc8 body=39 status=ok
// SIG undefined FUN_145973fc8(void)

undefined8 * FUN_145973fc8(undefined8 *param_1)

{
  FUN_145973ff0();
  *param_1 = &PTR_FUN_14ad6b9f0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 145973ff0 FUN_145973ff0 body=56 status=ok
// SIG undefined FUN_145973ff0(void)

undefined8 * FUN_145973ff0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad5e4b0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a78564(param_1 + 0xb);
  return param_1;
}



// FUNCTION 145974036 FUN_145974036 body=40 status=ok
// SIG undefined FUN_145974036(void)

undefined8 FUN_145974036(undefined8 param_1,int param_2)

{
  FUN_14597405e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597405e FUN_14597405e body=85 status=ok
// SIG undefined FUN_14597405e(void)

void FUN_14597405e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e6810;
  FUN_1459740b3(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459740b3 FUN_1459740b3 body=73 status=ok
// SIG undefined FUN_1459740b3(void)

void FUN_1459740b3(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459740fc FUN_1459740fc body=55 status=ok
// SIG undefined FUN_1459740fc(void)

void FUN_1459740fc(longlong *param_1)

{
  FUN_145974134(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145974134 FUN_145974134 body=346 status=ok
// SIG undefined FUN_145974134(void)

void FUN_145974134(longlong *param_1,int param_2)

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
      FUN_145974290((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
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



// FUNCTION 145974290 FUN_145974290 body=74 status=ok
// SIG undefined FUN_145974290(void)

void FUN_145974290(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459742da FUN_1459742da body=129 status=ok
// SIG undefined FUN_1459742da(void)

void FUN_1459742da(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_1413ff406();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
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



// FUNCTION 14597435c FUN_14597435c body=306 status=ok
// SIG undefined FUN_14597435c(void)

void FUN_14597435c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar1 = FUN_145974490(param_2);
    local_48 = FUN_140206afe;
    local_40 = 0;
    FUN_1459745b0(uVar1,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x6c0) = local_38;
    uVar1 = FUN_145974498(param_2);
    local_48 = (code *)&LAB_14048c1ee;
    local_40 = 0;
    FUN_1459744b0(uVar1,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x6c8) = local_38;
    uVar1 = FUN_1459744a0(param_2);
    local_48 = FUN_140206ad2;
    local_40 = 0;
    FUN_1459745b0(uVar1,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x6d0) = local_38;
    uVar1 = FUN_1459744a8(param_2);
    local_48 = (code *)&LAB_14048c1fc;
    local_40 = 0;
    FUN_1459744b0(uVar1,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x6d8) = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145974490 FUN_145974490 body=8 status=ok
// SIG undefined FUN_145974490(void)

longlong FUN_145974490(longlong param_1)

{
  return param_1 + 0x4c8;
}



// FUNCTION 145974498 FUN_145974498 body=8 status=ok
// SIG undefined FUN_145974498(void)

longlong FUN_145974498(longlong param_1)

{
  return param_1 + 0x4e0;
}



// FUNCTION 1459744a0 FUN_1459744a0 body=8 status=ok
// SIG undefined FUN_1459744a0(void)

longlong FUN_1459744a0(longlong param_1)

{
  return param_1 + 0x510;
}



// FUNCTION 1459744a8 FUN_1459744a8 body=8 status=ok
// SIG undefined FUN_1459744a8(void)

longlong FUN_1459744a8(longlong param_1)

{
  return param_1 + 0x528;
}



// FUNCTION 1459744b0 FUN_1459744b0 body=254 status=ok
// SIG undefined FUN_1459744b0(void)

undefined8
FUN_1459744b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a9eeab0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459745b0 FUN_1459745b0 body=254 status=ok
// SIG undefined FUN_1459745b0(void)

undefined8
FUN_1459745b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e01f80;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a9eec70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ca2242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459746b0 FUN_1459746b0 body=160 status=ok
// SIG undefined FUN_1459746b0(void)

undefined8 FUN_1459746b0(longlong *param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  DVar2 = GetCurrentThreadId();
  uVar1 = *(undefined4 *)(param_2 + 0x1b8);
  *(DWORD *)(param_2 + 0x1b8) = DVar2;
  FUN_145974750(param_2 + 0x1a8,(int)param_1[0x58]);
  uVar3 = *(undefined4 *)(param_1[0x3d] + 0x30);
  FUN_14597477a(param_2 + 0x208,uVar3);
  FUN_145974818(param_2 + 0x208,uVar3);
  if (param_3 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
    *(undefined4 *)(param_2 + 8) = uVar3;
    FUN_145a593dc(param_2 + 0x10,param_1 + 0xf);
  }
  FUN_1459748a0(param_1,param_2);
  *(undefined4 *)(param_2 + 0x1b8) = uVar1;
  return 1;
}



// FUNCTION 145974750 FUN_145974750 body=42 status=ok
// SIG undefined FUN_145974750(void)

void FUN_145974750(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1459747b8();
    return;
  }
  return;
}



// FUNCTION 14597477a FUN_14597477a body=61 status=ok
// SIG undefined FUN_14597477a(void)

void FUN_14597477a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1401f9f9f(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1490ee624(param_1);
  return;
}



// FUNCTION 1459747b8 FUN_1459747b8 body=96 status=ok
// SIG undefined FUN_1459747b8(void)

void FUN_1459747b8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 145974818 FUN_145974818 body=135 status=ok
// SIG undefined FUN_145974818(void)

void FUN_145974818(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1490ef928(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x50 + *param_1),0,(longlong)(param_2 - iVar1) * 0x50);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1490ef9bc(param_1,param_2,iVar1 - param_2);
    FUN_1490efa22(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1459748a0 FUN_1459748a0 body=175 status=ok
// SIG undefined FUN_1459748a0(void)

void FUN_1459748a0(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x1f8) != 0) && (*(int *)(param_2 + 0x1b0) != *(int *)(param_1 + 0x2c0)))
  {
    FUN_145974950(param_2 + 0x1a8);
    local_30 = &local_48;
    local_58 = &local_28;
    local_28 = 0;
    local_20 = 0;
    local_38 = FUN_14446c796;
    local_60 = 0;
    local_48 = param_1;
    local_40 = param_2;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x1f8),1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145974950 FUN_145974950 body=72 status=ok
// SIG undefined FUN_145974950(void)

void FUN_145974950(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1490ef800();
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
      FUN_1490ef886();
      return;
    }
  }
  return;
}



// FUNCTION 1459749a2 FUN_1459749a2 body=180 status=ok
// SIG undefined FUN_1459749a2(void)

undefined8 * FUN_1459749a2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_14007ca06();
  FUN_145974a56(param_1,uVar2);
  *param_1 = &PTR_FUN_149f7f830;
  param_1[5] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    *puVar3 = FUN_1459ad799;
    puVar3[1] = 0;
    FUN_145974a76(puVar3 + 2);
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14c) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(undefined4 *)(puVar3 + 0x2d) = 0;
    lVar1 = param_1[5];
    param_1[5] = puVar3 + 2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
  }
  return param_1;
}



// FUNCTION 145974a56 FUN_145974a56 body=32 status=ok
// SIG undefined FUN_145974a56(void)

undefined8 * FUN_145974a56(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f7edd0;
  return param_1;
}



// FUNCTION 145974a76 FUN_145974a76 body=134 status=ok
// SIG undefined FUN_145974a76(void)

void FUN_145974a76(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145974afc FUN_145974afc body=55 status=ok
// SIG undefined FUN_145974afc(void)

void FUN_145974afc(longlong *param_1)

{
  FUN_145974b34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145974b34 FUN_145974b34 body=121 status=ok
// SIG undefined FUN_145974b34(void)

void FUN_145974b34(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145974bae FUN_145974bae body=162 status=ok
// SIG undefined FUN_145974bae(void)

void FUN_145974bae(longlong param_1)

{
  FUN_145974d8a(param_1 + 0xe8);
  FUN_145974dca(param_1 + 0x138);
  FUN_145974e0a(param_1 + 0x98);
  FUN_145974c50(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200));
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_145974e4a(param_1 + 0x1f8);
  }
  FUN_145974d3e(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return;
  }
  FUN_145974e7a(param_1 + 0x1d8);
  return;
}



// FUNCTION 145974c50 FUN_145974c50 body=73 status=ok
// SIG undefined FUN_145974c50(void)

void FUN_145974c50(longlong param_1,int param_2)

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



// FUNCTION 145974c9a FUN_145974c9a body=25 status=ok
// SIG undefined FUN_145974c9a(void)

void FUN_145974c9a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145974caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145974cb4 FUN_145974cb4 body=38 status=ok
// SIG undefined FUN_145974cb4(void)

undefined8 FUN_145974cb4(undefined8 param_1,int param_2)

{
  FUN_145974cda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145974cda FUN_145974cda body=100 status=ok
// SIG undefined FUN_145974cda(void)

void FUN_145974cda(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14a44e840;
  lVar3 = param_1[3];
  if (lVar3 == 0) {
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
    **(undefined8 **)(lVar3 + 0x20) = 0;
  }
  plVar4 = *(longlong **)(lVar3 + 0x28);
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
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 145974d3e FUN_145974d3e body=75 status=ok
// SIG undefined FUN_145974d3e(void)

void FUN_145974d3e(longlong param_1,int param_2)

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



// FUNCTION 145974d8a FUN_145974d8a body=63 status=ok
// SIG undefined FUN_145974d8a(void)

void FUN_145974d8a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145975386(param_1);
    FUN_145974eaa(param_1);
    return;
  }
  FUN_145974eaa(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145c4a232(param_1);
  return;
}



// FUNCTION 145974dca FUN_145974dca body=63 status=ok
// SIG undefined FUN_145974dca(void)

void FUN_145974dca(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459750ac(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1410f9eae(param_1);
    return;
  }
  FUN_14597561c(param_1);
  FUN_1459750ac(param_1);
  return;
}



// FUNCTION 145974e0a FUN_145974e0a body=63 status=ok
// SIG undefined FUN_145974e0a(void)

void FUN_145974e0a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1459754cc(param_1);
    FUN_14597520a(param_1);
    return;
  }
  FUN_14597520a(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147515ab6(param_1);
  return;
}



// FUNCTION 145974e4a FUN_145974e4a body=48 status=ok
// SIG undefined FUN_145974e4a(void)

void FUN_145974e4a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145974e7a FUN_145974e7a body=48 status=ok
// SIG undefined FUN_145974e7a(void)

void FUN_145974e7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145974eaa FUN_145974eaa body=345 status=ok
// SIG undefined FUN_145974eaa(void)

void FUN_145974eaa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145975004 FUN_145975004 body=25 status=ok
// SIG undefined FUN_145975004(void)

void FUN_145975004(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145975019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14597501e FUN_14597501e body=38 status=ok
// SIG undefined FUN_14597501e(void)

undefined8 FUN_14597501e(undefined8 param_1,int param_2)

{
  FUN_145975044();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145975044 FUN_145975044 body=104 status=ok
// SIG undefined FUN_145975044(void)

void FUN_145975044(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a4517a0;
  lVar3 = param_1[3];
  if (lVar3 == 0) {
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
    **(undefined8 **)(lVar3 + 0x20) = 0;
  }
  plVar4 = *(longlong **)(lVar3 + 0x28);
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
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 1459750ac FUN_1459750ac body=349 status=ok
// SIG undefined FUN_1459750ac(void)

void FUN_1459750ac(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597520a FUN_14597520a body=378 status=ok
// SIG undefined FUN_14597520a(void)

void FUN_14597520a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145975386 FUN_145975386 body=325 status=ok
// SIG undefined FUN_145975386(void)

void FUN_145975386(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 1459754cc FUN_1459754cc body=335 status=ok
// SIG undefined FUN_1459754cc(void)

void FUN_1459754cc(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 14597561c FUN_14597561c body=329 status=ok
// SIG undefined FUN_14597561c(void)

void FUN_14597561c(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 145975766 FUN_145975766 body=311 status=ok
// SIG undefined FUN_145975766(void)

void FUN_145975766(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14597589e();
  FUN_140457ffc(&DAT_14cbc56a0,param_1);
  FUN_140457ffc(&DAT_14cbc56b8,param_1);
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_148cbfde2(&local_38,iVar1,0);
    FUN_148cbfe44(local_38,uVar2,iVar1);
    lVar3 = local_38;
    lVar5 = (longlong)local_30;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + lVar6) + 0x20);
        if (lVar4 != 0) {
          FUN_140c23b96(param_1,lVar4);
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar5 * 0x10 != lVar6);
    }
  }
  FUN_14597589f(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_148d29086(param_1 + 0x60);
  }
  FUN_14597589f(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597589e FUN_14597589e body=1 status=ok
// SIG undefined FUN_14597589e(void)

void FUN_14597589e(void)

{
  return;
}



// FUNCTION 14597589f FUN_14597589f body=77 status=ok
// SIG undefined FUN_14597589f(void)

void FUN_14597589f(longlong param_1,int param_2)

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



// FUNCTION 1459758ec FUN_1459758ec body=9 status=ok
// SIG undefined FUN_1459758ec(void)

void FUN_1459758ec(longlong param_1)

{
  FUN_1459758f6(param_1 + 0x10);
  return;
}



// FUNCTION 1459758f6 FUN_1459758f6 body=124 status=ok
// SIG undefined FUN_1459758f6(void)

void FUN_1459758f6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0c96b0;
  if (*(char *)(param_1 + 0xe2) == '\x01') {
    *(undefined1 *)(param_1 + 0xe2) = 0;
  }
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14ac53b20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014597596e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145975972 FUN_145975972 body=68 status=ok
// SIG undefined FUN_145975972(void)

void FUN_145975972(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459759b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b730560;
  puVar1[5] = &PTR_FUN_14b730810;
  puVar1[10] = &PTR_FUN_14b730840;
  puVar1[0xb] = &PTR_FUN_14b730870;
  return;
}



// FUNCTION 1459759b6 FUN_1459759b6 body=65 status=ok
// SIG undefined FUN_1459759b6(void)

undefined8 * FUN_1459759b6(undefined8 *param_1)

{
  FUN_1411b71a8();
  *param_1 = &PTR_FUN_14b10b0b0;
  param_1[5] = &PTR_FUN_14b10b360;
  param_1[10] = &PTR_FUN_14b10b390;
  param_1[0xb] = &PTR_FUN_14b10b3c0;
  return param_1;
}



// FUNCTION 1459759f7 FUN_1459759f7 body=39 status=ok
// SIG undefined FUN_1459759f7(void)

void FUN_1459759f7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145975a1e(puVar1);
  *puVar1 = &PTR_FUN_14b758e90;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145975a1e FUN_145975a1e body=32 status=ok
// SIG undefined FUN_145975a1e(void)

undefined8 * FUN_145975a1e(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b4dcf00;
  return param_1;
}



// FUNCTION 145975a3e FUN_145975a3e body=39 status=ok
// SIG undefined FUN_145975a3e(void)

void FUN_145975a3e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145975a66(puVar1);
  *puVar1 = &PTR_FUN_14b7ad5b0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145975a66 FUN_145975a66 body=32 status=ok
// SIG undefined FUN_145975a66(void)

undefined8 * FUN_145975a66(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b4dd820;
  return param_1;
}



// FUNCTION 145975a86 FUN_145975a86 body=39 status=ok
// SIG undefined FUN_145975a86(void)

void FUN_145975a86(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145975aae(puVar1);
  *puVar1 = &PTR_FUN_14b7d9de0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145975aae FUN_145975aae body=32 status=ok
// SIG undefined FUN_145975aae(void)

undefined8 * FUN_145975aae(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b4de320;
  return param_1;
}



// FUNCTION 145975ace FUN_145975ace body=71 status=ok
// SIG undefined FUN_145975ace(void)

void FUN_145975ace(longlong *param_1)

{
  if (((longlong *)param_1[0x15] != (longlong *)0x0) && (*(longlong *)param_1[0x15] != -1)) {
    FUN_14033a7c0();
    FUN_140b3e76a(param_1 + 0x15);
  }
                    /* WARNING: Could not recover jumptable at 0x000145975b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))();
  return;
}



// FUNCTION 145975b16 FUN_145975b16 body=62 status=ok
// SIG undefined FUN_145975b16(void)

void FUN_145975b16(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145975b54(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145975b54 FUN_145975b54 body=89 status=ok
// SIG undefined FUN_145975b54(void)

ulonglong FUN_145975b54(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145975bae FUN_145975bae body=40 status=ok
// SIG undefined FUN_145975bae(void)

undefined8 FUN_145975bae(undefined8 param_1,int param_2)

{
  FUN_145975bd6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145975bd6 FUN_145975bd6 body=469 status=ok
// SIG undefined FUN_145975bd6(void)

void FUN_145975bd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd11c70;
  param_1[5] = &PTR_FUN_14bd11f20;
  param_1[6] = &PTR_FUN_14bd11f50;
  param_1[7] = &PTR_FUN_14bd11fa0;
  param_1[8] = &PTR_FUN_14bd12008;
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145975dac(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145975de4(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145975dac FUN_145975dac body=55 status=ok
// SIG undefined FUN_145975dac(void)

void FUN_145975dac(longlong *param_1)

{
  FUN_145975e1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145975de4 FUN_145975de4 body=55 status=ok
// SIG undefined FUN_145975de4(void)

void FUN_145975de4(longlong *param_1)

{
  FUN_145975f9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145975e1c FUN_145975e1c body=381 status=ok
// SIG undefined FUN_145975e1c(void)

void FUN_145975e1c(longlong *param_1,int param_2)

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
      FUN_149477074(*local_70 + (longlong)iStack_54 * 0x80 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145975f9a FUN_145975f9a body=420 status=ok
// SIG undefined FUN_145975f9a(void)

void FUN_145975f9a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1494772d4(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597614e FUN_14597614e body=40 status=ok
// SIG undefined FUN_14597614e(void)

undefined8 FUN_14597614e(undefined8 param_1,int param_2)

{
  FUN_145976176();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145976176 FUN_145976176 body=129 status=ok
// SIG undefined FUN_145976176(void)

void FUN_145976176(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b775b80;
  FUN_1459761f7(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_145976236(param_1 + 10);
  plVar3 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459761f7 FUN_1459761f7 body=63 status=ok
// SIG undefined FUN_1459761f7(void)

void FUN_1459761f7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145976236 FUN_145976236 body=74 status=ok
// SIG undefined FUN_145976236(void)

void FUN_145976236(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145976288 FUN_145976288 body=113 status=ok
// SIG undefined FUN_145976288(void)

undefined8 * FUN_145976288(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b0af950;
  param_1[0x1b] = DAT_14cb72628;
  FUN_1459762fa(param_1 + 0x1c);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0x26] = DAT_14c8463d0;
  param_1[0x27] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x28] = DAT_14c8463e0;
  param_1[0x29] = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 1459762fa FUN_1459762fa body=56 status=ok
// SIG undefined FUN_1459762fa(void)

undefined8 * FUN_1459762fa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff7fffffff;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145976332();
  return param_1;
}



// FUNCTION 145976332 FUN_145976332 body=195 status=ok
// SIG undefined FUN_145976332(void)

void FUN_145976332(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x24);
  if ((int)uVar3 < 2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_1459763f6(plVar1);
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x24);
  }
  else {
    iVar5 = 0;
  }
  *(uint *)(param_1 + 0x20) = iVar5 + 1U;
  if (uVar3 < iVar5 + 1U) {
    FUN_1487df198(plVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar4 = (longlong)iVar5;
  *(undefined8 *)(lVar6 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar4 * 0x28) = 0xffffffff7fffffff;
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar4 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x20 + lVar4 * 0x28) = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x20);
  uVar3 = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x20) = uVar3;
  if (*(uint *)(param_1 + 0x24) < uVar3) {
    FUN_1487df198(plVar1);
  }
  lVar4 = *plVar1;
  *(undefined8 *)(lVar4 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x28) = 0xffffffff7fffffff;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar6 * 0x28) = 0;
  return;
}



// FUNCTION 1459763f6 FUN_1459763f6 body=162 status=ok
// SIG undefined FUN_1459763f6(void)

undefined8 FUN_1459763f6(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x50;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e05];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x50,4);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (1 < (int)(uVar3 / 0x28)) {
    uVar4 = uVar3 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,4);
  }
  return uVar2;
}



// FUNCTION 1459764a2 FUN_1459764a2 body=119 status=ok
// SIG undefined FUN_1459764a2(void)

void FUN_1459764a2(longlong *param_1)

{
  FUN_145976541(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14597656a(param_1 + 9);
  FUN_145976519(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145976519 FUN_145976519 body=40 status=ok
// SIG undefined FUN_145976519(void)

void FUN_145976519(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14597656a(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145976541 FUN_145976541 body=40 status=ok
// SIG undefined FUN_145976541(void)

void FUN_145976541(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148e21f7e(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14597656a FUN_14597656a body=77 status=ok
// SIG undefined FUN_14597656a(void)

void FUN_14597656a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459765c2 FUN_1459765c2 body=152 status=ok
// SIG undefined FUN_1459765c2(void)

longlong * FUN_1459765c2(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406ed334();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc;
  *param_1 = (longlong)&PTR_FUN_14b213680;
  param_1[0x1f] = (longlong)&PTR_LAB_14b2139f0;
  param_1[0x20] = (longlong)&PTR_LAB_14b213a20;
  FUN_14597665c(param_1 + 0x22);
  local_20 = 2;
  local_18 = 2;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597665c FUN_14597665c body=157 status=ok
// SIG undefined FUN_14597665c(void)

void FUN_14597665c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14b214490;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 1459766fa FUN_1459766fa body=194 status=ok
// SIG undefined FUN_1459766fa(void)

ulonglong FUN_1459766fa(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar3 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar3 == 0) goto LAB_145976782;
    }
    FUN_1459767be(lVar3,&local_30);
    FUN_145a602f6(lVar3,&local_38);
    uVar2 = 0xffffffff;
    if ((longlong)local_28 != 0) {
      lVar1 = (longlong)local_28 << 3;
      uVar4 = 0;
      do {
        if (*(longlong *)(local_30 + uVar4 * 8) == local_38) {
          uVar2 = uVar4 & 0xffffffff;
          break;
        }
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + -8;
      } while (lVar1 != 0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_145976782:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1459767be FUN_1459767be body=29 status=ok
// SIG undefined FUN_1459767be(void)

undefined8 FUN_1459767be(longlong param_1,undefined8 param_2)

{
  FUN_1459767dc(*(undefined8 *)(param_1 + 0x148));
  return param_2;
}



// FUNCTION 1459767dc FUN_1459767dc body=97 status=ok
// SIG undefined FUN_1459767dc(void)

undefined8 * FUN_1459767dc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = DAT_14cad6230;
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0xd8);
  _Src = *(void **)(lVar2 + 0xd0);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 145976846 FUN_145976846 body=223 status=ok
// SIG undefined FUN_145976846(void)

undefined8 * FUN_145976846(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_1 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48.Data4._4_4_;
  *param_1 = &PTR_FUN_14b283150;
  param_1[7] = &PTR_FUN_14b2841e0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_1 + 8) = local_48.Data1;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_48._4_4_;
  *(undefined4 *)(param_1 + 9) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_48.Data4._4_4_;
  param_1[7] = &PTR_FUN_14b2831e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145976926 FUN_145976926 body=1119 status=ok
// SIG undefined FUN_145976926(void)

longlong * FUN_145976926(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x2e8))(0,param_3);
    if (cVar4 != '\0') {
      FUN_144a5dc74(&local_78);
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,"BigMap_Action_FastTravel",0);
      FUN_140ac6c96(&local_68,&local_78);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      lVar5 = FUN_14001cc68(0x30,0x10);
      FUN_1400b22c2(local_88,"action_ui_bigmap_tooltip_main_action");
      local_98 = local_78;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
      local_90 = local_70;
      FUN_146624388(lVar5,&local_98,local_88,param_1);
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b9679d0;
      plVar7[2] = lVar5;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_145976dba(param_2,iVar3);
      }
      lVar6 = *param_2;
      *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar5;
      *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    lVar5 = FUN_144a7ba4c(param_3);
    if (lVar5 != 0) {
      lVar6 = FUN_14030d4a0();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        param_1 = param_1 + 0x19;
        cVar4 = FUN_144729dda(param_1);
        if (cVar4 != '\0') {
          lVar6 = FUN_14479d2ce(param_1);
          FUN_1408e4d18(lVar6 + 0x4e8,&local_68);
          plVar7 = plStack_60;
          lVar6 = local_68;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (lVar6 != 0) {
            lVar6 = FUN_14479d2ce(param_1);
            FUN_1408e4d18(lVar6 + 0x4e8,&local_68);
            cVar4 = FUN_145976d86(lVar5,local_68);
            plVar7 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (cVar4 != '\0') {
              FUN_144a5dc74(&local_78);
              local_68 = 0;
              plStack_60 = (longlong *)0x0;
              local_58 = 0;
              local_50 = 0;
              uStack_48 = 0;
              FUN_1446ddda2(&local_68,"BigMap_Action_ViewProfile",0);
              FUN_140ac6c96(&local_68,&local_78);
              if (local_50 != 0) {
                FUN_1400020a8();
              }
              lVar5 = FUN_14001cc68(0x48,0x10);
              lVar6 = FUN_14479d2ce(param_1);
              FUN_1408e4d18(lVar6 + 0x4e8,local_a8);
              FUN_1400b22c2(local_b8,"action_ui_bigmap_tooltip_leave_menu_action");
              local_c8 = local_78;
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 8))();
              }
              local_c0 = local_70;
              FUN_145976e3e(lVar5,&local_c8,local_b8,local_a8);
              plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
              plVar7[1] = (longlong)&DAT_100000001;
              *plVar7 = (longlong)&PTR_FUN_14b967db0;
              plVar7[2] = lVar5;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
              }
              iVar3 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                FUN_145976dba(param_2,iVar3);
              }
              lVar6 = *param_2;
              *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar5;
              *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar7;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar7 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
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
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145976d86 FUN_145976d86 body=52 status=ok
// SIG undefined FUN_145976d86(void)

ulonglong FUN_145976d86(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145977038(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145976dba FUN_145976dba body=132 status=ok
// SIG undefined FUN_145976dba(void)

void FUN_145976dba(longlong param_1,int param_2)

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



// FUNCTION 145976e3e FUN_145976e3e body=334 status=ok
// SIG undefined FUN_145976e3e(void)

undefined8 *
FUN_145976e3e(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar4 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar4 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748bb0;
  param_1[5] = &PTR_FUN_14a184370;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = *param_4;
  lVar4 = param_4[1];
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145976f8e FUN_145976f8e body=169 status=ok
// SIG undefined FUN_145976f8e(void)

undefined8 * FUN_145976f8e(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  *param_1 = &PTR_FUN_14b1382c0;
  plVar2 = (longlong *)*param_2;
  param_1[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 2) = (int)param_2[1];
  param_1[3] = 0;
  iVar1 = (int)param_3[1];
  _Src = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 145977038 FUN_145977038 body=472 status=ok
// SIG undefined FUN_145977038(void)

ulonglong FUN_145977038(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48);
  FUN_1446f470e(&local_38,L"SHIFT",1);
  if (local_48 == local_38) {
    uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar7 = &local_48;
    FUN_140b6e166(plVar7,uVar8,param_2);
    lVar4 = local_48;
    if (local_48 != 0) {
      uVar6 = FUN_145977038(param_1,local_48);
      plVar7 = (longlong *)(ulonglong)uVar6;
    }
    plVar1 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    uVar9 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != 0 & (byte)plVar7);
    goto LAB_14597714c;
  }
  (**(code **)(*param_2 + 0x10))(param_2,&local_50);
  iVar5 = FUN_1413ffdac(param_1,local_50);
  if (iVar5 == 0) {
    uVar9 = 0;
    goto LAB_14597714c;
  }
  (**(code **)(*param_2 + 0x10))(param_2,&local_58);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_30 = local_58;
  plVar7 = (longlong *)FUN_1401e3228();
  if (plVar7 == (longlong *)0x0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
LAB_1459771e8:
    uVar9 = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x70))(plVar7,&local_48);
    if (local_48 == 0) goto LAB_1459771e8;
    (**(code **)(*param_2 + 0x10))(param_2,&local_30);
    FUN_1446f470e(&local_60,L"EPIC",1);
    uVar9 = CONCAT71((int7)((ulonglong)&local_60 >> 8),local_30 != local_60);
  }
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_14597714c:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 145977212 FUN_145977212 body=40 status=ok
// SIG undefined FUN_145977212(void)

undefined8 FUN_145977212(undefined8 param_1,int param_2)

{
  FUN_14597723a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597723a FUN_14597723a body=92 status=ok
// SIG undefined FUN_14597723a(void)

void FUN_14597723a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae63b40;
  param_1[5] = &PTR_FUN_14ae63e70;
  param_1[0x49] = &PTR_LAB_14ae63eb0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 0x49);
  FUN_145977296(param_1);
  return;
}



// FUNCTION 145977296 FUN_145977296 body=118 status=ok
// SIG undefined FUN_145977296(void)

void FUN_145977296(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a50e590;
  param_1[5] = &PTR_FUN_14a50e8a0;
  FUN_14122e0b2(param_1 + 0x38);
  plVar3 = (longlong *)param_1[0x37];
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
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14597730c FUN_14597730c body=46 status=ok
// SIG undefined FUN_14597730c(void)

void FUN_14597730c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14597733a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b566840;
  puVar1[5] = &PTR_FUN_14b566b60;
  return;
}



// FUNCTION 14597733a FUN_14597733a body=88 status=ok
// SIG undefined FUN_14597733a(void)

undefined8 * FUN_14597733a(undefined8 *param_1)

{
  FUN_14117d212();
  *param_1 = &PTR_FUN_14ae43ca0;
  param_1[5] = &PTR_FUN_14ae43fc0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 14597739c FUN_14597739c body=125 status=ok
// SIG undefined FUN_14597739c(void)

void FUN_14597739c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99c7f0;
  param_1[4] = &PTR_FUN_14b99c830;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99c840;
  param_1[4] = &PTR_LAB_14b99c880;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14597741a FUN_14597741a body=38 status=ok
// SIG undefined FUN_14597741a(void)

undefined8 FUN_14597741a(undefined8 param_1,int param_2)

{
  FUN_1414006a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145977440 FUN_145977440 body=325 status=ok
// SIG undefined FUN_145977440(void)

undefined4 * FUN_145977440(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
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
  FUN_145977608(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145977586(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
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
      FUN_14140079e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145977586 FUN_145977586 body=130 status=ok
// SIG undefined FUN_145977586(void)

undefined8 FUN_145977586(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_145834a12((int)lVar3,*param_4);
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



// FUNCTION 145977608 FUN_145977608 body=240 status=ok
// SIG undefined FUN_145977608(void)

int * FUN_145977608(longlong *param_1,int *param_2)

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



// FUNCTION 1459776f8 FUN_1459776f8 body=40 status=ok
// SIG undefined FUN_1459776f8(void)

undefined8 FUN_1459776f8(undefined8 param_1,int param_2)

{
  FUN_145977720();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145977720 FUN_145977720 body=77 status=ok
// SIG undefined FUN_145977720(void)

void FUN_145977720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc55ab0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1459777cc(param_1 + 0x14);
  FUN_14597776e(param_1);
  return;
}



// FUNCTION 14597776e FUN_14597776e body=93 status=ok
// SIG undefined FUN_14597776e(void)

void FUN_14597776e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc46a70;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 1459777cc FUN_1459777cc body=111 status=ok
// SIG undefined FUN_1459777cc(void)

void FUN_1459777cc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14597783c(param_1);
  return;
}



// FUNCTION 14597783c FUN_14597783c body=55 status=ok
// SIG undefined FUN_14597783c(void)

void FUN_14597783c(longlong *param_1)

{
  FUN_145977874(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145977874 FUN_145977874 body=410 status=ok
// SIG undefined FUN_145977874(void)

void FUN_145977874(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x28 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar5 * 0x40 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145977a10 FUN_145977a10 body=93 status=ok
// SIG undefined FUN_145977a10(void)

undefined8 * FUN_145977a10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b213680;
  param_1[0x1f] = &PTR_LAB_14b2139f0;
  param_1[0x20] = &PTR_LAB_14b213a20;
  FUN_145977a6e(param_1 + 0x22);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145977a6e FUN_145977a6e body=68 status=ok
// SIG undefined FUN_145977a6e(void)

void FUN_145977a6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b214490;
  FUN_141177934(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 145977ab2 FUN_145977ab2 body=34 status=ok
// SIG undefined FUN_145977ab2(void)

void FUN_145977ab2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141400982();
                    /* WARNING: Could not recover jumptable at 0x000145977ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,*(code **)(*plVar1 + 0x20));
  return;
}



// FUNCTION 145977ad4 FUN_145977ad4 body=132 status=ok
// SIG undefined FUN_145977ad4(void)

void FUN_145977ad4(longlong param_1,int param_2)

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



// FUNCTION 145977b60 FUN_145977b60 body=390 status=ok
// SIG undefined FUN_145977b60(void)

void FUN_145977b60(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_58,"FGbxUIEvent_StatusMenu_Damage",1);
    FUN_1401cd85c(lVar1,local_58,param_1 + 0x2b8);
    local_50 = FUN_1408cad18;
    local_48 = 0;
    FUN_1414013fe(local_68,param_1);
    FUN_1446ddc76(&local_70,"FGbxUIEvent_StatusMenu_Damage",1);
    FUN_140391af6(lVar1,&local_50,local_70,local_68);
    *(code **)(param_1 + 0x2b8) = local_50;
    FUN_1449db362(local_68);
    FUN_1446ddc76(&local_78,"FGbxUIEvent_StatusMenu_ShieldBreak",1);
    FUN_1401cd85c(lVar1,local_78,param_1 + 0x2c0);
    local_50 = FUN_1408cb818;
    local_48 = 0;
    FUN_1414013fe(local_68,param_1,&local_50);
    FUN_1446ddc76(&local_80,"FGbxUIEvent_StatusMenu_ShieldBreak",1);
    FUN_140391af6(lVar1,&local_50,local_80,local_68);
    *(code **)(param_1 + 0x2c0) = local_50;
    FUN_1449db362(local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145977cf2 FUN_145977cf2 body=204 status=ok
// SIG undefined FUN_145977cf2(void)

undefined8 * FUN_145977cf2(undefined8 *param_1)

{
  FUN_14125d51e();
  *param_1 = &PTR_FUN_14b2a9ca0;
  param_1[0x72] = &PTR_FUN_14b2aa2e0;
  param_1[0x73] = &PTR_FUN_14b2aa300;
  *(undefined2 *)(param_1 + 0x74) = 1;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xf;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 3;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 2;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0xffff;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined2 *)(param_1 + 0x81) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x417) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41b) = 1;
  param_1[0x84] = 0;
  FUN_1406524d8(param_1 + 0x85);
  return param_1;
}



// FUNCTION 145977dbe FUN_145977dbe body=230 status=ok
// SIG undefined FUN_145977dbe(void)

void FUN_145977dbe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    lVar7 = param_2[1];
    uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar8 = (uint)lVar7 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    iVar5 = FUN_144a78877(((uint)lVar1 << 0x10 | uVar4) + (int)((ulonglong)lVar1 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4),
                          ((uint)lVar7 << 0x10 | uVar8) + (int)((ulonglong)lVar7 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4));
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar1 = *param_1;
      do {
        lVar7 = (longlong)iVar5;
        if ((*(longlong *)(lVar1 + lVar7 * 0x28) == *param_2) &&
           (*(longlong *)(lVar1 + 8 + lVar7 * 0x28) == param_2[1])) {
          FUN_145977ea4(param_1);
          return;
        }
        iVar5 = *(int *)(lVar1 + lVar7 * 0x28 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 145977ea4 FUN_145977ea4 body=85 status=ok
// SIG undefined FUN_145977ea4(void)

void FUN_145977ea4(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145977efa();
  return;
}



// FUNCTION 145977efa FUN_145977efa body=80 status=ok
// SIG undefined FUN_145977efa(void)

void FUN_145977efa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
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
  FUN_145977f4a(param_1,param_2);
  return;
}



// FUNCTION 145977f4a FUN_145977f4a body=116 status=ok
// SIG undefined FUN_145977f4a(void)

void FUN_145977f4a(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145977fbe FUN_145977fbe body=35 status=ok
// SIG undefined FUN_145977fbe(void)

void FUN_145977fbe(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145977fe2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145977fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_14597813a();
  return;
}



// FUNCTION 145977fe2 FUN_145977fe2 body=191 status=ok
// SIG undefined FUN_145977fe2(void)

longlong FUN_145977fe2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1459780a2();
  lVar3 = *param_1;
  if (DAT_14cb85678 != DAT_14cb856a4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb856a8;
    if (DAT_14cb856b0 != (undefined *)0x0) {
      puVar7 = DAT_14cb856b0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb856b8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb85670 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb85668;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1459780a2 FUN_1459780a2 body=152 status=ok
// SIG undefined FUN_1459780a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459780a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb856c0) {
    FUN_144b3d300(&DAT_14cb856c0);
    if (DAT_14cb856c0 == -1) {
      DAT_14cb85690 = 0;
      DAT_14cb85698 = 0;
      DAT_14cb85670 = 0;
      _DAT_14cb85678 = 0;
      _DAT_14cb8569c = 0xffffffff00000080;
      DAT_14cb856a4 = 0;
      DAT_14cb856b0 = 0;
      DAT_14cb856b8 = 0;
      atexit(FUN_143dd270e);
      _Init_thread_footer(&DAT_14cb856c0);
      return;
    }
  }
  return;
}



// FUNCTION 14597813a FUN_14597813a body=112 status=ok
// SIG undefined FUN_14597813a(void)

undefined8 * FUN_14597813a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414015aa(&DAT_14cb856c8);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b33e0c0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1446f470e(puVar1 + 5,L"UpperBody",1);
  puVar1[6] = 0x4296000042200000;
  puVar1[7] = 0x432f000000000000;
  puVar1[8] = 0x4248000043480000;
  *(undefined4 *)(puVar1 + 9) = 0;
  return puVar1;
}



// FUNCTION 1459781aa FUN_1459781aa body=254 status=ok
// SIG undefined FUN_1459781aa(void)

longlong *
FUN_1459781aa(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1459782ac(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145978324(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459782ac FUN_1459782ac body=120 status=ok
// SIG undefined FUN_1459782ac(void)

undefined8 * FUN_1459782ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99c990;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99c9b0;
  param_1[6] = &PTR_FUN_14b99c9f0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145978324 FUN_145978324 body=162 status=ok
// SIG undefined FUN_145978324(void)

void FUN_145978324(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145978363;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145978363;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145978363:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459783c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459783c6 FUN_1459783c6 body=59 status=ok
// SIG undefined FUN_1459783c6(void)

void FUN_1459783c6(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145978402 FUN_145978402 body=40 status=ok
// SIG undefined FUN_145978402(void)

undefined8 FUN_145978402(undefined8 param_1,int param_2)

{
  FUN_14597842a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597842a FUN_14597842a body=154 status=ok
// SIG undefined FUN_14597842a(void)

void FUN_14597842a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7b43b0;
  param_1[7] = &PTR_FUN_14b7b46a0;
  FUN_144a7b030(param_1 + 0x74);
  FUN_140e20a16(param_1 + 0x32);
  FUN_140beec42(param_1 + 0x25);
  FUN_1459784c4(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1459784ee(param_1 + 0x18);
  FUN_141401e38(param_1);
  return;
}



// FUNCTION 1459784c4 FUN_1459784c4 body=42 status=ok
// SIG undefined FUN_1459784c4(void)

void FUN_1459784c4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140beec42(param_1);
      param_1 = param_1 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459784ee FUN_1459784ee body=53 status=ok
// SIG undefined FUN_1459784ee(void)

void FUN_1459784ee(longlong *param_1)

{
  FUN_141401dde();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145978524 FUN_145978524 body=105 status=ok
// SIG undefined FUN_145978524(void)

void * FUN_145978524(undefined8 param_1,longlong param_2)

{
  char cVar1;
  void *_Dst;
  
  cVar1 = FUN_144937519();
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_1458c67f8(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2),1,
                            1), cVar1 != '\0')) {
    _Dst = (void *)FUN_14001cc68(0x338);
    memset(_Dst,0,0x338);
    FUN_14597858e(_Dst);
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 14597858e FUN_14597858e body=183 status=ok
// SIG undefined FUN_14597858e(void)

undefined8 * FUN_14597858e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a2a0440;
  FUN_1409e1656(param_1 + 1);
  *param_1 = &PTR_FUN_14a2a0f10;
  param_1[1] = &PTR_FUN_14a2a0f40;
  param_1[2] = 0;
  FUN_141222082(param_1 + 3,0);
  FUN_141222082(param_1 + 0x1e,0);
  FUN_141222082(param_1 + 0x39,0);
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  return param_1;
}



// FUNCTION 145978645 FUN_145978645 body=335 status=ok
// SIG undefined FUN_145978645(void)

undefined8 FUN_145978645(undefined4 param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97010) && (FUN_144b3d300(&DAT_14ca97010), DAT_14ca97010 == -1)) {
    FUN_140056680(&DAT_14ca96ff8,L"r.SkinCache.Allow");
    DAT_14ca97008 = 0;
    atexit((_func_5014 *)&LAB_143226533);
    _Init_thread_footer(&DAT_14ca97010);
  }
  FUN_144a82b37(&local_20,param_1);
  if (DAT_14ca97008 == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar2 = DAT_14ca96ff8;
    if (DAT_14ca97000 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    DAT_14ca97008 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar2,1);
  }
  cVar1 = FUN_14002b5e0(local_20,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != (short)param_1)) {
    if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1459787a8 FUN_1459787a8 body=40 status=ok
// SIG undefined FUN_1459787a8(void)

undefined8 FUN_1459787a8(undefined8 param_1,int param_2)

{
  FUN_1459787d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459787d0 FUN_1459787d0 body=68 status=ok
// SIG undefined FUN_1459787d0(void)

void FUN_1459787d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a49c840;
  FUN_1448a8284(param_1 + 9);
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145978814 FUN_145978814 body=39 status=ok
// SIG undefined FUN_145978814(void)

void FUN_145978814(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14597883c();
    return;
  }
  return;
}



// FUNCTION 14597883c FUN_14597883c body=136 status=ok
// SIG undefined FUN_14597883c(void)

void FUN_14597883c(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  uVar3 = (ulonglong)*(int *)(param_1 + 0x60);
  if (0 < (longlong)uVar3) {
    plVar1 = (longlong *)(param_1 + 0x58);
    lVar4 = uVar3 << 4;
    do {
      lVar4 = lVar4 + -0x10;
      if ((*(longlong *)(param_1 + 0x28) == 0) ||
         (*(char *)(*(longlong *)(*plVar1 + lVar4) + 0x55c) == '\0')) {
        FUN_1477ed3ac(plVar1,(int)uVar3 + -1);
        FUN_1477ed434(plVar1);
      }
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014597886e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1459788c4 FUN_1459788c4 body=40 status=ok
// SIG undefined FUN_1459788c4(void)

undefined8 FUN_1459788c4(undefined8 param_1,int param_2)

{
  FUN_1459788ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459788ec FUN_1459788ec body=59 status=ok
// SIG undefined FUN_1459788ec(void)

void FUN_1459788ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5da4b0;
  FUN_145978927(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145978927 FUN_145978927 body=45 status=ok
// SIG undefined FUN_145978927(void)

void FUN_145978927(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145978960 FUN_145978960 body=195 status=ok
// SIG undefined FUN_145978960(void)

undefined8 * FUN_145978960(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_140b57eb0(param_1 + 5);
  *param_1 = &PTR_FUN_14acfedf0;
  param_1[5] = &PTR_LAB_14acff090;
  param_1[6] = &PTR_FUN_14acff1a0;
  FUN_141402fae(param_1 + 0x42);
  param_1[0x42] = &PTR_FUN_14ad04250;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_141402f74(param_1 + 0x53);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x319) = 0;
  *(undefined8 *)((longlong)param_1 + 0x321) = 0;
  FUN_141402f90(param_1 + 0x57,0);
  return param_1;
}



// FUNCTION 145978a24 FUN_145978a24 body=40 status=ok
// SIG undefined FUN_145978a24(void)

undefined8 FUN_145978a24(undefined8 param_1,int param_2)

{
  FUN_145978a4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145978a4c FUN_145978a4c body=63 status=ok
// SIG undefined FUN_145978a4c(void)

void FUN_145978a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae8d3b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145978a8c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145978a92 FUN_145978a92 body=40 status=ok
// SIG undefined FUN_145978a92(void)

undefined8 FUN_145978a92(undefined8 param_1,int param_2)

{
  FUN_145978aba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145978aba FUN_145978aba body=68 status=ok
// SIG undefined FUN_145978aba(void)

void FUN_145978aba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af15660;
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145978b04 FUN_145978b04 body=228 status=ok
// SIG undefined FUN_145978b04(void)

longlong FUN_145978b04(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb57ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14594bf7e;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14864bafb;
    local_40 = &LAB_1464bfa46;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActiveProfile",&DAT_14cb57ea0,&DAT_14864bafa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145978bf0 FUN_145978bf0 body=228 status=ok
// SIG undefined FUN_145978bf0(void)

longlong FUN_145978bf0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5a150 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_1486629ab;
    local_40 = FUN_1464c80c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAudioGameInstanceSubsystem",&DAT_14cb5a150,&DAT_1486629aa)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145978cdc FUN_145978cdc body=228 status=ok
// SIG undefined FUN_145978cdc(void)

longlong FUN_145978cdc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6b428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148772ca7;
    local_40 = &LAB_145af7828;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3c8;
    FUN_14081cfa3(L"/Script/GbxGame",L"LiveDialogSpeakerHost",&DAT_14cb6b428,&DAT_148772ca6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145978dc8 FUN_145978dc8 body=228 status=ok
// SIG undefined FUN_145978dc8(void)

longlong FUN_145978dc8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb625b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1486e4f87;
    local_40 = &LAB_145f89c35;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x470;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProximityProcessingActor",&DAT_14cb625b0,FUN_1464f82e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb625b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145978eb4 FUN_145978eb4 body=228 status=ok
// SIG undefined FUN_145978eb4(void)

longlong FUN_145978eb4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb916f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_1489f2885;
    local_40 = FUN_146569f0e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxLoadingScreenManager",&DAT_14cb916f0,FUN_146569eec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb916f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145978fae FUN_145978fae body=40 status=ok
// SIG undefined FUN_145978fae(void)

undefined8 FUN_145978fae(undefined8 param_1,int param_2)

{
  FUN_14096c94c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145978fd6 FUN_145978fd6 body=32 status=ok
// SIG undefined FUN_145978fd6(void)

void FUN_145978fd6(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_145978ff6(param_1);
  *param_1 = &PTR_FUN_14b7f2930;
  return;
}



// FUNCTION 145978ff6 FUN_145978ff6 body=40 status=ok
// SIG undefined FUN_145978ff6(void)

undefined8 * FUN_145978ff6(undefined8 *param_1)

{
  FUN_140e3421a();
  *param_1 = &PTR_FUN_14b4dea10;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14597901e FUN_14597901e body=163 status=ok
// SIG undefined FUN_14597901e(void)

longlong * FUN_14597901e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar4 = FUN_14479d2ce(param_1 + 0xa8);
    lVar5 = FUN_1412c348c(uVar4);
    if (((lVar5 != 0) && (cVar2 = FUN_148cc6424(lVar5), cVar2 != '\0')) &&
       (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar6 = FUN_1413206c6();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        bVar3 = FUN_148d724c2(param_1);
        *param_2 = plVar1[(ulonglong)(bVar3 ^ 1) + 0x5a];
        return param_2;
      }
    }
  }
  FUN_1459790c2(param_1,param_2);
  return param_2;
}



// FUNCTION 1459790c2 FUN_1459790c2 body=35 status=ok
// SIG undefined FUN_1459790c2(void)

void FUN_1459790c2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x20) + 0x164 + (ulonglong)(*(byte *)(param_1 + 0x78) ^ 1) * 8
             );
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1459790e6 FUN_1459790e6 body=161 status=ok
// SIG undefined FUN_1459790e6(void)

longlong * FUN_1459790e6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14597918a(param_1,param_3);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14597920e(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597918a FUN_14597918a body=132 status=ok
// SIG undefined FUN_14597918a(void)

undefined8 * FUN_14597918a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x188,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a5af0;
  FUN_1414030d2(puVar1 + 2,param_1,param_2);
  puVar1[2] = &PTR_FUN_14b9a4150;
  puVar1[0x30] = param_1;
  uVar2 = FUN_140ed0982(puVar1 + 2,&DAT_14cbd4300,0);
  *(undefined4 *)(puVar1 + 0x28) = uVar2;
  return puVar1;
}



// FUNCTION 14597920e FUN_14597920e body=162 status=ok
// SIG undefined FUN_14597920e(void)

void FUN_14597920e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14597924d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14597924d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14597924d:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459792ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459792b0 FUN_1459792b0 body=9 status=ok
// SIG undefined FUN_1459792b0(void)

void FUN_1459792b0(longlong param_1)

{
  FUN_1459792ba(param_1 + 0x10);
  return;
}



// FUNCTION 1459792ba FUN_1459792ba body=170 status=ok
// SIG undefined FUN_1459792ba(void)

void FUN_1459792ba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb850;
  param_1[0x1dc] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1f0];
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
  param_1[0x1c2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1d6];
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
  FUN_145979364(param_1 + 0x192);
  FUN_1414034a0(param_1 + 0xca);
  FUN_1414034a0(param_1 + 2);
  return;
}



// FUNCTION 145979364 FUN_145979364 body=138 status=ok
// SIG undefined FUN_145979364(void)

void FUN_145979364(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb510;
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x0001459793ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459793ee FUN_1459793ee body=209 status=ok
// SIG undefined FUN_1459793ee(void)

void FUN_1459793ee(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_144a2f878();
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        lVar2 + 0x30)) {
      param_2 = 0;
    }
    FUN_1459794c0(param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
  }
  if (param_3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      param_3 = 0;
    }
    FUN_1459794c0(param_3,0);
  }
  FUN_1411cf6d8(param_1 + 0x3910,local_38,0);
  FUN_145979580(param_1,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459794c0 FUN_1459794c0 body=192 status=ok
// SIG undefined FUN_1459794c0(void)

void FUN_1459794c0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cbca7d8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cbca7e4 = DAT_14cbca7e4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cbca7d0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cbca7d0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cbca7e4 = DAT_14cbca7e4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_145979567;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cbca7e4 = DAT_14cbca7e4 + -1;
LAB_145979567:
  FUN_14474d06a(&DAT_14cbca7d0,0);
  return;
}



// FUNCTION 145979580 FUN_145979580 body=204 status=ok
// SIG undefined FUN_145979580(void)

void FUN_145979580(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcfb85 == '\0') {
    DAT_14cbcfb85 = 1;
    if (*(byte *)(param_1 + 0x178) < 3) {
      local_38 = *param_2;
      uVar1 = FUN_14477b664(param_2[1]);
      local_30 = FUN_14477b664(uVar1);
      local_28 = param_2[2];
      FUN_14597964e(param_1,&local_38);
    }
    local_50 = *param_2;
    uVar1 = FUN_14477b664(param_2[1]);
    local_48 = FUN_14477b664(uVar1);
    local_40 = param_2[2];
    FUN_14140370c(param_1 + 0x3910,&local_50);
    DAT_14cbcfb85 = '\0';
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597964e FUN_14597964e body=132 status=ok
// SIG undefined FUN_14597964e(void)

void FUN_14597964e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbadcd8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459796d4 FUN_1459796d4 body=87 status=ok
// SIG undefined FUN_1459796d4(void)

void FUN_1459796d4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1459798aa();
  if (param_2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14597972c(param_2);
      FUN_145979794(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14597972c FUN_14597972c body=104 status=ok
// SIG undefined FUN_14597972c(void)

void FUN_14597972c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_14497e828();
    if (lVar1 != 0) {
      lVar2 = FUN_1403ca142();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_145979948(param_1);
        if (*(longlong *)(param_1 + 0x31b0) != 0) {
          FUN_141407870(*(longlong *)(param_1 + 0x31b0),param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145979794 FUN_145979794 body=158 status=ok
// SIG undefined FUN_145979794(void)

void FUN_145979794(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x9c8))();
    if (cVar1 != '\0') {
      cVar1 = FUN_14016169c(param_2,&local_1c);
      if ((cVar1 == '\0') || (local_1c == 0)) {
        cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
        if (cVar1 == '\0') {
          iVar2 = FUN_14487fd02(param_1);
          if (iVar2 != 1) goto LAB_145979825;
        }
        uVar3 = FUN_1401e6c61();
        FUN_140df7d8e(param_2,uVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_145979825:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459798aa FUN_1459798aa body=140 status=ok
// SIG undefined FUN_1459798aa(void)

void FUN_1459798aa(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
    cVar1 = FUN_1414077a0();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x848))(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_14603e1e4(param_1,param_2);
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145979914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x7a0))(param_1,param_2);
          return;
        }
      }
      if (param_1[0x86] == DAT_14cadad70) {
        cVar1 = FUN_1459c7f3e(param_1);
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014597992f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x850))(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145979948 FUN_145979948 body=229 status=ok
// SIG undefined FUN_145979948(void)

void FUN_145979948(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x608);
  if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x31b0) == 0)) {
    lVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    if (lVar1 != 0) {
      plVar2 = (longlong *)plVar2[0x3bd];
    }
    FUN_145ac2604(&local_20);
    if ((longlong)(int)plVar2[0xf] != 0) {
      lVar1 = 0;
      do {
        lVar3 = *(longlong *)(plVar2[0xe] + lVar1);
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x40) == local_20)) {
          lVar1 = FUN_1459ba004();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
            lVar3 = 0;
          }
          else if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          *(longlong *)(param_1 + 0x31b0) = lVar3;
          break;
        }
        lVar1 = lVar1 + 8;
      } while ((longlong)(int)plVar2[0xf] * 8 != lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145979a2e FUN_145979a2e body=51 status=ok
// SIG undefined FUN_145979a2e(void)

void FUN_145979a2e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145979a62();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    FUN_141407bb6(*(longlong *)(lVar1 + 8),param_3);
    return;
  }
  return;
}



// FUNCTION 145979a62 FUN_145979a62 body=375 status=ok
// SIG undefined FUN_145979a62(void)

undefined8 * FUN_145979a62(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    lVar8 = (longlong)*(int *)(param_1 + 0x78) * 0x18;
    do {
      lVar4 = FUN_14479d2ce(puVar7);
      if (lVar4 == param_2) {
        if (puVar7 != (undefined8 *)0x0) {
          return puVar7;
        }
        break;
      }
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
    FUN_14654ea2a(param_1 + 0x70,iVar3);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 0x18);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  FUN_14485c47a(puVar7,param_2);
  plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b401b80;
  FUN_14654e188(plVar5 + 2,param_2,param_1);
  if (plVar5 == (longlong *)0x0) {
    puVar7[1] = 0x10;
    plVar6 = (longlong *)puVar7[2];
    if (plVar6 == (longlong *)0x0) {
      return puVar7;
    }
    puVar7[2] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    puVar7[1] = plVar5 + 2;
    plVar6 = (longlong *)puVar7[2];
    if (plVar5 == plVar6) {
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
      goto LAB_145979b4d;
    }
    puVar7[2] = plVar5;
    if (plVar6 == (longlong *)0x0) goto LAB_145979b4d;
  }
  LOCK();
  plVar2 = plVar6 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return puVar7;
  }
LAB_145979b4d:
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
  return puVar7;
}



// FUNCTION 145979bda FUN_145979bda body=95 status=ok
// SIG undefined FUN_145979bda(void)

ulonglong FUN_145979bda(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145979c1c:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145979c1c;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145979c3a FUN_145979c3a body=188 status=ok
// SIG undefined FUN_145979c3a(void)

void FUN_145979c3a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = FUN_145979d08();
  if (lVar4 != 0) {
    lVar4 = FUN_1411d6a18(param_1);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      puVar3 = *(undefined8 **)(param_1 + 0x40);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
      }
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == *(longlong *)(lVar4 + 0x78))) {
        FUN_1411d5a26(param_1,local_28,*(undefined4 *)(lVar4 + 0x84));
        if (local_24 == '\x01') {
          local_24 = '\0';
        }
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3);
          LOCK();
          piVar1 = (int *)((longlong)puVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145979d08 FUN_145979d08 body=42 status=ok
// SIG undefined FUN_145979d08(void)

undefined8 FUN_145979d08(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (cVar1 = FUN_144729dda(param_1 + 0x18), cVar1 != '\0')
     ) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



// FUNCTION 145979d32 FUN_145979d32 body=69 status=ok
// SIG undefined FUN_145979d32(void)

void FUN_145979d32(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2f8);
  FUN_141407eb4(param_2);
  *param_2 = &PTR_FUN_14b7d1130;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  return;
}



// FUNCTION 145979d78 FUN_145979d78 body=3477 status=ok
// SIG undefined FUN_145979d78(void)

void FUN_145979d78(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_818 [32];
  undefined4 local_7f8;
  undefined2 **local_7f0;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  longlong local_7a0 [2];
  undefined8 local_790;
  undefined1 *local_788;
  undefined1 *puStack_780;
  undefined **local_778 [20];
  longlong *local_6d8;
  longlong local_6c0 [2];
  undefined8 local_6b0;
  undefined1 *local_6a8;
  undefined1 *puStack_6a0;
  undefined **local_698 [20];
  longlong *local_5f8;
  longlong local_5e0 [2];
  undefined8 local_5d0;
  undefined1 *local_5c8;
  undefined1 *puStack_5c0;
  undefined **local_5b8 [20];
  longlong *local_518;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined2 *local_4a8;
  undefined1 *puStack_4a0;
  undefined1 local_288 [176];
  undefined1 local_1d8 [176];
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_818;
  uVar4 = *param_1;
  uVar3 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = DAT_14c84635c;
  FUN_14154bc0c(uVar3,&DAT_14c98db4c,0x40800000);
  FUN_1446ddc76(&local_4b0,"ColorPicker.RoundedSolidBackground",1);
  FUN_1414787f0(uVar4,local_4b0,uVar3);
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5b8[0] = DAT_14c967fc4;
  (**(code **)(*plVar2 + 0xe8))(plVar2,&local_4a8,"Starship/Common/Checker",&DAT_149eca162);
  puVar5 = local_4a8;
  if ((int)puStack_4a0 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_4b8,puVar5,1);
  FUN_14597ab0e(uVar4,local_4b8,local_5b8);
  FUN_1446ddc76(&local_4c0,"ColorPicker.RoundedAlphaBackground",1);
  FUN_1414787f0(plVar2,local_4c0,uVar4);
  if (local_4a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *param_1;
  uVar3 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = DAT_14c84635c;
  local_7f8 = 0x3f800000;
  local_7f0 = &local_4a8;
  FUN_1414fd764(uVar3,&DAT_14c98db24,0x40800000,&DAT_14c98dc28);
  FUN_1446ddc76(&local_4c8,"ColorPicker.RoundedInputBorder",1);
  FUN_1414787f0(uVar4,local_4c8,uVar3);
  uVar4 = *param_1;
  uVar3 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = DAT_14c84635c;
  FUN_14154bc0c(uVar3,&DAT_14c98dc00,0x40800000,&local_4a8);
  FUN_1446ddc76(&local_4d0,"ColorPicker.MultipleValuesBackground",1);
  FUN_1414787f0(uVar4,local_4d0,uVar3);
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5b8[0] = DAT_14c967fc4;
  (**(code **)(*plVar2 + 0xe8))(plVar2,&local_4a8,"Starship/Common/Checker",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 3;
  FUN_14140806a(uVar4,&local_4a8,local_5b8,&DAT_149e1e2f8);
  FUN_1446ddc76(&local_4d8,"ColorPicker.AlphaBackground",1);
  FUN_141408132(plVar2,local_4d8,uVar4);
  if (local_4a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = DAT_14c967fc4;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Icons/eyedropper_16px",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_4e0,"ColorPicker.EyeDropper",1);
  FUN_141408132(plVar2,local_4e0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *param_1;
  uVar3 = FUN_145a4e762();
  FUN_1446ddc76(&local_4e8,"ColorPicker.Font",1);
  FUN_1412cc6a8(uVar4,local_4e8,uVar3);
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = DAT_14c967fc4;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/ColorPicker_Mode_16x",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_4f0,"ColorPicker.Mode",1);
  FUN_141408132(plVar2,local_4f0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4000000040000000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/ColorPicker_Separator",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_4f8,"ColorPicker.Separator",1);
  FUN_141408132(plVar2,local_4f8,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = DAT_14c967f9c;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/Circle",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_500,"ColorPicker.Selector",1);
  FUN_141408132(plVar2,local_500,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  FUN_145931ccc(&local_4a8);
  local_5c8 = &DAT_3f8000003f800000;
  puStack_5c0 = &DAT_3f8000003f800000;
  local_5d0 = 0x4200000041000000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5e0,"Common/ColorPicker_SliderHandle",&DAT_149eca162);
  local_7f0._0_4_ = 1;
  local_7f8 = 0;
  FUN_14140806a(local_5b8,local_5e0,&local_5d0,&local_5c8);
  FUN_140f13d9e(local_128,local_5b8);
  local_6a8 = &DAT_3f8000003f800000;
  puStack_6a0 = &DAT_3f8000003f800000;
  local_6b0 = 0x4200000041000000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_6c0,"Common/ColorPicker_SliderHandle",&DAT_149eca162);
  local_7f0._0_4_ = 1;
  local_7f8 = 0;
  FUN_14140806a(local_698,local_6c0,&local_6b0,&local_6a8);
  FUN_140f13d9e(local_288,local_698);
  local_788 = &DAT_3f8000003f800000;
  puStack_780 = &DAT_3f8000003f800000;
  local_790 = 0x4200000041000000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_7a0,"Common/ColorPicker_SliderHandle",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(local_778,local_7a0,&local_790,&local_788);
  FUN_140f13d9e(local_1d8,local_778);
  FUN_1446ddc76(&local_7a8,"ColorPicker.Slider",1);
  FUN_141408192(plVar2,local_7a8,&local_4a8);
  local_778[0] = &PTR_FUN_149ed05f0;
  if (local_6d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6d8)(local_6d8);
      LOCK();
      piVar1 = (int *)((longlong)local_6d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6d8 + 0x10))(local_6d8);
      }
    }
  }
  if (local_7a0[0] != 0) {
    FUN_1400020a8();
  }
  local_698[0] = &PTR_FUN_149ed05f0;
  if (local_5f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5f8)(local_5f8);
      LOCK();
      piVar1 = (int *)((longlong)local_5f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5f8 + 0x10))(local_5f8);
      }
    }
  }
  if (local_6c0[0] != 0) {
    FUN_1400020a8();
  }
  local_5b8[0] = &PTR_FUN_149ed05f0;
  if (local_518 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_518 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_518)(local_518);
      LOCK();
      piVar1 = (int *)((longlong)local_518 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_518 + 0x10))(local_518);
      }
    }
  }
  if (local_5e0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14130c426(&local_4a8);
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4380000043800000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/ColorSpectrum",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7b0,"ColorSpectrum.Spectrum",1);
  FUN_141408132(plVar2,local_7b0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4100000041000000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/Circle",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7b8,"ColorSpectrum.Selector",1);
  FUN_141408132(plVar2,local_7b8,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = DAT_14c967fc4;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/X",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7c0,"ColorThemes.DeleteButton",1);
  FUN_141408132(plVar2,local_7c0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4340000043400000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/ColorWheel",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7c8,"ColorWheel.HueValueCircle",1);
  FUN_141408132(plVar2,local_7c8,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4100000041000000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/Circle",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7d0,"ColorWheel.Selector",1);
  FUN_141408132(plVar2,local_7d0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4340000043400000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/ColorGradingWheel",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7d8,"ColorGradingWheel.HueValueCircle",1);
  FUN_141408132(plVar2,local_7d8,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_4a8 = (undefined2 *)&DAT_3f8000003f800000;
  puStack_4a0 = &DAT_3f8000003f800000;
  local_698[0] = (undefined **)0x4100000041000000;
  (**(code **)(*plVar2 + 0xe8))(plVar2,local_5b8,"Common/Circle",&DAT_149eca162);
  local_7f0 = (undefined2 **)CONCAT44(local_7f0._4_4_,1);
  local_7f8 = 0;
  FUN_14140806a(uVar4,local_5b8,local_698,&local_4a8);
  FUN_1446ddc76(&local_7e0,"ColorGradingWheel.Selector",1);
  FUN_141408132(plVar2,local_7e0,uVar4);
  if (local_5b8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_818) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597ab0e FUN_14597ab0e body=200 status=ok
// SIG undefined FUN_14597ab0e(void)

undefined8 * FUN_14597ab0e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  local_40 = &DAT_149e1e2f8;
  local_38 = 0;
  local_50 = 1;
  local_58 = 3;
  local_48 = param_3;
  FUN_1412ce282(param_1,4,param_2);
  *param_1 = &PTR_FUN_149eeb588;
  param_1[8] = 0x4010000000000000;
  param_1[9] = 0x4010000000000000;
  param_1[10] = 0x4010000000000000;
  param_1[0xb] = 0x4010000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597abd8 FUN_14597abd8 body=136 status=ok
// SIG undefined FUN_14597abd8(void)

code * FUN_14597abd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeDebugSliceIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1840000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722e9f0;
}



// FUNCTION 14597ac60 FUN_14597ac60 body=138 status=ok
// SIG undefined FUN_14597ac60(void)

code * FUN_14597ac60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamplesPerVoxel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14597abd8;
}



// FUNCTION 14597acea FUN_14597acea body=138 status=ok
// SIG undefined FUN_14597acea(void)

code * FUN_14597acea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2700000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722e1da;
}



// FUNCTION 14597ad74 FUN_14597ad74 body=40 status=ok
// SIG undefined FUN_14597ad74(void)

undefined8 FUN_14597ad74(undefined8 param_1,int param_2)

{
  FUN_14597ad9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597ad9c FUN_14597ad9c body=176 status=ok
// SIG undefined FUN_14597ad9c(void)

void FUN_14597ad9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abf9d60;
  param_1[5] = &PTR_FUN_14abfa080;
  FUN_1449db362(param_1 + 0x29);
  FUN_14597ae4c(param_1 + 0x1f);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14597ae89(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abf4960;
  param_1[5] = &PTR_LAB_14abf4c80;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a11f0(param_1);
  return;
}



// FUNCTION 14597ae4c FUN_14597ae4c body=61 status=ok
// SIG undefined FUN_14597ae4c(void)

void FUN_14597ae4c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_14597ae89(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597ae89 FUN_14597ae89 body=49 status=ok
// SIG undefined FUN_14597ae89(void)

void FUN_14597ae89(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14597aeba FUN_14597aeba body=106 status=ok
// SIG undefined FUN_14597aeba(void)

void FUN_14597aeba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14597af24(puVar1);
  *puVar1 = &PTR_FUN_14bdbba10;
  *(undefined2 *)(puVar1 + 0x1c) = 0x101;
  *(undefined4 *)((longlong)puVar1 + 0xe4) = 1;
  puVar1[0x1d] = 0x3e4ccccd3e4ccccd;
  *(undefined1 *)(puVar1 + 0x1e) = 1;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0x3e8000003e800000;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xbf) = 2;
  return;
}



// FUNCTION 14597af24 FUN_14597af24 body=145 status=ok
// SIG undefined FUN_14597af24(void)

undefined8 * FUN_14597af24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14597afb6(param_1,uVar1);
  *param_1 = &PTR_FUN_14bdbd510;
  *(undefined4 *)(param_1 + 0x17) = 5000;
  *(undefined4 *)(param_1 + 0x16) = 0x3e800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x1400000002;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x500000014;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0x1b) = 0x42340000;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  return param_1;
}



// FUNCTION 14597afb6 FUN_14597afb6 body=75 status=ok
// SIG undefined FUN_14597afb6(void)

undefined8 * FUN_14597afb6(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *(undefined4 *)((longlong)param_1 + 0xa9) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0xad) = 0;
  *param_1 = &PTR_FUN_14bd6cb40;
  *(undefined4 *)(param_1 + 0x16) = 0x3dcccccd;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  return param_1;
}



// FUNCTION 14597b002 FUN_14597b002 body=40 status=ok
// SIG undefined FUN_14597b002(void)

undefined8 FUN_14597b002(undefined8 param_1,int param_2)

{
  FUN_14597b02a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597b02a FUN_14597b02a body=105 status=ok
// SIG undefined FUN_14597b02a(void)

void FUN_14597b02a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3cd500;
  param_1[5] = &PTR_FUN_14b3cd9c0;
  param_1[6] = &PTR_LAB_14b3cda00;
  param_1[0x22] = &PTR_FUN_14b3cda50;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 14597b094 FUN_14597b094 body=96 status=ok
// SIG undefined FUN_14597b094(void)

ulonglong FUN_14597b094(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14597b0d7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14597b0d7;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14597b0fc FUN_14597b0fc body=58 status=ok
// SIG undefined FUN_14597b0fc(void)

void FUN_14597b0fc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x160);
  if (lVar2 != 0) {
    iVar1 = FUN_14597b136(lVar2);
    if (0 < iVar1) {
      return;
    }
  }
  FUN_14597b13e(param_1,0);
  return;
}



// FUNCTION 14597b136 FUN_14597b136 body=7 status=ok
// SIG undefined FUN_14597b136(void)

undefined4 FUN_14597b136(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x680);
}



// FUNCTION 14597b13e FUN_14597b13e body=360 status=ok
// SIG undefined FUN_14597b13e(void)

void FUN_14597b13e(longlong param_1,char param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  float local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x194) != param_2) {
    *(char *)(param_1 + 0x194) = param_2;
    lVar3 = FUN_140f7f142();
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      if (*(char *)(param_1 + 0x194) == '\0') {
        puVar4 = (undefined8 *)(param_1 + 0x198);
        lVar3 = FUN_144a61814(uVar1,puVar4);
        if (lVar3 != 0) {
          FUN_1405a424c(uVar1,*puVar4);
        }
        *puVar4 = 0;
      }
      else {
        uVar2 = rand();
        FUN_14597b2a8(local_a8,param_1);
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,local_a8);
        local_58 = 1;
        local_b8 = 1;
        local_b0 = (float)(uVar2 & 0x7fff) / 32767.0;
        FUN_1406f3fee(uVar1,param_1 + 0x198,&local_98,0x40400000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(local_a8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597b2a8 FUN_14597b2a8 body=423 status=ok
// SIG undefined FUN_14597b2a8(void)

longlong * FUN_14597b2a8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14597b37f:
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b3d0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1457d5cf8;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14597b37f;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b3d0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1457d5cf8;
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



// FUNCTION 14597b450 FUN_14597b450 body=119 status=ok
// SIG undefined FUN_14597b450(void)

void FUN_14597b450(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
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



// FUNCTION 14597b4c8 FUN_14597b4c8 body=54 status=ok
// SIG undefined FUN_14597b4c8(void)

void FUN_14597b4c8(void)

{
  FUN_141408f06();
  if (DAT_14cb82380 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb82360 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597b504 FUN_14597b504 body=340 status=ok
// SIG undefined FUN_14597b504(void)

void FUN_14597b504(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = param_2[3];
  FUN_1400021e4(local_50,local_40);
  cVar1 = FUN_144a791f8(local_40,L"SKEL_",5,1);
  if (cVar1 == '\0') {
    local_30 = param_2[3];
    FUN_1400021e4(&local_30,local_50);
    cVar1 = FUN_144a791f8(local_50,L"Default__SKEL_",0xe,1);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar1 = '\x01';
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 == (longlong *)0x0 || cVar1 != '\0') goto LAB_14597b638;
  lVar2 = FUN_141409182();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_14597b638;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(param_1);
      lVar2 = *(longlong *)(param_1 + 0x110);
      if (lVar2 == 0) goto LAB_14597b627;
    }
    lVar3 = FUN_141409182();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14597b627;
  }
  else {
LAB_14597b627:
    lVar2 = 0;
  }
  (**(code **)(*param_2 + 0x358))(param_2,lVar2);
LAB_14597b638:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597b659 FUN_14597b659 body=177 status=ok
// SIG undefined FUN_14597b659(void)

undefined8 FUN_14597b659(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14597b70c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597b70c FUN_14597b70c body=221 status=ok
// SIG undefined FUN_14597b70c(void)

longlong FUN_14597b70c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb39ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481111c3;
    local_40 = FUN_14646d598;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponentPool",&DAT_14cb39ea0,&DAT_1481111c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb39ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597b7ea FUN_14597b7ea body=183 status=ok
// SIG undefined FUN_14597b7ea(void)

void FUN_14597b7ea(undefined8 param_1,longlong param_2)

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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_14053d8da(plVar1);
  FUN_140368c45(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597b8a2 thunk_FUN_14053d8da body=7 status=ok
// SIG undefined thunk_FUN_14053d8da(void)

void thunk_FUN_14053d8da(undefined8 param_1)

{
  FUN_14053d8da(param_1,1);
  return;
}



// FUNCTION 14597b8ce FUN_14597b8ce body=74 status=ok
// SIG undefined FUN_14597b8ce(void)

undefined8 * FUN_14597b8ce(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8cea0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0x41200000;
  return param_1;
}



// FUNCTION 14597b920 FUN_14597b920 body=549 status=ok
// SIG undefined FUN_14597b920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597b920(longlong *param_1,double *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  double *pdVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = *(uint *)param_2 ^ (uint)DAT_149931e80;
  uStack_54 = *(uint *)((longlong)param_2 + 4) ^ DAT_149931e80._4_4_;
  uStack_50 = *(uint *)(param_2 + 1) ^ DAT_149931e80._8_4_;
  uStack_4c = *(uint *)((longlong)param_2 + 0xc) ^ DAT_149931e80._12_4_;
  local_48 = (double)CONCAT44((uint)((ulonglong)param_2[2] >> 0x20) ^ DAT_149931e80._4_4_,
                              SUB84(param_2[2],0) ^ (uint)DAT_149931e80);
  (**(code **)*param_1)(&local_70,((undefined8 *)*param_1)[1],param_2);
  (**(code **)*param_1)(&local_88,((undefined8 *)*param_1)[1],&local_58);
  pdVar11 = &local_a0;
  (**(code **)param_1[1])(pdVar11,((undefined8 *)param_1[1])[1],&local_58);
  (**(code **)param_1[1])(&local_b8,((undefined8 *)param_1[1])[1],param_2);
  dVar2 = param_2[1];
  dVar3 = *param_2;
  dVar4 = param_2[2];
  plVar10 = (longlong *)param_1[2];
  iVar12 = (int)plVar10[1];
  lVar13 = (longlong)iVar12;
  uVar9 = iVar12 + 1;
  *(uint *)(plVar10 + 1) = uVar9;
  if ((local_78 - local_a8) * local_48 +
      ((double)CONCAT44(uStack_84,local_88) - local_b8) * (double)CONCAT44(uStack_54,local_58) +
      ((double)CONCAT44(uStack_7c,uStack_80) - dStack_b0) * (double)CONCAT44(uStack_4c,uStack_50) <
      (local_60 - local_90) * dVar4 +
      ((double)CONCAT44(uStack_6c,local_70) - local_a0) * dVar3 +
      ((double)CONCAT44(uStack_64,uStack_68) - local_98) * dVar2) {
    if (*(uint *)((longlong)plVar10 + 0xc) < uVar9) {
      FUN_14026a4e8(plVar10,iVar12);
    }
    lVar5 = *plVar10;
    *(double *)(lVar5 + 0x10 + lVar13 * 0x18) = local_60;
    puVar1 = (undefined4 *)(lVar5 + lVar13 * 0x18);
    *puVar1 = local_70;
    puVar1[1] = uStack_6c;
    puVar1[2] = uStack_68;
    puVar1[3] = uStack_64;
    plVar10 = (longlong *)param_1[3];
    iVar12 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar12 + 1U) {
      FUN_14026a4e8(plVar10,iVar12);
    }
  }
  else {
    if (*(uint *)((longlong)plVar10 + 0xc) < uVar9) {
      FUN_14026a4e8(plVar10,iVar12);
    }
    lVar5 = *plVar10;
    *(double *)(lVar5 + 0x10 + lVar13 * 0x18) = local_78;
    puVar1 = (undefined4 *)(lVar5 + lVar13 * 0x18);
    *puVar1 = local_88;
    puVar1[1] = uStack_84;
    puVar1[2] = uStack_80;
    puVar1[3] = uStack_7c;
    plVar10 = (longlong *)param_1[3];
    iVar12 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar12 + 1U;
    pdVar11 = &local_b8;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar12 + 1U) {
      FUN_14026a4e8(plVar10,iVar12);
    }
  }
  lVar13 = *plVar10;
  *(double *)(lVar13 + 0x10 + (longlong)iVar12 * 0x18) = pdVar11[2];
  uVar6 = *(undefined4 *)((longlong)pdVar11 + 4);
  uVar7 = *(undefined4 *)(pdVar11 + 1);
  uVar8 = *(undefined4 *)((longlong)pdVar11 + 0xc);
  puVar1 = (undefined4 *)(lVar13 + (longlong)iVar12 * 0x18);
  *puVar1 = *(undefined4 *)pdVar11;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597bb4c FUN_14597bb4c body=68 status=ok
// SIG undefined FUN_14597bb4c(void)

undefined8 FUN_14597bb4c(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 2) % 2 & 0x80000001U) != 1) {
    cVar1 = FUN_144880847(*param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_14019108b(*param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14597bb9c FUN_14597bb9c body=135 status=ok
// SIG undefined FUN_14597bb9c(void)

undefined8 * FUN_14597bb9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d79a0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0xc1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 14597bc2e FUN_14597bc2e body=158 status=ok
// SIG undefined FUN_14597bc2e(void)

longlong * FUN_14597bc2e(longlong *param_1)

{
  FUN_14597bccc();
  *param_1 = (longlong)&PTR_FUN_14a843f60;
  param_1[5] = (longlong)&PTR_FUN_14a844960;
  param_1[6] = (longlong)&PTR_LAB_14a8449a0;
  param_1[0x55] = (longlong)&PTR_FUN_14a8449f0;
  param_1[0x56] = (longlong)&PTR_FUN_14a844a70;
  param_1[0x57] = (longlong)&PTR_FUN_14a844a80;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  return param_1;
}



// FUNCTION 14597bccc FUN_14597bccc body=123 status=ok
// SIG undefined FUN_14597bccc(void)

undefined8 * FUN_14597bccc(undefined8 *param_1)

{
  FUN_14076ac9c();
  *param_1 = &PTR_FUN_14a87d430;
  param_1[5] = &PTR_FUN_14a87de30;
  param_1[6] = &PTR_LAB_14a87de70;
  param_1[0x55] = &PTR_FUN_14a87dec0;
  param_1[0x56] = &PTR_FUN_14a87df40;
  param_1[0x57] = &PTR_FUN_14a87df50;
  *(undefined4 *)(param_1 + 200) = 0x42000000;
  *(undefined4 *)(param_1 + 0xc5) = 0xffff0000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  return param_1;
}



// FUNCTION 14597bd56 FUN_14597bd56 body=59 status=ok
// SIG undefined FUN_14597bd56(void)

undefined8 * FUN_14597bd56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b067d60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597bda0 FUN_14597bda0 body=59 status=ok
// SIG undefined FUN_14597bda0(void)

undefined8 * FUN_14597bda0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14597bdea FUN_14597bdea body=59 status=ok
// SIG undefined FUN_14597bdea(void)

undefined8 * FUN_14597bdea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14597be34 FUN_14597be34 body=59 status=ok
// SIG undefined FUN_14597be34(void)

undefined8 * FUN_14597be34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7b9cf0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597be6f FUN_14597be6f body=85 status=ok
// SIG undefined FUN_14597be6f(void)

void FUN_14597be6f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14597bec4(puVar1);
  *puVar1 = &PTR_FUN_14bd15f10;
  puVar1[5] = &PTR_FUN_14bd161b0;
  puVar1[0x12] = &PTR_FUN_14bd16220;
  puVar1[0x29] = DAT_14cc1c4c0;
  puVar1[0x2a] = DAT_14cc1cc40;
  return;
}



// FUNCTION 14597bec4 FUN_14597bec4 body=196 status=ok
// SIG undefined FUN_14597bec4(void)

undefined8 * FUN_14597bec4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14597bf88(param_1,uVar1);
  *param_1 = &PTR_FUN_14bd1ffa0;
  param_1[5] = &PTR_FUN_14bd20240;
  param_1[0x12] = &PTR_FUN_14bd202b0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 2;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 2;
  return param_1;
}



// FUNCTION 14597bf88 FUN_14597bf88 body=84 status=ok
// SIG undefined FUN_14597bf88(void)

undefined8 * FUN_14597bf88(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bd1a670;
  param_1[5] = &PTR_FUN_14bd1a910;
  *(undefined4 *)(param_1 + 6) = 5;
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
  param_1[0x11] = 2;
  return param_1;
}



// FUNCTION 14597bfdc FUN_14597bfdc body=527 status=ok
// SIG undefined FUN_14597bfdc(void)

undefined4
FUN_14597bfdc(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined1 *param_5,int *param_6,undefined1 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined4 *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [6];
  undefined1 local_c8 [16];
  undefined1 local_b8;
  longlong local_78;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
  }
  FUN_144ae1dc6(local_c8,&DAT_14cad0f68);
  local_b8 = param_7;
  lVar2 = 4;
  if (*param_6 - 2U < 2) {
LAB_14597c0a6:
    if (*(float *)((longlong)param_6 + lVar2) <= 0.0001) {
LAB_14597c177:
      local_108 = param_4[2];
      local_118 = *param_4;
      uStack_110 = param_4[1];
      local_138 = *param_3;
      uStack_134 = param_3[1];
      uStack_130 = param_3[2];
      uStack_12c = param_3[3];
      local_128 = *(undefined8 *)(param_3 + 4);
      local_1a8 = local_c8;
      uVar1 = (**(code **)(*param_1 + 0x978))(param_1,param_2);
      goto LAB_14597c1bc;
    }
  }
  else {
    if (*param_6 != 1) goto LAB_14597c177;
    if (((float)param_6[1] <= 0.0001) && (lVar2 = 0xc, (float)param_6[2] <= 0.0001))
    goto LAB_14597c0a6;
  }
  FUN_144a73fdc(local_f8,param_5,param_6);
  local_148 = param_4[2];
  local_158 = *param_4;
  uStack_150 = param_4[1];
  local_178 = *param_3;
  uStack_174 = param_3[1];
  uStack_170 = param_3[2];
  uStack_16c = param_3[3];
  local_168 = *(undefined8 *)(param_3 + 4);
  local_180 = &DAT_14cad0f08;
  local_188 = &DAT_14cad0f10;
  local_198 = DAT_14cad0ec4;
  local_1a0 = local_f8[0];
  local_1a8 = param_5;
  local_190 = local_c8;
  uVar1 = (**(code **)(*param_1 + 0x980))(param_1,param_2);
  FUN_144aa6594(local_f8);
LAB_14597c1bc:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14597c210 FUN_14597c210 body=14 status=ok
// SIG undefined FUN_14597c210(void)

void FUN_14597c210(undefined8 param_1,undefined8 param_2)

{
  FUN_14597c21e(param_2,param_1);
  return;
}



// FUNCTION 14597c21e FUN_14597c21e body=397 status=ok
// SIG undefined FUN_14597c21e(void)

ulonglong FUN_14597c21e(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                       undefined8 param_5,int *param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  undefined8 local_90;
  int *local_88;
  undefined4 *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  longlong local_60;
  undefined1 *local_58;
  code *local_50;
  longlong **local_48;
  longlong local_40;
  undefined1 local_31;
  longlong local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_21 = param_7;
  local_31 = 0;
  local_30 = param_2;
  if (*param_6 - 2U < 2) {
    lVar7 = 4;
  }
  else {
    if (*param_6 != 1) goto LAB_14597c276;
    if ((0.0001 < (float)param_6[1]) || (lVar7 = 0xc, 0.0001 < (float)param_6[2]))
    goto LAB_14597c2b8;
  }
  if (0.0001 < *(float *)((longlong)param_6 + lVar7)) {
LAB_14597c2b8:
    uVar6 = *param_3;
    uVar5 = param_3[1];
    *(undefined8 *)(param_1 + 0x80) = param_3[2];
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_4 + 4);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = uVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    local_40 = *(longlong *)(param_2 + 0x108);
    if (*(longlong *)(param_2 + 0x108) == 0) {
      local_40 = param_2;
    }
    local_70 = &local_40;
    local_98 = &local_30;
    local_48 = &local_98;
    local_90 = param_5;
    local_88 = param_6;
    local_68 = &local_21;
    local_58 = &local_31;
    local_50 = FUN_143637266;
    local_80 = param_4;
    local_78 = param_3;
    local_60 = param_1;
    uVar6 = FUN_1448e6002(local_40 + 0x138);
    if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),local_31) & 0xffffffffffffff01;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14597c276:
  local_a8 = param_7;
  local_a0 = 0;
  FUN_14597c3ae();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14597c3ae FUN_14597c3ae body=390 status=ok
// SIG undefined FUN_14597c3ae(void)

ulonglong FUN_14597c3ae(longlong param_1,longlong param_2,double *param_3,double *param_4,
                       undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  double *local_98;
  double *local_90;
  undefined1 *local_88;
  float *local_80;
  longlong local_78;
  double *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined8 **local_50;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_21;
  longlong local_20;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_11 = param_6;
  local_12 = param_5;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  *(double *)(param_1 + 0x80) = param_3[2];
  *(double *)(param_1 + 0x70) = dVar1;
  *(double *)(param_1 + 0x78) = dVar2;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  *(double *)(param_1 + 0x98) = param_4[2];
  *(double *)(param_1 + 0x88) = dVar1;
  *(double *)(param_1 + 0x90) = dVar2;
  local_21 = 0;
  local_30 = param_4[2] - param_3[2];
  local_38 = param_4[1] - param_3[1];
  local_40 = *param_4 - *param_3;
  local_44 = (float)SQRT(local_30 * local_30 + local_40 * local_40 + local_38 * local_38);
  local_20 = param_2;
  if (local_44 <= 0.0001) {
    uVar4 = 0;
  }
  else {
    local_a0 = &local_20;
    local_50 = &local_a0;
    local_90 = &local_40;
    local_88 = &local_12;
    local_80 = &local_44;
    local_68 = &local_11;
    local_60 = &local_21;
    local_58 = FUN_14363685a;
    local_98 = param_3;
    local_78 = param_1;
    local_70 = param_4;
    uVar3 = FUN_1448e6002(param_2 + 0x138);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),local_21);
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597c536 FUN_14597c536 body=117 status=ok
// SIG undefined FUN_14597c536(void)

void FUN_14597c536(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_28 = &LAB_14579c100;
    local_20 = 0;
    FUN_14597c5bc(*(longlong *)(param_1 + 0x30) + 0x18,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597c5bc FUN_14597c5bc body=423 status=ok
// SIG undefined FUN_14597c5bc(void)

void FUN_14597c5bc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14597c692:
    *puVar5 = &PTR_LAB_14b420820;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4214f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14597c692;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b420820;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4214f0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014597c74b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14597c764 FUN_14597c764 body=40 status=ok
// SIG undefined FUN_14597c764(void)

undefined8 FUN_14597c764(undefined8 param_1,int param_2)

{
  FUN_14597c78c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597c78c FUN_14597c78c body=151 status=ok
// SIG undefined FUN_14597c78c(void)

void FUN_14597c78c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4d2c70;
  FUN_14597c87f(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14597c8c2(param_1 + 0x1a);
  FUN_14597c824(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14597c824 FUN_14597c824 body=91 status=ok
// SIG undefined FUN_14597c824(void)

void FUN_14597c824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4d9d98;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597c87f FUN_14597c87f body=67 status=ok
// SIG undefined FUN_14597c87f(void)

void FUN_14597c87f(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(param_1 + 0x20)])(param_1);
      if (*(longlong *)(param_1 + -0x18) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14597c8c2 FUN_14597c8c2 body=55 status=ok
// SIG undefined FUN_14597c8c2(void)

void FUN_14597c8c2(longlong *param_1)

{
  FUN_14597c8fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597c8fa FUN_14597c8fa body=391 status=ok
// SIG undefined FUN_14597c8fa(void)

void FUN_14597c8fa(longlong *param_1,int param_2)

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
      FUN_1457cc40c(*local_70 + (longlong)iStack_54 * 0x6f8 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14597ca84(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597ca84 FUN_14597ca84 body=116 status=ok
// SIG undefined FUN_14597ca84(void)

void FUN_14597ca84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x6f8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x6f8)) {
      uVar2 = uVar1 / 0x6f8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x6f8,8);
  }
  return;
}


