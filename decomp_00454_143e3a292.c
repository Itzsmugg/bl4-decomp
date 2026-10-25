// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e3a292 FUN_143e3a292 body=29 status=ok
// SIG undefined FUN_143e3a292(void)

undefined8 FUN_143e3a292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a2b0 FUN_143e3a2b0 body=118 status=ok
// SIG undefined FUN_143e3a2b0(void)

void FUN_143e3a2b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  byte local_20 [8];
  longlong local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_10 = *(ulonglong *)(param_1[2] + 8) << 0x20 | *(ulonglong *)(param_1[2] + 8) >> 0x20;
    local_20[0] = *(byte *)param_1[1] ^ 1;
    local_18 = lVar1;
    if ((*(int *)(*param_1 + 0x18) != 0) &&
       (plVar2 = *(longlong **)(*param_1 + 0x10), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,local_20);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3a35a FUN_143e3a35a body=29 status=ok
// SIG undefined FUN_143e3a35a(void)

undefined8 FUN_143e3a35a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a3d0 FUN_143e3a3d0 body=29 status=ok
// SIG undefined FUN_143e3a3d0(void)

undefined8 FUN_143e3a3d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a3ee FUN_143e3a3ee body=484 status=ok
// SIG undefined FUN_143e3a3ee(void)

void FUN_143e3a3ee(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 *_Dst;
  uint *puVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  uint local_50;
  int iStack_4c;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = *param_2;
  if ((lVar9 != 0) && (cVar3 = FUN_14020a27c(*param_1,param_1[1],lVar9), cVar3 != '\0')) {
    lVar1 = param_1[2];
    iVar5 = *(int *)(lVar1 + 0x388);
    *(uint *)(lVar1 + 0x388) = iVar5 + 1U;
    if (*(uint *)(lVar1 + 0x38c) < iVar5 + 1U) {
      FUN_14052e0a0(lVar1,iVar5);
    }
    lVar10 = *(longlong *)(lVar1 + 0x380);
    if (*(longlong *)(lVar1 + 0x380) == 0) {
      lVar10 = lVar1;
    }
    local_38 = 8;
    iStack_4c = 0;
    local_50 = *(uint *)(lVar9 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_50 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    puVar11 = (undefined8 *)(lVar10 + (longlong)iVar5 * 0x38);
    iVar5 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar8;
      }
    }
    uVar7 = local_38;
    local_30 = 7;
    *(ushort *)(puVar11 + 3) = local_38;
    iStack_4c = iVar5;
    if (local_38 < 0x19) {
      puVar6 = &local_50;
      _Dst = puVar11;
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(local_38,0);
      *puVar11 = _Dst;
      puVar6 = (uint *)CONCAT44(iStack_4c,local_50);
    }
    if (DAT_14c9a8d90 == (code *)0x0) {
      memcpy(_Dst,puVar6,(longlong)DAT_14c9a8cf0);
      bVar4 = 7;
    }
    else {
      (*DAT_14c9a8d90)();
      bVar4 = local_30;
      uVar7 = local_38;
    }
    *(byte *)(puVar11 + 4) = bVar4;
    puVar11[5] = 0;
    puVar11[6] = 0;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (uVar7 < 0x19) {
        puVar6 = &local_50;
      }
      else {
        puVar6 = (uint *)CONCAT44(iStack_4c,local_50);
      }
      (*pcVar2)(puVar6);
      uVar7 = local_38;
    }
    if (0x18 < uVar7) {
      FUN_1400020a8(CONCAT44(iStack_4c,local_50));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3a606 FUN_143e3a606 body=29 status=ok
// SIG undefined FUN_143e3a606(void)

undefined8 FUN_143e3a606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a624 FUN_143e3a624 body=373 status=ok
// SIG undefined FUN_143e3a624(void)

void FUN_143e3a624(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x4f0);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x880))) {
      lVar5 = lVar2 + 0x4f8;
      if (*(longlong *)(lVar2 + 0x878) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x878);
      }
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x38 + lVar5);
      if (puVar7 != (undefined8 *)0x0) {
        if (*(char *)(puVar7 + 4) == '\x04') {
          local_48 = (undefined8 *)puVar7[2];
          local_58 = (undefined8 **)*puVar7;
          uStack_50 = (undefined8 **)puVar7[1];
        }
        else {
          FUN_1400b56fe(local_40,puVar7,4);
          pppuVar6 = (undefined8 ***)&DAT_14c9ab228;
          if (local_20 != 0) {
            pppuVar6 = local_40;
          }
          local_48 = pppuVar6[2];
          local_58 = *pppuVar6;
          uStack_50 = pppuVar6[1];
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
          if (pcVar3 != (code *)0x0) {
            pppuVar6 = local_40;
            if (0x18 < local_28) {
              pppuVar6 = (undefined8 ***)local_40[0];
            }
            (*pcVar3)(pppuVar6);
          }
          if (0x18 < local_28) {
            FUN_1400020a8(local_40[0]);
          }
        }
        *(undefined8 **)(param_1 + 0x78) = local_48;
        *(undefined4 *)(param_1 + 0x68) = (undefined4)local_58;
        *(undefined4 *)(param_1 + 0x6c) = local_58._4_4_;
        *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x74) = uStack_50._4_4_;
        *(undefined1 *)(param_1 + 0x80) = 1;
        cVar4 = FUN_14898eb68(param_1);
        if ((((cVar4 == '\0') && (*(byte *)(param_1 + 0x28) < 2)) &&
            (*(undefined1 *)(param_1 + 0x28) = 3, *(int *)(param_1 + 0x20) != 0)) &&
           (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
        }
        goto LAB_143e3a780;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x28) < 2) &&
      (*(undefined1 *)(param_1 + 0x28) = 3, *(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
LAB_143e3a780:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3a7aa FUN_143e3a7aa body=235 status=ok
// SIG undefined FUN_143e3a7aa(void)

void FUN_143e3a7aa(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == (longlong *)0x0 || *(byte *)(param_1 + 0x28) < 2) {
    if (param_2 == (longlong *)0x0) {
      if (1 < *(byte *)(param_1 + 0x28)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x28) = 3;
      goto LAB_143e3a822;
    }
  }
  else {
    (**(code **)(*param_2 + 0x5c8))(param_2,0);
  }
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x88) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar4 = DAT_14c964868 + 1;
    bVar5 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar5) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar4);
    }
    LOCK();
    iVar2 = *(int *)(lVar3 + 0x10);
    bVar5 = iVar2 == 0;
    if (bVar5) {
      *(int *)(lVar3 + 0x10) = iVar4;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar5) {
      iVar2 = iVar4;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  if (1 < *(byte *)(param_1 + 0x28)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 2;
LAB_143e3a822:
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143e3a83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 143e3a89c FUN_143e3a89c body=31 status=ok
// SIG undefined FUN_143e3a89c(void)

undefined8 FUN_143e3a89c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a908 FUN_143e3a908 body=1909 status=ok
// SIG undefined FUN_143e3a908(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e3a908(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae80 = (ulonglong)uVar2;
  DAT_14cb8aee8 = 0;
  uRam000000014cb8aef0 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e37eb4;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f8020(&local_a8);
  atexit((_func_5014 *)&LAB_143e2e93d);
  local_a8 = "Deprecated";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8af80 = (ulonglong)uVar2;
  local_a8 = "SetComponentActive";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8af88 = (ulonglong)uVar2;
  local_a8 = "IsComponentActive";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8af90 = (ulonglong)uVar2;
  local_a8 = "IsComponentEnabled";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8af98 = (ulonglong)uVar2;
  DAT_14cb8b020 = 0;
  uRam000000014cb8b028 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e37f72;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f87b6(&local_a8);
  atexit((_func_5014 *)&LAB_143e3060a);
  DAT_14cb8b110 = 0;
  uRam000000014cb8b118 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e3801a;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f8f4c(&local_a8);
  atexit((_func_5014 *)&LAB_143e30638);
  DAT_14cb8b200 = 0;
  _DAT_14cb8b208 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e39472;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f96e2(&local_a8);
  atexit((_func_5014 *)&LAB_143e30666);
  local_a8 = "gbx_Skill";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b290 = (ulonglong)uVar2;
  DAT_14cb8b2f8 = 0;
  uRam000000014cb8b300 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e39478;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f9e78(&local_a8);
  atexit((_func_5014 *)&LAB_143e30755);
  DAT_14cb8b3f0 = 0;
  uRam000000014cb8b3f8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e3947e;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fa60e(&local_a8);
  atexit((_func_5014 *)&LAB_143e30783);
  local_b8 = 0;
  FUN_1412cc41e(&DAT_14cb8b4d0,L"FGbxSkillManager",5,0);
  _DAT_14cb8b4f0 = 0x47efffffe0000000;
  _DAT_14cb8b4f8 = 0x47efffffe0000000;
  _DAT_14cb8b500 = 0x47efffffe0000000;
  _DAT_14cb8b508 = 0x47efffffe0000000;
  _DAT_14cb8b510 = 0x47efffffe0000000;
  _DAT_14cb8b518 = 0x47efffffe0000000;
  _DAT_14cb8b520 = 0x47efffffe0000000;
  _DAT_14cb8b528 = 0x47efffffe0000000;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b530 = &PTR_LAB_14b42af08;
  _DAT_14cb8b538 = 0;
  uRam000000014cb8b540 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8b538);
  _DAT_14cb8b530 = &PTR_FUN_14b42aef8;
  DAT_14cb8b5a8 = 0;
  uRam000000014cb8b5b0 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e3a202;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fada4(&local_a8);
  atexit((_func_5014 *)&LAB_143e3529b);
  DAT_14cb8b6a0 = 0;
  uRam000000014cb8b6a8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e3a208;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fb53a(&local_a8);
  atexit((_func_5014 *)&LAB_143e352c9);
  local_a8 = "ProxyActor";
  local_a0 = 10;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "gbx_skill_assets";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8b730 = (ulonglong)uVar2;
  _DAT_14cb8b8a8 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8b8b0 = 0;
  uRam000000014cb8b8b8 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8b8b0);
  _DAT_14cb8b8a8 = &PTR_FUN_14b42b010;
  local_a8 = "self";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b738 = (ulonglong)uVar2;
  DAT_14cb8b740 = 0;
  _DAT_14cb8b8c0 = &PTR_LAB_14b42af08;
  _DAT_14cb8b8c8 = 0;
  uRam000000014cb8b8d0 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8b8c8);
  _DAT_14cb8b8c0 = &PTR_FUN_14b42b038;
  local_a8 = "Default";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8b8a0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8b748);
  if (cVar1 == '\0') {
    _DAT_14cb8b748 = 0;
    uRam000000014cb8b750 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cb8b7b8 = 0;
  uRam000000014cb8b7c0 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e3a896;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fbcd0(&local_a8);
  atexit((_func_5014 *)&LAB_143e35fbb);
  local_a8 = "Value";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b850 = (ulonglong)uVar2;
  local_a8 = "Context";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b858 = (ulonglong)uVar2;
  local_a8 = "Handler";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b860 = (ulonglong)uVar2;
  local_a8 = "Group";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b868 = (ulonglong)uVar2;
  DAT_14cb8b870 = FUN_145a05602();
  if ((DAT_14cb8b870 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cb8b870);
  }
  DAT_14cb8b878 = FUN_145bd7ca0();
  if ((DAT_14cb8b878 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cb8b878);
  }
  _DAT_14cb8b888 = &LAB_143e35fc0;
  _DAT_14cb8b890 = 0x44340eb8;
  DAT_14cb8b894 = 1;
  DAT_14cb8b880 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b880;
  atexit((_func_5014 *)&LAB_143e35fc5);
  local_a8 = "SkillsChannel";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8b4e8 = (ulonglong)uVar2;
  DAT_14cb8b4a0 = 0;
  DAT_14cb8b4a8 = 0;
  DAT_14cb8b480 = 0;
  _DAT_14cb8b488 = 0;
  _DAT_14cb8b4ac = 0xffffffff00000080;
  _DAT_14cb8b4b4 = 0;
  DAT_14cb8b4c0 = 0;
  _DAT_14cb8b4c8 = 0;
  atexit(FUN_143e36643);
  local_a8 = "SkillsGlobalChannel";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8b4e0 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3b080 FUN_143e3b080 body=307 status=ok
// SIG undefined FUN_143e3b080(void)

void FUN_143e3b080(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *_Src;
  longlong *_Dst;
  
  _Dst = (longlong *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 0x30);
  if (bVar1 != *(byte *)(param_2 + 4)) {
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x28)) {
        plVar4 = (longlong *)*_Dst;
      }
      (*UNRECOVERED_JUMPTABLE)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 4);
    uVar2 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 0x28) = uVar2;
    _Src = param_2;
    if (0x18 < uVar2) {
      plVar4 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar4;
      _Src = (undefined8 *)*param_2;
      _Dst = plVar4;
    }
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(_Dst);
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 4);
    return;
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x18 < *(ushort *)(param_1 + 0x28)) {
    _Dst = (longlong *)*_Dst;
  }
  uVar3 = (ulonglong)((uint)bVar1 * 0x120);
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85c0 + uVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Jumptable at 0x000143e3b175 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(_Dst,param_2);
    return;
  }
  memcpy(_Dst,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
  return;
}



// FUNCTION 143e3b1b4 FUN_143e3b1b4 body=176 status=ok
// SIG undefined FUN_143e3b1b4(void)

void FUN_143e3b1b4(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x20) == param_3) {
          if ((lVar1 != 0) && (lVar1 != -8)) {
            *param_2 = *(undefined8 *)(lVar1 + 8);
            lVar1 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 143e3b42c FUN_143e3b42c body=860 status=ok
// SIG undefined FUN_143e3b42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143e3b42c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_3 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148715fe1;
      local_70 = FUN_146508b0f;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb652c0);
    if (lVar2 != 0) {
      if (DAT_14cb652c0 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_148715fe1;
        local_70 = FUN_146508b0f;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb652c0);
      if (lVar2 != lVar3 && lVar3 != 0) {
        plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
        plVar4[1] = (longlong)&DAT_100000001;
        *plVar4 = (longlong)&PTR_FUN_14b42db50;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[2] = (longlong)&PTR_FUN_14b42cc80;
        FUN_140cfc4c2(plVar4 + 7,lVar3);
        plVar4[9] = 0;
        plVar4[10] = 0;
        plVar6 = plVar4 + 2;
        if ((plVar6 == (longlong *)0x0) ||
           (((plVar4[3] != 0 && (plVar4[4] != 0)) && (0 < *(int *)(plVar4[4] + 8))))) {
          *param_2 = plVar6;
          param_2[1] = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_143e3b711;
        }
        else {
          if (plVar4 == (longlong *)0x0) {
            _DAT_00000018 = 0x10;
            plVar7 = (longlong *)&DAT_00000020;
            plVar5 = _DAT_00000020;
            if (_DAT_00000020 != (longlong *)0x0) {
LAB_143e3b748:
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
              *plVar7 = (longlong)plVar4;
              if (plVar4 != (longlong *)0x0) goto LAB_143e3b56f;
            }
            *param_2 = plVar6;
            param_2[1] = plVar4;
            goto LAB_143e3b711;
          }
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          plVar4[3] = (longlong)plVar6;
          if ((longlong *)plVar4[4] != plVar4) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            if ((longlong *)plVar4[4] != (longlong *)0x0) {
              plVar7 = plVar4 + 4;
              plVar5 = (longlong *)plVar4[4];
              goto LAB_143e3b748;
            }
            plVar4[4] = (longlong)plVar4;
          }
LAB_143e3b56f:
          LOCK();
          plVar7 = plVar4 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *param_2 = plVar6;
          param_2[1] = plVar4;
        }
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 != 0) {
LAB_143e3b711:
          if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_143e3b711;
        (**(code **)(*plVar4 + 0x10))(plVar4);
        goto LAB_143e3b4b0;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143e3b4b0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 143e3b78a FUN_143e3b78a body=1035 status=ok
// SIG undefined FUN_143e3b78a(void)

longlong * FUN_143e3b78a(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  code *local_88 [2];
  longlong *local_78;
  int local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = *(longlong **)(param_3 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_b0 = local_88;
      local_88[0] = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_1427b09ee;
      local_b8 = &LAB_148715fe1;
      local_c0 = FUN_146508b0f;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10004001;
      local_e0 = 8;
      local_e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    lVar5 = (**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb652c0);
    if (lVar5 != 0) {
      if (DAT_14cb652c0 == 0) {
        local_b0 = local_88;
        local_88[0] = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_1427b09ee;
        local_b8 = &LAB_148715fe1;
        local_c0 = FUN_146508b0f;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10004001;
        local_e0 = 8;
        local_e8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      lVar6 = FUN_144718840(lVar5,DAT_14cb652c0);
      if (lVar5 != lVar6 && lVar6 != 0) {
        local_88[0] = (code *)((ulonglong)local_88[0] & 0xffffffffffffff00);
        local_60 = 0;
        FUN_1456bb102(local_88,*(undefined8 *)(param_3 + 0x20));
        FUN_1447c3578(param_1 + 0x48,local_58,local_88);
        plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14b42dbe0;
        plVar2 = plVar7 + 2;
        FUN_14656160e(plVar2,lVar6,local_58);
        local_98 = plVar2;
        local_90 = plVar7;
        FUN_148997a86(&local_98,plVar2);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar10 = local_58;
          if (0x18 < local_40) {
            ppppuVar10 = (undefined8 ****)local_58[0];
          }
          (*pcVar3)(ppppuVar10);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        lVar5 = DAT_14c9a3da0;
        if ((longlong)local_60 != 0) {
          lVar12 = (longlong)local_60 + -1;
          lVar6 = lVar12 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar6));
          if (*(longlong *)(lVar5 + lVar6) != 0) {
            FUN_1400020a8();
          }
          lVar5 = DAT_14c9a3da0;
          iVar11 = (int)lVar12;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
          }
          *(undefined4 *)(lVar5 + lVar6) = 0xffffffff;
          iVar8 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar8 = DAT_14c9a3dd0;
          }
          *(int *)(lVar5 + 4 + lVar6) = iVar8;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar9 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar9 = DAT_14c9a3dc0;
          }
          iVar8 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar8 = iVar11;
          }
          bVar4 = (byte)lVar12 & 0x1f;
          DAT_14c9a3dd0 = iVar11;
          *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
               *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) &
               (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          local_60 = 0;
        }
        if (((char)local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
        plVar2 = local_90;
        *param_2 = (longlong)local_98;
        param_2[1] = (longlong)local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_90 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
}



// FUNCTION 143e3bb96 FUN_143e3bb96 body=41 status=ok
// SIG undefined FUN_143e3bb96(void)

void FUN_143e3bb96(void)

{
  DAT_14cb8ba30 = 0;
  if (DAT_14cb8ba28 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67e6a();
  return;
}



// FUNCTION 143e3bbc4 FUN_143e3bbc4 body=284 status=ok
// SIG undefined FUN_143e3bbc4(void)

void FUN_143e3bbc4(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
    do {
      if (*plVar6 == param_2) {
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        iVar5 = (int)plVar6[2];
        if (-1 < iVar5) {
          if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
            FUN_140c5c1ec(param_3);
            iVar5 = (int)plVar6[2];
          }
          if (iVar5 < 1) {
            return;
          }
          lVar3 = 4;
          lVar8 = 0;
          do {
            iVar1 = *(int *)(plVar6[1] + lVar3);
            if ((((iVar1 != 0) && (uVar2 = *(uint *)(plVar6[1] + -4 + lVar3), -1 < (int)uVar2)) &&
                ((int)uVar2 < DAT_14c9647dc)) &&
               (((puVar4 = (undefined8 *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == iVar1)) &&
                ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
                uVar7 = *puVar4;
              }
              else {
                uVar7 = 0;
              }
              iVar5 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
                FUN_1447d05f2(param_3,iVar5);
              }
              *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar7;
              iVar5 = (int)plVar6[2];
            }
            lVar8 = lVar8 + 1;
            lVar3 = lVar3 + 0x10;
          } while (lVar8 < iVar5);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      plVar6 = plVar6 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143e3bce2 FUN_143e3bce2 body=392 status=ok
// SIG undefined FUN_143e3bce2(void)

void FUN_143e3bce2(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [4];
  uint local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
        (uVar2 = *param_3, -1 < (int)uVar2)) &&
       (((int)uVar2 < DAT_14c9647dc &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)))) &&
      ((*(uint *)(plVar5 + 2) == param_3[1] &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) &&
     (lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1),
     lVar4 != 0)) {
    FUN_148991454(local_48,param_1);
    FUN_1489916b0(local_38,param_2,local_48);
    lVar4 = local_30;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar4 = local_30;
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          lVar4 = local_30;
        }
      }
    }
    for (; ((lVar4 != 0 && (-1 < (int)local_34)) && ((int)local_34 < *(int *)(lVar4 + 0x10)));
        local_34 = local_34 + 1) {
      iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 4 + (ulonglong)local_34 * 0x10);
      if ((((iVar3 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(lVar4 + 8) + (ulonglong)local_34 * 0x10),
           -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           ((plVar5 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar3)))))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
        FUN_1487202c8(param_3);
        lVar4 = local_30;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3be6c FUN_143e3be6c body=481 status=ok
// SIG undefined FUN_143e3be6c(void)

void FUN_143e3be6c(undefined8 param_1,longlong *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
        (uVar2 = *param_3, -1 < (int)uVar2)) &&
       (((int)uVar2 < DAT_14c9647dc &&
        (plVar8 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0)))) &&
      ((*(uint *)(plVar8 + 2) == param_3[1] &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) &&
     (lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(param_3 + 2),1),
     lVar5 != 0)) {
    FUN_148991454(&local_38,param_1);
    if (local_38 != 0) {
      local_48 = 0;
      uStack_40 = 0;
      lVar5 = param_2[1];
      if (lVar5 == 0) {
        uVar6 = FUN_145cd97be();
        lVar5 = FUN_14477b664(uVar6);
        param_2[1] = lVar5;
      }
      lVar7 = param_2[2];
      if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*param_2 != 0)) {
        plVar8 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar7 = FUN_144aff482(uVar6,param_2);
        }
        param_2[2] = lVar7;
      }
      FUN_143e3bbc4(local_38,lVar7,&local_48);
      if (0 < (int)uStack_40) {
        lVar5 = 0;
        iVar4 = (int)uStack_40;
        do {
          lVar7 = *(longlong *)(local_48 + lVar5 * 8);
          if ((lVar7 != 0) && ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
            FUN_1487202c8(param_3);
            iVar4 = (int)uStack_40;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3c04e FUN_143e3c04e body=263 status=ok
// SIG undefined FUN_143e3c04e(void)

void FUN_143e3c04e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148991454(&local_38,param_1);
  if (local_38 == 0) goto LAB_143e3c0f4;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_145cd97be();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_143e3c152:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_143e3c152;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar5;
  }
  FUN_143e3bbc4(local_38,lVar5,param_3);
LAB_143e3c0f4:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3c190 FUN_143e3c190 body=1491 status=ok
// SIG undefined FUN_143e3c190(void)

void FUN_143e3c190(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110;
  undefined8 ***local_108;
  char local_100 [16];
  longlong *local_f0;
  int local_d8;
  char local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined8 ***local_78;
  longlong *local_70;
  ushort local_60;
  undefined6 uStack_5e;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar5 = (longlong)*(int *)(param_1 + 0x30) << 5;
    do {
      if (*plVar10 == *param_2) {
        if (plVar10 != (longlong *)0x0) goto LAB_143e3c1eb;
        break;
      }
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  lVar5 = FUN_1489918d6();
  local_100[0] = '\0';
  local_d8 = 0;
  FUN_1456bb102(local_100,param_5);
  FUN_1448729ea(param_3 + 4,local_a0,local_100);
  if (local_80 == 3) {
    uVar14 = local_a0[0]._0_4_;
  }
  else {
    FUN_1400b56fe(&local_78,local_a0,3);
    uVar14 = 0;
    if (local_58 != 0) {
      uVar14 = local_78._0_4_;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar12 = &local_78;
      if (0x18 < local_60) {
        ppppuVar12 = (undefined8 ****)local_78;
      }
      (*pcVar3)(ppppuVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
  }
  *(undefined4 *)(lVar5 + 8) = uVar14;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar12 = local_a0;
    if (0x18 < local_88) {
      ppppuVar12 = (undefined8 ****)local_a0[0];
    }
    (*pcVar3)(ppppuVar12);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_d8 != 0) {
    lVar9 = (longlong)local_d8 + -1;
    lVar13 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar6 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar11 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar13) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    bVar4 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_d8 = 0;
  }
  if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  uVar14 = *(undefined4 *)(lVar5 + 8);
  lVar9 = param_3[3];
  local_100[0] = '\0';
  local_d8 = 0;
  FUN_1456bb102(local_100,param_4);
  local_d0 = '\0';
  local_a8 = 0;
  lVar6 = param_3[2];
  if (lVar6 == 0) {
    local_a0[0] = (undefined8 ***)*param_3;
    FUN_1446dcdd4(&local_78);
    lVar6 = FUN_1448fdc6e(&local_78);
    if (CONCAT62(uStack_5e,local_60) != 0) {
      FUN_1400020a8();
    }
    param_3[2] = lVar6;
  }
  local_108 = local_a0;
  local_110 = 1;
  local_118 = uVar14;
  FUN_140c40077(&local_78,lVar6,local_100,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)lVar9) & 0xffffffff);
  plVar1 = local_70;
  *(undefined8 ****)(lVar5 + 0x10) = local_78;
  local_78 = (undefined8 ****)0x0;
  plVar10 = *(longlong **)(lVar5 + 0x18);
  if (local_70 != plVar10) {
    local_70 = (longlong *)0x0;
    *(longlong **)(lVar5 + 0x18) = plVar1;
    if (plVar10 == (longlong *)0x0) goto LAB_143e3c3f1;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_143e3c3f1:
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar6 = (longlong)local_a8 + -1;
    lVar9 = lVar6 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar5 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar11 = (int)lVar6;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar5 + lVar9) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar9) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    bVar4 = (byte)lVar6 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8 = 0;
  }
  if (local_d0 != '\0') {
    if (local_d0 == '\x01') {
      local_c8 = 0;
    }
    else if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    local_d0 = '\0';
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_d8 != 0) {
    lVar6 = (longlong)local_d8 + -1;
    lVar9 = lVar6 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar5 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar11 = (int)lVar6;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar5 + lVar9) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar9) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    bVar4 = (byte)lVar6 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_d8 = 0;
  }
  if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
LAB_143e3c1eb:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3c764 FUN_143e3c764 body=80 status=ok
// SIG undefined FUN_143e3c764(void)

void FUN_143e3c764(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x02') {
    lVar2 = *param_2;
    FUN_1415ee148(lVar2,*(undefined4 *)(lVar2 + 0x3c));
  }
  else {
    if (cVar1 == '\x01') {
      FUN_1415ee148(*param_2,0xffffffff);
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
    lVar2 = *param_2;
  }
  FUN_1411886c2(lVar2);
  return;
}



// FUNCTION 143e3c7b4 FUN_143e3c7b4 body=193 status=ok
// SIG undefined FUN_143e3c7b4(void)

void FUN_143e3c7b4(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc))) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x20) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((*(byte *)(lVar3 + 0x14) & 1) != 0) {
            return;
          }
          if (*(int *)(lVar3 + 0x10) == 0) {
            return;
          }
          *(undefined4 *)(lVar3 + 0x10) = 0;
          FUN_140e9bafc();
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 143e3c876 FUN_143e3c876 body=169 status=ok
// SIG undefined FUN_143e3c876(void)

void FUN_143e3c876(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*param_2 + 0x13c);
    if (((((iVar1 != 0) && (uVar2 = *(uint *)(*param_2 + 0x138), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar3 = *plVar5, lVar3 != 0 && (iVar1 = *(int *)(lVar3 + 0xa0), (longlong)iVar1 != 0))))))
    {
      lVar3 = *(longlong *)(lVar3 + 0x98);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          FUN_1418ab220(lVar4,param_1 + 8);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 143e3c920 FUN_143e3c920 body=1213 status=ok
// SIG undefined FUN_143e3c920(void)

undefined8 * FUN_143e3c920(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *****ppppplVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong ****pppplVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong ****pppplVar13;
  int iVar14;
  undefined *puVar15;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong ******pppppplVar20;
  undefined4 uVar21;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong ***local_a8;
  ushort local_98;
  byte local_90;
  longlong *****local_88;
  longlong *local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
  local_b8 = 0;
  FUN_1456bb102(&local_e0,uVar11);
  puVar17 = &local_b0;
  FUN_1448729ea(param_1 + 8,puVar17,&local_e0);
  uVar21 = local_b0;
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,&local_b0,3);
    if (local_68 == 0) {
      uVar21 = 0x3f800000;
    }
    else {
      uVar21 = local_88._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppppplVar20 = &local_88;
      if (0x18 < local_70) {
        pppppplVar20 = (longlong ******)local_88;
      }
      (*pcVar5)(pppppplVar20);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  uVar11 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  plVar12 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b42ddc0;
  ppppplVar1 = (longlong *****)(plVar12 + 2);
  FUN_146561dd6(ppppplVar1,param_3 + 1,uVar11,uVar21);
  local_88 = ppppplVar1;
  local_80 = plVar12;
  FUN_148998614(&local_88,ppppplVar1);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar17 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar5)(puVar17);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar10 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar18 = (longlong)local_b8 + -1;
    lVar19 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar10 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar16 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar16;
    }
    *(undefined4 *)(lVar10 + lVar19) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar19) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar15 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar15 = DAT_14c9a3dc0;
    }
    iVar14 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar14 = iVar16;
    }
    bVar9 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar16;
    *(uint *)(puVar15 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar15 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
    local_b8 = 0;
  }
  if (((char)local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_d0 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *(undefined1 *)(local_88 + 0xc) = 1;
    *(undefined1 *)((longlong)local_88 + 0x61) = *(undefined1 *)(param_1 + 0x78);
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    if (uVar6 != 0) {
      puVar7 = (undefined1 *)*param_3;
      plVar12 = *(longlong **)(param_1 + 0x68);
      if (plVar12 == (longlong *)0x0) {
        local_d0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_d0 = plVar12;
      }
      local_e0 = puVar7;
      local_d8 = uVar6;
      FUN_140f360c6(uVar6,&local_b0,&local_e0);
      plVar2 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (CONCAT44(uStack_ac,local_b0) == 0) {
        pppplVar13 = (longlong ****)0x0;
      }
      else {
        local_e0 = &LAB_148992f86;
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_148992e58(CONCAT44(uStack_ac,local_b0) + 0x18,&local_88);
        pppplVar13 = (longlong ****)CONCAT44(uStack_ac,local_b0);
      }
      if ((longlong ****)local_a8 != (longlong ****)0x0) {
        LOCK();
        *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
        UNLOCK();
      }
      pppplVar8 = local_88[0xe];
      local_88[0xd] = pppplVar13;
      local_88[0xe] = (longlong ****)local_a8;
      if (pppplVar8 != (longlong ****)0x0) {
        LOCK();
        pppplVar13 = pppplVar8 + 1;
        *(int *)pppplVar13 = *(int *)pppplVar13 + -1;
        UNLOCK();
        if (*(int *)pppplVar13 == 0) {
          (*(code *)**pppplVar8)(pppplVar8);
          LOCK();
          piVar3 = (int *)((longlong)pppplVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*pppplVar8)[2])(pppplVar8);
          }
        }
      }
      if ((longlong ****)local_a8 != (longlong ****)0x0) {
        LOCK();
        pppplVar13 = (longlong ****)(local_a8 + 1);
        *(int *)pppplVar13 = *(int *)pppplVar13 + -1;
        UNLOCK();
        if (*(int *)pppplVar13 == 0) {
          (*(code *)**local_a8)(local_a8);
          LOCK();
          piVar3 = (int *)((longlong)local_a8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*local_a8)[2])(local_a8);
          }
        }
      }
    }
  }
  plVar12 = local_80;
  *param_2 = local_88;
  param_2[1] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e3cdf0 FUN_143e3cdf0 body=147 status=ok
// SIG undefined FUN_143e3cdf0(void)

void FUN_143e3cdf0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[3] = param_2;
  lVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[5];
  param_1[4] = lVar3;
  param_1[5] = lVar4;
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
  lVar3 = param_1[1];
  if (param_1[4] != lVar3) {
    if ((lVar3 != 0 && *param_1 != 0) && (*(longlong *)(lVar3 + 0x20) == *param_1)) {
      *(undefined8 *)(lVar3 + 0x20) = 0;
      FUN_1415ee148(param_1[1],0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143e3ce84 FUN_143e3ce84 body=279 status=ok
// SIG undefined FUN_143e3ce84(void)

void FUN_143e3ce84(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    lVar1 = FUN_1418ac4fe();
    if (lVar1 != 0) {
      FUN_1418ac59a(&local_a0,param_1,FUN_1411886c2);
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      FUN_14016fdb0(lVar1,&local_90,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      *(undefined8 *)(param_1 + 0x140) = local_90;
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_143e3cf6c;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143e3cf6c:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3cfae FUN_143e3cfae body=204 status=ok
// SIG undefined FUN_143e3cfae(void)

void FUN_143e3cfae(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    plVar3 = plVar7 + (longlong)(int)param_2[1] * 3;
    do {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        local_38 = (longlong *)param_1[1];
        if (local_38 == (longlong *)0x0) {
LAB_143e3d011:
          local_38 = (longlong *)0x0;
          local_40 = 0;
        }
        else {
          iVar6 = (int)local_38[1];
          do {
            if (iVar6 == 0) goto LAB_143e3d011;
            LOCK();
            iVar5 = (int)local_38[1];
            bVar8 = iVar6 == iVar5;
            if (bVar8) {
              *(int *)(local_38 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar8);
          local_40 = *param_1;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
        plVar4 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
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
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3d07c FUN_143e3d07c body=570 status=ok
// SIG undefined FUN_143e3d07c(void)

void FUN_143e3d07c(longlong param_1,char param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar11 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0xd8);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar12) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar10 = puVar13[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar12 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar2 = uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar10 = 0xffffffff;
    bVar9 = false;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar5 * 0x20);
      if ((*(byte *)(*(longlong *)(param_1 + 200) + 0x14 + (longlong)iVar5 * 0x20) & 1) == 0) {
        bVar9 = (bool)(bVar9 | 0 < (int)plVar1[2]);
        *(undefined4 *)(plVar1 + 2) = 0;
      }
      else if (param_2 != '\0') {
        lVar16 = plVar1[2];
        *(undefined4 *)(plVar1 + 2) = 0;
        iVar5 = 0;
        if ((longlong)*(int *)(param_1 + 0x120) != 0) {
          plVar15 = *(longlong **)(param_1 + 0x118);
          lVar17 = (longlong)*(int *)(param_1 + 0x120) * 0x18;
          do {
            if (*plVar15 == *plVar1) {
              if ((plVar15 != (longlong *)0x0) && ((*(byte *)(plVar15[1] + 0x28) & 2) != 0)) {
                *(undefined4 *)(plVar1 + 2) = 1;
                iVar5 = 1;
              }
              break;
            }
            plVar15 = plVar15 + 3;
            lVar17 = lVar17 + -0x18;
          } while (lVar17 != 0);
        }
        bVar9 = (bool)(bVar9 | (int)lVar16 != iVar5);
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar13 = *(uint **)(param_1 + 0xe8);
      if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0xd8);
      }
      iVar4 = *(int *)(param_1 + 0xf0);
      iVar5 = (int)uVar12;
      lVar16 = (longlong)iVar5;
      uVar6 = puVar13[lVar16] & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar17 = 0;
          do {
            uVar6 = puVar13[lVar16 + lVar17 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar5 + (int)lVar17 + 1);
              uVar10 = 0xffffffff;
              goto LAB_143e3d247;
            }
            iVar11 = iVar11 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar8 - lVar16 != lVar17);
          uVar10 = 0xffffffff;
          lVar16 = (longlong)iVar8;
        }
        uVar12 = lVar16 + 1U & 0xffffffff;
        iVar5 = iVar4;
      }
      else {
LAB_143e3d247:
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar14 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar3);
    if (bVar9) {
      FUN_140e9bafc();
      return;
    }
  }
  return;
}



// FUNCTION 143e3d2c2 FUN_143e3d2c2 body=314 status=ok
// SIG undefined FUN_143e3d2c2(void)

void FUN_143e3d2c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(param_1 + 0x40),0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  FUN_1448a8284(param_1 + 0xb0);
  FUN_141069f23(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_146560f66(param_1 + 0x28,0);
  }
  FUN_145c1e1ee(param_1 + 0x50);
  FUN_14898ada7(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_146561056(param_1 + 0x118,0);
  }
  FUN_14592bf29(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_14583ca2c(param_1 + 0x128,0);
  }
  FUN_145c1c75c(param_1 + 200);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar4 = *(longlong **)(param_1 + 0xa8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143e3d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e3d3fc FUN_143e3d3fc body=68 status=ok
// SIG undefined FUN_143e3d3fc(void)

void FUN_143e3d3fc(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xa0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x28) & 2) != 0)) {
    FUN_1415ee148(param_1,*(undefined4 *)(param_1 + 0x3c));
    FUN_1411886c2(param_1);
    return;
  }
  FUN_1415ee148(param_1,0xffffffff);
  return;
}



// FUNCTION 143e3d440 FUN_143e3d440 body=319 status=ok
// SIG undefined FUN_143e3d440(void)

void FUN_143e3d440(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
    plVar7 = plVar6 + (longlong)*(int *)(param_2 + 0x40) * 2;
    do {
      plVar3 = (longlong *)*plVar6;
      if (param_3 == '\0') {
        local_40 = (longlong *)param_1[1];
        if (local_40 == (longlong *)0x0) {
LAB_143e3d512:
          local_40 = (longlong *)0x0;
          local_48 = 0;
        }
        else {
          iVar5 = (int)local_40[1];
          do {
            if (iVar5 == 0) goto LAB_143e3d512;
            LOCK();
            iVar4 = (int)local_40[1];
            bVar8 = iVar5 == iVar4;
            if (bVar8) {
              *(int *)(local_40 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar8);
          local_48 = *param_1;
        }
        if ((*(byte *)(plVar3 + 7) & 1) != 0) {
          *(byte *)(plVar3 + 7) = *(byte *)(plVar3 + 7) & 0xfe;
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
        }
      }
      else {
        local_40 = (longlong *)param_1[1];
        if (local_40 == (longlong *)0x0) {
LAB_143e3d4ea:
          local_40 = (longlong *)0x0;
          local_48 = 0;
        }
        else {
          iVar5 = (int)local_40[1];
          do {
            if (iVar5 == 0) goto LAB_143e3d4ea;
            LOCK();
            iVar4 = (int)local_40[1];
            bVar8 = iVar5 == iVar4;
            if (bVar8) {
              *(int *)(local_40 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar8);
          local_48 = *param_1;
        }
        if ((*(byte *)(plVar3 + 7) & 1) == 0) {
          *(byte *)(plVar3 + 7) = (*(byte *)(plVar3 + 7) & 0xfc) + 1;
          (**(code **)(*plVar3 + 8))(plVar3,&local_48);
        }
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3d580 FUN_143e3d580 body=41 status=ok
// SIG undefined FUN_143e3d580(void)

void FUN_143e3d580(void)

{
  DAT_14cb8bb80 = 0;
  if (DAT_14cb8bb78 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67f08();
  return;
}



// FUNCTION 143e3d5ae FUN_143e3d5ae body=41 status=ok
// SIG undefined FUN_143e3d5ae(void)

void FUN_143e3d5ae(void)

{
  DAT_14cb8bc70 = 0;
  if (DAT_14cb8bc68 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67fa6();
  return;
}



// FUNCTION 143e3d5dc FUN_143e3d5dc body=41 status=ok
// SIG undefined FUN_143e3d5dc(void)

void FUN_143e3d5dc(void)

{
  DAT_14cb8bd60 = 0;
  if (DAT_14cb8bd58 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68044();
  return;
}



// FUNCTION 143e3d60a FUN_143e3d60a body=106 status=ok
// SIG undefined FUN_143e3d60a(void)

void FUN_143e3d60a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(param_3 + 0x30);
  if (local_10 != 0) {
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
    if (*(char *)(param_3 + 0x2a) == '\0') {
      FUN_140cbed62(param_1,&local_10);
    }
    else if (*(char *)(param_3 + 0x2a) == '\x01') {
      FUN_145793ccc(param_1,&local_10);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3d6ae FUN_143e3d6ae body=41 status=ok
// SIG undefined FUN_143e3d6ae(void)

void FUN_143e3d6ae(void)

{
  DAT_14cb8be90 = 0;
  if (DAT_14cb8be88 != 0) {
    FUN_1400020a8();
  }
  FUN_145d680e2();
  return;
}



// FUNCTION 143e3d738 FUN_143e3d738 body=615 status=ok
// SIG undefined FUN_143e3d738(void)

void FUN_143e3d738(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 0x18) <= (int)param_5[1]) goto LAB_143e3d965;
  uVar1 = *(uint *)(param_1 + 0xf0);
  uVar4 = (ulonglong)uVar1;
  if (uVar4 == 0) goto LAB_143e3d965;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x800000000;
  if ((int)uVar1 < 0) goto LAB_143e3d998;
  if (uVar1 < 9) {
    plVar8 = *(longlong **)(param_1 + 0xe8);
    plVar6 = plVar8 + uVar4;
LAB_143e3d7f6:
    do {
      uVar4 = local_68;
      if ((longlong)(int)param_4[1] != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_4 + lVar7) == *plVar8) goto LAB_143e3d849;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)param_4[1] * 8 != lVar7);
      }
      lVar7 = (longlong)(int)local_68;
      uVar1 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar1);
      if (local_68._4_4_ < uVar1) {
        FUN_147e21556(local_b0,uVar4 & 0xffffffff);
      }
      puVar3 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar3 = local_b0;
      }
      *(longlong *)(puVar3 + lVar7 * 8) = *plVar8;
LAB_143e3d849:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
  }
  else {
    FUN_143e433a6(local_b0);
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      plVar8 = *(longlong **)(param_1 + 0xe8);
      plVar6 = plVar8 + *(int *)(param_1 + 0xf0);
      goto LAB_143e3d7f6;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar4 = (ulonglong)uVar1;
  iVar5 = uVar1 - (int)param_5[1];
  if (iVar5 <= (int)local_68) {
    if ((int)uVar1 < 0) {
LAB_143e3d998:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if (*(int *)((longlong)param_5 + 0xc) < (int)uVar1) {
      FUN_1403de8ba(param_5);
    }
    if (0 < iVar5) {
      iVar2 = (int)local_68;
      do {
        if (iVar2 < 1) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_3 + 4) = uVar1;
          uVar1 = (uint)((float)iVar2 * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0));
        }
        puVar3 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar3 = local_b0;
        }
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_1403de658(param_5,iVar2);
        }
        lVar7 = (longlong)(int)uVar1;
        *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = *(undefined8 *)(puVar3 + lVar7 * 8);
        if (~uVar1 + (int)local_68 != 0) {
          puVar3 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar3 = local_b0;
          }
          memmove(puVar3 + lVar7 * 8,puVar3 + lVar7 * 8 + 8,
                  (longlong)(int)(~uVar1 + (int)local_68) << 3);
        }
        iVar2 = (int)local_68 + -1;
        local_68 = CONCAT44(local_68._4_4_,iVar2);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e3d965:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3d9a2 FUN_143e3d9a2 body=78 status=ok
// SIG undefined FUN_143e3d9a2(void)

void FUN_143e3d9a2(void)

{
  undefined8 in_R9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_10 = 0;
  local_28 = in_R9;
  FUN_143e3d738();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3d9f2 FUN_143e3d9f2 body=210 status=ok
// SIG undefined FUN_143e3d9f2(void)

void FUN_143e3d9f2(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x108) < *(int *)(param_2 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x108);
  }
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
    FUN_1403de8ba(param_4,iVar2);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
      FUN_1403de658(param_4,iVar1);
    }
    *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x100);
  }
  local_48 = param_1 + 0x100;
  local_40 = 1;
  local_58 = param_4;
  FUN_143e3d738(param_1,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3dac6 FUN_143e3dac6 body=116 status=ok
// SIG undefined FUN_143e3dac6(void)

void FUN_143e3dac6(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18);
  if (-1 < iVar2) {
    if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
      FUN_1403de8ba(param_4);
      iVar2 = *(int *)(param_2 + 0x18);
    }
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        iVar1 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
          FUN_1403de658(param_4,iVar1);
        }
        *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x100);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 143e3db3c FUN_143e3db3c body=288 status=ok
// SIG undefined FUN_143e3db3c(void)

void FUN_143e3db3c(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x108);
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      lVar4 = 0;
    }
    else {
      uVar2 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar2;
      lVar4 = (longlong)(int)((float)iVar3 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0));
    }
    iVar3 = *(int *)(param_2 + 0x18);
    if (*(int *)(param_1 + 0x110) < *(int *)(param_2 + 0x18)) {
      iVar3 = *(int *)(param_1 + 0x110);
    }
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    puVar5 = (undefined8 *)(lVar4 * 8 + *(longlong *)(param_1 + 0x100));
    if (*(int *)((longlong)param_4 + 0xc) < iVar3) {
      FUN_1403de8ba(param_4,iVar3);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar1 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
        FUN_1403de658(param_4,iVar1);
      }
      *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = *puVar5;
    }
    local_48 = 1;
    local_58 = param_4;
    local_50 = puVar5;
    FUN_143e3d738(param_1,param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3dc5e FUN_143e3dc5e body=813 status=ok
// SIG undefined FUN_143e3dc5e(void)

void FUN_143e3dc5e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  uint *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  iVar9 = *(int *)(param_2 + 0x18);
  local_88 = param_2;
  if (iVar9 < 0) {
LAB_143e3dcbb:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1403de8ba(&local_58);
    iVar9 = *(int *)(local_88 + 0x18);
    if (iVar9 < 0) goto LAB_143e3dcbb;
  }
  if (*(int *)((longlong)param_4 + 0xc) < iVar9) {
    FUN_1403de8ba(param_4);
  }
  uVar4 = *(uint *)(param_1 + 0x128);
  local_78 = param_3;
  if (uVar4 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x110);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar9 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar9 = uVar4 - 1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_143e3dd6d;
        iVar9 = iVar9 + 0x20;
        uVar3 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar3 & uVar3);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar3 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar3) {
      uVar3 = uVar4;
    }
  }
  if (uVar3 != uVar4) {
    local_94 = 0xffffffff;
    iVar8 = 0;
    local_90 = (ulonglong)uVar4;
    local_80 = param_1;
    local_70 = (uint *)(param_1 + 0x110);
    do {
      iVar10 = *(int *)(*(longlong *)(local_80 + 0x100) + 8 + (longlong)(int)uVar3 * 0x14);
      iVar8 = iVar8 + iVar10;
      if (*(int *)(local_88 + 0x18) < iVar8) {
        *(undefined4 *)(param_4 + 1) = 0;
        if (*(int *)((longlong)param_4 + 0xc) < 0) {
          FUN_1403de8ba(param_4,0);
        }
        goto LAB_143e3dd99;
      }
      puVar1 = (undefined8 *)(*(longlong *)(local_80 + 0x100) + (longlong)(int)uVar3 * 0x14);
      if (0 < iVar10) {
        iVar10 = 0;
        do {
          iVar6 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar6 + 1U) {
            FUN_1403de658(param_4,iVar6);
          }
          *(undefined8 *)(*param_4 + (longlong)iVar6 * 8) = *puVar1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(puVar1 + 1));
      }
      uVar2 = uStack_50;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1403de658(&local_58,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 8) = *puVar1;
      local_94 = local_94 & ~(uint)uVar13;
      puVar5 = *(uint **)(local_80 + 0x120);
      if (*(uint **)(local_80 + 0x120) == (uint *)0x0) {
        puVar5 = local_70;
      }
      uVar4 = *(uint *)(local_80 + 0x128);
      iVar10 = (int)uVar14;
      lVar12 = (longlong)iVar10;
      uVar3 = puVar5[lVar12] & local_94;
      if (uVar3 == 0) {
        iVar6 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar6 = uVar4 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar11 = 0;
          do {
            uVar3 = puVar5[lVar12 + lVar11 + 1];
            if (uVar3 != 0) {
              uVar14 = (ulonglong)(iVar10 + (int)lVar11 + 1);
              local_94 = 0xffffffff;
              goto LAB_143e3df12;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar12 != lVar11);
          local_94 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar14 = (ulonglong)(iVar10 + 1);
        uVar3 = uVar4;
      }
      else {
LAB_143e3df12:
        uVar13 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar3 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar3) {
          uVar3 = uVar4;
        }
      }
      param_1 = local_80;
    } while (uVar3 != (uint)local_90);
  }
LAB_143e3dd6d:
  local_68 = local_58;
  local_60 = (int)uStack_50;
  local_a8 = param_4;
  FUN_143e3d738(param_1,local_88,local_78);
LAB_143e3dd99:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3df8c FUN_143e3df8c body=90 status=ok
// SIG undefined FUN_143e3df8c(void)

void FUN_143e3df8c(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 143e3dfe6 FUN_143e3dfe6 body=1506 status=ok
// SIG undefined FUN_143e3dfe6(void)

ulonglong FUN_143e3dfe6(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  ulonglong uVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  longlong local_128;
  int local_11c;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 uStack_100;
  char local_f0 [16];
  longlong *local_e0;
  int local_c8;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_108 = 0;
  uStack_100 = 0;
  iVar10 = *(int *)(param_1 + 0x38);
  local_118 = param_2;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  fVar23 = 0.0;
  if ((iVar10 != 0) && (FUN_14482f6fa(&local_108), 0 < *(int *)(param_1 + 0x38))) {
    fVar23 = 0.0;
    lVar16 = 8;
    lVar18 = 0;
    local_11c = param_3;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8 + lVar16);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar16);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      uVar17 = uStack_100;
      lVar15 = (longlong)(int)uStack_100;
      uVar9 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
      if (uStack_100._4_4_ < uVar9) {
        FUN_14475e4ac(&local_108,uVar17 & 0xffffffff);
      }
      lVar8 = local_108;
      *(undefined4 *)(local_108 + lVar15 * 4) = 0;
      fVar24 = 0.0;
      if (lVar3 != 0) {
        local_f0[0] = '\0';
        local_c8 = 0;
        FUN_1456bb102(local_f0,local_118);
        FUN_1448729ea(lVar3 + 0x60,&local_98,local_f0);
        iVar10 = FUN_14005fbd2(&local_98,0);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pfVar14 = &local_98;
          if (0x18 < local_80) {
            pfVar14 = (float *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar5)(pfVar14);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
        }
        if ((longlong)local_c8 != 0) {
          lVar21 = (longlong)local_c8 + -1;
          local_110 = DAT_14c9a3da0;
          local_128 = lVar21 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_128),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + local_128));
          if (*(longlong *)(local_110 + local_128) != 0) {
            FUN_1400020a8();
          }
          lVar22 = DAT_14c9a3da0;
          iVar20 = (int)lVar21;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
          }
          *(undefined4 *)(lVar22 + local_128) = 0xffffffff;
          iVar13 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar13 = DAT_14c9a3dd0;
          }
          *(int *)(lVar22 + 4 + local_128) = iVar13;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar11 = &DAT_14c9a3db0;
          }
          iVar13 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar13 = iVar20;
          }
          bVar7 = (byte)lVar21 & 0x1f;
          DAT_14c9a3dd0 = iVar20;
          *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) &
               (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          local_c8 = 0;
        }
        if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
        }
        if (local_11c < iVar10) {
          fVar24 = *(float *)(lVar8 + lVar15 * 4);
        }
        else {
          local_f0[0] = '\0';
          local_c8 = 0;
          FUN_1456bb102(local_f0,local_118);
          FUN_1448729ea(lVar3 + 0x10,&local_c0,local_f0);
          if (local_a0 == 3) {
            uVar9 = 3;
            fVar24 = local_c0;
          }
          else {
            FUN_1400b56fe(&local_98,&local_c0,3);
            fVar24 = 0.0;
            if (local_78 != 0) {
              fVar24 = local_98;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar5 != (code *)0x0) {
              pfVar14 = &local_98;
              if (0x18 < local_80) {
                pfVar14 = (float *)CONCAT44(uStack_94,local_98);
              }
              (*pcVar5)(pfVar14);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(CONCAT44(uStack_94,local_98));
            }
            uVar9 = (uint)local_a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 != (code *)0x0) {
            pfVar14 = &local_c0;
            if (0x18 < local_a8) {
              pfVar14 = (float *)CONCAT44(uStack_bc,local_c0);
            }
            (*pcVar5)(pfVar14);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
          }
          lVar3 = DAT_14c9a3da0;
          if ((longlong)local_c8 != 0) {
            lVar22 = (longlong)local_c8 + -1;
            lVar21 = lVar22 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar21),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar21));
            if (*(longlong *)(lVar3 + lVar21) != 0) {
              FUN_1400020a8();
            }
            lVar3 = DAT_14c9a3da0;
            iVar10 = (int)lVar22;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
            }
            *(undefined4 *)(lVar3 + lVar21) = 0xffffffff;
            iVar20 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar20 = DAT_14c9a3dd0;
            }
            *(int *)(lVar3 + 4 + lVar21) = iVar20;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar11 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar11 = &DAT_14c9a3db0;
            }
            iVar20 = iVar10 + 0x1f;
            if (-1 < iVar10) {
              iVar20 = iVar10;
            }
            bVar7 = (byte)lVar22 & 0x1f;
            DAT_14c9a3dd0 = iVar10;
            *(uint *)(puVar11 + (longlong)(iVar20 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)(iVar20 >> 5) * 4) &
                 (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            local_c8 = 0;
          }
          if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
          *(float *)(lVar8 + lVar15 * 4) = fVar24;
        }
      }
      fVar23 = fVar23 + fVar24;
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x18;
    } while (lVar18 < *(int *)(param_1 + 0x38));
  }
  lVar16 = local_108;
  iVar10 = (int)uStack_100;
  uVar19 = uStack_100 & 0xffffffff;
  uVar17 = 0xffffffff;
  if ((uVar19 != 0) && (uVar9 = rand(), 0 < iVar10)) {
    fVar23 = fVar23 * ((float)(uVar9 & 0x7fff) / 32767.0);
    fVar24 = 0.0;
    uVar12 = 0;
    do {
      bVar6 = fVar24 <= fVar23;
      fVar24 = fVar24 + *(float *)(lVar16 + uVar12 * 4);
      if ((bVar6) && (fVar23 <= fVar24)) {
        uVar17 = uVar12 & 0xffffffff;
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar19 != uVar12);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 143e3e5ca FUN_143e3e5ca body=194 status=ok
// SIG undefined FUN_143e3e5ca(void)

ulonglong FUN_143e3e5ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x38))) {
    lVar5 = 8;
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8 + lVar5);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar5);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == param_2)) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x38));
  }
  return 0xffffffff;
}



// FUNCTION 143e3e6f0 FUN_143e3e6f0 body=655 status=ok
// SIG undefined FUN_143e3e6f0(void)

undefined8 * FUN_143e3e6f0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_14007ca06();
  FUN_140c6b9f8(param_1,uVar6);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b276740;
  *(undefined4 *)(param_1 + 0x16) = 0xa53c5ede;
  param_1[0x17] = "slot_machine";
  FUN_1400b22c2(local_58,"SlotMachine");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  lVar7 = FUN_143c6c23e();
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_143e3e918;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_143e3e918:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143e3e980 FUN_143e3e980 body=308 status=ok
// SIG undefined FUN_143e3e980(void)

void FUN_143e3e980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a68e82();
  if (param_2 == 0) goto LAB_143e3ea96;
  FUN_143c6cc50(param_1,&local_38,param_2);
  if (local_30 == 0) {
    uVar3 = FUN_143c6c23e();
    local_30 = FUN_14477b664(uVar3);
  }
  if (local_28 == 0) {
    if (((local_30 == 0 || local_38 == 0) ||
        (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_143e3ea96;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = FUN_144aff482(uVar3,&local_38);
    if (local_28 == 0) goto LAB_143e3ea96;
  }
  if (*(longlong *)(param_1 + 0xa0) != local_38) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(longlong *)(param_1 + 0xa0) = local_38;
  if (*(longlong *)(param_1 + 0xa8) != local_30) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  uVar3 = FUN_14477b664();
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = local_28;
LAB_143e3ea96:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3eab6 FUN_143e3eab6 body=930 status=ok
// SIG undefined FUN_143e3eab6(void)

void FUN_143e3eab6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_158 [40];
  char local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [4];
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  int local_74;
  longlong *local_70;
  int local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1408c7d08();
  lVar5 = FUN_143e3ee5a(param_1);
  if (lVar5 == 0) goto LAB_143e3edb6;
  local_130 = '\0';
  local_12c = 0;
  local_124 = 0;
  bVar3 = FUN_140459d0c(lVar5,&DAT_14cb8bfc8);
  lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x178) != '\x03')) {
    if (local_130 == '\x02') goto LAB_143e3eb62;
  }
  else if ((bVar3 & local_130 == '\x02') == 0) {
    FUN_143e3eec4(param_1,lVar5,0xffffffff,1);
  }
  else {
LAB_143e3eb62:
    FUN_143e3effa(param_1,local_124);
  }
  lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x178) != '\x03')) && (param_1[0x21] == 0)) {
    local_108[0] = 0;
    local_104 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_ec = 0;
    local_f4 = 0;
    local_d8 = 0xc69c4000;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_77 = 1;
    local_75 = 0;
    local_74 = 0;
    local_70 = (longlong *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    plVar2 = local_70;
    local_68 = 3;
    *local_70 = (longlong)&PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_70[2] = lVar8;
    *local_70 = (longlong)&PTR_FUN_14b42e080;
    local_70[3] = 0;
    iVar4 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_70 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar6 + 0x10) = iVar9;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar9;
        }
      }
    }
    *(int *)((longlong)plVar2 + 0x1c) = iVar4;
    plVar2[4] = (longlong)&LAB_143e3f870;
    *(undefined4 *)(plVar2 + 5) = 0;
    local_e8 = local_70;
    local_e0 = local_68;
    FUN_1406f1bc8(lVar5);
    local_110 = DAT_14cb8bfd0;
    local_118 = DAT_14cb8bfc8;
    FUN_144928d62(local_60,5);
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = FUN_140149a73(uVar7,0);
    if (lVar5 == 0) {
      local_74 = 2;
    }
    else {
      FUN_140983ba6(&local_70,lVar5,local_108);
      if (local_74 == 1) {
        if (local_e8 == (longlong *)0x0 || local_e0 == 0) {
          local_120 = 0;
        }
        else {
          (**(code **)(*local_e8 + 0x38))(local_e8,&local_120);
        }
        param_1[0x21] = local_120;
      }
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1409838b8(local_108);
  }
LAB_143e3edb6:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3ee5a FUN_143e3ee5a body=106 status=ok
// SIG undefined FUN_143e3ee5a(void)

undefined8 FUN_143e3ee5a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140427846();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000143e3eec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 143e3eec4 FUN_143e3eec4 body=308 status=ok
// SIG undefined FUN_143e3eec4(void)

void FUN_143e3eec4(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined6 local_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  plVar2 = (longlong *)FUN_140ec3c65(uVar1);
  if (plVar2 != (longlong *)0x0) {
    FUN_1406f1bc8(param_2,local_70);
    local_e0 = DAT_14cb8bfd0;
    local_e8 = DAT_14cb8bfc8;
    FUN_144928d62(local_60,5);
    local_d8[0] = 0;
    local_c8 = (longlong *)0x0;
    uStack_7f = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_8e = 0;
    uStack_80 = 1;
    puVar3 = &DAT_14b3fdfb8;
    if (param_4 == '\0') {
      puVar3 = (undefined *)0x0;
    }
    uStack_88 = SUB82(puVar3,0);
    uStack_86 = (undefined6)((ulonglong)puVar3 >> 0x10);
    local_f8[0] = 2;
    local_f4 = 0;
    local_ec = param_3;
    (**(code **)(*plVar2 + 0xb0))(plVar2,local_70,local_f8,local_d8);
    if (local_d8[0] != 0) {
      plVar2 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar2 = local_b8;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3effa FUN_143e3effa body=1151 status=ok
// SIG undefined FUN_143e3effa(void)

void FUN_143e3effa(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_88 [40];
  uint local_60;
  uint local_5c;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = (uint)param_2;
  if (uVar11 == 0xffffffff) goto LAB_143e3f3dc;
  lVar8 = *(longlong *)(param_1 + 0xa8);
  if (lVar8 == 0) {
    uVar7 = FUN_143c6c23e();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0xa8) = lVar8;
  }
  plVar3 = (longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    if ((lVar8 == 0) || (*plVar3 == 0)) goto LAB_143e3f3dc;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      goto LAB_143e3f3dc;
    }
    uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar7,plVar3);
    *(longlong *)(param_1 + 0xb0) = lVar8;
    if (lVar8 == 0) goto LAB_143e3f3dc;
  }
  plVar4 = (longlong *)(param_1 + 0xb8);
  FUN_143e3df8c(plVar4);
  lVar8 = *(longlong *)(param_1 + 0xa8);
  if (lVar8 == 0) {
    uVar7 = FUN_143c6c23e();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0xa8) = lVar8;
  }
  param_2 = param_2 & 0xff;
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar3 != 0)) {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
      lVar9 = FUN_144aff482(uVar7,plVar3);
    }
    *(longlong *)(param_1 + 0xb0) = lVar9;
  }
  if (((int)param_2 != 0xff) && ((int)param_2 < *(int *)(lVar9 + 0x38))) {
    plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0x30) + param_2 * 0x18);
    plVar14 = *(longlong **)(*(longlong *)(lVar9 + 0x30) + 8 + param_2 * 0x18);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0xa8);
      local_60 = uVar11;
      local_5c = uVar11;
      if (lVar8 == 0) {
        uVar7 = FUN_143c6c23e();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(param_1 + 0xa8) = lVar8;
      }
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar3 != 0)) {
        plVar14 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar14 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar6 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
          lVar9 = FUN_144aff482(uVar7,plVar3);
        }
        *(longlong *)(param_1 + 0xb0) = lVar9;
      }
      FUN_143e3df8c(plVar4);
      if ((0 < *(int *)(lVar9 + 0x18)) && (*(int *)(lVar9 + 0x28) != 0)) {
        local_58 = (longlong *)0x0;
        uStack_50 = 0;
        FUN_1403de8ba(&local_58);
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar9,&local_60,&local_58);
        uVar12 = uStack_50 & 0xffffffff;
        if ((int)uStack_50 == *(int *)(lVar9 + 0x18)) {
          if ((0 < (int)uStack_50) && ((char)plVar5[0x1f] != '\0')) {
            lVar8 = 0;
            do {
              local_5c = local_5c * 0xbb38435 + 0x3619636b;
              iVar10 = (int)((float)(int)uVar12 * ((float)(local_5c >> 9 | 0x3f800000) + -1.0));
              if (iVar10 != 0) {
                iVar10 = iVar10 + (int)lVar8;
                lVar13 = local_58[lVar8];
                local_58[lVar8] = local_58[iVar10];
                local_58[iVar10] = lVar13;
              }
              lVar8 = lVar8 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            uVar12 = (ulonglong)*(uint *)(lVar9 + 0x18);
          }
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar12);
          }
          if (*(int *)(param_1 + 0xc4) < (int)uVar12) {
            FUN_14481578e(plVar4);
          }
          if ((longlong)(int)uStack_50 != 0) {
            plVar3 = local_58 + (int)uStack_50;
            plVar14 = local_58;
            do {
              if ((longlong)*(int *)(lVar9 + 0x28) == 0) goto LAB_143e3f3c2;
              lVar8 = (longlong)*(int *)(lVar9 + 0x28) << 3;
              lVar13 = 0;
              while (*(longlong *)(*(longlong *)(lVar9 + 0x20) + lVar13 * 8) != *plVar14) {
                lVar13 = lVar13 + 1;
                lVar8 = lVar8 + -8;
                if (lVar8 == 0) goto LAB_143e3f3c2;
              }
              if ((int)lVar13 == -1) goto LAB_143e3f3c2;
              iVar10 = *(int *)(param_1 + 0xc0);
              *(uint *)(param_1 + 0xc0) = iVar10 + 1U;
              if (*(uint *)(param_1 + 0xc4) < iVar10 + 1U) {
                FUN_1446f48e2(plVar4,iVar10);
              }
              *(int *)(*plVar4 + (longlong)iVar10 * 4) = (int)lVar13;
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar3);
          }
          *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)((longlong)plVar5 + 0xb4);
          *(int *)(param_1 + 200) = (int)plVar5[0x16];
          FUN_148727dd0(param_1 + 0xd0,plVar5 + 0x17);
          if ((*(longlong *)(param_1 + 0xe8) != plVar5[0x1a]) ||
             (*(int *)(param_1 + 0xf0) != (int)plVar5[0x1b])) {
            *(longlong *)(param_1 + 0xe8) = plVar5[0x1a];
            *(int *)(param_1 + 0xf0) = (int)plVar5[0x1b];
            *(undefined8 *)(param_1 + 0xf8) = 0;
          }
          *(undefined1 *)(param_1 + 0x100) = 1;
        }
LAB_143e3f3c2:
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_143c6d08e(param_1,plVar4);
LAB_143e3f3dc:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3f47a FUN_143e3f47a body=249 status=ok
// SIG undefined FUN_143e3f47a(void)

void FUN_143e3f47a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406337e2();
  lVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x178) != '\x03')) {
    lVar1 = FUN_143e3ee5a(param_1);
    if ((lVar1 != 0) && (param_1[0x21] != 0)) {
      FUN_1406f1bc8(lVar1,local_50);
      local_58 = DAT_14cb8bfd0;
      local_60 = DAT_14cb8bfc8;
      FUN_144928d62(local_40,5);
      uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar1 = param_1[0x21];
      lVar3 = FUN_140149a73(uVar2,0);
      if (lVar3 != 0) {
        FUN_140825b72(local_50,lVar1,lVar3,0);
      }
      param_1[0x21] = 0;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3f574 FUN_143e3f574 body=695 status=ok
// SIG undefined FUN_143e3f574(void)

void FUN_143e3f574(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 0xa8);
  if (lVar9 == 0) {
    uVar8 = FUN_143c6c23e();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0xa8) = lVar9;
  }
  plVar1 = (longlong *)(param_1 + 0xa0);
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    if ((lVar9 == 0) || (*plVar1 == 0)) goto LAB_143e3f7d6;
    plVar2 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      goto LAB_143e3f7d6;
    }
    uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar10 = FUN_144aff482(uVar8,plVar1);
    *(longlong *)(param_1 + 0xb0) = lVar10;
    if (lVar10 == 0) goto LAB_143e3f7d6;
  }
  if (param_3 == 0xffffffff) {
    if (param_4 == 0) {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        uVar8 = FUN_143c6c23e();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0xa8) = lVar9;
        lVar10 = *(longlong *)(param_1 + 0xb0);
        if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar10 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(param_1 + 0xb0) = lVar10;
        }
      }
      local_40 = 0;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = FUN_1488d5660(param_2,&local_40,0);
      }
      uVar4 = FUN_143e3dfe6(lVar10,param_2,uVar7);
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        uVar8 = FUN_143c6c23e();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0xa8) = lVar9;
        lVar10 = *(longlong *)(param_1 + 0xb0);
        if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar10 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(param_1 + 0xb0) = lVar10;
        }
      }
      uVar4 = FUN_143e3e5ca(lVar10,param_4);
    }
    if (uVar4 == 0xffffffff) goto LAB_143e3f7d6;
    uVar5 = rand();
    iVar6 = (int)(((float)(uVar5 & 0x7fff) / 32767.0) * 16777215.0);
    iVar11 = 0xfffffe;
    if (iVar6 < 0xfffffe) {
      iVar11 = iVar6;
    }
    param_3 = iVar11 << 8 | uVar4 & 0xff;
  }
  FUN_143e3effa(param_1,param_3);
  lVar9 = FUN_143e3ee5a(param_1);
  if (lVar9 != 0) {
    FUN_143e3eec4(param_1,lVar9,param_3,0);
  }
LAB_143e3f7d6:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3f82c FUN_143e3f82c body=67 status=ok
// SIG undefined FUN_143e3f82c(void)

undefined8 * FUN_143e3f82c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0xa0);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = FUN_14477b664(uVar1);
  param_2[1] = uVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0xb0);
  return param_2;
}



// FUNCTION 143e3f8b8 FUN_143e3f8b8 body=41 status=ok
// SIG undefined FUN_143e3f8b8(void)

void FUN_143e3f8b8(void)

{
  DAT_14cb8c048 = 0;
  if (DAT_14cb8c040 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68180();
  return;
}



// FUNCTION 143e3f92e FUN_143e3f92e body=1041 status=ok
// SIG undefined FUN_143e3f92e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e3f92e(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  ulonglong local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = _DAT_14cb7bdfc;
  if ((_DAT_14cb7bdfc == DAT_14c948034) && (uVar5 = DAT_14c948034, DAT_14cb7bdf8 != DAT_14c948030))
  {
    FUN_14011791e(local_70,DAT_14cb7bdf8,_DAT_14cb7bdfc >> 0x20);
    _DAT_14cb7bdfc = local_70[0];
    uVar5 = local_70[0];
  }
  lVar1 = param_1 + -0xc30;
  uVar6 = *param_2;
  if (uVar6 == uVar5) {
    local_70[0] = *param_3;
    local_70[1] = 0;
    local_70[2] = 0;
    FUN_1417ffa7c(lVar1,&DAT_14cb8c1c0,local_70,1);
    goto LAB_143e3fb74;
  }
  uVar5 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar5 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(local_70,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    unique0x00023e00 = local_70[0];
    uVar6 = *param_2;
    uVar5 = local_70[0];
  }
  if (uVar6 == uVar5) {
    uVar4 = FUN_1407eda54(*param_3);
    if (*(char *)(param_1 + -1000) != (char)uVar4) {
      *(char *)(param_1 + -1000) = (char)uVar4;
      (**(code **)(*(longlong *)(param_1 + -0xc30) + 0xa98))(lVar1,uVar4);
    }
    goto LAB_143e3fb74;
  }
  uVar5 = _DAT_14cb7bdcc;
  if ((_DAT_14cb7bdcc == DAT_14c948034) && (uVar5 = DAT_14c948034, DAT_14cb7bdc8 != DAT_14c948030))
  {
    FUN_14011791e(local_70,DAT_14cb7bdc8,_DAT_14cb7bdcc >> 0x20);
    _DAT_14cb7bdcc = local_70[0];
    uVar6 = *param_2;
    uVar5 = local_70[0];
  }
  if (uVar6 == uVar5) {
LAB_143e3fa4e:
    cVar2 = FUN_1407eda54(*param_3);
    if (cVar2 == '\0') goto LAB_143e3fb74;
    uVar5 = _DAT_14cb7bdcc;
    if ((_DAT_14cb7bdcc == DAT_14c948034) && (uVar5 = DAT_14c948034, DAT_14cb7bdc8 != DAT_14c948030)
       ) {
      FUN_14011791e(local_70,DAT_14cb7bdc8,_DAT_14cb7bdcc >> 0x20);
      _DAT_14cb7bdcc = local_70[0];
      uVar5 = local_70[0];
    }
    FUN_140af95c6(lVar1,*param_2 == uVar5);
    puVar8 = &local_78;
    local_78 = DAT_14cb7c580;
    local_70[3] = *param_2;
    puVar7 = local_70;
    FUN_1401533ba(puVar7,local_70 + 3,1);
  }
  else {
    uVar5 = DAT_14cb7941c;
    if ((DAT_14cb7941c == DAT_14c948034) && (uVar5 = DAT_14c948034, DAT_14cb79418 != DAT_14c948030))
    {
      FUN_14011791e(local_70,DAT_14cb79418,DAT_14cb7941c >> 0x20);
      DAT_14cb7941c = local_70[0];
      uVar6 = *param_2;
      uVar5 = local_70[0];
    }
    if (uVar6 == uVar5) goto LAB_143e3fa4e;
    uVar5 = DAT_14cb79464;
    if ((DAT_14cb79464 == DAT_14c948034) && (uVar5 = DAT_14c948034, DAT_14cb79460 != DAT_14c948030))
    {
      FUN_14011791e(local_70,DAT_14cb79460,DAT_14cb79464 >> 0x20);
      DAT_14cb79464 = local_70[0];
      uVar6 = *param_2;
      uVar5 = local_70[0];
    }
    if (uVar6 != uVar5) {
      if (uVar6 == DAT_14cb8c1c8) {
        bVar3 = FUN_1407eda54(*param_3);
        *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) & 0xfe | bVar3;
      }
      else {
        uVar5 = _DAT_14cb8c1ec;
        if ((_DAT_14cb8c1ec == DAT_14c948034) &&
           (uVar5 = DAT_14c948034, DAT_14cb8c1e8 != DAT_14c948030)) {
          FUN_14011791e(local_70,DAT_14cb8c1e8,_DAT_14cb8c1ec >> 0x20);
          _DAT_14cb8c1ec = local_70[0];
          uVar6 = *param_2;
          uVar5 = local_70[0];
        }
        if (uVar6 == uVar5) {
          *(ulonglong *)(param_1 + 0x20) = *param_3;
          FUN_140a8ede4(lVar1);
        }
      }
      goto LAB_143e3fb74;
    }
    cVar2 = FUN_1407eda54(*param_3);
    if (cVar2 == '\0') goto LAB_143e3fb74;
    FUN_14607a332(lVar1);
    local_70[0] = DAT_14cb7c580;
    puVar8 = local_70;
    puVar7 = (ulonglong *)&DAT_14cb79460;
  }
  FUN_140bfca4e(param_1 + 0xe0,puVar7,puVar8,0);
LAB_143e3fb74:
  FUN_14063fdb1(param_1 + 0x28,param_2,param_3);
  local_88 = param_5;
  FUN_14064035a(param_1 + 0x238,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e3fd9c FUN_143e3fd9c body=1990 status=ok
// SIG undefined FUN_143e3fd9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143e3fd9c(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  uint *local_180;
  uint local_178 [4];
  undefined1 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined1 local_e5;
  undefined4 local_e4;
  char local_e0 [16];
  longlong *local_d0;
  int local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  (**(code **)(*param_1 + 0x18))();
  uVar12 = 0;
  lVar6 = FUN_140149a73(param_2,0);
  if (lVar6 == 0) goto LAB_143e3fde6;
  local_178[0] = FUN_14574753c(lVar6);
  plVar7 = (longlong *)FUN_140d17acc(lVar6,local_178);
  if (plVar7 == (longlong *)0x0) {
    uVar12 = 0;
    goto LAB_143e3fde6;
  }
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b42e660;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar15 = plVar8 + 2;
  *plVar15 = (longlong)&PTR_FUN_14b42e678;
  plVar8[5] = (longlong)param_1;
  if (plVar15 == (longlong *)0x0) {
    if (plVar8 == (longlong *)0x0) goto LAB_143e3ff12;
LAB_143e3ff58:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x2b] = (longlong)plVar15;
    plVar15 = (longlong *)param_1[0x2c];
    if (plVar8 == plVar15) {
      LOCK();
      plVar15 = plVar8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      param_1[0x2c] = (longlong)plVar8;
      if (plVar15 != (longlong *)0x0) {
        bVar3 = false;
LAB_143e3ffa4:
        LOCK();
        plVar9 = plVar15 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        if (bVar3) goto LAB_143e3ffed;
      }
    }
    LOCK();
    plVar15 = plVar8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar15;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar8[4];
        if (plVar9 != (longlong *)0x0) {
          plVar13 = plVar8 + 4;
          goto LAB_143e3fefd;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_143e3ff35:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_143e3ff58;
    }
    _DAT_00000018 = 0x10;
    plVar13 = (longlong *)&DAT_00000020;
    plVar9 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_143e3fefd:
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *plVar13 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_143e3ff35;
    }
LAB_143e3ff12:
    param_1[0x2b] = (longlong)plVar15;
    plVar15 = (longlong *)param_1[0x2c];
    if (plVar15 != (longlong *)0x0) {
      param_1[0x2c] = (longlong)plVar8;
      bVar3 = true;
      goto LAB_143e3ffa4;
    }
  }
LAB_143e3ffed:
  (**(code **)(*plVar7 + 0x70))(plVar7,param_1[0x2b],(longlong)param_1 + 0x131);
  local_178[0] = local_178[0] & 0xffffff00;
  local_178[1] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_168 = 0;
  local_164 = 0;
  uStack_15c = 0;
  local_154 = 0;
  local_148 = 0xc69c4000;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_e7 = 1;
  local_e5 = 0;
  local_e4 = 0;
  local_188 = param_1 + 0x2a;
  local_180 = local_178;
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1 + 10,0,*(undefined1 *)((longlong)param_1 + 0x131));
  local_188 = (longlong *)((longlong)param_1 + 0x154);
  local_180 = local_178;
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1 + 0x11,0,*(undefined1 *)((longlong)param_1 + 0x131));
  lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,(int)param_1[0x2a]);
  param_1[0x28] = lVar6;
  lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined4 *)((longlong)param_1 + 0x154));
  param_1[0x29] = lVar6;
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_1456bb102(local_e0,param_2);
  pfVar11 = &local_b0;
  FUN_1447c3578(param_1 + 0x18,pfVar11,local_e0);
  if (local_90 == 3) {
    fVar17 = local_b0;
    bVar4 = 3;
  }
  else {
    pfVar14 = &local_88;
    FUN_1400b56fe(pfVar14,&local_b0,3);
    fVar17 = local_88;
    if (local_68 == 0) {
      fVar17 = 1.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar14 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(pfVar14);
    }
    bVar4 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar4 = local_90;
    }
  }
  fVar16 = 0.0;
  if (0.0 <= fVar17) {
    fVar16 = fVar17;
  }
  *(float *)((longlong)param_1 + 0x134) = fVar16;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar11 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(pfVar11);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  pfVar11 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar6 = (longlong)local_b8 + -1;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6 * 4),DAT_14c9a3da0[(lVar6 * 2 + 1) * 2]);
    if (*(longlong *)(pfVar11 + lVar6 * 4) != 0) {
      FUN_1400020a8();
    }
    pfVar11 = DAT_14c9a3da0;
    fVar17 = (float)lVar6;
    if (DAT_14c9a3dd4 != 0) {
      DAT_14c9a3da0[(longlong)(int)DAT_14c9a3dd0 * 4] = fVar17;
    }
    pfVar11[lVar6 * 4] = -NAN;
    fVar16 = -NAN;
    if (0 < DAT_14c9a3dd4) {
      fVar16 = DAT_14c9a3dd0;
    }
    pfVar11[lVar6 * 4 + 1] = fVar16;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    fVar16 = (float)((int)fVar17 + 0x1f);
    if (-1 < (int)fVar17) {
      fVar16 = fVar17;
    }
    bVar4 = (byte)lVar6 & 0x1f;
    DAT_14c9a3dd0 = fVar17;
    *(uint *)(puVar10 + (longlong)((int)fVar16 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)((int)fVar16 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  pfVar11 = (float *)(param_1 + 0x1f);
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_1456bb102(local_e0,param_2);
  pfVar14 = &local_b0;
  FUN_1447c3578(pfVar11,pfVar14,local_e0);
  if (local_90 == 3) {
    uVar5 = 3;
    fVar17 = local_b0;
  }
  else {
    pfVar11 = &local_88;
    FUN_1400b56fe(pfVar11,&local_b0,3);
    fVar17 = local_88;
    if (local_68 == 0) {
      fVar17 = 1.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar11 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(pfVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar5 = (uint)local_90;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar17) {
    fVar16 = fVar17;
  }
  *(float *)(param_1 + 0x27) = fVar16;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar14 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(pfVar14);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  pfVar14 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar6 = (longlong)local_b8 + -1;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6 * 4),DAT_14c9a3da0[(lVar6 * 2 + 1) * 2]);
    if (*(longlong *)(pfVar14 + lVar6 * 4) != 0) {
      FUN_1400020a8();
    }
    pfVar11 = DAT_14c9a3da0;
    fVar17 = (float)lVar6;
    if (DAT_14c9a3dd4 != 0) {
      DAT_14c9a3da0[(longlong)(int)DAT_14c9a3dd0 * 4] = fVar17;
    }
    pfVar11[lVar6 * 4] = -NAN;
    fVar16 = -NAN;
    if (0 < DAT_14c9a3dd4) {
      fVar16 = DAT_14c9a3dd0;
    }
    pfVar11[lVar6 * 4 + 1] = fVar16;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    fVar16 = (float)((int)fVar17 + 0x1f);
    if (-1 < (int)fVar17) {
      fVar16 = fVar17;
    }
    bVar4 = (byte)lVar6 & 0x1f;
    DAT_14c9a3dd0 = fVar17;
    *(uint *)(puVar10 + (longlong)((int)fVar16 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)((int)fVar16 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
    pfVar11 = pfVar14;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  FUN_1409838b8(local_178);
  uVar12 = CONCAT71((int7)((ulonglong)pfVar11 >> 8),1);
LAB_143e3fde6:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 143e40564 FUN_143e40564 body=212 status=ok
// SIG undefined FUN_143e40564(void)

void FUN_143e40564(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar3 = FUN_140149a73(param_2,0);
    if (lVar3 != 0) {
      local_1c = FUN_14574753c(lVar3);
      plVar4 = (longlong *)FUN_140d17acc(lVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x158));
      }
    }
    *(undefined1 *)(param_1 + 0x131) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x160);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4064a FUN_143e4064a body=771 status=ok
// SIG undefined FUN_143e4064a(void)

void FUN_143e4064a(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [64];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  if (0 < *(int *)(param_2 + 0xf88)) {
    lVar9 = 0;
LAB_143e4069e:
    lVar3 = *(longlong *)(param_2 + 0xf80);
    if (*(longlong *)(param_2 + 0xf80) == 0) {
      lVar3 = param_2;
    }
    if ((*(char *)(lVar3 + 0xf4 + lVar9 * 0xf8) == '\0') &&
       (lVar3 = FUN_1400d690e(lVar3 + lVar9 * 0xf8), lVar3 != 0)) {
      plVar4 = (longlong *)FUN_140edfc58(lVar3);
      uVar8 = local_48;
      if ((longlong)(int)plVar4[1] != 0) {
        plVar5 = (longlong *)*plVar4;
        plVar4 = plVar5 + (int)plVar4[1];
        plVar7 = plVar5;
        do {
          if (*(int *)(param_1 + 0x38) != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar3) == *plVar7)
              goto LAB_143e40810;
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x38) << 3 != lVar3);
          }
          if ((longlong)*(int *)(param_1 + 0x48) != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar3) == *plVar7)
              goto LAB_143e40810;
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar3);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
        iVar1 = *(int *)(param_1 + 0x10);
        if (*(char *)(param_1 + 0x28) == '\0') {
          do {
            if (iVar1 != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar3) == *plVar5)
                goto LAB_143e407e2;
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 - lVar3 != 0);
            }
            if ((longlong)*(int *)(param_1 + 0x20) != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3) == *plVar5)
                goto LAB_143e407e2;
                lVar3 = lVar3 + 8;
              } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar3);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
        }
        else {
          do {
            if (iVar1 != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar3) == *plVar5)
                goto LAB_143e407e2;
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 - lVar3 != 0);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
        }
      }
    }
    goto LAB_143e40810;
  }
LAB_143e40915:
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143e407e2:
  lVar3 = (longlong)(int)local_48;
  uVar2 = (int)local_48 + 1;
  local_48 = CONCAT44(local_48._4_4_,uVar2);
  if (local_48._4_4_ < uVar2) {
    FUN_1401fcbb6(local_90,uVar8 & 0xffffffff);
  }
  puVar6 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar6 = local_90;
  }
  *(int *)(puVar6 + lVar3 * 4) = (int)lVar9;
LAB_143e40810:
  lVar9 = lVar9 + 1;
  if (*(int *)(param_2 + 0xf88) <= lVar9) goto code_r0x000143e40823;
  goto LAB_143e4069e;
code_r0x000143e40823:
  if ((local_48 & 0xffffffff) != 0) {
    fVar10 = 0.0;
    if ((((double)*(float *)(param_1 + 0x134) <=
          (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x140)) - 4503599627370496.0)
          + ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x140) >> 0x20))
            - 1.9342813113834067e+25)) -
          (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x148)) - 4503599627370496.0)
          + ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x148) >> 0x20))
            - 1.9342813113834067e+25))) && (fVar10 = *(float *)(param_1 + 0x138), 0.0 < fVar10)) ||
       (*(char *)(param_1 + 0x130) != '\x01')) {
      puVar6 = local_90;
      if (local_50 != (undefined1 *)0x0) {
        puVar6 = local_50;
      }
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0xf80);
        if (*(longlong *)(param_2 + 0xf80) == 0) {
          lVar3 = param_2;
        }
        *(float *)(lVar3 + 0xf0 + (longlong)*(int *)(puVar6 + lVar9) * 0xf8) =
             *(float *)(lVar3 + 0xf0 + (longlong)*(int *)(puVar6 + lVar9) * 0xf8) * fVar10;
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)local_48 * 4 != lVar9);
    }
    else if (0 < (int)local_48) {
      uVar8 = (local_48 & 0xffffffff) + 1;
      do {
        puVar6 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar6 = local_90;
        }
        FUN_140513388(param_2,*(undefined4 *)(puVar6 + uVar8 * 4 + -8));
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
  }
  goto LAB_143e40915;
}



// FUNCTION 143e4094e FUN_143e4094e body=725 status=ok
// SIG undefined FUN_143e4094e(void)

void FUN_143e4094e(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    plVar3 = (longlong *)FUN_140edfc58();
    if ((longlong)(int)plVar3[1] != 0) {
      plVar5 = (longlong *)*plVar3;
      plVar3 = plVar5 + (int)plVar3[1];
      do {
        if (*(int *)(param_1 + 0x10) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar7) == *plVar5) goto LAB_143e409f0;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x10) << 3 != lVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x20) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7) == *plVar5) goto LAB_143e409f0;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar7);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
    }
  }
  goto LAB_143e40bb8;
LAB_143e409f0:
  bVar2 = true;
  if (*(int *)(param_2 + 0x1c) == 0) {
LAB_143e40bda:
    plVar3 = (longlong *)0x0;
LAB_143e40b27:
    plVar5 = (longlong *)FUN_140edfc58(*(undefined8 *)(param_2 + 0x20));
    if ((longlong)(int)plVar5[1] != 0) {
      plVar6 = (longlong *)*plVar5;
      plVar5 = plVar6 + (int)plVar5[1];
      do {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar7) == *plVar6) goto LAB_143e40bb8;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x38) << 3 != lVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x48) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar7) == *plVar6) goto LAB_143e40bb8;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar7);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar5);
    }
    if (!bVar2) goto LAB_143e40ba1;
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    plVar3 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e40b27;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 == (longlong *)0x0) ||
       ((((int)plVar3[2] != *(int *)(param_2 + 0x1c) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))
        || (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)))) goto LAB_143e40bda;
    uVar4 = FUN_1401b0f18();
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar5 == (longlong *)0x0) {
LAB_143e40b25:
      bVar2 = false;
      goto LAB_143e40b27;
    }
    uVar4 = FUN_1401b0f18();
    plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
    bVar2 = false;
    if ((plVar5 == plVar6) || (bVar2 = false, plVar6 == (longlong *)0x0)) goto LAB_143e40b27;
    lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (lVar7 == 0) goto LAB_143e40b25;
    if ((longlong)*(int *)(lVar7 + 0x80) != 0) {
      plVar6 = *(longlong **)(lVar7 + 0x78);
      plVar5 = plVar6 + *(int *)(lVar7 + 0x80);
      do {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar7) == *plVar6) goto LAB_143e40bb8;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x38) << 3 != lVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x48) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar7) == *plVar6) goto LAB_143e40bb8;
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar7);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar5);
    }
LAB_143e40ba1:
    uVar4 = FUN_1447210f0(plVar3);
  }
  lVar7 = FUN_140149a73(uVar4,0);
  if (lVar7 != 0) {
    local_34 = FUN_14574753c(lVar7);
    lVar7 = FUN_140d17acc(lVar7);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
LAB_143e40bb8:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e40c3c FUN_143e40c3c body=806 status=ok
// SIG undefined FUN_143e40c3c(void)

void FUN_143e40c3c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [64];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  if (0 < *(int *)(param_2 + 0xf88)) {
    lVar9 = 0;
LAB_143e40c90:
    lVar3 = *(longlong *)(param_2 + 0xf80);
    if (*(longlong *)(param_2 + 0xf80) == 0) {
      lVar3 = param_2;
    }
    if ((*(char *)(lVar3 + 0xf4 + lVar9 * 0xf8) == '\0') &&
       (lVar3 = FUN_1400d690e(lVar3 + lVar9 * 0xf8), lVar3 != 0)) {
      plVar4 = (longlong *)FUN_140edfc58(lVar3);
      uVar8 = local_48;
      if ((longlong)(int)plVar4[1] != 0) {
        plVar5 = (longlong *)*plVar4;
        plVar4 = plVar5 + (int)plVar4[1];
        plVar7 = plVar5;
        do {
          if (*(int *)(param_1 + 0x38) != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar3) == *plVar7)
              goto LAB_143e40e02;
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x38) << 3 != lVar3);
          }
          if ((longlong)*(int *)(param_1 + 0x48) != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar3) == *plVar7)
              goto LAB_143e40e02;
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar3);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
        iVar1 = *(int *)(param_1 + 0x10);
        if (*(char *)(param_1 + 0x28) == '\0') {
          do {
            if (iVar1 != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar3) == *plVar5)
                goto LAB_143e40dd4;
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 - lVar3 != 0);
            }
            if ((longlong)*(int *)(param_1 + 0x20) != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3) == *plVar5)
                goto LAB_143e40dd4;
                lVar3 = lVar3 + 8;
              } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar3);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
        }
        else {
          do {
            if (iVar1 != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar3) == *plVar5)
                goto LAB_143e40dd4;
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 - lVar3 != 0);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
        }
      }
    }
    goto LAB_143e40e02;
  }
LAB_143e40f2a:
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143e40dd4:
  lVar3 = (longlong)(int)local_48;
  uVar2 = (int)local_48 + 1;
  local_48 = CONCAT44(local_48._4_4_,uVar2);
  if (local_48._4_4_ < uVar2) {
    FUN_1401fcbb6(local_90,uVar8 & 0xffffffff);
  }
  puVar6 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar6 = local_90;
  }
  *(int *)(puVar6 + lVar3 * 4) = (int)lVar9;
LAB_143e40e02:
  lVar9 = lVar9 + 1;
  if (*(int *)(param_2 + 0xf88) <= lVar9) goto code_r0x000143e40e15;
  goto LAB_143e40c90;
code_r0x000143e40e15:
  if ((local_48 & 0xffffffff) != 0) {
    fVar10 = (((float)*(ulonglong *)(param_1 + 0x140) / *(float *)(param_1 + 0x138) -
              (float)*(ulonglong *)(param_1 + 0x148)) + -1.0) * *(float *)(param_1 + 0x134) + 1.0;
    fVar11 = 0.0;
    if (0.0 <= fVar10) {
      fVar11 = fVar10;
    }
    if ((0.0 < fVar11) || (*(char *)(param_1 + 0x130) != '\x01')) {
      puVar6 = local_90;
      if (local_50 != (undefined1 *)0x0) {
        puVar6 = local_50;
      }
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0xf80);
        if (*(longlong *)(param_2 + 0xf80) == 0) {
          lVar3 = param_2;
        }
        *(float *)(lVar3 + 0xf0 + (longlong)*(int *)(puVar6 + lVar9) * 0xf8) =
             *(float *)(lVar3 + 0xf0 + (longlong)*(int *)(puVar6 + lVar9) * 0xf8) * fVar11;
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)local_48 * 4 != lVar9);
    }
    else if (0 < (int)local_48) {
      uVar8 = (local_48 & 0xffffffff) + 1;
      do {
        puVar6 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar6 = local_90;
        }
        FUN_140513388(param_2,*(undefined4 *)(puVar6 + uVar8 * 4 + -8));
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
  }
  goto LAB_143e40f2a;
}



// FUNCTION 143e40f66 FUN_143e40f66 body=553 status=ok
// SIG undefined FUN_143e40f66(void)

longlong * FUN_143e40f66(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((0 < param_3) && (*(int *)(param_1 + 0x408) != 0)) {
    FUN_1447a8aa0(param_2,param_3);
    do {
      if (param_4 == '\0') {
        iVar2 = *(int *)(param_1 + 0x408);
        iVar9 = 0;
        if (0 < iVar2) {
          uVar7 = rand();
          iVar8 = (int)((float)iVar2 * ((float)(uVar7 & 0x7fff) / 32767.0));
          iVar9 = iVar2 + -1;
          if (iVar8 < iVar2 + -1) {
            iVar9 = iVar8;
          }
        }
        lVar11 = (longlong)iVar9 * 0x50 + *(longlong *)(param_1 + 0x400);
LAB_143e410a4:
        FUN_148995386(lVar11,&local_a8);
        uVar7 = rand();
        dVar5 = (double)(((float)(uVar7 & 0x7fff) / 32767.0) * *(float *)(param_1 + 0x39c));
        dVar4 = DAT_14c8462d0 * dVar5 + local_98;
        dVar6 = DAT_14c8462c8 * dVar5 + local_a0;
        dVar5 = dVar5 * DAT_14c8462c0 + local_a8;
        iVar2 = (int)param_2[1];
        lVar11 = (longlong)iVar2;
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_2,iVar2);
        }
        lVar10 = *param_2;
        *(double *)(lVar10 + lVar11 * 0x18) = dVar5;
        *(double *)(lVar10 + 8 + lVar11 * 0x18) = dVar6;
        *(double *)(lVar10 + 0x10 + lVar11 * 0x18) = dVar4;
      }
      else {
        uVar7 = rand();
        if ((longlong)*(int *)(param_1 + 0x408) != 0) {
          fVar1 = *(float *)(param_1 + 0x410);
          lVar11 = *(longlong *)(param_1 + 0x400);
          lVar10 = (longlong)*(int *)(param_1 + 0x408) * 0x50;
          fVar12 = 0.0;
          do {
            fVar13 = (float)FUN_1489952cc(lVar11);
            fVar12 = fVar13 + fVar12;
            if (((float)(uVar7 & 0x7fff) / 32767.0) * fVar1 <= fVar12) goto LAB_143e410a4;
            lVar11 = lVar11 + 0x50;
            lVar10 = lVar10 + -0x50;
          } while (lVar10 != 0);
        }
      }
      bVar3 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar3);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e41190 FUN_143e41190 body=78 status=ok
// SIG undefined FUN_143e41190(void)

void FUN_143e41190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x88);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x80);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + 8);
      lVar4 = lVar4 + 0x10;
    } while (lVar3 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 143e411de FUN_143e411de body=201 status=ok
// SIG undefined FUN_143e411de(void)

undefined8 FUN_143e411de(longlong param_1,longlong param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  float in_stack_00000030;
  longlong *in_stack_00000038;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT71((int7)(local_20 >> 8),1);
  if (*(int *)(param_2 + 0x98) < *(int *)(param_1 + 8)) goto LAB_143e41204;
  FUN_143e412a8(param_1,local_28,param_2);
  cVar2 = *(char *)(param_1 + 0xd);
  if (cVar2 != '\0') {
    lVar5 = (longlong)local_28[0] * 0x48 + *(longlong *)(param_2 + 0x90);
    if (cVar2 == '\x01') {
      pfVar1 = (float *)(lVar5 + 0x24);
      if (in_stack_00000030 < *pfVar1 || in_stack_00000030 == *pfVar1) goto LAB_143e412a1;
    }
    else if ((cVar2 != '\x02') || (*(float *)(lVar5 + 0x24) <= in_stack_00000030)) {
LAB_143e412a1:
      uVar4 = 0;
      goto LAB_143e41204;
    }
  }
  iVar3 = (int)in_stack_00000038[1];
  *(uint *)(in_stack_00000038 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)in_stack_00000038 + 0xc) < iVar3 + 1U) {
    FUN_1446f48e2(in_stack_00000038,iVar3);
  }
  lVar5 = *in_stack_00000038;
  *(int *)(lVar5 + (longlong)iVar3 * 4) = local_28[0];
  uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
LAB_143e41204:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e412a8 FUN_143e412a8 body=413 status=ok
// SIG undefined FUN_143e412a8(void)

void FUN_143e412a8(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = *param_2;
  if ((longlong)*(int *)(param_3 + 0x98) < 1) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_3 + 0x38);
    pfVar5 = (float *)(*(longlong *)(param_3 + 0x90) + 0xc);
    lVar7 = 0;
    bVar4 = false;
    do {
      if (!bVar4) goto LAB_143e4132a;
      if (*(byte *)(param_1 + 0xc) < 6) {
        lVar1 = *(longlong *)(param_3 + 0x90) + (longlong)iVar6 * 0x48;
        switch(*(byte *)(param_1 + 0xc)) {
        case 0:
          if (*(float *)(lVar1 + 0xc) <= *pfVar5 && *pfVar5 != *(float *)(lVar1 + 0xc)) {
LAB_143e4132a:
            bVar4 = true;
            iVar6 = (int)lVar7;
          }
          break;
        case 1:
          if (*pfVar5 <= *(float *)(lVar1 + 0xc) && *(float *)(lVar1 + 0xc) != *pfVar5)
          goto LAB_143e4132a;
          break;
        case 2:
          fVar8 = 3.4028235e+38;
          if (*(char *)(pfVar5 + 2) == '\x01') {
            fVar9 = pfVar5[1];
            fVar8 = fVar9 - (*(float *)(lVar3 + 0x14c) - *pfVar5);
            if (fVar9 <= fVar8) {
              fVar8 = fVar9;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
          }
          fVar9 = 3.4028235e+38;
          if (*(char *)(lVar1 + 0x14) == '\x01') {
            fVar2 = *(float *)(lVar1 + 0x10);
            fVar9 = fVar2 - (*(float *)(lVar3 + 0x14c) - *(float *)(lVar1 + 0xc));
            if (fVar2 <= fVar9) {
              fVar9 = fVar2;
            }
            if (fVar9 <= 0.0) {
              fVar9 = 0.0;
            }
          }
          if (fVar8 < fVar9) goto LAB_143e4132a;
          break;
        case 3:
          fVar8 = 3.4028235e+38;
          if (*(char *)(pfVar5 + 2) == '\x01') {
            fVar9 = pfVar5[1];
            fVar8 = fVar9 - (*(float *)(lVar3 + 0x14c) - *pfVar5);
            if (fVar9 <= fVar8) {
              fVar8 = fVar9;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
          }
          fVar9 = 3.4028235e+38;
          if (*(char *)(lVar1 + 0x14) == '\x01') {
            fVar2 = *(float *)(lVar1 + 0x10);
            fVar9 = fVar2 - (*(float *)(lVar3 + 0x14c) - *(float *)(lVar1 + 0xc));
            if (fVar2 <= fVar9) {
              fVar9 = fVar2;
            }
            if (fVar9 <= 0.0) {
              fVar9 = 0.0;
            }
          }
          if (fVar9 < fVar8) goto LAB_143e4132a;
          break;
        case 4:
          if (pfVar5[6] <= *(float *)(lVar1 + 0x24) && *(float *)(lVar1 + 0x24) != pfVar5[6])
          goto LAB_143e4132a;
          break;
        case 5:
          if (*(float *)(lVar1 + 0x24) <= pfVar5[6] && pfVar5[6] != *(float *)(lVar1 + 0x24))
          goto LAB_143e4132a;
        }
      }
      lVar7 = lVar7 + 1;
      pfVar5 = pfVar5 + 0x12;
    } while (*(int *)(param_3 + 0x98) != lVar7);
  }
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = iVar6;
  return;
}



// FUNCTION 143e41446 FUN_143e41446 body=490 status=ok
// SIG undefined FUN_143e41446(void)

undefined4 *
FUN_143e41446(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)FUN_1447262c2(param_4);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar4 = FUN_140eca14a();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_140eca14a();
        plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
        if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
          lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
          if (lVar6 != 0) {
            uVar4 = FUN_14095dd8e(param_1 + 8);
            FUN_14094904c(lVar6,&local_30,uVar4);
            if (local_30 == (code *)0x0) {
              uVar2 = 0;
            }
            else {
              uVar2 = (**(code **)(*(longlong *)local_30 + 0x18))();
            }
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = uVar2;
            *(undefined1 *)(param_2 + 8) = 2;
            if (local_28 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_28 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_28)(local_28);
                LOCK();
                piVar1 = (int *)((longlong)local_28 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_28 + 0x10))(local_28);
                }
              }
            }
            goto LAB_143e41532;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_143e41532:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e41632 FUN_143e41632 body=460 status=ok
// SIG undefined FUN_143e41632(void)

undefined4 *
FUN_143e41632(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar2 = FUN_140eca14a();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_140eca14a();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if (lVar4 != 0) {
            uVar2 = FUN_14095dd8e(param_1 + 8);
            FUN_14899dc48(lVar4,&local_30,uVar2,param_1 + 0x30);
            if (local_30._4_1_ == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = (undefined4)local_30;
            }
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = uVar5;
            *(undefined1 *)(param_2 + 8) = 3;
            goto LAB_143e41722;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_143e41722:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e418e4 FUN_143e418e4 body=692 status=ok
// SIG undefined FUN_143e418e4(void)

void FUN_143e418e4(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(*param_3 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 100) = iVar6;
  lVar8 = 0;
  if (*param_3 != 0) {
    lVar8 = param_3[1];
  }
  param_1[0xd] = lVar8;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xe) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x74) = iVar6;
  lVar8 = *param_4;
  lVar4 = param_4[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x19];
  param_1[0x18] = lVar8;
  param_1[0x19] = lVar4;
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
  plStack_60 = (longlong *)param_1[8];
  if (plStack_60 == (longlong *)0x0) {
LAB_143e41a20:
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar6 = (int)plStack_60[1];
    do {
      if (iVar6 == 0) goto LAB_143e41a20;
      LOCK();
      iVar7 = (int)plStack_60[1];
      bVar10 = iVar6 == iVar7;
      if (bVar10) {
        *(int *)(plStack_60 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar10);
    local_68 = param_1[7];
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar5 = plStack_60;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_2;
  FUN_14106de62(&local_70);
  FUN_1418ae2a0(&local_70);
  if (!bVar10) {
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
  (**(code **)(*param_1 + 0x58))(param_1);
  lVar8 = param_1[0x11];
  if ((longlong)(int)lVar8 != 0) {
    lVar4 = param_1[0x10];
    lVar9 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar9);
      if ((*(byte *)(plVar5 + 0xd) & 1) == 0) {
        (**(code **)(*plVar5 + 0x80))(plVar5);
        *(byte *)(plVar5 + 0xd) = *(byte *)(plVar5 + 0xd) | 1;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar8 * 0x10 != lVar9);
  }
  *(undefined1 *)(param_1 + 0x29) = 2;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e41b9a FUN_143e41b9a body=1294 status=ok
// SIG undefined FUN_143e41b9a(void)

void FUN_143e41b9a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar4 = *(byte *)(param_1 + 0x2a);
  *(byte *)(param_1 + 0x2a) = bVar4 | 2;
  lVar8 = param_1[0x11];
  if ((longlong)(int)lVar8 != 0) {
    lVar9 = param_1[0x10];
    lVar12 = 0;
    do {
      plVar11 = *(longlong **)(lVar9 + lVar12);
      if ((*(byte *)(plVar11 + 0xd) & 2) == 0) {
        *(byte *)(plVar11 + 0xd) = *(byte *)(plVar11 + 0xd) | 2;
        (**(code **)(*plVar11 + 0x88))();
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar8 * 0x10 != lVar12);
  }
  FUN_140fdf4e4(param_1,&local_48);
  if (local_48 != (longlong *)0x0) {
    if ((param_1[0xd] == 0) || (*(int *)((longlong)param_1 + 100) == 0)) {
LAB_143e41c76:
      lVar8 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0xc);
      lVar8 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 100)))
        goto LAB_143e41c76;
        lVar8 = 0;
        if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
          lVar8 = param_1[0xd];
        }
      }
    }
    (**(code **)(*local_48 + 0x10))(local_48,lVar8);
  }
  plVar11 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (((((*(int *)((longlong)param_1 + 0x7c) != 0) &&
        (uVar5 = *(uint *)(param_1 + 0xf), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
      ((puVar10 = (undefined8 *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)((longlong)param_1 + 0x7c))
       ))) && ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
      plVar11 = (longlong *)*puVar10;
    }
    else {
      plVar11 = (longlong *)0x0;
    }
    plStack_40 = (longlong *)param_1[8];
    if (plStack_40 == (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plStack_40[1];
      local_48 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plStack_40 = (longlong *)0x0;
          goto LAB_143e41f7e;
        }
        LOCK();
        iVar6 = (int)plStack_40[1];
        bVar13 = iVar7 == iVar6;
        if (bVar13) {
          *(int *)(plStack_40 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar13);
      local_48 = (longlong *)param_1[7];
    }
LAB_143e41f7e:
    (**(code **)(*plVar11 + 0x2a0))(plVar11,&local_48);
    plVar11 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  if (((*(int *)((longlong)param_1 + 0x74) != 0) &&
      (uVar5 = *(uint *)(param_1 + 0xe), -1 < (int)uVar5)) &&
     (((int)uVar5 < DAT_14c9647dc &&
      (((plVar11 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
        plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)((longlong)param_1 + 0x74))) &&
       ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar11;
    }
    else {
      lVar8 = 0;
    }
    FUN_14057bc52(param_1,lVar8 + 0xb0);
  }
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    if (((*(int *)((longlong)param_1 + 0x74) == 0) ||
        (uVar5 = *(uint *)(param_1 + 0xe), (int)uVar5 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar5 ||
         ((plVar11 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)((longlong)param_1 + 0x74)))))
        || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143e41f08;
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar11;
    }
    else {
      lVar8 = 0;
    }
    lVar8 = *(longlong *)(lVar8 + 0xd0);
    if ((((lVar8 == 0) || ((longlong *)param_1[0xd] == (longlong *)0x0)) ||
        (*(int *)((longlong)param_1 + 100) == 0)) ||
       ((uVar5 = *(uint *)(param_1 + 0xc), (int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5))))
    goto LAB_143e41f08;
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if (((lVar9 == 0) ||
        ((*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 100) ||
         ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) ||
       (lVar9 = (**(code **)(*(longlong *)param_1[0xd] + 0x10))(), lVar9 == 0)) goto LAB_143e41f08;
    FUN_1411048fe(lVar9,&local_48,lVar8,1);
    plVar1 = plStack_40;
    param_1[0x16] = (longlong)local_48;
    local_48 = (longlong *)0x0;
    plVar11 = (longlong *)param_1[0x17];
    if (plStack_40 == plVar11) {
LAB_143e42036:
      plVar11 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      plStack_40 = (longlong *)0x0;
      param_1[0x17] = (longlong)plVar1;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        goto LAB_143e42036;
      }
    }
    lVar8 = param_1[0x16];
    if (lVar8 == 0) goto LAB_143e41f08;
  }
  plStack_40 = (longlong *)param_1[8];
  if (plStack_40 == (longlong *)0x0) {
LAB_143e41fe2:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar13 = true;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) goto LAB_143e41fe2;
      LOCK();
      iVar6 = (int)plStack_40[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar13);
    local_48 = (longlong *)param_1[7];
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar13 = false;
  }
  plVar11 = plStack_40;
  FUN_141104a9c(lVar8,&local_48);
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
  if (!bVar13) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_143e41f08:
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfd | bVar4 & 2;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e420aa FUN_143e420aa body=271 status=ok
// SIG undefined FUN_143e420aa(void)

void FUN_143e420aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)(param_1 + 0x7c) != 0) && (uVar3 = *(uint *)(param_1 + 0x78), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x7c))) &&
      ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      plVar6 = (longlong *)*puVar7;
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    local_18 = *(longlong **)(param_1 + 0x40);
    if (local_18 == (longlong *)0x0) {
      local_18 = (longlong *)0x0;
      local_20 = 0;
    }
    else {
      iVar5 = (int)local_18[1];
      local_20 = 0;
      do {
        if (iVar5 == 0) {
          local_18 = (longlong *)0x0;
          goto LAB_143e42161;
        }
        LOCK();
        iVar4 = (int)local_18[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(local_18 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      local_20 = *(undefined8 *)(param_1 + 0x38);
    }
LAB_143e42161:
    (**(code **)(*plVar6 + 0x2a8))(plVar6,&local_20);
    plVar6 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e421ba FUN_143e421ba body=901 status=ok
// SIG undefined FUN_143e421ba(void)

void FUN_143e421ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 *local_90;
  int local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((((*(longlong *)(param_1 + 0xe8) == 0) && (*(char *)(param_1 + 0x148) == '\x03')) &&
        (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) &&
       ((*(int *)(param_1 + 100) != 0 && (uVar3 = *(uint *)(param_1 + 0x60), -1 < (int)uVar3)))) &&
      (((int)uVar3 < DAT_14c9647dc &&
       ((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0 &&
        (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 100))))))) &&
     (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
      ((lVar10 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))(), lVar10 != 0 &&
       (lVar10 = FUN_1447210f0(lVar10), lVar10 != 0)))))) {
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      puVar9 = (undefined8 *)(lVar10 + 0x458);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar9;
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,4,0x10);
    local_88 = 4;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 == (longlong *)0x0) {
LAB_143e42459:
      *local_90 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_90[2] = lVar11;
      *local_90 = &PTR_FUN_14b42f3a0;
      local_90[3] = 0;
      local_90[4] = 0;
      local_90[5] = &LAB_140ee75d6;
      *(undefined4 *)(local_90 + 6) = 0;
    }
    else {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_143e42459;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar12 = iVar8 == iVar7;
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar12);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *local_90 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_90[2] = lVar11;
      *local_90 = &PTR_FUN_14b42f3a0;
      local_90[3] = uVar6;
      local_90[4] = plVar5;
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      local_90[5] = &LAB_140ee75d6;
      *(undefined4 *)(local_90 + 6) = 0;
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
    local_78 = 0;
    local_70 = 0;
    FUN_14487d8d8(&local_78,&local_90);
    local_38 = 1;
    local_98 = local_80;
    local_80[0] = 0;
    local_7c = 0xbf800000;
    FUN_1406f4044(uVar4,param_1 + 0xe8,&local_78,0x42f00000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    if (local_88 != 0) {
      if (local_90 == (undefined8 *)0x0) goto LAB_143e42424;
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143e42424:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e42540 FUN_143e42540 body=866 status=ok
// SIG undefined FUN_143e42540(void)

undefined4 FUN_143e42540(longlong *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar9 = *(byte *)(param_1 + 0x2a) >> 4 & 1;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 0x10;
  if ((((((((longlong *)param_1[0xd] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 100) == 0)
          ) || (uVar2 = *(uint *)(param_1 + 0xc), (int)uVar2 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar2 ||
         (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0)))) ||
       ((*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 100) ||
        (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 ||
         (lVar10 = (**(code **)(*(longlong *)param_1[0xd] + 8))(), lVar10 == 0)))))) ||
      (lVar10 = FUN_1447210f0(lVar10), lVar10 == 0)) ||
     ((lVar7 = FUN_140eb4c46(param_1), lVar7 == 0 ||
      (lVar4 = *(longlong *)(param_2 + 8), lVar4 == 0)))) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xef | bVar9 << 4;
    uVar6 = 0;
  }
  else {
    local_a8 = (int)param_1[0x1c] + (uint)((int)param_1[0x1c] == 0);
    *(int *)(param_1 + 0x1c) = local_a8 + 1;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c8 = param_1;
    local_c0 = lVar10;
    local_b8 = lVar7;
    local_b0 = lVar4;
    FUN_1418ae2f6(&local_80,param_2 + 0x30);
    local_68 = 0x3f800000;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    iStack_58 = 0;
    local_54 = 0;
    if (((*(int *)((longlong)param_1 + 0x74) != 0) &&
        (((uVar2 = *(uint *)(param_1 + 0xe), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
         (plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0)))) &&
       (((int)plVar8[2] == *(int *)((longlong)param_1 + 0x74) &&
        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar8;
      }
      else {
        lVar10 = 0;
      }
      iVar3 = *(int *)(lVar10 + 0x80);
      if ((longlong)iVar3 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x78);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar10 + lVar7);
          if (lVar4 != 0) {
            FUN_143e475e8(lVar4,&local_c8);
          }
          lVar7 = lVar7 + 0x18;
        } while ((longlong)iVar3 * 0x18 != lVar7);
      }
    }
    uVar6 = (**(code **)(*param_1 + 0x60))(param_1,&local_c8);
    FUN_140ce80dc(param_1);
    if ((char)uVar6 != '\0') {
      if ((longlong)(int)param_1[0x1f] != 0) {
        lVar10 = 0;
        do {
          if ((*(int *)(param_1[0x1e] + 8 + lVar10) != 0) &&
             (*(longlong *)(param_1[0x1e] + lVar10) != 0)) {
            FUN_14120647a(param_1 + 0x1e,&local_c8);
            break;
          }
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)param_1[0x1f] * 0x10 != lVar10);
      }
      FUN_143e428a4(param_1,&DAT_14cb8c330,&local_c8);
      if ((longlong)iStack_58 != 0) {
        lVar10 = CONCAT44(uStack_5c,uStack_60);
        lVar7 = (longlong)iStack_58 << 4;
        do {
          FUN_143e428a4(param_1,lVar10,&local_c8);
          lVar10 = lVar10 + 0x10;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
      cVar5 = FUN_14057bb94(param_1);
      if ((cVar5 != '\0') && ((*(byte *)(param_1 + 0x2a) & 8) == 0)) {
        *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 8;
        FUN_144958d50(param_1 + 6);
      }
    }
    if (CONCAT44(uStack_5c,uStack_60) != 0) {
      FUN_1400020a8();
    }
    FUN_1409ed859(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    bVar1 = *(byte *)(param_1 + 0x2a);
    bVar9 = bVar9 << 4;
    *(byte *)(param_1 + 0x2a) = bVar1 & 0xef | bVar9;
    if ((bVar1 & 0x20) != 0) {
      *(byte *)(param_1 + 0x2a) = bVar1 & 0xcf | bVar9;
      FUN_140cfbbec(param_1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143e428a4 FUN_143e428a4 body=111 status=ok
// SIG undefined FUN_143e428a4(void)

void FUN_143e428a4(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x108);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (((((int)plVar3[8] == *param_2) && (*(int *)((longlong)plVar3 + 0x44) == param_2[1])) &&
          ((int)plVar3[9] == param_2[2])) && (*(int *)((longlong)plVar3 + 0x4c) == param_2[3])) {
        (**(code **)(*plVar3 + 0x88))(plVar3,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143e42918 FUN_143e42918 body=113 status=ok
// SIG undefined FUN_143e42918(void)

undefined8 FUN_143e42918(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x34))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e4299c FUN_143e4299c body=78 status=ok
// SIG undefined FUN_143e4299c(void)

bool FUN_143e4299c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar2 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar3,param_2);
      if (cVar1 != '\0') goto LAB_143e429d8;
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    lVar3 = 0;
LAB_143e429d8:
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 143e429f2 FUN_143e429f2 body=29 status=ok
// SIG undefined FUN_143e429f2(void)

undefined8 FUN_143e429f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e42a3a FUN_143e42a3a body=29 status=ok
// SIG undefined FUN_143e42a3a(void)

undefined8 FUN_143e42a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e42bd6 FUN_143e42bd6 body=93 status=ok
// SIG undefined FUN_143e42bd6(void)

void FUN_143e42bd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42da80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e42c34 FUN_143e42c34 body=93 status=ok
// SIG undefined FUN_143e42c34(void)

void FUN_143e42c34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42da80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e42c92 FUN_143e42c92 body=126 status=ok
// SIG undefined FUN_143e42c92(void)

void FUN_143e42c92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42da80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e42d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e42d1a FUN_143e42d1a body=266 status=ok
// SIG undefined FUN_143e42d1a(void)

undefined8 FUN_143e42d1a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e42e1e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e42e1e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e42e1e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e42dc5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148990b22(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e42dc5;
    }
  }
  uVar6 = 0;
LAB_143e42dc5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e42e26 FUN_143e42e26 body=369 status=ok
// SIG undefined FUN_143e42e26(void)

void FUN_143e42e26(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong *_Buf2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *param_3;
  if ((*(byte *)(param_2 + 0xf) & 1) == 0) goto LAB_143e42f5d;
  puVar4 = (ulonglong *)FUN_141581c12(*param_1 + 0x18,local_2c,&local_2c);
  if ((char)puVar4[6] == '\0') {
    uVar2 = (**(code **)(*param_2 + 8))(param_2);
    uVar5 = param_2[1];
    *puVar4 = uVar5;
    *(undefined4 *)(puVar4 + 1) = uVar2;
    if ((((uVar5 >> 0x20 != 0) && (uVar6 = (uint)uVar5, -1 < (int)uVar6)) &&
        ((int)uVar6 < DAT_14c9647dc)) &&
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar5 >> 0x20))) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
      FUN_143e3b080(puVar4,*plVar8 + 0x38);
    }
  }
  plVar8 = param_2 + 3;
  if (*(byte *)(param_2 + 7) == (byte)puVar4[6]) {
    if ((ushort)puVar4[5] < 0x19) {
      _Buf2 = puVar4 + 2;
    }
    else {
      _Buf2 = (ulonglong *)puVar4[2];
    }
    plVar7 = plVar8;
    if (0x18 < *(ushort *)(param_2 + 6)) {
      plVar7 = (longlong *)*plVar8;
    }
    uVar5 = (ulonglong)((uint)*(byte *)(param_2 + 7) * 0x120);
    if (*(code **)(&DAT_14c9a85e0 + uVar5) == (code *)0x0) {
      iVar3 = memcmp(plVar7,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      if (iVar3 == 0) goto LAB_143e42f5d;
    }
    else {
      cVar1 = (**(code **)(&DAT_14c9a85e0 + uVar5))();
      if (cVar1 != '\0') goto LAB_143e42f5d;
    }
  }
  plVar7 = (longlong *)param_1[1];
  iVar3 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
    FUN_1446f48e2(plVar7,iVar3);
  }
  *(undefined4 *)(*plVar7 + (longlong)iVar3 * 4) = local_2c;
  FUN_143e3b080(puVar4,plVar8);
LAB_143e42f5d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e42fb6 FUN_143e42fb6 body=12 status=ok
// SIG undefined FUN_143e42fb6(void)

void FUN_143e42fb6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e42fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e42fc2 FUN_143e42fc2 body=29 status=ok
// SIG undefined FUN_143e42fc2(void)

undefined8 FUN_143e42fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e42fe0 FUN_143e42fe0 body=280 status=ok
// SIG undefined FUN_143e42fe0(void)

void FUN_143e42fe0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *param_3;
  if ((*(byte *)(param_2 + 0xf) & 1) != 0) {
    puVar4 = (ulonglong *)FUN_141581c12(*param_1 + 0x18,local_2c,&local_2c);
    uVar2 = (**(code **)(*param_2 + 8))(param_2);
    uVar1 = param_2[1];
    *puVar4 = uVar1;
    *(undefined4 *)(puVar4 + 1) = uVar2;
    if (((uVar1 >> 0x20 != 0) && (uVar5 = (uint)uVar1, -1 < (int)uVar5)) &&
       ((int)uVar5 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
      if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == (int)(uVar1 >> 0x20))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
        FUN_143e3b080(puVar4,*plVar6 + 0x38);
      }
    }
    plVar6 = (longlong *)param_1[1];
    local_28 = param_2[1];
    iVar3 = FUN_1489972ee(plVar6,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
    if ((iVar3 != -1) && (lVar7 = (longlong)iVar3 * 0x38 + *plVar6, lVar7 != -8 && lVar7 != 0)) {
      FUN_143e3b080(puVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e43118 FUN_143e43118 body=12 status=ok
// SIG undefined FUN_143e43118(void)

void FUN_143e43118(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e43121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e43124 FUN_143e43124 body=29 status=ok
// SIG undefined FUN_143e43124(void)

undefined8 FUN_143e43124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e43148 FUN_143e43148 body=68 status=ok
// SIG undefined FUN_143e43148(void)

undefined8 * FUN_143e43148(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42dd50;
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



// FUNCTION 143e43190 FUN_143e43190 body=83 status=ok
// SIG undefined FUN_143e43190(void)

undefined8 FUN_143e43190(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143e43218 FUN_143e43218 body=397 status=ok
// SIG undefined FUN_143e43218(void)

void FUN_143e43218(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_143e4323b;
  lVar3 = FUN_148987134();
  if (lVar3 == 0) goto LAB_143e4323b;
  FUN_141260192(lVar3,&local_48,&DAT_14cb8c380);
  if (local_48 != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    local_68 = &LAB_14592ea80;
    local_60 = 0;
    FUN_146561ea8(&local_58,param_1);
    lVar3 = local_48;
    local_78 = 0;
    local_70 = 0;
    FUN_145ab777e(&local_78,&local_58);
    FUN_145ab76ac(lVar3,&local_68,*(undefined8 *)(param_1 + 0x78),&local_78);
    *(undefined1 **)(param_1 + 0x80) = local_68;
    if (local_50 == 0) {
LAB_143e43353:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_143e43353;
    }
    plVar2 = local_40;
    *(longlong *)(param_1 + 0x68) = local_48;
    plVar4 = *(longlong **)(param_1 + 0x70);
    if (plVar4 != local_40) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x70);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x70) = plVar2;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_143e4323b:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e433a6 FUN_143e433a6 body=298 status=ok
// SIG undefined FUN_143e433a6(void)

void FUN_143e433a6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143e43407;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
    }
  }
LAB_143e43407:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_147e215cc(param_1,*(undefined4 *)(param_1 + 0x48),uVar4,8);
    return;
  }
  return;
}



// FUNCTION 143e434d0 FUN_143e434d0 body=29 status=ok
// SIG undefined FUN_143e434d0(void)

undefined8 FUN_143e434d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e43676 FUN_143e43676 body=101 status=ok
// SIG undefined FUN_143e43676(void)

void FUN_143e43676(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e436dc FUN_143e436dc body=101 status=ok
// SIG undefined FUN_143e436dc(void)

void FUN_143e436dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e43742 FUN_143e43742 body=134 status=ok
// SIG undefined FUN_143e43742(void)

void FUN_143e43742(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e080;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e437b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e4382a FUN_143e4382a body=310 status=ok
// SIG undefined FUN_143e4382a(void)

undefined8 FUN_143e4382a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e4395a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e4395a;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_143e4395a:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e43906;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_143e43906;
    }
  }
  uVar6 = 0;
LAB_143e43906:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e43968 FUN_143e43968 body=31 status=ok
// SIG undefined FUN_143e43968(void)

undefined8 FUN_143e43968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e43a50 FUN_143e43a50 body=12 status=ok
// SIG undefined FUN_143e43a50(void)

void FUN_143e43a50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e43a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e43a5c FUN_143e43a5c body=29 status=ok
// SIG undefined FUN_143e43a5c(void)

undefined8 FUN_143e43a5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e43a7a FUN_143e43a7a body=29 status=ok
// SIG undefined FUN_143e43a7a(void)

undefined8 FUN_143e43a7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e43c16 FUN_143e43c16 body=93 status=ok
// SIG undefined FUN_143e43c16(void)

void FUN_143e43c16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e43c74 FUN_143e43c74 body=93 status=ok
// SIG undefined FUN_143e43c74(void)

void FUN_143e43c74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e43cd2 FUN_143e43cd2 body=126 status=ok
// SIG undefined FUN_143e43cd2(void)

void FUN_143e43cd2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e43d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e43d50 FUN_143e43d50 body=91 status=ok
// SIG undefined FUN_143e43d50(void)

void FUN_143e43d50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined7 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = &DAT_14cb8c168;
    FUN_1400bc8c2(plVar1 + 0x6d,&DAT_14cb8c168);
    uVar3 = (undefined7)((ulonglong)puVar2 >> 8);
    if (-1 < (char)plVar1[0xc] == (bool)(char)plVar1[0x6d]) {
      (**(code **)(*plVar1 + 0x608))(plVar1);
    }
    FUN_1405e47c6(plVar1,CONCAT71(uVar3,1));
    return;
  }
  return;
}



// FUNCTION 143e43dac FUN_143e43dac body=341 status=ok
// SIG undefined FUN_143e43dac(void)

undefined8 FUN_143e43dac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined7 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e43efb;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143e43efb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar10 = local_28;
  }
  else {
LAB_143e43efb:
    lVar10 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e43e57;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xa8);
      if (plVar3 == (longlong *)0x0) {
        uVar9 = 1;
      }
      else {
        puVar7 = &DAT_14cb8c168;
        FUN_1400bc8c2(plVar3 + 0x6d,&DAT_14cb8c168);
        uVar8 = (undefined7)((ulonglong)puVar7 >> 8);
        if (-1 < (char)plVar3[0xc] == (bool)(char)plVar3[0x6d]) {
          (**(code **)(*plVar3 + 0x608))(plVar3);
        }
        uVar9 = 1;
        FUN_1405e47c6(plVar3,CONCAT71(uVar8,1));
      }
      goto LAB_143e43e57;
    }
  }
  uVar9 = 0;
LAB_143e43e57:
  if ((lVar10 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar10);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e43f02 FUN_143e43f02 body=29 status=ok
// SIG undefined FUN_143e43f02(void)

undefined8 FUN_143e43f02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4409e FUN_143e4409e body=93 status=ok
// SIG undefined FUN_143e4409e(void)

void FUN_143e4409e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e440fc FUN_143e440fc body=93 status=ok
// SIG undefined FUN_143e440fc(void)

void FUN_143e440fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4415a FUN_143e4415a body=126 status=ok
// SIG undefined FUN_143e4415a(void)

void FUN_143e4415a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e1f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e441c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e441d8 FUN_143e441d8 body=91 status=ok
// SIG undefined FUN_143e441d8(void)

void FUN_143e441d8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    FUN_1400bc96c(plVar1 + 0x6d,&DAT_14cb8c168);
    if (-1 < (char)plVar1[0xc] == (bool)(char)plVar1[0x6d]) {
      (**(code **)(*plVar1 + 0x608))(plVar1);
    }
    FUN_1405e47c6(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 143e44234 FUN_143e44234 body=334 status=ok
// SIG undefined FUN_143e44234(void)

undefined8 FUN_143e44234(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e4437c;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143e4437c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar8 = local_28;
  }
  else {
LAB_143e4437c:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e442df;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xa8);
      uVar7 = 1;
      if (plVar3 != (longlong *)0x0) {
        FUN_1400bc96c(plVar3 + 0x6d,&DAT_14cb8c168);
        if (-1 < (char)plVar3[0xc] == (bool)(char)plVar3[0x6d]) {
          (**(code **)(*plVar3 + 0x608))(plVar3);
        }
        FUN_1405e47c6(plVar3,0);
      }
      goto LAB_143e442df;
    }
  }
  uVar7 = 0;
LAB_143e442df:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e44384 FUN_143e44384 body=29 status=ok
// SIG undefined FUN_143e44384(void)

undefined8 FUN_143e44384(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e44520 FUN_143e44520 body=93 status=ok
// SIG undefined FUN_143e44520(void)

void FUN_143e44520(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42e2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4457e FUN_143e4457e body=93 status=ok
// SIG undefined FUN_143e4457e(void)

void FUN_143e4457e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42e2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e445dc FUN_143e445dc body=126 status=ok
// SIG undefined FUN_143e445dc(void)

void FUN_143e445dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42e2d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e4464b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e4467a FUN_143e4467a body=292 status=ok
// SIG undefined FUN_143e4467a(void)

undefined8 FUN_143e4467a(longlong param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e44798;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e44798;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e44798:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e44728;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (param_2 < 4) {
        FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) +
                      *(longlong *)(&DAT_14b42f628 + (ulonglong)param_2 * 8),0);
      }
      goto LAB_143e44728;
    }
  }
  uVar6 = 0;
LAB_143e44728:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e447a0 FUN_143e447a0 body=31 status=ok
// SIG undefined FUN_143e447a0(void)

undefined8 FUN_143e447a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4480e FUN_143e4480e body=31 status=ok
// SIG undefined FUN_143e4480e(void)

undefined8 FUN_143e4480e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4487a FUN_143e4487a body=31 status=ok
// SIG undefined FUN_143e4487a(void)

undefined8 FUN_143e4487a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e448e6 FUN_143e448e6 body=31 status=ok
// SIG undefined FUN_143e448e6(void)

undefined8 FUN_143e448e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e449a0 FUN_143e449a0 body=23 status=ok
// SIG undefined FUN_143e449a0(void)

void FUN_143e449a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e449b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e449b8 FUN_143e449b8 body=29 status=ok
// SIG undefined FUN_143e449b8(void)

undefined8 FUN_143e449b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e449d6 FUN_143e449d6 body=54 status=ok
// SIG undefined FUN_143e449d6(void)

longlong FUN_143e449d6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 143e44a56 FUN_143e44a56 body=301 status=ok
// SIG undefined FUN_143e44a56(void)

void FUN_143e44a56(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_143e44ac1;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_143e44b2d;
  }
  else if (0.0 < local_6c) {
LAB_143e44b2d:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_140ce83e6(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140ce8090(&local_88);
LAB_143e44ac1:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e44b84 FUN_143e44b84 body=118 status=ok
// SIG undefined FUN_143e44b84(void)

bool FUN_143e44b84(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_60;
  local_60 = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14b42fbf0;
  local_58[0] = &LAB_143e4cde6;
  local_30 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e44c02 FUN_143e44c02 body=320 status=ok
// SIG undefined FUN_143e44c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e44c02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0xb8);
  while (plVar5 = plVar3, plVar5 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0xb8) = *plVar5;
    while (plVar3 = (longlong *)plVar5[4], plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[1];
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar4;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar4 = (longlong *)plVar3[0x12];
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
      _DAT_14cb8c26c = _DAT_14cb8c26c + -1;
      *plVar3 = (longlong)DAT_14cb8c260;
      DAT_14cb8c260 = plVar3;
    }
    while (plVar3 = (longlong *)plVar5[5], plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[1];
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar4;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      _DAT_14cb8c27c = _DAT_14cb8c27c + -1;
      *plVar3 = (longlong)DAT_14cb8c270;
      DAT_14cb8c270 = plVar3;
    }
    plVar3 = (longlong *)plVar5[1];
    if (*plVar5 != 0) {
      *(longlong **)(*plVar5 + 8) = plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    _DAT_14cb8c25c = _DAT_14cb8c25c + -1;
    *plVar5 = (longlong)DAT_14cb8c250;
    DAT_14cb8c250 = plVar5;
    plVar3 = *(longlong **)(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 143e44d46 FUN_143e44d46 body=114 status=ok
// SIG undefined FUN_143e44d46(void)

undefined8 FUN_143e44d46(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + -0x68);
  if ((((*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) && (*(int *)(lVar2 + 100) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x60), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 100))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 8))();
      if (lVar2 != 0) {
        uVar3 = FUN_1447210f0(lVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 143e44dc4 FUN_143e44dc4 body=199 status=ok
// SIG undefined FUN_143e44dc4(void)

void FUN_143e44dc4(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(int *)(param_1 + 0x98);
  uVar4 = (ulonglong)local_38;
  local_40 = param_1;
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x28 + -0x14;
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(char *)(lVar2 + lVar5) != '\x01') break;
      fVar1 = *(float *)(lVar2 + -4 + lVar5);
      fVar6 = fVar1 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) -
                      *(float *)(lVar2 + -8 + lVar5));
      if (fVar1 <= fVar6) {
        fVar6 = fVar1;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (0.0 < fVar6) break;
      FUN_140dbdd56(param_1,(int)uVar4 + -1);
      lVar5 = lVar5 + -0x28;
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  FUN_140ce8090(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e44e8c FUN_143e44e8c body=118 status=ok
// SIG undefined FUN_143e44e8c(void)

bool FUN_143e44e8c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_60;
  local_60 = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14b42fbf0;
  local_58[0] = &LAB_143e4cde6;
  local_30 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e44f04 FUN_143e44f04 body=199 status=ok
// SIG undefined FUN_143e44f04(void)

void FUN_143e44f04(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(int *)(param_1 + 0x98);
  uVar4 = (ulonglong)local_38;
  local_40 = param_1;
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x48 + -0x34;
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(char *)(lVar2 + lVar5) != '\x01') break;
      fVar1 = *(float *)(lVar2 + -4 + lVar5);
      fVar6 = fVar1 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) -
                      *(float *)(lVar2 + -8 + lVar5));
      if (fVar1 <= fVar6) {
        fVar6 = fVar1;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (0.0 < fVar6) break;
      FUN_140924eba(param_1,(int)uVar4 + -1);
      lVar5 = lVar5 + -0x48;
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  FUN_140ea9bb6(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e44fcc FUN_143e44fcc body=116 status=ok
// SIG undefined FUN_143e44fcc(void)

void FUN_143e44fcc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar3 = (int *)*param_2;
    piVar1 = piVar3 + *(int *)(param_2 + 1);
    do {
      if ((longlong)*(int *)(param_1 + 0x98) != 0) {
        uVar2 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18 + uVar2) == *piVar3) {
            if ((int)(uVar2 >> 3) * 0x38e38e39 != -1) {
              FUN_140924eba(param_1);
            }
            break;
          }
          uVar2 = uVar2 + 0x48;
        } while ((longlong)*(int *)(param_1 + 0x98) * 0x48 != uVar2);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return;
}



// FUNCTION 143e45040 FUN_143e45040 body=301 status=ok
// SIG undefined FUN_143e45040(void)

void FUN_143e45040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_143e450ab;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_143e45117;
  }
  else if (0.0 < local_6c) {
LAB_143e45117:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_14899b9f2(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14899b814(&local_88);
LAB_143e450ab:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4516e FUN_143e4516e body=118 status=ok
// SIG undefined FUN_143e4516e(void)

bool FUN_143e4516e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_60;
  local_60 = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14b42fbf0;
  local_58[0] = &LAB_143e4cde6;
  local_30 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e451e6 FUN_143e451e6 body=125 status=ok
// SIG undefined FUN_143e451e6(void)

void FUN_143e451e6(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((((*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) && (*(int *)(lVar2 + 100) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x60), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 100))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x10))();
      if (lVar2 != 0) {
        FUN_145863238(lVar2 + 0x48,*(undefined4 *)(param_2 + 0x38));
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e45264 FUN_143e45264 body=198 status=ok
// SIG undefined FUN_143e45264(void)

void FUN_143e45264(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(int *)(param_1 + 0x98);
  uVar4 = (ulonglong)local_38;
  local_40 = param_1;
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x40 + -0x2c;
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(char *)(lVar2 + lVar5) != '\x01') break;
      fVar1 = *(float *)(lVar2 + -4 + lVar5);
      fVar6 = fVar1 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) -
                      *(float *)(lVar2 + -8 + lVar5));
      if (fVar1 <= fVar6) {
        fVar6 = fVar1;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (0.0 < fVar6) break;
      FUN_14899b888(param_1,(int)uVar4 + -1);
      lVar5 = lVar5 + -0x40;
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  FUN_14899b814(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4532c FUN_143e4532c body=872 status=ok
// SIG undefined FUN_143e4532c(void)

ulonglong FUN_143e4532c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  char local_bc;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  char local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_4 + 0x28) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (((((*(longlong **)(lVar10 + 0x68) == (longlong *)0x0) || (*(int *)(lVar10 + 100) == 0)) ||
         (uVar5 = *(uint *)(lVar10 + 0x60), (int)uVar5 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar5 ||
         (lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar12 == 0)))) ||
       ((*(int *)(lVar12 + 0x10) != *(int *)(lVar10 + 100) ||
        (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
         (lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x68) + 0x10))(), lVar10 == 0))))))
    goto LAB_143e4554a;
    local_94 = '\0';
    local_70 = 0;
    local_68 = 0;
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    local_90 = 0;
    uStack_88 = 0;
    local_64 = 0xffffffff00000080;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    plVar7 = *(longlong **)(param_4 + 0x30);
    plVar9 = plStack_b0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      plVar3 = plStack_b0;
      local_b8 = uVar6;
      if (plVar7 == plStack_b0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        plVar9 = plStack_b0;
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
          plVar3 = plVar7;
joined_r0x000143e454c6:
          uVar6 = local_b8;
          plVar9 = plStack_b0;
          if (iVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            uVar6 = local_b8;
            plVar9 = plStack_b0;
          }
        }
      }
      else {
        plVar9 = plVar7;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            puVar8 = (undefined8 *)*plStack_b0;
            plStack_b0 = plVar7;
            (*(code *)*puVar8)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2;
            UNLOCK();
            goto joined_r0x000143e454c6;
          }
        }
      }
    }
    plStack_b0 = plVar9;
    local_b8 = uVar6;
    FUN_140fbc5b2(lVar10 + 0x48,&local_c0,&local_b8);
    if (local_bc == '\x01') {
      lVar10 = FUN_14899ba62(param_1,param_2,param_3);
      *(undefined4 *)(lVar10 + 0x38) = local_c0;
      local_48 = 0;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_90);
      plVar7 = plStack_a0;
      if (local_94 == '\x01') {
        local_94 = '\0';
      }
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_a0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_b0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      goto LAB_143e4554a;
    }
    local_48 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_90);
    plVar7 = plStack_a0;
    if (local_94 == '\x01') {
      local_94 = '\0';
    }
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_a0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_b0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  uVar11 = 0;
LAB_143e4554a:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e45696 FUN_143e45696 body=122 status=ok
// SIG undefined FUN_143e45696(void)

int FUN_143e45696(longlong param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  char *pcVar3;
  ulonglong uVar4;
  float fVar5;
  
  if ((*(char *)(param_2 + 0x10) == '\x01') &&
     (uVar4 = (ulonglong)*(int *)(param_1 + 0x98), 0 < (longlong)uVar4)) {
    pcVar3 = (char *)(uVar4 * 0x40 + *(longlong *)(param_1 + 0x90) + -0x2c);
    do {
      if (*pcVar3 == '\0') {
LAB_143e45709:
        return (int)uVar4 + -1;
      }
      fVar1 = *(float *)(pcVar3 + -4);
      fVar5 = fVar1 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) - *(float *)(pcVar3 + -8));
      if (fVar1 <= fVar5) {
        fVar5 = fVar1;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (*(float *)(param_2 + 0xc) < fVar5) goto LAB_143e45709;
      pcVar3 = pcVar3 + -0x40;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  return 0;
}



// FUNCTION 143e45750 FUN_143e45750 body=29 status=ok
// SIG undefined FUN_143e45750(void)

undefined8 FUN_143e45750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4577e FUN_143e4577e body=78 status=ok
// SIG undefined FUN_143e4577e(void)

bool FUN_143e4577e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar2 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar3,param_2);
      if (cVar1 != '\0') goto LAB_143e457ba;
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    lVar3 = 0;
LAB_143e457ba:
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 143e45842 FUN_143e45842 body=49 status=ok
// SIG undefined FUN_143e45842(void)

undefined8 * FUN_143e45842(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b42f060;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e45924 FUN_143e45924 body=49 status=ok
// SIG undefined FUN_143e45924(void)

undefined8 * FUN_143e45924(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b42f080;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e45956 FUN_143e45956 body=78 status=ok
// SIG undefined FUN_143e45956(void)

bool FUN_143e45956(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar2 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar3,param_2);
      if (cVar1 != '\0') goto LAB_143e45992;
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    lVar3 = 0;
LAB_143e45992:
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 143e459a4 FUN_143e459a4 body=83 status=ok
// SIG undefined FUN_143e459a4(void)

undefined8 FUN_143e459a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143e45a14 FUN_143e45a14 body=179 status=ok
// SIG undefined FUN_143e45a14(void)

void FUN_143e45a14(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined **local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar4);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x160))) {
        FUN_14899d250(param_1,*(undefined4 *)
                               (*(longlong *)(param_1 + 0x158) + 4 + (longlong)iVar1 * 8));
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  local_48 = param_1 + 0x158;
  local_50 = &PTR_FUN_14b42f410;
  local_38 = 0;
  local_40 = param_2;
  FUN_140c5fd14(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e45ac8 FUN_143e45ac8 body=141 status=ok
// SIG undefined FUN_143e45ac8(void)

void FUN_143e45ac8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_14899d250(param_1,*(undefined4 *)(lVar1 + 4 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  local_38 = param_1 + 0x158;
  local_40 = &PTR_FUN_14b42f450;
  local_30 = 0;
  FUN_140c5fd14(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e45b56 FUN_143e45b56 body=3247 status=ok
// SIG undefined FUN_143e45b56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e45b56(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8b8d8 = (ulonglong)uVar2;
  _DAT_14cb8b8e8 = &LAB_143e3b264;
  _DAT_14cb8b8f0 = 0x44340ccd;
  DAT_14cb8b8f4 = 1;
  DAT_14cb8b8e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b8e0;
  atexit((_func_5014 *)&LAB_143e3b269);
  _DAT_14cb8b908 = &LAB_143e3b29d;
  _DAT_14cb8b910 = 0x443413d7;
  DAT_14cb8b914 = 1;
  DAT_14cb8b900 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b900;
  atexit((_func_5014 *)&LAB_143e3b2a2);
  _DAT_14cb8b928 = &LAB_143e3b2d6;
  _DAT_14cb8b930 = 0x44341333;
  DAT_14cb8b934 = 1;
  DAT_14cb8b920 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b920;
  atexit((_func_5014 *)&LAB_143e3b2db);
  _DAT_14cb8b948 = &LAB_143e3b30f;
  _DAT_14cb8b950 = 0x4434151f;
  DAT_14cb8b954 = 1;
  DAT_14cb8b940 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b940;
  atexit((_func_5014 *)&LAB_143e3b314);
  _DAT_14cb8b968 = &LAB_143e3b348;
  _DAT_14cb8b970 = 0x44340eb8;
  DAT_14cb8b974 = 1;
  DAT_14cb8b960 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b960;
  atexit((_func_5014 *)&LAB_143e3b34d);
  _DAT_14cb8b988 = &LAB_143e3b381;
  _DAT_14cb8b990 = 0x44340f5c;
  DAT_14cb8b994 = 1;
  DAT_14cb8b980 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b980;
  atexit((_func_5014 *)&LAB_143e3b386);
  _DAT_14cb8b9a8 = &LAB_143e3b3ba;
  _DAT_14cb8b9b0 = 0x44340e14;
  DAT_14cb8b9b4 = 1;
  DAT_14cb8b9a0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b9a0;
  atexit((_func_5014 *)&LAB_143e3b3bf);
  _DAT_14cb8b9c8 = &LAB_143e3b3f3;
  _DAT_14cb8b9d0 = 0x44340d71;
  DAT_14cb8b9d4 = 1;
  DAT_14cb8b9c0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8b9c0;
  atexit((_func_5014 *)&LAB_143e3b3f8);
  _DAT_14cb8c3a8 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8c3b0 = 0;
  uRam000000014cb8c3b8 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8c3b0);
  _DAT_14cb8c3a8 = &PTR_FUN_14b42d7d0;
  DAT_14cb8ba40 = 0;
  uRam000000014cb8ba48 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e43142;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fc466(&local_a8);
  atexit((_func_5014 *)&LAB_143e3bbbf);
  _DAT_14cb8c380 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8c388 = 0;
  uRam000000014cb8c390 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8c388);
  _DAT_14cb8c380 = &PTR_FUN_14b42d7f8;
  _DAT_14cb8bad8 = &LAB_143e3c156;
  _DAT_14cb8bae0 = 0x44341000;
  DAT_14cb8bae4 = 1;
  DAT_14cb8bad0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8bad0;
  atexit((_func_5014 *)&LAB_143e3c15b);
  _DAT_14cb8c368 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8c370 = 0;
  uRam000000014cb8c378 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8c370);
  _DAT_14cb8c368 = &PTR_FUN_14b42d828;
  _DAT_14cb8baf0 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8baf8 = 0;
  uRam000000014cb8bb00 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8baf8);
  _DAT_14cb8baf0 = &PTR_FUN_14b42d858;
  DAT_14cb8bb08 = 0;
  uRam000000014cb8bb10 = 0;
  atexit((_func_5014 *)&LAB_143e3cdde);
  DAT_14cb8bb90 = 0;
  uRam000000014cb8bb98 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e43200;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fcbfc(&local_a8);
  atexit((_func_5014 *)&LAB_143e3d5a9);
  DAT_14cb8bc80 = 0;
  uRam000000014cb8bc88 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e43206;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fd392(&local_a8);
  atexit((_func_5014 *)&LAB_143e3d5d7);
  DAT_14cb8bd70 = 0;
  uRam000000014cb8bd78 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e4320c;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fdb28(&local_a8);
  atexit((_func_5014 *)&LAB_143e3d605);
  _DAT_14cb8be28 = &LAB_143e3d675;
  _DAT_14cb8be30 = 0x44341000;
  DAT_14cb8be34 = 1;
  DAT_14cb8be20 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8be20;
  atexit((_func_5014 *)&LAB_143e3d67a);
  DAT_14cb8bea0 = 0;
  uRam000000014cb8bea8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e43212;
  local_a8 = &DAT_14011fc1e;
  FUN_1460fe2be(&local_a8);
  atexit((_func_5014 *)&LAB_143e3d6d7);
  _DAT_14cb8bf30 = 0;
  uRam000000014cb8bf38 = 0;
  _DAT_14cb8bf40 = 0;
  DAT_14cb8bf48 = 0;
  uRam000000014cb8bf50 = 0;
  FUN_1446ddda2(&DAT_14cb8bf30,"owner",0);
  atexit((_func_5014 *)&LAB_143e3d6dc);
  _DAT_14cb8bf58 = 0;
  uRam000000014cb8bf60 = 0;
  _DAT_14cb8bf68 = 0;
  DAT_14cb8bf70 = 0;
  uRam000000014cb8bf78 = 0;
  FUN_1446ddda2(&DAT_14cb8bf58,&DAT_14b42c8a7,0);
  atexit((_func_5014 *)&LAB_143e3d6ed);
  local_a8 = "target_list";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8bf80 = (ulonglong)uVar2;
  _DAT_14cb8bf90 = &LAB_143e3d6fe;
  _DAT_14cb8bf98 = 0x44340eb8;
  DAT_14cb8bf9c = 1;
  DAT_14cb8bf88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8bf88;
  atexit((_func_5014 *)&LAB_143e3d703);
  _DAT_14cb8bfb0 = &LAB_143e3e68c;
  _DAT_14cb8bfb8 = 0x45870800;
  DAT_14cb8bfbc = 1;
  DAT_14cb8bfa8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8bfa8;
  atexit((_func_5014 *)&LAB_143e3e691);
  ram0x00014cb8bfcc = 0;
  FUN_14052b5e0(&DAT_14cb8bfc8,"slot_machine_seed",0);
  _DAT_14cb8bfe0 = &LAB_143e3f87f;
  _DAT_14cb8bfe8 = 0x43e10000;
  DAT_14cb8bfec = 1;
  DAT_14cb8bfd8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8bfd8;
  atexit((_func_5014 *)&LAB_143e3f884);
  DAT_14cb8c058 = 0;
  _DAT_14cb8c060 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e43962;
  local_a8 = &DAT_14011fc1e;
  FUN_1461870e2(&local_a8);
  atexit((_func_5014 *)&LAB_143e3f8e1);
  _DAT_14cb8c0f0 = 0x47efffffe0000000;
  _DAT_14cb8c0f8 = 0x47efffffe0000000;
  _DAT_14cb8c100 = 0x47efffffe0000000;
  _DAT_14cb8c108 = 0x47efffffe0000000;
  _DAT_14cb8c110 = 0x47efffffe0000000;
  _DAT_14cb8c118 = 0x47efffffe0000000;
  _DAT_14cb8c120 = 0x47efffffe0000000;
  _DAT_14cb8c128 = 0x47efffffe0000000;
  _DAT_14cb8c130 = 0xffffffff;
  _DAT_14cb8c134 = 0;
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c158 = 0;
  _DAT_14cb8c160 = 0x400000000;
  atexit((_func_5014 *)&LAB_143e3f8e6);
  FUN_1446f470e(&DAT_14cb8c168,L"SpawnPoint",1);
  FUN_1446f470e(&DAT_14cb8c170,L"Initial",1);
  FUN_1446f470e(&DAT_14cb8c178,L"Spawning",1);
  FUN_1446f470e(&DAT_14cb8c180,L"Finished",1);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8c188);
  if (cVar1 == '\0') {
    _DAT_14cb8c188 = 0;
    uRam000000014cb8c190 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb8c198,L"IsSpawning",1);
  ram0x00014cb8c1a4 = 0;
  FUN_14052b5e0(&DAT_14cb8c1a0,"Completed",0);
  _DAT_14cb8c1b0 = "Completed";
  FUN_1446f470e(&DAT_14cb8c398,L"Territory",1);
  local_a8 = "SpawnerBehaviorMod";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8c1b8 = (ulonglong)uVar2;
  local_a8 = "Facts";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8c1c0 = (ulonglong)uVar2;
  local_a8 = "ForceCritical";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c1c8 = (ulonglong)uVar2;
  ram0x00014cb8c1d4 = 0;
  FUN_14052b5e0(&DAT_14cb8c1d0,"has_aggro",0);
  _DAT_14cb8c1e0 = "has_aggro";
  _DAT_14cb8c1ec = 0;
  FUN_14052b5e0(&DAT_14cb8c1e8,"spawner_state",0);
  _DAT_14cb8c1f8 = "spawner_state";
  FUN_1446f470e(&DAT_14cb8c200,L"idle",1);
  FUN_1446f470e(&DAT_14cb8c208,L"spawning",1);
  FUN_1446f470e(&DAT_14cb8c210,L"all_spawned",1);
  FUN_1446f470e(&DAT_14cb8c218,L"all_died",1);
  local_a8 = "Condition";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8c220 = (ulonglong)uVar2;
  local_a8 = "Encounter";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c228 = (ulonglong)uVar2;
  local_a8 = "SpawnerEnabledProperty";
  uStack_a0 = 0x16;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c230 = (ulonglong)uVar2;
  local_a8 = "ExternalOwner";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c238 = (ulonglong)uVar2;
  local_a8 = "nexus";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8c248 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb8c240,L"IsSpawning",1);
  DAT_14cb8c250 = 0;
  _DAT_14cb8c258 = 0;
  DAT_14cb8c260 = 0;
  _DAT_14cb8c268 = 0;
  DAT_14cb8c270 = 0;
  _DAT_14cb8c278 = 0;
  local_a8 = "DPS";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c358 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb8c280,L"On Max Charge");
  FUN_140056680(&local_a8,L"417459480c52409ba5996044ae140b77");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8c290);
  if (cVar1 == '\0') {
    _DAT_14cb8c290 = 0;
    uRam000000014cb8c298 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143e417ff);
  FUN_140056680(&DAT_14cb8c2a0,L"On Cap Reached");
  FUN_140056680(&local_a8,L"b082e089eddf47e3a994d0445dd6fe4c");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8c2b0);
  if (cVar1 == '\0') {
    _DAT_14cb8c2b0 = 0;
    uRam000000014cb8c2b8 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143e4189d);
  DAT_14cb8c2c0 = 0;
  atexit((_func_5014 *)&LAB_143e418ae);
  DAT_14cb8c3a0 = 0;
  _DAT_14cb8c300 = 0;
  uRam000000014cb8c308 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8c300);
  local_a8 = "time_remaining";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8c360 = (ulonglong)uVar2;
  local_a8 = (char *)0xb67a4b08105cd824;
  uStack_a0 = 0x7089a7bb;
  uStack_9c = 0x86de0580;
  _DAT_14cb8c310 = 0x105cd824;
  uRam000000014cb8c314 = 0xb67a4b08;
  uRam000000014cb8c318 = 0x7089a7bb;
  uRam000000014cb8c31c = 0x86de0580;
  FUN_141005458(&local_a8,0,L"GbxStatusEffectData",0);
  atexit((_func_5014 *)&LAB_143e418c6);
  FUN_140056680(&DAT_14cb8c320,L"On Push");
  FUN_140056680(&local_a8,L"7cd466b005774a9b8436e7985dfb3034");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8c330);
  if (cVar1 == '\0') {
    _DAT_14cb8c330 = 0;
    uRam000000014cb8c338 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143e418d2);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e46808 FUN_143e46808 body=73 status=ok
// SIG undefined FUN_143e46808(void)

void FUN_143e46808(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 2;
  *param_1 = &PTR_LAB_14b42f4f0;
  param_1[7] = *param_2;
  lVar1 = param_2[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf0;
  return;
}



// FUNCTION 143e46852 FUN_143e46852 body=819 status=ok
// SIG undefined FUN_143e46852(void)

undefined4 FUN_143e46852(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    lVar9 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)FUN_141483710();
    if ((plVar6 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
      if (plVar6 != (longlong *)0x0) goto LAB_143e468aa;
    }
    else {
      FUN_1456cec3c(plVar6);
LAB_143e468aa:
      lVar7 = FUN_1412bd57e();
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= (int)plVar6[7])) &&
         (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
        lVar7 = plVar6[0x22];
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          lVar7 = plVar6[0x22];
        }
        FUN_140b015bc(lVar7,&local_88,lVar9 + 0x50,0);
        if ((local_88 & 0x100000000) != 0) {
          uVar4 = rand();
          if ((float)(uVar4 & 0x7fff) / 32767.0 < (float)local_88) goto LAB_143e4692e;
        }
      }
    }
    uVar5 = 0;
  }
  else {
LAB_143e4692e:
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = 0;
    puVar8 = *(ulonglong **)(param_1 + 8);
    uVar2 = *puVar8;
    if (uVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
      puVar8 = *(ulonglong **)(param_1 + 8);
    }
    uVar3 = puVar8[2];
    local_88 = uVar2;
    if ((uVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(uVar3);
      puVar8 = *(ulonglong **)(param_1 + 8);
    }
    uVar2 = *puVar8;
    local_80 = uVar3;
    FUN_140cdcab8(uVar2);
    lVar9 = *(longlong *)(param_1 + 8);
    local_a0 = lVar9 + 0x20;
    local_98 = lVar9 + 0x50;
    iVar1 = *(int *)(uVar2 + 0x158);
    local_a8 = &local_58;
    local_90 = param_1;
    if ((longlong)iVar1 != 0) {
      lVar9 = *(longlong *)(uVar2 + 0x150);
      lVar7 = 0;
      do {
        plVar6 = *(longlong **)(lVar9 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          plVar10 = (longlong *)plVar6[0x22];
          if (plVar10 == (longlong *)0x0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            plVar10 = (longlong *)plVar6[0x22];
            if (plVar10 == (longlong *)0x0) goto LAB_143e469f9;
          }
          (**(code **)(*plVar10 + 0x2a0))(plVar10,&local_a8);
        }
LAB_143e469f9:
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    iVar1 = *(int *)(lVar9 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x38);
      lVar7 = 0;
      do {
        plVar6 = *(longlong **)(lVar9 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          plVar10 = (longlong *)plVar6[0x22];
          if (plVar10 == (longlong *)0x0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            plVar10 = (longlong *)plVar6[0x22];
            if (plVar10 == (longlong *)0x0) goto LAB_143e46a98;
          }
          local_a0 = *(longlong *)(param_1 + 8) + 0x38;
          local_98 = *(longlong *)(param_1 + 8) + 0x50;
          local_a8 = &local_58;
          local_90 = param_1;
          (**(code **)(*plVar10 + 0x2a0))(plVar10,&local_a8);
        }
LAB_143e46a98:
        lVar7 = lVar7 + 0x30;
      } while ((longlong)iVar1 * 0x30 != lVar7);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    lVar9 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x10))();
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_143e46b86(lVar9,&local_88);
    }
    FUN_1409ed859(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143e46b86 FUN_143e46b86 body=1036 status=ok
// SIG undefined FUN_143e46b86(void)

ulonglong FUN_143e46b86(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((~*(byte *)(param_1 + 0x18) & 0xc) != 0) || (*param_2 == 0)) ||
      (cVar5 = FUN_140cdc968(*param_2,param_2), cVar5 == '\0')) ||
     (cVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2), cVar5 == '\0')) {
    uVar10 = 0;
    goto LAB_143e46d9f;
  }
  lVar9 = *param_2;
  FUN_14094904c(param_1,&local_50,lVar9);
  if (local_50 == 0) {
    local_68 = param_1;
    FUN_141159280(lVar9,&local_60);
    plVar7 = local_48;
    plVar8 = local_58;
    local_50 = local_60;
    if (local_58 == (longlong *)0x0) {
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)0x0;
LAB_143e46ee2:
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000143e46f1d:
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      if (local_58 == local_48) {
        LOCK();
        plVar7 = local_58 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar7 = plVar8;
          goto joined_r0x000143e46f1d;
        }
      }
      else {
        local_48 = local_58;
        if (plVar7 != (longlong *)0x0) goto LAB_143e46ee2;
      }
    }
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = local_48;
    lVar4 = local_50;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar2 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
      FUN_1418af1fe(param_1 + 5,iVar2);
    }
    lVar3 = param_1[5];
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar4;
    *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    lVar4 = local_50;
    FUN_1412f28e8(param_1,&local_60,lVar9 + 0x130,1);
    FUN_143e418e4(lVar4,lVar9,param_1 + 1,&local_60);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  plVar7 = local_48;
  lVar9 = local_50;
  if (local_48 == (longlong *)0x0) {
    FUN_143e42540(local_50);
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_143e42540(lVar9);
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((longlong)(int)param_1[0x13] != 0) {
    plVar7 = param_1 + 0x12;
    lVar9 = 0;
    do {
      if ((*(int *)(param_1[0x12] + 8 + lVar9) != 0) && (*(longlong *)(param_1[0x12] + lVar9) != 0))
      {
        if ((param_1[1] == 0) || ((longlong *)param_1[2] == (longlong *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)param_1[2] + 8))();
        }
        FUN_143e4cee8(plVar7,uVar6,param_2);
        break;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)param_1[0x13] * 0x10 != lVar9);
  }
  plVar8 = (longlong *)param_2[1];
  uVar10 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  if (plVar8 != (longlong *)0x0 && plVar8 != (longlong *)param_1[1]) {
    uVar6 = FUN_140eca14a();
    plVar7 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140eca14a();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if ((plVar8 != (longlong *)0x0 && plVar7 != plVar8) &&
         (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0)) {
        if ((param_1[1] == 0) || ((longlong *)param_1[2] == (longlong *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)param_1[2] + 8))();
        }
        FUN_143e4cee8(lVar9 + 0xa8,uVar6,param_2);
      }
    }
  }
LAB_143e46d9f:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47006 FUN_143e47006 body=79 status=ok
// SIG undefined FUN_143e47006(void)

char FUN_143e47006(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x60);
  cVar4 = '\x01';
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      if (cVar4 == '\0') {
        return '\0';
      }
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  return cVar4;
}



// FUNCTION 143e47056 FUN_143e47056 body=172 status=ok
// SIG undefined FUN_143e47056(void)

undefined4 FUN_143e47056(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  if (*param_2 != 0 && (*(byte *)(param_1 + 0xc0) & 8) != 0) {
    FUN_14094904c(param_1,&local_30);
    if (local_30 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*local_30 + 0x68))(local_30,param_2 + 1);
      FUN_140ce80dc(local_30);
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47104 FUN_143e47104 body=803 status=ok
// SIG undefined FUN_143e47104(void)

undefined8 * FUN_143e47104(longlong param_1,undefined8 *param_2,longlong **param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)(param_1 + 0xa8);
  if (param_4 != '\x02') {
    plVar8 = (longlong *)(param_1 + 0x90);
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  if (&local_50 == param_3) {
    *param_2 = 0;
    goto LAB_143e47398;
  }
  local_40 = (longlong *)0x0;
  local_38 = 0;
  plVar4 = *param_3;
  if (plVar4 == (longlong *)0x0 || *(int *)(param_3 + 1) == 0) {
    plVar4 = (longlong *)0x0;
    iVar7 = 0;
LAB_143e4717c:
    local_38 = 0;
    local_40 = (longlong *)0x0;
    local_50 = plVar4;
    local_48 = iVar7;
LAB_143e47219:
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_40);
    iVar7 = local_38;
    plVar4 = local_40;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_143e4717c;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_50 = plVar4;
    local_48 = iVar7;
    if (local_38 == 0) goto LAB_143e47219;
    if (local_40 != (longlong *)0x0) {
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
      goto LAB_143e47219;
    }
  }
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0 || local_48 == 0) ||
     (cVar2 = (**(code **)(*local_50 + 0x30))(), cVar2 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_143e47398;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_143e47386;
    }
  }
  else {
    if (*(int *)((longlong)plVar8 + 0x14) < 1) {
      iVar7 = (int)plVar8[1];
      iVar3 = (int)plVar8[2] + -1;
      *(int *)(plVar8 + 2) = iVar3;
      if (iVar3 <= iVar7) {
        iVar3 = iVar7;
        if (0 < iVar7) {
          iVar5 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar5 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar8 + (longlong)iVar5 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar4 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar8,iVar5);
              FUN_14005b248(plVar8);
            }
            else {
              iVar5 = iVar5 + 1;
            }
            iVar3 = (int)plVar8[1];
          } while (iVar5 < iVar3);
        }
        iVar5 = 2;
        if (2 < iVar3 * 2) {
          iVar5 = iVar3 * 2;
        }
        *(int *)(plVar8 + 2) = iVar5;
        if ((iVar5 < iVar7) && (*(int *)((longlong)plVar8 + 0xc) != iVar3)) {
          FUN_14045812c(plVar8);
        }
      }
    }
    if (local_50 == (longlong *)0x0 || local_48 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      plVar4 = local_40;
    }
    *param_2 = plVar4;
    iVar7 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar7 + 1U) {
      FUN_1447a71f6(plVar8,iVar7);
    }
    lVar1 = *plVar8;
    lVar6 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *(undefined4 *)(lVar1 + 8 + lVar6) = 0;
    *(longlong **)(lVar1 + lVar6) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar1 + 8 + lVar6) = local_48;
LAB_143e47386:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143e47398:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e47428 FUN_143e47428 body=397 status=ok
// SIG undefined FUN_143e47428(void)

void FUN_143e47428(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(*param_2 + 0x68) = *(byte *)(*param_2 + 0x68) & 0xfb;
  lVar4 = *param_3;
  if (*(char *)(lVar4 + 8) != '\x01') goto LAB_143e47450;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  plVar6 = *(longlong **)(lVar4 + 0x18);
  if (plVar6 == (longlong *)0x0) {
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    plVar7 = *(longlong **)(lVar4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x50) = 0;
LAB_143e4756a:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000143e4755a:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    plVar7 = *(longlong **)(lVar4 + 0x50);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000143e4755a;
      }
    }
    else {
      *(longlong **)(lVar4 + 0x50) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_143e4756a;
    }
  }
  if (*(longlong *)(*param_2 + 0x48) != 0) {
    pbVar1 = (byte *)(*param_2 + 0x68);
    *pbVar1 = *pbVar1 | 4;
    local_38 = *param_2;
    plVar6 = (longlong *)param_2[1];
    local_30 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      FUN_14106e246(param_1,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_14106e246(param_1);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
  }
LAB_143e47450:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e475b6 FUN_143e475b6 body=49 status=ok
// SIG undefined FUN_143e475b6(void)

void FUN_143e475b6(void)

{
  FUN_14142a61b(DAT_14cb8c3c8,DAT_14cb8c3d0);
  if (DAT_14cb8c3c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e475e8 FUN_143e475e8 body=88 status=ok
// SIG undefined FUN_143e475e8(void)

ulonglong FUN_143e475e8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  if (param_1[1] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x10))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],param_2);
      if (cVar1 != '\0') {
        uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if ((char)param_1[4] == '\x01') {
          FUN_140c608a8(param_2 + 0x68,param_1 + 7);
        }
        goto LAB_143e47636;
      }
    }
  }
  uVar2 = 0;
LAB_143e47636:
  return uVar2 & 0xffffffff;
}



// FUNCTION 143e47640 FUN_143e47640 body=41 status=ok
// SIG undefined FUN_143e47640(void)

void FUN_143e47640(void)

{
  DAT_14cb8c430 = 0;
  if (DAT_14cb8c428 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6821e();
  return;
}



// FUNCTION 143e4766e FUN_143e4766e body=41 status=ok
// SIG undefined FUN_143e4766e(void)

void FUN_143e4766e(void)

{
  DAT_14cb8c520 = 0;
  if (DAT_14cb8c518 != 0) {
    FUN_1400020a8();
  }
  FUN_145d682bc();
  return;
}



// FUNCTION 143e4769d FUN_143e4769d body=41 status=ok
// SIG undefined FUN_143e4769d(void)

void FUN_143e4769d(void)

{
  DAT_14cb8c610 = 0;
  if (DAT_14cb8c608 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6835a();
  return;
}



// FUNCTION 143e476cc FUN_143e476cc body=141 status=ok
// SIG undefined FUN_143e476cc(void)

ulonglong FUN_143e476cc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = param_1;
  if (lVar4 == 0) {
    lVar5 = FUN_145cd9fe6();
    lVar4 = FUN_14477b664(lVar5);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  if (((*(longlong *)(param_1 + 0x18) != 0) || (plVar3 = (longlong *)0x0, lVar4 == 0)) ||
     (*(longlong *)(param_1 + 8) == 0)) goto LAB_143e476e8;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_143e47755:
    lVar4 = 0;
  }
  else {
    plVar3 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_143e47755;
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar3,(longlong *)(param_1 + 8));
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),lVar4 != 0);
LAB_143e476e8:
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 143e4779a FUN_143e4779a body=269 status=ok
// SIG undefined FUN_143e4779a(void)

void FUN_143e4779a(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x20;
  pppuVar2 = (undefined8 ***)FUN_14001cc68(0x20,0);
  *pppuVar2 = (undefined8 **)&DAT_14a171d50;
  pppuVar2[2] = (undefined8 **)0x0;
  pppuVar2[3] = (undefined8 **)0x0;
  pppuVar2[1] = *(undefined8 ***)(param_2 + 8);
  local_48[0] = pppuVar2;
  FUN_1406022fe(pppuVar2 + 2,param_2 + 0x10);
  *pppuVar2 = (undefined8 **)&PTR_FUN_14b0394b0;
  local_28 = 0x23;
  local_50 = FUN_140941f82();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  FUN_14095c1ce(param_1,&local_50,local_48,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e478a8 FUN_143e478a8 body=258 status=ok
// SIG undefined FUN_143e478a8(void)

void FUN_143e478a8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (ushort)DAT_14c9aac70;
  if (local_28 < 0x19) {
    pppuVar2 = local_40;
  }
  else {
    pppuVar2 = (undefined8 ***)FUN_14001cc68(DAT_14c9aac70 & 0xffff);
    local_40[0] = pppuVar2;
  }
  if (DAT_14c9aad08 == (code *)0x0) {
    memset(pppuVar2,0,(longlong)(int)DAT_14c9aac70);
  }
  else {
    (*DAT_14c9aad08)();
  }
  local_20 = 0x23;
  local_48 = FUN_140941f82();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_14095c1ce(param_1,&local_48,local_40,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e479ac FUN_143e479ac body=208 status=ok
// SIG undefined FUN_143e479ac(void)

undefined8 * FUN_143e479ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140528a12(param_1,param_3);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    FUN_143e47cc0(lVar1 + 8,&local_40);
    *param_2 = &DAT_14a171d50;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = local_38;
    FUN_1406022fe(param_2 + 2,&local_30);
    *param_2 = &PTR_FUN_14b0394b0;
    *(undefined1 *)(param_2 + 4) = 1;
    local_40 = &DAT_14a171d50;
    local_28 = 0;
    if (local_24 != 0) {
      FUN_140115c12(&local_30,0);
    }
    local_38 = 0;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47a7e FUN_143e47a7e body=170 status=ok
// SIG undefined FUN_143e47a7e(void)

undefined8 * FUN_143e47a7e(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411a0f6a(local_48);
  if (local_28 == '\x01') {
    *param_3 = 0;
    *param_1 = &DAT_14a171d50;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = local_40;
    FUN_1406022fe(param_1 + 2);
  }
  else {
    *param_3 = 1;
    FUN_1405c5fa2();
    param_1[1] = &DAT_14cb769e8;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_14b0394b0;
  FUN_145829d56(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47b2a FUN_143e47b2a body=254 status=ok
// SIG undefined FUN_143e47b2a(void)

longlong FUN_143e47b2a(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_88 [40];
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x20;
  pppuVar2 = (undefined8 ***)FUN_14001cc68(0x20,0);
  *pppuVar2 = (undefined8 **)&DAT_14a171d50;
  pppuVar2[2] = (undefined8 **)0x0;
  pppuVar2[3] = (undefined8 **)0x0;
  pppuVar2[1] = *(undefined8 ***)(param_3 + 8);
  local_60[0] = pppuVar2;
  FUN_1406022fe(pppuVar2 + 2,param_3 + 0x10);
  *pppuVar2 = (undefined8 **)&PTR_FUN_14b0394b0;
  local_40 = 0x23;
  FUN_14095c1ce(param_1 + 0x30,param_2,local_60,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_60;
    if (0x18 < local_48) {
      pppuVar2 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47c2a FUN_143e47c2a body=149 status=ok
// SIG undefined FUN_143e47c2a(void)

undefined8 * FUN_143e47c2a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_3 + 0x20) != '\0') {
    FUN_143e47cc0(param_3,&local_38);
    FUN_1405c5fa2();
    local_38 = &DAT_14a171d50;
    local_20 = 0;
    if (local_1c != 0) {
      FUN_140115c12(&local_28,0);
    }
    local_30 = 0;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47cc0 FUN_143e47cc0 body=289 status=ok
// SIG undefined FUN_143e47cc0(void)

undefined8 * FUN_143e47cc0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '#') {
    lVar1 = *param_1;
    *param_2 = &DAT_14a171d50;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = *(undefined8 *)(lVar1 + 8);
    FUN_1406022fe(param_2 + 2,lVar1 + 0x10);
    *param_2 = &PTR_FUN_14b0394b0;
  }
  else {
    FUN_1400b56fe(local_40,param_1,0x23);
    ppppuVar3 = (undefined8 ****)local_40[0];
    if (local_20 == 0) {
      ppppuVar3 = (undefined8 ****)&DAT_14cb77c70;
    }
    *param_2 = &DAT_14a171d50;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = ppppuVar3[1];
    FUN_1406022fe(param_2 + 2,ppppuVar3 + 2);
    *param_2 = &PTR_FUN_14b0394b0;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar3 = local_40;
      if (0x18 < local_28) {
        ppppuVar3 = (undefined8 ****)local_40[0];
      }
      (*pcVar2)(ppppuVar3);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e47de2 FUN_143e47de2 body=118 status=ok
// SIG undefined FUN_143e47de2(void)

undefined8 FUN_143e47de2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          uVar1 = FUN_1412daff8(lVar4,param_2);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e47e58 FUN_143e47e58 body=240 status=ok
// SIG undefined FUN_143e47e58(void)

undefined4 FUN_143e47e58(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_140eca14a();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140eca14a();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar2 = 0;
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xc0) & 8) != 0)) {
          FUN_14094904c(lVar6,&local_30,*(undefined8 *)(param_2 + 8));
          if (local_30 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_140ea9968(local_30,param_2);
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_28 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar1 = (int *)((longlong)local_28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_28 + 0x10))(local_28);
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e47f49 FUN_143e47f49 body=41 status=ok
// SIG undefined FUN_143e47f49(void)

void FUN_143e47f49(void)

{
  DAT_14cb8c770 = 0;
  if (DAT_14cb8c768 != 0) {
    FUN_1400020a8();
  }
  FUN_145d683f8();
  return;
}



// FUNCTION 143e48046 FUN_143e48046 body=57 status=ok
// SIG undefined FUN_143e48046(void)

void FUN_143e48046(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 143e48080 FUN_143e48080 body=232 status=ok
// SIG undefined FUN_143e48080(void)

void FUN_143e48080(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406ff33a();
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xc0);
  lVar3 = FUN_14030a1e6(*(longlong *)(param_1 + 0x48) + 0xa8,*(longlong *)(param_1 + 0x40) + 0x240);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0xc);
    *(uint *)(param_1 + 0x60) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 100) = iVar2;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4816a FUN_143e4816a body=562 status=ok
// SIG undefined FUN_143e4816a(void)

void FUN_143e4816a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  float fVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  uint local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar5 = FUN_14095dd8e(lVar2 + 0x80);
  if ((lVar5 != 0) && (0 < *(int *)(lVar2 + 200))) {
    local_87 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
    local_8c = *(undefined4 *)(param_1 + 0x58);
    lVar5 = *param_2;
    lStack_a0 = param_2[1];
    local_94 = 0x3f80000000000000;
    local_88 = 1;
    uVar3 = (uint)lStack_a0;
    uVar10 = 0;
    local_a8 = lVar5;
    if ((uint)lStack_a0 == 0) {
LAB_143e48229:
      local_98 = uVar10;
      if (uVar10 < (uint)lStack_a0) {
        do {
          uVar10 = local_98;
          lVar6 = FUN_14030a32e((longlong)(int)local_98 * 0x38 + lVar5);
          fVar11 = -1.0;
          if (lVar6 != 0) {
            uVar7 = FUN_140eca14a(extraout_XMM0_Da,0xbf800000);
            lVar8 = FUN_144718840(lVar6,uVar7);
            fVar11 = -1.0;
            if (lVar8 != 0) {
              if (((*(char *)(lVar2 + 0xcc) == '\x01') && (*(int *)(param_1 + 100) != 0)) &&
                 (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) {
                uVar7 = 0;
                if ((int)uVar1 < DAT_14c9647dc) {
                  puVar9 = (undefined8 *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if (((puVar9 == (undefined8 *)0x0) ||
                      (*(int *)(puVar9 + 2) != *(int *)(param_1 + 100))) ||
                     ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143e482e0;
                  uVar7 = *puVar9;
                }
              }
              else {
LAB_143e482e0:
                uVar7 = 0;
              }
              iVar4 = FUN_140948ece(lVar6,0xbf800000,*(char *)(lVar2 + 0xcc),uVar7);
              fVar11 = (float)(iVar4 / *(int *)(lVar2 + 200));
              if (1.0 <= fVar11) {
                fVar11 = 1.0;
              }
              if (fVar11 <= 0.0) {
                fVar11 = 0.0;
              }
            }
          }
          FUN_14023b10e(&local_a8,fVar11);
          local_98 = uVar10 + 1;
          if ((local_98 < uVar3) &&
             ((*(byte *)(lVar5 + 0x34 + (longlong)(int)local_98 * 0x38) & 1) != 0)) {
            uVar10 = uVar10 + 2;
            do {
              local_98 = uVar3;
              if (uVar3 == uVar10) break;
              lVar6 = (longlong)(int)uVar10;
              local_98 = uVar10;
              uVar10 = uVar10 + 1;
            } while ((*(byte *)(lVar5 + 0x34 + lVar6 * 0x38) & 1) != 0);
          }
        } while (local_98 < uVar3);
      }
    }
    else {
      do {
        if ((*(byte *)(lVar5 + 0x34 + (longlong)(int)uVar10 * 0x38) & 1) == 0) goto LAB_143e48229;
        uVar10 = uVar10 + 1;
      } while ((uint)lStack_a0 != uVar10);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e483b2 FUN_143e483b2 body=80 status=ok
// SIG undefined FUN_143e483b2(void)

void FUN_143e483b2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if ((*(char *)(lVar2 + 8 + lVar4) == '\x03') &&
         (plVar3 = *(longlong **)(lVar2 + lVar4), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 143e48402 FUN_143e48402 body=80 status=ok
// SIG undefined FUN_143e48402(void)

void FUN_143e48402(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if ((*(char *)(lVar2 + 8 + lVar4) == '\x05') &&
         (plVar3 = *(longlong **)(lVar2 + lVar4), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 143e48452 FUN_143e48452 body=213 status=ok
// SIG undefined FUN_143e48452(void)

void FUN_143e48452(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    bVar4 = false;
    do {
      if (((*(char *)(lVar2 + 8 + lVar7) == '\x01') &&
          (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) &&
         ((bVar4 || (cVar5 = (**(code **)(*plVar3 + 0x98))(plVar3,*param_2), cVar5 == '\0')))) {
        bVar4 = true;
      }
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar7);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = 0;
      do {
        if ((*(char *)(lVar2 + 8 + lVar7) == '\x03') &&
           (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
          plVar6 = &DAT_14cb8c878;
          if (bVar4) {
            plVar6 = &DAT_14cb8c880;
          }
          if ((*plVar6 == 0) || (*plVar6 == *(longlong *)(lVar2 + 0xc + lVar7))) {
            (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
          }
        }
        lVar7 = lVar7 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar7);
    }
  }
  return;
}



// FUNCTION 143e48528 FUN_143e48528 body=213 status=ok
// SIG undefined FUN_143e48528(void)

void FUN_143e48528(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    bVar4 = false;
    do {
      if (((*(char *)(lVar2 + 8 + lVar7) == '\x01') &&
          (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) &&
         ((bVar4 || (cVar5 = (**(code **)(*plVar3 + 0x98))(plVar3,*param_2), cVar5 == '\0')))) {
        bVar4 = true;
      }
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar7);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = 0;
      do {
        if ((*(char *)(lVar2 + 8 + lVar7) == '\x05') &&
           (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
          plVar6 = &DAT_14cb8c888;
          if (bVar4) {
            plVar6 = &DAT_14cb8c890;
          }
          if ((*plVar6 == 0) || (*plVar6 == *(longlong *)(lVar2 + 0xc + lVar7))) {
            (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
          }
        }
        lVar7 = lVar7 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar7);
    }
  }
  return;
}



// FUNCTION 143e485fe FUN_143e485fe body=451 status=ok
// SIG undefined FUN_143e485fe(void)

bool FUN_143e485fe(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = rand();
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,*(undefined8 *)(param_2 + 0x10));
  pfVar6 = &local_90;
  FUN_1448729ea(param_1 + 0x48,pfVar6,local_c0);
  if (local_70 == 3) {
    uVar4 = 3;
    fVar7 = local_90;
  }
  else {
    pfVar5 = &local_68;
    FUN_1400b56fe(pfVar5,&local_90,3);
    fVar7 = 0.0;
    if (local_48 != 0) {
      fVar7 = local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        pfVar5 = (float *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(pfVar5);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar4 = (uint)local_70;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      pfVar6 = (float *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(pfVar6);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return (float)(uVar3 & 0x7fff) / 32767.0 < fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e487c2 FUN_143e487c2 body=347 status=ok
// SIG undefined FUN_143e487c2(void)

undefined4 FUN_143e487c2(longlong param_1,longlong param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar4 = FUN_1412bd57e();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      local_60 = *(longlong *)(param_1 + 0x48);
      if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_143e4881e;
    }
  }
  local_60 = 0;
LAB_143e4881e:
  lVar5 = FUN_140528a12(param_2 + 0x48,&local_60);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(lVar5 + 0x28) == '\x03') {
      fVar7 = *(float *)(lVar5 + 8);
    }
    else {
      pfVar6 = &local_58;
      FUN_1400b56fe(pfVar6,(float *)(lVar5 + 8),3);
      fVar7 = 0.0;
      if (local_38 != 0) {
        fVar7 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          pfVar6 = (float *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(pfVar6);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    uVar2 = rand();
    uVar3 = CONCAT31((int3)((uVar2 & 0x7fff) >> 8),(float)(uVar2 & 0x7fff) / 32767.0 < fVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4891e FUN_143e4891e body=688 status=ok
// SIG undefined FUN_143e4891e(void)

ulonglong FUN_143e4891e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined8 *_Src;
  float fVar6;
  undefined1 auStack_d8 [32];
  float local_b8;
  char local_b4;
  undefined8 local_b0;
  undefined8 ***local_a8 [3];
  ushort local_90;
  byte local_88;
  byte local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78[0] = (undefined8 ***)param_1[1];
  if (((undefined8 ****)local_78[0] != (undefined8 ****)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar3 = (undefined8 *)FUN_140528a12(param_2 + 0x48,local_78);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0;
    goto LAB_143e48a7a;
  }
  local_b0 = *puVar3;
  _Src = puVar3 + 1;
  bVar1 = *(byte *)(puVar3 + 5);
  local_90 = *(ushort *)(puVar3 + 4);
  ppppuVar4 = local_a8;
  if (0x18 < local_90) {
    local_a8[0] = (undefined8 ***)FUN_14001cc68(local_90,0);
    _Src = (undefined8 *)*_Src;
    ppppuVar4 = (undefined8 ****)local_a8[0];
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar2 == (code *)0x0) {
    memcpy(ppppuVar4,_Src,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
  }
  else {
    (*pcVar2)(ppppuVar4,_Src);
  }
  local_88 = *(byte *)(puVar3 + 5);
  local_80 = 1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_b8,param_2);
  uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_b4);
  if (local_b4 == '\x01') {
    if (local_88 == 3) {
      fVar6 = local_a8[0]._0_4_ + local_b8;
LAB_143e48a2e:
      local_a8[0] = (undefined8 ***)CONCAT44(local_a8[0]._4_4_,fVar6);
    }
    else {
      FUN_1400b56fe(local_78,local_a8,3);
      fVar6 = 0.0;
      if (local_58 != 0) {
        fVar6 = local_78[0]._0_4_;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar4 = local_78;
        if (0x18 < local_60) {
          ppppuVar4 = (undefined8 ****)local_78[0];
        }
        (*pcVar2)(ppppuVar4);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      fVar6 = fVar6 + local_b8;
      if (local_88 == 3) goto LAB_143e48a2e;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar4 = local_a8;
        if (0x18 < local_90) {
          ppppuVar4 = (undefined8 ****)local_a8[0];
        }
        (*pcVar2)(ppppuVar4);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8[0]);
      }
      local_90 = 4;
      local_a8[0] = (undefined8 ***)CONCAT44(local_a8[0]._4_4_,fVar6);
      local_88 = 3;
    }
    FUN_14095c314(param_2 + 0x48,&local_b0,1);
  }
  if ((local_80 & 1) != 0) {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar4 = local_a8;
      if (0x18 < local_90) {
        ppppuVar4 = (undefined8 ****)local_a8[0];
      }
      (*pcVar2)(ppppuVar4);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8[0]);
    }
  }
LAB_143e48a7a:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 143e48cf6 FUN_143e48cf6 body=113 status=ok
// SIG undefined FUN_143e48cf6(void)

undefined8 FUN_143e48cf6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e48d7a FUN_143e48d7a body=898 status=ok
// SIG undefined FUN_143e48d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143e48d7a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *param_3;
  plVar9 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b4308f0;
  FUN_1412c9766(plVar9 + 2,uVar4);
  plVar12 = plVar9 + 2;
  *plVar12 = (longlong)&PTR_FUN_14b430910;
  *(undefined1 *)(plVar9 + 0x12) = 0;
  plVar9[0x14] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x94) = 0;
  *(undefined1 *)((longlong)plVar9 + 0x9c) = 0;
  if ((plVar12 != (longlong *)0x0) &&
     (((plVar9[3] == 0 || (plVar9[4] == 0)) || (*(int *)(plVar9[4] + 8) < 1)))) {
    if (plVar9 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar10 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_143e4906e:
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *plVar13 = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_143e48e41;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar9[3] = (longlong)plVar12;
      if ((longlong *)plVar9[4] != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar9[4] != (longlong *)0x0) {
          plVar13 = plVar9 + 4;
          plVar10 = (longlong *)plVar9[4];
          goto LAB_143e4906e;
        }
        plVar9[4] = (longlong)plVar9;
      }
LAB_143e48e41:
      LOCK();
      plVar13 = plVar9 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  if (plVar9 == (longlong *)0x0) {
    *local_50 = &PTR_LAB_14b4309b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_50[2] = lVar11;
    *local_50 = &PTR_FUN_14b430940;
    local_50[3] = 0x10;
    local_50[4] = 0;
    local_50[5] = &LAB_14032719e;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *local_50 = &PTR_LAB_14b4309b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_50[2] = lVar11;
    *local_50 = &PTR_FUN_14b430940;
    local_50[3] = plVar12;
    local_50[4] = plVar9;
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
    local_50[5] = &LAB_14032719e;
    *(undefined4 *)(local_50 + 6) = 0;
    LOCK();
    plVar13 = plVar9 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  iVar3 = *(int *)(param_3 + 3);
  *(uint *)(param_3 + 3) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0x1c) < iVar3 + 1U) {
    FUN_1418b08da(param_3 + 2,iVar3);
  }
  uVar5 = *(undefined4 *)(param_1 + 100);
  uVar6 = *(undefined4 *)(param_1 + 0x68);
  uVar7 = *(undefined4 *)(param_1 + 0x6c);
  puVar2 = (undefined4 *)(param_3[2] + (longlong)iVar3 * 0x20);
  *puVar2 = *(undefined4 *)(param_1 + 0x60);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(puVar2 + 4) = 0;
  puVar2[6] = 0;
  FUN_140ba2f58(puVar2 + 4,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143e48f84;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e48f84:
  *param_2 = plVar12;
  param_2[1] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e490fe FUN_143e490fe body=73 status=ok
// SIG undefined FUN_143e490fe(void)

void FUN_143e490fe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b3ef590;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = *param_3;
  lVar1 = param_3[1];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf9;
  return;
}



// FUNCTION 143e49148 FUN_143e49148 body=90 status=ok
// SIG undefined FUN_143e49148(void)

undefined8 FUN_143e49148(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((((*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) && (*(int *)(lVar2 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x1c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143e4919e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143e491b4 FUN_143e491b4 body=110 status=ok
// SIG undefined FUN_143e491b4(void)

void FUN_143e491b4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x40) * 0x18;
    do {
      if ((longlong)*(int *)(lVar2 + 0x10) != 0) {
        lVar4 = (longlong)*(int *)(lVar2 + 0x10) << 4;
        lVar3 = *(longlong *)(lVar2 + 8) + 8;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar3,0,0);
          lVar3 = lVar3 + 0x10;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 143e49222 FUN_143e49222 body=348 status=ok
// SIG undefined FUN_143e49222(void)

undefined8 FUN_143e49222(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e49274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return uVar4;
}



// FUNCTION 143e4937e FUN_143e4937e body=346 status=ok
// SIG undefined FUN_143e4937e(void)

void FUN_143e4937e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e493d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return;
}



// FUNCTION 143e494d8 FUN_143e494d8 body=346 status=ok
// SIG undefined FUN_143e494d8(void)

void FUN_143e494d8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4952a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}



// FUNCTION 143e49636 FUN_143e49636 body=1715 status=ok
// SIG undefined FUN_143e49636(void)

void FUN_143e49636(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  code *local_150;
  undefined8 local_148 [3];
  undefined8 local_130;
  undefined8 local_128 [3];
  undefined8 local_110 [3];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_2 == 0) || (lVar12 = *(longlong *)(param_2 + 0xa8), lVar12 == 0)) goto LAB_143e49b8f;
  if (DAT_14cb5b388 == 0) {
    local_160 = &local_b8;
    local_b8 = FUN_141864c34;
    local_150 = FUN_14081d0ea;
    local_158 = &LAB_146431698;
    local_168 = &LAB_1486775cb;
    local_170 = &LAB_1464cee35;
    local_178 = &DAT_149e063b2;
    local_180 = 0;
    local_188 = CONCAT44(local_188._4_4_,0x10000005);
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x10);
    local_198 = CONCAT44(local_198._4_4_,0x3a20);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  lVar6 = *(longlong *)(lVar12 + 0x10);
  if ((*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
     (lVar6 = *(longlong *)(lVar6 + 0x30), lVar8 = lVar12,
     *(longlong *)(lVar6 + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) {
    lVar8 = 0;
  }
  cVar5 = FUN_143e49cea(lVar8,CONCAT71((int7)((ulonglong)lVar6 >> 8),
                                       *(undefined1 *)(param_1 + 0x128)),
                        *(undefined1 *)(param_1 + 0x129));
  if ((cVar5 == '\0') ||
     ((*(char *)(param_1 + 0x118) == '\0' && (cVar5 = FUN_140b329fc(param_2), cVar5 == '\0'))))
  goto LAB_143e49b8f;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_14026e798(&local_b8,lVar12);
    if ((local_b8 != (code *)0x0) && (lVar6 = FUN_140b335c8(local_b8,param_1 + 0x70), lVar6 != 0)) {
      lVar12 = lVar6;
    }
    if (uStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_b0)(uStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)uStack_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
        }
      }
    }
  }
  local_e0 = *(undefined4 *)(param_1 + 0x48);
  local_e8 = *(undefined8 *)(param_1 + 0x40);
  local_d8 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x58));
  local_d0 = FUN_14477b664(uVar7);
  local_c8 = *(undefined8 *)(param_1 + 0x60);
  lVar6 = *(longlong *)(param_1 + 0x68);
  local_c0 = lVar6;
  if ((lVar6 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar2 = *(int **)(lVar6 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar10 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar6);
        goto LAB_143e497a2;
      }
      iVar10 = 2;
    }
    LOCK();
    piVar2[2] = iVar10;
    UNLOCK();
  }
LAB_143e497a2:
  if ((((lVar8 != 0) && (*(longlong **)(lVar8 + 0x11e8) != (longlong *)0x0)) &&
      (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x11e8) + 0xdc0))(), lVar8 != 0)) &&
     (*(int *)(lVar8 + 0x4a0) != *(int *)(lVar8 + 0x4cc))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar14 = (uint)lVar3 & 0xffff;
    lVar11 = lVar8 + 0x4d0;
    if (*(longlong *)(lVar8 + 0x4d8) != 0) {
      lVar11 = *(longlong *)(lVar8 + 0x4d8);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(lVar8 + 0x4e0) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar14) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = *(longlong *)(lVar8 + 0x498) + (longlong)iVar10 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x498) + (longlong)iVar10 * 0x40) == lVar3) {
          if ((undefined8 *)(lVar11 + 8) == (undefined8 *)0x0 || lVar11 == 0) break;
          local_e0 = *(undefined4 *)(lVar11 + 0x10);
          local_e8 = *(undefined8 *)(lVar11 + 8);
          local_d8 = *(undefined8 *)(lVar11 + 0x18);
          uVar7 = FUN_14477b664(*(undefined8 *)(lVar11 + 0x20));
          local_d0 = FUN_14477b664(uVar7);
          local_c8 = *(undefined8 *)(lVar11 + 0x28);
          if ((lVar6 != 0 & DAT_14cb26569) == 1) {
            FUN_1400848c0(*(undefined8 *)(lVar6 + 0x50),lVar6);
          }
          local_c0 = *(longlong *)(lVar11 + 0x30);
          if ((local_c0 == 0) || ((DAT_14cb26569 & 1) == 0)) break;
          piVar2 = *(int **)(local_c0 + 0x50);
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          if (DAT_14cb259f8 == 0) {
            iVar10 = 5;
          }
          else {
            if ((char)piVar2[1] != '\x01') {
              FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
              break;
            }
            iVar10 = 2;
          }
          LOCK();
          piVar2[2] = iVar10;
          UNLOCK();
          break;
        }
        iVar10 = *(int *)(lVar11 + 0x38);
      } while (iVar10 != -1);
    }
  }
  lVar6 = *(longlong *)(lVar12 + 0x1c8);
  if (lVar6 == 0) {
    local_a8 = DAT_14c8464f0;
    local_b8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_b0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_b8 = *(code **)(lVar6 + 0x260);
    uStack_b0 = *(longlong **)(lVar6 + 0x268);
    local_a8 = *(undefined8 *)(lVar6 + 0x270);
  }
  uVar7 = FUN_1447210f0(lVar12);
  FUN_14026e798(local_f8,lVar12);
  uVar9 = FUN_140206ee8(&local_e8,local_f8);
  cVar5 = FUN_140849a6e(uVar9,uVar7,&local_b8);
  if (cVar5 != '\0') {
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 == 2) {
      local_b8 = (code *)0x0;
      uStack_b0 = (longlong *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0x3ff0000000000000;
      uStack_60 = 0;
      local_58 = 0x3f800000;
      local_50 = 0;
      local_4c = 0;
      if (*(longlong *)(param_4 + 0x18) == 0) {
        local_130 = *(undefined8 *)(param_1 + 0x110);
      }
      else {
        FUN_1407f8cf8(*(longlong *)(param_4 + 0x18),&local_130,(undefined8 *)(param_1 + 0x110),1);
      }
      local_198 = local_198 & 0xffffffffffffff00;
      puVar13 = local_148;
LAB_143e49b4a:
      local_188 = 0;
      local_190 = &local_b8;
      FUN_140b3303c(puVar13,lVar12,&local_e8,&local_130);
    }
    else {
      if (iVar10 == 1) {
        local_b8 = (code *)0x0;
        uStack_b0 = (longlong *)0x0;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_9c = 0x3ff00000;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_74 = 0x3ff00000;
        uStack_70 = 0;
        uStack_6c = 0x3ff00000;
        local_68 = 0x3ff0000000000000;
        uStack_60 = 0;
        local_58 = 0x3f800000;
        local_50 = 0;
        local_4c = 0;
        if (*(longlong *)(param_4 + 0x18) == 0) {
          local_130 = *(undefined8 *)(param_1 + 0x110);
        }
        else {
          FUN_1407f8cf8(*(longlong *)(param_4 + 0x18),&local_130,(undefined8 *)(param_1 + 0x110),1);
        }
        local_198 = CONCAT71(local_198._1_7_,1);
        puVar13 = local_128;
        goto LAB_143e49b4a;
      }
      if (iVar10 != 0) goto LAB_143e49b70;
      local_198 = 0;
      puVar13 = local_110;
      FUN_140b32deb(puVar13,lVar12,&local_e8,*(undefined8 *)(param_1 + 0x7c));
    }
    *puVar13 = 0;
    puVar13[1] = 0xffffffffffffffff;
  }
LAB_143e49b70:
  if ((local_c0 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_c0 + 0x50));
  }
LAB_143e49b8f:
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e49cea FUN_143e49cea body=123 status=ok
// SIG undefined FUN_143e49cea(void)

ulonglong FUN_143e49cea(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_2 & param_3) != 0) goto LAB_143e49d5b;
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x11e8), lVar1 != 0)) &&
     ((param_2 != 0 || (cVar3 = FUN_1411a2d84(lVar1), cVar3 == '\0')))) {
    if (param_3 != 0) goto LAB_143e49d5b;
    if ((*(longlong *)(&DAT_00001ce8 + lVar1) == 0) ||
       (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar1) + 0x178) < 2)) {
      cVar3 = *(char *)(lVar1 + 0x1ee9);
    }
    else {
      plVar2 = *(longlong **)(lVar1 + 0x1eb8);
      if (plVar2 == (longlong *)0x0) goto LAB_143e49d5b;
      cVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,1);
    }
    if (cVar3 == '\0') goto LAB_143e49d5b;
  }
  uVar4 = 0;
LAB_143e49d5b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143e49d66 FUN_143e49d66 body=1592 status=ok
// SIG undefined FUN_143e49d66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143e49d66(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  double *pdVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  code **local_220;
  undefined4 local_218;
  ulonglong local_210;
  undefined2 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  undefined1 *local_1e8;
  code *local_1e0;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined1 local_198 [16];
  double local_188;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined1 local_158 [24];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  code *local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar1 = *(undefined1 *)(param_1 + 0xd8);
  uVar2 = *(undefined1 *)(param_1 + 0xd9);
  lVar7 = param_2[0x15];
  if (lVar7 == 0) {
LAB_143e49dfa:
    lVar7 = 0;
  }
  else {
    if (DAT_14cb5b388 == 0) {
      local_1f0 = &local_128;
      local_128 = FUN_141864c34;
      local_1e0 = FUN_14081d0ea;
      local_1e8 = &LAB_146431698;
      local_1f8 = &LAB_1486775cb;
      local_200 = &LAB_1464cee35;
      local_208 = &DAT_149e063b2;
      local_210 = 0;
      local_218 = 0x10000005;
      local_220 = (code **)CONCAT44(local_220._4_4_,0x10);
      local_228 = (undefined8 *)CONCAT44(local_228._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) goto LAB_143e49dfa;
  }
  cVar6 = FUN_143e49cea(lVar7,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if (cVar6 != '\0') {
    FUN_1489a0002(param_1,&local_a0,param_2);
    if (local_a0 != (longlong *)0x0) {
      cVar6 = FUN_14820a79e(param_1);
      if (cVar6 != '\0') {
        if (param_4 == 0) {
          local_a8 = *(undefined8 *)(param_1 + 0xc4);
          local_1c8 = *(double *)(param_1 + 0x40);
          uStack_1c0 = *(double *)(param_1 + 0x48);
          local_1d0 = *(double *)(param_1 + 0x50);
          local_b8 = *(double *)(param_1 + 0x68);
          local_c8 = *(undefined4 *)(param_1 + 0x58);
          uStack_c4 = *(undefined4 *)(param_1 + 0x5c);
          uStack_c0 = *(undefined4 *)(param_1 + 0x60);
          uStack_bc = *(undefined4 *)(param_1 + 100);
          auVar16 = *(undefined1 (*) [16])(param_1 + 0xa0);
          uVar12 = *(uint *)(param_1 + 0xb0);
          uVar13 = *(uint *)(param_1 + 0xb4);
          uVar14 = *(undefined4 *)(param_1 + 0xb8);
          uVar15 = *(undefined4 *)(param_1 + 0xbc);
        }
        else {
          FUN_1407f8cf8(param_4,&local_a8,param_1 + 0xc4,1);
          cVar6 = *(char *)(param_4 + 0xc0);
          local_1c8 = *(double *)(param_1 + 0x40);
          uStack_1c0 = *(double *)(param_1 + 0x48);
          local_1d0 = *(double *)(param_1 + 0x50);
          if (cVar6 == '\x02') {
            pdVar8 = (double *)&uStack_1c0;
LAB_143e4a23e:
            *pdVar8 = -*pdVar8;
          }
          else {
            if (cVar6 == '\x01') {
              pdVar8 = (double *)&local_1c8;
              goto LAB_143e4a23e;
            }
            if (cVar6 == '\x03') {
              pdVar8 = &local_1d0;
              goto LAB_143e4a23e;
            }
          }
          FUN_1478d46a8(&local_c8,param_1 + 0x58);
          cVar6 = *(char *)(param_4 + 0xc0);
          auVar16 = *(undefined1 (*) [16])(param_1 + 0xa0);
          uVar3 = auVar16._0_8_;
          uVar4 = auVar16._8_8_;
          uVar12 = *(uint *)(param_1 + 0xb0);
          uVar13 = *(uint *)(param_1 + 0xb4);
          uVar14 = *(undefined4 *)(param_1 + 0xb8);
          uVar15 = *(undefined4 *)(param_1 + 0xbc);
          if (cVar6 == '\x02') {
            auVar16._8_8_ = uVar4;
            auVar16._0_8_ = uVar3 ^ DAT_149931e80;
LAB_143e4a294:
            uVar12 = (uint)DAT_149931e80 ^ uVar12;
            uVar13 = DAT_149931e80._4_4_ ^ uVar13;
          }
          else if (cVar6 == '\x03') {
            auVar16._0_8_ = uVar3 ^ 0x8000000000000000;
            auVar16._8_8_ = uVar4 ^ 0x8000000000000000;
          }
          else if (cVar6 == '\x01') {
            auVar5._8_8_ = uVar4 ^ DAT_149931e80._8_8_;
            auVar5._0_8_ = uVar3 ^ DAT_149931e80;
            auVar16 = blendpd(auVar16,auVar5,2);
            goto LAB_143e4a294;
          }
        }
        if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
          (**(code **)(*param_2 + 0x4a8))(param_2,&local_128,local_a8,0);
          local_140 = 0x3ff0000000000000;
          local_138 = 0x3ff0000000000000;
          local_130 = 0x3ff0000000000000;
          dVar9 = auVar16._0_8_;
          dVar10 = auVar16._8_8_;
          dVar11 = dVar9 * local_118 * 1.0 +
                   (double)CONCAT44(uVar15,uVar14) * dStack_120 +
                   (double)CONCAT44(uVar13,uVar12) * (double)local_128 * -1.0 + dVar10 * dStack_110;
          local_168 = (double)CONCAT44(uVar15,uVar14) * local_118 * 1.0 +
                      (((double)local_128 * dVar10 * 1.0 +
                       dStack_110 * (double)CONCAT44(uVar13,uVar12)) - dVar9 * dStack_120);
          dStack_160 = (double)CONCAT44(uVar13,uVar12) * local_118 * -1.0 +
                       (((double)local_128 * dVar9 * -1.0 +
                        dStack_110 * (double)CONCAT44(uVar15,uVar14)) - dVar10 * dStack_120);
          local_178._8_4_ = SUB84(dVar11,0);
          local_178._0_8_ =
               dVar10 * local_118 * -1.0 +
               (double)CONCAT44(uVar13,uVar12) * dStack_120 +
               (double)CONCAT44(uVar15,uVar14) * (double)local_128 * 1.0 + dVar9 * dStack_110;
          local_178._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          FUN_1448052ee(local_178,local_158);
          local_e8 = local_1c8 * local_e8;
          dStack_e0 = uStack_1c0 * dStack_e0;
          local_d8 = local_1d0 * local_d8;
          dVar9 = dStack_e0 * (double)local_128 - local_e8 * dStack_120;
          dVar10 = local_d8 * dStack_120 - dStack_e0 * local_118;
          dVar11 = local_e8 * local_118 - (double)local_128 * local_d8;
          dVar10 = dVar10 + dVar10;
          dVar11 = dVar11 + dVar11;
          dVar9 = dVar9 + dVar9;
          dStack_100 = (local_118 * dVar10 - (double)local_128 * dVar9) +
                       dStack_110 * dVar11 + dStack_e0 + dStack_100;
          local_188 = dVar9 * dStack_110 + local_d8 +
                      (dVar11 * (double)local_128 - dVar10 * dStack_120) + local_f8;
          local_198._8_4_ = SUB84(dStack_100,0);
          local_198._0_8_ =
               (dVar9 * dStack_120 - dVar11 * local_118) + dStack_110 * dVar10 + local_e8 +
               local_108;
          local_198._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
          lVar7 = param_2[0x16];
          if (lVar7 == 0) {
            lVar7 = FUN_1448abda6(param_2);
          }
          local_208 = (undefined2 *)CONCAT71(local_208._1_7_,1);
          local_218 = CONCAT31(local_218._1_3_,1);
          local_220 = (code **)CONCAT71(local_220._1_7_,1);
          local_228 = &local_140;
          local_210 = local_210 & 0xffffffffffffff00;
          lVar7 = FUN_140416e90(lVar7,local_a0,local_198,local_158);
        }
        else {
          local_228 = (undefined8 *)local_178;
          local_168 = local_b8;
          local_178._4_4_ = uStack_c4;
          local_178._0_4_ = local_c8;
          local_178._12_4_ = uStack_bc;
          local_178._8_4_ = uStack_c0;
          local_220 = &local_128;
          local_128 = (code *)0x3ff0000000000000;
          dStack_120 = 1.0;
          local_118 = 1.0;
          local_98 = (undefined4)local_1c8;
          uStack_94 = local_1c8._4_4_;
          uStack_90 = (undefined4)uStack_1c0;
          uStack_8c = uStack_1c0._4_4_;
          local_88 = local_1d0;
          local_1f8 = (undefined1 *)CONCAT71(local_1f8._1_7_,1);
          local_200 = (undefined1 *)CONCAT71(local_200._1_7_,1);
          local_210 = CONCAT71(local_210._1_7_,1);
          local_208 = (undefined2 *)((ulonglong)local_208 & 0xffffffffffffff00);
          local_218 = 0;
          lVar7 = FUN_140e3e448(local_a0,param_2,local_a8);
        }
        if (lVar7 != 0) {
          FUN_140583e18(lVar7,*(undefined1 *)(param_1 + 0x88));
          local_1a8 = *(undefined8 *)(param_1 + 0x80);
          local_1b8 = *(undefined4 *)(param_1 + 0x70);
          uStack_1b4 = *(undefined4 *)(param_1 + 0x74);
          uStack_1b0 = *(undefined4 *)(param_1 + 0x78);
          uStack_1ac = *(undefined4 *)(param_1 + 0x7c);
          FUN_14084f00a(lVar7);
        }
        goto LAB_143e49e10;
      }
    }
  }
  lVar7 = 0;
LAB_143e49e10:
  if ((local_80 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4a3a0 FUN_143e4a3a0 body=1215 status=ok
// SIG undefined FUN_143e4a3a0(void)

longlong FUN_143e4a3a0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  code **local_1d0;
  undefined4 local_1c8;
  ulonglong local_1c0;
  undefined2 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined1 local_168 [16];
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [24];
  double local_110 [3];
  code *local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar1 = *(undefined1 *)(param_1 + 0xd8);
  uVar2 = *(undefined1 *)(param_1 + 0xd9);
  lVar5 = param_2[0x15];
  if (lVar5 == 0) {
LAB_143e4a42f:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb5b388 == 0) {
      local_1a0 = &local_f8;
      local_f8 = FUN_141864c34;
      local_190 = FUN_14081d0ea;
      local_198 = &LAB_146431698;
      local_1a8 = &LAB_1486775cb;
      local_1b0 = &LAB_1464cee35;
      local_1b8 = &DAT_149e063b2;
      local_1c0 = 0;
      local_1c8 = 0x10000005;
      local_1d0 = (code **)CONCAT44(local_1d0._4_4_,0x10);
      local_1d8 = (double *)CONCAT44(local_1d8._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) goto LAB_143e4a42f;
  }
  cVar4 = FUN_143e49cea(lVar5,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if (cVar4 != '\0') {
    FUN_1489a0002(param_1,&local_90,param_2);
    if (local_90 != (longlong *)0x0) {
      cVar4 = FUN_14820a79e(param_1);
      if (cVar4 != '\0') {
        if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
          (**(code **)(*param_2 + 0x4a8))(param_2,&local_f8,*(undefined8 *)(param_1 + 0xc4),0);
          local_110[0] = 1.0;
          local_110[1] = 1.0;
          local_110[2] = 1.0;
          dVar6 = *(double *)(param_1 + 0xa0);
          dVar8 = *(double *)(param_1 + 0xa8);
          dVar7 = *(double *)(param_1 + 0xb0);
          dVar3 = *(double *)(param_1 + 0xb8);
          local_148 = dVar8 * local_e8 * -1.0 +
                      dVar7 * dStack_f0 + (double)local_f8 * dVar3 * 1.0 + dStack_e0 * dVar6;
          dStack_140 = dVar6 * local_e8 * 1.0 +
                       dVar3 * dStack_f0 + (double)local_f8 * dVar7 * -1.0 + dStack_e0 * dVar8;
          local_138 = dVar3 * local_e8 * 1.0 +
                      (((double)local_f8 * dVar8 * 1.0 + dStack_e0 * dVar7) - dStack_f0 * dVar6);
          dStack_130 = dVar7 * local_e8 * -1.0 +
                       (((double)local_f8 * dVar6 * -1.0 + dStack_e0 * dVar3) - dStack_f0 * dVar8);
          FUN_1448052ee(&local_148,local_128);
          local_b8 = *(double *)(param_1 + 0x40) * local_b8;
          dStack_b0 = *(double *)(param_1 + 0x48) * dStack_b0;
          local_a8 = *(double *)(param_1 + 0x50) * local_a8;
          dVar6 = dStack_b0 * (double)local_f8 - local_b8 * dStack_f0;
          dVar7 = local_a8 * dStack_f0 - dStack_b0 * local_e8;
          dVar8 = local_b8 * local_e8 - (double)local_f8 * local_a8;
          dVar7 = dVar7 + dVar7;
          dVar8 = dVar8 + dVar8;
          dVar6 = dVar6 + dVar6;
          dStack_d0 = (local_e8 * dVar7 - (double)local_f8 * dVar6) + dStack_e0 * dVar8 + dStack_b0
                      + dStack_d0;
          local_158 = dVar6 * dStack_e0 + local_a8 + (dVar8 * (double)local_f8 - dVar7 * dStack_f0)
                      + local_c8;
          local_168._8_4_ = SUB84(dStack_d0,0);
          local_168._0_8_ =
               (dVar6 * dStack_f0 - dVar8 * local_e8) + dStack_e0 * dVar7 + local_b8 + local_d8;
          local_168._12_4_ = (int)((ulonglong)dStack_d0 >> 0x20);
          lVar5 = param_2[0x16];
          if (lVar5 == 0) {
            lVar5 = FUN_1448abda6(param_2);
          }
          local_1b8 = (undefined2 *)CONCAT71(local_1b8._1_7_,1);
          local_1c8 = CONCAT31(local_1c8._1_3_,1);
          local_1d0 = (code **)CONCAT71(local_1d0._1_7_,1);
          local_1d8 = local_110;
          local_1c0 = local_1c0 & 0xffffffffffffff00;
          lVar5 = FUN_140416e90(lVar5,local_90,local_168,local_128);
        }
        else {
          local_138 = *(double *)(param_1 + 0x68);
          local_1d8 = &local_148;
          local_148 = *(double *)(param_1 + 0x58);
          dStack_140 = *(double *)(param_1 + 0x60);
          local_78 = *(undefined8 *)(param_1 + 0x50);
          local_88 = *(undefined4 *)(param_1 + 0x40);
          uStack_84 = *(undefined4 *)(param_1 + 0x44);
          uStack_80 = *(undefined4 *)(param_1 + 0x48);
          uStack_7c = *(undefined4 *)(param_1 + 0x4c);
          local_1d0 = &local_f8;
          local_f8 = (code *)0x3ff0000000000000;
          dStack_f0 = 1.0;
          local_e8 = 1.0;
          local_1a8 = (undefined1 *)CONCAT71(local_1a8._1_7_,1);
          local_1b0 = (undefined1 *)CONCAT71(local_1b0._1_7_,1);
          local_1c0 = CONCAT71(local_1c0._1_7_,1);
          local_1b8 = (undefined2 *)((ulonglong)local_1b8 & 0xffffffffffffff00);
          local_1c8 = 0;
          lVar5 = FUN_140e3e448(local_90,param_2,*(undefined8 *)(param_1 + 0xc4));
        }
        if (lVar5 != 0) {
          FUN_140583e18(lVar5,*(undefined1 *)(param_1 + 0x88));
          local_178 = *(undefined8 *)(param_1 + 0x80);
          local_188 = *(undefined4 *)(param_1 + 0x70);
          uStack_184 = *(undefined4 *)(param_1 + 0x74);
          uStack_180 = *(undefined4 *)(param_1 + 0x78);
          uStack_17c = *(undefined4 *)(param_1 + 0x7c);
          FUN_14084f00a(lVar5);
          goto LAB_143e4a445;
        }
      }
    }
  }
  lVar5 = 0;
LAB_143e4a445:
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4a860 FUN_143e4a860 body=57 status=ok
// SIG undefined FUN_143e4a860(void)

undefined8 FUN_143e4a860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x178))) {
    if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e4a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x70))();
      return uVar2;
    }
    return 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(param_1 + 0x1ee9) != '\0');
}



// FUNCTION 143e4a8c2 FUN_143e4a8c2 body=10 status=ok
// SIG undefined FUN_143e4a8c2(void)

void FUN_143e4a8c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e4a8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xdb8))();
  return;
}



// FUNCTION 143e4a8d0 FUN_143e4a8d0 body=1141 status=ok
// SIG undefined FUN_143e4a8d0(void)

void FUN_143e4a8d0(longlong *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((param_1[0x3d7] != 0) && (*(longlong *)(param_1[0x3e] + 0x3c0) != 0)) &&
      (lVar9 = (**(code **)(*param_1 + 0xdc0))(param_1), lVar9 != 0)) &&
     (((9.999999747378752e-05 < ABS(*param_2) || (9.999999747378752e-05 < ABS(param_2[1]))) ||
      (9.999999747378752e-05 < ABS(param_2[2]))))) {
    lVar9 = param_1[0x3d7];
    dVar16 = *(double *)(lVar9 + 0x60);
    dVar18 = *(double *)(lVar9 + 0x68);
    dVar2 = *(double *)(lVar9 + 0x70);
    (**(code **)(**(longlong **)(param_1[0x3e] + 0x3c0) + 0x680))
              (*(longlong **)(param_1[0x3e] + 0x3c0),&local_d8);
    dVar10 = (double)FUN_144719204(local_d8,0);
    dVar11 = (double)FUN_144719204(local_d0,0);
    dVar12 = sin(dVar10 * 0.017453292519943295);
    dVar13 = cos(dVar10 * 0.017453292519943295);
    dVar10 = sin(dVar11 * 0.017453292519943295);
    dVar14 = cos(dVar11 * 0.017453292519943295);
    local_f0 = dVar10 * dVar13;
    dVar10 = *param_2;
    dVar11 = param_2[1];
    dVar3 = param_2[2];
    dVar15 = dVar3 * dVar3 + dVar10 * dVar10 + dVar11 * dVar11;
    if (((dVar15 != 1.0) || (dVar4 = dVar3, dVar17 = dVar11, dVar5 = dVar10, NAN(dVar15))) &&
       (dVar4 = DAT_14c8464f0, dVar17 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar4 = dVar3 * dVar15;
      dVar17 = dVar11 * dVar15;
      dVar5 = dVar10 * dVar15;
    }
    lVar9 = (**(code **)(*param_1 + 0xdc0))(param_1);
    dVar11 = dVar2 * dVar12 + dVar16 * dVar14 * dVar13 + dVar18 * local_f0;
    dVar10 = dVar11;
    if (1.0 <= dVar11) {
      dVar10 = 1.0;
    }
    fVar1 = *(float *)(lVar9 + 0x2c);
    local_e8 = dVar12;
    local_e0 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar10));
    dVar10 = (double)((90.0 - fVar1) * 0.017453292);
    dVar18 = dVar2 * dVar4 + dVar16 * dVar5 + dVar18 * dVar17;
    dVar16 = dVar18;
    if (1.0 <= dVar18) {
      dVar16 = 1.0;
    }
    dVar16 = acos((double)(-(ulonglong)(dVar18 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar18 < -1.0) & (ulonglong)dVar16));
    cVar6 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x48))();
    uVar8 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x70))((longlong *)param_1[0x3d7],0);
    if ((char)uVar8 == '\0') {
      cVar7 = (**(code **)(*param_1 + 0xdd0))(param_1);
      if (cVar7 == '\0') goto LAB_143e4ac3d;
      if (cVar6 == '\0') {
        if (dVar10 <= local_e0) {
          if (dVar16 < dVar10) goto LAB_143e4ac3d;
        }
        else if (((param_1[0x39d] == 0) ||
                 (cVar6 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x80))(), dVar16 < dVar10)) ||
                (cVar6 == '\0')) goto LAB_143e4ac3d;
        dVar17 = local_f0 * dVar17;
        dVar4 = local_e8 * dVar4;
        cVar6 = (**(code **)(*param_1 + 0xdd8))(param_1);
        if ((dVar4 + dVar14 * dVar13 * dVar5 + dVar17 <= 0.7071070075035095) && (cVar6 != '\0'))
        goto LAB_143e4ac3d;
      }
    }
    else if (dVar10 <= dVar16 || cVar6 != '\0') goto LAB_143e4ac3d;
    FUN_1404da4f4(param_1[0x3d7],uVar8 ^ 1);
  }
LAB_143e4ac3d:
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4ad46 FUN_143e4ad46 body=3494 status=ok
// SIG undefined FUN_143e4ad46(void)

void FUN_143e4ad46(longlong *param_1,float param_2,int param_3)

{
  double *pdVar1;
  float fVar2;
  longlong *plVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined1 local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  longlong lStack_200;
  longlong local_1f8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined4 local_164;
  byte local_15b;
  undefined4 local_138;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((1e-06 <= param_2) && (param_1[0x3d7] != 0)) {
    lVar11 = (**(code **)(*param_1 + 0xdc0))(param_1);
    lVar12 = param_1[0x3e];
    if ((lVar11 == 0 || lVar12 == 0) ||
       ((((*(longlong *)(lVar12 + 0x3c0) == 0 && ((*(byte *)((longlong)param_1 + 0x349) & 8) == 0))
         && ((char)param_1[0x1f0] == '\0')) &&
        (((*(byte *)(param_1 + 0x1b6) & 2) == 0 && (*(char *)(lVar12 + 0x178) != '\x01')))))) {
      param_1[0x73] = (longlong)DAT_14c8464f0;
      dVar14 = DAT_14c8464e8;
      param_1[0x71] = (longlong)DAT_14c8464e0;
      param_1[0x72] = (longlong)dVar14;
      dVar14 = DAT_14c8464e8;
      param_1[0x25] = (longlong)DAT_14c8464e0;
      param_1[0x26] = (longlong)dVar14;
      param_1[0x27] = (longlong)DAT_14c8464f0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_258);
    }
    pdVar1 = (double *)(param_1 + 0x71);
    (**(code **)(*param_1 + 0xda8))(param_1);
    bVar9 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x70))();
    if ((bVar9 != 0) && (cVar10 = (**(code **)(*param_1 + 0xdd8))(param_1), cVar10 != '\0')) {
      (**(code **)(**(longlong **)(param_1[0x3e] + 0x3c0) + 0x680))();
      dVar14 = (double)FUN_144719204(local_208,0);
      dVar15 = (double)FUN_144719204(lStack_200,0);
      dVar16 = sin(dVar14 * 0.017453292519943295);
      dVar14 = cos(dVar14 * 0.017453292519943295);
      dVar17 = sin(dVar15 * 0.017453292519943295);
      dVar15 = cos(dVar15 * 0.017453292519943295);
      dVar17 = dVar17 * dVar14;
      dVar15 = dVar15 * dVar14;
      dVar14 = ((double)param_1[0x73] * dVar16 +
               (double)param_1[0x71] * dVar15 + (double)param_1[0x72] * dVar17) /
               (dVar16 * dVar16 + dVar15 * dVar15 + dVar17 * dVar17);
      param_1[0x71] = (longlong)(dVar14 * dVar15);
      param_1[0x72] = (longlong)(dVar17 * dVar14);
      param_1[0x73] = (longlong)(dVar16 * dVar14);
      if (dVar16 * dVar14 * dVar16 + dVar14 * dVar15 * dVar15 + dVar17 * dVar14 * dVar17 < 0.0) {
        param_1[0x73] = (longlong)DAT_14c8464f0;
        dVar14 = DAT_14c8464e8;
        *pdVar1 = DAT_14c8464e0;
        param_1[0x72] = (longlong)dVar14;
      }
    }
    if (1e-06 <= param_2) {
      do {
        if (((*(int *)((longlong)param_1 + 0x444) <= param_3) ||
            (lVar12 = param_1[0x3e], lVar12 == 0)) ||
           (((*(longlong *)(lVar12 + 0x3c0) == 0 &&
             ((((*(byte *)((longlong)param_1 + 0x349) & 8) == 0 && ((char)param_1[0x1f0] == '\0'))
              && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)))) && (*(char *)(lVar12 + 0x178) != '\x01')
            ))) break;
        param_3 = param_3 + 1;
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
        fVar21 = *(float *)(param_1 + 0x88);
        fVar22 = param_2;
        if ((param_3 < *(int *)((longlong)param_1 + 0x444)) &&
           (fVar22 = fVar21, param_2 * 0.5 <= fVar21)) {
          fVar22 = param_2 * 0.5;
        }
        plVar3 = (longlong *)param_1[0x3d7];
        dVar14 = (double)plVar3[0xc];
        dVar17 = (double)plVar3[0xd];
        dVar15 = (double)plVar3[0xe];
        dVar16 = (double)*(float *)(lVar11 + 0x34);
        if (dVar16 <= dVar15 && bVar9 == 0) {
          fVar2 = *(float *)(lVar11 + 0x24);
          dVar18 = (double)(float)((double)*(float *)(plVar3 + 7) -
                                  ((double)*(float *)(lVar11 + 0x18) +
                                  *(double *)(param_1[0x22] + 0x270))) -
                   (double)fVar2 * (double)param_1[0x27];
          param_1[0x73] = (longlong)((dVar18 + dVar18) / (double)(fVar2 * fVar2));
        }
        if (((*(char *)(lVar11 + 0x40) == '\0') &&
            (cVar10 = (**(code **)(*plVar3 + 0x48))(plVar3), cVar10 != '\0')) &&
           (cVar10 = (**(code **)(*(longlong *)plVar3[0x1c] + 0xdd0))(), cVar10 == '\0')) {
          param_1[0x71] = (longlong)(DAT_14c8462c0 * (double)param_1[0x71]);
          param_1[0x72] = (longlong)(DAT_14c8462c8 * (double)param_1[0x72]);
          param_1[0x73] = (longlong)(DAT_14c8462d0 * (double)param_1[0x73]);
        }
        fVar22 = (float)(~-(uint)(fVar21 < param_2) & (uint)param_2 |
                        (uint)fVar22 & -(uint)(fVar21 < param_2));
        fVar21 = 1e-06;
        if (1e-06 <= fVar22) {
          fVar21 = fVar22;
        }
        if (((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
          if (bVar9 == 0) {
            lVar12 = param_1[0x27];
            local_1f8 = param_1[0x73];
            local_208 = *pdVar1;
            lStack_200 = param_1[0x72];
            param_1[0x73] = (longlong)((double)param_1[0x73] * 0.0);
            param_1[0x27] = 0;
            uVar13 = (**(code **)(*param_1 + 0x718))(param_1);
            local_238 = (undefined8 *)CONCAT44(local_238._4_4_,uVar13);
            (**(code **)(*param_1 + 0x6f0))
                      (param_1,fVar21,*(undefined4 *)((longlong)param_1 + 0x294),0);
            param_1[0x27] = lVar12;
          }
          else {
            local_1f8 = param_1[0x73];
            local_208 = *pdVar1;
            lStack_200 = param_1[0x72];
            uVar13 = (**(code **)(*param_1 + 0x718))(param_1);
            local_238 = (undefined8 *)CONCAT44(local_238._4_4_,uVar13);
            (**(code **)(*param_1 + 0x6f0))
                      (param_1,fVar21,*(undefined4 *)((longlong)param_1 + 0x294),0);
          }
          param_1[0x73] = local_1f8;
          *pdVar1 = local_208;
          param_1[0x72] = lStack_200;
          if (dVar16 <= dVar15 && bVar9 == 0) {
            dVar18 = (double)fVar21;
            param_1[0x25] = (longlong)((double)param_1[0x71] * 0.0 * dVar18 + (double)param_1[0x25])
            ;
            param_1[0x26] = (longlong)((double)param_1[0x72] * 0.0 * dVar18 + (double)param_1[0x26])
            ;
            param_1[0x27] = (longlong)((double)param_1[0x73] * dVar18 + (double)param_1[0x27]);
          }
        }
        (**(code **)(*param_1 + 0xb88))(param_1,fVar21);
        local_108 = (double)fVar21;
        local_f8 = (double)param_1[0x27] * local_108;
        local_100 = (double)param_1[0x26] * local_108;
        local_108 = local_108 * (double)param_1[0x25];
        cVar10 = FUN_1404da3f8(param_1[0x3d7]);
        if (cVar10 == '\0') {
          lVar12 = (*(longlong **)(param_1[0x3d7] + 0xe0))[0x22];
          dVar18 = 3.4028234663852886e+38;
          if (lVar12 != 0) {
            dVar18 = *(double *)(lVar12 + 0x270);
          }
          lVar12 = (**(code **)(**(longlong **)(param_1[0x3d7] + 0xe0) + 0xdc0))();
          dVar23 = DAT_14c8464f0;
          if (lVar12 != 0) {
            dVar23 = (double)*(float *)(lVar12 + 0x18);
          }
          dVar18 = (double)(float)((double)*(float *)(param_1[0x3d7] + 0x38) - (dVar18 + dVar23));
          if (dVar18 <= local_f8) {
            local_f8 = dVar18;
          }
        }
        if (bVar9 == 0) {
          if ((dVar15 < 0.9990000128746033) && (dVar16 <= dVar15)) {
            dVar23 = DAT_14c8462c0 * dVar17 - dVar14 * DAT_14c8462c8;
            dVar7 = DAT_14c8462d0 * dVar14 - dVar15 * DAT_14c8462c0;
            dVar18 = DAT_14c8462c8 * dVar15 - dVar17 * DAT_14c8462d0;
            dVar20 = dVar23 * dVar23 + dVar18 * dVar18 + dVar7 * dVar7;
            if (((dVar20 != 1.0) || (dVar6 = dVar23, dVar8 = dVar7, dVar5 = dVar18, NAN(dVar20))) &&
               (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar20)) {
              dVar20 = 1.0 / SQRT(dVar20);
              dVar6 = dVar23 * dVar20;
              dVar8 = dVar7 * dVar20;
              dVar5 = dVar18 * dVar20;
            }
            dVar17 = DAT_14c8462d0 * dVar15 + DAT_14c8462c0 * dVar14 + dVar17 * DAT_14c8462c8;
            dVar14 = dVar17;
            if (1.0 <= dVar17) {
              dVar14 = 1.0;
            }
            dVar14 = acos((double)(-(ulonglong)(dVar17 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar17 < -1.0) & (ulonglong)dVar14));
            dVar17 = sin((double)(float)dVar14 * 0.5);
            dVar18 = cos((double)(float)dVar14 * 0.5);
            dVar5 = dVar5 * dVar17;
            dVar8 = dVar8 * dVar17;
            dVar6 = dVar6 * dVar17;
            dVar17 = dVar8 * local_f8 - local_100 * dVar6;
            dVar17 = dVar17 + dVar17;
            dVar23 = dVar5 * local_100 - local_108 * dVar8;
            dVar23 = dVar23 + dVar23;
            dVar14 = dVar6 * local_108 - local_f8 * dVar5;
            dVar14 = dVar14 + dVar14;
            local_f8 = (dVar5 * dVar14 - dVar17 * dVar8) + dVar18 * dVar23 + local_f8;
            local_100 = (dVar6 * dVar17 - dVar23 * dVar5) + dVar18 * dVar14 + local_100;
            local_108 = (dVar8 * dVar23 - dVar14 * dVar6) + dVar18 * dVar17 + local_108;
          }
          if ((dVar15 < dVar16) && (0.0 < local_f8)) {
            local_f8 = 0.0;
          }
        }
        if (((ABS(local_108) <= 9.999999747378752e-05) && (ABS(local_100) <= 9.999999747378752e-05))
           && (ABS(local_f8) <= 9.999999747378752e-05)) break;
        memset(&local_208,0,0x100);
        local_138 = 0xffffffff;
        local_164 = 0xffffffff;
        local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
        lVar12 = param_1[0x22];
        local_228 = *(double *)(lVar12 + 0x240);
        dStack_220 = *(double *)(lVar12 + 0x248);
        local_218 = *(double *)(lVar12 + 0x250);
        uStack_210 = *(undefined8 *)(lVar12 + 600);
        local_230 = 0;
        local_238 = &local_208;
        FUN_1402eda10(param_1,&local_108,&local_228);
        local_218 = local_1b8;
        local_228 = local_1c8;
        dStack_220 = dStack_1c0;
        if ((dVar16 <= dVar15 | bVar9) == 1) {
          cVar10 = (**(code **)(*param_1 + 0xdd0))(param_1);
          if ((cVar10 == '\0') && (local_218 < 0.0)) {
            if (*(char *)(lVar11 + 0x40) == '\x01') {
              dVar14 = (double)param_1[0x71];
              dVar17 = (double)param_1[0x72];
              dVar15 = dVar14 * dVar14 + dVar17 * dVar17;
              if ((dVar15 != 1.0) || (NAN(dVar15))) {
                dVar18 = DAT_14c8464f0;
                dVar16 = DAT_14c8464e0;
                dVar23 = DAT_14c8464e8;
                if (9.99999993922529e-09 <= dVar15) {
                  dVar18 = 0.0;
                  dVar16 = dVar14 * (1.0 / SQRT(dVar15));
                  dVar23 = dVar17 * (1.0 / SQRT(dVar15));
                }
              }
              else {
                dVar18 = (double)(-(ulonglong)((double)param_1[0x73] == 0.0) & param_1[0x73]);
                dVar16 = dVar14;
                dVar23 = dVar17;
              }
              dVar14 = local_228 * local_228 + dStack_220 * dStack_220;
              if ((dVar14 != 1.0) || (NAN(dVar14))) {
                if (9.99999993922529e-09 <= dVar14) {
                  dVar17 = dStack_220 * (1.0 / SQRT(dVar14));
                  dVar14 = local_228 * (1.0 / SQRT(dVar14));
                  uVar13 = 0;
                  uVar19 = 0;
                }
                else {
                  uVar13 = SUB84(DAT_14c8464f0,0);
                  uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                  dVar14 = DAT_14c8464e0;
                  dVar17 = DAT_14c8464e8;
                }
              }
              else {
                uVar4 = -(ulonglong)(local_218 == 0.0) & (ulonglong)local_218;
                uVar13 = (undefined4)uVar4;
                uVar19 = (undefined4)(uVar4 >> 0x20);
                dVar14 = local_228;
                dVar17 = dStack_220;
              }
              if (0.0 <= dVar23 * dVar17 + dVar14 * dVar16 +
                         (double)CONCAT44(uVar19,uVar13) * dVar18) goto LAB_143e4b9b9;
            }
            goto LAB_143e4b921;
          }
        }
        else {
LAB_143e4b921:
          dVar14 = local_228 * local_228 + dStack_220 * dStack_220;
          if ((dVar14 != 1.0) || (NAN(dVar14))) {
            if (9.99999993922529e-09 <= dVar14) {
              dStack_220 = dStack_220 * (1.0 / SQRT(dVar14));
              local_228 = local_228 * (1.0 / SQRT(dVar14));
              uVar13 = 0;
              uVar19 = 0;
            }
            else {
              uVar13 = SUB84(DAT_14c8464f0,0);
              uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              dStack_220 = DAT_14c8464e8;
              local_228 = DAT_14c8464e0;
            }
          }
          else {
            uVar4 = -(ulonglong)(local_218 == 0.0) & (ulonglong)local_218;
            uVar13 = (undefined4)uVar4;
            uVar19 = (undefined4)(uVar4 >> 0x20);
          }
          local_218 = (double)CONCAT44(uVar19,uVar13);
        }
LAB_143e4b9b9:
        if ((local_15b & 2) == 0) {
          if ((local_15b & 1) != 0) {
            local_230 = 1;
            local_238 = &local_208;
            (**(code **)(*param_1 + 0x508))(param_1,&local_108,1.0 - local_208._4_4_);
          }
        }
        else {
          (**(code **)(*param_1 + 0x4c8))(param_1,&local_208,0,&DAT_14c8464e0);
          local_230 = 1;
          local_238 = &local_208;
          (**(code **)(*param_1 + 0x508))(param_1,&local_108,0x3f800000);
          if ((local_15b & 2) != 0) {
            (**(code **)(*param_1 + 0x8d0))(param_1);
          }
        }
        param_2 = param_2 - fVar21;
      } while (1e-06 <= param_2);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4baf4 FUN_143e4baf4 body=1104 status=ok
// SIG undefined FUN_143e4baf4(void)

void FUN_143e4baf4(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_c4;
  undefined4 local_98;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((longlong)(int)param_1[4] != 0) {
    lVar14 = param_1[3];
    lVar16 = (longlong)(int)param_1[4] << 3;
    do {
      cVar3 = FUN_140f9880e(lVar14,param_2);
      if (cVar3 != '\0') {
        local_64 = 0;
        if (param_2 == 0) {
          local_168 = &local_68;
          local_68 = 0;
          FUN_141086cf2(param_1 + 3);
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          local_68 = *(uint *)(param_2 + 0xc);
          if ((int)local_68 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar4 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar4 = *(int *)(lVar14 + 0x10);
            bVar17 = iVar4 == 0;
            if (bVar17) {
              *(int *)(lVar14 + 0x10) = iVar12;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar4 = iVar12;
            }
          }
          local_168 = &local_68;
          local_64 = iVar4;
          FUN_141086cf2(param_1 + 3);
          uVar15 = *(uint *)(param_2 + 0xc);
          if ((int)uVar15 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar10 = (ulonglong)*(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar5 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar5);
            }
            LOCK();
            uVar6 = *(uint *)(lVar14 + 0x10);
            bVar17 = uVar6 == 0;
            if (bVar17) {
              *(uint *)(lVar14 + 0x10) = uVar5;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar17) {
              uVar6 = uVar5;
            }
            uVar10 = (ulonglong)uVar6;
          }
        }
        lVar14 = param_1[6];
        uVar5 = (int)lVar14 + 1;
        *(uint *)(param_1 + 6) = uVar5;
        if (*(uint *)((longlong)param_1 + 0x34) < uVar5) {
          FUN_1410872ba(param_1 + 5);
        }
        *(ulonglong *)(param_1[5] + (longlong)(int)lVar14 * 8) = (ulonglong)uVar15 | uVar10 << 0x20;
        if ((int)param_1[4] != 0) goto LAB_143e4bc36;
        lVar14 = ((longlong *)param_1[0x1c])[0x39d];
        if (((lVar14 == 0) || (*(longlong *)(lVar14 + 0x438) == 0)) ||
           (lVar14 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))(), lVar14 == 0))
        goto LAB_143e4bc36;
        local_178 = param_2;
        if ((int)param_1[6] < 2) goto LAB_143e4be95;
        lVar14 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
        local_178 = param_2;
        if ((longlong)(int)param_1[6] == 0) goto LAB_143e4be95;
        uVar1 = *(undefined4 *)(lVar14 + 0x20);
        lVar14 = param_1[5];
        lVar16 = (longlong)(int)param_1[6] << 3;
        lVar13 = 0;
        local_170 = lVar16;
        goto LAB_143e4bd29;
      }
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
    goto LAB_143e4bc42;
  }
  goto LAB_143e4bc48;
LAB_143e4bd29:
  do {
    lVar2 = DAT_14c9647c8;
    iVar4 = *(int *)(lVar14 + 4 + lVar13);
    if (((iVar4 != 0) && (uVar15 = *(uint *)(lVar14 + lVar13), -1 < (int)uVar15)) &&
       ((int)uVar15 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == iVar4)) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
        memset(&local_168,0,0x100);
        local_98 = 0xffffffff;
        local_c4 = 0xffffffff;
        local_168 = (uint *)CONCAT44(0x3f800000,(undefined4)local_168);
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(lVar2 + (ulonglong)(uVar15 >> 0x10) * 8));
        if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar4)) ||
           ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar11;
        }
        cVar3 = FUN_143e4bf46(param_1,uVar9,&local_168,uVar1);
        lVar16 = local_170;
        if (cVar3 != '\0') {
          iVar4 = *(int *)(lVar14 + 4 + lVar13);
          if ((iVar4 == 0) || (uVar15 = *(uint *)(lVar14 + lVar13), (int)uVar15 < 0)) {
LAB_143e4be5b:
            local_178 = 0;
          }
          else {
            local_178 = 0;
            if ((int)uVar15 < DAT_14c9647dc) {
              plVar8 = (longlong *)
                       ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
              if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != iVar4)) ||
                 ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_143e4be5b;
              local_178 = *plVar8;
            }
          }
        }
      }
    }
    lVar13 = lVar13 + 8;
  } while (lVar16 != lVar13);
LAB_143e4be95:
  (**(code **)(*param_1 + 0x130))(param_1,local_178);
LAB_143e4bc36:
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
LAB_143e4bc42:
  if ((int)param_1[4] != 0) goto LAB_143e4bc71;
LAB_143e4bc48:
  if ((*(char *)((longlong)param_1 + 0x79) == '\0') && (0.0 <= *(double *)(param_1[0x1c] + 0x138)))
  {
    FUN_140f9894a(param_1,1);
  }
LAB_143e4bc71:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4bf46 FUN_143e4bf46 body=672 status=ok
// SIG undefined FUN_143e4bf46(void)

bool FUN_143e4bf46(longlong param_1,longlong *param_2,undefined8 *param_3,float param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_1 + 0xe0);
  lVar2 = *(longlong *)(lVar3 + 0x110);
  if (lVar2 == 0) {
    uVar6 = 0xe0000000;
    uVar7 = 0x47efffff;
    uVar8 = 0xe0000000;
    uVar9 = 0x47efffff;
    uVar10 = 0xe0000000;
    uVar11 = 0x47efffff;
  }
  else {
    uVar8 = *(undefined4 *)(lVar2 + 0x260);
    uVar9 = *(undefined4 *)(lVar2 + 0x264);
    uVar10 = *(undefined4 *)(lVar2 + 0x268);
    uVar11 = *(undefined4 *)(lVar2 + 0x26c);
    uVar6 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
  }
  local_a0[0] = 0;
  lVar2 = *(longlong *)(lVar3 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6();
    lVar3 = *(longlong *)(param_1 + 0xe0);
    if (lVar2 == 0) {
      dVar5 = 0.03333333507180214;
      goto LAB_143e4bffa;
    }
    lVar2 = *(longlong *)(lVar3 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
  }
  dVar5 = (double)*(float *)(lVar2 + 0x6f4);
LAB_143e4bffa:
  dVar1 = *(double *)(lVar3 + 0x138);
  *param_3 = 0x3f80000000000000;
  bVar4 = false;
  memset(param_3 + 1,0,0x9c);
  *(undefined4 *)((longlong)param_3 + 0xa4) = 0xffffffff;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  *(undefined4 *)(param_3 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_3 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_3 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_3 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_3 + 0xec) = 0;
  param_3[0x1e] = 0;
  param_3[0x1f] = 0;
  local_c8 = CONCAT44(uVar7,uVar6);
  local_f0 = local_a0;
  local_f8 = &DAT_14c8463d0;
  local_e8 = 0;
  local_d8 = uVar8;
  uStack_d4 = uVar9;
  uStack_d0 = uVar10;
  uStack_cc = uVar11;
  local_b8 = (double)CONCAT44(uVar9,uVar8) + 0.0;
  local_b0 = (double)CONCAT44(uVar11,uVar10) + 0.0;
  local_a8 = (double)(ABS((float)(dVar5 * dVar1)) + param_4) + (double)CONCAT44(uVar7,uVar6);
  (**(code **)(*param_2 + 0x988))(param_2,param_3);
  if ((*(float *)((longlong)param_3 + 4) <= 1.0 && *(float *)((longlong)param_3 + 4) != 1.0) &&
     ((double)param_3[0xd] <= 0.0 && (double)param_3[0xd] != 0.0)) {
    dVar5 = 0.0;
    if ((*(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0)) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0)) + 0x438),
       lVar3 != 0)) {
      dVar5 = (double)((float)*(double *)(lVar3 + 0x290) * *(float *)(lVar3 + 0x640));
    }
    bVar4 = (double)CONCAT44(uVar7,uVar6) + dVar5 < (double)param_3[4];
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4c1e8 FUN_143e4c1e8 body=1965 status=ok
// SIG undefined FUN_143e4c1e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4c1e8(longlong *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double _X;
  double _X_00;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double _X_01;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined1 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_140f73ca6(param_1 + 5,0);
  }
  else {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb2) == '\0') {
    bVar2 = *(byte *)(param_1 + 0xf);
    (**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*param_1 + 0x120))(param_1);
    cVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar5 == '\0') {
      if (param_1 + 8 != &DAT_14c8464e0) {
        param_1[10] = (longlong)DAT_14c8464f0;
        lVar6 = DAT_14c8464e8;
        param_1[8] = DAT_14c8464e0;
        param_1[9] = lVar6;
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
    }
    else {
      (**(code **)(*param_1 + 0x148))(param_1);
    }
    (**(code **)(*param_1 + 0x128))(param_1);
    cVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar5 != '\0') {
      lVar6 = param_1[0x1c];
      FUN_1489a02c6(param_1,0.0 < *(double *)(lVar6 + 0x398) * *(double *)(lVar6 + 0x398) +
                                  *(double *)(lVar6 + 0x388) * *(double *)(lVar6 + 0x388) +
                                  *(double *)(lVar6 + 0x390) * *(double *)(lVar6 + 0x390));
    }
    if ((*(char *)((longlong)param_1 + 0xb5) == '\x01') &&
       (0.0 <= *(double *)(param_1[0x1c] + 0x138))) {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
    }
    if (((~*(byte *)(param_1 + 0xf) | bVar2) & 1) == 0) {
      cVar5 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc8))();
      if (cVar5 == '\0') {
        (**(code **)(*param_1 + 0x110))(param_1);
      }
      else {
        uVar13 = (**(code **)(*param_1 + 0xe8))();
        dVar14 = *(double *)(param_1[0x1c] + 0x138);
        cVar5 = (**(code **)(*param_1 + 0x108))(param_1);
        if (cVar5 == '\0') {
          (**(code **)(*param_1 + 0xf0))(param_1,uVar13,(float)dVar14);
        }
        else {
          (**(code **)(*param_1 + 0x100))(param_1);
          (**(code **)(*param_1 + 0x10))(param_1);
          lVar6 = *(longlong *)(param_1[0x1c] + 0x110);
          if (lVar6 != 0) {
            auVar19 = *(undefined1 (*) [16])(lVar6 + 0x1b0);
            dVar18 = auVar19._0_8_;
            dVar15 = auVar19._8_8_;
            dVar14 = *(double *)(lVar6 + 0x1c0);
            pdVar7 = *(double **)(lVar6 + 0x230);
            if (pdVar7 == (double *)0x0) {
              pdVar7 = (double *)FUN_14001cc68(0x40,0x10);
              dVar16 = DAT_14c8463d8;
              *pdVar7 = DAT_14c8463d0;
              pdVar7[1] = dVar16;
              dVar16 = DAT_14c8463e8;
              pdVar7[2] = DAT_14c8463e0;
              pdVar7[3] = dVar16;
              dVar16 = DAT_14c846500;
              pdVar7[4] = DAT_14c8464f8;
              pdVar7[5] = dVar16;
              pdVar7[6] = DAT_14c846508;
              *(double **)(lVar6 + 0x230) = pdVar7;
            }
            auVar23 = _DAT_1499387d0;
            if (((((pdVar7[4] != dVar18) || (NAN(pdVar7[4]) || NAN(dVar18))) ||
                 (pdVar7[5] != dVar15)) ||
                ((NAN(pdVar7[5]) || NAN(dVar15) || (pdVar7[6] != dVar14)))) ||
               (NAN(pdVar7[6]) || NAN(dVar14))) {
              auVar25._8_8_ = 0;
              auVar25._0_8_ = dVar14;
              dVar16 = (double)DAT_1499387d0;
              dVar17 = DAT_1499387d0._8_8_;
              auVar19 = divpd(auVar19,_DAT_1499387d0);
              auVar22 = divpd(auVar25,_DAT_1499387d0);
              auVar19 = roundpd(auVar19,auVar19,3);
              auVar22 = roundpd(auVar22,auVar22,3);
              auVar32._0_8_ = dVar18 - auVar19._0_8_ * dVar16;
              auVar32._8_8_ = dVar15 - auVar19._8_8_ * dVar17;
              auVar26._0_8_ = dVar14 - auVar22._0_8_ * dVar16;
              auVar26._8_8_ = 0.0 - auVar22._8_8_ * dVar17;
              auVar30._0_8_ = auVar32._0_8_ + dVar16;
              auVar30._8_8_ = auVar32._8_8_ + dVar17;
              auVar24._0_8_ = auVar26._0_8_ + dVar16;
              auVar24._8_8_ = auVar26._8_8_ + dVar17;
              auVar22._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
              auVar22._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
              auVar19 = blendvpd(auVar30,auVar32,auVar22);
              auVar31._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
              auVar31._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
              auVar22 = blendvpd(auVar24,auVar26,auVar31);
              auVar27._0_8_ = auVar19._0_8_ + -360.0;
              auVar27._8_8_ = auVar19._8_8_ + -360.0;
              auVar20._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
              auVar20._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
              auVar31 = blendvpd(auVar19,auVar27,auVar20);
              auVar21._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
              auVar21._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
              auVar19._8_8_ = auVar22._8_8_ + 0.0;
              auVar19._0_8_ = auVar22._0_8_ + -360.0;
              auVar19 = blendvpd(auVar22,auVar19,auVar21);
              *(undefined1 (*) [16])(pdVar7 + 4) = auVar31;
              dVar14 = auVar19._0_8_;
              pdVar7[6] = dVar14;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = dVar14;
              auVar19 = divpd(auVar31,auVar23);
              auVar23 = divpd(auVar33,auVar23);
              auVar19 = roundpd(auVar19,auVar19,3);
              auVar23 = roundpd(auVar23,auVar23,3);
              dVar29 = (auVar31._0_8_ - auVar19._0_8_ * dVar16) * 0.008726646259971648;
              _X = (auVar31._8_8_ - auVar19._8_8_ * dVar17) * 0.008726646259971648;
              _X_00 = (dVar14 - auVar23._0_8_ * dVar16) * 0.008726646259971648;
              _X_01 = (0.0 - auVar23._8_8_ * dVar17) * 0.008726646259971648;
              dVar14 = sin(dVar29);
              dVar18 = sin(_X);
              dVar15 = sin(_X_00);
              sin(_X_01);
              dVar16 = cos(dVar29);
              dVar17 = cos(_X);
              dVar29 = cos(_X_00);
              cos(_X_01);
              *pdVar7 = dVar14 * dVar18 * dVar29 - dVar16 * dVar17 * dVar15;
              pdVar7[1] = -(dVar14 * dVar17 * dVar29) - dVar16 * dVar18 * dVar15;
              pdVar7[2] = -(dVar17 * dVar14 * dVar15) + dVar18 * dVar16 * dVar29;
              pdVar7[3] = dVar18 * dVar14 * dVar15 + dVar17 * dVar16 * dVar29;
            }
            local_d8 = *pdVar7;
            dStack_d0 = pdVar7[1];
            local_c8 = pdVar7[2];
            dStack_c0 = pdVar7[3];
            local_e8 = &local_d8;
            local_e0 = 0;
            FUN_140092404(lVar6,*(undefined8 *)(lVar6 + 0x120),*(undefined8 *)(lVar6 + 0x128),0);
          }
        }
      }
    }
    else if ((((*(byte *)(param_1 + 0xf) | ~bVar2) & 1) == 0) &&
            (cVar5 = (&DAT_00001100)[param_1[0x1c]], (**(code **)(*param_1 + 0xf8))(param_1,0),
            cVar5 == '\v')) {
      FUN_140d735ec(param_1[0x1c]);
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined1 *)(param_1[0x1c] + 0x1ee0) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x70))(param_1,0);
  *(undefined1 *)(param_1[0x1c] + 0x1ee9) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined1 *)(param_1[0x1c] + 0x1eea) = uVar4;
  *(undefined4 *)(param_1[0x1c] + 0x1ef4) = *(undefined4 *)((longlong)param_1 + 0xdc);
  *(int *)(param_1[0x1c] + 0x1ef8) = (int)param_1[7];
  fVar12 = 0.0;
  if (*(char *)((longlong)param_1 + 0x79) == '\x01') {
    lVar6 = ((longlong *)param_1[0x1c])[0x22];
    if (lVar6 == 0) {
      uVar13 = 0xe0000000;
      uVar28 = 0x47efffff;
    }
    else {
      uVar1 = *(undefined8 *)(lVar6 + 0x270);
      uVar13 = (undefined4)uVar1;
      uVar28 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    dVar14 = DAT_14c8464f0;
    if (lVar6 != 0) {
      dVar14 = (double)*(float *)(lVar6 + 0x18);
    }
    dVar18 = (double)*(float *)(param_1 + 7) - ((double)CONCAT44(uVar28,uVar13) + dVar14);
    dVar14 = 0.0;
    if (0.0 <= dVar18) {
      dVar14 = dVar18;
    }
    fVar12 = (float)dVar14;
  }
  *(float *)(param_1[0x1c] + 0x1eec) = fVar12;
  *(float *)(param_1[0x1c] + 0x1ed8) = fVar12;
  uVar13 = FUN_1404da462();
  *(undefined4 *)(param_1[0x1c] + 0x1ef0) = uVar13;
  *(undefined4 *)(param_1[0x1c] + 0x1edc) = uVar13;
  uVar3 = *(ulonglong *)(param_1[0x1c] + 0x38);
  if (uVar3 < 0xffffffff00000000) {
    plVar10 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1[0x1c],uVar3,8);
  }
  else {
    uVar11 = (uint)uVar3;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
        lVar6 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar6 + 0x18);
        if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar6 + 8);
        }
        *puVar9 = *puVar9 | 0x100;
        *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4c99a FUN_143e4c99a body=169 status=ok
// SIG undefined FUN_143e4c99a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4c99a(void)

{
  _DAT_14cb8c9e8 = 0;
  if (DAT_14cb8c9e0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb8c9a8 = 0;
  if (DAT_14cb8c9ac != 0) {
    FUN_14472eb64(&DAT_14cb8c9a0,0);
  }
  _DAT_14cb8c9d0 = 0xffffffff;
  _DAT_14cb8c9c8 = 0;
  if (0x80 < DAT_14cb8c9cc) {
    DAT_14cb8c9cc = 0x80;
    FUN_1446efbd8(&DAT_14cb8c9b0,0);
  }
  if (DAT_14cb8c9c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8c9a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e4ccf3 FUN_143e4ccf3 body=41 status=ok
// SIG undefined FUN_143e4ccf3(void)

void FUN_143e4ccf3(void)

{
  DAT_14cb8ca68 = 0;
  if (DAT_14cb8ca60 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68496();
  return;
}



// FUNCTION 143e4cd21 FUN_143e4cd21 body=91 status=ok
// SIG undefined FUN_143e4cd21(void)

void FUN_143e4cd21(void)

{
  if (DAT_14cb8cb18 != 0) {
    if (DAT_14cb8cb10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8cb10)(DAT_14cb8cb10,0);
    FUN_1446efa72(&DAT_14cb8cb10,0,0,0x10);
    DAT_14cb8cb18 = 0;
  }
  if (DAT_14cb8cb10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e4cd82 FUN_143e4cd82 body=71 status=ok
// SIG undefined FUN_143e4cd82(void)

byte FUN_143e4cd82(longlong *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)((longlong)param_1 + 0xb2) == '\0') {
    if (param_2 != '\x01' || *(byte *)((longlong)param_1 + 0xb1) != 0) {
      return *(byte *)((longlong)param_1 + 0xb1);
    }
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (cVar1 != '\0') {
      bVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdd0))();
      return bVar2 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 143e4ce46 FUN_143e4ce46 body=29 status=ok
// SIG undefined FUN_143e4ce46(void)

undefined8 FUN_143e4ce46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4ce64 FUN_143e4ce64 body=132 status=ok
// SIG undefined FUN_143e4ce64(void)

undefined8 * FUN_143e4ce64(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b430d08;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e4ceb5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e4ceb5:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4cee8 FUN_143e4cee8 body=275 status=ok
// SIG undefined FUN_143e4cee8(void)

void FUN_143e4cee8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar7) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e4d01c FUN_143e4d01c body=1714 status=ok
// SIG undefined FUN_143e4d01c(void)

/* WARNING: Removing unreachable block (ram,0x000143e4d536) */
/* WARNING: Removing unreachable block (ram,0x000143e4d540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4d01c(uint *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong lVar20;
  char *pcVar21;
  longlong *plVar22;
  char *pcVar23;
  longlong lVar24;
  int *piVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int *local_90;
  int *local_88;
  char *local_80;
  longlong local_78;
  undefined8 *local_70;
  int local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[1] == 0) {
LAB_143e4d681:
    uVar16 = 0;
  }
  else {
    uVar14 = *param_1;
    uVar16 = 0;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar17 + 2) != param_1[1] || ((*(uint *)(puVar17 + 1) & 0x10200000) != 0))))
      goto LAB_143e4d681;
      uVar16 = *puVar17;
    }
  }
  FUN_140ce87a4(&local_68,uVar16);
  if (plStack_60 == (longlong *)0x0) goto LAB_143e4d659;
  iVar10 = (int)plStack_60[1];
  do {
    if (iVar10 == 0) {
      plVar22 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar9 = (int)plStack_60[1];
    bVar28 = iVar10 == iVar9;
    if (bVar28) {
      *(int *)(plStack_60 + 1) = iVar10 + 1;
      iVar9 = iVar10;
    }
    iVar10 = iVar9;
    UNLOCK();
    plVar22 = plStack_60;
  } while (!bVar28);
  LOCK();
  piVar12 = (int *)((longlong)plStack_60 + 0xc);
  *piVar12 = *piVar12 + -1;
  UNLOCK();
  if (*piVar12 == 0) {
    (**(code **)(*plStack_60 + 0x10))();
  }
  if (plVar22 == (longlong *)0x0) goto LAB_143e4d659;
  lVar26 = CONCAT44(uStack_64,local_68);
  if (lVar26 != 0) {
    *(undefined1 *)(lVar26 + 0x50) = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8c3d8) && (FUN_144b3d300(&DAT_14cb8c3d8), DAT_14cb8c3d8 == -1)) {
      DAT_14cb8c3c8 = (char *)0x0;
      _DAT_14cb8c3d0 = (longlong *)0x0;
      atexit(FUN_143e475b6);
      _Init_thread_footer(&DAT_14cb8c3d8);
    }
    uVar6 = DAT_14cb8c3c8._4_4_;
    uVar7 = DAT_14cb8c3d0;
    uVar8 = DAT_14cb8c3d4;
    local_68 = (int)DAT_14cb8c3c8;
    uStack_64 = DAT_14cb8c3c8._4_4_;
    plStack_60 = _DAT_14cb8c3d0;
    _DAT_14cb8c3d0 = *(longlong **)(lVar26 + 0x48);
    pcVar21 = *(char **)(lVar26 + 0x40);
    *(int *)(lVar26 + 0x40) = (int)DAT_14cb8c3c8;
    DAT_14cb8c3c8 = pcVar21;
    *(undefined4 *)(lVar26 + 0x44) = uVar6;
    *(undefined4 *)(lVar26 + 0x48) = uVar7;
    *(undefined4 *)(lVar26 + 0x4c) = uVar8;
    if ((longlong)DAT_14cb8c3d0 != 0) {
      pcVar21 = DAT_14cb8c3c8 + (longlong)DAT_14cb8c3d0 * 0x18;
      local_70 = (undefined8 *)(lVar26 + 0x20);
      pcVar23 = DAT_14cb8c3c8;
LAB_143e4d154:
      plVar15 = *(longlong **)(pcVar23 + 0x10);
      if (plVar15 != (longlong *)0x0) {
        iVar10 = (int)plVar15[1];
        do {
          if (iVar10 == 0) goto LAB_143e4d50c;
          LOCK();
          iVar9 = (int)plVar15[1];
          bVar28 = iVar10 == iVar9;
          if (bVar28) {
            *(int *)(plVar15 + 1) = iVar10 + 1;
            iVar9 = iVar10;
          }
          iVar10 = iVar9;
          UNLOCK();
        } while (!bVar28);
        plVar3 = *(longlong **)(pcVar23 + 8);
        local_98 = plVar15;
        if (plVar3 != (longlong *)0x0) {
          local_80 = pcVar21;
          if (*pcVar23 == '\x01') {
            piVar11 = (int *)(**(code **)(*plVar3 + 0x10))(plVar3);
            puVar17 = local_70;
            piVar12 = *(int **)(lVar26 + 0x20);
            lVar20 = (longlong)*(int *)(lVar26 + 0x28);
            if (lVar20 != 0) {
              lVar24 = lVar20 * 0xc30;
              piVar13 = piVar12;
              do {
                if (((*piVar13 == *piVar11) && (piVar13[1] == piVar11[1])) &&
                   ((piVar13[2] == piVar11[2] && (piVar13[3] == piVar11[3])))) {
                  if (piVar13 != (int *)0x0) goto LAB_143e4d263;
                  break;
                }
                piVar13 = piVar13 + 0x30c;
                lVar24 = lVar24 + -0xc30;
              } while (lVar24 != 0);
            }
            uVar14 = *(int *)(lVar26 + 0x28) + 1;
            *(uint *)(lVar26 + 0x28) = uVar14;
            if (*(uint *)(lVar26 + 0x2c) < uVar14) {
              FUN_1465622cc(local_70);
              piVar12 = (int *)*puVar17;
            }
            piVar13 = piVar12 + lVar20 * 0x30c;
            iVar10 = piVar11[1];
            iVar9 = piVar11[2];
            iVar5 = piVar11[3];
            piVar19 = piVar12 + lVar20 * 0x30c;
            *piVar19 = *piVar11;
            piVar19[1] = iVar10;
            piVar19[2] = iVar9;
            piVar19[3] = iVar5;
            (piVar12 + lVar20 * 0x30c + 0x304)[0] = 0;
            (piVar12 + lVar20 * 0x30c + 0x304)[1] = 0;
            (piVar12 + lVar20 * 0x30c + 0x306)[0] = 0;
            (piVar12 + lVar20 * 0x30c + 0x306)[1] = 0x80;
            (piVar12 + lVar20 * 0x30c + 0x308)[0] = 0;
            (piVar12 + lVar20 * 0x30c + 0x308)[1] = 0;
            piVar12[lVar20 * 0x30c + 0x30a] = 0;
            *(undefined1 *)(piVar12 + lVar20 * 0x30c + 0x30b) = 0;
LAB_143e4d263:
            pcVar21 = local_80;
            plVar15 = local_98;
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
            local_68 = piVar13[0x30a] + 5;
            LOCK();
            *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
            UNLOCK();
            *(undefined1 *)(plVar3 + 1) = 1;
            local_98 = plVar15;
            plStack_60 = plVar3;
            local_58 = local_98;
            if ((char)piVar13[0x30b] == '\x01') {
              FUN_1403e1888(piVar13 + 4);
              *(undefined1 *)(piVar13 + 0x30b) = 0;
            }
            FUN_1403e1772(piVar13 + 4,&local_68);
            LOCK();
            piVar12 = (int *)((longlong)plVar15 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*plVar15 + 0x10))();
              plVar15 = local_98;
            }
            LOCK();
            plVar4 = plVar15 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar15)();
              LOCK();
              piVar12 = (int *)((longlong)local_98 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              plVar15 = local_98;
              if (*piVar12 == 0) {
                (**(code **)(*local_98 + 0x10))();
                plVar15 = local_98;
              }
            }
            if (((char)plVar3[1] == '\x01') &&
               (((char)plVar3[2] != '\x01' || (*(int *)((longlong)plVar3 + 0xc) != piVar13[0x30a])))
               ) {
              *(int *)((longlong)plVar3 + 0xc) = piVar13[0x30a];
              *(undefined1 *)(plVar3 + 2) = 1;
              (**(code **)(*plVar3 + 0x18))(plVar3);
              plVar15 = local_98;
            }
          }
          else if (*pcVar23 == '\x02') {
            piVar12 = (int *)(**(code **)(*plVar3 + 0x10))(plVar3);
            plVar15 = local_98;
            if ((longlong)*(int *)(lVar26 + 0x28) != 0) {
              piVar11 = *(int **)(lVar26 + 0x20);
              lVar20 = (longlong)*(int *)(lVar26 + 0x28) * 0xc30;
              do {
                if ((((*piVar11 == *piVar12) && (piVar11[1] == piVar12[1])) &&
                    (piVar11[2] == piVar12[2])) && (piVar11[3] == piVar12[3])) {
                  if (piVar11 != (int *)0x0) {
                    LOCK();
                    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                    UNLOCK();
                    piVar12 = piVar11 + 4;
                    LOCK();
                    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                    UNLOCK();
                    piVar13 = *(int **)(piVar11 + 0x304);
                    if (*(int **)(piVar11 + 0x304) == (int *)0x0) {
                      piVar13 = piVar12;
                    }
                    uVar18 = 0xffffffff;
                    local_78 = lVar26;
                    if ((longlong)piVar11[0x306] == 0) goto LAB_143e4d472;
                    piVar25 = piVar13 + (longlong)piVar11[0x306] * 6;
                    piVar19 = piVar13;
                    goto LAB_143e4d3f0;
                  }
                  break;
                }
                piVar11 = piVar11 + 0x30c;
                lVar20 = lVar20 + -0xc30;
              } while (lVar20 != 0);
            }
          }
        }
        goto LAB_143e4d506;
      }
      goto LAB_143e4d50c;
    }
    uVar18 = 0;
    goto LAB_143e4d61c;
  }
  goto LAB_143e4d63c;
  while (piVar19 = piVar19 + 6, piVar19 != piVar25) {
LAB_143e4d3f0:
    plVar4 = *(longlong **)(piVar19 + 4);
    if (plVar4 == (longlong *)0x0) {
LAB_143e4d428:
      plVar27 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar4[1];
      do {
        if (iVar10 == 0) goto LAB_143e4d428;
        LOCK();
        iVar9 = (int)plVar4[1];
        bVar28 = iVar10 == iVar9;
        if (bVar28) {
          *(int *)(plVar4 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar28);
      plVar27 = *(longlong **)(piVar19 + 2);
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        local_90 = piVar25;
        local_88 = piVar12;
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar15 = local_98;
        piVar12 = local_88;
        piVar25 = local_90;
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          plVar15 = local_98;
          piVar12 = local_88;
          piVar25 = local_90;
        }
      }
    }
    uVar18 = 0xffffffff;
    if (plVar27 == plVar3) {
      uVar18 = (ulonglong)
               (uint)((int)((ulonglong)((longlong)piVar19 - (longlong)piVar13) >> 3) * -0x55555555);
      break;
    }
  }
LAB_143e4d472:
  pcVar21 = local_80;
  LOCK();
  plVar3 = plVar15 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar15)();
    LOCK();
    piVar13 = (int *)((longlong)local_98 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    plVar15 = local_98;
    if (*piVar13 == 0) {
      (**(code **)(*local_98 + 0x10))();
      plVar15 = local_98;
    }
  }
  if ((-1 < (int)uVar18) && ((int)uVar18 < piVar11[0x306])) {
    piVar13 = *(int **)(piVar11 + 0x304);
    if (*(int **)(piVar11 + 0x304) == (int *)0x0) {
      piVar13 = piVar12;
    }
    plVar15 = *(longlong **)(piVar13 + uVar18 * 6 + 4);
    if (plVar15 != (longlong *)0x0) {
      iVar10 = (int)plVar15[1];
      do {
        if (iVar10 == 0) goto LAB_143e4d4e7;
        LOCK();
        iVar9 = (int)plVar15[1];
        bVar28 = iVar10 == iVar9;
        if (bVar28) {
          *(int *)(plVar15 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar28);
      if (*(longlong *)(piVar13 + uVar18 * 6 + 2) != 0) {
        *(undefined1 *)(*(longlong *)(piVar13 + uVar18 * 6 + 2) + 8) = 0;
      }
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar13 = (int *)((longlong)plVar15 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15,uVar18);
        }
      }
    }
LAB_143e4d4e7:
    FUN_1403e16b8(piVar12,uVar18);
    *(undefined1 *)(piVar11 + 0x30b) = 1;
    plVar15 = local_98;
  }
  LOCK();
  plVar3 = plVar15 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  lVar26 = local_78;
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar15)();
    LOCK();
    piVar12 = (int *)((longlong)local_98 + 0xc);
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    plVar15 = local_98;
    if (*piVar12 == 0) {
      (**(code **)(*local_98 + 0x10))();
      plVar15 = local_98;
    }
  }
LAB_143e4d506:
  LOCK();
  plVar3 = plVar15 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar15)();
    LOCK();
    piVar12 = (int *)((longlong)local_98 + 0xc);
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (*piVar12 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
LAB_143e4d50c:
  pcVar23 = pcVar23 + 0x18;
  if (pcVar23 == pcVar21) goto LAB_143e4d60f;
  goto LAB_143e4d154;
LAB_143e4d60f:
  uVar18 = (ulonglong)_DAT_14cb8c3d0 & 0xffffffff;
LAB_143e4d61c:
  FUN_14142a61b(DAT_14cb8c3c8,uVar18);
  uVar18 = (ulonglong)_DAT_14cb8c3d0 >> 0x20;
  _DAT_14cb8c3d0 = (longlong *)((ulonglong)_DAT_14cb8c3d0 & 0xffffffff00000000);
  if ((int)uVar18 != 0) {
    FUN_1418af8da();
  }
LAB_143e4d63c:
  LOCK();
  plVar15 = plVar22 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar22)(plVar22);
    LOCK();
    piVar12 = (int *)((longlong)plVar22 + 0xc);
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (*piVar12 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
LAB_143e4d659:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4d6fa FUN_143e4d6fa body=29 status=ok
// SIG undefined FUN_143e4d6fa(void)

undefined8 FUN_143e4d6fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4d71e FUN_143e4d71e body=29 status=ok
// SIG undefined FUN_143e4d71e(void)

undefined8 FUN_143e4d71e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4d8ba FUN_143e4d8ba body=99 status=ok
// SIG undefined FUN_143e4d8ba(void)

void FUN_143e4d8ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4302b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e4d91e FUN_143e4d91e body=99 status=ok
// SIG undefined FUN_143e4d91e(void)

void FUN_143e4d91e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4302b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e4d982 FUN_143e4d982 body=132 status=ok
// SIG undefined FUN_143e4d982(void)

void FUN_143e4d982(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4302b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e4d9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e4da10 FUN_143e4da10 body=269 status=ok
// SIG undefined FUN_143e4da10(void)

undefined8 FUN_143e4da10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e4db17;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e4db17;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e4db17:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e4dacb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e4db1e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143e4dacb;
    }
  }
  uVar6 = 0;
LAB_143e4dacb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4db1e FUN_143e4db1e body=91 status=ok
// SIG undefined FUN_143e4db1e(void)

void FUN_143e4db1e(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146562388(&local_20,*param_1,*(undefined4 *)(param_1 + 1));
  if (local_20 != 0) {
    FUN_1465620be(local_20 + 0x48,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4dbdc FUN_143e4dbdc body=107 status=ok
// SIG undefined FUN_143e4dbdc(void)

undefined8 * FUN_143e4dbdc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b430d60;
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  plVar3 = (longlong *)param_1[2];
  param_1 = param_1 + -9;
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
  FUN_140bef390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4dc48 FUN_143e4dc48 body=68 status=ok
// SIG undefined FUN_143e4dc48(void)

undefined8 * FUN_143e4dc48(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4303d0;
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



// FUNCTION 143e4dca8 FUN_143e4dca8 body=578 status=ok
// SIG undefined FUN_143e4dca8(void)

void FUN_143e4dca8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  uint local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_143e4df00();
  if ((lVar3 != 0) &&
     (lVar3 = FUN_140bfe17c(*(longlong *)(param_1 + 0x40) + 0xa8,lVar3), lVar3 != 0)) {
    iVar2 = *(int *)(param_1 + 0x4c);
    if ((iVar2 == 0) ||
       ((((uVar1 = *(uint *)(param_1 + 0x48), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)) ||
        ((*(int *)(lVar5 + 0x10) != iVar2 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))))) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      local_28 = *(undefined8 *)(lVar5 + 0x98);
      local_b0 = &local_38;
      local_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_30 = *(undefined8 *)(lVar5 + 0x90);
      local_48 = *(undefined8 *)(lVar5 + 0x80);
      local_b8 = &local_58;
      local_58 = *(undefined8 *)(lVar5 + 0x70);
      uStack_50 = *(undefined8 *)(lVar5 + 0x78);
      local_68 = *(undefined8 *)(lVar5 + 0x68);
      local_78 = *(undefined4 *)(lVar5 + 0x58);
      uStack_74 = *(undefined4 *)(lVar5 + 0x5c);
      uStack_70 = *(undefined4 *)(lVar5 + 0x60);
      uStack_6c = *(undefined4 *)(lVar5 + 100);
      local_90 = 0;
      local_a0 = 0;
      local_a8 = (uint)*(byte *)(lVar5 + 0x52);
      local_88 = 1;
      local_98 = 2;
      lVar3 = FUN_140e3e448(*(undefined8 *)(lVar5 + 0x38),lVar3,*(undefined8 *)(lVar5 + 0xa0));
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        goto LAB_143e4de3c;
      }
      uVar1 = *(uint *)(lVar3 + 0xc);
      *(uint *)(param_1 + 0x48) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar3 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar4;
        }
        *(int *)(param_1 + 0x4c) = iVar2;
        if (iVar2 == 0) goto LAB_143e4de3c;
      }
      else {
        *(int *)(param_1 + 0x4c) = iVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x48);
    if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
        ((*(int *)(lVar3 + 0x10) == iVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
    }
  }
LAB_143e4de3c:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4df00 FUN_143e4df00 body=352 status=ok
// SIG undefined FUN_143e4df00(void)

longlong FUN_143e4df00(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (((((*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) && (*(int *)(lVar2 + 0x1c) != 0)) &&
       (uVar1 = *(uint *)(lVar2 + 0x18), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
     ((*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0x1c) &&
      (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
       (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))(), lVar2 != 0)))))) {
    if (DAT_14cb5b388 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146431698;
      local_38 = &LAB_1486775cb;
      local_40 = &LAB_1464cee35;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) goto LAB_143e4df69;
  }
  lVar2 = 0;
LAB_143e4df69:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 143e4e07e FUN_143e4e07e body=91 status=ok
// SIG undefined FUN_143e4e07e(void)

void FUN_143e4e07e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b3ef590;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = *param_3;
  lVar1 = param_3[1];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf9;
  param_1[8] = param_4;
  *param_1 = &PTR_FUN_14b430590;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 143e4e0da FUN_143e4e0da body=466 status=ok
// SIG undefined FUN_143e4e0da(void)

void FUN_143e4e0da(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (((((*(longlong **)(lVar3 + 0x20) == (longlong *)0x0) || (*(int *)(lVar3 + 0x1c) == 0)) ||
       (uVar2 = *(uint *)(lVar3 + 0x18), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)))) ||
     ((*(int *)(lVar7 + 0x10) != *(int *)(lVar3 + 0x1c) ||
      (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
       (plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar3 + 0x20) + 8))(),
       plVar4 == (longlong *)0x0)))))) goto LAB_143e4e149;
  uVar5 = FUN_1407ca880();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
  if (plVar4 == (longlong *)0x0) goto LAB_143e4e149;
  uVar5 = FUN_1407ca880();
  plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
  if (plVar6 == (longlong *)0x0 || plVar4 == plVar6) goto LAB_143e4e149;
  uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
  local_98 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_90 = 1;
  FUN_14096dfee(uVar5,&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),1);
  plVar6 = local_80;
  *(undefined8 *)(param_1 + 0x48) = local_88;
  local_88 = 0;
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (local_80 == plVar4) {
LAB_143e4e25f:
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    local_80 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x50) = plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_143e4e25f;
    }
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
LAB_143e4e149:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e4e2ae FUN_143e4e2ae body=292 status=ok
// SIG undefined FUN_143e4e2ae(void)

void FUN_143e4e2ae(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 0x60);
  *(uint *)(lVar7 + 0x60) = iVar1 + 1U;
  if (*(uint *)(lVar7 + 100) < iVar1 + 1U) {
    FUN_1489a3948((longlong *)(lVar7 + 0x58),iVar1);
  }
  plVar9 = (longlong *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar7 + 0x58));
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar5 = FUN_145cd9fe6();
    lVar7 = FUN_14477b664(uVar5);
    param_2[1] = lVar7;
  }
  lVar6 = param_2[2];
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*param_2 == 0)) goto LAB_143e4e2ef;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_143e4e3ce:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_143e4e3ce;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,param_2);
  }
  param_2[2] = lVar6;
LAB_143e4e2ef:
  *plVar9 = lVar6;
  *(char *)(plVar9 + 1) = (char)param_2[3];
  plVar9[2] = 0;
  *(int *)(plVar9 + 3) = (int)param_2[6];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)plVar9 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)plVar9 + 0x24) = uVar5;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 2;
  plVar9[0xb] = 0;
  *(undefined1 *)(plVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar9 + 100) = 0;
  plVar9[0xe] = 0;
  plVar9[2] = 0;
  if (0 < *(int *)((longlong)param_2 + 0x2c)) {
    uVar4 = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar4 | 1L << (uVar8 & 0x3f);
      plVar9[2] = uVar4;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)*(int *)((longlong)param_2 + 0x2c));
  }
  return;
}



// FUNCTION 143e4e3ea FUN_143e4e3ea body=5 status=ok
// SIG undefined FUN_143e4e3ea(void)

longlong FUN_143e4e3ea(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143e4e3f0 FUN_143e4e3f0 body=12 status=ok
// SIG undefined FUN_143e4e3f0(void)

void FUN_143e4e3f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e4e3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e4e3fc FUN_143e4e3fc body=29 status=ok
// SIG undefined FUN_143e4e3fc(void)

undefined8 FUN_143e4e3fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4e41e FUN_143e4e41e body=83 status=ok
// SIG undefined FUN_143e4e41e(void)

undefined8 FUN_143e4e41e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143e4e4aa FUN_143e4e4aa body=292 status=ok
// SIG undefined FUN_143e4e4aa(void)

undefined8 FUN_143e4e4aa(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_3;
  local_40 = FUN_140c5f212;
  local_38 = 0;
  FUN_1418b00dc(&local_50,*param_2,&local_40);
  local_40 = (code *)0x0;
  local_38 = 0;
  FUN_1410295f8(&local_40,&local_50);
  FUN_140ec67c4(lVar1 + 0x10,param_1,&local_40);
  if (local_38 == 0) {
LAB_143e4e551:
    if (local_40 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_143e4e551;
  }
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143e4e59c;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e4e59c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4e5fa FUN_143e4e5fa body=29 status=ok
// SIG undefined FUN_143e4e5fa(void)

undefined8 FUN_143e4e5fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4e618 FUN_143e4e618 body=292 status=ok
// SIG undefined FUN_143e4e618(void)

undefined8 FUN_143e4e618(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_3;
  local_40 = FUN_140c5f212;
  local_38 = 0;
  FUN_1418b00dc(&local_50,*param_2,&local_40);
  local_40 = (code *)0x0;
  local_38 = 0;
  FUN_1410295f8(&local_40,&local_50);
  FUN_140ec67c4(lVar1 + 0x10,param_1,&local_40);
  if (local_38 == 0) {
LAB_143e4e6bf:
    if (local_40 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_143e4e6bf;
  }
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143e4e70a;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e4e70a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4e756 FUN_143e4e756 body=5 status=ok
// SIG undefined FUN_143e4e756(void)

longlong FUN_143e4e756(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143e4e75c FUN_143e4e75c body=12 status=ok
// SIG undefined FUN_143e4e75c(void)

void FUN_143e4e75c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e4e765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e4e768 FUN_143e4e768 body=29 status=ok
// SIG undefined FUN_143e4e768(void)

undefined8 FUN_143e4e768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4e785 FUN_143e4e785 body=27 status=ok
// SIG undefined FUN_143e4e785(void)

void FUN_143e4e785(longlong param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 143e4e7ce FUN_143e4e7ce body=68 status=ok
// SIG undefined FUN_143e4e7ce(void)

undefined8 * FUN_143e4e7ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430ad0;
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



// FUNCTION 143e4e812 FUN_143e4e812 body=91 status=ok
// SIG undefined FUN_143e4e812(void)

bool FUN_143e4e812(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143e4e842;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143e4e842:
  return lVar6 == param_2;
}



// FUNCTION 143e4e88a FUN_143e4e88a body=29 status=ok
// SIG undefined FUN_143e4e88a(void)

undefined8 FUN_143e4e88a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4ea26 FUN_143e4ea26 body=93 status=ok
// SIG undefined FUN_143e4ea26(void)

void FUN_143e4ea26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4ea84 FUN_143e4ea84 body=93 status=ok
// SIG undefined FUN_143e4ea84(void)

void FUN_143e4ea84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4eae2 FUN_143e4eae2 body=126 status=ok
// SIG undefined FUN_143e4eae2(void)

void FUN_143e4eae2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430bb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e4eb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e4eb6e FUN_143e4eb6e body=270 status=ok
// SIG undefined FUN_143e4eb6e(void)

undefined8 FUN_143e4eb6e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e4ec76;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e4ec76;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e4ec76:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e4ec2a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x158))();
      uVar6 = 1;
      goto LAB_143e4ec2a;
    }
  }
  uVar6 = 0;
LAB_143e4ec2a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4ec7e FUN_143e4ec7e body=29 status=ok
// SIG undefined FUN_143e4ec7e(void)

undefined8 FUN_143e4ec7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e4ee1a FUN_143e4ee1a body=93 status=ok
// SIG undefined FUN_143e4ee1a(void)

void FUN_143e4ee1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4ee78 FUN_143e4ee78 body=93 status=ok
// SIG undefined FUN_143e4ee78(void)

void FUN_143e4ee78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e4eed6 FUN_143e4eed6 body=126 status=ok
// SIG undefined FUN_143e4eed6(void)

void FUN_143e4eed6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430c20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e4ef45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e4ef62 FUN_143e4ef62 body=270 status=ok
// SIG undefined FUN_143e4ef62(void)

undefined8 FUN_143e4ef62(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e4f06a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e4f06a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e4f06a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e4f01e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x160))();
      uVar6 = 1;
      goto LAB_143e4f01e;
    }
  }
  uVar6 = 0;
LAB_143e4f01e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4f077 FUN_143e4f077 body=1958 status=ok
// SIG undefined FUN_143e4f077(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4f077(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb8c3c0 = (ulonglong)uVar2;
  DAT_14cb8c440 = 0;
  uRam000000014cb8c448 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e4d718;
  local_98 = &DAT_14011fc1e;
  FUN_1460fea54(&local_98);
  atexit((_func_5014 *)&LAB_143e47669);
  DAT_14cb8c530 = 0;
  uRam000000014cb8c538 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e4db7a;
  local_98 = &DAT_14011fc1e;
  FUN_1460ff1ea(&local_98);
  atexit((_func_5014 *)&LAB_143e47697);
  DAT_14cb8c620 = 0;
  uRam000000014cb8c628 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e4db80;
  local_98 = &DAT_14011fc1e;
  FUN_1460ff980(&local_98);
  atexit((_func_5014 *)&LAB_143e476c6);
  local_98 = "DmgSource";
  local_90 = 9;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6b0 = (ulonglong)uVar2;
  local_98 = "DmgCauser";
  local_90 = 9;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6b8 = (ulonglong)uVar2;
  local_98 = "DmgInstigator";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6c0 = (ulonglong)uVar2;
  local_98 = "DPS";
  local_90 = 3;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6c8 = (ulonglong)uVar2;
  local_98 = "Duration";
  local_90 = 8;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6d0 = (ulonglong)uVar2;
  local_98 = "Charge";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6d8 = (ulonglong)uVar2;
  local_98 = "Chance";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6e0 = (ulonglong)uVar2;
  local_98 = "MutChance";
  local_90 = 9;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6e8 = (ulonglong)uVar2;
  local_98 = "MutBonus";
  local_90 = 8;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6f0 = (ulonglong)uVar2;
  local_98 = "DmgSourceDef";
  local_90 = 0xc;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c6f8 = (ulonglong)uVar2;
  local_98 = "DmgTags";
  local_90 = 7;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c700 = (ulonglong)uVar2;
  DAT_14cb8c780 = 0;
  uRam000000014cb8c788 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e4db86;
  local_98 = &DAT_14011fc1e;
  FUN_146100116(&local_98);
  atexit((_func_5014 *)&LAB_143e47f72);
  _DAT_14cb8c810 = 0x47efffffe0000000;
  _DAT_14cb8c818 = 0x47efffffe0000000;
  _DAT_14cb8c820 = 0x47efffffe0000000;
  _DAT_14cb8c828 = 0x47efffffe0000000;
  _DAT_14cb8c830 = 0x47efffffe0000000;
  _DAT_14cb8c838 = 0x47efffffe0000000;
  _DAT_14cb8c840 = 0x47efffffe0000000;
  _DAT_14cb8c848 = 0x47efffffe0000000;
  local_98 = "bone";
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_98,&DAT_14cb8c850);
  if (cVar1 == '\0') {
    _DAT_14cb8c850 = 0;
    uRam000000014cb8c858 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb8c864 = 0;
  FUN_14052b5e0(&DAT_14cb8c860,"PlayerAwareness",0);
  _DAT_14cb8c870 = "PlayerAwareness";
  local_98 = "Passed";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c878 = (ulonglong)uVar2;
  local_98 = "Failed";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c880 = (ulonglong)uVar2;
  local_98 = "Passed";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c888 = (ulonglong)uVar2;
  local_98 = "Failed";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8c890 = (ulonglong)uVar2;
  _DAT_14cb8c8a0 = &LAB_143e48bcf;
  _DAT_14cb8c8a8 = 0x44368148;
  DAT_14cb8c8ac = 1;
  DAT_14cb8c898 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8c898;
  atexit((_func_5014 *)&LAB_143e48bd4);
  _DAT_14cb8c8c0 = &LAB_143e48c08;
  _DAT_14cb8c8c8 = 0x443681ec;
  DAT_14cb8c8cc = 1;
  DAT_14cb8c8b8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8c8b8;
  atexit((_func_5014 *)&LAB_143e48c0d);
  _DAT_14cb8c8e0 = &LAB_143e48c41;
  _DAT_14cb8c8e8 = 0x44368000;
  DAT_14cb8c8ec = 1;
  DAT_14cb8c8d8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8c8d8;
  atexit((_func_5014 *)&LAB_143e48c46);
  _DAT_14cb8c900 = &LAB_143e48c7a;
  _DAT_14cb8c908 = 0x443680a4;
  DAT_14cb8c90c = 1;
  DAT_14cb8c8f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8c8f8;
  atexit((_func_5014 *)&LAB_143e48c7f);
  FUN_1418aef54(&DAT_14cb8c918,3);
  atexit((_func_5014 *)&LAB_143e48cbe);
  FUN_1418aef54(&DAT_14cb8c928,4);
  atexit((_func_5014 *)&LAB_143e48ccf);
  FUN_1418aef54(&DAT_14cb8c938,5);
  atexit((_func_5014 *)&LAB_143e48ce0);
  FUN_1446f470e(&DAT_14cb8c960,L"GbxSwimming",1);
  FUN_1446f470e(&DAT_14cb8c968,L"MovementModeGbxSwimming",1);
  FUN_1446f470e(&DAT_14cb8c970,L"Climbing",1);
  FUN_1446f470e(&DAT_14cb8c978,L"MovementEffect_Idle_AtSurface",1);
  FUN_1446f470e(&DAT_14cb8c980,L"MovementEffect_Idle_Submerged",1);
  FUN_1446f470e(&DAT_14cb8c988,L"MovementEffect_Moving_AtSurface",1);
  FUN_1446f470e(&DAT_14cb8c990,L"MovementEffect_Moving_Submerged",1);
  FUN_1446f470e(&DAT_14cb8c998,L"default",1);
  _DAT_14cb8ca00 = &LAB_143e4ccba;
  _DAT_14cb8ca08 = 0x461e2400;
  DAT_14cb8ca0c = 1;
  DAT_14cb8c9f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8c9f8;
  atexit((_func_5014 *)&LAB_143e4ccbf);
  DAT_14cb8ca78 = 0;
  _DAT_14cb8ca80 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e4f072;
  local_98 = &DAT_14011fc1e;
  FUN_1461877de(&local_98);
  atexit((_func_5014 *)&LAB_143e4cd1c);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e4f820 FUN_143e4f820 body=41 status=ok
// SIG undefined FUN_143e4f820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4f820(void)

{
  _DAT_14cb8cb78 = 0;
  if (DAT_14cb8cb70 != 0) {
    FUN_1400020a8();
  }
  FUN_14619bde4();
  return;
}



// FUNCTION 143e4f84a FUN_143e4f84a body=211 status=ok
// SIG undefined FUN_143e4f84a(void)

undefined8 * FUN_143e4f84a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_143c2f32e(param_1,uVar1);
  *param_1 = &PTR_FUN_14b057680;
  param_1[0x7c] = &PTR_LAB_14b057cf0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ef) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x419) = 0;
  *(undefined8 *)((longlong)param_1 + 0x421) = 0;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x469) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  return param_1;
}



// FUNCTION 143e4f91e FUN_143e4f91e body=40 status=ok
// SIG undefined FUN_143e4f91e(void)

void FUN_143e4f91e(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 1000,param_1 + 0x3e0);
  return;
}



// FUNCTION 143e4f946 FUN_143e4f946 body=40 status=ok
// SIG undefined FUN_143e4f946(void)

void FUN_143e4f946(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1407c0b34(param_1 + 1000,param_1 + 0x3e0,param_1);
  return;
}



// FUNCTION 143e4f96e FUN_143e4f96e body=183 status=ok
// SIG undefined FUN_143e4f96e(void)

void FUN_143e4f96e(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 2) {
    FUN_1406ba688(param_2,2);
  }
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = (**(code **)(*(longlong *)(param_1 + -0x3e0) + 0x668))(param_1 + -0x3e0);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb8cba0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb8cba8;
  FUN_144976b9c((longlong)puVar2 + 0xc,*(undefined8 *)(param_1 + -0x14));
  return;
}



// FUNCTION 143e4fa26 FUN_143e4fa26 body=539 status=ok
// SIG undefined FUN_143e4fa26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4fa26(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar10 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar10 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(&local_38,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    unique0x00023e00 = local_38;
    uVar10 = local_38;
  }
  uVar9 = *param_2;
  if (uVar9 == uVar10) {
    plVar2 = (longlong *)(param_1 + -0x3e0);
    uVar4 = FUN_1407eda54(*param_3);
    *(undefined1 *)(param_1 + 0xe0) = uVar4;
    lVar7 = FUN_1447210f0(plVar2);
    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x155) & 0x20) == 0)) {
      uVar8 = FUN_1447210f0(plVar2);
      FUN_1404d1e78(&local_38,uVar8);
      if ((local_38 != 0) && ((local_30 != (longlong *)0x0 && (0 < (int)local_30[1])))) {
        cVar5 = (**(code **)(*plVar2 + 0x668))(plVar2);
        plVar11 = local_30;
        if (cVar5 == '\0') {
          if (local_30 == (longlong *)0x0) {
LAB_143e4fb7f:
            plVar11 = (longlong *)0x0;
          }
          else {
            iVar6 = (int)local_30[1];
            do {
              if (iVar6 == 0) goto LAB_143e4fb7f;
              LOCK();
              iVar3 = (int)local_30[1];
              bVar12 = iVar6 == iVar3;
              if (bVar12) {
                *(int *)(local_30 + 1) = iVar6 + 1;
                iVar3 = iVar6;
              }
              iVar6 = iVar3;
              UNLOCK();
            } while (!bVar12);
          }
          uVar10 = 0;
          if (plVar11 != (longlong *)0x0) {
            uVar10 = local_38;
          }
          FUN_143c2ef42(uVar10,plVar2);
        }
        else {
          if (local_30 == (longlong *)0x0) {
LAB_143e4fb66:
            plVar11 = (longlong *)0x0;
          }
          else {
            iVar6 = (int)local_30[1];
            do {
              if (iVar6 == 0) goto LAB_143e4fb66;
              LOCK();
              iVar3 = (int)local_30[1];
              bVar12 = iVar6 == iVar3;
              if (bVar12) {
                *(int *)(local_30 + 1) = iVar6 + 1;
                iVar3 = iVar6;
              }
              iVar6 = iVar3;
              UNLOCK();
            } while (!bVar12);
          }
          uVar10 = 0;
          if (plVar11 != (longlong *)0x0) {
            uVar10 = local_38;
          }
          FUN_143c2dc8e(uVar10,plVar2);
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
  }
  else {
    uVar10 = ram0x00014cb8cba4;
    if ((ram0x00014cb8cba4 == DAT_14c948034) &&
       (uVar10 = DAT_14c948034, (int)DAT_14cb8cba0 != DAT_14c948030)) {
      FUN_14011791e(&local_38,(int)DAT_14cb8cba0,ram0x00014cb8cba4 >> 0x20);
      unique0x00023e00 = local_38;
      uVar9 = *param_2;
      uVar10 = local_38;
    }
    if (uVar9 == uVar10) {
      *(undefined8 *)(param_1 + -0x14) = *param_3;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


