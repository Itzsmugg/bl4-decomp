// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145710588 FUN_145710588 body=244 status=ok
// SIG undefined FUN_145710588(void)

undefined8 FUN_145710588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b47b1f0;
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
  *local_38 = &PTR_FUN_14b478b20;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14104fb30;
  FUN_145aa2ff8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571067e FUN_14571067e body=244 status=ok
// SIG undefined FUN_14571067e(void)

undefined8 FUN_14571067e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b4332c0;
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
  *local_38 = &PTR_FUN_14b478c00;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1459b2e9e;
  FUN_14572a21a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145710774 FUN_145710774 body=244 status=ok
// SIG undefined FUN_145710774(void)

undefined8 FUN_145710774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3e62a0;
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
  *local_38 = &PTR_FUN_14b478c70;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145c11df4;
  FUN_141285884(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571086a FUN_14571086a body=694 status=ok
// SIG undefined FUN_14571086a(void)

undefined8 * FUN_14571086a(longlong param_1,undefined8 *param_2,undefined8 ***param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  longlong local_50;
  undefined8 **local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (undefined8 ***)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  local_48 = param_3;
  if ((~DAT_14c950c29 & 1) == 0 && param_3 != (undefined8 ***)0x0) {
    FUN_1456cec3c(param_3);
  }
  plVar5 = (longlong *)(param_1 + 0x80);
  if ((param_3 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  uVar1 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  iVar2 = FUN_145710b22(plVar5,uVar1,&local_48);
  if (iVar2 == -1) {
    lVar3 = FUN_145710bf2(param_3);
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_1447f71cc(lVar4,0x40000000);
    local_50 = lVar3;
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_58 = param_3;
    if ((param_3 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    local_48 = &local_58;
    local_40 = &local_50;
    FUN_145710c8a(plVar5,local_34);
  }
  else {
    if (DAT_14c950c29 == 1 && param_3 != (undefined8 ***)0x0) {
      FUN_1456cec3c(param_3);
    }
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != (undefined8 ***)0x0) {
      FUN_1456cec3c(param_3);
    }
    local_48 = param_3;
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != (undefined8 ***)0x0) {
      FUN_1456cec3c(param_3);
    }
    if ((param_3 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    iVar2 = FUN_145710b22(plVar5,uVar1,&local_48);
    if ((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x18 + *plVar5, lVar3 == 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 8);
      if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
    }
  }
  *param_2 = 0;
  FUN_14485c47a(param_2,lVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145710b22 FUN_145710b22 body=208 status=ok
// SIG undefined FUN_145710b22(void)

int FUN_145710b22(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
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



// FUNCTION 145710bf2 FUN_145710bf2 body=150 status=ok
// SIG undefined FUN_145710bf2(void)

undefined8 FUN_145710bf2(undefined8 param_1)

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
  uVar1 = FUN_145862e44();
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



// FUNCTION 145710c8a FUN_145710c8a body=357 status=ok
// SIG undefined FUN_145710c8a(void)

undefined4 * FUN_145710c8a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145710eec(param_1,local_48);
  FUN_145710df0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145710e48(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_145710fd4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145710df0 FUN_145710df0 body=87 status=ok
// SIG undefined FUN_145710df0(void)

longlong * FUN_145710df0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145710e48 FUN_145710e48 body=162 status=ok
// SIG undefined FUN_145710e48(void)

undefined8 FUN_145710e48(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_145710b22(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1489f7b26(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145710e6c;
    }
  }
  uVar6 = 0;
LAB_145710e6c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145710eec FUN_145710eec body=231 status=ok
// SIG undefined FUN_145710eec(void)

int * FUN_145710eec(longlong *param_1,int *param_2)

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



// FUNCTION 145710fd4 FUN_145710fd4 body=517 status=ok
// SIG undefined FUN_145710fd4(void)

void FUN_145710fd4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457111da FUN_1457111da body=136 status=ok
// SIG undefined FUN_1457111da(void)

code * FUN_1457111da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlbedoAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472162b8;
}



// FUNCTION 145711262 FUN_145711262 body=138 status=ok
// SIG undefined FUN_145711262(void)

code * FUN_145711262(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472165f4;
}



// FUNCTION 1457112ec FUN_1457112ec body=138 status=ok
// SIG undefined FUN_1457112ec(void)

code * FUN_1457112ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721622e;
}



// FUNCTION 145711376 FUN_145711376 body=148 status=ok
// SIG undefined FUN_145711376(void)

void FUN_145711376(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xa00);
  if (*(longlong *)(param_1 + 0xa00) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xa2c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0xa28) * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xa2c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xa28);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0xa28) = param_2;
  *(int *)(param_1 + 0xa2c) = *(int *)(param_1 + 0xa2c) + 1;
  lVar5 = param_1 + 0xa10;
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xa18);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14571140a FUN_14571140a body=146 status=ok
// SIG undefined FUN_14571140a(void)

void FUN_14571140a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14571149e FUN_14571149e body=143 status=ok
// SIG undefined FUN_14571149e(void)

void FUN_14571149e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14571152e FUN_14571152e body=205 status=ok
// SIG undefined FUN_14571152e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571152e(void)

{
  if ((DAT_14ca6b12f & 2) == 0) {
    DAT_14ca6b12f = DAT_14ca6b12f | 2;
    _DAT_14ca6b0d0 = L"FWriteToBoundingSphereVS";
    _DAT_14ca6b0e8 = FUN_146826540;
    _DAT_14ca6b0f0 = FUN_146825d77;
    _DAT_14ca6b0f8 = FUN_146825fd6;
    _DAT_14ca6b100 = FUN_1407e02ea;
    _DAT_14ca6b108 = FUN_146826273;
    _DAT_14ca6b0e0 = FUN_147334906;
    _DAT_14ca6b120 = 0xffffffff000000e0;
    _DAT_14ca6b128 = 8;
    DAT_14ca6b12c = 0;
    _DAT_14ca6b110 = &LAB_147334930;
    FUN_1457115fc();
    FUN_1407e00cc(&DAT_14ca6b0c8);
    return;
  }
  return;
}



// FUNCTION 1457115fc FUN_1457115fc body=123 status=ok
// SIG undefined FUN_1457115fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457115fc(void)

{
  _DAT_14ca6d520 = L"BASE";
  DAT_14ca6d54a = 4;
  _DAT_14ca6d528 = FUN_140b35ae4();
  _DAT_14ca6d530 = DAT_14ca6b0d8;
  _DAT_14ca6d538 = &LAB_14682652b;
  DAT_14ca6b0d8 = &DAT_14ca6d520;
  DAT_14ca6b12d = DAT_14ca6b12d + '\x01';
  _DAT_14ca6d540 = 0x100000000;
  if (*(char *)(_DAT_14ca6d528 + 100) != '\0') {
    DAT_14ca6b12e = DAT_14ca6b12e + '\x01';
  }
  return;
}



// FUNCTION 145711678 FUN_145711678 body=226 status=ok
// SIG undefined FUN_145711678(void)

longlong * FUN_145711678(longlong *param_1)

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
  pcVar13 = FUN_146314ec2;
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



// FUNCTION 14571175c FUN_14571175c body=138 status=ok
// SIG undefined FUN_14571175c(void)

undefined1 * FUN_14571175c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d16ad2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricFogParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricFogIntegrationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6cb58;
  return &LAB_14733986c;
}



// FUNCTION 1457117e6 FUN_1457117e6 body=138 status=ok
// SIG undefined FUN_1457117e6(void)

code * FUN_1457117e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToVolumeClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000123;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14571175c;
}



// FUNCTION 145711870 FUN_145711870 body=138 status=ok
// SIG undefined FUN_145711870(void)

code * FUN_145711870(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewSpaceBoundingSphere";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473397e2;
}



// FUNCTION 1457118fa FUN_1457118fa body=63 status=ok
// SIG undefined FUN_1457118fa(void)

void FUN_1457118fa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14571193a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14571193a FUN_14571193a body=105 status=ok
// SIG undefined FUN_14571193a(void)

ulonglong FUN_14571193a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 1457119a4 FUN_1457119a4 body=139 status=ok
// SIG undefined FUN_1457119a4(void)

void FUN_1457119a4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 8 + (longlong)(int)param_2 * 0x30);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x30 + lVar3),(longlong)iVar6 * 0x30);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145711a30 FUN_145711a30 body=129 status=ok
// SIG undefined FUN_145711a30(void)

void FUN_145711a30(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x198) == 0) {
    return;
  }
  uVar3 = (longlong)*(int *)(param_1 + 0x198) * 0x10;
  uVar2 = 0;
  do {
    if (*(int *)(*(longlong *)(param_1 + 400) + uVar2) == param_2) {
      if ((int)(~uVar2 >> 4) == 0) {
        return;
      }
      uVar2 = 0;
      iVar1 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 400) + uVar2) == param_2) {
          if (iVar1 == 1) {
            return;
          }
          FUN_145711b4c(param_1 + 400,-iVar1);
          FUN_145711ab2(param_1 + 400);
          return;
        }
        iVar1 = iVar1 + -1;
        uVar2 = uVar2 + 0x10;
      } while (uVar3 != uVar2);
      return;
    }
    uVar2 = uVar2 + 0x10;
  } while (uVar3 != uVar2);
  return;
}



// FUNCTION 145711ab2 FUN_145711ab2 body=62 status=ok
// SIG undefined FUN_145711ab2(void)

void FUN_145711ab2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145711af0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145711af0 FUN_145711af0 body=91 status=ok
// SIG undefined FUN_145711af0(void)

ulonglong FUN_145711af0(uint param_1,uint param_2)

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



// FUNCTION 145711b4c FUN_145711b4c body=106 status=ok
// SIG undefined FUN_145711b4c(void)

void FUN_145711b4c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_145711bb6(*(undefined8 *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10));
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x10 + lVar1),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145711bb6 FUN_145711bb6 body=66 status=ok
// SIG undefined FUN_145711bb6(void)

void FUN_145711bb6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145711bf8 FUN_145711bf8 body=161 status=ok
// SIG undefined FUN_145711bf8(void)

undefined8 * FUN_145711bf8(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)*param_1;
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  else {
    param_2[2] = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    *param_2 = *(undefined8 *)(lVar1 + 8);
    param_2[1] = uVar5;
    param_2[3] = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    param_2[4] = *(undefined8 *)(lVar1 + 0x28);
    param_2[5] = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(lVar1 + 0x3c);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    uVar2 = *(undefined4 *)(lVar1 + 0x44);
    uVar3 = *(undefined4 *)(lVar1 + 0x48);
    uVar4 = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
    param_2[9] = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar1 + 0x58);
    *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(lVar1 + 0x5c);
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined1 *)(param_2 + 0xb) = 1;
    FUN_145711c9a(lVar1 + 8);
    *param_1 = lVar1;
  }
  return param_2;
}



// FUNCTION 145711c9a FUN_145711c9a body=82 status=ok
// SIG undefined FUN_145711c9a(void)

void FUN_145711c9a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
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



// FUNCTION 145711cec FUN_145711cec body=101 status=ok
// SIG undefined FUN_145711cec(void)

int FUN_145711cec(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x68;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 8) == param_3[1])) &&
           (*(longlong *)(lVar2 + lVar4 + 0x10) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 145711d52 FUN_145711d52 body=275 status=ok
// SIG undefined FUN_145711d52(void)

void FUN_145711d52(longlong *param_1)

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
      FUN_145711c9a((longlong)iStack_44 * 0x68 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145711e66 FUN_145711e66 body=322 status=ok
// SIG undefined FUN_145711e66(void)

void FUN_145711e66(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 145711faa FUN_145711faa body=72 status=ok
// SIG undefined FUN_145711faa(void)

void FUN_145711faa(undefined8 *param_1)

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



// FUNCTION 145711ff2 FUN_145711ff2 body=113 status=ok
// SIG undefined FUN_145711ff2(void)

void FUN_145711ff2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x60);
  FUN_145711c9a(lVar3 + *param_1);
  FUN_14740f5cc(param_1,param_2);
  return;
}



// FUNCTION 145712064 FUN_145712064 body=226 status=ok
// SIG undefined FUN_145712064(void)

longlong * FUN_145712064(longlong *param_1)

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
  pcVar13 = FUN_14630db60;
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



// FUNCTION 14571214c FUN_14571214c body=132 status=ok
// SIG undefined FUN_14571214c(void)

undefined1 * FUN_14571214c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTextureInvExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145712148;
}



// FUNCTION 1457121d0 FUN_1457121d0 body=138 status=ok
// SIG undefined FUN_1457121d0(void)

code * FUN_1457121d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplinePosTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14571214c;
}



// FUNCTION 14571225a FUN_14571225a body=100 status=ok
// SIG undefined FUN_14571225a(void)

void FUN_14571225a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_10 = param_1[1];
  local_28 = param_1;
  local_20 = param_2;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    FUN_1457122c0();
  }
  else {
    FUN_1468e98d4(&local_28,param_1[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457122c0 FUN_1457122c0 body=242 status=ok
// SIG undefined FUN_1457122c0(void)

longlong FUN_1457122c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  code **local_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong *local_40;
  int local_38;
  code *local_30;
  undefined1 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_90 = param_1[2];
  local_40 = &local_80;
  local_78 = param_1[3];
  local_70 = param_1[1];
  local_50 = &local_88;
  local_60 = &local_90;
  local_38 = *(int *)(lVar1 + 0x18);
  lVar3 = (longlong)local_38;
  local_28 = &local_48;
  local_48 = &LAB_1458ccf2a;
  local_a0 = &local_30;
  local_30 = FUN_1458cced8;
  local_a8 = &local_58;
  local_58 = &LAB_1468e9c90;
  local_68 = &LAB_145712488;
  local_88 = local_90;
  local_80 = local_90;
  iVar2 = FUN_1457123b4(param_2,local_70,lVar1 + 0x1c);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return (longlong)iVar2 * (longlong)*(int *)(lVar1 + 0x2c) + *param_2 + lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457123b4 FUN_1457123b4 body=210 status=ok
// SIG undefined FUN_1457123b4(void)

void FUN_1457123b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_2;
  uVar1 = (*(code *)*param_4)(param_4[1]);
  local_50 = *param_5;
  local_78 = &local_50;
  local_48 = param_5[1];
  iVar2 = FUN_140bb86ae(param_1,param_2,param_3,uVar1);
  if (iVar2 == -1) {
    local_60 = *param_6;
    local_78 = &local_60;
    local_58 = param_6[1];
    local_70 = *param_4;
    local_68 = param_4[1];
    FUN_140bb87b6(param_1,param_3,&local_70,uVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145712494 FUN_145712494 body=9 status=ok
// SIG undefined FUN_145712494(void)

void FUN_145712494(longlong param_1)

{
  FUN_140efa358(param_1 + 0x10);
  return;
}



// FUNCTION 14571249e FUN_14571249e body=83 status=ok
// SIG undefined FUN_14571249e(void)

longlong * FUN_14571249e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1457124f2();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1457124f2 FUN_1457124f2 body=57 status=ok
// SIG undefined FUN_1457124f2(void)

void FUN_1457124f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66450 = FUN_140002ddd(FUN_14650ed3c,uVar1,L"GbxStandInBodyNode_SkeletalMeshComponent");
  }
  return;
}



// FUNCTION 14571252c FUN_14571252c body=132 status=ok
// SIG undefined FUN_14571252c(void)

void FUN_14571252c(longlong param_1,int param_2)

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



// FUNCTION 1457125b0 FUN_1457125b0 body=191 status=ok
// SIG undefined FUN_1457125b0(void)

longlong FUN_1457125b0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_141247688();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 145712678 FUN_145712678 body=102 status=ok
// SIG undefined FUN_145712678(void)

undefined8 * FUN_145712678(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14b763870;
  param_1[5] = &PTR_FUN_14b763cf0;
  param_1[6] = &PTR_LAB_14b763d30;
  FUN_1457126de(param_1 + 0x22);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  FUN_140cbebe8(param_1 + 8,0);
  return param_1;
}



// FUNCTION 1457126de FUN_1457126de body=629 status=ok
// SIG undefined FUN_1457126de(void)

undefined4 * FUN_1457126de(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0x3f800000;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  param_1[6] = (undefined4)DAT_14c8464f8;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  *(undefined8 *)(param_1 + 10) = DAT_14c846508;
  param_1[0xc] = 0x42c80000;
  puVar1 = param_1 + 0xe;
  FUN_14109baa4(puVar1);
  param_1[0x30] = 0x3f800000;
  puVar2 = param_1 + 0x32;
  FUN_14109baa4(puVar2);
  param_1[0x54] = 0x42c80000;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined8 *)(param_1 + 0x56) = 0x43c8000000000000;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x59) = 0x100;
  *(undefined8 *)(param_1 + 0x5a) = 0x4120000038d1b717;
  FUN_14045d416(&local_48);
  local_70 = local_48;
  local_78 = 0;
  FUN_1406507bc(puVar1,&local_44,0,0x3f800000);
  FUN_140650770(puVar1,local_44,0,1);
  thunk_FUN_14045d156(puVar1,local_44,0);
  FUN_14045d416(&local_50);
  local_70 = local_50;
  local_78 = 0;
  FUN_1406507bc(puVar1,&local_4c,0x3f800000,0);
  FUN_140650770(puVar1,local_4c,0,1);
  thunk_FUN_14045d156(puVar1,local_4c,0);
  FUN_14045d416(&local_54);
  local_70 = local_54;
  local_78 = 0;
  FUN_1406507bc(puVar2,&local_44,0,0x3f800000);
  FUN_140650770(puVar2,local_44,0,1);
  thunk_FUN_14045d156(puVar2,local_44,0);
  FUN_14045d416(&local_58);
  local_70 = local_58;
  local_78 = 0;
  FUN_1406507bc(puVar2,&local_4c,0x3f000000,0x3f800000);
  FUN_140650770(puVar2,local_4c,0,1);
  thunk_FUN_14045d156(puVar2,local_4c,0);
  FUN_14045d416(&local_60);
  local_70 = local_60;
  local_78 = 0;
  FUN_1406507bc(puVar2,&local_5c,0x3f800000,0);
  FUN_140650770(puVar2,local_5c,0,1);
  thunk_FUN_14045d156(puVar2,local_5c,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145712954 FUN_145712954 body=43 status=ok
// SIG undefined FUN_145712954(void)

void FUN_145712954(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = 0x80;
  }
  if (iVar1 != *(int *)(param_1 + 0x100c)) {
    *(int *)(param_1 + 0x100c) = iVar1;
    FUN_145712980(param_1,*(undefined4 *)(param_1 + 0x1008));
    return;
  }
  return;
}



// FUNCTION 145712980 FUN_145712980 body=143 status=ok
// SIG undefined FUN_145712980(void)

void FUN_145712980(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1000);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1000,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x1000),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1000,param_2,param_3,0x20);
  return;
}



// FUNCTION 145712a10 FUN_145712a10 body=205 status=ok
// SIG undefined FUN_145712a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145712a10(void)

{
  if ((DAT_14ca6c517 & 2) == 0) {
    DAT_14ca6c517 = DAT_14ca6c517 | 2;
    _DAT_14ca6c4b8 = L"FComposeVolumetricRTOverScenePS";
    _DAT_14ca6c4d0 = FUN_146826540;
    _DAT_14ca6c4d8 = FUN_146825d77;
    _DAT_14ca6c4e0 = FUN_146825fd6;
    _DAT_14ca6c4e8 = FUN_1407e02ea;
    _DAT_14ca6c4f0 = FUN_146826273;
    _DAT_14ca6c4c8 = FUN_147335706;
    _DAT_14ca6c508 = 0xffffffff000000e0;
    _DAT_14ca6c510 = 8;
    DAT_14ca6c514 = 0;
    _DAT_14ca6c4f8 = &LAB_147335730;
    FUN_145712ade();
    FUN_1407e00cc(&DAT_14ca6c4b0);
    return;
  }
  return;
}



// FUNCTION 145712ade FUN_145712ade body=123 status=ok
// SIG undefined FUN_145712ade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145712ade(void)

{
  _DAT_14ca6daf8 = L"BASE";
  DAT_14ca6db22 = 4;
  _DAT_14ca6db00 = FUN_140b35ae4();
  _DAT_14ca6db08 = DAT_14ca6c4c0;
  _DAT_14ca6db10 = &LAB_14682652b;
  DAT_14ca6c4c0 = &DAT_14ca6daf8;
  DAT_14ca6c515 = DAT_14ca6c515 + '\x01';
  _DAT_14ca6db18 = 0x100000000;
  if (*(char *)(_DAT_14ca6db00 + 100) != '\0') {
    DAT_14ca6c516 = DAT_14ca6c516 + '\x01';
  }
  return;
}



// FUNCTION 145712b5a FUN_145712b5a body=138 status=ok
// SIG undefined FUN_145712b5a(void)

code * FUN_145712b5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MSAADepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DMS<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000002c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733c290;
}



// FUNCTION 145712be4 FUN_145712be4 body=138 status=ok
// SIG undefined FUN_145712be4(void)

code * FUN_145712be4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000002c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733c31a;
}



// FUNCTION 145712c6e FUN_145712c6e body=144 status=ok
// SIG undefined FUN_145712c6e(void)

code * FUN_145712c6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140048c7e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fa5fe;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalFogVolumeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463162a8;
}



// FUNCTION 145712cfe FUN_145712cfe body=226 status=ok
// SIG undefined FUN_145712cfe(void)

longlong * FUN_145712cfe(longlong *param_1)

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
  pcVar13 = FUN_1462ca046;
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



// FUNCTION 145712de2 FUN_145712de2 body=136 status=ok
// SIG undefined FUN_145712de2(void)

code * FUN_145712de2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneLightData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FLightSceneData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471788c4;
}



// FUNCTION 145712e6a FUN_145712e6a body=138 status=ok
// SIG undefined FUN_145712e6a(void)

code * FUN_145712e6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUScenePrimitiveSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145712ef4;
}



// FUNCTION 145712ef4 FUN_145712ef4 body=138 status=ok
// SIG undefined FUN_145712ef4(void)

code * FUN_145712ef4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstancePayloadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717894e;
}



// FUNCTION 145712f7e FUN_145712f7e body=63 status=ok
// SIG undefined FUN_145712f7e(void)

void FUN_145712f7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145712fbe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145712fbe FUN_145712fbe body=95 status=ok
// SIG undefined FUN_145712fbe(void)

ulonglong FUN_145712fbe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
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



// FUNCTION 14571301e FUN_14571301e body=86 status=ok
// SIG undefined FUN_14571301e(void)

void FUN_14571301e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x38 + (longlong)param_2 * 0x3c);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x3c + 0x34);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x3c + 0x34);
  FUN_140fa89ee();
  return;
}



// FUNCTION 145713074 FUN_145713074 body=1414 status=ok
// SIG undefined FUN_145713074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145713074(double *param_1,double *param_2,float param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  dVar7 = param_2[2];
  dVar16 = param_2[1];
  dVar21 = (double)param_3;
  *param_1 = (*param_2 - *param_1) * dVar21 + *param_1;
  param_1[1] = (dVar16 - param_1[1]) * dVar21 + param_1[1];
  param_1[2] = (dVar7 - param_1[2]) * dVar21 + param_1[2];
  auVar4 = _DAT_1499387d0;
  dVar7 = param_2[5] - param_1[5];
  dVar16 = param_2[4] - param_1[4];
  dVar20 = param_2[3] - param_1[3];
  dVar2 = (double)DAT_1499387d0;
  dVar3 = DAT_1499387d0._8_8_;
  auVar17._8_8_ = dVar16;
  auVar17._0_8_ = dVar20;
  auVar18 = divpd(auVar17,_DAT_1499387d0);
  auVar8._0_8_ = dVar7 / 360.0;
  auVar8._8_8_ = 0;
  auVar19 = roundpd(auVar18,auVar18,3);
  auVar18 = roundpd(auVar8,auVar8,3);
  auVar23._0_8_ = dVar7 - auVar18._0_8_ * dVar2;
  auVar23._8_8_ = 0.0 - auVar18._8_8_ * dVar3;
  dVar20 = dVar20 - auVar19._0_8_ * dVar2;
  dVar16 = dVar16 - auVar19._8_8_ * dVar3;
  auVar25._0_8_ = dVar20 + dVar2;
  auVar25._8_8_ = dVar16 + dVar3;
  auVar27._0_8_ = auVar23._0_8_ + dVar2;
  auVar27._8_8_ = auVar23._8_8_ + dVar3;
  auVar9._8_8_ = -(ulonglong)(0.0 <= dVar16);
  auVar9._0_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar18._8_8_ = dVar16;
  auVar18._0_8_ = dVar20;
  auVar18 = blendvpd(auVar25,auVar18,auVar9);
  auVar10._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
  auVar10._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
  auVar8 = blendvpd(auVar27,auVar23,auVar10);
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
  auVar19._8_8_ = auVar18._8_8_ + -360.0;
  auVar19._0_8_ = auVar18._0_8_ + -360.0;
  auVar18 = blendvpd(auVar18,auVar19,auVar11);
  dVar7 = auVar8._0_8_;
  param_1[3] = auVar18._0_8_ * dVar21 + param_1[3];
  param_1[4] = auVar18._8_8_ * dVar21 + param_1[4];
  param_1[5] = (double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                       (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7)) * dVar21 +
               param_1[5];
  *(float *)(param_1 + 6) =
       (*(float *)(param_2 + 6) - *(float *)(param_1 + 6)) * param_3 + *(float *)(param_1 + 6);
  *(float *)(param_1 + 0xe) =
       (*(float *)(param_2 + 0xe) - *(float *)(param_1 + 0xe)) * param_3 + *(float *)(param_1 + 0xe)
  ;
  *(float *)((longlong)param_1 + 0x74) =
       (*(float *)((longlong)param_2 + 0x74) - *(float *)((longlong)param_1 + 0x74)) * param_3 +
       *(float *)((longlong)param_1 + 0x74);
  dVar7 = param_2[9];
  dVar16 = param_2[8];
  param_1[7] = (param_2[7] - param_1[7]) * dVar21 + param_1[7];
  param_1[8] = (dVar16 - param_1[8]) * dVar21 + param_1[8];
  param_1[9] = (dVar7 - param_1[9]) * dVar21 + param_1[9];
  dVar7 = param_2[0xc] - param_1[0xc];
  dVar20 = param_2[0xb] - param_1[0xb];
  dVar16 = param_2[10] - param_1[10];
  auVar29._8_8_ = dVar20;
  auVar29._0_8_ = dVar16;
  auVar18 = divpd(auVar29,auVar4);
  auVar12._0_8_ = dVar7 / 360.0;
  auVar12._8_8_ = 0;
  auVar19 = roundpd(ZEXT816(0x4076800000000000),auVar18,3);
  auVar18 = roundpd(auVar12,auVar12,3);
  auVar28._0_8_ = dVar7 - auVar18._0_8_ * dVar2;
  auVar28._8_8_ = 0.0 - auVar18._8_8_ * dVar3;
  auVar26._0_8_ = dVar16 - auVar19._0_8_ * dVar2;
  auVar26._8_8_ = dVar20 - auVar19._8_8_ * dVar3;
  auVar24._0_8_ = auVar26._0_8_ + dVar2;
  auVar24._8_8_ = auVar26._8_8_ + dVar3;
  auVar22._0_8_ = dVar2 + auVar28._0_8_;
  auVar22._8_8_ = dVar3 + auVar28._8_8_;
  auVar13._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
  auVar13._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
  auVar19 = blendvpd(auVar24,auVar26,auVar13);
  auVar14._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
  auVar14._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
  auVar18 = blendvpd(auVar22,auVar28,auVar14);
  dVar7 = auVar19._8_8_ + -360.0;
  auVar15._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
  auVar15._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = auVar19._0_8_ + -360.0;
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19 = blendvpd(auVar19,auVar4,auVar15);
  dVar7 = auVar18._0_8_;
  param_1[10] = auVar19._0_8_ * dVar21 + param_1[10];
  param_1[0xb] = auVar19._8_8_ * dVar21 + param_1[0xb];
  param_1[0xc] = (double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                         (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7)) * dVar21 +
                 param_1[0xc];
  *(float *)(param_1 + 0xd) =
       (*(float *)(param_2 + 0xd) - *(float *)(param_1 + 0xd)) * param_3 + *(float *)(param_1 + 0xd)
  ;
  *(float *)(param_1 + 0xf) =
       (*(float *)(param_2 + 0xf) - *(float *)(param_1 + 0xf)) * param_3 + *(float *)(param_1 + 0xf)
  ;
  *(float *)(param_1 + 0x11) =
       (*(float *)(param_2 + 0x11) - *(float *)(param_1 + 0x11)) * param_3 +
       *(float *)(param_1 + 0x11);
  *(float *)((longlong)param_1 + 0x8c) =
       (*(float *)((longlong)param_2 + 0x8c) - *(float *)((longlong)param_1 + 0x8c)) * param_3 +
       *(float *)((longlong)param_1 + 0x8c);
  *(float *)(param_1 + 0x12) =
       (*(float *)(param_2 + 0x12) - *(float *)(param_1 + 0x12)) * param_3 +
       *(float *)(param_1 + 0x12);
  dVar7 = param_2[0x12f];
  param_1[0x12e] = (param_2[0x12e] - param_1[0x12e]) * dVar21 + param_1[0x12e];
  param_1[0x12f] = (dVar7 - param_1[0x12f]) * dVar21 + param_1[0x12f];
  dVar7 = param_2[0x131];
  param_1[0x130] = (param_2[0x130] - param_1[0x130]) * dVar21 + param_1[0x130];
  param_1[0x131] = (dVar7 - param_1[0x131]) * dVar21 + param_1[0x131];
  *(float *)((longlong)param_1 + 0x94) =
       (*(float *)((longlong)param_2 + 0x94) - *(float *)((longlong)param_1 + 0x94)) * param_3 +
       *(float *)((longlong)param_1 + 0x94);
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_2 + 0x14) & 4;
  *(uint *)(param_1 + 0x14) = uVar5 | uVar1;
  uVar6 = (*(uint *)(param_2 + 0x14) | uVar1) & 8;
  *(uint *)(param_1 + 0x14) = uVar5 | uVar1 & 0xfffffff7 | uVar6;
  *(uint *)(param_1 + 0x14) =
       uVar5 | uVar1 & 0xffffffe7 | uVar6 | (uVar1 | *(uint *)(param_2 + 0x14)) & 0x10;
  return;
}



// FUNCTION 1457135fa FUN_1457135fa body=115 status=ok
// SIG undefined FUN_1457135fa(void)

longlong * FUN_1457135fa(longlong *param_1,longlong *param_2)

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
  FUN_1447ff17a(param_1 + 2,param_2 + 2);
  lVar1 = param_2[0x148];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[0x148];
    }
  }
  param_1[0x148] = lVar1;
  return param_1;
}



// FUNCTION 14571366e FUN_14571366e body=211 status=ok
// SIG undefined FUN_14571366e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14571366e(void)

{
  if ((DAT_14c9c53c7 & 2) == 0) {
    DAT_14c9c53c7 = DAT_14c9c53c7 | 2;
    _DAT_14c9c5368 = L"FCustomColorPS";
    _DAT_14c9c5380 = FUN_146826540;
    _DAT_14c9c5388 = FUN_146825d77;
    _DAT_14c9c5390 = FUN_146825fd6;
    _DAT_14c9c5398 = FUN_1407e02ea;
    _DAT_14c9c53a0 = FUN_146826273;
    _DAT_14c9c5378 = FUN_14714e4f4;
    _DAT_14c9c53b8 = 0xffffffff00000118;
    _DAT_14c9c53c0 = 8;
    DAT_14c9c53c4 = 0;
    _DAT_14c9c53a8 = &LAB_14714e52a;
    FUN_1457137be();
    FUN_145713742();
    FUN_1407e00cc(&DAT_14c9c5360);
  }
  return &DAT_14c9c5360;
}



// FUNCTION 145713742 FUN_145713742 body=123 status=ok
// SIG undefined FUN_145713742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145713742(void)

{
  _DAT_14c9c92d8 = L"BASE";
  DAT_14c9c9302 = 4;
  _DAT_14c9c92e0 = FUN_141092e92();
  _DAT_14c9c92e8 = DAT_14c9c5370;
  _DAT_14c9c92f0 = &LAB_14682652b;
  DAT_14c9c5370 = &DAT_14c9c92d8;
  DAT_14c9c53c5 = DAT_14c9c53c5 + '\x01';
  _DAT_14c9c92f8 = 0x100000000;
  if (*(char *)(_DAT_14c9c92e0 + 100) != '\0') {
    DAT_14c9c53c6 = DAT_14c9c53c6 + '\x01';
  }
  return;
}



// FUNCTION 1457137be FUN_1457137be body=216 status=ok
// SIG undefined FUN_1457137be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457137be(void)

{
  _DAT_14c9c7f18 = L"CustomColorParameter";
  DAT_14c9c7f42 = FUN_140850cc5();
  _DAT_14c9c7f20 = FUN_140ec6960();
  _DAT_14c9c7f30 = &LAB_14682652b;
  _DAT_14c9c7f38 = 0x10000010e;
  _DAT_14c9c7f40 = 0;
  _DAT_14c9c7f28 = DAT_14c9c5370;
  DAT_14c9c5370 = &DAT_14c9c7f18;
  _DAT_14c9c7ee8 = L"MobileColorValue";
  DAT_14c9c7f12 = FUN_140850cc5();
  _DAT_14c9c7ef0 = FUN_140ec6960();
  _DAT_14c9c7f00 = &LAB_14682652b;
  _DAT_14c9c7f08 = &DAT_100000108;
  _DAT_14c9c7f10 = 0;
  _DAT_14c9c7ef8 = DAT_14c9c5370;
  DAT_14c9c5370 = &DAT_14c9c7ee8;
  return;
}



// FUNCTION 145713896 FUN_145713896 body=217 status=ok
// SIG undefined FUN_145713896(void)

void FUN_145713896(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar1 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145713970(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145713970 FUN_145713970 body=1098 status=ok
// SIG undefined FUN_145713970(void)

void FUN_145713970(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 **ppuVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_228 [32];
  undefined8 **local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined1 local_150 [40];
  undefined4 local_128;
  undefined8 ***local_120 [3];
  ushort local_108;
  byte local_100;
  code *local_f8 [2];
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_145713d00;
  lVar1 = param_1 + 0x11f0;
  cVar4 = FUN_144729dda();
  if ((cVar4 != '\0') || (*(longlong *)(param_1 + 0xe10) == 0)) goto LAB_145713d00;
  ppuVar2 = *(undefined8 ***)(param_1 + 0x168);
  local_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 0xe10) + 0x27c) & 8) == 0) {
    uStack_160 = 1;
    FUN_140155462(&local_168,0);
    *local_168 = 0;
    FUN_14485c47a(local_168,param_1);
    local_1e4 = 2;
  }
  else {
    local_1e4 = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x1c8);
  if (lVar7 == 0) {
    puVar5 = &DAT_14c8464e0;
    local_198 = DAT_14c8464f0;
  }
  else {
    puVar5 = (undefined8 *)(lVar7 + 0x260);
    local_198 = *(undefined8 *)(lVar7 + 0x270);
  }
  local_1a8 = *(undefined4 *)puVar5;
  uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3ff00000;
  uStack_190 = 0;
  local_188 = 0x3ff0000000000000;
  uStack_180 = 0x3ff0000000000000;
  local_178 = 0x3ff0000000000000;
  uStack_170 = 0;
  local_1d8 = param_2;
  uVar6 = FUN_1447210f0(param_1);
  if (ppuVar2 == (undefined8 **)0x0) {
LAB_145713d36:
    ppuVar10 = (undefined8 **)0x0;
  }
  else {
    lVar7 = FUN_144a7cbb2();
    if ((*(int *)(ppuVar2[2] + 7) < *(int *)(lVar7 + 0x38)) ||
       (ppuVar10 = ppuVar2,
       *(longlong *)(ppuVar2[2][6] + (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30))
    goto LAB_145713d36;
  }
  uVar8 = FUN_145978dc8();
  local_208 = ppuVar10;
  uVar6 = FUN_145713dbc(uVar6,uVar8,&local_1c8,ppuVar2);
  FUN_14485c47a(lVar1,uVar6);
  cVar4 = FUN_144729dda(lVar1);
  if (cVar4 != '\0') {
    local_1d0 = 0;
    FUN_14485c47a(&local_1d0,param_1);
    local_1e0 = lVar1;
    uVar6 = FUN_14479d2ce(lVar1);
    uVar8 = FUN_1406f3fb0(*(longlong *)(param_1 + 0xe10) + 0x284);
    local_b8[0] = 0;
    local_90 = 0;
    FUN_1456bb102(local_b8,param_1);
    FUN_1448729ea(uVar8,local_88,local_b8);
    uVar11 = FUN_144a7b41a(local_88,0);
    local_e8 = 0;
    local_d8 = &PTR_LAB_14b4226b0;
    local_d0 = local_1d0;
    local_f8[0] = FUN_143e12d6e;
    local_c8 = ppuVar2;
    uVar8 = FUN_1406f3fb0(*(longlong *)(param_1 + 0xe10) + 0x27e);
    local_150[0] = 0;
    local_128 = 0;
    FUN_1456bb102(local_150,param_1);
    FUN_1448729ea(uVar8,local_120,local_150);
    uVar12 = FUN_144a7b41a(local_120,0x3f800000);
    local_200 = local_1e4;
    local_208 = &local_168;
    local_1f0 = 3;
    local_1f8 = uVar11;
    FUN_145713e9a(uVar6,uVar12,1,local_f8);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_100 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar9 = local_120;
      if (0x18 < local_108) {
        ppppuVar9 = (undefined8 ****)local_120[0];
      }
      (*pcVar3)(ppppuVar9);
    }
    if (0x18 < local_108) {
      FUN_1400020a8(local_120[0]);
    }
    FUN_144a5ac3a(local_150);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar9 = local_88;
      if (0x18 < local_70) {
        ppppuVar9 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar9);
    }
    lVar1 = local_1e0;
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(local_b8);
    uVar6 = FUN_14479d2ce(lVar1);
    uVar8 = FUN_14485cccc(local_1d8 + 0xb8);
    FUN_14135d8d0(uVar6,uVar8,&DAT_14cadad90,0);
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_145713d00:
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145713dbc FUN_145713dbc body=220 status=ok
// SIG undefined FUN_145713dbc(void)

longlong FUN_145713dbc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = 0x800040101;
  uStack_80 = param_5;
  local_88 = param_4;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38();
    if (lVar1 != 0) {
      lVar2 = FUN_145978dc8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_145713e4c;
    }
    lVar1 = 0;
  }
LAB_145713e4c:
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar3 = local_38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145713e9a FUN_145713e9a body=636 status=ok
// SIG undefined FUN_145713e9a(void)

void FUN_145713e9a(longlong param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  undefined8 param_5,undefined4 param_6,float param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x458) = param_3;
  FUN_145714118(param_1 + 0x400,param_4);
  FUN_140bf093e(param_1 + 0x398,param_5);
  *(undefined1 *)(param_1 + 0x459) = 0;
  *(undefined4 *)(param_1 + 0x45c) = param_6;
  *(undefined4 *)(param_1 + 0x468) = param_8;
  FUN_140154c96(&local_b8,*(undefined8 *)(param_1 + 0x168));
  *(undefined8 *)(param_1 + 0x450) = local_a8;
  *(undefined8 *)(param_1 + 0x440) = local_b8;
  *(ulonglong *)(param_1 + 0x448) = CONCAT44(uStack_ac,uStack_b0);
  if ((param_7 != 0.0) || (NAN(param_7))) {
    uVar3 = FUN_1401b4c98(param_1);
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar1 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14b3e9370;
    local_d0[3] = 0;
    FUN_14485c47a(local_d0 + 3,param_1);
    puVar1[4] = param_1;
    *(undefined4 *)(puVar1 + 5) = param_2;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_d0);
    local_78 = 1;
    local_d8 = local_c0;
    local_c0[0] = 0;
    local_bc = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0x460,&local_b8,param_7);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    FUN_1449db362(&local_d0);
  }
  else {
    FUN_140479efe(param_1,param_2);
  }
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_14113775c(param_1,&DAT_14c846480,1,0);
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x588))(plVar5,2);
  }
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145714118 FUN_145714118 body=292 status=ok
// SIG undefined FUN_145714118(void)

longlong * FUN_145714118(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571423e FUN_14571423e body=211 status=ok
// SIG undefined FUN_14571423e(void)

void FUN_14571423e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_144a78b9e();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    local_38 = param_2;
    uVar3 = FUN_1447210f0(param_1);
    iVar1 = FUN_1403346e6(param_1 + 0x440,param_2,uVar3);
    if (iVar1 == *(int *)(param_1 + 0x45c)) {
      if (*(char *)(param_1 + 0x458) == '\x01') {
        local_30 = &local_38;
        FUN_1457146b2(param_1 + 0x3a8,local_24);
        FUN_145714b8e(param_1,local_38);
      }
      else if (*(char *)(param_1 + 0x458) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145714324 FUN_145714324 body=137 status=ok
// SIG undefined FUN_145714324(void)

void FUN_145714324(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1457143ae FUN_1457143ae body=137 status=ok
// SIG undefined FUN_1457143ae(void)

void FUN_1457143ae(byte *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_140852908(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x59a,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145714438 FUN_145714438 body=190 status=ok
// SIG undefined FUN_145714438(void)

undefined8 * FUN_145714438(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb71640) {
    FUN_144b3d300(&DAT_14cb71640);
    if (DAT_14cb71640 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"ityZone",8);
      builtin_wcsncpy(local_48 + 8,L"ngProxim",8);
      builtin_wcsncpy(local_48,L"OnEnteri",8);
      FUN_1446f470e(&DAT_14cb71638,local_48,1);
      _Init_thread_footer(&DAT_14cb71640);
    }
  }
  *param_1 = DAT_14cb71638;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457144f8 FUN_1457144f8 body=190 status=ok
// SIG undefined FUN_1457144f8(void)

undefined8 * FUN_1457144f8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb71650) {
    FUN_144b3d300(&DAT_14cb71650);
    if (DAT_14cb71650 == -1) {
      builtin_wcsncpy(local_48 + 8,L"gProximityZone",0xf);
      builtin_wcsncpy(local_48,L"OnExitin",8);
      FUN_1446f470e(&DAT_14cb71648,local_48,1);
      _Init_thread_footer(&DAT_14cb71650);
    }
  }
  *param_1 = DAT_14cb71648;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457145b8 FUN_1457145b8 body=118 status=ok
// SIG undefined FUN_1457145b8(void)

void FUN_1457145b8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_14571462e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14571462e FUN_14571462e body=132 status=ok
// SIG undefined FUN_14571462e(void)

void FUN_14571462e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457146b2 FUN_1457146b2 body=290 status=ok
// SIG undefined FUN_1457146b2(void)

undefined4 * FUN_1457146b2(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457148e6(param_1,local_48);
  FUN_1457147d6(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar2 = FUN_145714844(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1457149cc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457147d6 FUN_1457147d6 body=108 status=ok
// SIG undefined FUN_1457147d6(void)

undefined8 * FUN_1457147d6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar1 = *(undefined8 *)*param_1;
  *param_2 = 0;
  FUN_14485c47a(param_2,uVar1);
  param_2[1] = 0;
  local_30 = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145714844 FUN_145714844 body=161 status=ok
// SIG undefined FUN_145714844(void)

undefined8 FUN_145714844(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar6 = FUN_145714f92();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      FUN_1449db362(puVar1 + 2);
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1487cad20(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_14571486a;
    }
  }
  uVar7 = 0;
LAB_14571486a:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457148e6 FUN_1457148e6 body=230 status=ok
// SIG undefined FUN_1457148e6(void)

int * FUN_1457148e6(longlong *param_1,int *param_2)

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



// FUNCTION 1457149cc FUN_1457149cc body=448 status=ok
// SIG undefined FUN_1457149cc(void)

void FUN_1457149cc(longlong *param_1)

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
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145714b8e FUN_145714b8e body=1026 status=ok
// SIG undefined FUN_145714b8e(void)

void FUN_145714b8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 *local_160;
  undefined8 *local_158;
  longlong local_150;
  undefined4 local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f0 [32];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_d0 = 0;
  FUN_14485c47a(&local_d0);
  uVar6 = local_d0;
  plVar1 = (longlong *)(param_1 + 0x3a8);
  local_c8 = local_d0;
  uVar9 = (uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0;
  iVar4 = FUN_145714f92(plVar1,uVar9);
  if (iVar4 != -1) {
    FUN_1449b671c(local_f0);
    FUN_1449b6736(local_f0,2);
    local_a4 = 0;
    local_a0 = 0x101;
    local_78 = 0;
    local_70 = 0x800000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_b8 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b7 = 1;
    local_b5 = 0;
    local_a8 = 0;
    local_b4 = 0x1000000;
    local_b0 = 1;
    FUN_144a85a22(&local_c8,param_1);
    FUN_144a85a22(&local_c8,param_2);
    if ((longlong)*(int *)(param_1 + 0x3a0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x398);
      lVar7 = (longlong)*(int *)(param_1 + 0x3a0) << 3;
      do {
        cVar3 = FUN_144729dda(lVar8);
        if (cVar3 != '\0') {
          uVar5 = FUN_14479d2ce(lVar8);
          FUN_144a85a22(&local_c8,uVar5);
        }
        lVar8 = lVar8 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    local_f4 = 0;
    local_f8 = 1;
    local_118 = uVar6;
    iVar4 = FUN_145714f92(plVar1,uVar9);
    if (iVar4 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar4 * 0x20 + *plVar1;
    }
    if (((*(int *)(lVar8 + 0x10) == 0) || (*(longlong **)(lVar8 + 8) == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x30))(), cVar3 == '\0')) {
      local_118 = uVar6;
      iVar4 = FUN_145714f92(plVar1,uVar9);
      if (iVar4 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)iVar4 * 0x20 + *plVar1;
      }
      if (*(int *)(lVar8 + 0x10) != 3) {
        FUN_1446efa72((longlong *)(lVar8 + 8),0,3,0x10);
        *(undefined4 *)(lVar8 + 0x10) = 3;
      }
      puVar2 = *(undefined8 **)(lVar8 + 8);
      *puVar2 = &PTR_LAB_14a78e0f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar2[2] = lVar7;
      *puVar2 = &PTR_FUN_14b3e9440;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,param_1);
      puVar2[4] = param_1;
      puVar2[5] = uVar6;
    }
    uVar6 = FUN_1447210f0(param_1);
    local_100 = 0;
    FUN_14485c47a(&local_100,param_2);
    local_118 = local_100;
    iVar4 = FUN_145714f92(plVar1,(uint)((ulonglong)local_100 >> 0x20) ^ (uint)local_100,&local_118);
    if (iVar4 == -1) {
      local_150 = 0;
    }
    else {
      local_150 = (longlong)iVar4 * 0x20 + *plVar1;
    }
    lVar8 = *(longlong *)(param_2 + 0x1c8);
    if (lVar8 == 0) {
      local_108 = DAT_14c8464f0;
      local_118 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_110 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_118 = *(undefined8 *)(lVar8 + 0x260);
      uStack_110 = *(undefined8 *)(lVar8 + 0x268);
      local_108 = *(undefined8 *)(lVar8 + 0x270);
    }
    local_150 = local_150 + 8;
    lVar8 = *(longlong *)(param_1 + 0x1c8);
    if (lVar8 == 0) {
      local_128 = DAT_14c8464f0;
      local_138 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_130 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_138 = *(undefined8 *)(lVar8 + 0x260);
      uStack_130 = *(undefined8 *)(lVar8 + 0x268);
      local_128 = *(undefined8 *)(lVar8 + 0x270);
    }
    local_160 = &local_f8;
    local_148 = 0;
    local_168 = &local_118;
    local_158 = &local_c8;
    FUN_14571504e(uVar6,local_140,2,&local_138);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145714f92 FUN_145714f92 body=186 status=ok
// SIG undefined FUN_145714f92(void)

int FUN_145714f92(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145715012;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145715012:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571504e FUN_14571504e body=247 status=ok
// SIG undefined FUN_14571504e(void)

undefined8
FUN_14571504e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [344];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_190 = *(undefined4 *)(param_1 + 0x3c0);
  local_198 = param_8;
  local_1a0 = &DAT_14c8463d0;
  local_1a8 = param_5;
  local_1c0 = param_9;
  local_1c8 = DAT_14cad0ec4;
  local_1d0 = param_6;
  local_1d8 = &DAT_14cad0f10;
  local_1b8 = param_3;
  local_1b0 = param_4;
  FUN_14571518a(local_188,param_1,&DAT_14cacfe20,param_7);
  FUN_1400cb318(param_2,param_1 + 0x300,local_188);
  FUN_1449b675c(local_188);
  if ((local_30 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145715146 FUN_145715146 body=68 status=ok
// SIG undefined FUN_145715146(void)

undefined8 * FUN_145715146(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b478da0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14571518a FUN_14571518a body=1400 status=ok
// SIG undefined FUN_14571518a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14571518a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             longlong *param_13,undefined4 param_14)

{
  longlong *plVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  local_68 = 0;
  FUN_144a886e6(param_1 + 1,0,&local_58,0);
  uVar16 = uRam000000014cad0ee8;
  param_1[0x13] = _DAT_14cad0ee0;
  param_1[0x14] = uVar16;
  uVar16 = _DAT_14cad0ed8;
  param_1[0x11] = _DAT_14cad0ed0;
  param_1[0x12] = uVar16;
  lVar19 = 0x88;
  do {
    pcVar2 = (char *)((longlong)param_1 + lVar19);
    cVar4 = *pcVar2;
    cVar5 = pcVar2[1];
    cVar6 = pcVar2[2];
    cVar7 = pcVar2[3];
    cVar8 = pcVar2[4];
    cVar9 = pcVar2[5];
    cVar10 = pcVar2[6];
    cVar11 = pcVar2[7];
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 1) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 2) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 3) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 4) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 5) = 2;
    }
    if ((bool)(~(cVar10 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 6) = 2;
    }
    if ((bool)(~(cVar11 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 7) = 2;
    }
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 8) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 9) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 10) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 0xb) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 0xc) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 0xd) = 2;
    }
    if ((bool)(~(cVar10 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 0xe) = 2;
    }
    if ((bool)(~(cVar11 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar19 + 0xf) = 2;
    }
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0xa8);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  uVar16 = param_3[1];
  param_1[0x16] = *param_3;
  param_1[0x17] = uVar16;
  uVar16 = param_4[1];
  uVar17 = param_4[2];
  uVar18 = param_4[3];
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x1a);
  uVar13 = *(undefined4 *)((longlong)param_4 + 0x1e);
  uVar14 = *(undefined4 *)((longlong)param_4 + 0x22);
  uVar15 = *(undefined4 *)((longlong)param_4 + 0x26);
  param_1[1] = *param_4;
  param_1[2] = uVar16;
  param_1[3] = uVar17;
  param_1[4] = uVar18;
  *(undefined4 *)((longlong)param_1 + 0x22) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x26) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x2a) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x2e) = uVar15;
  puVar22 = param_1 + 7;
  if (puVar22 != param_4 + 6) {
    puVar21 = param_4 + 6;
    if ((undefined8 *)param_4[10] != (undefined8 *)0x0) {
      puVar21 = (undefined8 *)param_4[10];
    }
    iVar20 = *(int *)(param_4 + 0xb);
    *(int *)(param_1 + 0xc) = iVar20;
    if (iVar20 == 0 && *(int *)((longlong)param_1 + 100) == 0) {
      *(undefined4 *)((longlong)param_1 + 100) = 8;
    }
    else {
      FUN_14470be6c(puVar22,iVar20);
      if (iVar20 != 0) {
        if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)param_1[0xb];
        }
        memcpy(puVar22,puVar21,(longlong)iVar20 << 2);
      }
    }
  }
  puVar22 = param_1 + 0xd;
  if (puVar22 != param_4 + 0xc) {
    puVar21 = param_4 + 0xc;
    if ((undefined8 *)param_4[0xe] != (undefined8 *)0x0) {
      puVar21 = (undefined8 *)param_4[0xe];
    }
    iVar20 = *(int *)(param_4 + 0xf);
    *(int *)(param_1 + 0x10) = iVar20;
    if (iVar20 == 0 && *(int *)((longlong)param_1 + 0x84) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x84) = 4;
    }
    else {
      FUN_1447163e6(puVar22,iVar20);
      if (iVar20 != 0) {
        if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)param_1[0xf];
        }
        memcpy(puVar22,puVar21,(longlong)iVar20 << 2);
      }
    }
  }
  plVar1 = param_1 + 0x24;
  uVar16 = *param_5;
  uVar17 = param_5[1];
  uVar18 = param_5[3];
  param_1[0x13] = param_5[2];
  param_1[0x14] = uVar18;
  param_1[0x11] = uVar16;
  param_1[0x12] = uVar17;
  param_1[0x15] = *param_6;
  *(undefined4 *)(param_1 + 0x18) = param_7;
  *(undefined4 *)(param_1 + 0x19) = param_8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_14;
  FUN_14485c47a(param_1,param_2);
  param_1[0x1c] = param_10[2];
  uVar16 = param_10[1];
  param_1[0x1a] = *param_10;
  param_1[0x1b] = uVar16;
  uVar16 = param_11[1];
  param_1[0x1d] = *param_11;
  param_1[0x1e] = uVar16;
  param_1[0x1f] = param_11[2];
  uVar16 = param_12[1];
  uVar17 = param_12[2];
  uVar18 = param_12[3];
  param_1[0x20] = *param_12;
  param_1[0x21] = uVar16;
  param_1[0x22] = uVar17;
  param_1[0x23] = uVar18;
  if (param_13 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 0x25) != 0) &&
       (puVar22 = (undefined8 *)*plVar1, puVar22 != (undefined8 *)0x0)) {
      (**(code **)*puVar22)(puVar22,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    goto LAB_1457155a9;
  }
  if (plVar1 == param_13) goto LAB_1457155a9;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  plVar3 = (longlong *)*param_13;
  if (plVar3 == (longlong *)0x0 || (int)param_13[1] == 0) {
    puVar22 = (undefined8 *)0x0;
    iVar20 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_58);
    puVar22 = local_58;
    iVar20 = local_50;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x25) == 0) {
LAB_145715577:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar21 = (undefined8 *)*plVar1;
    if (puVar21 != (undefined8 *)0x0) {
      (**(code **)*puVar21)(puVar21,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x25) = 0;
      goto LAB_145715577;
    }
  }
  param_1[0x24] = puVar22;
  *(int *)(param_1 + 0x25) = iVar20;
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1457155a9;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1457155a9:
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (*(int *)((longlong)param_1 + 0x13c) < 0) {
    FUN_1447c0da8(param_1 + 0x26,0);
  }
  *(undefined1 *)(param_1 + 0x28) = param_9;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145715704 FUN_145715704 body=108 status=ok
// SIG undefined FUN_145715704(void)

undefined4 * FUN_145715704(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e5f7b8();
  FUN_145e5f7b8();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca66b20,0);
  FUN_145e5f7b8();
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



// FUNCTION 145715771 FUN_145715771 body=177 status=ok
// SIG undefined FUN_145715771(void)

void FUN_145715771(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e5fa26();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca686c8,param_4);
  local_78 = &DAT_14ca686c8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1473330be(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145715823 FUN_145715823 body=100 status=ok
// SIG undefined FUN_145715823(void)

undefined8 FUN_145715823(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c839de(local_28);
  FUN_145715888(param_1,local_28,L"-saveddirsuffix=");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145715888 FUN_145715888 body=346 status=ok
// SIG undefined FUN_145715888(void)

undefined8 FUN_145715888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449b8608(param_1,param_2,L"Saved");
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = FUN_14118da1c();
  local_68 = 0;
  cVar1 = FUN_14063337c(uVar3,param_3,&local_48,1);
  if (cVar1 != '\0') {
    if (0x7ffffffe < (int)uStack_40 - 2U) goto LAB_1457158ed;
    iVar5 = 0;
    do {
      pwVar4 = wcschr(L"_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
                      *(wchar_t *)(local_48 + (longlong)iVar5 * 2));
      if (pwVar4 == (wchar_t *)0x0) {
        FUN_145825fe6(&local_48,iVar5,0);
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = (int)uStack_40 + -1;
      if ((int)uStack_40 == 0) {
        iVar2 = 0;
      }
    } while (iVar5 < iVar2);
  }
  if (1 < (int)uStack_40) {
    FUN_140b1283a(&local_58,&DAT_149e01f60,&local_48);
    iVar5 = local_50 + -1;
    if (local_50 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_1,local_58,iVar5);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1457158ed:
  FUN_1400020e8(param_1,&DAT_149e065c6,1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457159e4 FUN_1457159e4 body=1181 status=ok
// SIG undefined FUN_1457159e4(void)

undefined4 FUN_1457159e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  longlong *plStack_a0;
  longlong local_98 [3];
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98[0] = 0;
  local_98[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  cVar4 = FUN_140f7cb10(local_98,puVar6,0,0);
  if (cVar4 == '\0') {
    FUN_140009b9a(local_b8,param_2);
    local_58 = L"FailedToLoadDescriptorFile";
    local_50 = 0x1a;
    FUN_1446e940c(local_e8,&local_58);
    local_58 = L"PluginManifest";
    local_50 = 0xe;
    FUN_1446e940c(local_118,&local_58);
    FUN_140208bae(&local_d8,local_118,local_e8,L"Failed to open descriptor file \'{0}\'");
    FUN_14023409e(&local_c8,&local_d8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_b8);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_98[2] = local_c8;
    local_80 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a8,local_98 + 2,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    FUN_140008f88(param_3,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    uVar5 = 0;
  }
  else {
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
    FUN_14047afda(&local_d8,local_98);
    cVar4 = FUN_14047b282(local_d8,&local_a8,0);
    if ((cVar4 == '\0') || (local_a8 == (longlong *)0x0)) {
      FUN_140009b9a(local_f8,local_d8 + 7);
      local_58 = L"FailedToReadDescriptorFile";
      local_50 = 0x1a;
      FUN_1446e940c(local_11c,&local_58);
      local_58 = L"PluginManifest";
      local_50 = 0xe;
      FUN_1446e940c(local_120,&local_58);
      FUN_140208bae(local_118,local_120,local_11c,L"Failed to read file. {0}");
      FUN_14023409e(&local_108,local_118,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_f8);
      local_70 = &local_38;
      local_78 = &local_58;
      FUN_14010d304(&local_68);
      local_98[2] = local_108;
      local_80 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,local_98 + 2,&local_68);
      FUN_14007f2db(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
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
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      FUN_140008f88(param_3,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14047db1a(param_1,local_a8,param_3);
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145715e82 FUN_145715e82 body=147 status=ok
// SIG undefined FUN_145715e82(void)

void FUN_145715e82(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 145715f16 FUN_145715f16 body=150 status=ok
// SIG undefined FUN_145715f16(void)

void FUN_145715f16(longlong param_1,int param_2)

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



// FUNCTION 145715fae FUN_145715fae body=98 status=ok
// SIG undefined FUN_145715fae(void)

undefined8 FUN_145715fae(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,local_28);
  FUN_140233b1a(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716012 FUN_145716012 body=122 status=ok
// SIG undefined FUN_145716012(void)

longlong FUN_145716012(longlong param_1,longlong param_2)

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
    FUN_14685025c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14571608c FUN_14571608c body=135 status=ok
// SIG undefined FUN_14571608c(void)

undefined8 FUN_14571608c(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14047e0ee(local_28,&local_38,&local_28,5);
  uVar3 = FUN_140482996(local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716114 FUN_145716114 body=2120 status=ok
// SIG undefined FUN_145716114(void)

ulonglong FUN_145716114(wchar_t **param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_1d8 [36];
  undefined1 local_1b4 [4];
  longlong *local_1b0 [2];
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190 [2];
  longlong *local_180 [2];
  wchar_t *local_170;
  undefined4 local_168;
  undefined1 local_15c [4];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong *local_118 [2];
  longlong *local_108;
  longlong *local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_d8 = L"Name";
  local_d0 = 4;
  FUN_1449ba96e(param_2,&local_c8);
  if ((local_c8 == 0) || (*(int *)(local_c8 + 8) != 2)) {
    if (param_3 != 0) {
      local_88 = L"TargetWithoutAName";
      local_80[0] = 0x12;
      FUN_1446e940c(&local_98,&local_88);
      local_88 = L"LocalizationDescriptor";
      local_80[0] = 0x16;
      FUN_1446e940c(&local_a8,&local_88);
      FUN_140208bae(&local_88,&local_a8,&local_98,
                    L"Found a \'Localization Target\' entry with a missing \'Name\' field");
      FUN_140008f88(param_3,&local_88);
      if (local_88 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
    }
    uVar7 = 0;
    goto LAB_14571635f;
  }
  FUN_14047e026(local_c8,&local_88);
  if (&local_88 == param_1) {
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_88;
    local_88 = (wchar_t *)0x0;
    *(int *)(param_1 + 1) = local_80[0];
    *(int *)((longlong)param_1 + 0xc) = local_80[1];
  }
  local_f8 = L"LoadingPolicy";
  local_f0 = 0xd;
  FUN_1449ba96e(param_2,&local_e8);
  if ((local_e8 == 0) || (*(int *)(local_e8 + 8) != 2)) {
LAB_145716254:
    local_170 = L"ConfigGenerationPolicy";
    local_168 = 0x16;
    FUN_1449ba96e(param_2,&local_108);
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if ((local_108 != (longlong *)0x0) && ((int)local_108[1] == 2)) {
      FUN_14047e026(local_108,&local_88);
      pwVar6 = L"";
      if (local_80[0] != 0) {
        pwVar6 = local_88;
      }
      uVar4 = 0;
LAB_1457162c9:
      lVar11 = 0;
      do {
        uVar9 = *(ushort *)((longlong)pwVar6 + lVar11);
        uVar10 = (ulonglong)uVar9;
        uVar8 = *(ushort *)((&PTR_u_Never_149e49d00)[uVar4] + lVar11);
        if (uVar9 == uVar8) {
          if (uVar9 == 0) goto LAB_145716318;
        }
        else {
          if (0x7f < (uVar8 | uVar9)) goto LAB_14571630c;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar12]) goto LAB_14571630c;
        }
        lVar11 = lVar11 + 2;
      } while( true );
    }
    goto LAB_145716331;
  }
  FUN_14047e026(local_e8,&local_88);
  pwVar6 = local_88;
  pwVar5 = L"";
  if (local_80[0] != 0) {
    pwVar5 = local_88;
  }
  iVar3 = FUN_14048334d(pwVar5);
  *(int *)(param_1 + 2) = iVar3;
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
    iVar3 = *(int *)(param_1 + 2);
  }
  if (iVar3 != 6) goto LAB_145716254;
  if (param_3 != 0) {
    FUN_14047e026(local_e8,local_128);
    FUN_140233b1a(local_118,local_128);
    FUN_140009b9a(local_138,param_1);
    local_88 = L"TargetWithInvalidLoadingPolicy";
    local_80[0] = 0x1e;
    FUN_1446e940c(local_1b0,&local_88);
    local_88 = L"LocalizationDescriptor";
    local_80[0] = 0x16;
    FUN_1446e940c(local_15c,&local_88);
    FUN_140208bae(local_158,local_15c,local_1b0,
                  L"Localization Target entry \'{0}\' specified an unrecognized target LoadingPolicy \'{1}\'"
                 );
    FUN_14023409e(&local_148,local_158,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_138);
    local_68 = 4;
    FUN_14023423e(local_58,local_118);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_148;
    local_b0 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_108,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar11 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_88 + lVar11) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_88 + lVar11) + 0x10))();
        *(undefined8 *)((longlong)&local_88 + lVar11) = 0;
        *(undefined4 *)((longlong)local_80 + lVar11) = 0;
      }
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != -0x10);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    FUN_140008f88(param_3,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    if (local_128[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar7 = 0;
  goto LAB_145716348;
LAB_14571630c:
  if (uVar9 == uVar8) goto LAB_145716318;
  uVar4 = uVar4 + 1;
  if (uVar4 == 3) goto code_r0x000145716953;
  goto LAB_1457162c9;
code_r0x000145716953:
  uVar4 = 3;
LAB_145716318:
  *(uint *)((longlong)param_1 + 0x14) = uVar4;
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
    uVar4 = *(uint *)((longlong)param_1 + 0x14);
  }
  if (uVar4 == 3) {
    if (param_3 != 0) {
      FUN_14047e026(local_108,local_158);
      FUN_140233b1a(local_180,local_158);
      FUN_140009b9a(local_190,param_1);
      local_88 = L"TargetWithInvalidGenerationPolicy";
      local_80[0] = 0x21;
      FUN_1446e940c(local_15c,&local_88);
      local_88 = L"LocalizationDescriptor";
      local_80[0] = 0x16;
      FUN_1446e940c(local_1b4,&local_88);
      FUN_140208bae(local_1b0,local_1b4,local_15c,
                    L"Localization Target entry \'{0}\' specified an unrecognized target GenerationPolicy\'{1}\'"
                   );
      FUN_14023409e(&local_1a0,local_1b0,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_190);
      local_68 = 4;
      FUN_14023423e(local_58,local_180);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_1a0;
      local_b0 = local_198;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = (int)local_198[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar11 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_88 + lVar11) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_88 + lVar11) + 0x10))();
          *(undefined8 *)((longlong)&local_88 + lVar11) = 0;
          *(undefined4 *)((longlong)local_80 + lVar11) = 0;
        }
        lVar11 = lVar11 + -0x20;
      } while (lVar11 != -0x10);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar2 = (int *)((longlong)local_198 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_198 + 0x10))(local_198);
          }
        }
      }
      if (local_190[0] != (longlong *)0x0) {
        (**(code **)(*local_190[0] + 0x10))();
      }
      if (local_180[0] != (longlong *)0x0) {
        (**(code **)(*local_180[0] + 0x10))();
      }
      FUN_140008f88(param_3,local_128);
      if (local_128[0] != (longlong *)0x0) {
        (**(code **)(*local_128[0] + 0x10))();
      }
      if (local_1b0[0] != (longlong *)0x0) {
        (**(code **)(*local_1b0[0] + 0x10))();
      }
      if (local_158[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar7 = 0;
  }
LAB_145716331:
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
LAB_145716348:
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
LAB_14571635f:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571695d FUN_14571695d body=244 status=ok
// SIG undefined FUN_14571695d(void)

longlong * FUN_14571695d(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbccf20 == (longlong *)0x0) {
    memset(&DAT_14cbccf28,0,0xc0);
    FUN_145c29290(&DAT_14cbccf28);
    DAT_14cbccf20 = (longlong *)&DAT_14cbccf28;
  }
  plVar1 = DAT_14cbccf20;
  plVar3 = DAT_14cbccf20 + 1;
  if ((char)DAT_14cbccf20[2] == '\0') {
LAB_14571698a:
    if (*plVar3 == 0) goto LAB_1457169f7;
    cVar2 = FUN_1449e3c20(DAT_14cbccf20);
    if (cVar2 == '\0') goto LAB_1457169a0;
  }
  else {
    if ((char)DAT_14cbccf20[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_14571698a;
    }
LAB_1457169f7:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1457169a0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_map_viewer",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1457169a0:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716a52 FUN_145716a52 body=116 status=ok
// SIG undefined FUN_145716a52(void)

void FUN_145716a52(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf8)) {
      uVar2 = uVar1 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf8,8);
  }
  return;
}



// FUNCTION 145716ac6 FUN_145716ac6 body=79 status=ok
// SIG undefined FUN_145716ac6(void)

ulonglong FUN_145716ac6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x200);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar2 * 8) + 0x10)) {
        FUN_145716e54(param_1 + 0x1f8,uVar2 & 0xffffffff,CONCAT71((uint7)(uint3)(uVar1 >> 8),1));
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 145716b16 FUN_145716b16 body=89 status=ok
// SIG undefined FUN_145716b16(void)

void FUN_145716b16(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145716c36();
  return;
}



// FUNCTION 145716b70 FUN_145716b70 body=17 status=ok
// SIG undefined FUN_145716b70(void)

void FUN_145716b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a52700(param_2,param_1,param_4);
  return;
}



// FUNCTION 145716b82 FUN_145716b82 body=137 status=ok
// SIG undefined FUN_145716b82(void)

void FUN_145716b82(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + (ulonglong)param_2 * 0x28;
  *(undefined1 *)(param_1 + 8) = 3;
  local_28 = 0;
  local_20 = 0;
  FUN_144a450dc(param_1 + 0x20,&local_28);
  FUN_1449db362(&local_28);
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716c0c FUN_145716c0c body=42 status=ok
// SIG undefined FUN_145716c0c(void)

void FUN_145716c0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145716f64(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145716c36 FUN_145716c36 body=80 status=ok
// SIG undefined FUN_145716c36(void)

void FUN_145716c36(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_145716de0(param_1,param_2);
  return;
}



// FUNCTION 145716c86 FUN_145716c86 body=113 status=ok
// SIG undefined FUN_145716c86(void)

longlong FUN_145716c86(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716cf8 FUN_145716cf8 body=115 status=ok
// SIG undefined FUN_145716cf8(void)

longlong * FUN_145716cf8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145716d6c(param_1[2],*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145716d6c FUN_145716d6c body=115 status=ok
// SIG undefined FUN_145716d6c(void)

void FUN_145716d6c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [440];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14485c47a(param_2 + 0x208,*(undefined8 *)*param_1);
  FUN_140a504fe(local_1d0);
  FUN_140a54a0c(param_2,local_1d0);
  FUN_1415b5e16(local_1d0);
  if ((local_18 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145716de0 FUN_145716de0 body=116 status=ok
// SIG undefined FUN_145716de0(void)

void FUN_145716de0(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145716e54 FUN_145716e54 body=119 status=ok
// SIG undefined FUN_145716e54(void)

void FUN_145716e54(longlong *param_1,uint param_2,char param_3)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  if (param_3 == '\x01') {
    FUN_145716ecc(param_1);
    return;
  }
  return;
}



// FUNCTION 145716ecc FUN_145716ecc body=62 status=ok
// SIG undefined FUN_145716ecc(void)

void FUN_145716ecc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145716f0a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145716f0a FUN_145716f0a body=89 status=ok
// SIG undefined FUN_145716f0a(void)

ulonglong FUN_145716f0a(uint param_1,uint param_2)

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



// FUNCTION 145716f64 FUN_145716f64 body=119 status=ok
// SIG undefined FUN_145716f64(void)

void FUN_145716f64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145716fe6(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145716fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145716fdc FUN_145716fdc body=9 status=ok
// SIG undefined FUN_145716fdc(void)

void FUN_145716fdc(longlong param_1)

{
  FUN_140a58a56(param_1 + 0x10);
  return;
}



// FUNCTION 145716fe6 FUN_145716fe6 body=53 status=ok
// SIG undefined FUN_145716fe6(void)

void FUN_145716fe6(longlong *param_1)

{
  FUN_14571794a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14571701c FUN_14571701c body=136 status=ok
// SIG undefined FUN_14571701c(void)

longlong FUN_14571701c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014571707e;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014571707e:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1457170a4 FUN_1457170a4 body=141 status=ok
// SIG undefined FUN_1457170a4(void)

longlong FUN_1457170a4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x198),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 145717132 FUN_145717132 body=206 status=ok
// SIG undefined FUN_145717132(void)

undefined8 * FUN_145717132(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a544a70;
  lVar3 = 0x10;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar3 + 0xc);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x100);
  puVar4 = param_1 + 4;
  lVar3 = 0xf0;
  do {
    *(undefined1 *)(puVar4 + -3) = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_144a450dc(puVar4,&local_50);
    FUN_1449db362(&local_50);
    plVar2 = (longlong *)puVar4[-1];
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    puVar4 = puVar4 + 5;
    lVar3 = lVar3 + -0x28;
  } while (lVar3 != 0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145717202 FUN_145717202 body=227 status=ok
// SIG undefined FUN_145717202(void)

undefined8 * FUN_145717202(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar4[4] = 0;
  *puVar4 = &PTR_FUN_149edb640;
  puVar4[1] = 0;
  puVar4[2] = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  puVar4[3] = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar4[5] = &DAT_100000001;
  *puVar4 = &PTR_FUN_149f1e498;
  puVar4[4] = &PTR_LAB_149f1e4a0;
  uVar2 = DAT_14c8463f8;
  puVar4[6] = DAT_14c8463f0;
  puVar4[7] = uVar2;
  puVar4[8] = 0x3ff0000000000000;
  puVar4[9] = 0x3ff0000000000000;
  *param_2 = puVar4;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = param_1 + 0x1e0;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  param_2[0x12] = 0;
  param_2[0x14] = 0;
  return param_2;
}



// FUNCTION 1457172e6 FUN_1457172e6 body=233 status=ok
// SIG undefined FUN_1457172e6(void)

void FUN_1457172e6(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0x10] == -1) {
      uVar3 = FUN_145717460();
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    else {
      FUN_147d302e8(param_1[0xf],param_1);
    }
    pcVar2 = (code *)param_1[0x12];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0x10];
      plVar5 = param_1 + 0x16;
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x14];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0x12] != 0) {
    plVar5 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_1457173d0(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457173d0 FUN_1457173d0 body=59 status=ok
// SIG undefined FUN_1457173d0(void)

void FUN_1457173d0(longlong param_1)

{
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x40);
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  FUN_14571740c(param_1);
  return;
}



// FUNCTION 14571740c FUN_14571740c body=84 status=ok
// SIG undefined FUN_14571740c(void)

void FUN_14571740c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145717444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,1);
  return;
}



// FUNCTION 145717460 FUN_145717460 body=90 status=ok
// SIG undefined FUN_145717460(void)

int FUN_145717460(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14571752e(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_1457174ba(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 1457174ba FUN_1457174ba body=116 status=ok
// SIG undefined FUN_1457174ba(void)

void FUN_1457174ba(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_1457175b2();
  if (*(char *)(param_3 + 0x60) == '\x01') {
    FUN_140488020(param_1 + 0x40,param_1 + 0x20,param_3 + 0x50);
  }
  if (*(char *)(param_3 + 0x38) == '\x01') {
    FUN_140488020(param_1 + 0x30,param_1 + 0x20,param_3 + 0x28);
  }
  puVar1 = (undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_3 + 0x1c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x28) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  if (*(char *)(param_3 + 0x24) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x2c) = *puVar1;
  return;
}



// FUNCTION 14571752e FUN_14571752e body=132 status=ok
// SIG undefined FUN_14571752e(void)

void FUN_14571752e(longlong param_1,int param_2)

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



// FUNCTION 1457175b2 FUN_1457175b2 body=152 status=ok
// SIG undefined FUN_1457175b2(void)

void FUN_1457175b2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 14571764a FUN_14571764a body=328 status=ok
// SIG undefined FUN_14571764a(void)

undefined4 * FUN_14571764a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145717864(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_38 = uVar6;
  local_38[1] = *puVar1;
  uVar9 = puVar1[1];
  local_38[2] = uVar9;
  if (uVar9 == 0) {
    uVar9 = uVar6 >> 0x20;
  }
  else {
    LOCK();
    *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
    UNLOCK();
    uVar6 = (ulonglong)(uint)*local_38;
    uVar9 = (ulonglong)*(uint *)((longlong)local_38 + 4);
  }
  *(uint *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = FUN_144a78877(uVar6,uVar9);
  cVar3 = FUN_145717794(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(uint *)(local_38 + 3) =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145717cf4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145717794 FUN_145717794 body=207 status=ok
// SIG undefined FUN_145717794(void)

undefined8 FUN_145717794(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      lVar4 = *param_1;
      while( true ) {
        lVar10 = (longlong)iVar11 * 0x20;
        piVar3 = (int *)(lVar4 + lVar10);
        if ((*(int *)(lVar4 + lVar10) == *param_3) && (*(int *)(lVar4 + 4 + lVar10) == param_3[1]))
        break;
        iVar11 = piVar3[6];
        if (iVar11 == -1) {
          return 0;
        }
      }
      plVar9 = *(longlong **)(piVar3 + 4);
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
      iVar5 = *param_3;
      iVar6 = param_3[1];
      iVar7 = param_3[2];
      iVar8 = param_3[3];
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
      *piVar3 = iVar5;
      piVar3[1] = iVar6;
      piVar3[2] = iVar7;
      piVar3[3] = iVar8;
      FUN_145716de0(param_1,*param_4);
      *param_4 = iVar11;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145717864 FUN_145717864 body=230 status=ok
// SIG undefined FUN_145717864(void)

int * FUN_145717864(longlong *param_1,int *param_2)

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



// FUNCTION 14571794a FUN_14571794a body=378 status=ok
// SIG undefined FUN_14571794a(void)

void FUN_14571794a(longlong *param_1)

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



// FUNCTION 145717ac6 FUN_145717ac6 body=394 status=ok
// SIG undefined FUN_145717ac6(void)

undefined8 * FUN_145717ac6(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x220);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aa994c0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x210);
  FUN_140a539ac(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14aa994e0;
  plVar3[0x43] = 0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145717c52(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145717b7b;
    param_1[1] = 0;
LAB_145717bea:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145717b7b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145717b7b;
      goto LAB_145717bea;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145717b7b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145717b7b:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x210;
  FUN_140a52e78(*param_1,"SPlayerLayer",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x238);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145717c52 FUN_145717c52 body=162 status=ok
// SIG undefined FUN_145717c52(void)

void FUN_145717c52(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145717c91;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145717c91;
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
LAB_145717c91:
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
                    /* WARNING: Could not recover jumptable at 0x000145717cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145717cf4 FUN_145717cf4 body=458 status=ok
// SIG undefined FUN_145717cf4(void)

void FUN_145717cf4(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 145717ec0 FUN_145717ec0 body=102 status=ok
// SIG undefined FUN_145717ec0(void)

void FUN_145717ec0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14098eaa0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145717f28 FUN_145717f28 body=90 status=ok
// SIG undefined FUN_145717f28(void)

void FUN_145717f28(longlong *param_1,int param_2)

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
  FUN_147bdff26();
  return;
}



// FUNCTION 145717f82 FUN_145717f82 body=86 status=ok
// SIG undefined FUN_145717f82(void)

void FUN_145717f82(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,2);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,2);
  }
  return;
}



// FUNCTION 145717fd8 FUN_145717fd8 body=144 status=ok
// SIG undefined FUN_145717fd8(void)

void FUN_145717fd8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x20;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x20,8);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 145718068 FUN_145718068 body=168 status=ok
// SIG undefined FUN_145718068(void)

void FUN_145718068(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14017001e();
  lVar1 = FUN_140495e80(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_EchoUpgrade_RefreshGraph",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x18);
    FUN_1446ddc76(&local_38,"FOakUIEvent_EchoUpgrade_UpgradeSDU",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x20);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145718112 FUN_145718112 body=147 status=ok
// SIG undefined FUN_145718112(void)

void FUN_145718112(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457181a6 FUN_1457181a6 body=226 status=ok
// SIG undefined FUN_1457181a6(void)

longlong * FUN_1457181a6(longlong *param_1)

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
  pcVar13 = FUN_146301f2e;
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



// FUNCTION 14571828a FUN_14571828a body=136 status=ok
// SIG undefined FUN_14571828a(void)

code * FUN_14571828a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedBoundMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bce3e;
}



// FUNCTION 145718312 FUN_145718312 body=138 status=ok
// SIG undefined FUN_145718312(void)

code * FUN_145718312(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14571828a;
}



// FUNCTION 14571839c FUN_14571839c body=138 status=ok
// SIG undefined FUN_14571839c(void)

code * FUN_14571839c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridMaxCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145718312;
}



// FUNCTION 145718426 FUN_145718426 body=205 status=ok
// SIG undefined FUN_145718426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145718426(void)

{
  if ((DAT_14ca6e27f & 2) == 0) {
    DAT_14ca6e27f = DAT_14ca6e27f | 2;
    _DAT_14ca6e220 = L"TVirtualTextureVSBaseColorNormalSpecular";
    _DAT_14ca6e238 = FUN_146826540;
    _DAT_14ca6e240 = FUN_146825d77;
    _DAT_14ca6e248 = FUN_146825fd6;
    _DAT_14ca6e250 = FUN_1407e02ea;
    _DAT_14ca6e258 = FUN_146826273;
    _DAT_14ca6e230 = FUN_14733f8e8;
    _DAT_14ca6e270 = 0xffffffff00000108;
    _DAT_14ca6e278 = 8;
    DAT_14ca6e27c = 0;
    _DAT_14ca6e260 = &LAB_14733f91e;
    FUN_1457184f4();
    FUN_1407e00cc(&DAT_14ca6e218);
    return;
  }
  return;
}



// FUNCTION 1457184f4 FUN_1457184f4 body=123 status=ok
// SIG undefined FUN_1457184f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457184f4(void)

{
  _DAT_14ca71980 = L"BASE";
  DAT_14ca719aa = 4;
  _DAT_14ca71988 = FUN_141092e92();
  _DAT_14ca71990 = DAT_14ca6e228;
  _DAT_14ca71998 = &LAB_14682652b;
  DAT_14ca6e228 = &DAT_14ca71980;
  DAT_14ca6e27d = DAT_14ca6e27d + '\x01';
  _DAT_14ca719a0 = 0x100000000;
  if (*(char *)(_DAT_14ca71988 + 100) != '\0') {
    DAT_14ca6e27e = DAT_14ca6e27e + '\x01';
  }
  return;
}



// FUNCTION 145718570 FUN_145718570 body=205 status=ok
// SIG undefined FUN_145718570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145718570(void)

{
  if ((DAT_14ca6e3a7 & 2) == 0) {
    DAT_14ca6e3a7 = DAT_14ca6e3a7 | 2;
    _DAT_14ca6e348 = L"TVirtualTexturePSBaseColorNormalSpecular";
    _DAT_14ca6e360 = FUN_146826540;
    _DAT_14ca6e368 = FUN_146825d77;
    _DAT_14ca6e370 = FUN_146825fd6;
    _DAT_14ca6e378 = FUN_1407e02ea;
    _DAT_14ca6e380 = FUN_146826273;
    _DAT_14ca6e358 = FUN_14733f98a;
    _DAT_14ca6e398 = 0xffffffff00000108;
    _DAT_14ca6e3a0 = 8;
    DAT_14ca6e3a4 = 0;
    _DAT_14ca6e388 = &LAB_14733f9c0;
    FUN_14571863e();
    FUN_1407e00cc(&DAT_14ca6e340);
    return;
  }
  return;
}



// FUNCTION 14571863e FUN_14571863e body=123 status=ok
// SIG undefined FUN_14571863e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571863e(void)

{
  _DAT_14ca719b0 = L"BASE";
  DAT_14ca719da = 4;
  _DAT_14ca719b8 = FUN_141092e92();
  _DAT_14ca719c0 = DAT_14ca6e350;
  _DAT_14ca719c8 = &LAB_14682652b;
  DAT_14ca6e350 = &DAT_14ca719b0;
  DAT_14ca6e3a5 = DAT_14ca6e3a5 + '\x01';
  _DAT_14ca719d0 = 0x100000000;
  if (*(char *)(_DAT_14ca719b8 + 100) != '\0') {
    DAT_14ca6e3a6 = DAT_14ca6e3a6 + '\x01';
  }
  return;
}



// FUNCTION 1457186ba FUN_1457186ba body=205 status=ok
// SIG undefined FUN_1457186ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457186ba(void)

{
  if ((DAT_14ca6e71f & 2) == 0) {
    DAT_14ca6e71f = DAT_14ca6e71f | 2;
    _DAT_14ca6e6c0 = L"TVirtualTextureVSWorldHeight";
    _DAT_14ca6e6d8 = FUN_146826540;
    _DAT_14ca6e6e0 = FUN_146825d77;
    _DAT_14ca6e6e8 = FUN_146825fd6;
    _DAT_14ca6e6f0 = FUN_1407e02ea;
    _DAT_14ca6e6f8 = FUN_146826273;
    _DAT_14ca6e6d0 = FUN_14733fb70;
    _DAT_14ca6e710 = 0xffffffff00000108;
    _DAT_14ca6e718 = 8;
    DAT_14ca6e71c = 0;
    _DAT_14ca6e700 = &LAB_14733fba6;
    FUN_145718788();
    FUN_1407e00cc(&DAT_14ca6e6b8);
    return;
  }
  return;
}



// FUNCTION 145718788 FUN_145718788 body=123 status=ok
// SIG undefined FUN_145718788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145718788(void)

{
  _DAT_14ca71a40 = L"BASE";
  DAT_14ca71a6a = 4;
  _DAT_14ca71a48 = FUN_141092e92();
  _DAT_14ca71a50 = DAT_14ca6e6c8;
  _DAT_14ca71a58 = &LAB_14682652b;
  DAT_14ca6e6c8 = &DAT_14ca71a40;
  DAT_14ca6e71d = DAT_14ca6e71d + '\x01';
  _DAT_14ca71a60 = 0x100000000;
  if (*(char *)(_DAT_14ca71a48 + 100) != '\0') {
    DAT_14ca6e71e = DAT_14ca6e71e + '\x01';
  }
  return;
}



// FUNCTION 145718804 FUN_145718804 body=205 status=ok
// SIG undefined FUN_145718804(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145718804(void)

{
  if ((DAT_14ca6e847 & 2) == 0) {
    DAT_14ca6e847 = DAT_14ca6e847 | 2;
    _DAT_14ca6e7e8 = L"TVirtualTexturePSWorldHeight";
    _DAT_14ca6e800 = FUN_146826540;
    _DAT_14ca6e808 = FUN_146825d77;
    _DAT_14ca6e810 = FUN_146825fd6;
    _DAT_14ca6e818 = FUN_1407e02ea;
    _DAT_14ca6e820 = FUN_146826273;
    _DAT_14ca6e7f8 = FUN_14733fc12;
    _DAT_14ca6e838 = 0xffffffff00000108;
    _DAT_14ca6e840 = 8;
    DAT_14ca6e844 = 0;
    _DAT_14ca6e828 = &LAB_14733fc48;
    FUN_1457188d2();
    FUN_1407e00cc(&DAT_14ca6e7e0);
    return;
  }
  return;
}



// FUNCTION 1457188d2 FUN_1457188d2 body=123 status=ok
// SIG undefined FUN_1457188d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457188d2(void)

{
  _DAT_14ca71a70 = L"BASE";
  DAT_14ca71a9a = 4;
  _DAT_14ca71a78 = FUN_141092e92();
  _DAT_14ca71a80 = DAT_14ca6e7f0;
  _DAT_14ca71a88 = &LAB_14682652b;
  DAT_14ca6e7f0 = &DAT_14ca71a70;
  DAT_14ca6e845 = DAT_14ca6e845 + '\x01';
  _DAT_14ca71a90 = 0x100000000;
  if (*(char *)(_DAT_14ca71a78 + 100) != '\0') {
    DAT_14ca6e846 = DAT_14ca6e846 + '\x01';
  }
  return;
}



// FUNCTION 14571894e FUN_14571894e body=158 status=ok
// SIG undefined FUN_14571894e(void)

uint FUN_14571894e(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(*param_1 + 0x10);
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2);
    if (param_2[1] != 0) {
      uVar4 = (ulonglong)*(byte *)(lVar2 + 2 + uVar4 * 3);
    }
    return (uint)*(byte *)(lVar2 + 1 + uVar4 * 3);
  }
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(*param_1 + 0x10);
    lVar5 = (longlong)*(short *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2 * 2);
    if (param_2[1] != 0) {
      lVar5 = (longlong)*(short *)(lVar2 + 4 + lVar5 * 6);
    }
    uVar3 = (uint)*(short *)(lVar2 + 2 + lVar5 * 6);
  }
  else {
    uVar3 = 0xffffffff;
    if (cVar1 == '\x03') {
      lVar2 = *(longlong *)(*param_1 + 0x10);
      lVar5 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2 * 4);
      if (param_2[1] != 0) {
        lVar5 = (longlong)*(int *)(lVar2 + 8 + lVar5 * 0xc);
      }
      return *(uint *)(lVar2 + 4 + lVar5 * 0xc);
    }
  }
  return uVar3;
}



// FUNCTION 1457189ec FUN_1457189ec body=155 status=ok
// SIG undefined FUN_1457189ec(void)

uint FUN_1457189ec(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(*param_1 + 0x10);
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2);
    if (param_2[1] != 0) {
      uVar4 = (ulonglong)*(byte *)(lVar2 + 2 + uVar4 * 3);
    }
    return (uint)*(byte *)(lVar2 + uVar4 * 3);
  }
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(*param_1 + 0x10);
    lVar5 = (longlong)*(short *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2 * 2);
    if (param_2[1] != 0) {
      lVar5 = (longlong)*(short *)(lVar2 + 4 + lVar5 * 6);
    }
    uVar3 = (uint)*(short *)(lVar2 + lVar5 * 6);
  }
  else {
    uVar3 = 0xffffffff;
    if (cVar1 == '\x03') {
      lVar2 = *(longlong *)(*param_1 + 0x10);
      lVar5 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)*param_2 * 4);
      if (param_2[1] != 0) {
        lVar5 = (longlong)*(int *)(lVar2 + 8 + lVar5 * 0xc);
      }
      return *(uint *)(lVar2 + lVar5 * 0xc);
    }
  }
  return uVar3;
}



// FUNCTION 145718a88 FUN_145718a88 body=212 status=ok
// SIG undefined FUN_145718a88(void)

void FUN_145718a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d386b0(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145718b80 FUN_145718b80 body=310 status=ok
// SIG undefined FUN_145718b80(void)

undefined8 FUN_145718b80(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    pfVar6 = (float *)(*(longlong *)(param_1 + 0x20) + 0x14);
    uVar5 = 0xffffffff;
    dVar8 = -1.79769313486232e+308;
    uVar7 = 0;
    do {
      dVar9 = (*param_2 - (double)pfVar6[-5]) * (double)pfVar6[-2] +
              (param_2[1] - (double)pfVar6[-4]) * (double)pfVar6[-1] +
              (param_2[2] - (double)pfVar6[-3]) * (double)*pfVar6;
      if (dVar8 < dVar9) {
        uVar5 = uVar7 & 0xffffffff;
        dVar8 = dVar9;
      }
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 6;
    } while ((longlong)*(int *)(param_1 + 0x28) != uVar7);
    if ((int)uVar5 != -1) {
      *param_4 = dVar8;
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar4 = (longlong)(int)uVar5;
      fVar1 = *(float *)(lVar3 + 0x14 + lVar4 * 0x18);
      fVar2 = *(float *)(lVar3 + 0x10 + lVar4 * 0x18);
      *param_3 = (double)*(float *)(lVar3 + 0xc + lVar4 * 0x18);
      param_3[1] = (double)fVar2;
      param_3[2] = (double)fVar1;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14571a0ab FUN_14571a0ab body=524 status=ok
// SIG undefined FUN_14571a0ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14571a0ab(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_b8 = (double)_DAT_14c75f068;
  local_b0 = (double)DAT_14c75f06c;
  local_88 = param_5;
  local_98 = param_6;
  local_a0 = param_3;
  local_90 = param_2;
  if (DAT_14c992dd0 == '\x01') {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_146cf68bd(&local_90,&local_a0,param_4,local_20);
  }
  else {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_1404cddba(&local_90,&local_a0,param_4,local_20);
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[3] = local_50;
  param_1[4] = uStack_48;
  param_1[5] = local_40;
  uVar1 = (uint)DAT_149931e80;
  uVar2 = DAT_149931e80._4_4_;
  uVar3 = DAT_149931e80._8_4_;
  uVar4 = DAT_149931e80._12_4_;
  *(uint *)(param_1 + 6) = local_80 ^ uVar1;
  *(uint *)((longlong)param_1 + 0x34) = uStack_7c ^ uVar2;
  *(uint *)(param_1 + 7) = uStack_78 ^ uVar3;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_74 ^ uVar4;
  param_1[8] = CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar2,(uint)local_70 ^ uVar1);
  param_1[9] = CONCAT44(local_20._4_4_ ^ uVar2,local_20._0_4_ ^ uVar1);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571a2b8 FUN_14571a2b8 body=544 status=ok
// SIG undefined FUN_14571a2b8(void)

void FUN_14571a2b8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong lStack_70;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  lStack_50 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0xf8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78._0_4_ = (undefined4)local_58;
  local_78._4_4_ = local_58._4_4_;
  lStack_70 = lStack_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (lStack_50 != lVar2)) {
    do {
      FUN_14571a4da(*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x20));
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (lStack_70 != lVar2 || iStack_64 != iVar3));
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  lVar2 = param_1 + 0x130;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  iVar3 = 0;
  lStack_50 = lVar2;
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x148);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = local_58;
  lStack_70 = lStack_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (lStack_50 != lVar2)) {
    do {
      do {
        FUN_14571a4da(*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x20));
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((lStack_70 != lVar2) || (local_80 != plVar1));
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_14571a4da();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571a4da FUN_14571a4da body=127 status=ok
// SIG undefined FUN_14571a4da(void)

void FUN_14571a4da(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    lVar4 = lVar4 * 0x10;
    lVar5 = (longlong)*(int *)(param_1 + 0x38 + lVar4);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x30 + lVar4);
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + lVar7);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x18) = 0;
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar5 * 0x10 != lVar7);
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x58 + lVar4);
    if (lVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50 + lVar4);
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(lVar4 + lVar6);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x18) = 0;
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar5 * 0x10 != lVar6);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 14571a55a FUN_14571a55a body=232 status=ok
// SIG undefined FUN_14571a55a(void)

longlong * FUN_14571a55a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146315548;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14571a648 FUN_14571a648 body=33 status=ok
// SIG undefined FUN_14571a648(void)

void FUN_14571a648(longlong param_1)

{
  FUN_140115e24();
  FUN_1404d4e8e(param_1 + 0x450,param_1);
  return;
}



// FUNCTION 14571a66a FUN_14571a66a body=135 status=ok
// SIG undefined FUN_14571a66a(void)

undefined8 * FUN_14571a66a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b16c1f0;
  param_1[0x72] = &PTR_LAB_14b16c830;
  param_1[0x73] = &PTR_LAB_14b16c850;
  param_1[0x83] = &PTR_LAB_14b16c870;
  param_1[0x84] = &PTR_LAB_14b16c890;
  param_1[0x85] = &PTR_LAB_14b16c8b0;
  FUN_1404d58fc(param_1 + 0x89);
  FUN_14061144a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14571a702 FUN_14571a702 body=91 status=ok
// SIG undefined FUN_14571a702(void)

void FUN_14571a702(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x130))(plVar1,0);
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
  }
  FUN_14571a8e6(param_1,0);
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x98))();
  }
  *(undefined1 *)(param_1 + 0x176) = 0;
  return;
}



// FUNCTION 14571a772 FUN_14571a772 body=86 status=ok
// SIG undefined FUN_14571a772(void)

void FUN_14571a772(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571a7ca FUN_14571a7ca body=79 status=ok
// SIG undefined FUN_14571a7ca(void)

void FUN_14571a7ca(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x120))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x100))(param_1,DAT_14c96b1e1);
    plVar1 = (longlong *)param_1[6];
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571a816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14571a81c FUN_14571a81c body=50 status=ok
// SIG undefined FUN_14571a81c(void)

void FUN_14571a81c(longlong param_1)

{
  FUN_1404d7bcf();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x20) = 0;
  }
  return;
}



// FUNCTION 14571a84e FUN_14571a84e body=64 status=ok
// SIG undefined FUN_14571a84e(void)

void FUN_14571a84e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x130))(param_1,0);
  (**(code **)(*param_1 + 0x148))(param_1);
  if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[1] + 0x60))();
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 14571a88e FUN_14571a88e body=86 status=ok
// SIG undefined FUN_14571a88e(void)

void FUN_14571a88e(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571a8e6 FUN_14571a8e6 body=271 status=ok
// SIG undefined FUN_14571a8e6(void)

void FUN_14571a8e6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if ((plVar3 == (longlong *)0x0) || (*(char *)((longlong)plVar3 + 0x39) != DAT_14c96b238))
  goto LAB_14571a915;
  if ((*(longlong *)(param_1 + 0x1b8) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x1b8) + 0x39) != *(char *)((longlong)plVar3 + 0x39)))
  goto LAB_14571a915;
  if (((char)param_2 == '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x188), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x120))(plVar1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x138))();
      if (cVar2 == '\0') {
        plVar3 = *(longlong **)(param_1 + 0x1a8);
        if (plVar3 != (longlong *)0x0) goto LAB_14571a986;
        goto LAB_14571a9a7;
      }
    }
  }
  else {
LAB_14571a986:
    local_30 = DAT_14c96b1e1;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar3 + 0x1c0))();
LAB_14571a9a7:
    if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
      local_48 = DAT_14c96b1e1;
      local_47 = 1;
      local_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x1c0))();
    }
    FUN_1404d7e68(param_1);
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  FUN_140898514(param_1 + 0x48,param_2);
LAB_14571a915:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571a9f8 FUN_14571a9f8 body=163 status=ok
// SIG undefined FUN_14571a9f8(void)

void FUN_14571a9f8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405f1eac();
  local_38 = 0;
  uStack_30 = 0;
  FUN_1404dedd4(param_1[0x75],&local_38);
  lVar1 = local_38;
  lVar2 = (longlong)(int)uStack_30;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x370))(param_1,*(undefined8 *)(*(longlong *)(lVar1 + lVar3) + 0xa8));
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571aa9c FUN_14571aa9c body=190 status=ok
// SIG undefined FUN_14571aa9c(void)

void FUN_14571aa9c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1404df0da();
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14045aae0();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14045aae0();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar3 != 0 && lVar2 != lVar3) {
        puVar4 = (undefined4 *)FUN_148929166(param_1 + 0x420);
        FUN_14045adb4(&local_38,lVar3);
        *puVar4 = local_38;
        puVar4[1] = uStack_34;
        puVar4[2] = uStack_30;
        puVar4[3] = uStack_2c;
        FUN_140cbebe8(param_1 + 0x30,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571ab5c FUN_14571ab5c body=226 status=ok
// SIG undefined FUN_14571ab5c(void)

longlong * FUN_14571ab5c(longlong *param_1)

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
  pcVar13 = FUN_1462d466c;
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



// FUNCTION 14571ac44 FUN_14571ac44 body=132 status=ok
// SIG undefined FUN_14571ac44(void)

undefined1 * FUN_14571ac44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14571ac40;
}



// FUNCTION 14571acc8 FUN_14571acc8 body=138 status=ok
// SIG undefined FUN_14571acc8(void)

code * FUN_14571acc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14571ac44;
}



// FUNCTION 14571ad58 FUN_14571ad58 body=52 status=ok
// SIG undefined FUN_14571ad58(void)

void FUN_14571ad58(longlong *param_1)

{
  longlong lVar1;
  
  FUN_14571ae50(*param_1);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14571ad8c(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14571ad8c FUN_14571ad8c body=97 status=ok
// SIG undefined FUN_14571ad8c(void)

void FUN_14571ad8c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_14571aecb(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x128) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14571adee(param_1);
  return;
}



// FUNCTION 14571adee FUN_14571adee body=97 status=ok
// SIG undefined FUN_14571adee(void)

void FUN_14571adee(longlong *param_1)

{
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1456d7c02(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14571ae50 FUN_14571ae50 body=123 status=ok
// SIG undefined FUN_14571ae50(void)

void FUN_14571ae50(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_14571af3c(param_1,1);
  FUN_14571aecb(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_14571af0c(param_1 + 0x130);
  }
  lVar3 = *(longlong *)(param_1 + 0x128);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
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



// FUNCTION 14571aecb FUN_14571aecb body=65 status=ok
// SIG undefined FUN_14571aecb(void)

void FUN_14571aecb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449cc82a(param_1 + 0x30);
    FUN_1449cc82a(param_1 + 0x20);
    FUN_1449cc82a(param_1 + 0x10);
    FUN_1449cc82a(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14571af0c FUN_14571af0c body=48 status=ok
// SIG undefined FUN_14571af0c(void)

void FUN_14571af0c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 14571af3c FUN_14571af3c body=650 status=ok
// SIG undefined FUN_14571af3c(void)

void FUN_14571af3c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  float local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [64];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = *(int *)(param_1 + 0x138);
  if (0 < iVar4) {
    lVar5 = 0;
    uVar6 = 0;
    bVar7 = false;
    do {
      if (uVar6 != *(uint *)(param_1 + 0x140)) {
        lVar1 = *(longlong *)(param_1 + 0x130);
        uVar8 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 0;
        if (*(longlong *)(lVar1 + lVar5) != 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xffffffff);
          bVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))
                            (DAT_14ca83900,*(longlong *)(lVar1 + lVar5),&local_98,param_2);
          uVar8 = (uint)bVar3;
        }
        lVar2 = *(longlong *)(lVar1 + 0x10 + lVar5);
        if (lVar2 != 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xffffffff);
          bVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,lVar2,&local_a0,param_2);
          uVar8 = uVar8 + bVar3;
        }
        lVar2 = *(longlong *)(lVar1 + 0x20 + lVar5);
        if (lVar2 != 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xffffffff);
          bVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,lVar2,&local_a8,param_2);
          uVar8 = uVar8 + bVar3;
        }
        lVar2 = *(longlong *)(lVar1 + 0x30 + lVar5);
        if (lVar2 != 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xffffffff);
          bVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,lVar2,&local_b0,param_2);
          if (uVar8 + bVar3 == 4) {
            local_b4 = (float)(DAT_14ca84e02 ^ 1);
            local_50 = 0;
            local_48 = 0x1000000000;
            FUN_1448b6aaa(local_90,DAT_14ca8b9f8);
            FUN_1448b6b20(local_90,&local_b4);
            local_c8 = local_90;
            FUN_147a7dc7a(param_1,*(undefined8 *)(lVar1 + 0x40 + lVar5),
                          (float)(ulonglong)(local_b0 - local_98) / 1000.0,
                          (float)(ulonglong)(local_a8 - local_a0) / 1000.0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            FUN_1456d7864(lVar1 + lVar5);
            bVar7 = true;
          }
        }
        iVar4 = *(int *)(param_1 + 0x138);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((longlong)uVar6 < (longlong)iVar4);
    if (bVar7) {
      FUN_140ed6060(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571b1c8 FUN_14571b1c8 body=155 status=ok
// SIG undefined FUN_14571b1c8(void)

undefined8 * FUN_14571b1c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14571b264(param_3,&local_30,&DAT_14cb8b8a8);
  if (local_30 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14571b7dc(local_30,param_2,param_1);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571b264 FUN_14571b264 body=178 status=ok
// SIG undefined FUN_14571b264(void)

longlong * FUN_14571b264(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_14571b31a();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_14571b2ba;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14571b2ba:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571b31a FUN_14571b31a body=57 status=ok
// SIG undefined FUN_14571b31a(void)

void FUN_14571b31a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65d60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65d60 = FUN_140002ddd(FUN_14650cd7e,uVar1,L"TargetResolutionStrategyProvider");
  }
  return;
}



// FUNCTION 14571b388 FUN_14571b388 body=254 status=ok
// SIG undefined FUN_14571b388(void)

longlong *
FUN_14571b388(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_14571b48a(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14571b502(&local_30,plVar1);
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



// FUNCTION 14571b48a FUN_14571b48a body=120 status=ok
// SIG undefined FUN_14571b48a(void)

undefined8 * FUN_14571b48a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b428410;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b428430;
  param_1[6] = &PTR_FUN_14b428470;
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



// FUNCTION 14571b502 FUN_14571b502 body=162 status=ok
// SIG undefined FUN_14571b502(void)

void FUN_14571b502(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_14571b541;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_14571b541;
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
LAB_14571b541:
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
                    /* WARNING: Could not recover jumptable at 0x00014571b5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14571b5a4 FUN_14571b5a4 body=132 status=ok
// SIG undefined FUN_14571b5a4(void)

void FUN_14571b5a4(longlong param_1,int param_2)

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



// FUNCTION 14571b628 FUN_14571b628 body=12 status=ok
// SIG undefined FUN_14571b628(void)

void FUN_14571b628(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014571b631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14571b634 FUN_14571b634 body=31 status=ok
// SIG undefined FUN_14571b634(void)

undefined8 FUN_14571b634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14571b654 FUN_14571b654 body=385 status=ok
// SIG undefined FUN_14571b654(void)

longlong * FUN_14571b654(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_1404e3d8a(param_2,&local_40);
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  *puVar4 = &PTR_LAB_14b42c080;
  puVar4[1] = *param_3;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar4[2] = lVar6;
  *puVar4 = &PTR_FUN_14b42c010;
  puVar4[3] = local_40;
  puVar4[4] = local_38;
  if (local_38 == (longlong *)0x0) {
    puVar4[5] = FUN_1412e1114;
  }
  else {
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_1412e1114;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571b7dc FUN_14571b7dc body=505 status=ok
// SIG undefined FUN_14571b7dc(void)

ulonglong * FUN_14571b7dc(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x10))(param_3,&local_58);
  puVar4 = (ulonglong *)FUN_14571ba68(param_1 + 0x28,local_58 & 0xffffffff,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (*puVar4 != 0) goto LAB_14571b89c;
  FUN_14571b9d6(param_3,&local_58,param_1 + 0x18);
  plVar5 = local_50;
  if (local_50 == (longlong *)0x0) {
    *puVar4 = local_58;
    plVar6 = (longlong *)puVar4[1];
    if (plVar6 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_14571b8f7:
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014571b92c:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *puVar4 = local_58;
    plVar6 = (longlong *)puVar4[1];
    if (local_50 == plVar6) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x00014571b92c;
      }
    }
    else {
      puVar4[1] = (ulonglong)local_50;
      if (plVar6 != (longlong *)0x0) goto LAB_14571b8f7;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((puVar4[2] != 0) &&
     (plVar5 = (longlong *)(**(code **)(*(longlong *)*puVar4 + 0x18))(), plVar5 != (longlong *)0x0))
  {
    local_58 = puVar4[2];
    local_50 = (longlong *)puVar4[3];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
LAB_14571b89c:
  *param_2 = *puVar4;
  uVar3 = puVar4[1];
  param_2[1] = uVar3;
  if (uVar3 != 0) {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571b9d6 FUN_14571b9d6 body=142 status=ok
// SIG undefined FUN_14571b9d6(void)

longlong * FUN_14571b9d6(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x18))();
  plVar1 = (longlong *)*param_2;
  (**(code **)(*param_1 + 0x10))(param_1,local_58);
  FUN_1404e49fa(plVar1 + 6,local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(plVar1 + 0xb) = *param_3;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = uVar2;
  *(undefined4 *)(plVar1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)plVar1 + 100) = uVar4;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571ba68 FUN_14571ba68 body=188 status=ok
// SIG undefined FUN_14571ba68(void)

longlong FUN_14571ba68(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x50;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x50) == *param_3) {
          if (lVar3 != 0) goto LAB_14571bafc;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x48);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14571bb26(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x50 + *param_1;
LAB_14571bafc:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x28;
}



// FUNCTION 14571bb26 FUN_14571bb26 body=260 status=ok
// SIG undefined FUN_14571bb26(void)

undefined4 * FUN_14571bb26(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14571bd3c(param_1,local_48);
  FUN_14571bc2c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_14571bc8a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
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
      FUN_1404e4aee(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571bc2c FUN_14571bc2c body=93 status=ok
// SIG undefined FUN_14571bc2c(void)

longlong FUN_14571bc2c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1404e49e4(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1404e4a88();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571bc8a FUN_14571bc8a body=178 status=ok
// SIG undefined FUN_14571bc8a(void)

undefined8 FUN_14571bc8a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          FUN_1404e4a88((longlong)_Dst + 0x28);
          if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x48);
          FUN_14898d3be(param_1,*param_4);
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



// FUNCTION 14571bd3c FUN_14571bd3c body=239 status=ok
// SIG undefined FUN_14571bd3c(void)

int * FUN_14571bd3c(longlong *param_1,int *param_2)

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



// FUNCTION 14571be2c FUN_14571be2c body=147 status=ok
// SIG undefined FUN_14571be2c(void)

void FUN_14571be2c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 14571bec0 FUN_14571bec0 body=158 status=ok
// SIG undefined FUN_14571bec0(void)

longlong * FUN_14571bec0(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14571bf61();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14571bfdc(&local_30,plVar1);
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



// FUNCTION 14571bf61 FUN_14571bf61 body=122 status=ok
// SIG undefined FUN_14571bf61(void)

void FUN_14571bf61(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b42be80;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b42bea0;
  puVar1[0xf] = &PTR_FUN_14b42bed0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14571bfdc FUN_14571bfdc body=162 status=ok
// SIG undefined FUN_14571bfdc(void)

void FUN_14571bfdc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14571c01b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14571c01b;
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
LAB_14571c01b:
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
                    /* WARNING: Could not recover jumptable at 0x00014571c07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14571c07e FUN_14571c07e body=152 status=ok
// SIG undefined FUN_14571c07e(void)

undefined8 *
FUN_14571c07e(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1404e4778(param_1,param_4);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b427ba0;
  param_1[4] = &PTR_FUN_14b427be0;
  param_1[0x15] = *param_3;
  lVar1 = param_3[1];
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *param_2;
  param_1[0x18] = lVar1;
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 0x1a);
  }
  return param_1;
}



// FUNCTION 14571c12e FUN_14571c12e body=162 status=ok
// SIG undefined FUN_14571c12e(void)

void FUN_14571c12e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_14571c16d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_14571c16d;
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
LAB_14571c16d:
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
                    /* WARNING: Could not recover jumptable at 0x00014571c1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14571c1d0 FUN_14571c1d0 body=85 status=ok
// SIG undefined FUN_14571c1d0(void)

void FUN_14571c1d0(longlong *param_1,int param_2)

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
  FUN_14571c226();
  return;
}



// FUNCTION 14571c226 FUN_14571c226 body=71 status=ok
// SIG undefined FUN_14571c226(void)

void FUN_14571c226(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  FUN_14571c26e(param_1,param_2);
  return;
}



// FUNCTION 14571c26e FUN_14571c26e body=114 status=ok
// SIG undefined FUN_14571c26e(void)

void FUN_14571c26e(longlong *param_1,int param_2)

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



// FUNCTION 14571c2e6 FUN_14571c2e6 body=12 status=ok
// SIG undefined FUN_14571c2e6(void)

void FUN_14571c2e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014571c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14571c2f2 FUN_14571c2f2 body=31 status=ok
// SIG undefined FUN_14571c2f2(void)

undefined8 FUN_14571c2f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14571c312 FUN_14571c312 body=132 status=ok
// SIG undefined FUN_14571c312(void)

void FUN_14571c312(longlong param_1,int param_2)

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



// FUNCTION 14571c3a0 FUN_14571c3a0 body=251 status=ok
// SIG undefined FUN_14571c3a0(void)

void FUN_14571c3a0(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (-1 < (int)param_3) {
    plVar1 = (longlong *)*param_1;
    if ((int)param_3 < (int)plVar1[0x11]) {
      plVar3 = plVar1 + 0xe;
      if ((longlong *)plVar1[0x10] != (longlong *)0x0) {
        plVar3 = (longlong *)plVar1[0x10];
      }
      if ((*(uint *)((longlong)plVar3 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0
         ) {
        plVar3 = plVar1 + 0xc;
        lVar4 = (ulonglong)param_3 * 0x18 + *plVar3;
        puVar2 = *(undefined8 **)param_1[1];
        if (puVar2 != (undefined8 *)0x0) {
          (*(code *)*puVar2)(puVar2[1],param_2,lVar4);
        }
        if (*(int *)(*(longlong *)(lVar4 + 8) + 0x10) != 0) {
          (**(code **)(*plVar1 + 8))(plVar1,param_2,param_1[2],lVar4);
          FUN_14571c594(plVar1 + 0x13,param_2,param_1[2],lVar4);
        }
        puVar2 = (undefined8 *)(*plVar3 + (ulonglong)param_3 * 0x18);
        (**(code **)*puVar2)(puVar2,0);
        FUN_14571c50e(plVar3,param_3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14571c49c FUN_14571c49c body=112 status=ok
// SIG undefined FUN_14571c49c(void)

void FUN_14571c49c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &PTR_FUN_14a184350;
  local_28 = *(undefined8 *)(param_4 + 8);
  local_20 = *(longlong *)(param_4 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_10 = 0xb;
  FUN_14571c650(param_1 + 0xb0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571c50e FUN_14571c50e body=134 status=ok
// SIG undefined FUN_14571c50e(void)

void FUN_14571c50e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14571c594 FUN_14571c594 body=187 status=ok
// SIG undefined FUN_14571c594(void)

void FUN_14571c594(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14571c637;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14571c637:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14571c650 FUN_14571c650 body=786 status=ok
// SIG undefined FUN_14571c650(void)

void FUN_14571c650(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_208 [32];
  undefined2 *local_1e8;
  int local_1e0;
  undefined1 local_1d8 [32];
  byte local_1b8;
  undefined *local_1b0;
  undefined1 local_1a8;
  longlong local_1a0 [2];
  undefined1 local_190 [32];
  byte local_170;
  undefined1 local_168 [32];
  byte local_148;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d8 [8];
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b8 = 0;
  FUN_140c379ae(local_1d8,param_3);
  FUN_1400021e4(param_2[1],&local_1e8);
  puVar2 = local_1e8;
  if (local_1e0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  puVar1 = (undefined *)FUN_1404eee4c(param_1);
  local_1b0 = &DAT_14c9a3168;
  if ('\x02' < (char)puVar1[0x38]) {
    local_1b0 = puVar1;
  }
  if (*(longlong *)(puVar1 + 0x3c) == 0) {
    local_1b0 = &DAT_14c9a3168;
  }
  local_1a8 = 3;
  FUN_140056680(local_1a0,puVar2);
  local_170 = local_1b8;
  (*(code *)(&PTR_LAB_14a184230)[local_1b8])(local_190,local_1d8);
  (*(code *)(&PTR_FUN_14a1842f0)[local_1b8])(local_1d8);
  FUN_14571c964(local_168,&local_1b0);
  local_110 = 0;
  local_108 = 0x100000000;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  FUN_14027c224(local_d8,local_168);
  FUN_1404eeb8e(local_168);
  (*(code *)(&PTR_FUN_14a1842f0)[local_170])(local_190);
  if (local_1a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] == 1) {
    FUN_14571c9f0(local_d0,&DAT_14c9a3040,*param_2);
    FUN_1404eed4e(*param_2,local_168);
    if (local_d8[0] == 1) {
      FUN_1404ef002(local_d0,&DAT_14c9a3050,local_168);
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_148])();
    if (local_d8[0] == 1) {
      FUN_1404eef5c(local_d0,&DAT_14c9a3060,param_2 + 2);
    }
    if ((local_d8[0] & 1) != 0) {
      FUN_1404eeeb8(local_d0,&DAT_14c9a3070,param_2 + 3);
    }
    FUN_1404eed4e(param_2[1],local_168);
    if (local_d8[0] == 1) {
      FUN_1404ef002(local_d0,&DAT_14c9a3010,local_168);
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_148])();
    if (local_d8[0] == 1) {
      FUN_1404eef5c(local_d0,&DAT_14c9a3020,param_2[1] + 0x30);
    }
    if ((local_d8[0] & 1) != 0) {
      FUN_1404eeeb8(local_d0,&DAT_14c9a3030,param_2[1] + 0x38);
    }
    if ((local_d8[0] & 1) != 0) {
      FUN_1404ef002(local_d0,&DAT_14c9a3080,param_4);
    }
    if ((local_d8[0] & 1) != 0) {
      FUN_1404eedce(local_d0,&DAT_14c9a3c28,*(undefined8 *)(*param_2 + 0x1c));
    }
  }
  if ((local_d8[0] & 1) != 0) {
    FUN_14027c70a(local_d0);
  }
  FUN_1404eeb8e(local_d0);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_4 + 0x20)])(param_4);
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571c964 FUN_14571c964 body=140 status=ok
// SIG undefined FUN_14571c964(void)

undefined8 * FUN_14571c964(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&PTR_LAB_14a184290)[bVar1])(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14571c9f0 FUN_14571c9f0 body=165 status=ok
// SIG undefined FUN_14571c9f0(void)

longlong * FUN_14571c9f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    iVar2 = (int)param_1[0xc];
    if (iVar2 == 0) {
      FUN_140d76a74(param_1);
      iVar2 = (int)param_1[0xc];
    }
    plVar4 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xb];
    }
    lVar3 = (longlong)(iVar2 + -1);
    iVar2 = (int)plVar4[lVar3 * 2 + 1];
    *(uint *)(plVar4 + lVar3 * 2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + lVar3 * 0x10 + 0xc) < iVar2 + 1U) {
      FUN_140eed74c(plVar4 + lVar3 * 2,iVar2);
    }
    lVar3 = plVar4[lVar3 * 2];
    lVar5 = (longlong)iVar2 * 0x30;
    uVar1 = *param_3;
    *(undefined1 *)(lVar3 + 0x20 + lVar5) = 0;
    FUN_140aec01a(lVar3 + lVar5,uVar1);
    *(undefined8 *)(lVar3 + 0x28 + lVar5) = *param_2;
  }
  return param_1;
}



// FUNCTION 14571ca96 FUN_14571ca96 body=72 status=ok
// SIG undefined FUN_14571ca96(void)

void FUN_14571ca96(undefined8 *param_1)

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



// FUNCTION 14571cade FUN_14571cade body=146 status=ok
// SIG undefined FUN_14571cade(void)

void FUN_14571cade(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14571cb72 FUN_14571cb72 body=68 status=ok
// SIG undefined FUN_14571cb72(void)

void FUN_14571cb72(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1404fa80a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14571cbb6 FUN_14571cbb6 body=97 status=ok
// SIG undefined FUN_14571cbb6(void)

undefined4 FUN_14571cbb6(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1404faf2e();
  if ((char)uVar1 != '\0') {
    FUN_1404fb252(param_1);
    if (((((*(byte *)(param_1 + 2) & 2) != 0) && (*param_1 != 0)) &&
        (lVar2 = *(longlong *)(*param_1 + 0xa8), lVar2 != 0)) &&
       (*(char *)(lVar2 + 0x178) == '\x02')) {
      lVar2 = FUN_1404fab04();
      FUN_14571cc18(*param_1,param_1 + 3,*(undefined4 *)(lVar2 + 0xc));
    }
  }
  return uVar1;
}



// FUNCTION 14571cc18 FUN_14571cc18 body=167 status=ok
// SIG undefined FUN_14571cc18(void)

void FUN_14571cc18(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_48 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      FUN_1456cec3c();
      local_48 = *(longlong *)(param_2 + 8);
    }
  }
  local_40 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ba48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571ccc0 FUN_14571ccc0 body=132 status=ok
// SIG undefined FUN_14571ccc0(void)

void FUN_14571ccc0(longlong param_1,int param_2)

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



// FUNCTION 14571cd46 FUN_14571cd46 body=883 status=ok
// SIG undefined FUN_14571cd46(void)

void FUN_14571cd46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140206818();
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x8f0);
  if (lVar9 != 0) {
    FUN_140fa388e(*(undefined8 *)(param_1 + 0x3e0),*(undefined8 *)(lVar9 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x404);
  lVar9 = param_1 + 0x410;
  if ((((*(longlong *)(param_1 + 0x410) != 0) && (*(int *)(param_1 + 0x418) - 1U < 0xfffffffe)) &&
      (lVar7 = FUN_140d3be2e(lVar9), lVar7 != 0)) && (lVar7 = FUN_140d3be2e(lVar9), lVar7 != 0)) {
    FUN_140d3bf04(lVar7,&local_38,*(undefined8 *)(param_1 + 0x404));
    *(longlong *)(param_1 + 0x3b4) = local_38;
  }
  FUN_1404fda2e(param_1);
  FUN_1404ff11c(param_1);
  FUN_14571d0ba(param_1 + 0x390);
  uVar8 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_38,uVar8);
  if (((local_38 != 0) && (local_30 != (longlong *)0x0)) && (0 < (int)local_30[1])) {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_30[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar11 = local_30;
    } while (!bVar12);
    lVar7 = 0;
    if (plVar11 != (longlong *)0x0) {
      lVar7 = local_38;
    }
    FUN_14571d2c0(lVar7,param_1);
    if (((*(longlong *)(param_1 + 0x410) != 0) && (*(int *)(param_1 + 0x418) - 1U < 0xfffffffe)) &&
       (lVar9 = FUN_140d3be2e(lVar9), lVar9 != 0)) {
      FUN_140d39538(lVar7,&local_48,lVar9);
      plVar1 = local_40;
      if ((longlong *)(param_1 + 0x528) != &local_48) {
        *(longlong *)(param_1 + 0x528) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 0x530);
        if (local_40 != plVar3) {
          local_40 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x530) = plVar1;
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
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x528);
      if ((lVar9 != 0) &&
         (((*(char *)(lVar9 + 0x30) != '\0' || (*(char *)(lVar9 + 0x31) != '\0')) ||
          (*(int *)(lVar9 + 0x6c) != 2)))) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar4 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar10;
        *local_58 = &PTR_FUN_14afe3320;
        local_58[3] = 0;
        FUN_14485c47a(local_58 + 3,param_1);
        puVar4[4] = FUN_1457d9130;
        *(undefined4 *)(puVar4 + 5) = 0;
        FUN_140844560(lVar9,&local_48,&local_58);
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571d0ba FUN_14571d0ba body=92 status=ok
// SIG undefined FUN_14571d0ba(void)

void FUN_14571d0ba(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d3b348(local_28,param_1);
  FUN_14571d1ba(local_28);
  FUN_14571d118(&DAT_14cade100,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571d118 FUN_14571d118 body=162 status=ok
// SIG undefined FUN_14571d118(void)

void FUN_14571d118(longlong *param_1,undefined8 param_2)

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
        goto LAB_14571d1a5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14571d1a5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14571d1ba FUN_14571d1ba body=121 status=ok
// SIG undefined FUN_14571d1ba(void)

void FUN_14571d1ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar3 = DAT_14cade138;
  lVar5 = (longlong)(int)DAT_14cade138;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(DAT_14cade130 + 8 + uVar4) == param_1[1]) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  DAT_14cade138 = DAT_14cade138 + 1;
  if (DAT_14cade13c < DAT_14cade138) {
    FUN_14571d234(iVar3);
  }
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(DAT_14cade130 + lVar5 * 0x10);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 14571d234 FUN_14571d234 body=140 status=ok
// SIG undefined FUN_14571d234(void)

void FUN_14571d234(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cade138;
  if (param_1 <= (int)DAT_14cade138) {
    if (DAT_14cade13c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cade138) {
        uVar2 = DAT_14cade138;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cade138 + ((ulonglong)((longlong)(int)DAT_14cade138 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14cade13c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cade130,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14571d2c0 FUN_14571d2c0 body=1220 status=ok
// SIG undefined FUN_14571d2c0(void)

void FUN_14571d2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  float *pfVar19;
  float fVar20;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar12 = param_1 + 0x238;
  FUN_14485c47a(lVar12);
  if (param_2 == 0) goto LAB_14571d553;
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x48c);
  if (((*(longlong *)(param_2 + 0x410) != 0) && (*(int *)(param_2 + 0x418) - 1U < 0xfffffffe)) &&
     (lVar10 = FUN_140d3be2e(param_2 + 0x410), lVar10 != 0)) {
    FUN_14571da30(param_1,lVar10);
    FUN_14571d7ac(param_1 + 0x3d0);
    lVar11 = FUN_14479d2ce(lVar12);
    if ((longlong)*(int *)(lVar11 + 0x498) != 0) {
      puVar18 = *(undefined1 **)(lVar11 + 0x490);
      lVar11 = (longlong)*(int *)(lVar11 + 0x498) << 3;
      do {
        uVar4 = *(undefined4 *)(puVar18 + 4);
        puVar14 = (undefined4 *)FUN_145ad287c(param_1 + 0x3d0,*puVar18,puVar18);
        *puVar14 = uVar4;
        puVar18 = puVar18 + 8;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar11 = FUN_14479d2ce(lVar12);
    FUN_14571db34(param_1,lVar10,*(undefined8 *)(lVar11 + 0x404));
    FUN_14571dcdc(param_1);
    lVar11 = param_1 + 8;
    cVar8 = FUN_144729dda(lVar11);
    if (cVar8 != '\0') {
      pfVar19 = (float *)(lVar10 + 0x60);
      if (*(char *)(param_2 + 0x42c) != '\0') {
        pfVar19 = (float *)(param_2 + 0x430);
      }
      fVar3 = *pfVar19;
      *(float *)(param_1 + 0x1f8) = fVar3;
      FUN_1404fc6b4(param_1);
      if (*(char *)(param_1 + 0x1f0) == '\x01') {
        uVar13 = FUN_14479d2ce(lVar11);
        cVar8 = FUN_1414229ce(uVar13);
        if ((cVar8 != '\0') ||
           (((*(int *)(param_1 + 0x350) != 0 && (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)
             ) && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))(), cVar8 != '\0'))
           )) goto LAB_14571d3f3;
      }
      else {
LAB_14571d3f3:
        fVar20 = 0.0;
        if (0.0 < fVar3) {
          lVar12 = FUN_14479d2ce(lVar12);
          fVar20 = *(float *)(lVar12 + 0x400) / fVar3;
        }
        if (((*(int *)(param_1 + 0x350) != 0) &&
            (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) &&
           (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))(), cVar8 != '\0')) {
          uVar13 = FUN_14479d2ce();
          if (*(int *)(param_1 + 0x350) == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = *(longlong **)(param_1 + 0x348);
          }
          fVar20 = (float)(**(code **)(*plVar15 + 0x58))(plVar15,uVar13);
        }
        *(float *)(param_1 + 500) = fVar20;
        *(undefined1 *)(param_1 + 0x1f0) = 1;
      }
      lVar12 = FUN_14479d2ce(lVar11);
      bVar5 = *(byte *)(lVar12 + 0x152);
      if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
        plVar15 = (longlong *)(param_1 + 0x120);
        lVar12 = param_1 + 0x130;
        local_90 = 0x100000000;
        local_80 = 0xffffffff;
        local_78 = 0;
        iVar17 = 0;
        local_88 = lVar12;
        if (*(int *)(param_1 + 0x148) != 0) {
          FUN_1449c0562(&local_90);
          iVar17 = *(int *)(param_1 + 0x148);
        }
        local_a0 = local_80;
        uVar13 = local_a0;
        local_98 = local_78;
        local_94 = local_74;
        local_b0 = local_90;
        local_a8 = local_88;
        local_a0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
        iVar9 = local_a0._4_4_;
        local_b8 = plVar15;
        if ((local_a0._4_4_ != iVar17) || (local_a0 = uVar13, local_88 != lVar12)) {
          do {
            local_a0 = uVar13;
            uVar13 = *(undefined8 *)(*local_b8 + 8 + (longlong)iVar9 * 0x20);
            plVar6 = *(longlong **)(*local_b8 + 0x10 + (longlong)iVar9 * 0x20);
            if (plVar6 == (longlong *)0x0) {
              FUN_140fa0ba0(uVar13,*(undefined4 *)(param_1 + 500));
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              FUN_140fa0ba0(uVar13,*(undefined4 *)(param_1 + 500));
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
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
            iVar9 = local_a0._4_4_;
            uVar13 = local_a0;
          } while (((local_a0._4_4_ != iVar17) || (local_a8 != lVar12)) || (local_b8 != plVar15));
        }
        FUN_140d3b414(param_1,param_2 + 0x3a0);
        (**(code **)(*(longlong *)(param_2 + 0x3a0) + 0x10))(param_2 + 0x3a0,&local_c0);
        if (*(int *)(param_1 + 0x4a0) != *(int *)(param_1 + 0x4cc)) {
          uVar7 = (uint)((ulonglong)local_c0 >> 0x10);
          uVar16 = (uint)local_c0 & 0xffff;
          lVar12 = param_1 + 0x4d0;
          if (*(longlong *)(param_1 + 0x4d8) != 0) {
            lVar12 = *(longlong *)(param_1 + 0x4d8);
          }
          iVar17 = *(int *)(lVar12 + (ulonglong)
                                     (*(int *)(param_1 + 0x4e0) - 1U &
                                     (int)((ulonglong)local_c0 >> 0x20) +
                                     ((uint)local_c0 << 0x10 | uVar16) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4)) * 4);
          if (iVar17 != -1) {
            do {
              plVar15 = (longlong *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar17 * 0x24);
              if (*plVar15 == local_c0) {
                if (((ulonglong)(plVar15 + 1) & 0xfffffffffffffff7) != 0) {
                  *(longlong *)(param_2 + 0x3a8) = plVar15[2];
                  *(int *)(param_2 + 0x3b0) = (int)plVar15[3];
                }
                break;
              }
              iVar17 = *(int *)((longlong)plVar15 + 0x1c);
            } while (iVar17 != -1);
          }
        }
      }
    }
  }
  FUN_14571d98e(param_1 + 0x318,param_2);
LAB_14571d553:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571d786 FUN_14571d786 body=38 status=ok
// SIG undefined FUN_14571d786(void)

undefined8 FUN_14571d786(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"WorldTimeOfDayActor",1);
  return param_2;
}



// FUNCTION 14571d7ac FUN_14571d7ac body=63 status=ok
// SIG undefined FUN_14571d7ac(void)

void FUN_14571d7ac(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14571d846(param_1);
    FUN_14571d7ec(param_1);
    return;
  }
  FUN_14571d7ec(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414a80dc(param_1);
  return;
}



// FUNCTION 14571d7ec FUN_14571d7ec body=90 status=ok
// SIG undefined FUN_14571d7ec(void)

void FUN_14571d7ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14571d846 FUN_14571d846 body=327 status=ok
// SIG undefined FUN_14571d846(void)

void FUN_14571d846(longlong *param_1)

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



// FUNCTION 14571d98e FUN_14571d98e body=162 status=ok
// SIG undefined FUN_14571d98e(void)

void FUN_14571d98e(longlong *param_1,undefined8 param_2)

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
        goto LAB_14571da1b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14571da1b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14571da30 FUN_14571da30 body=258 status=ok
// SIG undefined FUN_14571da30(void)

void FUN_14571da30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  FUN_140d39ec2(param_1,param_2,0);
  uVar2 = FUN_14479d2ce(param_1 + 8);
  FUN_140d3ab18(&local_38,uVar2);
  lVar1 = local_38;
  if ((longlong)local_30 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_140d397ce(param_1);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)local_30 * 8 != lVar3);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  uVar4 = FUN_1404fc0d6(param_1);
  FUN_1449cffd4(param_1,*(undefined4 *)(param_1 + 500),uVar4);
  FUN_1449cea6e(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571db34 FUN_14571db34 body=338 status=ok
// SIG undefined FUN_14571db34(void)

void FUN_14571db34(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_2 + 0x88) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x80);
    lVar3 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
    puVar5 = (undefined8 *)0x0;
    local_88 = param_2;
    local_80 = param_1;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar2 + 1);
      lVar4 = (longlong)local_50;
      _Src = (void *)*puVar2;
      if (lVar4 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar4 * 2);
      }
      cVar1 = FUN_1402ca054(param_3,local_58);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        puVar5 = puVar2;
      }
      puVar2 = puVar2 + 0x12;
      lVar3 = lVar3 + -0x90;
    } while (lVar3 != 0);
    if (puVar5 != (undefined8 *)0x0) {
      local_60 = *(undefined4 *)(local_88 + 0x60);
      local_70 = &local_68;
      local_68 = local_80;
      local_78 = FUN_143c318ba;
      FUN_1404fc160(puVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571dc88 FUN_14571dc88 body=83 status=ok
// SIG undefined FUN_14571dc88(void)

longlong * FUN_14571dc88(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1406f88fc();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14571dcdc FUN_14571dcdc body=1287 status=ok
// SIG undefined FUN_14571dcdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571dcdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  undefined1 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  code *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = DAT_14cb54198;
  local_98 = 0;
  pcVar3 = (code *)(param_1 + 0x3d0);
  lVar4 = param_1 + 0x3e0;
  local_80 = (undefined2 *)0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_78 = lVar4;
  if (*(int *)(param_1 + 0x3f8) == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar13 = *(int *)(param_1 + 0x3f8);
  }
  uStack_a8 = CONCAT44(uStack_64,uStack_68);
  local_b0 = local_70;
  iStack_ac = iStack_6c;
  local_c0 = (undefined4)local_80;
  uStack_bc = local_80._4_4_;
  uStack_b8 = (int)uStack_78;
  uStack_b4 = uStack_78._4_4_;
  local_c8 = pcVar3;
  if ((iStack_6c != iVar13) || (uStack_78 != lVar4)) {
    do {
      fVar5 = *(float *)(*(longlong *)local_c8 + 4 + (longlong)iStack_ac * 0x10);
      if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
        uVar6 = *(undefined1 *)(*(longlong *)local_c8 + (longlong)iStack_ac * 0x10);
        plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14afe2c80;
        plVar10[2] = 0;
        *(undefined1 *)(plVar10 + 3) = 0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar10 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        uVar11 = FUN_14571e1e4();
        FUN_1401cfad2(uVar11,local_d8,uVar6);
        FUN_140ba7826(&local_80,&DAT_149e060ac,local_d8);
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
        puVar12 = local_80;
        if ((int)uStack_78 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        FUN_1446f470e(local_d8,puVar12,1);
        uVar8 = uStack_88;
        plVar10[2] = local_d8[0];
        *(undefined1 *)(plVar10 + 3) = uVar6;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)(int)uStack_88;
        uVar9 = (int)uStack_88 + 1;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar9);
        if (uStack_88._4_4_ < uVar9) {
          FUN_1404fc222(&local_90,uVar8 & 0xffffffff);
        }
        *(float *)(local_90 + lVar14 * 0x18) = fVar5;
        *(longlong **)(local_90 + 8 + lVar14 * 0x18) = plVar10 + 2;
        *(longlong **)(local_90 + 0x10 + lVar14 * 0x18) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar10 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          LOCK();
          plVar7 = plVar10 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      local_b0 = local_b0 & ~uStack_bc;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != pcVar3 || (CONCAT44(uStack_b4,uStack_b8) != lVar4 || iStack_ac != iVar13));
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    plVar10 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14afe3120;
    plVar10[3] = 0;
    *(undefined4 *)((longlong)plVar10 + 0x24) = 0xbf800000;
    plVar10[5] = 0;
    plVar10[6] = 0;
    *(undefined4 *)(plVar10 + 7) = 2;
    *(undefined8 *)((longlong)plVar10 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar10 + 100) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x6c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x74) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x7c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x84) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x8c) = 0;
    plVar10[2] = (longlong)&PTR_FUN_14afdfe40;
    *(undefined2 *)(plVar10 + 4) = 0x101;
    if (plVar10 == (longlong *)0x0) {
      _DAT_00000018 = local_a0;
      local_c8 = FUN_140fa2faa;
      local_c0 = 0;
      FUN_14571e21e(0x28,&local_80,param_1);
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      plVar10[3] = local_a0;
      local_c8 = FUN_140fa2faa;
      local_c0 = 0;
      FUN_14571e21e(plVar10 + 5,&local_80,param_1);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(param_1 + 0x178);
    *(longlong **)(param_1 + 0x170) = plVar10 + 2;
    *(longlong **)(param_1 + 0x178) = plVar10;
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
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  FUN_1404fc398(local_90,uStack_88 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x20))
            (*(longlong **)(param_1 + 0x170),0,&local_a0);
  FUN_140b62557(local_90,uStack_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14571e1e4 FUN_14571e1e4 body=57 status=ok
// SIG undefined FUN_14571e1e4(void)

void FUN_14571e1e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fe8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fe8 = FUN_14171c317(FUN_1464ab8c8,uVar1,L"ETimeOfDayState");
  }
  return;
}



// FUNCTION 14571e21e FUN_14571e21e body=237 status=ok
// SIG undefined FUN_14571e21e(void)

undefined8
FUN_14571e21e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14afe3090;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14afe3020;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14571e30c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571e30c FUN_14571e30c body=216 status=ok
// SIG undefined FUN_14571e30c(void)

undefined8 * FUN_14571e30c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 14571e3f6 FUN_14571e3f6 body=48 status=ok
// SIG undefined FUN_14571e3f6(void)

void FUN_14571e3f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14571e426 FUN_14571e426 body=138 status=ok
// SIG undefined FUN_14571e426(void)

void FUN_14571e426(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_140fa2c3e(param_1 + 0x18,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571e4c2 FUN_14571e4c2 body=132 status=ok
// SIG undefined FUN_14571e4c2(void)

void FUN_14571e4c2(longlong param_1,int param_2)

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



// FUNCTION 14571e546 FUN_14571e546 body=418 status=ok
// SIG undefined FUN_14571e546(void)

undefined8 FUN_14571e546(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_140501a92();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140501a92();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
        FUN_14571e6ea(param_1,uVar2);
        goto LAB_14571e5b8;
      }
    }
  }
  FUN_1406505c6(param_1);
  lVar5 = FUN_1458ecef4(param_2);
  local_38 = param_2;
  if (lVar5 == 0) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1446f470e(&local_40,L"MovingPlatformConfig",1);
    lVar5 = FUN_148927974(param_2,local_40,uVar1 & 0x61 | 8);
    if (lVar5 != 0) {
      FUN_14892791e(lVar5,param_3 + 0xd8);
      FUN_14010ee68(param_2,lVar5);
      FUN_141200de6(param_2,lVar5);
      FUN_143dfef1a(&local_38,lVar5);
      FUN_1486dad48(param_1,lVar5 + 0x350);
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  FUN_14892791e(lVar5,param_3 + 0xd8);
  FUN_14472eae2(lVar5,0x40);
  if (*(char *)(lVar5 + 0xb9) != '\x03') {
    FUN_141200de6(param_2,lVar5);
  }
  FUN_143dfef1a(&local_38,lVar5);
  FUN_1486dad48(param_1,lVar5 + 0x350);
LAB_14571e5b8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}


